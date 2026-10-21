package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.mixin.HandledScreenAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.GenericContainerScreenHandler;
import net.minecraft.screen.ScreenHandler;
import net.minecraft.screen.ShulkerBoxScreenHandler;
import net.minecraft.screen.slot.Slot;
import net.minecraft.screen.slot.SlotActionType;

/**
 * Chest Stealer (registry sixtwo.eb, module id 68): "Automatically steals loot
 * from the chest".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/handlers/eb.md. Evidence: eb.java:56-207 constructor with
 * Hover eb.java:59, Check Storage Title eb.java:80 (Disabled eb.java:90,
 * Equals eb.java:98, Contains eb.java:108; no {@code .SY()} → default Disabled,
 * ct.java:34), Storage Title eb.java:123 (max 64, default "Chest"),
 * Check Durability eb.java:141 (default off), Minimum Durability eb.java:161
 * (1.0/1.0-100.0/30.0 " %"), Steal From eb.java:173 (Chest eb.java:174,
 * Shulk eb.java:175, both {@code cw .Tz()}), Items To Steal eb.java:191
 * (All eb.java:192, Selected eb.java:202; default All), Items eb.java:203
 * ({@code cK} pool = all items, no preselection); visibility wiring Minimum
 * Durability iff Check Durability eb.java:204, Items iff {@code arq()}
 * eb.java:205, Storage Title iff {@code arp()} eb.java:206. Handler aro(gH$th)
 * eb.java:220-221; predicates arp/arq eb.java:216-218. Trace 2026-10-17
 * (by-class-casesafe/eb.jsonl): one aro() call — no numeric exits.
 *
 * <p>Recovered contract (handlers/eb.md "Runtime model"): while a storage
 * screen is open (GenericContainerScreen / ShulkerBoxScreen), enumerate
 * container slots, filter by title (Screen.getTitle vs Storage Title per the
 * mode), item rules and durability (ItemStack.isDamageable + Minimum
 * Durability), then transfer matching stacks.
 *
 * <p>High-probability guesses (labeled): the transfer as a QUICK_MOVE clickSlot
 * with a 2-tick pacing (transfer mechanics are VM-hidden — spec "Unrecovered"
 * 1,3), the durability percent as (max-damage)/max, and Hover as
 * hovered-slot-only theft via the focused-slot accessor (label-only evidence,
 * spec "Unrecovered" 2).
 *
 * <p>Not implemented ([U]): the "Items" {@code cK} multi-select (all-items
 * pool) has no settings-API equivalent, so Items To Steal = Selected currently
 * steals nothing — the selection cannot be expressed; the Storage Title
 * 64-char cap is not enforceable (StringSetting has no max length); title
 * normalization (case/strip) unrecovered.
 */
public class ChestStealer extends Module {
	private final BoolSetting hover = register(new BoolSetting("hover", false));
	private final ModeSetting checkStorageTitle = register(new ModeSetting("check_storage_title",
			List.of("disabled", "equals", "contains"), "disabled"));
	private final StringSetting storageTitle = register(new StringSetting("storage_title", "Chest"));
	private final BoolSetting checkDurability = register(new BoolSetting("check_durability", false));
	private final DoubleSetting minimumDurability = register(new DoubleSetting("minimum_durability", 1.0, 1.0, 100.0, 30.0, " %"));
	private final GroupSetting stealFrom = register(new GroupSetting("steal_from"));
	private final BoolSetting chest = register(new BoolSetting("chest", true));
	private final BoolSetting shulk = register(new BoolSetting("shulk", true));
	private final ModeSetting itemsToSteal = register(new ModeSetting("items_to_steal",
			List.of("all", "selected"), "all"));

	private int clickCooldown;

	public ChestStealer() {
		super("chest_stealer", "Chest Stealer", "Automatically steals loot from the chest",
				ModuleCategory.PLAYER);
		stealFrom.add(chest);
		stealFrom.add(shulk);
	}

	@Override
	protected void onDisable() {
		clickCooldown = 0;
	}

	@Override
	public void onTick() {
		minimumDurability.setVisible(checkDurability.getValue()); // eb.java:204
		storageTitle.setVisible(!"disabled".equals(checkStorageTitle.getValue())); // eb.java:206

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		var handler = player.currentScreenHandler;
		if (handler == player.playerScreenHandler) {
			return;
		}
		boolean isChest = handler instanceof GenericContainerScreenHandler;
		boolean isShulk = handler instanceof ShulkerBoxScreenHandler;
		if (isChest && !chest.getValue()) {
			return;
		}
		if (isShulk && !shulk.getValue()) {
			return;
		}
		if (!isChest && !isShulk) {
			return;
		}
		if (!titleMatches(client)) {
			return;
		}
		if (clickCooldown > 0) {
			clickCooldown--;
			return;
		}
		int containerSlots = handler.slots.size() - 36;
		if (hover.getValue()) {
			stealHovered(client, player, handler, containerSlots);
			return;
		}
		for (int slot = 0; slot < containerSlots; slot++) {
			ItemStack stack = handler.getSlot(slot).getStack();
			if (stack.isEmpty() || !wantStack(stack)) {
				continue;
			}
			client.interactionManager.clickSlot(handler.syncId, slot, 0, SlotActionType.QUICK_MOVE, player);
			clickCooldown = 2;
			return;
		}
	}

	/** [G] Hover: steal only the slot under the cursor (focused slot). */
	private void stealHovered(MinecraftClient client, ClientPlayerEntity player, ScreenHandler handler,
			int containerSlots) {
		if (!(client.currentScreen instanceof HandledScreen<?> screen)) {
			return;
		}
		Slot hovered = ((HandledScreenAccessor) screen).opengrim$getFocusedSlot();
		if (hovered == null || hovered.getIndex() >= containerSlots || !hovered.hasStack()) {
			return;
		}
		if (!wantStack(hovered.getStack())) {
			return;
		}
		client.interactionManager.clickSlot(handler.syncId, hovered.getIndex(), 0, SlotActionType.QUICK_MOVE, player);
		clickCooldown = 2;
	}

	private boolean titleMatches(MinecraftClient client) {
		String mode = checkStorageTitle.getValue();
		if ("disabled".equals(mode)) {
			return true;
		}
		if (client.currentScreen == null) {
			return false;
		}
		String title = client.currentScreen.getTitle().getString();
		String want = storageTitle.getValue();
		if ("equals".equals(mode)) {
			return title.equals(want);
		}
		return title.contains(want);
	}

	private boolean wantStack(ItemStack stack) {
		if ("selected".equals(itemsToSteal.getValue())) {
			// [U] the "Items" cK selection set cannot be expressed in the settings API
			return false;
		}
		if (checkDurability.getValue() && stack.isDamageable()) {
			if (stack.getMaxDamage() <= 0) {
				return true;
			}
			int percent = 100 * (stack.getMaxDamage() - stack.getDamage()) / stack.getMaxDamage();
			if (percent < minimumDurability.getValue().intValue()) {
				return false;
			}
		}
		return true;
	}
}
