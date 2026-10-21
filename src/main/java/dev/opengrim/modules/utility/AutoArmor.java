package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.DeathScreen;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.EquippableComponent;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.screen.slot.SlotActionType;

/**
 * Auto Armor (registry sixtwo.fv, module id 16): "Automatically replaces armor".
 *
 * <p>parity: settings 9/9 top-level, behavior partial. 1:1 reconstruction of
 * sixtwo.fv. Spec: analysis/specs/handlers/fv.md (evidence:
 * payload-decrypted/sixtwo/fv.java:59-226 constructor, fv.java:262-264 aQA
 * tick entry, fv.java:235-284 native inventory with aQL index to
 * EquipmentType, bzc stack classifier, aQE eligibility test, aQF source-slot
 * scorer, aQG/aQI stage, aQH swap performer, aQK query, pool slice with
 * EquipmentType HELMET/LEGGINGS/BOOTS, getEquipmentSlot, DeathScreen and
 * ActionResult.PASS guards, oJ slot helper, timers keyzc/SOlCc/gbLQO).
 *
 * <p>Recovered: Mode group (Legit/Normal, default Legit = index 0),
 * Inventory Mode group (Client/Silent, default Client), Auto Open Inventory
 * true, Close After Swap true with listener, Swap Cooldown (step 50, 0-5000,
 * default 0, " ms"), Open Delay (step 10, 0-1000, default 0, " ms"), Close
 * Delay (step 10, 0-1000, default 0, " ms"), Minimum Durability (step 1, 0-50,
 * default 15, " %"), Ignore Elytra false, three mT timers, per-tick evaluation
 * with armorIndex plans. Visibility wiring (fv.java:224-225):
 * Open/Close Delay fire on the Client option, Close After Swap on the aQM()
 * predicate; high-probability guess: aQM() = Client inventory mode. The
 * armor-slot index map uses PlayerScreenHandler slots 5-8 (HEAD..FEET).
 */
public class AutoArmor extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("legit", "normal"), "legit"));
	private final ModeSetting inventoryMode = register(new ModeSetting("inventory_mode",
			List.of("client", "silent"), "client"));
	private final BoolSetting autoOpenInventory = register(new BoolSetting("auto_open_inventory", true));
	private final BoolSetting closeAfterSwap = register(new BoolSetting("close_after_swap", true));
	private final DoubleSetting swapCooldown = register(new DoubleSetting("swap_cooldown", 50.0, 0.0, 5000.0, 0.0, " ms"));
	private final DoubleSetting openDelay = register(new DoubleSetting("open_delay", 10.0, 0.0, 1000.0, 0.0, " ms"));
	private final DoubleSetting closeDelay = register(new DoubleSetting("close_delay", 10.0, 0.0, 1000.0, 0.0, " ms"));
	private final DoubleSetting minimumDurability = register(new DoubleSetting("minimum_durability", 1.0, 0.0, 50.0, 15.0, " %"));
	private final BoolSetting ignoreElytra = register(new BoolSetting("ignore_elytra", false));

	private long openTimer;
	private long closeTimer;
	private long swapTimer;
	private boolean open;

	public AutoArmor() {
		super("auto_armor", "Auto Armor", "Automatically replaces armor", ModuleCategory.COMBAT);
	}

	@Override
	protected void onEnable() {
		openTimer = System.currentTimeMillis();
		closeTimer = System.currentTimeMillis();
		swapTimer = System.currentTimeMillis();
		open = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null || client.world == null) {
			return;
		}
		// Visibility wiring (fv.java:221-225): Open/Close Delay fire on the
		// Client option (KWINT::SZ); Close After Swap on the runtime predicate
		// aQM(). high-probability guess: aQM() = Client inventory mode.
		boolean clientMode = "client".equals(inventoryMode.getValue());
		openDelay.setVisible(clientMode);
		closeDelay.setVisible(clientMode);
		closeAfterSwap.setVisible(clientMode);

		if (client.currentScreen instanceof DeathScreen) {
			return;
		}
		// Close phase: a swap schedules the close; Close Delay elapses first.
		if (open && closeAfterSwap.getValue()
				&& System.currentTimeMillis() - closeTimer >= closeDelay.getValue().longValue()) {
			open = false;
			closeTimer = System.currentTimeMillis();
			return;
		}
		// Swap Cooldown: minimum gap between swaps (LHgKa, 0-5000 ms).
		if (System.currentTimeMillis() - swapTimer < swapCooldown.getValue().longValue()) {
			return;
		}
		for (int armorIndex = 0; armorIndex < 4; armorIndex++) {
			EquipmentSlot slot = slotForIndex(armorIndex);
			if (slot == null) {
				continue;
			}
			int source = findSource(player, slot);
			if (source < 0) {
				continue;
			}
			if (autoOpenInventory.getValue() && !open) {
				if (System.currentTimeMillis() - openTimer < openDelay.getValue().longValue()) {
					continue;
				}
				open = true;
				openTimer = System.currentTimeMillis();
			}
			performSwap(client, player, slot, source);
			swapTimer = System.currentTimeMillis();
			closeTimer = System.currentTimeMillis();
			return;
		}
	}

	private int findSource(ClientPlayerEntity player, EquipmentSlot slot) {
		ItemStack current = player.getEquippedStack(slot);
		boolean currentEmpty = current.isEmpty();
		int best = -1;
		long bestRemaining = eligible(current) ? remaining(current) : -1L;
		for (int i = 9; i < 45; i++) {
			if (i >= player.currentScreenHandler.slots.size()) {
				break;
			}
			ItemStack candidate = player.currentScreenHandler.slots.get(i).getStack();
			if (candidate.isEmpty() || !matchesSlot(candidate, slot)) {
				continue;
			}
			if (!eligible(candidate)) {
				continue;
			}
			long remaining = remaining(candidate);
			if (remaining > bestRemaining) {
				bestRemaining = remaining;
				best = i;
			}
		}
		if (best < 0) {
			return -1;
		}
		return scoreSource(slot, currentEmpty, best);
	}

	private boolean eligible(ItemStack stack) {
		if (stack.isEmpty()) {
			return false;
		}
		if (ignoreElytra.getValue() && stack.isOf(Items.ELYTRA)) {
			return false;
		}
		if (stack.getMaxDamage() <= 0) {
			return true;
		}
		double percent = 100.0 * (stack.getMaxDamage() - stack.getDamage()) / stack.getMaxDamage();
		return percent >= minimumDurability.getValue();
	}

	private static long remaining(ItemStack stack) {
		if (stack.getMaxDamage() <= 0) {
			return Long.MAX_VALUE;
		}
		return (long) (stack.getMaxDamage() - stack.getDamage());
	}

	private static int scoreSource(EquipmentSlot slot, boolean currentEmpty, int best) {
		if (best < 0) {
			return -1;
		}
		return best;
	}

	private static void performSwap(MinecraftClient client, ClientPlayerEntity player, EquipmentSlot slot, int source) {
		int armorSlot = armorHandlerSlot(slot);
		var handler = player.currentScreenHandler;
		client.interactionManager.clickSlot(handler.syncId, source, 0, SlotActionType.PICKUP, player);
		client.interactionManager.clickSlot(handler.syncId, armorSlot, 0, SlotActionType.PICKUP, player);
		client.interactionManager.clickSlot(handler.syncId, source, 0, SlotActionType.PICKUP, player);
	}

	private static EquipmentSlot slotForIndex(int armorIndex) {
		return switch (armorIndex) {
			case 0 -> EquipmentSlot.HEAD;
			case 1 -> EquipmentSlot.CHEST;
			case 2 -> EquipmentSlot.LEGS;
			case 3 -> EquipmentSlot.FEET;
			default -> null;
		};
	}

	private static boolean matchesSlot(ItemStack stack, EquipmentSlot slot) {
		EquippableComponent equippable = stack.get(DataComponentTypes.EQUIPPABLE);
		if (equippable == null) {
			return false;
		}
		return switch (equippable.slot()) {
			case HEAD -> slot == EquipmentSlot.HEAD;
			case CHEST -> slot == EquipmentSlot.CHEST;
			case LEGS -> slot == EquipmentSlot.LEGS;
			case FEET -> slot == EquipmentSlot.FEET;
			default -> false;
		};
	}

	private static int armorHandlerSlot(EquipmentSlot slot) {
		// PlayerScreenHandler armor slots 5-8 in EquipmentSlot.HEAD..FEET order.
		return switch (slot) {
			case HEAD -> 5;
			case CHEST -> 6;
			case LEGS -> 7;
			case FEET -> 8;
			default -> 5;
		};
	}
}
