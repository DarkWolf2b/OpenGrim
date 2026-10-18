package dev.opengrim.modules.world;

import java.lang.reflect.Field;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerInteractionManager;

/**
 * No Break Delay (registry sixtwo.ea): "Removes destroy delay".
 *
 * <p>Port of sixtwo.ea.
 * Source: analysis/decompiled/payload-decrypted/sixtwo/ea.java:20-57,
 * analysis/decompiled/payload-named-cfr/sixtwo/ea.java:20-57.
 * Spec: analysis/specs/casesafe/handlers/ea.md (verified as sixtwo.ea; the
 * non-casesafe specs/modules/handlers paths may carry eA "Elytra Target"
 * sibling content because of the ea/eA filename collision).
 *
 * <p>Settings:
 * <ul>
 *   <li>Destroy Delay (rzTvo, ea.java:37) cC step 1.0 min 0.0 max 10.0 default 0.0
 *       suffix ENAXX (runtime-decrypted, value unrecovered — not guessed)</li>
 * </ul>
 * Handler: ari(gH$th) tick listener (ea.java:54). Pool slice POOL[0xc177,0x211]
 * links the mixin accessor pair getDestroyDelay/setDestroyDelay over
 * ClientPlayerInteractionManager.blockBreakingCooldown (field_3716).
 *
 * <p>Parity notes: whether the VM applies the setting as a cap, an override or
 * an unconditional write, and whether the write happens every tick or only
 * when non-zero, is virtualized (casesafe/handlers/ea.md "Unrecovered" #1/#3);
 * the every-tick write below is the designer-discretion reading. Static
 * re-verify 2026-10-17: ea's own bounded pool run (resolved from
 * jna-decrypted-v2.dll, pool base RVA 0x301ee50, bounded by eb's run) contains
 * <b>both</b> {@code getDestroyDelay} and {@code setDestroyDelay} on
 * {@code mixin/accessors/MultiPlayerGameModeAccessor} — in that order — so the
 * original demonstrably <i>reads</i> the field before writing it (a blind
 * override would need only the setter). The cap reading is therefore the
 * better-supported one; the write direction is kept as-is and labeled because
 * the comparison itself is VM-resident.
 *
 * <p>Suffix: the "Destroy Delay" unit string ({@code ENAXX}) is
 * native-VM-resident, not a DES literal — the class constant pool carries no
 * ciphertext at all (checked byte-wise) and the class-init stub
 * {@code _9cc2c0b9f3964686b5ba2b38633269d2} decrypts the class's own pool
 * inside the j2cc VM; the shared native pool holds only names/descriptors
 * (verified by resolving ea's descriptor blob 0xc177,0x211). Left null, and
 * reclassified [N] (native) instead of [V].
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): the module was never
 * enabled in the capture (load only — no aaj/ari entries), so the
 * {@code ari(gH$th)} body did not run. Capture condition: enable the module
 * in-game and tick while breaking a block, so the
 * MultiPlayerGameModeAccessor get/setDestroyDelay pair executes.
 */
public class NoBreakDelay extends Module {
	private final DoubleSetting destroyDelay = register(new DoubleSetting("destroy_delay", 1.0, 0.0, 10.0, 0.0, null));

	private static Field cachedDestroyDelayField;
	private static boolean fieldLookupDone;

	public NoBreakDelay() {
		super("no_break_delay", "No Break Delay", "Removes destroy delay", ModuleCategory.WORLD);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.interactionManager == null) {
			return;
		}
		setDestroyDelay(client.interactionManager, destroyDelay.getValue().intValue());
	}

	private static void setDestroyDelay(ClientPlayerInteractionManager interactionManager, int value) {
		Field field = destroyDelayField();
		if (field == null) {
			return;
		}
		try {
			field.setInt(interactionManager, value);
		} catch (IllegalAccessException ignored) {
		}
	}

	private static Field destroyDelayField() {
		if (!fieldLookupDone) {
			fieldLookupDone = true;
			for (String name : new String[]{"blockBreakingCooldown", "destroyDelay", "field_3716"}) {
				try {
					Field field = ClientPlayerInteractionManager.class.getDeclaredField(name);
					field.setAccessible(true);
					cachedDestroyDelayField = field;
					break;
				} catch (ReflectiveOperationException ignored) {
				}
			}
		}
		return cachedDestroyDelayField;
	}
}
