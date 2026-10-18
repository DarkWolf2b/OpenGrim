package dev.opengrim.modules.combat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.screen.slot.SlotActionType;

import java.util.List;

/**
 * Auto Totem (registry sixtwo.fx): "Manages totem in your off hand".
 *
 * <p>Port of sixtwo.fx (payload-named-cfr/sixtwo/fx.java constructor; tick
 * aRj(gH$th), input aRk(gA) at LOWEST for Block Input, plan aRp()/aRr()/aRs(),
 * score aRu()/aRw(), executor aRt(oH), item getter aRv(); spec
 * analysis/specs/handlers/fx.md). Settings in declaration order: Totem Item
 * (cK item whitelist, default TOTEM_OF_UNDYING; modeled as a group with the
 * decrypted default item, as in HandNoClip/AnchorMacro), Mode (Legit / Normal,
 * .SO(1) so the default is Normal), Inventory Mode (Client / Silent, .SO(1)
 * so the default is Silent), Auto Open Inventory (true), Take From Hotbar
 * (false), Swap Cooldown 50.0/0.0-5000.0/0.0 " ms", Open Delay
 * 10.0/0.0-1000.0/0.0 " ms", Close After Swap (true), Close Delay
 * 10.0/0.0-1000.0/0.0 " ms", Return Original Slot (false), Health Requirement
 * (true), Minimal Health % 1.0/0.0-100.0/50.0 "%", Pick Random Totem (false),
 * Block Input (true).
 *
 * <p>Visibility wiring (fx.java:326-332): Minimal Health % ← Health
 * Requirement; Auto Open Inventory / Open Delay / Close After Swap / Block
 * Input ← Inventory Mode == Client; Close Delay ← Close After Swap
 * (high-probability guess for the native supplier aRy — the recovered wiring
 * is only {@code qPSSJ.Vf(this::aRy)}).
 */
public class AutoTotem extends Module {
	private static final int OFFHAND_SLOT = 45;

	private final GroupSetting totemItem = register(new GroupSetting("totem_item"));
	private final BoolSetting totemOfUndying = new BoolSetting("totem_of_undying", true);
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("legit", "normal"), "normal"));
	private final ModeSetting inventoryMode = register(new ModeSetting("inventory_mode",
			List.of("client", "silent"), "silent"));
	private final BoolSetting autoOpenInventory = register(new BoolSetting("auto_open_inventory", true));
	private final BoolSetting takeFromHotbar = register(new BoolSetting("take_from_hotbar", false));
	private final DoubleSetting swapCooldown = register(new DoubleSetting("swap_cooldown", 50.0, 0.0, 5000.0, 0.0, " ms"));
	private final DoubleSetting openDelay = register(new DoubleSetting("open_delay", 10.0, 0.0, 1000.0, 0.0, " ms"));
	private final BoolSetting closeAfterSwap = register(new BoolSetting("close_after_swap", true));
	private final DoubleSetting closeDelay = register(new DoubleSetting("close_delay", 10.0, 0.0, 1000.0, 0.0, " ms"));
	private final BoolSetting returnOriginalSlot = register(new BoolSetting("return_original_slot", false));
	private final BoolSetting healthRequirement = register(new BoolSetting("health_requirement", true));
	private final DoubleSetting minimalHealthPct = register(new DoubleSetting("minimal_health_pct", 1.0, 0.0, 100.0, 50.0, "%"));
	private final BoolSetting pickRandomTotem = register(new BoolSetting("pick_random_totem", false));
	private final BoolSetting blockInput = register(new BoolSetting("block_input", true));

	private long lastSwapMs = -1L;
	private long openedMs = -1L;
	private int stagedSource = -1;

	public AutoTotem() {
		super("auto_totem", "Auto Totem", "Manages totem in your off hand", ModuleCategory.COMBAT);
		totemItem.add(totemOfUndying);
	}

	@Override
	public void onEnable() {
		lastSwapMs = -1L;
		openedMs = -1L;
		stagedSource = -1;
	}

	@Override
	public void onTick() {
		// Visibility wiring, fx.java:326-332.
		minimalHealthPct.setVisible(healthRequirement.getValue());
		boolean clientMode = "client".equals(inventoryMode.getValue());
		autoOpenInventory.setVisible(clientMode);
		openDelay.setVisible(clientMode);
		closeAfterSwap.setVisible(clientMode);
		closeDelay.setVisible(closeAfterSwap.getValue());
		blockInput.setVisible(clientMode);

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		if (lastSwapMs >= 0 && System.currentTimeMillis() - lastSwapMs < Math.round(swapCooldown.getValue())) {
			return;
		}
		if (isTotem(player.getOffHandStack())) {
			stagedSource = -1;
			return;
		}
		if (healthRequirement.getValue()
				&& 100.0 * player.getHealth() / player.getMaxHealth() > minimalHealthPct.getValue()) {
			return;
		}
		if (clientMode && autoOpenInventory.getValue() && openedMs < 0) {
			openedMs = System.currentTimeMillis();
			return;
		}
		if (openedMs >= 0 && System.currentTimeMillis() - openedMs < Math.round(openDelay.getValue())) {
			return;
		}
		int source = stagedSource >= 0 ? stagedSource : findTotem(player);
		if (source < 0) {
			return;
		}
		stagedSource = source;
		if ("legit".equals(mode.getValue())) {
			client.interactionManager.clickSlot(player.currentScreenHandler.syncId, source, 40,
					SlotActionType.SWAP, player);
			stagedSource = -1;
		} else {
			var handler = player.currentScreenHandler;
			client.interactionManager.clickSlot(handler.syncId, source, 0, SlotActionType.PICKUP, player);
			client.interactionManager.clickSlot(handler.syncId, OFFHAND_SLOT, 0, SlotActionType.PICKUP, player);
			if (returnOriginalSlot.getValue() && !handler.getCursorStack().isEmpty()) {
				client.interactionManager.clickSlot(handler.syncId, source, 0, SlotActionType.PICKUP, player);
			}
			stagedSource = -1;
		}
		lastSwapMs = System.currentTimeMillis();
		openedMs = -1L;
		if (closeAfterSwap.getValue()) {
			lastSwapMs += Math.round(closeDelay.getValue());
		}
	}

	public boolean blocksInput() {
		return isEnabled() && blockInput.getValue() && stagedSource >= 0;
	}

	private int findTotem(ClientPlayerEntity player) {
		int from = takeFromHotbar.getValue() ? 36 : 9;
		java.util.List<Integer> found = new java.util.ArrayList<>();
		for (int slot = from; slot <= 44; slot++) {
			if (isTotem(player.currentScreenHandler.slots.get(slot).getStack())) {
				if (!pickRandomTotem.getValue()) {
					return slot;
				}
				found.add(slot);
			}
		}
		if (pickRandomTotem.getValue() && !found.isEmpty()) {
			return found.get((int) (Math.random() * found.size()));
		}
		return -1;
	}

	/** The configured cK item whitelist (default TOTEM_OF_UNDYING). */
	private boolean isTotem(net.minecraft.item.ItemStack stack) {
		return totemOfUndying.getValue() && stack.isOf(Items.TOTEM_OF_UNDYING);
	}
}
