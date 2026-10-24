package dev.opengrim.modules.world;

import java.lang.reflect.Field;
import java.util.LinkedHashSet;
import java.util.Set;

import dev.opengrim.mixin.MinecraftClientAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ItemListSetting;
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.BlockItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.item.RangedWeaponItem;
import net.minecraft.util.hit.HitResult;

/**
 * Fast Place (registry sixtwo.dZ): "Removes right click delay".
 *
 * <p>Port of sixtwo.dZ.
 * Source: analysis/decompiled/payload-decrypted/sixtwo/dZ.java:29-161 (declares class dZ, id 62).
 * Spec: analysis/specs/handlers/dZ.md.
 *
 * <p>Settings tree (declaration order):
 * <ul>
 *   <li>Blocks (Wkwey, dZ.java:39) default true</li>
 *   <li>Items (RfFUJ, dZ.java:40-52) default false</li>
 *   <li>Only For Valid Blocks (whhdh, dZ.java:53-75) default false</li>
 *   <li>Valid Blocks (tfzyX, dZ.java:76-89) cK item filter with all blocks universe</li>
 *   <li>Right Click Delay (uafIf, dZ.java:90-108) step 1.0 min 0.0 max 4.0 default 0.0,
 *       suffix " ticks" (vanilla rightClickDelay is 4 ticks)</li>
 *   <li>Only If You Can Place (AKRql, dZ.java:109-131) default false</li>
 *   <li>Only For Slots (hSAvy, dZ.java:132-147) default false</li>
 *   <li>Slots (vmwmS, dZ.java:148-159) cz slot picker — nine hotbar toggles</li>
 * </ul>
 * Visibility wiring: tfzyX.Vf(whhdh::WF) (dZ.java:160) — Valid Blocks is visible
 * only when Only For Valid Blocks is enabled.
 *
 * <p>Mechanism: writes {@code Minecraft.field_1752 rightClickDelay} (yarn name
 * {@code itemUseCooldown}) via {@link MinecraftClientAccessor} (reproducing original
 * {@code MinecraftAccessor.setRightClickDelay}).
 */
public class FastPlace extends Module {
	private final BoolSetting blocks = register(new BoolSetting("blocks", true));
	private final BoolSetting items = register(new BoolSetting("items", false));
	private final BoolSetting onlyForValidBlocks = register(new BoolSetting("only_for_valid_blocks", false));
	private final ItemListSetting validBlocks = register(new ItemListSetting(
			"valid_blocks", defaultBlockItems(), Integer.MAX_VALUE, true, null));
	private final DoubleSetting rightClickDelay = register(new DoubleSetting("right_click_delay", 1.0, 0.0, 4.0, 0.0, " ticks"));
	private final BoolSetting onlyIfYouCanPlace = register(new BoolSetting("only_if_you_can_place", false));
	private final BoolSetting onlyForSlots = register(new BoolSetting("only_for_slots", false));
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting slot0 = new BoolSetting("slot_0", true);
	private final BoolSetting slot1 = new BoolSetting("slot_1", true);
	private final BoolSetting slot2 = new BoolSetting("slot_2", true);
	private final BoolSetting slot3 = new BoolSetting("slot_3", true);
	private final BoolSetting slot4 = new BoolSetting("slot_4", true);
	private final BoolSetting slot5 = new BoolSetting("slot_5", true);
	private final BoolSetting slot6 = new BoolSetting("slot_6", true);
	private final BoolSetting slot7 = new BoolSetting("slot_7", true);
	private final BoolSetting slot8 = new BoolSetting("slot_8", true);

	public FastPlace() {
		super("fast_place", "Fast Place", "Removes right click delay", ModuleCategory.PLAYER);
		slots.add(slot0);
		slots.add(slot1);
		slots.add(slot2);
		slots.add(slot3);
		slots.add(slot4);
		slots.add(slot5);
		slots.add(slot6);
		slots.add(slot7);
		slots.add(slot8);
	}

	private static Set<Item> defaultBlockItems() {
		Set<Item> items = new LinkedHashSet<>();
		for (Field field : Blocks.class.getDeclaredFields()) {
			try {
				if (!(field.get(null) instanceof Block block) || block.asItem() == Items.AIR) {
					continue;
				}
				items.add(block.asItem());
			} catch (IllegalAccessException ignored) {
			}
		}
		return items;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			return;
		}
		validBlocks.setVisible(onlyForValidBlocks.getValue());

		if (!client.options.useKey.isPressed()) {
			return;
		}

		if (client instanceof MinecraftClientAccessor accessor) {
			int targetDelay = rightClickDelay.getValue().intValue();
			if (accessor.opengrim$getItemUseCooldown() <= targetDelay) {
				return;
			}

			ItemStack stack = player.getMainHandStack();
			if (stack.isEmpty()) {
				stack = player.getOffHandStack();
			}

			// Ranged weapons (bow, crossbow) manage their own charge timing
			if (!stack.isEmpty() && stack.getItem() instanceof RangedWeaponItem) {
				return;
			}

			boolean isBlockItem = !stack.isEmpty() && stack.getItem() instanceof BlockItem;
			if (isBlockItem ? !blocks.getValue() : !items.getValue()) {
				return;
			}
			if (onlyForValidBlocks.getValue()) {
				if (!isBlockItem || !validBlocks.contains(stack.getItem())) {
					return;
				}
			}
			if (onlyIfYouCanPlace.getValue()
					&& !(client.crosshairTarget != null && client.crosshairTarget.getType() == HitResult.Type.BLOCK)) {
				return;
			}
			if (onlyForSlots.getValue() && !slotEnabled(player.getInventory().getSelectedSlot())) {
				return;
			}

			accessor.opengrim$setItemUseCooldown(targetDelay);
		}
	}

	private boolean slotEnabled(int selected) {
		return switch (selected) {
			case 0 -> slot0.getValue();
			case 1 -> slot1.getValue();
			case 2 -> slot2.getValue();
			case 3 -> slot3.getValue();
			case 4 -> slot4.getValue();
			case 5 -> slot5.getValue();
			case 6 -> slot6.getValue();
			case 7 -> slot7.getValue();
			case 8 -> slot8.getValue();
			default -> false;
		};
	}
}
