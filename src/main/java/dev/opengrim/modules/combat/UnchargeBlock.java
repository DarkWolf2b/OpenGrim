package dev.opengrim.modules.combat;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackPressEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.item.ItemStack;

/**
 * Uncharge Block (registry sixtwo.fD): "Prevents attacking when not passing
 * the threshold".
 *
 * <p>Port of sixtwo.fD (casesafe/payload-decrypted/sixtwo/fD_.java constructor id 19;
 * input handler aSH(gz), visibility predicate aSI(); spec
 * analysis/specs/handlers/fD.md, runtime GUI classes sixtwo_14/15 ct/cu and sixtwo_18 cz).
 * Settings in declaration order:
 * <ul>
 *   <li>Items To Use (ct radio group): All Items (default), Only Weapons, Specified Slots</li>
 *   <li>Slots (cz 9-slot hotbar selector): slot_0..slot_8, visible only when Specified Slots is active</li>
 *   <li>Threshold (cA range 0.25..1.0, step 0.01, default 0.9..0.9)</li>
 * </ul>
 *
 * <p><b>High-probability guesses</b> (labeled, per fD.md "Unrecovered" #1): the
 * blocked "charge" is read as
 * {@code ClientPlayerEntity.getAttackCooldownProgress} (the spec lists
 * attack-cooldown progress vs item-use charge as unrecovered), and "Only
 * Weapons" is checked through {@code DataComponentTypes.WEAPON} (the window
 * holds no weapon method token; same convention as the fD-family sibling
 * ports). The cancel decision itself (hH.bdX(true) on the attack key event) is
 * the recovered contract.
 */
public class UnchargeBlock extends Module {
	private final GroupSetting itemsToUse = register(new GroupSetting("items_to_use"));
	private final BoolSetting allItems;
	private final BoolSetting onlyWeapons;
	private final BoolSetting specifiedSlots;
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting[] slotToggles = new BoolSetting[PlayerInventory.getHotbarSize()];
	private final DoubleSetting threshold = register(new DoubleSetting("threshold", 0.01, 0.25, 1.0, 0.9, null));

	private boolean updatingRadio;

	public UnchargeBlock() {
		super("uncharge_block", "Uncharge Block", "Prevents attacking when not passing the threshold", ModuleCategory.COMBAT);
		allItems = register(new BoolSetting("all_items", true) {
			@Override
			protected void onChange() {
				onRadioChanged(this);
			}
		});
		onlyWeapons = register(new BoolSetting("only_weapons", false) {
			@Override
			protected void onChange() {
				onRadioChanged(this);
			}
		});
		specifiedSlots = register(new BoolSetting("specified_slots", false) {
			@Override
			protected void onChange() {
				onRadioChanged(this);
			}
		});
		itemsToUse.add(allItems);
		itemsToUse.add(onlyWeapons);
		itemsToUse.add(specifiedSlots);

		for (int i = 0; i < slotToggles.length; i++) {
			slotToggles[i] = register(new BoolSetting("slot_" + i, false));
			slots.add(slotToggles[i]);
		}
		updateSlotsVisibility();
	}

	private void onRadioChanged(BoolSetting changed) {
		if (updatingRadio) {
			return;
		}
		updatingRadio = true;
		try {
			if (changed.getValue()) {
				if (changed != allItems) {
					allItems.setValue(false);
				}
				if (changed != onlyWeapons) {
					onlyWeapons.setValue(false);
				}
				if (changed != specifiedSlots) {
					specifiedSlots.setValue(false);
				}
			} else if (!allItems.getValue() && !onlyWeapons.getValue() && !specifiedSlots.getValue()) {
				// ct radio group always keeps one option selected (default index 0: All Items).
				allItems.setValue(true);
			}
			updateSlotsVisibility();
		} finally {
			updatingRadio = false;
		}
	}

	/** Mirrors Fdfgt.Vf(this::aSI) where aSI() delegates to aMhGz.SZ() (Specified Slots). */
	private void updateSlotsVisibility() {
		boolean visible = specifiedSlots != null && specifiedSlots.getValue();
		slots.setVisible(visible);
		for (BoolSetting slotToggle : slotToggles) {
			if (slotToggle != null) {
				slotToggle.setVisible(visible);
			}
		}
	}

	@Override
	public void onTick() {
		updateSlotsVisibility();
	}

	@Subscribe
	public void onAttackPress(AttackPressEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.currentScreen != null) {
			return;
		}
		if (!appliesToHeldItem(player)) {
			return;
		}
		if (player.getAttackCooldownProgress(0.0f) < threshold.getValue()) {
			event.setCancelled(true);
		}
	}

	private boolean appliesToHeldItem(ClientPlayerEntity player) {
		if (allItems.getValue()) {
			return true;
		}
		if (onlyWeapons.getValue()) {
			ItemStack held = player.getMainHandStack();
			return held.contains(DataComponentTypes.WEAPON);
		}
		if (specifiedSlots.getValue()) {
			return isSlotSelected(player.getInventory().getSelectedSlot());
		}
		return false;
	}

	/** Mirrors sixtwo.cz#Uz(PlayerEntity): checks whether the 0-indexed hotbar slot is selected. */
	public boolean isSlotSelected(int slot) {
		if (slot < 0 || slot >= slotToggles.length) {
			return false;
		}
		return slotToggles[slot].getValue();
	}

	public void setSlotSelected(int slot, boolean selected) {
		if (slot >= 0 && slot < slotToggles.length) {
			slotToggles[slot].setValue(selected);
		}
	}
}
