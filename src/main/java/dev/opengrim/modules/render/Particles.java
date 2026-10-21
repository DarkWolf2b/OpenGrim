package dev.opengrim.modules.render;

import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ThreadLocalRandom;

import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.entity.projectile.TridentEntity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Quaternionf;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Particles (registry sixtwo.cR): "Renders particles in the world".
 *
 * <p>Port of sixtwo.cR (analysis/decompiled/payload-decrypted/sixtwo/cR.java lines 111-886;
 * particle model sixtwo.mn — analysis/decompiled/casesafe/payload-named/sixtwo/mn.java;
 * base sixtwo.mq — mq.java; spec analysis/specs/handlers/cR.md and modules/cR.md; raw classes
 * verified with javap on analysis/decompiled/jar-casesafe/sixtwo/cR_.class and mn.class).
 *
 * <p>Settings (cR.java:111-274, ct/cu single-select groups, cv/cw multi-select, cC builders):
 * <ul>
 *   <li>"Particles" (cR.java:124-175) — one-of Stars (index 0, default) / Snowflakes / Ghost /
 *       Hearts / Diamonds / Thunders / Moons / Clouds</li>
 *   <li>"Color" (cR.java:176, default white) — RGB used for the quads; the original replaces the
 *       alpha component with {@code 255 * fade * 0.4} at draw time (mn.java:249/283)</li>
 *   <li>"Physics" (cR.java:185-187) — one-of Fly (index 0, default) / Drop; only affects the
 *       spawn velocity (cR.java:450/559/701/721), never the particle integration</li>
 *   <li>"Scale" (cR.java:188) — step 0.01, min 1.0, max 10.0, default 3.0</li>
 *   <li>"Amount" (cR.java:196) — step 10.0, min 20.0, max 800.0, default 200.0</li>
 *   <li>"Add on" (cR.java:204-266) — multi-select Idle (default on, cw.Tz() at cR.java:205),
 *       Movement, Pearl Throw, Arrow Shot, Trident Throw, Totem Pop</li>
 *   <li>"Glow" (cR.java:267) — boolean, default true</li>
 * </ul>
 *
 * <p>Behavior:
 * <ul>
 *   <li>{@code YR} (cR.java:385-460): totem-pop status packet (status 35 =
 *       {@code EntityStatuses.USE_TOTEM_OF_UNDYING}; DES slot 14841 is not in the decrypted dump,
 *       cross-checked with the ported AutoDoubleHand module) spawns a burst of
 *       {@code slot 7599} particles around the entity. The "Totem Pop" add-on is never read
 *       (cR.java never references {@code hQcMD}) — kept 1:1 as an inert setting.</li>
 *   <li>{@code YQ} (cR.java:506-729): per tick — expire/advance particles, then for every world
 *       entity spawn on EnderPearl (Pearl Throw), Trident (Trident Throw, airborne) and
 *       PersistentProjectile (Arrow Shot, airborne) as three independent checks (a trident can
 *       match both, cR.java:573-657); then fill up to "Amount" around the player when Idle is on
 *       (cR.java:676-713) and spawn once on movement when {@code iX.bxS() > 0.1}
 *       (cR.java:715-728).</li>
 *   <li>{@code YS}/{@code YT} (cR.java:737-799 + the failed-to-decompile render shell):
 *       per-frame draw — every live particle is billboarded at its interpolated position with
 *       alpha {@code 255 * fade * 0.4} (mn.java:261-287); with Glow on the batch is flushed and
 *       the same set is drawn a second time at 2x size (mn.java:247-258).</li>
 *   <li>{@code YP} (cR.java:472-474): the disconnect event clears the list; {@code YO}
 *       (cR.java:869-872) clears on unregister.</li>
 * </ul>
 *
 * <p>Particle integration (mn.clp, verified against the bytecode of mn.class): prev = pos;
 * pos += velocity; velocity = velocity * (0.9, physics == qIoJG ? 0.9 : 1.0, 1.0) + (0, -0.001, 0).
 * The module always constructs {@code mp.qIoJG} particles (cR.java:456/668/711/727), so the
 * vertical damping is the 0.9 branch; removal happens when the particle timer exceeds the
 * random lifetime and then the fade animation (rk) reaches 0.
 *
 * <p>Known gaps / divergences (documented, not guessed):
 * <ul>
 *   <li>The original's particle textures (mo style enum) and its private pipelines are not
 *       available — this port draws untinted billboard quads through
 *       {@link RenderLayers#debugFilledBox()} and approximates the glow pass with a 2x quad.</li>
 *   <li>The DES constants not present in analysis/decrypted/full-dump.jsonl: burst count
 *       (slot 7599 — 16 used here, [G]), particle lifetime range (mn constructor slot 45/31570 —
 *       1000..3000 ms used here, [G]) and the rk fade duration (slot 15236 — 200 ms used here,
 *       [G]).</li>
 *   <li>The frustum visibility gate {@code jJ.bIA} (cR.java:751) is wired through
 *       {@code worldRenderer.getCapturedFrustum()} (Trails convention).</li>
 *   <li>The original fires its render event ({@code go$sX}) right after the sky pass
 *       (bootstrap WorldRenderEventBridgeMixin.java:74-109); {@code AFTER_ENTITIES} is the
 *       closest phase available here.</li>
 *   <li>Thread-safety hardening: the original's particle list is a plain {@code ArrayList}
 *       (cR.java:268, bytecode-verified) mutated from its receive handler; both clients
 *       dispatch that handler on the netty thread (bootstrap {@code ConnectionEventBridgeMixin}
 *       injects {@code ClientConnection.handlePacket} HEAD, called inline from
 *       {@code channelRead0}), so the original carries the same latent concurrent-modification
 *       race. This port keeps the same shape but uses a {@code CopyOnWriteArrayList} — the
 *       thread-safe pattern the original itself chose for the identically-dispatched
 *       cZ/Soul Effects ({@code CopyOnWriteArrayList}/{@code ConcurrentHashMap}, cZ_.java:208-209).</li>
 * </ul>
 */
public class Particles extends Module {
	/** EntityStatuses.USE_TOTEM_OF_UNDYING — slot 14841 (unrecovered), cross-checked. */
	private static final int TOTEM_STATUS = 35;
	/** Burst particle count — slot 7599 (unrecovered). [G] high-probability guess. */
	private static final int TOTEM_BURST_COUNT = 16;
	/** mn lifetime range — slots 45/31570 (unrecovered). [G] high-probability guess. */
	private static final int LIFETIME_MIN_MS = 1000;
	private static final int LIFETIME_MAX_MS = 3000;
	/** rk fade duration — slot 15236 (unrecovered). [G] high-probability guess. */
	private static final int FADE_DURATION_MS = 200;

	private final ModeSetting style = register(new ModeSetting("particles",
			List.of("Stars", "Snowflakes", "Ghost", "Hearts", "Diamonds", "Thunders", "Moons", "Clouds"), "Stars"));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF));
	private final ModeSetting physics = register(new ModeSetting("physics", List.of("Fly", "Drop"), "Fly"));
	private final DoubleSetting scale = register(new DoubleSetting("scale", 0.01, 1.0, 10.0, 3.0, null));
	private final DoubleSetting amount = register(new DoubleSetting("amount", 10.0, 20.0, 800.0, 200.0, null));

	private final GroupSetting addOn = register(new GroupSetting("add_on"));
	private final BoolSetting idle = boolIn(addOn, "idle", true);
	private final BoolSetting movement = boolIn(addOn, "movement", false);
	private final BoolSetting pearlThrow = boolIn(addOn, "pearl_throw", false);
	private final BoolSetting arrowShot = boolIn(addOn, "arrow_shot", false);
	private final BoolSetting tridentThrow = boolIn(addOn, "trident_throw", false);
	/** Declared and built by the original but never consulted (cR.java:266) — kept 1:1. */
	private final BoolSetting totemPop = boolIn(addOn, "totem_pop", false);

	private final BoolSetting glow = register(new BoolSetting("glow", true));

	/**
	 * Live particles. Deliberate hardening divergence: the original's
	 * {@code ImFtb} is a plain {@code ArrayList} (cR.java:268, bytecode-verified)
	 * mutated from its receive handler, which both clients dispatch on the netty
	 * thread — this port uses a {@code CopyOnWriteArrayList}, the pattern the
	 * original itself chose for the identically-dispatched cZ/Soul Effects
	 * (cZ_.java:208-209). See the class javadoc.
	 */
	private final List<ParticleInstance> activeParticles = new CopyOnWriteArrayList<>();

	public Particles() {
		super("particles", "Particles", "Renders particles in the world", ModuleCategory.VISUALS);
	}

	private static BoolSetting boolIn(GroupSetting group, String id, boolean defaultValue) {
		BoolSetting setting = new BoolSetting(id, defaultValue);
		group.add(setting);
		return setting;
	}

	private boolean drop() {
		return "Drop".equals(physics.getValue());
	}

	/** YU (cR.java:380-382) — random velocity via mU.cpQ(-0.03, 0.03)^3. */
	private static Vec3d randomVelocity() {
		return new Vec3d(randomFloat(-0.03f, 0.03f), randomFloat(-0.03f, 0.03f), randomFloat(-0.03f, 0.03f));
	}

	private static float randomFloat(float min, float max) {
		return ThreadLocalRandom.current().nextFloat() * (max - min) + min;
	}

	/** YR (cR.java:385-460) — totem-pop burst. */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!isEnabled()) {
			return;
		}
		Packet<?> packet = event.packet();
		if (!(packet instanceof EntityStatusS2CPacket statusPacket)) {
			return;
		}
		if (statusPacket.getStatus() != TOTEM_STATUS) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}
		Entity entity = statusPacket.getEntity(client.world);
		if (entity == null) {
			return;
		}
		boolean isDrop = drop();
		float particleScale = scale.getValue().floatValue();
		for (int i = 0; i < TOTEM_BURST_COUNT; i++) {
			Vec3d pos = new Vec3d(
					entity.getX() + randomFloat(-0.2f, 0.2f),
					entity.getY() + randomFloat(0.0f, entity.getHeight()),
					entity.getZ() + randomFloat(-0.2f, 0.2f));
			Vec3d vel = isDrop ? new Vec3d(0.0, randomFloat(-0.2f, -0.05f), 0.0) : randomVelocity();
			activeParticles.add(new ParticleInstance(pos, vel, particleScale));
		}
	}

	/** YQ (cR.java:506-729) — spawner + particle advance. */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null) {
			activeParticles.clear();
			return;
		}

		activeParticles.removeIf(ParticleInstance::tick);

		boolean isDrop = drop();
		float particleScale = scale.getValue().floatValue();

		for (Entity entity : client.world.getEntities()) {
			Vec3d pos = entity.getEntityPos();
			Vec3d vel = isDrop ? new Vec3d(0.0, randomFloat(-0.2f, -0.05f), 0.0) : randomVelocity();
			boolean spawn = false;
			if (entity instanceof EnderPearlEntity && pearlThrow.getValue()) {
				spawn = true;
			}
			if (entity instanceof TridentEntity trident && tridentThrow.getValue() && !trident.isOnGround()) {
				spawn = true;
			}
			if (entity instanceof PersistentProjectileEntity projectile && arrowShot.getValue() && !projectile.isOnGround()) {
				spawn = true;
			}
			if (spawn) {
				activeParticles.add(new ParticleInstance(pos, vel, particleScale));
			}
		}

		if (idle.getValue()) {
			float ground = (float) groundDistance(player);
			for (int i = activeParticles.size(); i < amount.getValue().intValue(); i++) {
				Vec3d pos = new Vec3d(
						player.getX() + randomFloat(-20.0f, 20.0f),
						player.getY() + randomFloat(Math.max(-ground, -20.0f), 20.0f),
						player.getZ() + randomFloat(-20.0f, 20.0f));
				Vec3d vel = isDrop ? new Vec3d(0.0, randomFloat(-0.2f, -0.05f), 0.0) : randomVelocity();
				activeParticles.add(new ParticleInstance(pos, vel, particleScale));
			}
		}

		if (movement.getValue() && speed() > 0.1f) {
			Vec3d pos = new Vec3d(
					player.getX() + randomFloat(-0.2f, 0.2f),
					player.getY() + randomFloat(0.0f, player.getHeight()),
					player.getZ() + randomFloat(-0.2f, 0.2f));
			Vec3d vel = isDrop ? new Vec3d(0.0, randomFloat(-0.2f, -0.05f), 0.0) : randomVelocity();
			activeParticles.add(new ParticleInstance(pos, vel, particleScale));
		}
	}

	/** iX.bxS() (iX_.java:448-452) — per-render-frame movement in blocks/s, rounded to 0.1. */
	private static float speed() {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		double dx = player.getX() - player.lastRenderX;
		double dy = player.getY() - player.lastRenderY;
		double dz = player.getZ() - player.lastRenderZ;
		double distance = Math.sqrt(dx * dx + dy * dy + dz * dz);
		return (float) Math.round((float) (distance * 20.0) * 10.0f) / 10.0f;
	}

	/**
	 * jg.bBy (jg.java:988-1089) — distance from the entity to the first colliding block below;
	 * -1.0 for liquids/slime/honey/cobweb or when nothing is found down to the world bottom.
	 */
	private static double groundDistance(Entity entity) {
		net.minecraft.world.World world = entity.getEntityWorld();
		BlockPos blockPos = entity.getBlockPos();
		for (int y = blockPos.getY(); y >= world.getBottomY(); y--) {
			BlockPos current = new BlockPos(blockPos.getX(), y, blockPos.getZ());
			BlockState state = world.getBlockState(current);
			if (state.isOf(Blocks.WATER) || state.isOf(Blocks.LAVA) || state.isOf(Blocks.SLIME_BLOCK)
					|| state.isOf(Blocks.HONEY_BLOCK) || state.isOf(Blocks.COBWEB)) {
				return -1.0;
			}
			if (state.getCollisionShape(world, current).isEmpty()) {
				continue;
			}
			return entity.getY() - (double) current.getY() - 1.0;
		}
		return -1.0;
	}

	/** YS/YT (cR.java:737-799) — per-frame draw. */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || activeParticles.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}

		Camera camera = event.camera();
		Vec3d cameraPos = camera.getCameraPos();
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);

		VertexConsumerProvider consumers = event.context().consumers();
		VertexConsumer quads = consumers.getBuffer(RenderLayers.debugFilledBox());
		MatrixStack matrices = event.context().matrices();

		int rgb = color.getValue();
		int r = (rgb >> 16) & 0xFF;
		int g = (rgb >> 8) & 0xFF;
		int b = rgb & 0xFF;
		boolean hasGlow = glow.getValue();

		matrices.push();
		try {
			matrices.translate(-cameraPos.x, -cameraPos.y, -cameraPos.z);
			Quaternionf rotation = camera.getRotation();

			// cR.java:751 — jJ.bIA visibility gate over the interpolated positions
			// (Trails point-box convention; a null captured frustum renders).
			Frustum frustum = client.worldRenderer.getCapturedFrustum();

			for (ParticleInstance particle : activeParticles) {
				Vec3d pos = particle.getLerpedPos(tickDelta);
				if (frustum != null && !frustum.isVisible(new Box(
						pos.x - 0.5, pos.y - 0.5, pos.z - 0.5,
						pos.x + 0.5, pos.y + 0.5, pos.z + 0.5))) {
					continue;
				}
				// mn.clq (mn.java:261-287) — the fade animation advances while drawing:
				// forward (!fading) while alive, reverse once the lifetime expired.
				float fade = particle.updateFade(!particle.fading);
				int a = (int) (255.0f * fade * 0.4f);
				if (a <= 0) {
					continue;
				}

				matrices.push();
				try {
					matrices.translate(pos.x, pos.y, pos.z);
					matrices.multiply(rotation);

					// mn.cls (mn.java:93-101): scale 0.07 then a quad of size hMiLh.
					float sz = particle.scale * 0.07f * 0.5f;
					Matrix4f matrix = matrices.peek().getPositionMatrix();

					quads.vertex(matrix, -sz, -sz, 0.0f).color(r, g, b, a);
					quads.vertex(matrix, sz, -sz, 0.0f).color(r, g, b, a);
					quads.vertex(matrix, sz, sz, 0.0f).color(r, g, b, a);
					quads.vertex(matrix, -sz, sz, 0.0f).color(r, g, b, a);

					if (hasGlow) {
						// mn.clr (mn.java:247-258): same alpha, 2x size glow quad.
						float glowSz = sz * 2.0f;
						quads.vertex(matrix, -glowSz, -glowSz, 0.0f).color(r, g, b, a);
						quads.vertex(matrix, glowSz, -glowSz, 0.0f).color(r, g, b, a);
						quads.vertex(matrix, glowSz, glowSz, 0.0f).color(r, g, b, a);
						quads.vertex(matrix, -glowSz, glowSz, 0.0f).color(r, g, b, a);
					}
				} finally {
					matrices.pop();
				}
			}
		} finally {
			matrices.pop();
		}
	}

	@Override
	protected void onDisable() {
		activeParticles.clear();
	}

	/**
	 * mn (mn.java:39-301) — one particle: mT lifetime timer + rk fade animation, integrated in
	 * clp (mn.clp, verified against mn.class bytecode).
	 */
	private final class ParticleInstance {
		private Vec3d pos;
		private Vec3d prevPos;
		private Vec3d velocity;
		private final float scale;
		private final long spawnTime;
		private final int lifetime;
		private boolean fading;
		private float fadeValue;
		private float fadeStartValue;
		private float fadeTarget;
		private long fadeStart;

		ParticleInstance(Vec3d pos, Vec3d velocity, float scale) {
			this.pos = pos;
			this.prevPos = pos;
			this.velocity = velocity;
			this.scale = scale;
			this.spawnTime = System.currentTimeMillis();
			this.lifetime = ThreadLocalRandom.current().nextInt(LIFETIME_MIN_MS, LIFETIME_MAX_MS + 1);
			this.fadeValue = 0.0f;
			this.fadeStartValue = 0.0f;
			this.fadeTarget = 0.0f;
		}

		/** mn.clp (mn.java:156-245) — expiry check + integration; true removes the particle. */
		boolean tick() {
			if (MinecraftClient.getInstance().player == null) {
				return true;
			}
			if (!fading && System.currentTimeMillis() - spawnTime - lifetime > 0L) {
				fading = true;
			}
			if (fading && fadeValue <= 0.0f) {
				return true;
			}
			prevPos = pos;
			pos = pos.add(velocity);
			// mn.clp bytecode: multiply(0.9, qIoJG ? 0.9 : 1.0, 1.0) then add(0, -0.001, 0).
			velocity = velocity.multiply(0.9, 0.9, 1.0).add(0.0, -0.001, 0.0);
			return false;
		}

		/** rk.dhc/dhd (rk.java:54-134, 339-351) — linear ramp; the rj easing is unrecovered. */
		float updateFade(boolean forward) {
			float target = forward ? 1.0f : 0.0f;
			if (target != fadeTarget) {
				fadeStartValue = fadeValue;
				fadeTarget = target;
				fadeStart = System.currentTimeMillis();
			}
			long elapsed = System.currentTimeMillis() - fadeStart;
			if (elapsed >= FADE_DURATION_MS) {
				fadeValue = fadeTarget;
			} else {
				fadeValue = fadeStartValue + (fadeTarget - fadeStartValue) * ((float) elapsed / FADE_DURATION_MS);
			}
			return fadeValue;
		}

		/** mq.clL (mq.java:71-89) — lerp between the previous and current position. */
		Vec3d getLerpedPos(float tickDelta) {
			double x = MathHelper.lerp(tickDelta, prevPos.x, pos.x);
			double y = MathHelper.lerp(tickDelta, prevPos.y, pos.y);
			double z = MathHelper.lerp(tickDelta, prevPos.z, pos.z);
			return new Vec3d(x, y, z);
		}
	}
}
