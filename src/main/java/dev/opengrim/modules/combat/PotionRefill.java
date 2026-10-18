package dev.opengrim.modules.combat;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.screen.slot.SlotActionType;

/**
 * Potion Refill (registry sixtwo.fA): "Automatically refills potions".
 *
 * <p>Port of sixtwo.fA (payload-decrypted/sixtwo/fA.java:35-114; tick listener
 * {@code aSa(gH$th)} fA.java:32-33; spec analysis/specs/handlers/fA.md).
 * Category {@code gh.xwjCw} = Combat. Settings ctor order: Delay {@code UG(5.0).
 * UE(0.0).UF(1000.0).UI(0.0, 50.0).UH(NSrLe)} fA.java:38-54 (suffix encrypted →
 * null), Hover {@code .WE(false)} fA.java:55-67, Randomize Slots {@code .WE(false)}
 * fA.java:68-84, Slots To Refill {@code cz .Uw([0..8])} fA.java:85-112 (all nine
 * hotbar slots seeded) + timer {@code EnpZA = mT.cpz()} fA.java:113.
 *
 * <p><b>Recovered cA semantics (2026-10-18 re-verify):</b> Delay is a {@code cA}
 * range slider — state {@code MutablePair<Double,Double> wJgtl}
 * (casesafe/payload-named-cfr/sixtwo/cA_.java:37); value accessor {@code UN()} =
 * {@code mU.cpR(this)} (cA_.java:557-559) = {@code mU.cpP(left, right)}
 * (sixtwo_77.java:215-219) = {@code pcazh.nextDouble() * (d3 - d2) + d2}
 * (sixtwo_77.java:125-127) — a fresh uniform draw in {@code [left, right)} per
 * read (consumers mm.java:57-58, fJ_.java:73, ff.java:370). {@code UI(0.0, 50.0)}
 * therefore means "delay uniform in [0, 50) ms"; ported with the repo convention
 * (ClickAction/TargetMargin): slider = left handle, the recovered second UI
 * value = fixed anchor, sampled per refill pass.
 *
 * <p>Technique (fA.md + template twin sixtwo.fc): timer-gated scan of the
 * selected hotbar slots; a slot whose potion stack is depleted (no longer holds
 * a potion) is refilled from the inventory with a {@code ClickType.SWAP} click
 * after Delay ms. Randomize Slots shuffles the refill order.
 *
 * <p>high-probability guess: Hover implemented as "only while an inventory
 * screen is open" ({@code client.currentScreen != null}) — matches twin module
 * fc/CartRefill; the fA hover condition itself is virtualized.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fA_.jsonl,
 * window [171059.1,171074.2]): {@code aSa} entered 2&times; (one per tick). Each
 * body ran the in-game guard {@code gg.bab()} &rarr; 1 and then returned with no
 * nested sixtwo call — in particular the {@code mT} delay timer was never
 * consulted and no setting getter ran, i.e. the early return precedes the delay
 * gate. Capture condition: hold a depleted potion in a selected hotbar slot with
 * a replacement potion in the inventory (optionally open the inventory screen
 * when Hover is on) — then aSa should consult the {@code mT} timer (EnpZA) and
 * run the SWAP click; the refill cadence (one slot per Delay vs all per pass)
 * and the ClickType remain VM-resident (fA.md "Unrecovered").
 */
public class PotionRefill extends Module {
	private final DoubleSetting delay = register(new DoubleSetting("delay", 5.0, 0.0, 1000.0, 0.0, null));
	private final BoolSetting hover = register(new BoolSetting("hover", false));
	private final BoolSetting randomizeSlots = register(new BoolSetting("randomize_slots", false));
	private final GroupSetting slotsToRefill = register(new GroupSetting("slots_to_refill"));
	private final BoolSetting slot0 = new BoolSetting("slot_0", true);
	private final BoolSetting slot1 = new BoolSetting("slot_1", true);
	private final BoolSetting slot2 = new BoolSetting("slot_2", true);
	private final BoolSetting slot3 = new BoolSetting("slot_3", true);
	private final BoolSetting slot4 = new BoolSetting("slot_4", true);
	private final BoolSetting slot5 = new BoolSetting("slot_5", true);
	private final BoolSetting slot6 = new BoolSetting("slot_6", true);
	private final BoolSetting slot7 = new BoolSetting("slot_7", true);
	private final BoolSetting slot8 = new BoolSetting("slot_8", true);

	private long lastRefillMs;
	private long delayMs;

	public PotionRefill() {
		super("potion_refill", "Potion Refill", "Automatically refills potions", ModuleCategory.COMBAT);
		slotsToRefill.add(slot0);
		slotsToRefill.add(slot1);
		slotsToRefill.add(slot2);
		slotsToRefill.add(slot3);
		slotsToRefill.add(slot4);
		slotsToRefill.add(slot5);
		slotsToRefill.add(slot6);
		slotsToRefill.add(slot7);
		slotsToRefill.add(slot8);
	}

	/** Second element of the recovered {@code UI(0.0, 50.0)} default pair (fA.java:38-54). */
	private static final double DELAY_ANCHOR = 50.0;

	/**
	 * Samples Delay in ms from {@code [delay, DELAY_ANCHOR]} (recovered cA range
	 * pair {@code UI(0.0, 50.0)} / {@code cA.UN()} = {@code mU.cpP}, uniform in
	 * the pair range).
	 */
	private long sampleDelayMs() {
		double left = delay.getValue();
		double right = Math.max(left, DELAY_ANCHOR);
		if (right <= left) {
			return Math.round(left);
		}
		return Math.round(java.util.concurrent.ThreadLocalRandom.current().nextDouble(left, right));
	}

	@Override
	public void onEnable() {
		lastRefillMs = 0L;
		delayMs = sampleDelayMs();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		// trace 2026-10-17: aSa ran the gg.bab() in-game guard (→1) first on both ticks.
		if (player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}

		if (hover.getValue() && client.currentScreen == null) {
			return;
		}

		long now = System.currentTimeMillis();
		if (now - lastRefillMs < delayMs) {
			return;
		}

		List<Integer> targets = refillTargets(player);
		if (targets.isEmpty()) {
			return;
		}

		int hotbarSlot = targets.get(0);
		int sourceSlot = findPotionStack(player, hotbarSlot);
		if (sourceSlot < 0) {
			return;
		}

		int syncId = player.currentScreenHandler != null ? player.currentScreenHandler.syncId : 0;
		client.interactionManager.clickSlot(syncId, sourceSlot, hotbarSlot,
				SlotActionType.SWAP, player);
		lastRefillMs = now;
		delayMs = sampleDelayMs();
	}

	private List<Integer> refillTargets(ClientPlayerEntity player) {
		List<Integer> out = new ArrayList<>();
		boolean[] enabled = {slot0.getValue(), slot1.getValue(), slot2.getValue(), slot3.getValue(),
				slot4.getValue(), slot5.getValue(), slot6.getValue(), slot7.getValue(), slot8.getValue()};
		for (int slot = 0; slot < 9; slot++) {
			if (!enabled[slot]) {
				continue;
			}
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isEmpty() || !isPotion(stack)) {
				out.add(slot);
			}
		}
		if (randomizeSlots.getValue()) {
			Collections.shuffle(out);
		}
		return out;
	}

	private static int findPotionStack(ClientPlayerEntity player, int exclude) {
		for (int slot = 9; slot < player.getInventory().size(); slot++) {
			if (slot == exclude) {
				continue;
			}
			ItemStack stack = player.getInventory().getStack(slot);
			if (isPotion(stack)) {
				return slot;
			}
		}
		return -1;
	}

	private static boolean isPotion(ItemStack stack) {
		return stack.isOf(Items.POTION) || stack.isOf(Items.SPLASH_POTION) || stack.isOf(Items.LINGERING_POTION);
	}
}
