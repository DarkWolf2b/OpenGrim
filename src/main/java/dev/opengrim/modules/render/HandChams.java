package dev.opengrim.modules.render;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.HandTintEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.option.Perspective;

/**
 * Hand Chams (registry sixtwo.de): "Customizes hand rendering with custom
 * colors and transparency".
 *
 * <p>1:1 reconstruction of sixtwo.de. Ground truth (case-safe tree; the
 * plain {@code payload-decrypted/sixtwo/de.java} path collides with the
 * {@code dE} Spammer class): {@code casesafe/payload-decrypted/sixtwo/de.java}.
 * Settings ctor de.java:120-796, visibility wiring de.java:797-1017
 * ({@code Vf} predicates), preset callback wiring de.java:1017
 * ({@code Ve(this::acw)}). Decrypted pool: full-dump.jsonl {@code sixtwo.de}
 * {@code adU} records (945) confirm every char array - the first Effect
 * option is <b>"Outline"</b> (slots 6625/32573/11169/31475/23135/552/2481 =
 * 79/117/116/108/105/110/101), not "Online" (the handler spec's name is a
 * mis-read).
 *
 * <p>Settings (wrappers per the original): Effect {@code ct RgAHq} = Outline
 * ({@code cu GAQfN}, {@code .SY()} default) / Glass ({@code ALxVB}) / Water
 * ({@code ydMpG}) / Chrome ({@code DwUUB}) / Liquid Metal ({@code iFVsF});
 * Color {@code cG fSbyu} and Second Color {@code cG ykVIA} default to the
 * theme accent {@code rD.dlM().bjG().bis()} = {@code ig.bis()} =
 * {@code ie.bhJ()} = {@code mG.yHyOB} (151,71,255) of the default theme
 * {@code ig.PtFoz} (ig.java:238) - the same 0xFF9747FF default ChinaHat uses;
 * Color Mode {@code ct zRrqK} Zero/One/Two/Three; Animation Speed, Glow
 * Quality/Radius/Alpha, Fill Alpha, Saturation, Brightness and the four
 * per-effect groups with the recovered step/min/max/default/suffix chains
 * (Light Angle's suffix {@code OTglH} stays unrecovered - DES clinit literal,
 * no trace record).
 *
 * <p>Dispatch (de.java:1147-1394): {@code acs(float, boolean, Matrix4f)} runs
 * {@code act} ({@code ki.bPi} pass, Outline selected) or {@code acu} (Glass
 * {@code kj.bPr} / Water {@code kj.bPs} / Chrome {@code kj.bPt} / Liquid Metal
 * {@code kj.bPu}, else a bare hand re-render). {@code acr} = {@code bab()} &&
 * first-person; {@code acq(go.sY)} re-runs the Outline pass on the post-world
 * event; {@code acv} re-renders the hand through
 * {@code GameRendererAccessor.callRenderItemInHand} and flushes the entity
 * vertex consumers. All shader passes and {@code ro.diF} preset tables are
 * native - see the remaining-gaps list below.
 *
 * <p>Rebuild mapping: the original tints the whole first-person hand pass
 * through the native effect shaders. This rebuild approximates the visible
 * result with a uniform color/alpha multiplier on the held item's vertex
 * consumer ({@link HandTintEvent} + {@code ItemRendererMixin}, see the
 * Divergences section of PARITY.md). {@link #isHandPassActive()} carries the
 * recovered {@code acr} gate, {@link #isOutlineEffect()} the {@code acs}
 * dispatch predicate; every parameter stays behind getters for later renderer
 * wiring.
 *
 * <p>Remaining gaps: [N] {@code ki.bPi}/{@code kj.bPr..bPu} shader passes and
 * {@code ro.diF} preset tables (native, no capture); [N] {@code acv}'s hand
 * re-render (GameRendererAccessor + immediate flush) has no rebuild pipeline;
 * [U] {@code OTglH} suffix; [U] {@code acw}'s 17 preset value tables.
 */
public class HandChams extends Module {
	private final ModeSetting effect = register(new ModeSetting("effect",
			List.of("outline", "glass", "water", "chrome", "liquid_metal"), "outline"));
	private final ColorSetting color = register(new ColorSetting("color", 0xFF9747FF, false));
	private final ModeSetting colorMode = register(new ModeSetting("color_mode",
			List.of("zero", "one", "two", "three"), "zero"));
	private final ColorSetting secondColor = register(new ColorSetting("second_color", 0xFF9747FF, false));
	private final DoubleSetting animationSpeed = register(new DoubleSetting("animation_speed", 0.1, 0.0, 3.0, 1.5, null));
	private final DoubleSetting glowQuality = register(new DoubleSetting("glow_quality", 1.0, 1.0, 4.0, 2.0, null));
	private final DoubleSetting glowRadius = register(new DoubleSetting("glow_radius", 0.1, 1.0, 16.0, 4.3, null));
	private final DoubleSetting glowAlphaMultiplier = register(new DoubleSetting("glow_alpha_multiplier", 0.1, 0.0, 4.0, 1.0, null));
	private final DoubleSetting fillAlphaMultiplier = register(new DoubleSetting("fill_alpha_multiplier", 0.01, 0.0, 1.0, 0.3, null));
	private final DoubleSetting saturation = register(new DoubleSetting("saturation", 0.1, 0.0, 5.0, 0.7, null));
	private final DoubleSetting brightness = register(new DoubleSetting("brightness", 0.1, 0.0, 50.0, 2.0, null));

	private final GroupSetting glassGroup = register(new GroupSetting("glass"));
	private final DoubleSetting reflection = register(new DoubleSetting("reflection", 1.0, 0.0, 100.0, 50.0, null));
	private final DoubleSetting depth = register(new DoubleSetting("depth", 1.0, 1.0, 100.0, 20.0, null));
	private final DoubleSetting frost = register(new DoubleSetting("frost", 1.0, 0.0, 100.0, 0.0, null));
	private final DoubleSetting dispersion = register(new DoubleSetting("dispersion", 1.0, 0.0, 100.0, 0.0, null));
	private final ColorSetting tintColor = register(new ColorSetting("tint_color", 0x00000000));
	private final DoubleSetting lightAngle = register(new DoubleSetting("light_angle", 1.0, -180.0, 180.0, -45.0, null));
	private final DoubleSetting lightIntensity = register(new DoubleSetting("light_intensity", 1.0, 0.0, 100.0, 40.0, null));
	private final ColorSetting bevelColor = register(new ColorSetting("bevel_color", 0xCCFFFFFF));
	private final DoubleSetting splay = register(new DoubleSetting("splay", 1.0, 0.0, 100.0, 30.0, null));

	private final GroupSetting waterGroup = register(new GroupSetting("water"));
	private final ColorSetting waterColor = register(new ColorSetting("water_color", 0xFF194CB2));
	private final DoubleSetting flowSpeed = register(new DoubleSetting("flow_speed", 0.1, 0.1, 5.0, 1.0, null));
	private final DoubleSetting flowScale = register(new DoubleSetting("flow_scale", 0.5, 1.0, 10.0, 3.0, null));
	private final DoubleSetting waveHeight = register(new DoubleSetting("wave_height", 0.05, 0.1, 1.5, 0.5, null));
	private final DoubleSetting choppiness = register(new DoubleSetting("choppiness", 0.5, 1.0, 8.0, 3.0, null));
	private final DoubleSetting waveFreq = register(new DoubleSetting("wave_freq", 0.01, 0.05, 1.0, 0.24, null));
	private final DoubleSetting waterReflection = register(new DoubleSetting("water_reflection", 1.0, 0.0, 100.0, 30.0, null));
	private final DoubleSetting waterSpecular = register(new DoubleSetting("water_specular", 0.1, 0.0, 2.0, 0.6, null));

	private final GroupSetting chromeGroup = register(new GroupSetting("chrome"));
	private final ColorSetting chromeTint = register(new ColorSetting("chrome_tint", 0xFFD8D8E6));
	private final DoubleSetting chromeRimSharpness = register(new DoubleSetting("chrome_rim_sharpness", 0.5, 1.0, 10.0, 3.0, null));
	private final DoubleSetting chromeRimIntensity = register(new DoubleSetting("chrome_rim_intensity", 0.1, 0.0, 3.0, 2.0, null));
	private final DoubleSetting chromeSpeed = register(new DoubleSetting("chrome_speed", 0.1, 0.1, 5.0, 1.0, null));

	private final GroupSetting liquidMetalGroup = register(new GroupSetting("liquid_metal"));
	private final ModeSetting preset = register(new ModeSetting("preset",
			List.of("default", "neon", "chrome", "ocean", "toxic", "fire"), "default"));
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
	private final DoubleSetting liquidBrightness = register(new DoubleSetting("liquid_brightness", 0.1, 0.1, 10.0, 1.0, null));
	private final DoubleSetting liquidSpeed = register(new DoubleSetting("liquid_speed", 0.1, 0.0, 5.0, 0.0, null));
	private final DoubleSetting redShift = register(new DoubleSetting("red_shift", 0.05, -3.0, 3.0, 0.0, null));
	private final DoubleSetting blueShift = register(new DoubleSetting("blue_shift", 0.05, -3.0, 3.0, 0.0, null));
	private final DoubleSetting contour = register(new DoubleSetting("contour", 0.05, 0.0, 2.0, 0.0, null));
	private final DoubleSetting softness = register(new DoubleSetting("softness", 0.05, 0.1, 4.0, 1.0, null));

	public HandChams() {
		super("hand_chams", "Hand Chams", "Customizes hand rendering with custom colors and transparency",
				ModuleCategory.VISUALS);
		glassGroup.add(reflection);
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
		waterGroup.add(waterReflection);
		waterGroup.add(waterSpecular);
		chromeGroup.add(chromeTint);
		chromeGroup.add(chromeRimSharpness);
		chromeGroup.add(chromeRimIntensity);
		chromeGroup.add(chromeSpeed);
		liquidMetalGroup.add(preset);
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
		liquidMetalGroup.add(liquidBrightness);
		liquidMetalGroup.add(liquidSpeed);
		liquidMetalGroup.add(redShift);
		liquidMetalGroup.add(blueShift);
		liquidMetalGroup.add(contour);
		liquidMetalGroup.add(softness);
	}

	/**
	 * Visibility predicates, 1:1 with the constructor's {@code Vf} wiring
	 * (de.java:797-1017). The original evaluates them live in the settings
	 * tree; the rebuild refreshes them per tick like its neighbours.
	 */
	@Override
	public void onTick() {
		String fx = effect.getValue();
		boolean outline = "outline".equals(fx);
		String mode = colorMode.getValue();
		boolean modeOne = "one".equals(mode);

		// de.java:797-798 Color / Color Mode follow the Outline effect.
		color.setVisible(outline);
		colorMode.setVisible(outline);
		// de.java:799-850 Second Color: Outline && Color Mode in {Two, Three}.
		secondColor.setVisible(outline && ("two".equals(mode) || "three".equals(mode)));
		// de.java:851-899 Animation Speed: Color Mode in {One, Two, Three}.
		animationSpeed.setVisible(!"zero".equals(mode));
		// de.java:900-903 Outline glow / fill settings.
		glowQuality.setVisible(outline);
		glowRadius.setVisible(outline);
		glowAlphaMultiplier.setVisible(outline);
		fillAlphaMultiplier.setVisible(outline);
		// de.java:904-977 Brightness / Saturation: Outline && Color Mode == One.
		brightness.setVisible(outline && modeOne);
		saturation.setVisible(outline && modeOne);
		// de.java:978-1016 per-effect groups.
		for (var s : glassGroup.getChildren()) {
			s.setVisible("glass".equals(fx));
		}
		for (var s : waterGroup.getChildren()) {
			s.setVisible("water".equals(fx));
		}
		for (var s : chromeGroup.getChildren()) {
			s.setVisible("chrome".equals(fx));
		}
		for (var s : liquidMetalGroup.getChildren()) {
			s.setVisible("liquid_metal".equals(fx));
		}
	}

	/**
	 * Gate {@code acr} (de.java:1183-1219): {@code bab()} - enabled, player,
	 * world, interaction manager and network handler present (gg.java:393-459)
	 * - plus the first-person camera check.
	 */
	public boolean isHandPassActive() {
		if (!isEnabled()) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return false;
		}
		return client.options != null
				&& client.options.getPerspective() == Perspective.FIRST_PERSON;
	}

	/**
	 * Hand tint (ItemRendererMixin consumer). The original applies per-effect
	 * shader passes ({@code ki.bPi} Outline branch, kj facades) that have no
	 * rebuild counterpart; this maps each effect onto a uniform color/alpha
	 * multiplier of the held item (see PARITY-DIVERGENCES.md). The mode-to-
	 * color mapping is a labeled approximation:
	 * <ul>
	 * <li>outline - Color/Color Mode: One tints with Color, Two/Three with
	 * Second Color, Zero leaves the item untinted</li>
	 * <li>glass - Tint Color at reduced alpha (translucent approximation)</li>
	 * <li>water - Water Color</li>
	 * <li>chrome - Chrome Tint</li>
	 * <li>liquid_metal - Color One</li>
	 * </ul>
	 */
	@Subscribe
	public void onHandTint(HandTintEvent event) {
		if (!isHandPassActive()) {
			return;
		}
		switch (effect.getValue()) {
			case "outline" -> {
				String mode = colorMode.getValue();
				if ("zero".equals(mode)) {
					return;
				}
				int argb = "one".equals(mode) ? color.getValue() : secondColor.getValue();
				event.set(red(argb), green(argb), blue(argb), 1.0f);
			}
			case "glass" -> {
				int argb = tintColor.getValue();
				event.set(red(argb), green(argb), blue(argb), 0.55f);
			}
			case "water" -> {
				int argb = waterColor.getValue();
				event.set(red(argb), green(argb), blue(argb), 0.8f);
			}
			case "chrome" -> {
				int argb = chromeTint.getValue();
				event.set(red(argb), green(argb), blue(argb), 1.0f);
			}
			case "liquid_metal" -> {
				int argb = colorOne.getValue();
				event.set(red(argb), green(argb), blue(argb), 1.0f);
			}
			default -> {
			}
		}
		event.setActive(true);
	}

	private static float red(int argb) {
		return ((argb >>> 16) & 0xFF) / 255.0f;
	}

	private static float green(int argb) {
		return ((argb >>> 8) & 0xFF) / 255.0f;
	}

	private static float blue(int argb) {
		return (argb & 0xFF) / 255.0f;
	}

	/**
	 * Dispatch {@code acs} (de.java:1156-1181): Outline selected runs the
	 * {@code act}/ki.bPi branch ({@code GAQfN.SZ()}), everything else runs
	 * {@code acu} (kj facades).
	 */
	public boolean isOutlineEffect() {
		return "outline".equals(effect.getValue());
	}

	public String getEffect() {
		return effect.getValue();
	}

	public String getColorMode() {
		return colorMode.getValue();
	}

	public String getPreset() {
		return preset.getValue();
	}

	public int getColor() {
		return color.getValue();
	}

	public int getSecondColor() {
		return secondColor.getValue();
	}
}
