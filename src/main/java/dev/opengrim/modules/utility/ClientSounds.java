package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Client Sounds (registry sixtwo.fR, module id 103): "Manages sounds of client".
 * Category {@code gh.KfAlY} (fR.java:23).
 *
 * <p>parity: settings 2/2 top-level, behavior partial. 1:1 reconstruction of
 * sixtwo.fR. Spec: analysis/specs/handlers/fR.md (evidence:
 * payload-decrypted/sixtwo/fR.java:21-68 constructor with Sound Type ct,
 * Normal cu, Bubble cu, Sound Volume cC Vy(1.0) Vw(0.0) Vx(100.0) VA(70.0)
 * Vz(ymMTJ), fR.java:23 {@code gf.aZL(103, true, gh.KfAlY)} — the {@code true}
 * metadata flag (boot-enabled; fO precedent), fR.java:75-85 accessors aWH
 * group, aWI Normal, aWJ Bubble, aWK volume, zero Minecraft tokens in the
 * slice, gI sound-event consumer in dQ). Native corpus
 * analysis/ghidra/handlers-full-annotated/sixtwo_fR.c (verified
 * {@code Lsixtwo/fR;}).
 *
 * <p>Recovered: Sound Type group with Normal and Bubble options, Sound Volume
 * chain (step 1, min 0, max 100, default 70), settings-provider shape with no
 * state, timers or event wiring — a pure service module; accessor contract for
 * sound consumers (dQ Hit Sounds is the proven adjacent consumer).
 *
 * <p><b>Recovered group default (2026-10-18 re-verify):</b> Sound Type is a
 * {@code ct}+{@code cu} radio pair; {@code ct}'s constructor sets the selected
 * index to 0 (casesafe/payload-named-cfr/sixtwo/ct.java:33-41) and only
 * {@code cu.SY()} changes it (cu.java:200-202). Neither option is marked in
 * fR's constructor (fR.java:24-46), so the default is the first entry — Normal
 * (the port's "normal" default is evidenced, not a guess).
 *
 * <p>high-probability guess: the Sound Volume suffix {@code ymMTJ} is
 * native-decrypted and unrecovered — cited as " %" (0-100 slider, identical
 * range to dQ's recovered " %" volume slider).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): the module was never
 * enabled in the capture (load only), so the aWH/aWI/aWJ/aWK accessors did not
 * run — they are pure field reads with no behavior bodies in this class.
 * Capture condition: play a sound with the module enabled (e.g. hit a mob) so
 * the sound-event consumer queries the profile.
 */
public class ClientSounds extends Module {
	private final ModeSetting soundType = register(new ModeSetting("sound_type",
			List.of("normal", "bubble"), "normal"));
	private final DoubleSetting soundVolume = register(new DoubleSetting("sound_volume", 1.0, 0.0, 100.0, 70.0, " %"));

	public ClientSounds() {
		super("client_sounds", "Client Sounds", "Manages sounds of client", ModuleCategory.UTILITY);
	}

	/**
	 * Boot-enabled: the original registers fR with the {@code true} metadata
	 * flag ({@code gf.aZL(103, true, gh.KfAlY)}, fR.java:23; handlers/fR.md
	 * "Runtime model") — the same flag fO Discord Activity carries
	 * (module/fO precedent). The client enables it before config load.
	 */
	@Override
	public boolean bootEnabled() {
		return true;
	}

	/**
	 * Accessor (sixtwo.fR#aWH): returns the Sound Type group.
	 */
	public ModeSetting soundType() {
		return soundType;
	}

	/**
	 * Accessor (sixtwo.fR#aWI): returns the Normal option state.
	 */
	public boolean isNormal() {
		return "normal".equals(soundType.getValue());
	}

	/**
	 * Accessor (sixtwo.fR#aWJ): returns the Bubble option state.
	 */
	public boolean isBubble() {
		return "bubble".equals(soundType.getValue());
	}

	/**
	 * Accessor (sixtwo.fR#aWK): returns the Sound Volume slider.
	 */
	public DoubleSetting soundVolume() {
		return soundVolume;
	}
}
