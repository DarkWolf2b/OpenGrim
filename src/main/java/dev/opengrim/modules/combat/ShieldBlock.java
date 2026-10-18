package dev.opengrim.modules.combat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.item.ItemStack;
import net.minecraft.item.consume.UseAction;

/**
 * Shield Block (registry sixtwo.fi, module id 155): "Automatically switches to
 * shield when right clicked".
 *
 * <p>Port of sixtwo.fi (analysis/decompiled/payload-named-cfr/sixtwo/fi.java):
 * zero settings; listener aJm(gM) is the right-click interception, aJn(gH$th)
 * the per-frame monitor/restore hook (fi.java:46-50); predicates aJq/aJr/aJs,
 * comparisons aJt/aJv, placement validation aJu(ItemStack, BlockItem,
 * BlockHitResult) and internal steps aJo/aJp/aJw are all native; spec:
 * analysis/specs/casesafe/handlers/fi.md (verified as sixtwo.fi Shield Block —
 * the non-casesafe specs/handlers/fi.md path carries sixtwo.fI "Auto Logout"
 * content because of the fI/fi filename collision).
 *
 * <p>Recovered behavior surface:
 * <ul>
 *   <li>Shield identity is component-based: {@code ItemStack.contains(
 *       DataComponentTypes.BLOCKS_ATTACKS)} (field_56396, method_57826) — NOT
 *       item-class based.</li>
 *   <li>Stacks carrying CONSUMABLE (field_53964), EQUIPPABLE (field_54196) or
 *       KINETIC_WEAPON (field_63632) are left alone; the switch only fires when
 *       the held interaction is not one of those protected actions.</li>
 *   <li>Gate {@code ItemStack.getUseAction() == UseAction.NONE}
 *       (method_7976/field_8952) — do not swap while an item records a use
 *       action (eating/drinking/blocking).</li>
 * </ul>
 *
 * <p>Parity notes: the original keeps a per-module hotbar-swap helper object
 * {@code ol nMxfO} (fi.java:27) whose shape is: module owner + mT timer +
 * boolean "swapped" latch + int saved slot (init -1) — the swap/restore
 * bookkeeping (ol.java fields CMPIc/HnMZs). The helper's native methods are
 * unrecovered, so the two designer-discretion choices mirrored here (both
 * explicit in the ol field shape but VM-hidden in trigger/consequence) are:
 * hotbar-scan for the shield, and restore of the saved slot when the right
 * click is released ("single-shot swap on right-click, restore afterwards";
 * restore trigger among released/completed/timeout — handlers/fi.md
 * "Unrecovered" #2). The gM event has no counterpart in our event bus, so the
 * per-tick use-key poll stands in for "right-click initiated".
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fi.jsonl,
 * window [172425.2,172456.1]): {@code aJn} entered 3&times; (one per tick). Each
 * tick's call order is pinned: the in-game guard {@code gg.bab()} &rarr; 1 first,
 * then {@code aJq()} &rarr; 0 (the readiness predicate — false while the use key
 * was idle), then {@code aJp()} (the upkeep step taken on the false path);
 * {@code aJo} (the true-path swap step) did not run. On disable the trace shows
 * {@code YO} &rarr; {@code aJw()} — the module's own cleanup step, now ported as
 * restore-on-disable (the ol saved-slot latch makes "restore" its only
 * consistent reading; aJw's body itself is VM-resident). Capture conditions:
 * right-click with a shield in the hotbar (aJm/aJo/aJq-true path) and release
 * mid-hold (aJp restore path) — the 4&nbsp;s window held no use-key input.
 */
public class ShieldBlock extends Module {
	private static final int NO_MEMBER_SLOT = -1;

	private int savedSlot = NO_MEMBER_SLOT;

	public ShieldBlock() {
		super("shield_block", "Shield Block", "Automatically switches to shield when right clicked",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		// trace 2026-10-17: aJn ran the gg.bab() in-game guard (→1) first, then
		// aJq() → 0 → aJp() on all 3 ticks.
		if (player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (savedSlot != NO_MEMBER_SLOT) {
			if (!client.options.useKey.isPressed()) {
				switchBack(player);
			}
			return;
		}
		if (!client.options.useKey.isPressed()) {
			return;
		}
		ItemStack mainHand = player.getMainHandStack();
		ItemStack offHand = player.getOffHandStack();
		if (isShield(mainHand) || isShield(offHand)) {
			return;
		}
		if (!mainHand.isEmpty() && mainHand.getUseAction() != UseAction.NONE) {
			return;
		}
		if (isProtected(mainHand)) {
			return;
		}
		int shieldSlot = findShieldSlot(player);
		if (shieldSlot == NO_MEMBER_SLOT) {
			return;
		}
		savedSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(shieldSlot);
	}

	/**
	 * trace 2026-10-17: {@code YO} &rarr; {@code aJw()} on disable — the module's
	 * cleanup step (fi.java:62, :72-73). Ported as restore of the latched slot;
	 * aJw's body is VM-resident, the ol saved-slot field (ol.java:15) makes the
	 * restore its consistent reading.
	 */
	@Override
	public void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null && savedSlot != NO_MEMBER_SLOT) {
			switchBack(client.player);
		}
		savedSlot = NO_MEMBER_SLOT;
	}

	private int findShieldSlot(ClientPlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			if (isShield(player.getInventory().getStack(slot))) {
				return slot;
			}
		}
		return NO_MEMBER_SLOT;
	}

	private void switchBack(ClientPlayerEntity player) {
		player.getInventory().setSelectedSlot(savedSlot);
		savedSlot = NO_MEMBER_SLOT;
	}

	private static boolean isShield(ItemStack stack) {
		return !stack.isEmpty() && stack.contains(DataComponentTypes.BLOCKS_ATTACKS);
	}

	private static boolean isProtected(ItemStack stack) {
		return !stack.isEmpty() && (stack.contains(DataComponentTypes.CONSUMABLE)
				|| stack.contains(DataComponentTypes.EQUIPPABLE)
				|| stack.contains(DataComponentTypes.KINETIC_WEAPON));
	}
}
