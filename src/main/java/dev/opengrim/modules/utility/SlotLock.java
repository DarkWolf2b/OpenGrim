package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket;
import net.minecraft.screen.slot.SlotActionType;

/**
 * Slot Lock (registry sixtwo.dN, key 64, bind -999, category gh.qBzlZ):
 * "Disables item drop from selected slots".
 *
 * <p>Specification and evidence (declared-class-verified paths):
 * <ul>
 *   <li>Primary constructor &amp; settings wiring: analysis/decompiled/casesafe/payload-decrypted/sixtwo/dN_.java:19-36 (mOyJK "Locked Slots" cz action setting; name chars 76,111,99,107,101,100,32,83,108,111,116,115 at :22-34)</li>
 *   <li>CFR decompile &amp; listener declarations: analysis/decompiled/casesafe/payload-named-cfr/sixtwo/dN_.java:43-52 (aon(gz var1) key-input event at :45-46)</li>
 *   <li>The un-prefixed payload-decrypted/sixtwo/dN.java and payload-named-cfr/sixtwo/dN.java files declare sixtwo.dn (Firework Spots) on this checkout — case-collision twins</li>
 *   <li>Pool &amp; handler analysis: analysis/specs/casesafe/handlers/dN_.md:53-85
 *       (POOL 0xaaf7,0x1e2: field_1869 dropKey, gz.bbK(KeyBinding),
 *       PlayerInventory.getHotbarSize(), Inventory.getStack(int),
 *       InventoryScreen/HandledScreen drop cancellation; the plain
 *       handlers/dN.md file is the dn (Firework Spots) case-twin)</li>
 *   <li>Registry: analysis/specs/modules/dN.md:1-18</li>
 * </ul>
 *
 * <p>Settings hierarchy:
 * <ul>
 *   <li>Locked Slots (GroupSetting): "locked_slots" (mapped from original cz action setting)</li>
 *   <li>Slot toggles 0..8 (BoolSetting): "slot_0" through "slot_8"</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (registry id 64): {@code aon} did not trigger in the 4&nbsp;s
 * window (zero method entries — the key-input event {@code gz} never fired). Capture
 * condition for a follow-up: while enabled, press the drop key (Q) with a locked slot
 * selected, and separately Ctrl+Q (whole stack) and an inventory-screen throw-click on a
 * locked hotbar slot (slots 36-44) — those are the three drop routes the impl guards.
 */
public class SlotLock extends Module {
	private final GroupSetting lockedSlots = register(new GroupSetting("locked_slots"));
	private final BoolSetting[] locked = new BoolSetting[PlayerInventory.getHotbarSize()];

	public SlotLock() {
		super("slot_lock", "Slot Lock", "Disables item drop from selected slots", ModuleCategory.UTILITY);
		for (int i = 0; i < locked.length; i++) {
			locked[i] = register(new BoolSetting("slot_" + i, false));
			lockedSlots.add(locked[i]);
		}
	}

	/**
	 * Per-tick drop key suppression mirroring the key binding intercept in sixtwo.dN#aon(gz).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			return;
		}
		int selected = client.player.getInventory().getSelectedSlot();
		if (selected < 0 || selected >= locked.length || !locked[selected].getValue()) {
			return;
		}
		client.options.dropKey.setPressed(false);
	}

	/**
	 * Outbound packet listener guarding against in-world drop actions and inventory-screen drop clicks.
	 */
	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			return;
		}

		if (event.packet() instanceof PlayerActionC2SPacket action) {
			if (action.getAction() == PlayerActionC2SPacket.Action.DROP_ITEM
					|| action.getAction() == PlayerActionC2SPacket.Action.DROP_ALL_ITEMS) {
				int selected = client.player.getInventory().getSelectedSlot();
				if (isSlotLocked(selected)) {
					event.setCancelled(true);
				}
			}
		} else if (event.packet() instanceof ClickSlotC2SPacket click) {
			if (click.actionType() == SlotActionType.THROW) {
				int slotIndex = click.slot();
				if (slotIndex >= 36 && slotIndex <= 44) {
					int hotbarIndex = slotIndex - 36;
					if (isSlotLocked(hotbarIndex)) {
						event.setCancelled(true);
					}
				}
			}
		}
	}

	/**
	 * Returns whether the specified 0-indexed hotbar slot is marked locked.
	 */
	public boolean isSlotLocked(int slot) {
		if (slot < 0 || slot >= locked.length) {
			return false;
		}
		return locked[slot].getValue();
	}
}