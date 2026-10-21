package dev.opengrim.modules.render;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;

/**
 * Custom FOV (registry sixtwo.dV): "Allows to set custom fov".
 *
 * <p>parity: full for the Java-visible surface. 1:1 reconstruction of
 * sixtwo.dV. Spec: analysis/specs/casesafe/handlers/dV_.md (evidence: dV.java:21-40
 * constructor with "FOV" cC step 1.0 min 30.0 max 150.0 default 90.0 and
 * gShhH init 70, dV.java:49 aaj enable writing the slider into
 * GameOptions.getFov, dV.java:60 YO disable restoring gShhH, dV.java:46 aqd
 * slider getter, dV.java:51 aqe stored-value getter; module id 53).
 *
 * <p>No event listeners: enable snapshots the live FOV into the restore
 * field, disable writes it back. (The original class declares zero @hG
 * listeners; the FOV write happens only in the aaj()/YO() lifecycle hooks.)
 *
 * <p>static re-verify 2026-10-17: dV's own bounded pool run (resolved from
 * jna-decrypted-v2.dll, pool base RVA 0x301ee50, bounded by dW's run) is
 * {@code pPdLC | aqf | gShhH | method_41808 GameOptions.getFov()LSimpleOption; |
 * iNKRn | zwVyv | iuIKj | NlXtA | aqh} — i.e. dV's declared members plus the
 * single API token {@code GameOptions.getFov()} (SimpleOption). That is
 * positive evidence for the write target used below (the handler spec only had
 * the indy-decrypted name/literals).
 *
 * <p>Suffix: the "FOV" unit string ({@code HnRzm}) is native-VM-resident, not a
 * DES literal — dV's class constant pool carries no ciphertext (checked
 * byte-wise) and the class-init stub
 * {@code _f41f24ca18273d66e52f46718dd5f912} decrypts the class's own pool
 * inside the j2cc VM. Left null, reclassified [N] (native) instead of [V].
 */
public class CustomFov extends Module {
	private final DoubleSetting fov = register(new DoubleSetting("fov", 1.0, 30.0, 150.0, 90.0, null));

	private int storedFov = 70;

	public CustomFov() {
		super("custom_fov", "Custom FOV", "Allows to set custom fov", ModuleCategory.PLAYER);
	}

	@Override
	protected void onEnable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.options != null) {
			storedFov = client.options.getFov().getValue();
			client.options.getFov().setValue((int) Math.round(fov.getValue()));
		}
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.options != null) {
			client.options.getFov().setValue(storedFov);
		}
	}

	/** "FOV" slider (dV.java aqd). */
	public double getFovValue() {
		return fov.getValue();
	}

	/** Stored vanilla FOV for YO restore (dV.java aqe, init 70). */
	public int getStoredFov() {
		return storedFov;
	}
}
