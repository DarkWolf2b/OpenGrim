package dev.opengrim.modules.utility;

import java.util.List;
import java.util.Optional;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.screen.slot.SlotActionType;
import net.minecraft.util.Hand;

/**
 * Elytra Swapper (registry sixtwo.ef, module id 67): "Swaps chestplate with
 * elytra".
 *
 * <p>parity: settings 9/9 top-level (13 original widgets; the Mode and
 * Inventory Mode ct groups collapse into two ModeSettings), behavior partial.
 * 1:1 reconstruction of
 * sixtwo.ef. Spec: analysis/specs/handlers/ef.md (evidence:
 * payload-decrypted/sixtwo/ef.java:69-237 constructor, ef.java:232-236
 * visibility wiring, ef.java:264-277 arX input event and arY tick state
 * machine, pool window with getAbilities/creativeMode, isSubmergedInWater,
 * isTouchingWater, CHEST/getEquippedStack, ELYTRA, CHESTPLATE/cKl slot map,
 * oQ/oJ slot plumbing, ash item counter, asi slot-pair swap, mT timer).
 *
 * <p>Recovered: Activation Key default unbound, Mode group (Legit/Normal,
 * default Legit = index 0, no .SY()/.SO()), Inventory Mode group
 * (Client/Silent, default Client), Auto Open Inventory true, Swap Delay
 * (step 5, 0-500, default 50), Auto Fly false gating Swap Back After Landing
 * false, Swap Firework false gating Activate Firework false, mT timer,
 * swapped/pending state, creative and water gates, chest-slot read and elytra
 * detection, slot-pair swap and firework hand path.
 *
 * <p>high-probability guess: the Swap Delay unit suffix {@code QXbWi}
 * (ef.java:162) is decrypted lazily and absent from the constant dump; the
 * substitute is {@code " ms"} — the recovered suffix of the identical
 * delay-range settings in eH/eS/fv.
 *
 * <p>Stack divergence (documented): the Client/Silent inventory-mode branches
 * and the swap choreography (asd/ase/asf/asg/asi, hGtSw slot pair) are
 * j2cc-VM blocked; this rebuild performs the swap through direct
 * player-screen-handler clicks (Client path) and does not model the Silent
 * path or the asn/asm group-change rebuild callbacks.
 */
public class ElytraSwapper extends Module {
	private final KeybindSetting activationKey = register(new KeybindSetting("activation_key", -999));
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("legit", "normal"), "legit"));
	private final ModeSetting inventoryMode = register(new ModeSetting("inventory_mode",
			List.of("client", "silent"), "client"));
	private final BoolSetting autoOpenInventory = register(new BoolSetting("auto_open_inventory", true));
	private final DoubleSetting swapDelay = register(new DoubleSetting("swap_delay", 5.0, 0.0, 500.0, 50.0, " ms"));
	private final BoolSetting autoFly = register(new BoolSetting("auto_fly", false));
	private final BoolSetting swapBackAfterLanding = register(new BoolSetting("swap_back_after_landing", false));
	private final BoolSetting swapFirework = register(new BoolSetting("swap_firework", false));
	private final BoolSetting activateFirework = register(new BoolSetting("activate_firework", false));

	private long swapTimer;
	private boolean swapped;
	private boolean pendingFirework;
	private boolean keyDown;

	public ElytraSwapper() {
		super("elytra_swapper", "Elytra Swapper", "Swaps chestplate with elytra", ModuleCategory.PLAYER);
	}

	@Override
	protected void onEnable() {
		swapTimer = 0L;
		swapped = false;
		pendingFirework = false;
		keyDown = false;
	}

	@Override
	public void onTick() {
		swapBackAfterLanding.setVisible(autoFly.getValue());
		activateFirework.setVisible(swapFirework.getValue());

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		if (player.getAbilities().creativeMode) {
			return;
		}
		if (player.isSubmergedInWater() || player.isTouchingWater()) {
			return;
		}
		boolean pressed = activationKey.isPressed();
		if (pressed && !keyDown) {
			keyDown = true;
			requestSwap(client, player);
		} else if (!pressed) {
			keyDown = false;
		}
		if (System.currentTimeMillis() - swapTimer < swapDelay.getValue().longValue()) {
			return;
		}
		ItemStack chest = player.getEquippedStack(EquipmentSlot.CHEST);
		boolean wearingElytra = chest.isOf(Items.ELYTRA);
		if (pendingFirework && player.isGliding()) {
			Optional<Hand> hand = handForFirework(player);
			if (hand.isPresent()) {
				useHand(client, player, hand.get());
				pendingFirework = false;
				return;
			}
		}
		if (activateFirework.getValue() && swapFirework.getValue() && player.isGliding()) {
			Optional<Hand> hand = handForFirework(player);
			if (hand.isPresent()) {
				useHand(client, player, hand.get());
				return;
			}
		}
		if (!wearingElytra && autoFly.getValue() && !player.isOnGround()) {
			if (slotSwap(client, player)) {
				swapped = true;
				swapTimer = System.currentTimeMillis();
				pendingFirework = swapFirework.getValue();
			}
			return;
		}
		if (wearingElytra && swapped && swapBackAfterLanding.getValue() && player.isOnGround() && !player.isGliding()) {
			if (slotSwap(client, player)) {
				swapped = false;
				swapTimer = System.currentTimeMillis();
			}
		}
	}

	private void requestSwap(MinecraftClient client, ClientPlayerEntity player) {
		if (System.currentTimeMillis() - swapTimer < swapDelay.getValue().longValue()) {
			return;
		}
		if (slotSwap(client, player)) {
			swapped = !swapped;
			swapTimer = System.currentTimeMillis();
			pendingFirework = swapFirework.getValue() && player.getEquippedStack(EquipmentSlot.CHEST).isOf(Items.ELYTRA);
		}
	}

	private static Optional<Hand> handForFirework(ClientPlayerEntity player) {
		if (player.getMainHandStack().isOf(Items.FIREWORK_ROCKET)) {
			return Optional.of(Hand.MAIN_HAND);
		}
		if (player.getOffHandStack().isOf(Items.FIREWORK_ROCKET)) {
			return Optional.of(Hand.OFF_HAND);
		}
		return Optional.empty();
	}

	private static void useHand(MinecraftClient client, ClientPlayerEntity player, Hand hand) {
		client.interactionManager.interactItem(player, hand);
		player.swingHand(hand);
	}

	private static boolean slotSwap(MinecraftClient client, ClientPlayerEntity player) {
		if (client.currentScreen != null && !player.playerScreenHandler.equals(player.currentScreenHandler)) {
			return false;
		}
		var handler = player.playerScreenHandler;
		int elytraSlot = -1;
		for (int i = 0; i < handler.slots.size(); i++) {
			if (handler.slots.get(i).getStack().isOf(Items.ELYTRA)) {
				elytraSlot = i;
				break;
			}
		}
		if (elytraSlot < 0 || elytraSlot == 6) {
			return false;
		}
		swapSlots(client, player, 6, elytraSlot);
		return true;
	}

	private static void swapSlots(MinecraftClient client, ClientPlayerEntity player, int first, int second) {
		var handler = player.playerScreenHandler;
		client.interactionManager.clickSlot(handler.syncId, first, 0, SlotActionType.PICKUP, player);
		client.interactionManager.clickSlot(handler.syncId, second, 0, SlotActionType.PICKUP, player);
		client.interactionManager.clickSlot(handler.syncId, first, 0, SlotActionType.PICKUP, player);
	}
}
