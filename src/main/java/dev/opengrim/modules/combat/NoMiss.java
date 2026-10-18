package dev.opengrim.modules.combat;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackPressEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.item.ItemStack;
import net.minecraft.util.hit.EntityHitResult;

/**
 * No Miss (registry sixtwo.fE): "Cancels attack if misses".
 *
 * <p>Port of sixtwo.fE (payload-decrypted/sixtwo/fE.java:37-114 constructor,
 * key-input listener aSN(gz) at :133-134, "Slots" visibility predicate
 * aSO() at :123; spec analysis/specs/handlers/fE.md). Settings in declaration
 * order, mirroring the fD–fH family tree (fD's port
 * {@link UnchargeBlock} uses the same translation):
 * <ul>
 *   <li>Items To Use (ct radio group): All Items (default), Only Weapons,
 *       Specified Slots (fE.java:53-95)</li>
 *   <li>Slots (cz slot selector): slot_0..slot_8, visible only when
 *       Specified Slots is active (fE.java:96,113)</li>
 *   <li>Ignore Friends (false) (fE.java:112)</li>
 * </ul>
 *
 * <p>The attack press is cancelled at {@link AttackPressEvent} when the
 * crosshair resolves to nothing hittable (the miss test; range 3.0 from the
 * family reach resolver ox.rnYFy = 3.0, spec analysis/specs/handlers/fE.md
 * "Shared support classes") or when Ignore Friends excludes the aimed player.
 *
 * <p><b>High-probability guesses</b> (labeled, per fE.md "Unrecovered" #1/#4):
 * the miss test itself is reconstructed from the crosshair target + the
 * recovered ox reach value (3.0) — the VM body is unrecovered; and Ignore
 * Friends is read as "friends are excluded" (a friend under the crosshair is
 * never attacked), matching the repo-wide friend-module convention
 * (TriggerBot/TargetMargin/AimAssist); the spec's alternative reading ("miss
 * test skipped for friends") is not chosen.
 */
public class NoMiss extends Module {
	private final GroupSetting itemsToUse = register(new GroupSetting("items_to_use"));
	private final BoolSetting allItems;
	private final BoolSetting onlyWeapons;
	private final BoolSetting specifiedSlots;
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting[] slotToggles = new BoolSetting[PlayerInventory.getHotbarSize()];
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));

	private boolean updatingRadio;

	public NoMiss() {
		super("no_miss", "No Miss", "Cancels attack if misses", ModuleCategory.COMBAT);
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

	/** Mirrors zeyXv.Vf(this::aSO) where aSO() delegates to IGJjx.SZ() (Specified Slots). */
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
		if (player == null || client.world == null || !appliesToHeldItem(player)) {
			return;
		}
		if (!(client.crosshairTarget instanceof EntityHitResult hit)) {
			event.setCancelled(true);
			return;
		}
		Entity target = hit.getEntity();
		double reach = 3.0;
		if (!target.isAlive() || player.distanceTo(target) > reach) {
			event.setCancelled(true);
		} else if (ignoreFriends.getValue() && target instanceof net.minecraft.entity.player.PlayerEntity p
				&& dev.opengrim.util.FriendsManager.isFriend(p.getGameProfile().name())) {
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
