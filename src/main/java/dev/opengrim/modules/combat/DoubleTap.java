package dev.opengrim.modules.combat;

import java.util.Comparator;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;

/**
 * Double Tap (registry sixtwo.eM): "Performs Aerial D-Tap automatically".
 *
 * <p>Port of sixtwo.eM — declared-class-verified source
 * analysis/decompiled/casesafe/payload-named-cfr/sixtwo/eM_.java:24-28
 * (constructor, id 121, {@code Zrjec = mT.cpz()}), :37-38 aAY(hw$tv) at HIGH
 * priority, :40-41 aAZ(gH$th). Beware: the un-prefixed
 * payload-named-cfr/sixtwo/eM.java on this checkout declares sixtwo.em
 * (High Jump) — a Windows case-collision twin. Spec
 * analysis/specs/casesafe/handlers/eM_.md — the plain handlers/eM.md file is
 * the em (High Jump) case-twin too. No settings are constructed.
 * The combo uses the shared mace-cluster items (MACE, WIND_CHARGE) and
 * re-attacks through the wind-charge launch when the attacker is airborne with
 * a mace.
 *
 * <p>high-probability guess: every combo constant in this port (the 1500&nbsp;ms
 * phase window, the 5.0-block scan, the wind-charge/airborne gates) is a
 * designer reconstruction — the VM holds the real decision logic and timings
 * (eM_.md "Unrecovered" 2); only the HIGH-priority wiring, the phase/timer state
 * shape and the mace-cluster item tokens are recovered.
 *
 * <p>static re-verify 2026-10-17: eM's own pool run (resolved from
 * jna-decrypted-v2.dll, pool base RVA 0x301ee50) contains eM's declared members
 * ({@code oIeWA}, {@code aBa}, {@code XOnBS}, {@code Zrjec}) plus
 * {@code field_49814 Items.MACE} and {@code field_49098 Items.WIND_CHARGE} —
 * so the mace/wind-charge item gates are pool-proven (not designer guesses);
 * only their arithmetic and the timings remain VM-resident.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eM_.jsonl,
 * window [169249.6,169283.5]): {@code aAZ} entered 3&times; (one per tick). Each
 * body ran the in-game guard {@code gg.bab()} &rarr; 1 and nothing else
 * observable — in particular no {@code mT} timer call and no eQ pipeline call,
 * i.e. the tick-side state machine returned before touching the timer (matches
 * this port's {@code !phase} early return; the phase flag is false until an
 * attack arms it). {@code aAY} did not run in the window (the driver performs no
 * attacks). Capture condition for the attack path: attack an entity while
 * airborne holding a mace with a wind charge in the hotbar — then aAY should
 * enter and the combo surface (mT/eQ/eP cluster) becomes observable; the
 * decision logic/timings stay VM-resident (eM_.md "Unrecovered" 2).
 */
public class DoubleTap extends Module {
	private boolean phase;
	private long phaseStartMs;

	public DoubleTap() {
		super("double_tap", "Double Tap", "Performs Aerial D-Tap automatically", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		phase = false;
		phaseStartMs = 0L;
	}

	// aAY(hw$tv) carries the non-default @hG(priority=mw.HIGH) annotation
	// (casesafe/payload-named-cfr/sixtwo/eM_.java:37) — runs before default-priority
	// attack handlers; our bus routes higher priority first (EventBus#post).
	@Subscribe(priority = 1)
	public void onAttackEntity(AttackEntityEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!(event.player() instanceof ClientPlayerEntity player)) {
			return;
		}
		if (!(event.target() instanceof LivingEntity target)) {
			return;
		}
		if (!player.getMainHandStack().isOf(Items.MACE)) {
			return;
		}
		if (player.isOnGround() || player.fallDistance < 1.0) {
			return;
		}
		if (hasWindCharge(player) && player.distanceTo(target) <= 5.0) {
			phase = true;
			phaseStartMs = System.currentTimeMillis();
		}
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		// trace 2026-10-17: aAZ ran the gg.bab() in-game guard (→1) as its first
		// statement on all 3 ticks before returning early.
		if (player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (!phase) {
			return;
		}
		if (System.currentTimeMillis() - phaseStartMs > 1500L) {
			phase = false;
			return;
		}
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(5.0);
		LivingEntity target = client.world.getOtherEntities(player, box, e -> e instanceof LivingEntity living
				&& living.isAlive() && e != (Object) player)
				.stream().map(e -> (LivingEntity) e)
				.min(Comparator.comparingDouble(player::distanceTo)).orElse(null);
		if (target == null) {
			return;
		}
		if (player.getMainHandStack().isOf(Items.MACE) && !player.isOnGround()) {
			TriggerBot.attack(client, player, target);
			phase = false;
		}
	}

	public boolean isPhased() {
		return phase;
	}

	private static boolean hasWindCharge(PlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			if (player.getInventory().getStack(slot).isOf(Items.WIND_CHARGE)) {
				return true;
			}
		}
		return player.getOffHandStack().isOf(Items.WIND_CHARGE);
	}
}
