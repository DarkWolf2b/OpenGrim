package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import org.lwjgl.glfw.GLFW;

/**
 * Chams (registry sixtwo.dv): "Renders entities through walls".
 *
 * <p>1:1 port of sixtwo.dv (analysis/decompiled/casesafe/payload-decrypted/sixtwo/dv.java +
 * javap -c on analysis/decompiled/jar-casesafe/sixtwo/dv.class for the obfuscated gates):
 * <ul>
 *   <li>{@code <init>} dv.java:118-734 - the 46-entry setting tree, mode option labels
 *       (Glass/Water/Chrome/Liquid Metal, presets Default/Neon/Chrome/Ocean/Toxic/Fire) and the
 *       per-mode visibility wiring {@code .Vf(XdqBo::SZ)} ... (dv.java:687-725)</li>
 *   <li>{@code @hG aiI(go$sX)} dv.java:938-1169 - per-frame collection (frustum {@code jJ.bIB} -&gt;
 *       "Entities" set {@code jWIlg.VX} -&gt; self rules) and the four shader dispatches
 *       {@code kj.bPr/bPs/bPt/bPu}; {@link ChamsRenderer} reproduces the recovered
 *       mask + background + full-screen composite pipeline.</li>
 *   <li>{@code aiM(Entity)} dv.java:840-936 (javap 7021-7116) - the public "hide original model"
 *       predicate: module enabled -&gt; "Hide Original" -&gt; {@code kn.YNOIY} -&gt; entity non-null -&gt;
 *       {@code bab()} -&gt; not self -&gt; in "Entities" set</li>
 *   <li>{@code @hG aiJ(gp$sZ)} dv.java:1266-1390 (javap 7997-8120) - model cancel gate
 *       (hideOriginal &amp;&amp; !kn.YNOIY &amp;&amp; bab(), then entity/set/self checks). The self
 *       branch compares {@code gp$sZ.bbn()} - which the bootstrap fills with
 *       {@code LivingEntityRenderState.light} (field_61820) - against
 *       {@code aiS("z", 13256, ...)}; that constant decrypts to 15728880
 *       ({@code 0x00F000F0}, full-bright) with the class's own table cipher. Mapped to
 *       {@link #shouldHideModel(Entity, int)} + {@code LivingEntityRendererMixin},
 *       including the original bootstrap's {@code aiM} leash/nameplate fallback.</li>
 *   <li>{@code @hG aiK(gi)} dv.java:1175-1186 - nameplate suppression while {@code kn.YNOIY}</li>
 *   <li>{@code aiL()} dv.java:1171-1173 - preset callback via native {@code ro.diF} (not
 *       expressible; the preset value tables are native)</li>
 * </ul>
 *
 * <p>Recovered constants: the "Light Angle" suffix is {@code " deg"} - decrypted with the class's own
 * static-initializer cipher (key {@code IOGuL ^ 46605361488946}, {@code IOGuL = 43179284862255}
 * derived from the 782 dumped {@code (raw, l2)} pairs, payload
 * {@code 97 BE A5 C8 BF 6F E6 63} -&gt; " deg"). The {@code aiS("z",13256,...)}
 * argument of {@code aiJ} decrypts with the same {@code gttrI} table to
 * {@code 15728880} ({@code 0x00F000F0}, full-bright); {@code gp$sZ.bbn()} is the
 * entity state's light value, not a pass id.
 *
 * <p>Recovered default set: {@code cF}'s constructor seeds {@code EntityType.PLAYER}
 * (cF.java:33-36) and {@code VS(jg$tJ.OCdZM)} only binds the universe (living entities
 * minus armor stands); {@code VX} requires a non-empty selection (cF.java:230-268), so the
 * default Chams target is players. The earlier "empty by default" reading was wrong.
 *
 * <p>Genuine native gap: {@code ro.diF} preset tables (Liquid Metal Preset) remain native;
 * selecting a preset changes nothing in this rebuild. Everything else - the four recovered
 * shader stages, mask/background targets, model re-render and hide-original gate - is wired.
 */
public class Chams extends Module {
	/** dv.aiS("z",13256,...) decrypted with the class table cipher: 15728880 = 0x00F000F0. */
	private static final int FULL_BRIGHT_LIGHT = 0x00F000F0;

	/** Shared re-entrancy flag matching sixtwo.kn.YNOIY (true while the replacement-model batch runs). */
	public static volatile boolean isChamsBatchActive = false;

	/** jWIlg - "Entities" set; cF's constructor seeds PLAYER (cF.java:33-36). */
	private final Set<EntityType<?>> entities = new HashSet<>(List.of(EntityType.PLAYER));
	private final BoolSetting hideOriginal = register(new BoolSetting("hide_original", true));
	private final BoolSetting applyToOwnPlayer = register(new BoolSetting("apply_to_own_player", false));
	private final ModeSetting effect = register(new ModeSetting("effect",
			List.of("Glass", "Water", "Chrome", "Liquid Metal"), "Glass"));

	private final DoubleSetting refraction = register(new DoubleSetting("refraction", 1.0, 0.0, 100.0, 50.0, null));
	private final DoubleSetting depth = register(new DoubleSetting("depth", 1.0, 1.0, 100.0, 20.0, null));
	private final DoubleSetting frost = register(new DoubleSetting("frost", 1.0, 0.0, 100.0, 0.0, null));
	private final DoubleSetting dispersion = register(new DoubleSetting("dispersion", 1.0, 0.0, 100.0, 0.0, null));
	private final ColorSetting tintColor = register(new ColorSetting("tint_color", 0x00000000));
	private final DoubleSetting lightAngle = register(new DoubleSetting("light_angle", 1.0, -180.0, 180.0, -45.0, " deg"));
	private final DoubleSetting lightIntensity = register(new DoubleSetting("light_intensity", 1.0, 0.0, 100.0, 40.0, null));
	private final ColorSetting bevelColor = register(new ColorSetting("bevel_color", 0xCCFFFFFF));
	private final DoubleSetting splay = register(new DoubleSetting("splay", 1.0, 0.0, 100.0, 30.0, null));

	private final ColorSetting waterColor = register(new ColorSetting("water_color", 0xFF194CB2));
	private final DoubleSetting flowSpeed = register(new DoubleSetting("flow_speed", 0.1, 0.1, 5.0, 1.0, null));
	private final DoubleSetting flowScale = register(new DoubleSetting("flow_scale", 0.5, 1.0, 10.0, 3.0, null));
	private final DoubleSetting waveHeight = register(new DoubleSetting("wave_height", 0.05, 0.1, 1.5, 0.5, null));
	private final DoubleSetting choppiness = register(new DoubleSetting("choppiness", 0.5, 1.0, 8.0, 3.0, null));
	private final DoubleSetting waveFreq = register(new DoubleSetting("wave_freq", 0.01, 0.05, 1.0, 0.24, null));
	private final DoubleSetting waterRefraction = register(new DoubleSetting("water_refraction", 1.0, 0.0, 100.0, 30.0, null));
	private final DoubleSetting waterSpecular = register(new DoubleSetting("water_specular", 0.1, 0.0, 2.0, 0.6, null));

	private final ColorSetting chromeTint = register(new ColorSetting("chrome_tint", 0xFFD8D8E6));
	private final DoubleSetting chromeRimSharpness = register(new DoubleSetting("chrome_rim_sharpness", 0.5, 1.0, 10.0, 3.0, null));
	private final DoubleSetting chromeRimIntensity = register(new DoubleSetting("chrome_rim_intensity", 0.1, 0.0, 3.0, 2.0, null));
	private final DoubleSetting chromeSpeed = register(new DoubleSetting("chrome_speed", 0.1, 0.1, 5.0, 1.0, null));

	private final ModeSetting preset = register(new ModeSetting("preset",
			List.of("Default", "Neon", "Chrome", "Ocean", "Toxic", "Fire"), "Default"));

	private final DoubleSetting scale = register(new DoubleSetting("scale", 0.1, 0.5, 20.0, 1.02, null));
	private final DoubleSetting noiseFreqX = register(new DoubleSetting("noise_freq_x", 0.1, 0.1, 20.0, 1.7, null));
	private final DoubleSetting noiseFreqY = register(new DoubleSetting("noise_freq_y", 0.1, 0.1, 20.0, 7.9, null));
	private final DoubleSetting noiseFreqX2 = register(new DoubleSetting("noise_freq_x2", 0.1, 0.1, 20.0, 5.8, null));
	private final DoubleSetting noiseFreqY2 = register(new DoubleSetting("noise_freq_y2", 0.1, 0.1, 20.0, 4.5, null));
	private final DoubleSetting warpIntensityX = register(new DoubleSetting("warp_intensity_x", 0.05, -5.0, 5.0, 0.62, null));
	private final DoubleSetting warpIntensityY = register(new DoubleSetting("warp_intensity_y", 0.05, -5.0, 5.0, 1.0, null));
	private final ColorSetting colorOne = register(new ColorSetting("color_one", 0xFFB3B3B3));
	private final ColorSetting colorTwo = register(new ColorSetting("color_two", 0xFF202020));
	private final ColorSetting colorThree = register(new ColorSetting("color_three", 0xFF252525));
	private final ColorSetting colorFour = register(new ColorSetting("color_four", 0xFF313131));
	private final DoubleSetting brightness = register(new DoubleSetting("brightness", 0.1, 0.1, 10.0, 1.0, null));
	private final DoubleSetting speed = register(new DoubleSetting("speed", 0.1, 0.0, 5.0, 0.0, null));
	private final DoubleSetting redShift = register(new DoubleSetting("red_shift", 0.05, -3.0, 3.0, 0.0, null));
	private final DoubleSetting blueShift = register(new DoubleSetting("blue_shift", 0.05, -3.0, 3.0, 0.0, null));
	private final DoubleSetting contour = register(new DoubleSetting("contour", 0.05, 0.0, 2.0, 0.0, null));
	private final DoubleSetting softness = register(new DoubleSetting("softness", 0.05, 0.1, 4.0, 1.0, null));

	private final GroupSetting glassGroup = register(new GroupSetting("glass"));
	private final GroupSetting waterGroup = register(new GroupSetting("water"));
	private final GroupSetting chromeGroup = register(new GroupSetting("chrome"));
	private final GroupSetting liquidMetalGroup = register(new GroupSetting("liquid_metal"));

	private final List<Entity> chammed = new ArrayList<>();

	public Chams() {
		super("chams", "Chams", "Renders entities through walls", ModuleCategory.VISUALS);
		glassGroup.add(refraction);
		glassGroup.add(depth);
		glassGroup.add(frost);
		glassGroup.add(dispersion);
		glassGroup.add(tintColor);
		glassGroup.add(lightAngle);
		glassGroup.add(lightIntensity);
		glassGroup.add(bevelColor);
		glassGroup.add(splay);
		waterGroup.add(waterColor);
		waterGroup.add(flowSpeed);
		waterGroup.add(flowScale);
		waterGroup.add(waveHeight);
		waterGroup.add(choppiness);
		waterGroup.add(waveFreq);
		waterGroup.add(waterRefraction);
		waterGroup.add(waterSpecular);
		chromeGroup.add(chromeTint);
		chromeGroup.add(chromeRimSharpness);
		chromeGroup.add(chromeRimIntensity);
		chromeGroup.add(chromeSpeed);
		liquidMetalGroup.add(scale);
		liquidMetalGroup.add(noiseFreqX);
		liquidMetalGroup.add(noiseFreqY);
		liquidMetalGroup.add(noiseFreqX2);
		liquidMetalGroup.add(noiseFreqY2);
		liquidMetalGroup.add(warpIntensityX);
		liquidMetalGroup.add(warpIntensityY);
		liquidMetalGroup.add(colorOne);
		liquidMetalGroup.add(colorTwo);
		liquidMetalGroup.add(colorThree);
		liquidMetalGroup.add(colorFour);
		liquidMetalGroup.add(brightness);
		liquidMetalGroup.add(speed);
		liquidMetalGroup.add(redShift);
		liquidMetalGroup.add(blueShift);
		liquidMetalGroup.add(contour);
		liquidMetalGroup.add(softness);
	}

	@Override
	public void onTick() {
		// dv.java:687-725 visibility chains (.Vf(XdqBo::SZ) etc.); the original uses live
		// predicates, the rebuild refreshes them per tick (AutoLogout/AimAssist convention).
		updateVisibility();
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null) {
			return; // bab() gate, dv.java:957
		}

		// aiI collection, dv.java:966-1048: frustum -> "Entities" set -> self rules.
		Frustum frustum = client.worldRenderer.getCapturedFrustum();
		boolean firstPerson = client.options.getPerspective().isFirstPerson();
		chammed.clear();
		for (Entity entity : client.world.getEntities()) {
			if (frustum != null && !frustum.isVisible(entity.getBoundingBox())) {
				continue; // jJ.bIB
			}
			if (!inUniverse(entity)) {
				continue; // jWIlg.VX universe AcnID = jg$tJ.OCdZM
			}
			if (!entities.contains(entity.getType())) {
				continue; // jWIlg.VX
			}
			if (entity == player && !applyToOwnPlayer.getValue()) {
				continue;
			}
			if (entity == player && firstPerson) {
				continue;
			}
			chammed.add(entity);
		}
		if (chammed.isEmpty()) {
			return; // dv.java:1052-1060
		}

		CameraRenderState cameraState = event.context().worldState().cameraRenderState;
		MatrixStack matrices = event.context().matrices();
		if (cameraState == null || matrices == null) {
			return;
		}
		ChamsRenderer.render(chammed, matrices, cameraState, event.camera().getCameraPos(),
				client.getRenderTickCounter().getTickProgress(true), effect.getValue(), uniforms());
	}

	/** Builds the recovered {@code jL.bJq/bJt} argument order (see ChamsRenderer). */
	private float[] uniforms() {
		float[] slots = ChamsRenderer.pack((float) GLFW.glfwGetTime());
		switch (effect.getValue()) {
			case "Glass" -> {
				ChamsRenderer.put(slots, 1, f(refraction), f(depth), f(frost), f(dispersion));
				ChamsRenderer.put(slots, 2, f(lightAngle), f(lightIntensity), f(splay), 0.0f);
			}
			case "Water" -> {
				ChamsRenderer.put(slots, 1, f(flowSpeed), f(flowScale), f(waterRefraction), f(waterSpecular));
				ChamsRenderer.put(slots, 2, f(waveHeight), f(choppiness), f(waveFreq), 0.0f);
			}
			case "Chrome" -> ChamsRenderer.put(slots, 1,
					f(chromeSpeed), f(chromeRimSharpness), f(chromeRimIntensity), 0.0f);
			case "Liquid Metal" -> {
				ChamsRenderer.put(slots, 1, f(scale), f(noiseFreqX), f(noiseFreqY), f(noiseFreqX2));
				ChamsRenderer.put(slots, 2, f(noiseFreqY2), f(warpIntensityX), f(warpIntensityY), f(brightness));
				ChamsRenderer.put(slots, 3, f(speed), f(redShift), f(blueShift), f(contour));
				ChamsRenderer.put(slots, 4, f(softness), 0.0f, 0.0f, 0.0f);
			}
			default -> {
			}
		}
		ChamsRenderer.putColor(slots, 6, 0xFFFFFFFF); // colorModulator
		if ("Water".equals(effect.getValue())) {
			ChamsRenderer.putColor(slots, 5, waterColor.getValue());
		} else if ("Chrome".equals(effect.getValue())) {
			ChamsRenderer.putColor(slots, 5, chromeTint.getValue());
		} else if ("Glass".equals(effect.getValue())) {
			ChamsRenderer.putColor(slots, 5, tintColor.getValue());
			ChamsRenderer.putColor(slots, 7, bevelColor.getValue()); // lightColor
		}
		int[] colors = liquidColors();
		for (int i = 0; i < 4; i++) {
			ChamsRenderer.putColor(slots, 8 + i, colors[i]);
		}
		return slots;
	}

	private int[] liquidColors() {
		return new int[]{colorOne.getValue(), colorTwo.getValue(),
				colorThree.getValue(), colorFour.getValue()};
	}

	private float f(DoubleSetting setting) {
		return setting.getValue().floatValue();
	}

	@Override
	protected void onDisable() {
		chammed.clear();
		isChamsBatchActive = false;
	}

	/**
	 * aiM(Entity), dv.java:840-936 (javap 7021-7116): module enabled -&gt; "Hide Original" -&gt;
	 * {@code kn.YNOIY} -&gt; entity non-null -&gt; {@code bab()} -&gt; not self -&gt; "Entities" set.
	 */
	public static boolean shouldHideOriginal(Entity entity) {
		Module module = ModuleManager.get().byId("chams");
		if (!(module instanceof Chams chams)) {
			return false; // dv2 == null
		}
		if (!chams.isEnabled()) {
			return false; // bag()
		}
		if (!chams.hideOriginal.getValue()) {
			return false; // NPcDw.WF()
		}
		if (isChamsBatchActive) {
			return false; // kn.YNOIY
		}
		if (entity == null) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return false; // bab()
		}
		if (entity == client.player) {
			return false;
		}
		return inUniverse(entity) && chams.entities.contains(entity.getType()); // jWIlg.VX
	}

	/** jg$tJ.OCdZM universe: living entity types minus ARMOR_STAND (jg.java:1400-1428). */
	private static boolean inUniverse(Entity entity) {
		return entity instanceof net.minecraft.entity.LivingEntity
				&& !(entity instanceof net.minecraft.entity.decoration.ArmorStandEntity);
	}

	/**
	 * aiJ's model gate (dv.java:1266-1390) used by the entity renderer mixin.
	 * {@code gp$sZ.bbn()} is not a pass id: the bootstrap passes
	 * {@code LivingEntityRenderState.light} (field_61820), and the unrecovered
	 * {@code aiS("z", 13256, ...)} constant decrypts to {@code 15728880}
	 * ({@code 0x00F000F0}) with the class table cipher, so a full-bright self
	 * model is exempt. The rest of the self branch is the recovered
	 * apply-to-own-player / first-person gate.
	 */
	public static boolean shouldHideModel(Entity entity, int light) {
		if (entity == null) {
			return false;
		}
		Module module = ModuleManager.get().byId("chams");
		if (!(module instanceof Chams chams) || !chams.isEnabled() || !chams.hideOriginal.getValue()) {
			return false;
		}
		if (isChamsBatchActive) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return false;
		}
		if (!inUniverse(entity) || !chams.entities.contains(entity.getType())) {
			return false;
		}
		if (!ChamsRenderer.available(chams.effect.getValue())) {
			return false;
		}
		if (entity == client.player) {
			if (light == FULL_BRIGHT_LIGHT) {
				return false; // dv.java:1339: bbn() != aiS(...) ? continue : return
			}
			return chams.applyToOwnPlayer.getValue()
					&& !client.options.getPerspective().isFirstPerson();
		}
		return true;
	}

	/** aiK(gi), dv.java:1175-1186: vanilla nameplates are suppressed while {@code kn.YNOIY} is set. */
	public static boolean shouldCancelNameplate() {
		return isChamsBatchActive;
	}

	/** Entities collected on the last frame per aiI selection. */
	public List<Entity> getChammedEntities() {
		return List.copyOf(chammed);
	}

	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(entities);
	}

	public void addEntityType(EntityType<?> type) {
		entities.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		entities.remove(type);
	}

	private void updateVisibility() {
		String fx = effect.getValue();
		boolean glass = "Glass".equals(fx);
		boolean water = "Water".equals(fx);
		boolean chrome = "Chrome".equals(fx);
		boolean liquid = "Liquid Metal".equals(fx);
		for (var s : glassGroup.getChildren()) {
			s.setVisible(glass);
		}
		for (var s : waterGroup.getChildren()) {
			s.setVisible(water);
		}
		for (var s : chromeGroup.getChildren()) {
			s.setVisible(chrome);
		}
		for (var s : liquidMetalGroup.getChildren()) {
			s.setVisible(liquid);
		}
		preset.setVisible(liquid); // yZFow.Vf(ezBRY::SZ), dv.java:708
	}
}
