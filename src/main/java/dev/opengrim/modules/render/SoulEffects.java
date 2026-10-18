package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ThreadLocalRandom;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.model.ModelTransform;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.entity.EntityRenderer;
import net.minecraft.client.render.entity.LivingEntityRenderer;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.data.DataTracker;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.network.packet.s2c.play.EntityTrackerUpdateS2CPacket;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Vector3f;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.mixin.LivingEntityAccessor;
import dev.opengrim.mixin.ModelPartAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;

/**
 * Soul Effects (registry sixtwo.cZ): "Spawns souls after killing an entity".
 *
 * <p>1:1 port of sixtwo.cZ (analysis/decompiled/payload-decrypted/sixtwo/cZ.java,
 * inner class cZ$su in analysis/decompiled/payload-named-cfr/sixtwo/cZ$su.java,
 * particle class sixtwo.ml in
 * analysis/decompiled/casesafe/payload-named-cfr/sixtwo/ml.java; specs
 * analysis/specs/handlers/cZ.md and analysis/specs/modules/cZ.md).
 *
 * <p>Settings in constructor order (cZ.java:122-211): "Primary" (cG, theme-fed
 * default {@code rD.dlM().bjf()} cZ.java:133), "Glow" (cG, same default plus
 * {@code .We()} cZ.java:134), "Behind Walls" (cJ, default false — no
 * {@code .WE} call; cJ.java:20, cZ.java:148), "Particle
 * Count" 1.0/100.0-3000.0/1500.0 (cZ.java:164), "Duration"
 * 0.1/0.5-5.0/2.5 suffix ZBgUJ (cZ.java:174), "Dispersion" 0.01/0.0-1.0/1.0
 * (cZ.java:186), "Radius" 0.01/0.02-0.5/0.08 (cZ.java:194), "Glow Radius"
 * 0.01/0.0-0.75/0.5 (cZ.java:207).
 *
 * <p>Triggers ({@code abb} dedups by UUID and spawns
 * {@code cZ$su(entity, count, radius, round(Duration*1000), Primary, Dispersion)},
 * cZ.java:1280-1300):
 * <ul>
 *   <li>{@code aaX(gL$tk)} packet event (cZ.java:1188-1237): EntityStatus with
 *       status == 3 (death) &rarr; {@code aaY} (cZ.java:937-991), health entry
 *       of an EntityTrackerUpdateS2CPacket &le; 0 &rarr; {@code aaZ}
 *       (cZ.java:835-935; the health entry is matched by
 *       {@code LivingEntityAccessor.getDataHealthId().id()}).</li>
 *   <li>{@code aba(hp)} entity-removal event (cZ.java:998-1053): removal reason
 *       KILLED or {@code isDead()} &rarr; spawn. No removal hook exists in this
 *       rebuild (see the labeled divergence below) — the equivalent state is
 *       observed by a per-tick world scan for dead living entities.</li>
 * </ul>
 *
 * <p>Render ({@code aaW(go$sX)} cZ.java:1239-1278 &rarr; {@code abc}
 * cZ.java:780-833): tick every effect ({@code cZ$su.dnV}), draw the particle
 * quads ({@code abd} cZ.java:1305-1425, POSITION_TEXTURE_COLOR QUADS, pipeline
 * {@code kR.bHqVE} when Behind Walls else {@code kR.HUQWl}), composite the glow
 * ({@code kl.bQd} with Glow Radius and the Glow color), then release finished
 * effects ({@code abe} cZ.java:1427-1454). Geometry: model-AABB collection
 * ({@code abf}/{@code abg} cZ.java:466-689, 1066-1106), area-weighted box pick
 * ({@code dnY}), surface-biased point ({@code dnZ}/{@code abi} cZ.java:320-461,
 * 0.4 face bias), dispersion blend ({@code abh} cZ.java:1128-1186), random unit
 * vector ({@code abj} cZ.java:1059-1061), uniform random ({@code abk}
 * cZ.java:692-716, {@code mU.cpP}). Particle motion/alpha 1:1 from sixtwo.ml
 * ({@code clg} ml.java:186-250, {@code clj} ml.java:256-310, {@code cli}
 * ml.java:349-354, {@code clh} ml.java:151-184).
 *
 * <p>Framework wiring: the original's pre-render capture/composite chain
 * ({@code kl.bQa}/{@code bQb}/{@code bQd}, {@code lF.cfH}, the custom
 * {@code kR} pipelines and the {@code jL.uHvyh} uniform) has no rebuild
 * counterpart. high-probability guess: the quads are drawn directly in
 * {@link WorldRenderEvent} AFTER_ENTITIES with {@code RenderLayers.debugFilledBox()}
 * (untextured; same stand-in as Hit Particles) and the glow composite is
 * approximated by a larger halo quad per particle (Hit Particles precedent);
 * the "Behind Walls" pipeline choice therefore collapses to one layer.
 *
 * <p>[G] high-probability guess: the four DES longs of {@code cZ$su#dob}
 * (bsm "doi", ids 32204/543) and {@code ml#clj} (bsm "clo", ids 11388/21204)
 * are statically undecryptable (per-class key from native {@code gb.aYR}).
 * The recovered shape is {@code max(const, lifetime / const)} for both the
 * fade-in and fade-out windows; the constants are guessed as 100&nbsp;ms and a
 * divisor of 2 (fade-in ends at the motion envelope's peak).
 *
 * <p>Labeled divergence: the original's third trigger {@code aba(hp)} is an
 * entity-removal event; this rebuild has no removal hook, so the same state
 * (KILLED / {@code isDead()}) is observed by a per-tick world scan instead
 * (spawn happens at most one tick later; the UUID dedup set suppresses
 * repeats).
 */
public class SoulEffects extends Module {
	/**
	 * [G] Fade-in floor of sixtwo.ml#clj (bsm "clo", id 11388 unrecovered).
	 */
	private static final long FADE_IN_MIN_MS = 100L;
	/**
	 * [G] Fade-in divisor of sixtwo.ml#clj (bsm "clo", id 21204 unrecovered).
	 */
	private static final long FADE_IN_DIVISOR = 2L;
	/**
	 * [G] Fade-out floor of sixtwo.cZ$su#dob (bsm "doi", id 32204 unrecovered).
	 */
	private static final long FADE_OUT_MIN_MS = 100L;
	/**
	 * [G] Fade-out divisor of sixtwo.cZ$su#dob (bsm "doi", id 543 unrecovered).
	 */
	private static final long FADE_OUT_DIVISOR = 2L;
	/** [G] Glow halo alpha multiplier of the post-process stand-in. */
	private static final float GLOW_ALPHA = 0.35f;

	// cZ.java:133-207 — cG/cJ/cC constructor order kept verbatim.
	private final ColorSetting primary = register(new ColorSetting("primary", 0xFFFFFFFF));
	// Original: .Uf(rD.dlM().bjf()).We() (cZ.java:134); the theme value is not
	// recoverable in this rebuild (white stands in, repo convention) and We()
	// is the picker's alpha-enabling flag, not a behavior switch.
	private final ColorSetting glow = register(new ColorSetting("glow", 0xFFFFFFFF));
	private final BoolSetting behindWalls = register(new BoolSetting("behind_walls", false));
	private final DoubleSetting particleCount = register(new DoubleSetting("particle_count", 1.0, 100.0, 3000.0, 1500.0, null));
	private final DoubleSetting duration = register(new DoubleSetting("duration", 0.1, 0.5, 5.0, 2.5, " s"));
	private final DoubleSetting dispersion = register(new DoubleSetting("dispersion", 0.01, 0.0, 1.0, 1.0, null));
	private final DoubleSetting radius = register(new DoubleSetting("radius", 0.01, 0.02, 0.5, 0.08, null));
	private final DoubleSetting glowRadius = register(new DoubleSetting("glow_radius", 0.01, 0.0, 0.75, 0.5, null));

	/** TIWnG (cZ.java:112). */
	private final List<SoulEffect> effects = new CopyOnWriteArrayList<>();
	/** eWrHR (cZ.java:113). */
	private final Set<UUID> processedEntities = ConcurrentHashMap.newKeySet();

	public SoulEffects() {
		super("soul_effects", "Soul Effects", "Spawns souls after killing an entity", ModuleCategory.RENDER);
	}

	/**
	 * Packet dispatch aaX (cZ.java:1188-1237): status packet first, tracker
	 * packet second (each subtype re-reads {@code tk.bcf()}).
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!isEnabled()) {
			return;
		}
		Packet<?> packet = event.packet();
		if (packet instanceof EntityStatusS2CPacket statusPacket) {
			onStatus(statusPacket);
			return;
		}
		if (packet instanceof EntityTrackerUpdateS2CPacket trackerPacket) {
			onTrackerUpdate(trackerPacket);
		}
	}

	/**
	 * aaY (cZ.java:937-991): death status 3 on a non-removed living entity.
	 */
	private void onStatus(EntityStatusS2CPacket packet) {
		if (packet.getStatus() != 3) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}
		Entity entity = packet.getEntity(client.world);
		if (entity instanceof LivingEntity living && !entity.isRemoved()) {
			spawn(living);
		}
	}

	/**
	 * aaZ (cZ.java:835-935): the packet's health tracked-data entry (id matched
	 * against {@code LivingEntityAccessor.getDataHealthId()}) is a Float &le; 0.
	 */
	private void onTrackerUpdate(EntityTrackerUpdateS2CPacket packet) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}
		Entity entity = client.world.getEntityById(packet.id());
		if (!(entity instanceof LivingEntity living) || entity.isRemoved()) {
			return;
		}
		int healthId = LivingEntityAccessor.opengrim$getHealthData().id();
		for (DataTracker.SerializedEntry<?> entry : packet.trackedValues()) {
			if (entry.id() != healthId) {
				continue;
			}
			if (entry.value() instanceof Float health && health <= 0.0f) {
				spawn(living);
				return;
			}
		}
	}

	/**
	 * Stand-in for the entity-removal event aba (cZ.java:998-1053): the
	 * original spawns when a removal reports {@code RemovalReason.KILLED} or the
	 * entity {@code isDead()}. No removal hook exists in this rebuild, so the
	 * dead state is observed on the next tick; the UUID dedup set makes the
	 * repeat scans idempotent.
	 */
	@Override
	public void onTick() {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}
		for (Entity entity : client.world.getEntities()) {
			if (entity instanceof LivingEntity living && living.isDead()) {
				spawn(living);
			}
		}
	}

	/**
	 * abb (cZ.java:1280-1300): dedup by UUID, then
	 * {@code new cZ$su(entity, Particle Count, Radius, round(Duration*1000),
	 * Primary, Dispersion)} and the shader mark {@code kl.bQb} (no rebuild
	 * counterpart).
	 */
	private void spawn(LivingEntity living) {
		if (!processedEntities.add(living.getUuid())) {
			return;
		}
		effects.add(new SoulEffect(
				living,
				particleCount.getValue().intValue(),
				radius.getValue().floatValue(),
				Math.round(duration.getValue().floatValue() * 1000.0f),
				primary.getValue(),
				dispersion.getValue().floatValue()));
	}

	/**
	 * aaW &rarr; abc (cZ.java:1239-1278, 780-833): tick the effects, draw the
	 * quads, then release the finished ones (abe). The original gates on
	 * {@code bab() && !TIWnG.isEmpty()} — the bus only delivers to enabled
	 * modules, the list check is kept.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || effects.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}

		// abc step 1: cZ$su.dnV() for every effect (cZ.java:794-798).
		for (SoulEffect effect : effects) {
			effect.tick();
		}

		// abd (cZ.java:1305-1425) — stand-in draw pass, see class javadoc.
		Camera camera = event.camera();
		Vec3d cameraPos = camera.getCameraPos();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		VertexConsumer quads = consumers.getBuffer(RenderLayers.debugFilledBox());
		// abd (cZ.java:1398): the original picks kR.bHqVE when Behind Walls is
		// on, else kR.HUQWl; both are custom pipelines with no rebuild
		// counterpart, so the stand-in layer above is used for either state.
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		float glowScale = glowRadius.getValue().floatValue();
		int glowArgb = glow.getValue();

		matrices.push();
		try {
			matrices.translate(-cameraPos.x, -cameraPos.y, -cameraPos.z);
			for (SoulEffect effect : effects) {
				for (SoulParticle particle : effect.particles) {
					// ml.clh (ml.java:151-184): skip below 0.005 alpha.
					float alpha = particle.alpha();
					if (alpha < 0.005f) {
						continue;
					}
					Vec3d renderPos = particle.lerpedPos(tickDelta);
					float half = particle.size * 0.5f;
					matrices.push();
					try {
						matrices.translate(renderPos.x, renderPos.y, renderPos.z);
						matrices.multiply(camera.getRotation());
						drawQuad(matrices.peek(), quads, -half, -half, half, half,
								withAlpha(particle.color, 255.0f * alpha));
						if (glowScale > 0.0f) {
							// [G] kl.bQd glow composite stand-in: a larger halo quad in
							// the Glow color at a fraction of the particle alpha.
							float glowHalf = half * (1.0f + glowScale * 2.0f);
							drawQuad(matrices.peek(), quads, -glowHalf, -glowHalf, glowHalf, glowHalf,
									withAlpha(glowArgb, 255.0f * alpha * GLOW_ALPHA));
						}
					} finally {
						matrices.pop();
					}
				}
			}
		} finally {
			matrices.pop();
		}

		// abc step 3: abe (cZ.java:1427-1454) — release expired effects and
		// their UUIDs.
		effects.removeIf(effect -> {
			if (effect.alive) {
				return false;
			}
			processedEntities.remove(effect.uuid);
			return true;
		});
	}

	/** YO (cZ.java:1457-1462): clear both collections (plus the shader mark). */
	@Override
	protected void onDisable() {
		effects.clear();
		processedEntities.clear();
	}

	private static void drawQuad(MatrixStack.Entry entry, VertexConsumer vc,
			float minX, float minY, float maxX, float maxY, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		vc.vertex(entry, minX, minY, 0.0f).color(r, g, b, a);
		vc.vertex(entry, maxX, minY, 0.0f).color(r, g, b, a);
		vc.vertex(entry, maxX, maxY, 0.0f).color(r, g, b, a);
		vc.vertex(entry, minX, maxY, 0.0f).color(r, g, b, a);
	}

	/** mG#coa(alpha).coh(): the particle color with the alpha replaced. */
	private static int withAlpha(int argb, int alpha) {
		return (MathHelper.clamp(alpha, 0, 255) << 24) | (argb & 0xFFFFFF);
	}

	/** mG#coa(float).coh() with the original's float alpha and Math.round. */
	private static int withAlpha(int argb, float alpha) {
		return withAlpha(argb, Math.round(alpha));
	}

	/** abk (cZ.java:692-716) / mU.cpP: uniform float, min when max &le; min. */
	private static float randomRange(float min, float max) {
		if (max <= min) {
			return min;
		}
		return (float) ThreadLocalRandom.current().nextDouble(min, max);
	}

	// ------------------------------------------------------------------
	// Model geometry (abf / abg / abi / abh / abj) — cZ.java:320-1200.
	// ------------------------------------------------------------------

	/**
	 * abf (cZ.java:1066-1106): the dying entity's rendered model cuboids as
	 * pixel-space AABBs; empty list when the renderer is not a
	 * LivingEntityRenderer (or on any failure — the original swallows
	 * Throwable).
	 */
	private static List<float[]> collectModelBoxes(LivingEntity entity) {
		List<float[]> boxes = new ArrayList<>();
		try {
			EntityRenderer<?, ?> renderer = MinecraftClient.getInstance()
					.getEntityRenderDispatcher().getRenderer(entity);
			if (renderer instanceof LivingEntityRenderer<?, ?, ?> livingRenderer) {
				ModelPart root = livingRenderer.getModel().getRootPart();
				collectPartBoxes(root, new Matrix4f(), boxes);
			}
		} catch (Throwable ignored) {
			// empty catch block (cZ.java:1102-1104)
		}
		return boxes;
	}

	/**
	 * abg (cZ.java:466-689): recursive walk over the model's default pose.
	 * Per part: invisible parts are skipped; the matrix is translated by the
	 * part's default transform pivot (pixel space, no /16), rotated by
	 * rotateZYX(roll, yaw, pitch) when any angle is non-zero and scaled when
	 * any scale differs from 1. Each non-degenerate cuboid contributes its 8
	 * transformed corners as an AABB plus its surface area
	 * {@code 2*(wx*wy + wx*wz + wy*wz)} (index 6, the dnY pick weight).
	 */
	private static void collectPartBoxes(ModelPart part, Matrix4f parent, List<float[]> out) {
		if (!part.visible) {
			return;
		}
		ModelTransform transform = part.getDefaultTransform();
		Matrix4f matrix = new Matrix4f(parent);
		matrix.translate(transform.x(), transform.y(), transform.z());
		if (transform.pitch() != 0.0f || transform.yaw() != 0.0f || transform.roll() != 0.0f) {
			matrix.rotateZYX(transform.roll(), transform.yaw(), transform.pitch());
		}
		if (transform.xScale() != 1.0f || transform.yScale() != 1.0f || transform.zScale() != 1.0f) {
			matrix.scale(transform.xScale(), transform.yScale(), transform.zScale());
		}
		Vector3f corner = new Vector3f();
		for (ModelPart.Cuboid cuboid : ((ModelPartAccessor) (Object) part).opengrim$getCuboids()) {
			float sizeX = Math.abs(cuboid.maxX - cuboid.minX);
			float sizeY = Math.abs(cuboid.maxY - cuboid.minY);
			float sizeZ = Math.abs(cuboid.maxZ - cuboid.minZ);
			float area = 2.0f * (sizeX * sizeY + sizeX * sizeZ + sizeY * sizeZ);
			if (area < 0.001f) {
				continue;
			}
			float minX = Float.POSITIVE_INFINITY;
			float minY = Float.POSITIVE_INFINITY;
			float minZ = Float.POSITIVE_INFINITY;
			float maxX = Float.NEGATIVE_INFINITY;
			float maxY = Float.NEGATIVE_INFINITY;
			float maxZ = Float.NEGATIVE_INFINITY;
			for (int i = 0; i < 8; i++) {
				corner.set(
						(i & 1) == 0 ? cuboid.minX : cuboid.maxX,
						(i & 2) == 0 ? cuboid.minY : cuboid.maxY,
						(i & 4) == 0 ? cuboid.minZ : cuboid.maxZ);
				matrix.transformPosition(corner);
				minX = Math.min(minX, corner.x);
				minY = Math.min(minY, corner.y);
				minZ = Math.min(minZ, corner.z);
				maxX = Math.max(maxX, corner.x);
				maxY = Math.max(maxY, corner.y);
				maxZ = Math.max(maxZ, corner.z);
			}
			out.add(new float[]{minX, minY, minZ, maxX, maxY, maxZ, area});
		}
		for (ModelPart child : ((ModelPartAccessor) (Object) part).opengrim$getChildren().values()) {
			collectPartBoxes(child, matrix, out);
		}
	}

	/**
	 * abi (cZ.java:320-461): uniform point on one of the box's faces (picked by
	 * face area, cumulative order Z-, Z+, Y-, Y+, X-, X+), nudged 0..0.4 inward
	 * from that face.
	 */
	private static float[] surfacePoint(float x0, float y0, float z0, float x1, float y1, float z1) {
		float sizeX = x1 - x0;
		float sizeY = y1 - y0;
		float sizeZ = z1 - z0;
		float areaXY = sizeX * sizeY;
		float areaXZ = sizeX * sizeZ;
		float areaYZ = sizeY * sizeZ;
		float total = 2.0f * (areaXY + areaXZ + areaYZ);
		float pick = randomRange(0.0f, total);
		float x;
		float y;
		float z;
		if (pick < areaXY) {
			x = randomRange(x0, x1);
			y = randomRange(y0, y1);
			z = z0 + randomRange(0.0f, 0.4f);
		} else if (pick < areaXY * 2.0f) {
			x = randomRange(x0, x1);
			y = randomRange(y0, y1);
			z = z1 - randomRange(0.0f, 0.4f);
		} else if (pick < areaXY * 2.0f + areaXZ) {
			x = randomRange(x0, x1);
			y = y0 + randomRange(0.0f, 0.4f);
			z = randomRange(z0, z1);
		} else if (pick < areaXY * 2.0f + areaXZ * 2.0f) {
			x = randomRange(x0, x1);
			y = y1 - randomRange(0.0f, 0.4f);
			z = randomRange(z0, z1);
		} else if (pick < areaXY * 2.0f + areaXZ * 2.0f + areaYZ) {
			x = x0 + randomRange(0.0f, 0.4f);
			y = randomRange(y0, y1);
			z = randomRange(z0, z1);
		} else {
			x = x1 - randomRange(0.0f, 0.4f);
			y = randomRange(y0, y1);
			z = randomRange(z0, z1);
		}
		return new float[]{x, y, z};
	}

	/** abh (cZ.java:1128-1186): dispersion-blended, re-normalized direction. */
	private static Vec3d blendDispersion(Vec3d direction, float dispersion) {
		if (dispersion <= 0.001f) {
			return direction;
		}
		Vec3d random = new Vec3d(
				randomRange(-1.0f, 1.0f),
				randomRange(-1.0f, 1.0f),
				randomRange(-1.0f, 1.0f));
		if (random.lengthSquared() < 1.0E-6) {
			return direction;
		}
		Vec3d blended = direction.multiply(1.0 - dispersion)
				.add(random.normalize().multiply(dispersion));
		if (blended.lengthSquared() < 1.0E-6) {
			return direction;
		}
		return blended.normalize();
	}

	/** abj (cZ.java:1059-1061): random unit vector. */
	private static Vec3d randomUnitVector() {
		return new Vec3d(
				randomRange(-1.0f, 1.0f),
				randomRange(-1.0f, 1.0f),
				randomRange(-1.0f, 1.0f)).normalize();
	}

	// ------------------------------------------------------------------
	// Effect instance (cZ$su) — cZ$su.java:39-561.
	// ------------------------------------------------------------------

	private static final class SoulEffect {
		/** FYVSB (cZ$su.java:40). */
		final List<SoulParticle> particles = new ArrayList<>();
		/** Abjlp (cZ$su.java:41). */
		final UUID uuid;
		/** nYGDp (cZ$su.java:42): true while the effect still owns particles. */
		boolean alive = true;

		SoulEffect(LivingEntity entity, int count, float particleRadius, long lifetimeMs,
				int color, float dispersion) {
			this.uuid = entity.getUuid();
			Vec3d entityPos = entity.getEntityPos();
			float width = entity.getWidth();
			float height = entity.getHeight();
			Vec3d center = new Vec3d(entityPos.x, entityPos.y + (double) height * 0.5, entityPos.z);
			double yawRadians = Math.toRadians(entity.getBodyYaw());
			double sinYaw = Math.sin(yawRadians);
			double cosYaw = Math.cos(yawRadians);
			float diagonal = (float) Math.sqrt(width * width + height * height);
			List<float[]> boxes = collectModelBoxes(entity);
			if (boxes.isEmpty()) {
				// cZ$su.java:140-188 — bounding-box ellipsoid fallback (dnX).
				spawnEllipsoid(count, entityPos, center, width, height, diagonal, dispersion,
						sinYaw, cosYaw, particleRadius, lifetimeMs, color);
			} else {
				// cZ$su.java:195-226 — model-AABB spawn (dnW).
				spawnFromBoxes(count, boxes, entityPos, center, height, diagonal, dispersion,
						sinYaw, cosYaw, particleRadius, lifetimeMs, color);
			}
		}

		/**
		 * dnW (cZ$su.java:167-246): area-weighted model-box pick, surface-biased
		 * point, model-pixel to world conversion (/16, Y flipped from the union
		 * top and scaled by entityHeight/modelHeight), yaw rotation about the
		 * entity center.
		 */
		private void spawnFromBoxes(int count, List<float[]> boxes, Vec3d entityPos, Vec3d center,
				float entityHeight, float diagonal, float dispersion, double sinYaw, double cosYaw,
				float particleRadius, long lifetimeMs, int color) {
			float minX = Float.POSITIVE_INFINITY;
			float minY = Float.POSITIVE_INFINITY;
			float minZ = Float.POSITIVE_INFINITY;
			float maxX = Float.NEGATIVE_INFINITY;
			float maxY = Float.NEGATIVE_INFINITY;
			float maxZ = Float.NEGATIVE_INFINITY;
			float totalArea = 0.0f;
			for (float[] box : boxes) {
				minX = Math.min(minX, box[0]);
				minY = Math.min(minY, box[1]);
				minZ = Math.min(minZ, box[2]);
				maxX = Math.max(maxX, box[3]);
				maxY = Math.max(maxY, box[4]);
				maxZ = Math.max(maxZ, box[5]);
				totalArea += box[6];
			}
			float centerX = (minX + maxX) * 0.5f;
			float centerZ = (minZ + maxZ) * 0.5f;
			float modelHeightBlocks = (maxY - minY) / 16.0f;
			float heightScale = modelHeightBlocks > 0.01f ? entityHeight / modelHeightBlocks : 1.0f;
			for (int i = 0; i < count; i++) {
				float[] box = pickBox(boxes, totalArea);
				float[] point = randomBoxPoint(box);
				double dx = (point[0] - centerX) / 16.0;
				double dy = (maxY - point[1]) / 16.0 * heightScale;
				double dz = (point[2] - centerZ) / 16.0;
				double rotX = dx * cosYaw - dz * sinYaw;
				double rotZ = dx * sinYaw + dz * cosYaw;
				spawnParticle(
						new Vec3d(entityPos.x + rotX, entityPos.y + dy, entityPos.z + rotZ),
						center, diagonal, dispersion, particleRadius, lifetimeMs, color);
			}
		}

		/**
		 * dnX (cZ$su.java:248-263): no model available — uniform point in the
		 * entity's width/height ellipsoid (cube-root radial, yaw-rotated,
		 * lifted to the entity's half height).
		 */
		private void spawnEllipsoid(int count, Vec3d entityPos, Vec3d center, float width,
				float height, float diagonal, float dispersion, double sinYaw, double cosYaw,
				float particleRadius, long lifetimeMs, int color) {
			for (int i = 0; i < count; i++) {
				double phi = randomRange(0.0f, (float) Math.PI * 2);
				double theta = Math.acos(randomRange(-1.0f, 1.0f));
				double radiusFactor = Math.cbrt(randomRange(0.0f, 1.0f));
				double dx = (double) width * 0.45 * radiusFactor * Math.sin(theta) * Math.cos(phi);
				double dy = (double) height * 0.45 * radiusFactor * Math.cos(theta) + (double) height * 0.5;
				double dz = (double) width * 0.45 * radiusFactor * Math.sin(theta) * Math.sin(phi);
				double rotX = dx * cosYaw - dz * sinYaw;
				double rotZ = dx * sinYaw + dz * cosYaw;
				spawnParticle(
						new Vec3d(entityPos.x + rotX, entityPos.y + dy, entityPos.z + rotZ),
						center, diagonal, dispersion, particleRadius, lifetimeMs, color);
			}
		}

		/**
		 * dnY (cZ$su.java:425-451): box pick weighted by cuboid surface area.
		 */
		private static float[] pickBox(List<float[]> boxes, float totalArea) {
			float pick = randomRange(0.0f, totalArea);
			float accumulated = 0.0f;
			for (float[] box : boxes) {
				accumulated += box[6];
				if (pick <= accumulated) {
					return box;
				}
			}
			return boxes.getLast();
		}

		/**
		 * dnZ (cZ$su.java:323-352): 70% surface-biased point (cZ.abi), 30%
		 * uniform interior point.
		 */
		private static float[] randomBoxPoint(float[] box) {
			if (randomRange(0.0f, 1.0f) < 0.7f) {
				return surfacePoint(box[0], box[1], box[2], box[3], box[4], box[5]);
			}
			return new float[]{
					randomRange(box[0], box[3]),
					randomRange(box[1], box[4]),
					randomRange(box[2], box[5])};
		}

		/**
		 * doa (cZ$su.java:365-382): direction = (pos - center) normalized
		 * (random unit vector when degenerate), dispersion-blended; speed =
		 * diagonal * dispersion * rand(0.6, 1.4); size = radius * rand(0.85,
		 * 1.15); lifetime triple from dob.
		 */
		private void spawnParticle(Vec3d pos, Vec3d center, float diagonal, float dispersion,
				float particleRadius, long lifetimeMs, int color) {
			Vec3d offset = pos.subtract(center);
			double distance = offset.length();
			Vec3d direction = distance > 0.001 ? offset.multiply(1.0 / distance) : randomUnitVector();
			direction = blendDispersion(direction, Math.min(0.6f, dispersion * 0.5f));
			float speed = diagonal * dispersion * randomRange(0.6f, 1.4f);
			float size = particleRadius * randomRange(0.85f, 1.15f);
			long[] lifetime = particleLifetime(lifetimeMs, (float) distance, diagonal);
			particles.add(new SoulParticle(pos, direction, speed, size,
					lifetime[0], lifetime[1], lifetime[2], color));
		}

		/**
		 * dob (cZ$su.java:384-423): {motion window = lifetime,
		 * fade-out start = lifetime + round(lifetime * (1 - reach*0.7) *
		 * rand(0.4, 1)) where reach = min(1, distance/(diagonal/2)), death =
		 * fade-out start + fade-out window}. The fade-out window shape
		 * {@code max(const, lifetime / const)} is recovered; the two constants
		 * are the [G] guesses above.
		 */
		private static long[] particleLifetime(long lifetimeMs, float distance, float diagonal) {
			float reach = diagonal > 0.001f
					? Math.min(1.0f, distance / (diagonal * 0.5f))
					: 0.0f;
			float holdScale = (1.0f - reach * 0.7f) * randomRange(0.4f, 1.0f);
			long hold = Math.max(0L, Math.round((float) lifetimeMs * holdScale));
			long fadeOut = Math.max(FADE_OUT_MIN_MS, lifetimeMs / FADE_OUT_DIVISOR);
			long fadeOutStart = lifetimeMs + hold;
			return new long[]{lifetimeMs, fadeOutStart, fadeOutStart + fadeOut};
		}

		/**
		 * dnV (cZ$su.java:493-536): tick every particle, drop the dead ones,
		 * mark the effect finished once none are left.
		 */
		void tick() {
			particles.removeIf(SoulParticle::tick);
			if (particles.isEmpty()) {
				alive = false;
			}
		}
	}

	// ------------------------------------------------------------------
	// Particle (sixtwo.ml) — ml.java:75-396.
	// ------------------------------------------------------------------

	private static final class SoulParticle {
		private Vec3d pos;
		private Vec3d prevPos;
		private final Vec3d origin;
		private final Vec3d direction;
		private final float speed;
		private final float size;
		private final int color;
		private final long spawnMs;
		private final long motionLifetimeMs;
		private final long fadeOutStartMs;
		private final long deathMs;
		private final float waveFreqX;
		private final float waveFreqY;
		private final float waveFreqZ;
		private final float waveFreqX2;
		private final float waveFreqY2;
		private final float waveFreqZ2;
		private final float phaseX;
		private final float phaseY;
		private final float phaseZ;
		private final float envelopePower;
		private long elapsedMs;
		private int ticks;

		SoulParticle(Vec3d pos, Vec3d direction, float speed, float size,
				long motionLifetimeMs, long fadeOutStartMs, long deathMs, int color) {
			this.pos = pos;
			this.prevPos = pos;
			this.origin = pos;
			this.direction = direction;
			this.speed = speed;
			this.size = size;
			this.color = color;
			this.spawnMs = System.currentTimeMillis();
			this.motionLifetimeMs = motionLifetimeMs;
			this.fadeOutStartMs = fadeOutStartMs;
			this.deathMs = deathMs;
			// ml.java:88 cnPZu is assigned but never read; the draw is kept so
			// the random sequence order matches the original.
			randomRange(0.0f, (float) Math.PI * 2);
			this.waveFreqX = randomRange(0.012f, 0.03f);
			this.waveFreqY = randomRange(0.012f, 0.03f);
			this.waveFreqZ = randomRange(0.012f, 0.03f);
			this.waveFreqX2 = randomRange(0.005f, 0.015f);
			this.waveFreqY2 = randomRange(0.005f, 0.015f);
			this.waveFreqZ2 = randomRange(0.005f, 0.015f);
			this.phaseX = randomRange(0.0f, (float) Math.PI * 2);
			this.phaseY = randomRange(0.0f, (float) Math.PI * 2);
			this.phaseZ = randomRange(0.0f, (float) Math.PI * 2);
			this.envelopePower = randomRange(0.4f, 0.7f);
		}

		/**
		 * clg (ml.java:186-250): prev = pos; envelope =
		 * sin(smoothstep(elapsed/motion window)^power * PI) while inside the
		 * motion window else 0; pos = origin + direction*envelope*speed plus a
		 * 0.15*envelope lift and the three two-octave sine waves; returns true
		 * once elapsed reaches the death time.
		 */
		boolean tick() {
			prevPos = pos;
			elapsedMs = System.currentTimeMillis() - spawnMs;
			float tickIndex = ticks++;
			float envelope = 0.0f;
			if (elapsedMs < motionLifetimeMs) {
				float progress = (float) elapsedMs / (float) motionLifetimeMs;
				float smooth = progress * progress * (3.0f - 2.0f * progress);
				envelope = (float) Math.sin(Math.pow(smooth, envelopePower) * Math.PI);
			}
			double lift = (double) envelope * 0.15;
			double waveX = Math.sin(tickIndex * waveFreqX + phaseX) * 0.025
					+ Math.sin(tickIndex * waveFreqX2 + phaseX * 1.7) * 0.015;
			double waveY = Math.sin(tickIndex * waveFreqY + phaseY) * 0.025
					+ Math.sin(tickIndex * waveFreqY2 + phaseY * 1.7) * 0.015;
			double waveZ = Math.sin(tickIndex * waveFreqZ + phaseZ) * 0.025
					+ Math.sin(tickIndex * waveFreqZ2 + phaseZ * 1.7) * 0.015;
			pos = origin.add(
					direction.x * (double) envelope * (double) speed + waveX,
					direction.y * (double) envelope * (double) speed + lift + waveY,
					direction.z * (double) envelope * (double) speed + waveZ);
			return elapsedMs >= deathMs;
		}

		/**
		 * clj (ml.java:256-310): fade in over {@code max(const, motion window /
		 * const)} ([G] constants), hold 1.0 until the fade-out start, then
		 * smoothstep out over the remaining window.
		 */
		float alpha() {
			long fadeInMs = Math.max(FADE_IN_MIN_MS, motionLifetimeMs / FADE_IN_DIVISOR);
			if (elapsedMs < fadeInMs) {
				return (float) elapsedMs / (float) fadeInMs;
			}
			if (elapsedMs < fadeOutStartMs) {
				return 1.0f;
			}
			long fadeOutMs = deathMs - fadeOutStartMs;
			if (fadeOutMs > 0L) {
				float progress = Math.min(1.0f, (float) (elapsedMs - fadeOutStartMs) / (float) fadeOutMs);
				float remaining = 1.0f - progress;
				return remaining * remaining * (3.0f - 2.0f * remaining);
			}
			return 0.0f;
		}

		/** cli (ml.java:349-354): lerp between the last two tick positions. */
		Vec3d lerpedPos(float tickDelta) {
			return new Vec3d(
					MathHelper.lerp(tickDelta, prevPos.x, pos.x),
					MathHelper.lerp(tickDelta, prevPos.y, pos.y),
					MathHelper.lerp(tickDelta, prevPos.z, pos.z));
		}
	}
}
