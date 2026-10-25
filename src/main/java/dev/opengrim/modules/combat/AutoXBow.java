package dev.opengrim.modules.combat;

import java.util.Comparator;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.entity.Entity;
import net.minecraft.entity.vehicle.TntMinecartEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Auto X-Bow (registry sixtwo.fa, module id 164): "Automatically performs crossbow cart".
 *
 * <p>Port of sixtwo.fa (casesafe/payload-named-cfr/sixtwo/fa.java:27-47 constructor —
 * the non-casesafe fa.java is the sixtwo.fA Potion Refill twin — plan
 * fa$sL(railPos, firePos, cartHitResult, shotPoint), state enum fa$sK with 8 states:
 * YbJTa (0), RWBsV (1), MAgEy (2), oBiuY (3), dzJyB (4), hECYg (5), tKIGa (6), wglWG (7);
 * handlers aGb(gM)/aGc(gA)/aGd(gv)/aGe(gH$th), plan builders aGn/aGo/aGp/aGq,
 * validators aGr/aGs; spec analysis/specs/casesafe/handlers/fa.md).
 * Single setting: Activation Key (unbound -999, fa.java:45).
 *
 * <p>Cart contraption automation: detects held or hotbar crossbow, charges it via use-key,
 * locks aim to the target TNT minecart via {@link RotationManager}, and releases/fires the
 * charged projectile to execute the cart detonation. The 8 states now drive the tick
 * (0 acquire → 1 charge → 2 cart → 3 aim → 4 fire → 5 cooldown → 6 re-arm → 7 no target)
 * and the hotbar slot is restored on release/disable. The evidenced
 * TNT-minecart/rail/flint-and-steel plan builders (`aGn/aGo/aGp`, `fa$sL`) and the
 * `fa$sK` transition table are still missing; this is a crossbow stand-in, not a
 * complete `fa` port (PARITY.md Wave 15).
 */
public class AutoXBow extends Module {
	private final KeybindSetting activationKey = register(new KeybindSetting("activation_key", -999));

	private int state;
	private boolean holdingUse;
	private long lastShotTime;
	private Hand activeHand;
	private TntMinecartEntity targetCart;
	private Rotation aimRotation;
	private int previousSlot = -1;

	public AutoXBow() {
		super("auto_x_bow", "Auto X-Bow", "Automatically performs crossbow cart", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		state = 0;
		holdingUse = false;
		lastShotTime = 0L;
		activeHand = null;
		targetCart = null;
		aimRotation = null;
		previousSlot = -1;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.currentScreen != null
				|| !activationKey.isPressed()) {
			release(client);
			restoreSlot(client);
			state = 0;
			return;
		}
		// The player can switch/drop the crossbow while the state machine is
		// active; re-acquire instead of using whatever occupies the hand.
		if (activeHand != null && !player.getStackInHand(activeHand).isOf(Items.CROSSBOW)) {
			release(client);
			state = 0;
			return;
		}

		switch (state) {
			case 0 -> acquireCrossbow(client, player);
			case 1 -> chargeCrossbow(client, player);
			case 2 -> acquireCart(client, player);
			case 3 -> aimAtCart(player, client);
			case 4 -> fire(client, player);
			case 5 -> cooldown();
			case 6 -> rearm(client, player);
			default -> {
				// wglWG: no usable target/crossbow; keep polling from the scan state.
				release(client);
				state = 0;
			}
		}
	}

	/** YbJTa (0): locate the crossbow in the hands or hotbar. */
	private void acquireCrossbow(MinecraftClient client, ClientPlayerEntity player) {
		activeHand = findCrossbowHand(player);
		if (activeHand == null) {
			int slot = findCrossbowHotbarSlot(player);
			if (slot < 0) {
				release(client);
				restoreSlot(client);
				state = 7;
				return;
			}
			if (previousSlot < 0) {
				previousSlot = player.getInventory().getSelectedSlot();
			}
			player.getInventory().setSelectedSlot(slot);
			activeHand = Hand.MAIN_HAND;
		}
		state = 1;
	}

	/** RWBsV (1): hold use until the crossbow reports a charged projectile. */
	private void chargeCrossbow(MinecraftClient client, ClientPlayerEntity player) {
		if (activeHand == null) {
			state = 0;
			return;
		}
		ItemStack stack = player.getStackInHand(activeHand);
		if (isCharged(stack)) {
			if (holdingUse || player.isUsingItem()) {
				client.options.useKey.setPressed(false);
				holdingUse = false;
			}
			state = 2;
			return;
		}
		if (!player.isUsingItem()) {
			client.options.useKey.setPressed(true);
			holdingUse = true;
		}
	}

	/** MAgEy (2): acquire a live TNT minecart. */
	private void acquireCart(MinecraftClient client, ClientPlayerEntity player) {
		targetCart = findTargetCart(client, player);
		state = targetCart == null ? 7 : 3;
	}

	/** oBiuY (3): compute and submit the aim. */
	private void aimAtCart(ClientPlayerEntity player, MinecraftClient client) {
		if (targetCart == null || !targetCart.isAlive() || activeHand == null) {
			state = 2;
			return;
		}
		Vec3d cartCenter = targetCart.getBoundingBox().getCenter();
		Vec3d eye = player.getEyePos();
		double dx = cartCenter.x - eye.x;
		double dy = cartCenter.y - eye.y;
		double dz = cartCenter.z - eye.z;
		double dist = Math.sqrt(dx * dx + dz * dz);
		float yaw = (float) Math.toDegrees(Math.atan2(dz, dx)) - 90.0f;
		float pitch = (float) -Math.toDegrees(Math.atan2(dy, dist));
		aimRotation = new Rotation(yaw, pitch);
		RotationManager.get().submitRotation(aimRotation, RotationPriority.uWTdl, this);
		state = 4;
	}

	/** dzJyB (4): release the charged shot. */
	private void fire(MinecraftClient client, ClientPlayerEntity player) {
		if (activeHand == null || client.interactionManager == null) {
			state = 0;
			return;
		}
		long now = System.currentTimeMillis();
		if (now - lastShotTime < 250L) {
			state = 5;
			return;
		}
		if (aimRotation != null) {
			// The use packet carries its own yaw/pitch; apply our own aim around
			// the use so the server sees the cart direction (rawPending could be
			// another module's higher-priority rotation).
			RotationManager.get().applyForAction(aimRotation,
					() -> client.interactionManager.interactItem(player, activeHand));
		} else {
			client.interactionManager.interactItem(player, activeHand);
		}
		player.swingHand(activeHand);
		lastShotTime = now;
		state = 5;
	}

	/** hECYg (5): rate-limit the next shot. */
	private void cooldown() {
		if (System.currentTimeMillis() - lastShotTime >= 250L) {
			state = 6;
		}
	}

	/** tKIGa (6): charged crossbow is empty again; loop back to charging. */
	private void rearm(MinecraftClient client, ClientPlayerEntity player) {
		if (activeHand == null) {
			state = 0;
			return;
		}
		ItemStack stack = player.getStackInHand(activeHand);
		state = isCharged(stack) ? 2 : 1;
	}

	private static Hand findCrossbowHand(ClientPlayerEntity player) {
		if (player.getMainHandStack().isOf(Items.CROSSBOW)) {
			return Hand.MAIN_HAND;
		}
		if (player.getOffHandStack().isOf(Items.CROSSBOW)) {
			return Hand.OFF_HAND;
		}
		return null;
	}

	private static int findCrossbowHotbarSlot(ClientPlayerEntity player) {
		for (int i = 0; i < 9; i++) {
			if (player.getInventory().getStack(i).isOf(Items.CROSSBOW)) {
				return i;
			}
		}
		return -1;
	}

	private static TntMinecartEntity findTargetCart(MinecraftClient client, ClientPlayerEntity player) {
		if (client.world == null) {
			return null;
		}
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(8.0);
		return client.world.getEntitiesByClass(TntMinecartEntity.class, box, e -> e.isAlive())
				.stream().min(Comparator.comparingDouble(e -> player.squaredDistanceTo(e))).orElse(null);
	}

	private void release(MinecraftClient client) {
		if (holdingUse) {
			client.options.useKey.setPressed(false);
			holdingUse = false;
		}
	}

	private void restoreSlot(MinecraftClient client) {
		if (previousSlot >= 0 && client.player != null) {
			client.player.getInventory().setSelectedSlot(previousSlot);
		}
		previousSlot = -1;
		activeHand = null;
		targetCart = null;
		aimRotation = null;
	}

	@Override
	public void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		release(client);
		restoreSlot(client);
		state = 0;
	}

	public int getState() {
		return state;
	}

	static boolean isCharged(ItemStack stack) {
		return stack.contains(DataComponentTypes.CHARGED_PROJECTILES);
	}
}
