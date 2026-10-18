package dev.opengrim.modules.render;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;

/**
 * Anti Blind (registry sixtwo.dx): "Allows to disable screen effects".
 *
 * <p>parity: full over the recovered surface. 1:1 reconstruction of sixtwo.dx.
 * Spec: analysis/specs/casesafe/handlers/dx.md (evidence: dx.java:31-193
 * constructor with 8 folded char-array toggle names, dx.java:300-328 eight
 * one-instruction field-load accessors ajk-ajr). Trace 2026-10-17: class load
 * only (never toggled in the tour).
 *
 * <p>The original declares no handlers, no enable/disable overrides, no state
 * and no Minecraft imports: a pure settings holder. The eight toggles are
 * read by the overlay/mixin layer through the accessors; this rebuild exposes
 * the same eight toggles through getters and performs no drawing itself.
 *
 * <p>Remaining gap [U]: the consumer side (which overlay each toggle cancels
 * and at which injection points) lives in the bootstrap mixin layer, which is
 * not part of the decompiled corpus — nothing in the payload or trace calls
 * the accessors, so no 1:1 wiring can be recovered. The toggles are inert
 * here until such consumers exist.
 */
public class AntiBlind extends Module {
	private final BoolSetting disableFire = register(new BoolSetting("disable_fire", false));
	private final BoolSetting disablePumpkinBlur = register(new BoolSetting("disable_pumpkin_blur", false));
	private final BoolSetting disableFreezing = register(new BoolSetting("disable_freezing", false));
	private final BoolSetting disableNausea = register(new BoolSetting("disable_nausea", false));
	private final BoolSetting disableBlindness = register(new BoolSetting("disable_blindness", false));
	private final BoolSetting disableDarkness = register(new BoolSetting("disable_darkness", false));
	private final BoolSetting disableSuffocationOverlay = register(new BoolSetting("disable_suffocation_overlay", false));
	private final BoolSetting disableWaterOverlay = register(new BoolSetting("disable_water_overlay", false));

	public AntiBlind() {
		super("anti_blind", "Anti Blind", "Allows to disable screen effects", ModuleCategory.RENDER);
	}

	/** "Disable Fire" (dx.java accessor ajk, field rNxMx). */
	public boolean isDisableFire() {
		return disableFire.getValue();
	}

	/** "Disable Pumpkin Blur" (dx.java accessor ajl, field uiQvy). */
	public boolean isDisablePumpkinBlur() {
		return disablePumpkinBlur.getValue();
	}

	/** "Disable Freezing" (dx.java accessor ajm, field MMhZn). */
	public boolean isDisableFreezing() {
		return disableFreezing.getValue();
	}

	/** "Disable Nausea" (dx.java accessor ajn, field kKviC). */
	public boolean isDisableNausea() {
		return disableNausea.getValue();
	}

	/** "Disable Blindness" (dx.java accessor ajo, field FAwHq). */
	public boolean isDisableBlindness() {
		return disableBlindness.getValue();
	}

	/** "Disable Darkness" (dx.java accessor ajp, field kFBwN). */
	public boolean isDisableDarkness() {
		return disableDarkness.getValue();
	}

	/** "Disable Suffocation Overlay" (dx.java accessor ajq, field EiPlS). */
	public boolean isDisableSuffocationOverlay() {
		return disableSuffocationOverlay.getValue();
	}

	/** "Disable Water Overlay" (dx.java accessor ajr, field IeNYH). */
	public boolean isDisableWaterOverlay() {
		return disableWaterOverlay.getValue();
	}
}
