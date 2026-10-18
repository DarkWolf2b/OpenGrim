package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.screen.slot.SlotActionType;

/**
 * Totem Refill (registry sixtwo.fy): "Automatically refills totems".
 *
 * <p>Port of sixtwo.fy (payload-decrypted/sixtwo/fy.java:29-128 constructor,
 * :151-152 tick aRJ(gH$th), :149 item getter aRK(); spec
 * analysis/specs/handlers/fy.md). Settings in declaration order: Totem Item
 * (cK item filter, default TOTEM_OF_UNDYING — translated as a single-option
 * item setting per the fx/eZ neighbor convention), Totem Slot
 * 1.0/1.0-9.0/1.0 " slot" (fy.java:55), Mode (Normal / Legit, fy.java:56-95),
 * Replace Current Item (false, fy.java:109), Delay 1.0/0.0-20.0/0.0 " ticks"
 * (fy.java:110-126).
 *
 * <p>The behavior surface is native (aRJ VM-internal, fy.md "Per-handler
 * semantics"); the refill mechanics below are a designer reconstruction gated
 * by the recovered settings. Trace 2026-10-17: aRJ ran twice with no numeric
 * exits and no strings — nothing beyond the settings could be cross-checked.
 *
 * <p>Unrecovered: the refill trigger (low-count audit vs pop event), the
 * inventory interaction mechanism, the Normal/Legit difference, and the
 * Delay-vs-stopwatch unit relation (fy.md "Unrecovered" #2-#6). The Totem Slot
 * setting (destination hotbar slot per the spec's inferred role, fy.md
 * "Settings → behavior mapping") is left unwired.
 */
public class TotemRefill extends Module {
	private static final int OFFHAND_SLOT = 45;

	private final ModeSetting totemItem = register(new ModeSetting("totem_item",
			List.of("totem_of_undying"), "totem_of_undying"));
	private final DoubleSetting totemSlot = register(new DoubleSetting("totem_slot", 1.0, 1.0, 9.0, 1.0, " slot"));
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("normal", "legit"), "normal"));
	private final BoolSetting replaceCurrentItem = register(new BoolSetting("replace_current_item", false));
	private final DoubleSetting delay = register(new DoubleSetting("delay", 1.0, 0.0, 20.0, 0.0, " ticks"));

	private int cooldown;

	public TotemRefill() {
		super("totem_refill", "Totem Refill", "Automatically refills totems", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		cooldown = 0;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		if (cooldown > 0) {
			cooldown--;
			return;
		}
		boolean needRefill = player.getOffHandStack().isEmpty()
				|| (replaceCurrentItem.getValue()
						&& !player.getOffHandStack().isOf(Items.TOTEM_OF_UNDYING));
		if (!needRefill) {
			return;
		}
		int source = findTotem(player);
		if (source < 0) {
			return;
		}
		var handler = player.currentScreenHandler;
		if ("legit".equals(mode.getValue())) {
			client.interactionManager.clickSlot(handler.syncId, source, 40, SlotActionType.SWAP, player);
		} else {
			client.interactionManager.clickSlot(handler.syncId, source, 0, SlotActionType.PICKUP, player);
			client.interactionManager.clickSlot(handler.syncId, OFFHAND_SLOT, 0, SlotActionType.PICKUP, player);
			if (!handler.getCursorStack().isEmpty()) {
				client.interactionManager.clickSlot(handler.syncId, source, 0, SlotActionType.PICKUP, player);
			}
		}
		cooldown = (int) Math.ceil(delay.getValue());
	}

	public net.minecraft.item.Item configuredItem() {
		return Items.TOTEM_OF_UNDYING;
	}

	private static int findTotem(ClientPlayerEntity player) {
		for (int slot = 9; slot <= 44; slot++) {
			if (player.currentScreenHandler.slots.get(slot).getStack().isOf(Items.TOTEM_OF_UNDYING)) {
				return slot;
			}
		}
		return -1;
	}
}
