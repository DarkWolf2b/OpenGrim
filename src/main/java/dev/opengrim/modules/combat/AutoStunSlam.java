package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;

/**
 * Auto Stun Slam (registry sixtwo.eS, module id 117): "Breaks opponent's shield
 * and proceed to slam with mace".
 *
 * <p>Port of sixtwo.eS (analysis/decompiled/casesafe/payload-decrypted/sixtwo/eS_.java:34-128
 * constructor; events {@code aCN(gM)} / {@code aCO(gZ$tt)} / {@code aCP(gH$th)},
 * predicates {@code aCQ/aCU/aCW}, executor {@code aCR}, steps {@code aCS/aCT/aCV},
 * probes {@code aCX/aCY}; handler spec analysis/specs/casesafe/handlers/eS_.md).
 * Settings in declaration order (eS_.java:45-123):
 * <ul>
 *   <li>Trigger {@code ct .SO(0)} (eS_.java:45) with children Auto (index 0,
 *       default) and On Attack (index 1) — the {@code .SO(0)} makes Auto the
 *       radio default,</li>
 *   <li>Change Armor {@code cJ .WE(false)} (eS_.java:82) — feeds the {@code ol}
 *       armor path (native, not wired; see below),</li>
 *   <li>Min Fall Distance {@code cC .Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5)
 *       .Vz(" blocks")} (eS_.java:101),</li>
 *   <li>Return Delay {@code cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0)
 *       .UH(" ms")} (eS_.java:115),</li>
 *   <li>Chance {@code cC .Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz("%")}
 *       (eS_.java:123 — suffix is exactly "%", no leading space),</li>
 *   <li>{@code ol} controller {@code cVZni = new ol(this)} (eS_.java:124),
 *       stopwatch {@code Dwgkb = mT.cpz()} (eS_.java:125), ticker
 *       {@code VYWYG = new mW()} (eS_.java:126).</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eS_.jsonl +
 * analysis/traces/2026-10-17/raw/trace.jsonl): the window's only activity was the
 * disable override {@code YO} → {@code aCT()} → {@code ol.cET()} (latched-slot
 * restore, ol.java:14-15) and {@code aCV()} → {@code mW.crA()} (ticker reset) —
 * mirrored by {@link #onDisable()}. The tick ({@code aCP}) and attack
 * ({@code aCO}) listeners never fired (no ticks in the window; the tour performs
 * no attacks). Capture conditions: stand next to a shielding player with Trigger
 * Auto (aCP), attack a shielding player with Trigger On Attack (aCO).
 *
 * <p>Reconstruction (native bodies; eS_.md "Unrecovered"): finds the nearest
 * shielding player in a 4-block box, stuns with attacks on the trigger path,
 * rolls Chance, swaps to a hotbar mace and slams while
 * {@code fallDistance ≥ Min Fall Distance}, restoring the slot after Return
 * Delay. Change Armor (the native {@code ol} armor-swap path) is not wired —
 * [N] gap (eS_.md "Settings → behavior mapping").
 */
public class AutoStunSlam extends Module {
	private final ModeSetting trigger = register(new ModeSetting("trigger",
			List.of("auto", "on_attack"), "auto"));
	private final BoolSetting changeArmor = register(new BoolSetting("change_armor", false));
	private final DoubleSetting minFallDistance = register(new DoubleSetting("min_fall_distance", 0.1, 0.0, 12.0, 1.5, " blocks"));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));
	private final DoubleSetting chance = register(new DoubleSetting("chance", 1.0, 1.0, 100.0, 100.0, "%"));

	private boolean armed;
	private boolean slamming;
	private int previousSlot = -1;
	private long restoreAtMs;

	public AutoStunSlam() {
		super("auto_stun_slam", "Auto Stun Slam", "Breaks opponent's shield and proceed to slam with mace",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		armed = false;
		slamming = false;
		previousSlot = -1;
		restoreAtMs = 0L;
	}

	/**
	 * Port of the {@code YO()} disable override (eS_.java:206-207): trace pinned
	 * its body to {@code aCT() → ol.cET()}, then {@code aCV() → mW.crA()} —
	 * restore the latched slot and reset the ticker state.
	 */
	@Override
	public void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (previousSlot >= 0 && client.player != null) {
			client.player.getInventory().setSelectedSlot(previousSlot);
		}
		armed = false;
		slamming = false;
		previousSlot = -1;
		restoreAtMs = 0L;
	}

	/**
	 * Port of {@code aCO(gZ$tt)} (eS_.java:187-188) — the "On Attack" trigger
	 * path (handler spec: "aCO is the entry point for the 'On Attack' trigger
	 * path"). Fires when the player attacks an entity.
	 */
	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		if (!"on_attack".equals(trigger.getValue())) {
			return;
		}
		if (!(event.player() instanceof ClientPlayerEntity player)) {
			return;
		}
		engage(player);
	}

	/**
	 * Port of {@code aCP(gH$th)} (eS_.java:167-168) — pre-motion tick: the slam
	 * phase, and the "Auto" trigger path (the {@code mW} ticker / {@code mT}
	 * stopwatch gate the timed path per eS_.md).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (slamming) {
			if (previousSlot >= 0 && System.currentTimeMillis() >= restoreAtMs) {
				player.getInventory().setSelectedSlot(previousSlot);
				previousSlot = -1;
				slamming = false;
				armed = false;
			} else if (player.getMainHandStack().isOf(Items.MACE)
					&& player.fallDistance >= minFallDistance.getValue()) {
				PlayerEntity blocker = findBlocker(client, player);
				if (blocker != null && player.distanceTo(blocker) <= 4.0) {
					TriggerBot.attack(client, player, blocker);
				}
			}
			return;
		}
		if (!"auto".equals(trigger.getValue())) {
			return;
		}
		PlayerEntity blocker = findBlocker(client, player);
		if (blocker == null) {
			armed = false;
			return;
		}
		engage(player);
	}

	private void engage(ClientPlayerEntity player) {
		MinecraftClient client = MinecraftClient.getInstance();
		PlayerEntity blocker = findBlocker(client, player);
		if (blocker == null) {
			armed = false;
			return;
		}
		armed = true;
		TriggerBot.attack(client, player, blocker);
		if (Math.random() * 100.0 >= chance.getValue()) {
			return;
		}
		int mace = hotbarSlotOf(player, Items.MACE);
		if (mace < 0) {
			return;
		}
		previousSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(mace);
		slamming = true;
		restoreAtMs = System.currentTimeMillis() + Math.round(returnDelay.getValue());
	}

	public boolean isArmed() {
		return armed;
	}

	private static PlayerEntity findBlocker(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(4.0);
		return client.world.getOtherEntities(player, box,
				e -> e instanceof PlayerEntity p && p.isAlive() && p.isBlocking())
				.stream().map(e -> (PlayerEntity) e)
				.min(Comparator.comparingDouble(player::distanceTo)).orElse(null);
	}

	private static int hotbarSlotOf(ClientPlayerEntity player, net.minecraft.item.Item item) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getMainStacks().get(slot);
			if (stack.isOf(item)) {
				return slot;
			}
		}
		return -1;
	}
}
