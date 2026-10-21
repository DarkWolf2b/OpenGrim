package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;

import net.minecraft.block.AirBlock;
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Hit Particles (registry sixtwo.dc): "Renders particles on hit".
 * Module id 90, category gh.nOCvV.
 *
 * <p>Decompile citation:
 * <ul>
 *   <li>Primary constructor &amp; settings tree: {@code analysis/decompiled/payload-decrypted/sixtwo/dc.java} lines 75–234.</li>
 *   <li>Pre-motion tick spawner {@code abY(gH.th)}: javap bytecode offsets 3424–3610. Drops expired particles
 *       ({@code DaBEE.removeIf(mq::clp)}), maps the Physics option index to {@code mp} (0 Fall, 1 Rise, 2 Burst,
 *       3 Fly), then for each world player (skip when Only Self and not self) with {@code hurtTime > 0} spawns
 *       {@code Amount} particles: position {@code (x, cpQ(y+height, y), z)}, velocity
 *       {@code (-Speed/50, cpQ(±Speed/50), cpQ(±Speed/50))}, plus the Scale, Time, Rotation Angle and
 *       Rotation Speed widgets ({@code mm} ctor, mm.java:53-59).</li>
 *   <li>Particle physics + expiry {@code mm.clp()}: javap bytecode offsets 0–757 (recovered 1:1 in
 *       {@link ParticleInstance#tick}); {@code mm.cls/clq/clr} (mm.java:88-97, 212-230) for the draw transform
 *       and the two passes.</li>
 *   <li>World render pass {@code abZ(go.sX)}: javap bytecode offsets 3248–3424 — style map to {@code mo},
 *       {@code jJ.bIA} visibility gate, {@code mq.clq} pass, optional glow pass {@code mq.clr}.</li>
 * </ul>
 *
 * <p>high-probability guess: the drawn billboard (a flat quad, 0.07-scaled, camera-facing, rotated by the
 * particle angle, plus a 2× glow quad) is a substitute for the original's textured {@code mo}-style sprites
 * and its post-process glow pass ({@code ob.cBv} texture id and {@code mo.clD()} identifiers unrecovered,
 * analysis/specs/casesafe/handlers/dc.md §Unrecovered). The {@code Time Before Disappear} ms factor ({@code ZRQxW}, mm.java:79) is
 * inferred 1000 from the setting's " s" suffix; the physics constants are exact bytecode literals.
 */
public class HitParticles extends Module {
	/** cA "Rotation Angle" UI-pair second value (0.0, 180.0). */
	private static final double ROTATION_ANGLE_ANCHOR = 180.0;
	/** cA "Rotation Speed" UI-pair second value (0.0, 60.0). */
	private static final double ROTATION_SPEED_ANCHOR = 60.0;

	private final ModeSetting particles = register(new ModeSetting("particles",
			List.of("Stars", "Snowflakes", "Ghost", "Hearts", "Diamonds", "Thunders", "Moons", "Clouds"), "Stars"));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, true));
	private final ModeSetting physics = register(new ModeSetting("physics",
			List.of("Fall", "Rise", "Burst", "Fly"), "Fall"));
	private final DoubleSetting scale = register(new DoubleSetting("scale", 0.01, 1.0, 10.0, 3.0, null));
	private final DoubleSetting speed = register(new DoubleSetting("speed", 0.01, 1.0, 15.0, 3.0, null));
	private final DoubleSetting amount = register(new DoubleSetting("amount", 1.0, 1.0, 5.0, 2.0, null));
	private final DoubleSetting timeBeforeDisappear = register(new DoubleSetting("time_before_disappear", 1.0, 1.0, 10.0, 3.0, " s"));
	private final BoolSetting onlySelf = register(new BoolSetting("only_self", false));
	private final DoubleSetting rotationAngle = register(new DoubleSetting("rotation_angle", 1.0, 0.0, 360.0, 0.0, " deg"));
	private final DoubleSetting rotationSpeed = register(new DoubleSetting("rotation_speed", 1.0, 0.0, 60.0, 0.0, " deg"));
	private final BoolSetting glow = register(new BoolSetting("glow", true));

	/**
	 * Particle instance matching sixtwo.mm/sixtwo.mq.
	 */
	public static class ParticleInstance {
		private Vec3d prevPos;
		private Vec3d pos;
		private Vec3d velocity;
		private final String physicsMode;
		private final float particleScale;
		private final long createdMs;
		private float angle;
		private final float rotSpeed;
		private boolean burstFired;

		public ParticleInstance(Vec3d pos, Vec3d velocity, String physicsMode, float particleScale,
				float initialAngle, float rotSpeed) {
			this.pos = pos;
			this.prevPos = pos;
			this.velocity = velocity;
			this.physicsMode = physicsMode;
			this.particleScale = particleScale;
			this.createdMs = System.currentTimeMillis();
			this.angle = initialAngle;
			this.rotSpeed = rotSpeed;
		}

		/**
		 * Per-tick physics + expiry (sixtwo.mm#clp, mm.java javap offsets 0-757),
		 * 1:1: prev = pos; pos += velocity; probe below at (x, y - scale/10, z)
		 * → bounce (x/1.1, -y/1.1, z/1.1) and skip the wall probes; otherwise
		 * eight horizontal probes at ±horizontalSpeed → negate x and z; then
		 * the physics-mode step (Fall -0.035y, Rise +0.035y, Burst one radial
		 * 0.3 impulse then Fall, Fly nothing) and a ×0.9950248599052429 drag.
		 * Returns true when {@code now - createdMs > timeTicks * 1000}.
		 */
		public boolean tick(MinecraftClient client, long now, long lifetimeMs) {
			prevPos = pos;
			pos = pos.add(velocity);
			double horizontal = velocity.horizontalLength();
			if (client.world != null && isSolid(client, pos.x, pos.y - particleScale / 10.0, pos.z)) {
				// Bytecode literals: 1.100000023841858 = (double) 1.1f.
				velocity = new Vec3d(velocity.x / 1.1f, -velocity.y / 1.1f, velocity.z / 1.1f);
			} else if (client.world != null && (isSolid(client, pos.x - horizontal, pos.y, pos.z - horizontal)
					|| isSolid(client, pos.x + horizontal, pos.y, pos.z - horizontal)
					|| isSolid(client, pos.x + horizontal, pos.y, pos.z + horizontal)
					|| isSolid(client, pos.x - horizontal, pos.y, pos.z + horizontal)
					|| isSolid(client, pos.x + horizontal, pos.y, pos.z)
					|| isSolid(client, pos.x - horizontal, pos.y, pos.z)
					|| isSolid(client, pos.x, pos.y, pos.z + horizontal)
					|| isSolid(client, pos.x, pos.y, pos.z - horizontal))) {
				velocity = new Vec3d(-velocity.x, velocity.y, -velocity.z);
			}
			switch (physicsMode) {
				// 0.03500000014901161 = (double) 0.035f.
				case "Fall" -> velocity = velocity.subtract(0.0, 0.035f, 0.0);
				case "Rise" -> velocity = velocity.add(0.0, 0.035f, 0.0);
				case "Burst" -> {
					if (!burstFired) {
						double theta = Math.random() * 2.0 * Math.PI;
						velocity = new Vec3d(0.3f * Math.cos(theta),
								0.3f * (0.8 + Math.random() * 0.2),
								0.3f * Math.sin(theta));
						burstFired = true;
					} else {
						velocity = velocity.subtract(0.0, 0.035f, 0.0);
					}
				}
				default -> {
				}
			}
			velocity = velocity.multiply(0.9950248599052429);
			return now - createdMs > lifetimeMs;
		}

		/**
		 * mm.cls angle advance (mm.java:95): {@code angle += tickDelta * rotSpeed}.
		 * The original advances inside the transform, so it runs once per draw
		 * call — twice per frame when the glow pass draws (clq + clr).
		 */
		public float advanceAngle(float tickDelta) {
			angle += tickDelta * rotSpeed;
			return angle;
		}

		public Vec3d getLerpedPos(float delta) {
			double lx = MathHelper.lerp(delta, prevPos.x, pos.x);
			double ly = MathHelper.lerp(delta, prevPos.y, pos.y);
			double lz = MathHelper.lerp(delta, prevPos.z, pos.z);
			return new Vec3d(lx, ly, lz);
		}

		public Vec3d getPos() {
			return pos;
		}

		public long getCreatedMs() {
			return createdMs;
		}

		public float getParticleScale() {
			return particleScale;
		}

		public float getAngle() {
			return angle;
		}
	}

	/** mm.clt (mm.java:103-159): solid = not air, not water, not lava. */
	private static boolean isSolid(MinecraftClient client, double x, double y, double z) {
		if (client.world == null) {
			return false;
		}
		Block block = client.world.getBlockState(BlockPos.ofFloored(x, y, z)).getBlock();
		return !(block instanceof AirBlock) && block != Blocks.WATER && block != Blocks.LAVA;
	}

	private final List<ParticleInstance> particlesList = new ArrayList<>();

	public HitParticles() {
		super("hit_particles", "Hit Particles", "Renders particles on hit", ModuleCategory.VISUALS);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			particlesList.clear();
			return;
		}

		long now = System.currentTimeMillis();
		// Time.VC() (int) * ZRQxW (mm.java:79; inferred 1000 = ms/s from the
		// " s" suffix).
		long lifetimeMs = timeBeforeDisappear.getValue().intValue() * 1000L;
		// abY step 1: DaBEE.removeIf(mq::clp) — physics + expiry in one pass.
		particlesList.removeIf(p -> p.tick(client, now, lifetimeMs));

		// abY step 3: hurtTime > 0 players spawn Amount particles per hurt tick.
		for (AbstractClientPlayerEntity player : client.world.getPlayers()) {
			if (onlySelf.getValue() && player != client.player) {
				continue;
			}
			if (player.hurtTime <= 0) {
				continue;
			}
			int count = amount.getValue().intValue();
			double sp = speed.getValue().doubleValue() / 50.0;
			for (int i = 0; i < count; i++) {
				// cpQ(y + height, y): uniform vertical sample across the hitbox.
				double py = player.getY() + Math.random() * player.getHeight();
				Vec3d spawnPos = new Vec3d(player.getX(), py, player.getZ());
				Vec3d spawnVel = new Vec3d(-sp,
						(Math.random() * 2.0 - 1.0) * sp,
						(Math.random() * 2.0 - 1.0) * sp);
				particlesList.add(new ParticleInstance(spawnPos, spawnVel, physics.getValue(),
						scale.getValue().floatValue(),
						(float) drawRange(rotationAngle.getValue().doubleValue(), ROTATION_ANGLE_ANCHOR),
						(float) drawRange(rotationSpeed.getValue().doubleValue(), ROTATION_SPEED_ANCHOR)));
			}
		}
	}

	/**
	 * cA draw (mm ctor mm.java:57-58, {@code UN()} → {@code mU.cpP} uniform):
	 * repo single-slider convention — sample between the slider (left handle)
	 * and the fixed UI-pair anchor.
	 */
	private static double drawRange(double left, double anchor) {
		double right = Math.max(left, anchor);
		if (right <= left) {
			return left;
		}
		return ThreadLocalRandom.current().nextDouble(left, right);
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || particlesList.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}

		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		float delta = MinecraftClient.getInstance().getRenderTickCounter().getTickProgress(true);

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);

			float r = color.redF();
			float g = color.greenF();
			float b = color.blueF();
			float a = color.alphaF();

			VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());

			// abZ step 3: jJ.bIA visibility over the interpolated positions
			// (Trails point-box convention; a null captured frustum renders).
			Frustum frustum = client.worldRenderer.getCapturedFrustum();

			for (ParticleInstance p : particlesList) {
				Vec3d renderPos = p.getLerpedPos(delta);
				if (frustum != null && !frustum.isVisible(new Box(
						renderPos.x - 0.5, renderPos.y - 0.5, renderPos.z - 0.5,
						renderPos.x + 0.5, renderPos.y + 0.5, renderPos.z + 0.5))) {
					continue;
				}
				float sz = p.getParticleScale() * 0.07f;
				float half = sz / 2.0f;

				// mq.clq pass (mm.java:224-230): cls transform, h-sized quad.
				matrices.push();
				try {
					matrices.translate(renderPos.x, renderPos.y, renderPos.z);
					matrices.multiply(event.camera().getRotation());
					matrices.multiply(RotationAxis.POSITIVE_Z.rotationDegrees(p.advanceAngle(delta)));
					drawBillboardQuad(matrices.peek(), vc, -half, -half, half, half, r, g, b, a);
				} finally {
					matrices.pop();
				}

				if (glow.getValue()) {
					// mq.clr glow pass (mm.java:212-222): re-enters cls (the angle
					// advances a second time) and draws a 2× quad in the same color.
					matrices.push();
					try {
						matrices.translate(renderPos.x, renderPos.y, renderPos.z);
						matrices.multiply(event.camera().getRotation());
						matrices.multiply(RotationAxis.POSITIVE_Z.rotationDegrees(p.advanceAngle(delta)));
						drawBillboardQuad(matrices.peek(), vc, -sz, -sz, sz, sz, r, g, b, a);
					} finally {
						matrices.pop();
					}
				}
			}
		} finally {
			matrices.pop();
		}
	}

	private static void drawBillboardQuad(MatrixStack.Entry entry, VertexConsumer vc,
			float minX, float minY, float maxX, float maxY, float r, float g, float b, float a) {
		vc.vertex(entry, minX, minY, 0.0f).color(r, g, b, a);
		vc.vertex(entry, maxX, minY, 0.0f).color(r, g, b, a);
		vc.vertex(entry, maxX, maxY, 0.0f).color(r, g, b, a);
		vc.vertex(entry, minX, maxY, 0.0f).color(r, g, b, a);
	}

	@Override
	public void onDisable() {
		particlesList.clear();
	}

	public List<ParticleInstance> getParticles() {
		return List.copyOf(particlesList);
	}

	public String getParticleStyle() {
		return particles.getValue();
	}

	public String getPhysicsMode() {
		return physics.getValue();
	}

	public int getColor() {
		return color.getValue();
	}

	public boolean isTypeEnabled(String type) {
		return particles.getValue().equalsIgnoreCase(type);
	}
}
