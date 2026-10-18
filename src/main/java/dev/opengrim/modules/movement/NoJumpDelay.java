package dev.opengrim.modules.movement;

import java.lang.reflect.Field;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.LivingEntity;

/**
 * No Jump Delay (registry sixtwo.ew, module id 49): "Removes jump delay".
 *
 * <p>1:1 port of sixtwo.ew. Sources:
 * analysis/decompiled/payload-named-cfr/sixtwo/ew.java:13-35 (constructor
 * ew.java:21-24; listener auT(gH.th) ew.java:33-34; spec
 * analysis/specs/handlers/ew.md).
 *
 * <p>The module constructs zero settings. On every client tick while enabled,
 * it resets {@code LivingEntity.jumpingCooldown} (matching
 * {@code LivingEntityAccessor.setJumpDelay} in the original constant pool)
 * to zero on the local player, preventing vanilla jump delay.
 *
 * <p>1.21.11 note: the counter is yarn {@code jumpingCooldown} (intermediary
 * {@code field_6228}; analysis/jars/yarn-1.21.11+build.6.tiny:25131, class
 * {@code class_1309} LivingEntity at :25037). Reflection uses the mapped name with the
 * intermediary fallback. Phase note: our tick runs at END_CLIENT_TICK — a stand-in for the
 * original pre-motion {@code gH$th} listener phase (ew.java:33-34; handlers/ew.md:21); for a
 * per-tick reset the phase is behaviorally equivalent.
 *
 * <p>Trace 2026-10-17: {@code auT} did NOT trigger — the module's 4 s window
 * [170871.6,170912.6] (analysis/traces/2026-10-17/by-class-casesafe/ew.jsonl contains only
 * the class load) contained ZERO client ticks: the per-tick hc event jumped from 170751.4
 * to 170951.1 across it (20 s tick stall under trace load). The written constant 0 remains
 * the ew.md "reset" reading; the immediate itself is VM-resident. Capture condition for a
 * conditioned session: enable ew during normal ticking and jump twice quickly (hold
 * space) — the second jump must fire without the vanilla cooldown delay.
 */
public class NoJumpDelay extends Module {
	private static Field jumpDelayField;
	private static boolean fieldLookupFailed;

	public NoJumpDelay() {
		super("no_jump_delay", "No Jump Delay", "Removes jump delay", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		setJumpDelay(player, 0);
	}

	public static void setJumpDelay(LivingEntity entity, int value) {
		if (fieldLookupFailed) {
			return;
		}
		try {
			if (jumpDelayField == null) {
				try {
					jumpDelayField = LivingEntity.class.getDeclaredField("jumpingCooldown");
				} catch (NoSuchFieldException e) {
					// intermediary fallback: field_6228 = LivingEntity.jumpingCooldown
					// (yarn-1.21.11+build.6.tiny:25131). field_6243 is leaningPitch (float).
					jumpDelayField = LivingEntity.class.getDeclaredField("field_6228");
				}
				jumpDelayField.setAccessible(true);
			}
			jumpDelayField.setInt(entity, value);
		} catch (ReflectiveOperationException e) {
			fieldLookupFailed = true;
		}
	}
}
