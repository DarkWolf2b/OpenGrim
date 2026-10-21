package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;

/**
 * Auto GApple (registry sixtwo.ft, module id 144): "Automatically eats golden
 * apples".
 *
 * <p>Port of sixtwo.ft (analysis/decompiled/payload-decrypted/sixtwo/ft.java:36-178
 * constructor; pre-motion tick {@code aPU(gH$th)} ft.java:215-216; helpers
 * {@code aPV} start/stop, {@code aQf} apple finder, {@code aQb/aQg} apple
 * predicates, {@code aQa} slot getter, {@code aPY/aPZ} health predicates,
 * {@code aQd} health feed, {@code aPW/aPX/aQc/aQe} state-machine steps;
 * disable override {@code YO} ft.java:218-219; handler spec
 * analysis/specs/handlers/ft.md). Settings in declaration order (ft.java:49-172):
 * Eat Below {@code cC .Vy(0.1).Vw(1.0).Vx(100.0).VA(40.0).Vz("%")}, Eat Until
 * {@code ct} with Eat One / Reaches Threshold ({@code .SY()} → radio default) /
 * Full Health, Eat Threshold {@code cC .Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0)
 * .Vz("%")} (visibility {@code jOgPB.Vf(this.uaqBp::SZ)}, ft.java:176 = Reaches
 * Threshold selected), Eat Enchanted {@code cJ .WE(true)}, When Player Away
 * {@code cJ .WE(false)}, Distance Threshold {@code cC .Vy(0.1).Vw(1.0)
 * .Vx(30.0).VA(6.0)} (no suffix; visibility {@code ZskBX.Vf(this.CcIwq::WF)},
 * ft.java:177), {@code ol} controller {@code xQcjf} (ft.java:173).
 *
 * <p>Use path: the original presses {@code KeyBinding.useKey} via
 * {@code setPressed} (pool {@code field_1904} + {@code method_23481}; re-audit
 * correction "Original use path is useKey/setPressed, not interactItem") —
 * mirrored here.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/ft.jsonl +
 * analysis/traces/2026-10-17/raw/trace.jsonl): enable used the inherited
 * {@code gg.aaj} (no override); the disable override {@code YO} ran
 * {@code aQe()} → {@code aPW()} → {@code aPX()} (cleanup chain: finish/restore/
 * reset — the port restores the original slot in {@link #onDisable()}). The
 * tick {@code aPU} never fired (no health deficit in the tour; capture
 * condition: take damage below Eat Below with apples in the hotbar).
 *
 * <p>Reconstruction (native bodies; ft.md "Unrecovered"): health-percent
 * trigger, apple slot swap, use-key hold, completion per Eat Until, original
 * slot restore; the exact mapping of {@code aPY}/{@code aPZ} to the two %
 * sliders is unrecovered.
 */
public class AutoGApple extends Module {
	private final DoubleSetting eatBelow = register(new DoubleSetting("eat_below", 0.1, 1.0, 100.0, 40.0, "%"));
	private final ModeSetting eatUntil = register(new ModeSetting("eat_until",
			List.of("eat_one", "reaches_threshold", "full_health"), "reaches_threshold"));
	private final DoubleSetting eatThreshold = register(new DoubleSetting("eat_threshold", 0.1, 1.0, 100.0, 60.0, "%"));
	private final BoolSetting eatEnchanted = register(new BoolSetting("eat_enchanted", true));
	private final BoolSetting whenPlayerAway = register(new BoolSetting("when_player_away", false));
	private final DoubleSetting distanceThreshold = register(new DoubleSetting("distance_threshold", 0.1, 1.0, 30.0, 6.0, null));

	private boolean eating;
	private int originalSlot = -1;
	private int appleSlot = -1;
	private boolean ateOne;

	public AutoGApple() {
		super("auto_gapple", "Auto GApple", "Automatically eats golden apples", ModuleCategory.COMBAT);
	}

	@Override
	protected void onEnable() {
		eating = false;
		originalSlot = -1;
		appleSlot = -1;
		ateOne = false;
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (eating && originalSlot >= 0 && client.player != null) {
			client.player.getInventory().setSelectedSlot(originalSlot);
		}
		eating = false;
		originalSlot = -1;
		appleSlot = -1;
	}

	@Override
	public void onTick() {
		eatThreshold.setVisible("reaches_threshold".equals(eatUntil.getValue()));
		distanceThreshold.setVisible(whenPlayerAway.getValue());

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null || client.world == null) {
			return;
		}
		double percent = 100.0 * player.getHealth() / Math.max(1.0f, player.getMaxHealth());
		if (!eating) {
			if (!below(percent)) {
				ateOne = false;
				return;
			}
			if ("eat_one".equals(eatUntil.getValue()) && ateOne) {
				return;
			}
			if (whenPlayerAway.getValue() && playerNearby(client, player)) {
				return;
			}
			ItemStack found = findApple(player);
			if (found.isEmpty()) {
				return;
			}
			originalSlot = player.getInventory().getSelectedSlot();
			appleSlot = slotOf(player, found);
			if (appleSlot >= 0 && appleSlot != originalSlot) {
				player.getInventory().setSelectedSlot(appleSlot);
			}
			eating = true;
			client.options.useKey.setPressed(true);
			return;
		}
		client.options.useKey.setPressed(true);
		if (doneEating(player, percent)) {
			client.options.useKey.setPressed(false);
			if (originalSlot >= 0) {
				player.getInventory().setSelectedSlot(originalSlot);
			}
			eating = false;
			originalSlot = -1;
			appleSlot = -1;
			ateOne = true;
		}
	}

	private boolean below(double percent) {
		return percent < eatBelow.getValue();
	}

	private boolean doneEating(ClientPlayerEntity player, double percent) {
		return switch (eatUntil.getValue()) {
			case "eat_one" -> player.getMainHandStack().isEmpty() || !isApple(player.getMainHandStack());
			case "full_health" -> player.getHealth() >= player.getMaxHealth();
			default -> percent >= eatThreshold.getValue();
		};
	}

	private boolean playerNearby(MinecraftClient client, ClientPlayerEntity player) {
		return client.world.getPlayers().stream()
				.filter(p -> p != player && p.isAlive())
				.anyMatch(p -> player.distanceTo(p) <= distanceThreshold.getValue());
	}

	private ItemStack findApple(ClientPlayerEntity player) {
		for (int i = 0; i < 9; i++) {
			ItemStack stack = player.getInventory().getStack(i);
			if (isApple(stack)) {
				return stack;
			}
		}
		if (isApple(player.getOffHandStack())) {
			return player.getOffHandStack();
		}
		return ItemStack.EMPTY;
	}

	private static int slotOf(ClientPlayerEntity player, ItemStack found) {
		for (int i = 0; i < 9; i++) {
			if (ItemStack.areEqual(player.getInventory().getStack(i), found)) {
				return i;
			}
		}
		return -1;
	}

	private boolean isApple(ItemStack stack) {
		if (stack.isOf(Items.GOLDEN_APPLE)) {
			return true;
		}
		return eatEnchanted.getValue() && stack.isOf(Items.ENCHANTED_GOLDEN_APPLE);
	}
}
