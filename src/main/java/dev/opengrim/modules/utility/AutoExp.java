package dev.opengrim.modules.utility;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;

/**
 * Auto Exp (registry sixtwo.eh, module id 25, bind 74): "Throws exp bottles
 * faster".
 *
 * <p>parity: settings 1/1 top-level, behavior partial. 1:1 reconstruction of
 * sixtwo.eh. Spec: analysis/specs/casesafe/handlers/eh.md (verified as
 * sixtwo.eh — the non-casesafe specs/handlers/eh.md path carries sixtwo.eH
 * "Spear Dash" content because of the eH/eh filename collision); evidence:
 * payload-decrypted/sixtwo/eh.java:21-35 constructor with Cooldown cA
 * UG(1.0) UE(0.0) UF(10.0) UI(0.0,0.0) UH(QZqXr) and mT.cpz() timer,
 * eh.java:50-51 asy tick listener, pool slice with Items.EXPERIENCE_BOTTLE.
 *
 * <p>Registry bind 74 (metadata.txt:90, key=25 bind=74 — the only bound
 * module in this batch) is wired via {@code setBind(74)}; our KeybindManager
 * toggles bound modules on press. The pool proves no use/throw tokens, so the
 * trigger below stays the use-key poll (see parity notes).
 *
 * <p>Recovered: Cooldown chain (step 1, min 0, max 10, defaults 0 and 0),
 * per-module mT timer, tick entry gated by module toggle, held
 * EXPERIENCE_BOTTLE check, timer exceeding Cooldown before re-use.
 *
 * <p>Parity notes: the throw mechanism and the trigger source are virtualized
 * (casesafe/handlers/eh.md "Unrecovered" #1/#3 — bind 74 has no visible event).
 * The use-key poll below is the designer-discretion stand-in for "toggle + bind
 * satisfied"; the hundredms-to-seconds Cooldown conversion (step 1.0, 0-10)
 * reads the constraint as seconds, matching the mT-timer elapsed pattern. The
 * post-throw hand swing is not in eh's recovered token run — kept only because
 * interactItem alone does not animate the throw locally.
 *
 * <p>trace 2026-10-17 (registry id 25): {@code asy} did not trigger in the 4&nbsp;s
 * window (zero method entries — only the decryptor helpers entered nothing either). Capture
 * condition for a follow-up: enable the module and hold the use key with an
 * {@code EXPERIENCE_BOTTLE} in the main hand (the tick listener itself fires on any
 * in-world tick while enabled; the throw path additionally needs the held bottle).
 *
 * <p>static re-verify 2026-10-17: eh's own bounded pool run (resolved from
 * jna-decrypted-v2.dll, pool base RVA 0x301ee50) is exactly
 * {@code GhdJL | asz | field_8287 Items.EXPERIENCE_BOTTLE | GYRzq | XWHiC | edZTg |
 * aNeIU | asB | XmJDu} — every entry is eh's own declared member (eh.java:21-35) plus the
 * one item constant, and it is bounded by ei's run (ei's members {@code Hbvpn/asG/asJ/...}
 * follow). That confirms the negative evidence in casesafe/handlers/eh.md: the class
 * touches no use/throw/interact API, so the trigger below stays the labeled stand-in.
 *
 * <p>Suffix: the "Cooldown" unit string ({@code QZqXr}) is native-VM-resident, not a DES
 * literal — the class constant pool carries no ciphertext (checked byte-wise) and the
 * class-init stub {@code _37a1913627cf415695d1ec468fdbedf4} decrypts the class's own pool
 * inside the j2cc VM. Left null, reclassified [N] (native) instead of [V].
 */
public class AutoExp extends Module {
	private final DoubleSetting cooldown = register(new DoubleSetting("cooldown", 1.0, 0.0, 10.0, 0.0, null));

	private long lastThrowAt;

	public AutoExp() {
		super("auto_exp", "Auto Exp", "Throws exp bottles faster", ModuleCategory.UTILITY);
		setBind(74);
	}

	@Override
	protected void onEnable() {
		lastThrowAt = 0L;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		if (!client.options.useKey.isPressed()
				|| !player.getMainHandStack().isOf(Items.EXPERIENCE_BOTTLE)) {
			return;
		}
		if (System.currentTimeMillis() - lastThrowAt < (long) (cooldown.getValue() * 1000.0)) {
			return;
		}
		client.interactionManager.interactItem(player, Hand.MAIN_HAND);
		player.swingHand(Hand.MAIN_HAND);
		lastThrowAt = System.currentTimeMillis();
	}
}
