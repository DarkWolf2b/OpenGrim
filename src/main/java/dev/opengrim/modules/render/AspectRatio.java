package dev.opengrim.modules.render;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Aspect Ratio (registry sixtwo.df): "Changes game aspect ratio".
 *
 * <p>parity: full. 1:1 reconstruction of sixtwo.df. Spec:
 * analysis/specs/handlers/df.md (evidence: df.java:38-40 static constants
 * AnzBQ 1.7777777777777777, fUTAw 1.6, XmhqK 1.3333333333333333,
 * df.java:47-74 constructor with "Preset" ct group of 4 cu children and
 * "Ratio" cC step 0.001 min 0.1 max 5.0 default AnzBQ, df.java:165 adV
 * branch, df.java:157 aeb, df.java:161 aea, df.java:229 adX, df.java:286
 * adW, df.java:294 adY, df.java:290 adZ).
 *
 * <p>No event listeners: the projection shell polls {@link #getAspectRatio}
 * each frame. Ratio is visible only when Preset is Custom.
 */
public class AspectRatio extends Module {
	private final ModeSetting preset = register(new ModeSetting("preset",
			List.of("custom", "16:9", "16:10", "4:3"), "custom"));
	private final DoubleSetting ratio = register(new DoubleSetting("ratio", 0.001, 0.1, 5.0, 1.7777777777777777, null));

	public AspectRatio() {
		super("aspect_ratio", "Aspect Ratio", "Changes game aspect ratio", ModuleCategory.RENDER);
	}

	@Override
	public void onTick() {
		ratio.setVisible("custom".equals(preset.getValue()));
	}

	/**
	 * Effective aspect adV (df.java:165): 16:9 pins 1.7777777777777777, 16:10
	 * pins 1.6, 4:3 pins 1.3333333333333333, else the Ratio slider value.
	 */
	public float getAspectRatio() {
		return switch (preset.getValue()) {
			case "16:9" -> 1.7777777777777777f;
			case "16:10" -> 1.6f;
			case "4:3" -> 1.3333333333333333f;
			default -> ratio.getValue().floatValue();
		};
	}

	public String getPreset() {
		return preset.getValue();
	}

	public double getRatio() {
		return ratio.getValue();
	}
}
