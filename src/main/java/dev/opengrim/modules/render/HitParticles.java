package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;

import net.minecraft.block.AirBlock;
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.Identifier;
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
 * <p>Draw path recovered 1:1 from {@code mm.cls/clq/clr} (mm.java:88-230) and {@code mo}
 * (mo.java:205-213, 224-226):
 * <ul>
 *   <li>{@code mm.cls}: translate {@code pos - camera} ({@code jI.bIs}), scale 0.07, translate
 *       {@code +Scale/2} on all axes ({@code jI.bIt}), billboard
 *       {@code RotationAxis.Y(-cameraYaw) * RotationAxis.X(cameraPitch)} ({@code jI.bIu}),
 *       {@code RotationAxis.Z(angle += tickDelta * rotSpeed)}, translate {@code -Scale/2}.</li>
 *   <li>{@code mm.clq}: push, {@code cls}, quad {@code (0,0)} size {@code Scale×Scale},
 *       tinted by the Color setting, pop.</li>
 *   <li>{@code mm.clr} (Glow): push, {@code cls} again (so the angle advances a second time),
 *       quad offset {@code (Scale-2Scale)/2 = -Scale/2} size {@code 2Scale×2Scale}, same tint,
 *       pop. The original flushes the core batch, swaps to {@code ob.cBv(glow)}, then draws
 *       this pass; the rebuild emits the core layer first and the glow layer second.</li>
 * </ul>
 *
 * <p>The eight {@code mo} enum textures are the recovered raster assets
 * ({@code analysis/decompiled/bootstrap/offline/assets/raster-assets.bin}, keys
 * {@code star}, {@code snowflake}, {@code ghosts}, {@code heart}, {@code diamond},
 * {@code thunder}, {@code moon}, {@code cloud}); the Glow pass uses the recovered
 * {@code glow} sprite. They ship under
 * {@code assets/opengrim/textures/particles/} and are registered through
 * {@link ParticleTextures}, then bound with
 * {@code RenderLayers.entityTranslucent} (no cull, translucent, LEQUAL depth — the
 * original batch state {@code kM.defaultState().bVG(LEQUAL_DEPTH_TEST)}). Sprites are
 * pure-white alpha masks, so the Color setting tints them directly, and V is mapped
 * with 0 at the top like vanilla billboards.
 *
 * <p>[G] The assignment mode→sprite follows the recovered asset names and the
 * {@code abZ} mode index order; the {@code mo} DES plaintexts themselves remain
 * unrecovered (mo.java:205-212). [G] The original's post-process bloom is replaced by
 * the original 2× glow pass drawn with the recovered {@code glow} texture; the
 * repository's bloom shaders are screen-space post effects with no world-render hook.
 * [U] The {@code Time Before Disappear} ms factor ({@code ZRQxW}, mm.java:79) is
 * inferred 1000 from the setting's " s" suffix; the physics constants are exact
 * bytecode literals.
 */
public class HitParticles extends Module {
	/** cA "Rotation Angle" UI-pair second value (0.0, 180.0). */
	private static final double ROTATION_ANGLE_ANCHOR = 180.0;
	/** cA "Rotation Speed" UI-pair second value (0.0, 60.0). */
	private static final double ROTATION_SPEED_ANCHOR = 60.0;

	/**
	 * mo enum texture order matching the abZ mode index (Stars … Clouds):
	 * {@code mo.TcnVB, KePbo, Vflfx, bkxjV, kbKRO, mDCeI, KyziQ, KyHOi}
	 * (dc.java:231; draw order dc handlers spec §Runtime model step 1).
	 */
	private static final String[] SPRITE_KEYS = {
			"star", "snowflake", "ghosts", "heart", "diamond", "thunder", "moon", "cloud"
	};
	/** {@code ob.cBv(...)} for mm.clr's glow pass (asset key recovered as {@code glow}). */
	private static final String GLOW_KEY = "glow";
	/** Full-bright light, matching the original kM batch default (Circle ESP convention). */
	private static final int FULL_BRIGHT = 0xF000F0;

	/** The mo enum loads all textures at class init in the original. */
	private static boolean texturesLoaded;

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
		// ob.cBv loads the mo enum textures at class init; register them on the
		// client thread outside the render pass (Circle ESP convention).
		loadTextures();
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

	/**
	 * abZ(go.sX), dc handlers spec §Runtime model step 2-5:
	 * <ol>
	 *   <li>map the Particles index to an {@code mo} style texture and start the batch with
	 *       {@code kM.defaultState().bVG(LEQUAL_DEPTH_TEST)};</li>
	 *   <li>visibility-gate each particle at its interpolated position ({@code jJ.bIA});</li>
	 *   <li>draw every core billboard ({@code mq.clq});</li>
	 *   <li>if Glow: flush, swap to the glow texture and draw every 2× glow billboard
	 *       ({@code mq.clr});</li>
	 *   <li>end the batch.</li>
	 * </ol>
	 * The rebuild's {@link VertexConsumerProvider} flushes each requested layer in
	 * creation order, so requesting the core layer first and the glow layer second is
	 * the equivalent of the original flush + {@code swapTexture} (both are
	 * {@link RenderLayers#entityTranslucent} = no cull, translucent, LEQUAL depth).
	 */
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
		Camera camera = event.camera();
		Vec3d cam = camera.getCameraPos();
		float delta = client.getRenderTickCounter().getTickProgress(true);
		int argb = color.getValue();

		Identifier sprite = spriteForKey(SPRITE_KEYS[Math.max(0,
				Math.min(SPRITE_KEYS.length - 1, particles.getModes().indexOf(particles.getValue())))]);
		if (sprite == null) {
			return;
		}

		// abZ step 3: jJ.bIA over the interpolated positions (point box ±0.5).
		Frustum frustum = client.worldRenderer.getCapturedFrustum();

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);

			// abZ step 4a: core pass on the style texture (mq.clq, mm.java:224-230).
			VertexConsumer core = consumers.getBuffer(RenderLayers.entityTranslucent(sprite));
			for (ParticleInstance p : particlesList) {
				Vec3d renderPos = p.getLerpedPos(delta);
				if (!isVisible(frustum, renderPos)) {
					continue;
				}
				drawBillboard(matrices, core, camera, renderPos, p, delta, 1.0f, argb);
			}

			// abZ step 4b: glow pass after the texture swap (mq.clr, mm.java:212-222).
			if (glow.getValue()) {
				Identifier glowSprite = spriteForKey(GLOW_KEY);
				if (glowSprite != null) {
					VertexConsumer glowConsumer = consumers.getBuffer(RenderLayers.entityTranslucent(glowSprite));
					for (ParticleInstance p : particlesList) {
						Vec3d renderPos = p.getLerpedPos(delta);
						if (!isVisible(frustum, renderPos)) {
							continue;
						}
						drawBillboard(matrices, glowConsumer, camera, renderPos, p, delta, 2.0f, argb);
					}
				}
			}
		} finally {
			matrices.pop();
		}
	}

	/** jJ.bIA: box ±0.5 around the point; a null captured frustum renders. */
	private static boolean isVisible(Frustum frustum, Vec3d pos) {
		return frustum == null || frustum.isVisible(new Box(
				pos.x - 0.5, pos.y - 0.5, pos.z - 0.5,
				pos.x + 0.5, pos.y + 0.5, pos.z + 0.5));
	}

	/**
	 * mm.cls (mm.java:88-97) + mm.clq/clr quad. {@code sizeFactor} 1 = core
	 * (0,0,Scale,Scale), 2 = glow ((Scale-2Scale)/2, (Scale-2Scale)/2, 2Scale, 2Scale).
	 * {@code angle += tickDelta * rotSpeed} runs inside the transform, so the glow pass
	 * advances the angle a second time (the original cls is called once per pass).
	 */
	private static void drawBillboard(MatrixStack matrices, VertexConsumer vc, Camera camera,
			Vec3d pos, ParticleInstance p, float delta, float sizeFactor, int argb) {
		float h = p.getParticleScale();
		float size = h * sizeFactor;
		float offset = (h - size) / 2.0f;

		matrices.push();
		try {
			// jI.bIs: the outer translate already removed the camera position.
			matrices.translate(pos.x, pos.y, pos.z);
			matrices.scale(0.07f, 0.07f, 0.07f);              // cls: float f3 = 0.07f
			matrices.translate(h / 2.0, h / 2.0, h / 2.0);    // jI.bIt(stack, hMiLh / 2.0f)
			// jI.bIu: Y(-yaw) then X(pitch).
			matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(-camera.getYaw()));
			matrices.multiply(RotationAxis.POSITIVE_X.rotationDegrees(camera.getPitch()));
			matrices.multiply(RotationAxis.POSITIVE_Z.rotationDegrees(p.advanceAngle(delta)));
			matrices.translate(-h / 2.0, -h / 2.0, -h / 2.0); // jI.bIt(stack, -hMiLh / 2.0f)

			quad(matrices.peek(), vc, offset, offset, size, size, argb);
		} finally {
			matrices.pop();
		}
	}

	/** kG.bTv(stack, x, y, 0, w, h), textured full-sprite (V=0 = top). */
	private static void quad(MatrixStack.Entry entry, VertexConsumer vc,
			float x, float y, float width, float height, int argb) {
		float x1 = x + width;
		float y1 = y + height;
		vc.vertex(entry, x, y, 0.0f).color(argb).texture(0.0f, 1.0f)
				.overlay(OverlayTexture.DEFAULT_UV).light(FULL_BRIGHT).normal(entry, 0.0f, 0.0f, 1.0f);
		vc.vertex(entry, x1, y, 0.0f).color(argb).texture(1.0f, 1.0f)
				.overlay(OverlayTexture.DEFAULT_UV).light(FULL_BRIGHT).normal(entry, 0.0f, 0.0f, 1.0f);
		vc.vertex(entry, x1, y1, 0.0f).color(argb).texture(1.0f, 0.0f)
				.overlay(OverlayTexture.DEFAULT_UV).light(FULL_BRIGHT).normal(entry, 0.0f, 0.0f, 1.0f);
		vc.vertex(entry, x, y1, 0.0f).color(argb).texture(0.0f, 0.0f)
				.overlay(OverlayTexture.DEFAULT_UV).light(FULL_BRIGHT).normal(entry, 0.0f, 0.0f, 1.0f);
	}

	/** {@code ob.cBv(String)}: register all eight style sprites plus glow on first tick. */
	private static void loadTextures() {
		if (texturesLoaded) {
			return;
		}
		ParticleTextures.preload(SPRITE_KEYS);
		ParticleTextures.preload(GLOW_KEY);
		texturesLoaded = true;
	}

	private static Identifier spriteForKey(String key) {
		return ParticleTextures.get(key);
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
