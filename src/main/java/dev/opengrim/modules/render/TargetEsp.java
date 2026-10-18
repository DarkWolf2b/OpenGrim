package dev.opengrim.modules.render;

import java.util.List;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.util.math.Vec3d;
import org.joml.Quaternionf;
import org.joml.Vector3f;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.combat.KillAura;
import dev.opengrim.modules.combat.MaceAura;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Target ESP (registry sixtwo.dz): "Marks the active target".
 *
 * <p>1:1 port of sixtwo.dz (analysis/decompiled/casesafe/payload-decrypted/sixtwo/dz.java +
 * javap -c on analysis/decompiled/jar-casesafe/sixtwo/dz.class for the obfuscated control flow):
 * <ul>
 *   <li>{@code <init>} dz.java:104-214 - settings/builder order; mode-change callback
 *       {@code rPpMG.Vd(...)} -> {@code ajK()} (dz.java:190-213, 1708-1735)</li>
 *   <li>{@code ajI()} dz.java:340-363 - hurt-flash sampling ({@code ckqFG.dhc(Eupjj.hurtTime > 0)})</li>
 *   <li>{@code @hG ajA(gM)} dz.java:366-369 - tick reset: {@code IffVm.dhg(); Eupjj = null;}</li>
 *   <li>{@code ajE(MatrixStack, float)} dz.java:387-549 - Mode 0 "Circle"</li>
 *   <li>{@code ajJ(int, float)} dz.java:552-565 - angle advance</li>
 *   <li>{@code ajD()} dz.java:571-625 - {@code Look} crosshair fallback</li>
 *   <li>{@code @hG ajB(go$sX)} dz.java:628-650 (javap) - world render dispatch</li>
 *   <li>{@code ajF} dz.java:654-846 - Mode 1 "Soul"; {@code ajG} dz.java:850-1010 - Mode 2 "Ghosts";
 *       {@code ajH} dz.java:1028-1206 - Mode 3 "Crystals"</li>
 *   <li>{@code ajC()} dz.java:1317-1383 - KillAura (fr, id 5) then MaceAura (eP, id 120)</li>
 *   <li>{@code YO()} dz.java:1386-1390 - disable callback</li>
 * </ul>
 *
 * <p>DES-encrypted integer constants were recovered by re-implementing the class's own
 * {@code ajQ}/{@code ajN} decryptors (key {@code Adunk = 48869455257838}, recovered from the
 * full-dump {@code (id, l2) -> value} pairs) and validating 120/120 dumped sites:
 * fade 300 ms / circle fade 700 ms / hurt 100 ms; angle interpolation 70 ms (Circle/Soul/Crystals)
 * and 800 ms (Ghosts); Circle bound 360 with per-45°-block skip, Soul bound 360 step 2
 * (size threshold 50, reset 100), Crystals bound 360 step 20; Ghosts ring phase 120; colour seeds 10;
 * textures {@code glow} (Circle/Soul/Crystals bloom) and {@code ghosts} (Ghosts).
 *
 * <p>Framework adaptations (visual only): the original emits textured billboards through the
 * native-side {@code kM}/{@code kK} batchers with textures {@code glow}/{@code ghosts} that do not
 * ship with the rebuild; this port keeps the exact geometry, counts, colours and per-frame order and
 * draws them as camera-facing quads via {@link RenderLayers#debugFilledBox()}. The
 * {@code Ignore Walls} render-state switch ({@code kS cHVCf}/{@code MRndq} vs {@code defaultState()})
 * has no equivalent layer in the rebuild, so the setting is carried but does not alter the layer.
 * The animators are 1:1 ports of sixtwo.rk (rk.java:54-134) and sixtwo.rh (rh.java:35-52); the
 * easings are the recovered rj instances {@code kcXTJ} (ease-in-out cubic, rj.java:109-141) and
 * {@code UPXqT} (ease-in-out sine, rj.java:69).
 */
public class TargetEsp extends Module {
	/** mG.cnP(255.0f, 71.0f, 71.0f) - dz.java:186 (hurt mix colour). */
	private static final int HURT_COLOR = 0xFFFF4747;

	// Recovered via the class's ajQ decryptor (see class javadoc).
	private static final int FADE_MS = 300;
	private static final int CIRCLE_FADE_MS = 700;
	private static final int HURT_MS = 100;
	private static final int ANGLE_MS = 70;
	private static final int GHOSTS_ANGLE_MS = 800;
	private static final int CIRCLE_COUNT = 360;
	private static final int SOUL_COUNT = 360;
	private static final int CRYSTAL_COUNT = 360;
	private static final int SOUL_SIZE_THRESHOLD = 50;
	private static final int SOUL_SIZE_RESET = 100;
	private static final int GHOSTS_RING_PHASE = 120;
	private static final int CIRCLE_COLOR_SEED = 10;
	private static final int SOUL_COLOR_SEED = 10;

	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, false));
	private final ModeSetting mode = register(new FadeResetModeSetting("mode",
			List.of("Circle", "Soul", "Ghosts", "Crystals"), "Circle"));
	private final DoubleSetting speed = register(new DoubleSetting("speed", 1.0, 1.0, 20.0, 10.0, null));
	private final BoolSetting look = register(new BoolSetting("look", true));
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", false));
	private final BoolSetting bloom = register(new BoolSetting("bloom", true));
	private final DoubleSetting bloomAmount = register(new DoubleSetting("bloom_amount", 1.0, 1.0, 5.0, 5.0, null));
	private final BoolSetting hurtAnimation = register(new BoolSetting("hurt_animation", false));

	/** hGhYF - candidate resolved this frame. */
	private LivingEntity target;
	/** Eupjj - latched draw target (only replaced while a candidate exists). */
	private LivingEntity latched;
	/** IffVm - rk(300).dhs(rj.kcXTJ) target fade animator. */
	private final FadeAnimator fade = new FadeAnimator(FADE_MS, Easing.EASE_IN_OUT_CUBIC);
	/** ckqFG - rk(100).dhs(rj.UPXqT) hurt-flash animator. */
	private final FadeAnimator hurt = new FadeAnimator(HURT_MS, Easing.EASE_IN_OUT_SINE);
	/** tYcox - rh() smooth angle accumulator. */
	private final AngleInterpolator angle = new AngleInterpolator();

	public TargetEsp() {
		super("target_esp", "Target ESP", "Marks the active target", ModuleCategory.RENDER);
	}

	/** {@code rPpMG.Vd(() -> { if (hGhYF != null) IffVm.dhg(); })} - dz.java:190-213 / ajK. */
	private final class FadeResetModeSetting extends ModeSetting {
		FadeResetModeSetting(String id, List<String> modes, String defaultMode) {
			super(id, modes, defaultMode);
		}

		@Override
		protected void onChange() {
			if (target != null) {
				fade.reset();
			}
		}
	}

	@Override
	public void onTick() {
		bloomAmount.setVisible(bloom.getValue()); // SfkMU.Vf(slRcN::WF), dz.java:188
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			// @hG ajA(gM), dz.java:366-369 - gM is the ClientWorld.disconnect event
			// (bootstrap ClientWorldEventBridgeMixin#offline$disconnect on method_8525);
			// the rebuild has no disconnect event, so the world-null guard stands in
			// (Particles/Ambience convention).
			fade.reset(); // IffVm.dhg()
			latched = null; // Eupjj = null
		}
	}

	@Override
	protected void onDisable() {
		// YO(), dz.java:1386-1390
		fade.reset(); // IffVm.dhg()
		latched = null; // Eupjj = null
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return; // bab() gate, dz.java:630 (javap 2204: bab)
		}
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		VertexConsumer quads = consumers.getBuffer(RenderLayers.debugFilledBox());
		Quaternionf billboard = event.camera().getRotation();
		float delta = client.getRenderTickCounter().getTickProgress(true);

		// ajB(go$sX), dz.java:628-650 (javap 2204-2318)
		target = null; // hGhYF = null
		resolveAuraTarget(); // ajC()
		resolveLookTarget(client); // ajD()
		if (target != null) {
			latched = target; // Eupjj = hGhYF
		}
		if (latched == null) {
			return;
		}
		Vec3d cameraPos = event.camera().getCameraPos();
		switch (mode.getValue()) {
			case "Circle" -> renderCircle(matrices, quads, billboard, cameraPos, delta);
			case "Soul" -> renderSoul(matrices, quads, billboard, cameraPos, delta);
			case "Ghosts" -> renderGhosts(matrices, quads, billboard, cameraPos, delta);
			case "Crystals" -> renderCrystals(matrices, quads, billboard, cameraPos, delta);
			default -> renderCircle(matrices, quads, billboard, cameraPos, delta);
		}
	}

	/** ajC(), dz.java:1317-1383: KillAura (fr) target first, then MaceAura (eP). */
	private void resolveAuraTarget() {
		Module killAuraModule = ModuleManager.get().byId("kill_aura");
		if (killAuraModule instanceof KillAura killAura && killAura.isEnabled()) {
			LivingEntity auraTarget = killAura.getTarget(); // fr.aOQ()
			if (auraTarget != null) {
				target = auraTarget;
				return;
			}
		}
		Module maceAuraModule = ModuleManager.get().byId("mace_aura");
		if (maceAuraModule instanceof MaceAura maceAura && maceAura.isEnabled()) {
			LivingEntity maceTarget = maceAura.currentTarget(); // eP.aBS()
			if (maceTarget != null) {
				target = maceTarget;
			}
		}
	}

	/** ajD(), dz.java:571-625: vanilla crosshair entity while {@code Look} is on and no candidate yet. */
	private void resolveLookTarget(MinecraftClient client) {
		if (!look.getValue()) {
			return;
		}
		Entity entity = client.targetedEntity;
		if (target != null) {
			return;
		}
		if (entity == null) {
			return;
		}
		if (!(entity instanceof LivingEntity living)) {
			return;
		}
		target = living;
	}

	/** ajI(), dz.java:340-363: hurt-flash animator sample. */
	private float sampleHurt() {
		hurt.set(latched.hurtTime > 0); // ckqFG.dhc(Eupjj.hurtTime > 0)
		return hurt.get(); // ckqFG.dhj()
	}

	/** ajJ(int, float), dz.java:552-565: advance the shared angle by (10 + Speed) * hurt multiplier. */
	private void advanceAngle(int durationMs, float hurtValue) {
		float advance = 10.0f + speed.getValue().floatValue(); // cYGLG.VB()
		float multiplier = hurtAnimation.getValue() ? 1.0f + 0.5f * hurtValue : 1.0f;
		float step = advance * multiplier;
		angle.advance(angle.get() + step, durationMs); // tYcox.dfF(tYcox.dfH() + step, cap)
	}

	/** Mode 0 "Circle" - ajE, dz.java:387-549. */
	private void renderCircle(MatrixStack matrices, VertexConsumer quads, Quaternionf billboard, Vec3d cameraPos, float delta) {
		fade.setDuration(CIRCLE_FADE_MS); // IffVm.dhq(700)
		fade.set(target != null); // IffVm.dhc(hGhYF != null)
		float fadeValue = fade.get(); // IffVm.dhj()
		if (fadeValue == 0.0f) {
			return;
		}
		float hurtValue = sampleHurt(); // ajI()
		float mix = hurtAnimation.getValue() ? hurtValue : 0.0f;
		advanceAngle(ANGLE_MS, hurtValue); // ajJ(ajS(23441), hurt) - 70 ms

		Vec3d pos = latched.getLerpedPos(delta);
		float radius = latched.getWidth() * 1.5f;
		float coreSize = 0.3f;
		float bloomSize = 1.0f;
		for (int i = 0; i < CIRCLE_COUNT; i++) {
			// dz.java:482-495 (javap 273-317): only odd 45-degree blocks are emitted.
			if ((int) ((float) i / 45.0f) % 2 == 0) {
				continue;
			}
			float angleValue = angle.get(); // tYcox.dfH()
			float particleFade = fade.get(); // IffVm.dhj()
			float scale = Math.max(0.5f, 0.7f - 0.2f * hurt.get() + 0.2f - 0.2f * particleFade);
			float x = (float) (Math.sin(Math.toRadians((float) i + angleValue * 1.0f)) * (double) radius * (double) scale);
			float y = (float) ((double) (latched.getHeight() / 2.0f)
					+ (double) (latched.getHeight() / 2.0f) * Math.sin(Math.toRadians(angleValue)));
			float z = (float) (Math.cos(Math.toRadians((float) i + angleValue * 1.0f)) * (double) radius * (double) scale);
			int particleColor = mixColor(varyColor(color.getValue(), i * 3, CIRCLE_COLOR_SEED), HURT_COLOR, mix);

			matrices.push();
			try {
				matrices.translate(pos.x - cameraPos.x + x, pos.y - cameraPos.y + y, pos.z - cameraPos.z + z);
				matrices.multiply(billboard); // jI.bIs + jI.bIu
				if (bloom.getValue()) {
					quad(matrices.peek(), quads, -bloomSize / 2.0f, -bloomSize / 2.0f, -coreSize / 2.0f, bloomSize, bloomSize,
							withAlpha(particleColor, particleFade * (bloomAmount.getValue().floatValue() / 100.0f)));
				}
				quad(matrices.peek(), quads, -coreSize / 2.0f, -coreSize / 2.0f, -coreSize / 2.0f, coreSize, coreSize,
						withAlpha(particleColor, particleFade));
			} finally {
				matrices.pop();
			}
		}
	}

	/** Mode 1 "Soul" - ajF, dz.java:654-846. */
	private void renderSoul(MatrixStack matrices, VertexConsumer quads, Quaternionf billboard, Vec3d cameraPos, float delta) {
		fade.setDuration(FADE_MS); // IffVm.dhq(300)
		fade.set(target != null);
		float fadeValue = fade.get();
		if (fadeValue == 0.0f) {
			return;
		}
		float hurtValue = sampleHurt();
		float mix = hurtAnimation.getValue() ? hurtValue : 0.0f;
		advanceAngle(ANGLE_MS, hurtValue); // ajJ(ajS(18896), hurt) - 70 ms

		Vec3d pos = latched.getLerpedPos(delta);
		float radius = latched.getWidth() * 1.5f;
		int sizeAccumulator = 0; // var12
		int skipCountdown = 0; // var13
		for (int i = 0; i < SOUL_COUNT; i += 2) {
			float inner = 0.2f + 0.005f * (float) sizeAccumulator;
			float outer = 1.0f + 0.005f * (float) sizeAccumulator;
			// dz.java:806-808 (javap 309-352): skip while the countdown runs, else grow; over
			// SOUL_SIZE_THRESHOLD the size accumulator resets after a SOUL_SIZE_RESET skip.
			if (skipCountdown > 0) {
				skipCountdown -= 2;
				continue;
			}
			sizeAccumulator += 2;
			if (sizeAccumulator > SOUL_SIZE_THRESHOLD) {
				skipCountdown = SOUL_SIZE_RESET;
				sizeAccumulator = 0;
				continue;
			}
			float angleValue = angle.get();
			float particleFade = fade.get();
			float scale = Math.max(0.5f, 1.2f - 0.5f * particleFade);
			float x = (float) (Math.sin(Math.toRadians((float) i + angleValue * 1.0f)) * (double) radius * (double) scale);
			float y = (float) ((double) (latched.getHeight() / 1.5f)
					+ (double) (latched.getHeight() / 3.0f) * Math.sin(Math.toRadians((float) i / 2.0f + angleValue / 5.0f)));
			float z = (float) (Math.cos(Math.toRadians((float) i + angleValue * 1.0f)) * (double) radius * (double) scale);
			int particleColor = mixColor(varyColor(color.getValue(), i * 3, SOUL_COLOR_SEED), HURT_COLOR, mix);

			matrices.push();
			try {
				matrices.translate(pos.x - cameraPos.x + x, pos.y - cameraPos.y + y, pos.z - cameraPos.z + z);
				matrices.multiply(billboard);
				if (bloom.getValue()) {
					quad(matrices.peek(), quads, -outer / 2.0f, -outer / 2.0f, -inner / 2.0f, outer, outer,
							withAlpha(particleColor, particleFade * (bloomAmount.getValue().floatValue() / 100.0f)));
				}
				quad(matrices.peek(), quads, -inner / 2.0f, -inner / 2.0f, -inner / 2.0f, inner, inner,
						withAlpha(particleColor, particleFade));
			} finally {
				matrices.pop();
			}
		}
	}

	/** Mode 2 "Ghosts" - ajG, dz.java:850-1010. */
	private void renderGhosts(MatrixStack matrices, VertexConsumer quads, Quaternionf billboard, Vec3d cameraPos, float delta) {
		fade.setDuration(FADE_MS); // IffVm.dhq(300)
		fade.set(target != null);
		float fadeValue = fade.get();
		if (fadeValue == 0.0f) {
			return;
		}
		float hurtValue = sampleHurt();
		float mix = hurtAnimation.getValue() ? hurtValue : 0.0f;
		advanceAngle(GHOSTS_ANGLE_MS, hurtValue); // ajJ(ajS(26563), hurt) - 800 ms

		float ringMax = 15.0f;
		float bobScale = 3.0f;
		float speedValue = speed.getValue().floatValue();
		Vec3d pos = latched.getLerpedPos(delta);
		float radius = latched.getWidth() * 1.2f;
		int ringColor = mixColor(color.getValue(), HURT_COLOR, mix);

		for (int ring = 0; ring < 3; ring++) {
			for (int i = 0; (float) i <= ringMax; i++) {
				float angleValue = angle.get();
				double ringAngle = Math.toRadians(((float) i / 1.5f + angleValue) * speedValue
						+ (float) (ring * GHOSTS_RING_PHASE)) % (speedValue * 360.0f);
				double bob = Math.sin(Math.toRadians(angleValue * 2.5f + (float) (i * (ring + 1))) * (double) bobScale) / 2.0;
				float ratio = (float) i / ringMax;
				float particleFade = fade.get();
				float size = Math.max(0.24f * ratio, 0.2f);

				matrices.push();
				try {
					matrices.translate(pos.x - cameraPos.x + Math.cos(ringAngle) * (double) radius,
							pos.y - cameraPos.y + 1.0 + bob,
							pos.z - cameraPos.z + Math.sin(ringAngle) * (double) radius);
					matrices.multiply(billboard);
					if (bloom.getValue()) {
						float bloomSize = size * 2.4f;
						quad(matrices.peek(), quads, -bloomSize, -bloomSize, -0.001f, bloomSize * 2.0f, bloomSize * 2.0f,
								withAlpha(ringColor, particleFade * (bloomAmount.getValue().floatValue() / 100.0f)));
					}
					quad(matrices.peek(), quads, -size, -size, 0.0f, size * 2.0f, size * 2.0f,
							withAlpha(ringColor, particleFade));
				} finally {
					matrices.pop();
				}
			}
		}
	}

	/** Mode 3 "Crystals" - ajH, dz.java:1028-1206. */
	private void renderCrystals(MatrixStack matrices, VertexConsumer quads, Quaternionf billboard, Vec3d cameraPos, float delta) {
		fade.setDuration(FADE_MS); // IffVm.dhq(300)
		fade.set(target != null);
		float fadeValue = fade.get();
		if (fadeValue == 0.0f) {
			return;
		}
		float hurtValue = sampleHurt();
		float mix = hurtAnimation.getValue() ? hurtValue : 0.0f;
		advanceAngle(ANGLE_MS, hurtValue); // ajJ(ajS(23441), hurt) - 70 ms

		Vec3d pos = latched.getLerpedPos(delta);
		float radius = latched.getWidth() * 1.5f;
		float size = 0.1f;
		int crystalColor = mixColor(color.getValue(), HURT_COLOR, mix);
		Vector3f up = new Vector3f(0.0f, 1.0f, 0.0f);

		for (int i = 0; i < CRYSTAL_COUNT; i += 20) {
			float particleFade = fade.get();
			float angleValue = angle.get();
			float scale = 1.2f - 0.5f * particleFade;
			float x = (float) (Math.sin(Math.toRadians((float) i + angleValue * 0.3f)) * (double) radius * (double) scale);
			float y = (float) (0.1f + (double) latched.getHeight() * Math.abs(Math.sin((double) i)));
			float z = (float) (Math.cos(Math.toRadians((float) i + angleValue * 0.3f)) * (double) radius * (double) scale);

			matrices.push();
			try {
				matrices.translate(pos.x - cameraPos.x + x, pos.y - cameraPos.y + y, pos.z - cameraPos.z + z);
				// Quaternionf().rotationTo((0,1,0), normalize(entityCenter - crystalPos)), dz.java:1148-1154
				Vec3d crystalPos = latched.getLerpedPos(delta).add((double) x, 1.0, (double) z);
				Vec3d center = latched.getEntityPos().add(0.0, (double) latched.getHeight() / 2.0, 0.0);
				Vector3f direction = center.subtract(crystalPos).normalize().toVector3f();
				matrices.multiply(new Quaternionf().rotationTo(up, direction));
				quad(matrices.peek(), quads, -size / 2.0f, -size / 2.0f, 0.0f, size, size,
						withAlpha(crystalColor, particleFade));
			} finally {
				matrices.pop();
			}
		}

		// Bloom pass - dz.java:1174-1205 (second batch on the "glow" texture, only while Bloom is on).
		if (!bloom.getValue()) {
			return;
		}
		size = 1.0f;
		for (int i = 0; i < CRYSTAL_COUNT; i += 20) {
			float particleFade = fade.get();
			float angleValue = angle.get();
			float scale = 1.2f - 0.5f * particleFade;
			float x = (float) (Math.sin(Math.toRadians((float) i + angleValue * 0.3f)) * (double) radius * (double) scale);
			float y = (float) (0.1f + (double) latched.getHeight() * Math.abs(Math.sin((double) i)));
			float z = (float) (Math.cos(Math.toRadians((float) i + angleValue * 0.3f)) * (double) radius * (double) scale);

			matrices.push();
			try {
				matrices.translate(pos.x - cameraPos.x + x, pos.y - cameraPos.y + y, pos.z - cameraPos.z + z);
				matrices.multiply(billboard); // jI.bIq
				// alpha = 0.1f * BloomAmount.VB() * IffVm.dhj(), dz.java:1191
				quad(matrices.peek(), quads, -size / 2.0f, -size / 2.0f, 0.0f, size, size,
						withAlpha(crystalColor, 0.1f * bloomAmount.getValue().floatValue() * fade.get()));
			} finally {
				matrices.pop();
			}
		}
	}

	/** jk.bDn(index, colour, seed) + jk.bDm/bDo: alternates the colour with its 0.5x dimmed variant. */
	private static int varyColor(int argb, int index, int seed) {
		long phase = System.currentTimeMillis() / (long) seed + (long) index;
		float normalized = (float) (Math.floorMod(phase, 360L)) / 360.0f;
		int variant = (int) (normalized * 2.0f);
		if (variant == 2) {
			variant = 1;
		}
		return variant == 0 ? argb : dimmed(argb);
	}

	/** mG.coe(0.5f) - scale RGB by 0.5 (mG.cob multiplies alpha; mG.coe scales the colour). */
	private static int dimmed(int argb) {
		int a = (argb >>> 24) & 0xFF;
		int r = (int) (((argb >> 16) & 0xFF) * 0.5f);
		int g = (int) (((argb >> 8) & 0xFF) * 0.5f);
		int b = (int) ((argb & 0xFF) * 0.5f);
		return (a << 24) | (r << 16) | (g << 8) | b;
	}

	/** mG.coc(other, t) - component-wise lerp with clamped t (mG_.class coc bytecode). */
	private static int mixColor(int from, int to, float t) {
		float clamped = Math.min(1.0f, Math.max(0.0f, t));
		int a = lerpChannel(from >>> 24, to >>> 24, clamped);
		int r = lerpChannel((from >> 16) & 0xFF, (to >> 16) & 0xFF, clamped);
		int g = lerpChannel((from >> 8) & 0xFF, (to >> 8) & 0xFF, clamped);
		int b = lerpChannel(from & 0xFF, to & 0xFF, clamped);
		return (a << 24) | (r << 16) | (g << 8) | b;
	}

	private static int lerpChannel(int from, int to, float t) {
		return (int) ((float) from + ((float) to - (float) from) * t);
	}

	/** mG.cob(alpha) - multiplies the existing alpha by the factor. */
	private static int withAlpha(int argb, float alpha) {
		int a = (int) (((argb >>> 24) & 0xFF) * Math.min(1.0f, Math.max(0.0f, alpha)));
		return (a << 24) | (argb & 0xFFFFFF);
	}

	/** kG.bTv(stack, x, y, z, w, h).dtF(color).dtG() as a camera-facing quad. */
	private static void quad(MatrixStack.Entry entry, VertexConsumer vc, float x, float y, float z, float w, float h, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		vc.vertex(entry, x, y, z).color(r, g, b, a);
		vc.vertex(entry, x + w, y, z).color(r, g, b, a);
		vc.vertex(entry, x + w, y + h, z).color(r, g, b, a);
		vc.vertex(entry, x, y + h, z).color(r, g, b, a);
	}

	/** 1:1 port of sixtwo.rk (rk.java:54-134, 335-360): millisecond animator toward a target value. */
	private static final class FadeAnimator {
		private int durationMs;
		private Easing easing;
		private float startValue;
		private float targetValue;
		private long startTime;
		private float value;

		FadeAnimator(int durationMs, Easing easing) {
			this.durationMs = durationMs;
			this.easing = easing;
		}

		/** rk.dhq(int). */
		void setDuration(int durationMs) {
			this.durationMs = durationMs;
		}

		/** rk.dhd(float). */
		float animateTo(float target) {
			long now = System.currentTimeMillis();
			if (target != targetValue) {
				startValue = value;
				targetValue = target;
				startTime = now;
			}
			if (durationMs <= 0) {
				value = targetValue;
				return value;
			}
			long elapsed = now - startTime;
			if (elapsed >= (long) durationMs) {
				value = targetValue;
				return value;
			}
			float t = (float) elapsed / (float) durationMs;
			value = startValue + (targetValue - startValue) * easing.apply(t);
			return value;
		}

		/** rk.dhc(boolean) - animate to 1.0f / 0.0f. */
		void set(boolean active) {
			animateTo(active ? 1.0f : 0.0f);
		}

		/** rk.dhj(). */
		float get() {
			return value;
		}

		/** rk.dhg() - dhe(0.0f): hard reset. */
		void reset() {
			value = 0.0f;
			startValue = 0.0f;
			targetValue = 0.0f;
			startTime = System.currentTimeMillis();
		}
	}

	/** 1:1 port of sixtwo.rh (rh.java:35-52): smooth angle target with linear easing. */
	private static final class AngleInterpolator {
		private final FadeAnimator animator = new FadeAnimator(1, Easing.LINEAR);
		private float targetAngle;

		/** rh.dfF(float, int) - duration clamped to >= 1 ms, easing is the default rj.Xmkbr (linear). */
		float advance(float target, int durationMs) {
			int clamped = Math.max(1, durationMs);
			this.targetAngle = target;
			animator.setDuration(clamped);
			return animator.animateTo(this.targetAngle);
		}

		/** rh.dfH(). */
		float get() {
			return animator.animateTo(targetAngle);
		}
	}

	/** Recovered rj instances used by dz (rj.java:66-141). */
	private enum Easing {
		/** rj.Xmkbr - f(x) = x. */
		LINEAR {
			@Override
			float apply(float t) {
				return t;
			}
		},
		/** rj.UPXqT - -(cos(PI * x) - 1) / 2 (rj.java:69, dgs = cos at rj.java:635). */
		EASE_IN_OUT_SINE {
			@Override
			float apply(float t) {
				return -(float) (Math.cos((float) Math.PI * t) - 1.0f) / 2.0f;
			}
		},
		/** rj.kcXTJ - x < 0.5 ? 4x^3 : 1 - (-2x + 2)^3 / 2. */
		EASE_IN_OUT_CUBIC {
			@Override
			float apply(float t) {
				if (t < 0.5f) {
					return 4.0f * t * t * t;
				}
				return 1.0f - (float) Math.pow(-2.0 * (double) t + 2.0, 3.0) / 2.0f;
			}
		};

		abstract float apply(float t);
	}
}
