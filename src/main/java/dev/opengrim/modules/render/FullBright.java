package dev.opengrim.modules.render;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;

/**
 * Full Bright (registry sixtwo.dB): "Changes gamma value".
 *
 * <p>parity: full for the Java-visible contract. 1:1 reconstruction of
 * sixtwo.dB. Spec: analysis/specs/handlers/dB.md (evidence: dB.java:10-13
 * constructor with no settings and module id 71, pool run POOL[0x9076,0xb4)
 * with GameOptions options, getGamma, SimpleOption getValue/setValue and
 * double field oxuOm, aaj on-enable gamma boost, YO on-disable restore with
 * the token-less trampoline slice). Shell: payload-named-cfr/sixtwo/dB.java:
 * 11-37 (declared class dB — the payload-decrypted dB.java path holds db
 * "Jump Circle", case-twin trap).
 *
 * <p>No settings, no tick work: enable stores the live gamma into the restore
 * field and writes the boost value, disable writes the stored value back.
 *
 * <p>The boost value must pass the vanilla option's validator: the gamma
 * option is built with {@code SimpleOption.DoubleSliderCallbacks} in the yarn
 * 1.21.11+build.6 named jar ({@code GameOptions.<init>}, string
 * "options.gamma", default 0.5), and {@code DoubleSliderCallbacks.validate}
 * accepts only {@code [0.0, 1.0]} — {@code SimpleOption.setValue} keeps the
 * old value when validation fails. A value above 1.0 (the previous 16.0
 * stand-in) is therefore silently rejected and the module was a no-op; 1.0
 * (vanilla's maximum gamma) is the high-probability reading of the VM-hidden
 * constant. Restore still writes back the exact captured value.
 *
 * <p>trace 2026-10-17: aaj ran 1× on enable (166487634008, ~17ms under trace
 * load) and YO 1× on disable; aaj's only nested sixtwo call is the shared VM
 * tripwire {@code ee.arS()} (null → normal path). No numeric/string constants
 * surfaced.
 */
public class FullBright extends Module {
	/**
	 * Boost gamma written on enable; 1.0 = vanilla maximum (see class javadoc
	 * for the validator constraint — the VM-hidden exact value is unrecovered,
	 * dB.md "Unrecovered" 2).
	 */
	private static final double BOOST_GAMMA = 1.0;

	private double prevGamma = 0.5;
	private boolean hasStored;

	public FullBright() {
		super("full_bright", "Full Bright", "Changes gamma value", ModuleCategory.RENDER);
	}

	@Override
	protected void onEnable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.options == null) {
			return;
		}
		prevGamma = client.options.getGamma().getValue();
		hasStored = true;
		client.options.getGamma().setValue(BOOST_GAMMA);
	}

	@Override
	protected void onDisable() {
		if (!hasStored) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.options != null) {
			client.options.getGamma().setValue(prevGamma);
		}
		hasStored = false;
	}
}
