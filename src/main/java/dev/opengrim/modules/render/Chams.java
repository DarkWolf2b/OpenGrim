package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.util.math.Box;
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

/**
 * Chams (registry sixtwo.dv): "Renders entities through walls".
 *
 * <p>1:1 port of sixtwo.dv (analysis/decompiled/casesafe/payload-decrypted/sixtwo/dv.java +
 * javap -c on analysis/decompiled/jar-casesafe/sixtwo/dv.class for the obfuscated gates):
 * <ul>
 *   <li>{@code <init>} dv.java:118-734 - the 46-entry setting tree, mode option labels
 *       (Glass/Water/Chrome/Liquid Metal, presets Default/Neon/Chrome/Ocean/Toxic/Fire) and the
 *       per-mode visibility wiring {@code .Vf(XdqBo::SZ)} ... (dv.java:687-725)</li>
 *   <li>{@code @hG aiI(go$sX)} dv.java:938-1169 - per-frame collection (frustum {@code jJ.bIB} ->
 *       "Entities" set {@code jWIlg.VX} -> self rules) and the four shader dispatches
 *       {@code kj.bPr/bPs/bPt/bPu} (native; not executed in this rebuild)</li>
 *   <li>{@code aiM(Entity)} dv.java:840-936 (javap 7021-7116) - the public "hide original model"
 *       predicate: module enabled -> "Hide Original" -> {@code kn.YNOIY} -> entity non-null ->
 *       {@code bab()} -> not self -> in "Entities" set</li>
 *   <li>{@code @hG aiJ(gp$sZ)} dv.java:1266-1390 (javap 7997-8120) - model cancel gate
 *       (hideOriginal &amp;&amp; !kn.YNOIY &amp;&amp; bab(), then entity/set/self checks; the self pass-id
 *       constant {@code aiS("z", 13256, ...)} is unrecovered)</li>
 *   <li>{@code @hG aiK(gi)} dv.java:1175-1186 - nameplate suppression while {@code kn.YNOIY}</li>
 *   <li>{@code aiL()} dv.java:1171-1173 - preset callback via native {@code ro.diF} (not
 *       expressible; the preset value tables are native)</li>
 * </ul>
 *
 * <p>Recovered constant: the "Light Angle" suffix is {@code " deg"} - decrypted with the class's own
 * static-initializer cipher (key {@code IOGuL ^ 46605361488946}, {@code IOGuL = 43179284862255}
 * derived from the 782 dumped {@code (raw, l2)} pairs, payload
 * {@code 97 BE A5 C8 BF 6F E6 63} -> " deg").
 *
 * <p>Framework adaptations (documented gaps):
 * <ul>
 *   <li>The four {@code kj.*} shader passes (and the {@code lH}/{@code kn.bQt} model re-render queue)
 *       are native; this rebuild has no post-process consumer, so the collected entities are exposed
 *       through {@link #getChammedEntities()} and drawn as vanilla boxes in
 *       {@link WorldRenderEvent} phase AFTER_ENTITIES (visual stand-in; the original draws the
 *       entity model itself).</li>
 *   <li>{@code aiJ} has no event: the rebuild has no living-entity model-render hook. Its gate is
 *       mirrored by {@link #shouldHideOriginal(Entity)} ({@code aiM}) for later renderer wiring;
 *       {@code isChamsBatchActive} mirrors {@code kn.YNOIY} and is likewise exposed for wiring.</li>
 *   <li>{@code aiK} nameplate suppression is exposed as {@link #shouldCancelNameplate()}.</li>
 *   <li>The "Entities" set is a plain entity-type set (empty by default, matching the original's
 *       {@code cF} with only {@code .VS(jg$tJ.OCdZM)} and no {@code .VT(...)} seed) because the
 *       rebuild has no entity-picker widget.</li>
 * </ul>
 */
public class Chams extends Module {
	/** Shared re-entrancy flag matching sixtwo.kn.YNOIY (true while the replacement-model batch runs). */
	public static volatile boolean isChamsBatchActive = false;

	/** jWIlg - "Entities" set; the original binds a preset but seeds no types. */
	private final Set<EntityType<?>> entities = new HashSet<>();
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
		super("chams", "Chams", "Renders entities through walls", ModuleCategory.RENDER);
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

		// The kj.bPr/bPs/bPt/bPu shader passes are native (no consumer in this rebuild);
		// draw the collected entities as boxes instead.
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			for (Entity entity : chammed) {
				drawBoxOutline(entry, consumers, entity.getBoundingBox(), 0xFFFFFFFF);
			}
		} finally {
			matrices.pop();
		}
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
		return chams.entities.contains(entity.getType()); // jWIlg.VX
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

	private static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.lines());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a, 1.0f);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a, float width) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
