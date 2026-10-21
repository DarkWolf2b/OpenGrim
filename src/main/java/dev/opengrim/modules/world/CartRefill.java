package dev.opengrim.modules.world;

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
 * Cart Refill (registry sixtwo.fc): "Automatically refills TNT minecarts".
 *
 * <p>Original decompile: sixtwo/fc.java (casesafe/payload-decrypted/sixtwo/fc.java:22-110,
 * casesafe/payload-named-cfr/sixtwo/fc.java:22-110; the non-casesafe payload-decrypted /
 * payload-named-cfr paths are collapsed onto sixtwo.fC Velocity).
 * Spec: analysis/specs/handlers/fc.md.
 *
 * <p>Settings tree (fc.java:24-100): Delay cA .UG(5.0).UE(0.0).UF(1000.0).UI(0.0, 50.0)
 * (step 5.0, min 0.0, max 1000.0, default 0.0 = first UI-pair value, cf. PARITY.md; the
 * pair's second value 50.0 is an unmodelled anchor), suffix " ms" (high-probability guess:
 * XcqMh is native-decrypted/unrecovered, fc.java:41; the mT timer it gates is ms-based and
 * the sibling Return Delay chains use " ms"), Hover (default false), Randomize Slots
 * (default false), Slots To Refill group with nine hotbar slot toggles (0-8, all default
 * true, mirroring cz .Uw({0..8}) at fc.java:100). Handler aHO (tick listener, fc.java:126)
 * checks the timer against Delay, verifies the Hover screen condition, scans target hotbar
 * slots for depleted TNT minecarts, searches inventory via ClickType.SWAP (field_7791) and
 * executes swap clicks into configured slots.
 *
 * <p>high-probability guesses (VM body, casesafe/handlers/fc.md "Unrecovered"): one swap per
 * tick vs a per-slot loop, Hover = "only while a container screen is open", the
 * ClickType.SWAP click path (syncId/slot ids), and the shared fa String[3] buffer
 * (fc.java:55,105-109) which is omitted (documented gap).
 *
 * <p>trace 2026-10-17: no fc method entered (class load only) - the module was never
 * enabled in the traced session. Capture condition: enable Cart Refill with TNT minecarts
 * in the inventory and a depleted selected hotbar slot; log the aHO SWAP click.
 */
public class CartRefill extends Module {
	private final DoubleSetting delay = register(new DoubleSetting("delay", 5.0, 0.0, 1000.0, 0.0, " ms"));
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

	public CartRefill() {
		super("cart_refill", "Cart Refill", "Automatically refills TNT minecarts", ModuleCategory.COMBAT);
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

	@Override
	public void onEnable() {
		lastRefillMs = 0L;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null || client.world == null) {
			return;
		}

		if (hover.getValue() && client.currentScreen == null) {
			return;
		}

		long now = System.currentTimeMillis();
		if (now - lastRefillMs < delay.getValue().longValue()) {
			return;
		}

		List<Integer> targets = refillTargets(player);
		if (targets.isEmpty()) {
			return;
		}

		int hotbarSlot = targets.get(0);
		int sourceSlot = findCartStack(player, hotbarSlot);
		if (sourceSlot < 0) {
			return;
		}

		int syncId = player.currentScreenHandler != null ? player.currentScreenHandler.syncId : 0;
		client.interactionManager.clickSlot(syncId, sourceSlot, hotbarSlot,
				SlotActionType.SWAP, player);
		lastRefillMs = now;
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
			if (stack.isEmpty() || !stack.isOf(Items.TNT_MINECART)) {
				out.add(slot);
			}
		}
		if (randomizeSlots.getValue()) {
			Collections.shuffle(out);
		}
		return out;
	}

	private static int findCartStack(ClientPlayerEntity player, int exclude) {
		for (int slot = 9; slot < player.getInventory().size(); slot++) {
			if (slot == exclude) {
				continue;
			}
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isOf(Items.TNT_MINECART)) {
				return slot;
			}
		}
		return -1;
	}
}
