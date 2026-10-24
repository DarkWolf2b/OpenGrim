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
 * charged projectile to execute the cart detonation.
 */
public class AutoXBow extends Module {
	private final KeybindSetting activationKey = register(new KeybindSetting("activation_key", -999));

	private int state;
	private boolean holdingUse;
	private long lastShotTime;

	public AutoXBow() {
		super("auto_x_bow", "Auto X-Bow", "Automatically performs crossbow cart", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		state = 0;
		holdingUse = false;
		lastShotTime = 0L;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.currentScreen != null || !activationKey.isPressed()) {
			release(client);
			state = 0;
			return;
		}

		Hand hand = findCrossbowHand(player);
		if (hand == null) {
			int slot = findCrossbowHotbarSlot(player);
			if (slot >= 0) {
				player.getInventory().setSelectedSlot(slot);
				hand = Hand.MAIN_HAND;
			} else {
				release(client);
				state = 0;
				return;
			}
		}

		ItemStack stack = player.getStackInHand(hand);
		boolean charged = isCharged(stack);
		TntMinecartEntity targetCart = findTargetCart(client, player);

		if (!charged) {
			state = 1; // RWBsV: Charging
			if (!player.isUsingItem()) {
				client.options.useKey.setPressed(true);
				holdingUse = true;
			}
			return;
		}

		// Charged state
		if (holdingUse || player.isUsingItem()) {
			client.options.useKey.setPressed(false);
			holdingUse = false;
		}
		state = 2; // MAgEy: Charged and ready

		if (targetCart != null) {
			state = 3; // oBiuY: Target acquired
			Vec3d cartCenter = targetCart.getBoundingBox().getCenter();
			Vec3d eye = player.getEyePos();
			double dx = cartCenter.x - eye.x;
			double dy = cartCenter.y - eye.y;
			double dz = cartCenter.z - eye.z;
			double dist = Math.sqrt(dx * dx + dz * dz);
			float yaw = (float) Math.toDegrees(Math.atan2(dz, dx)) - 90.0f;
			float pitch = (float) -Math.toDegrees(Math.atan2(dy, dist));

			state = 4; // dzJyB: Aiming
			RotationManager.get().submitRotation(new Rotation(yaw, pitch), RotationPriority.uWTdl, this);

			long now = System.currentTimeMillis();
			if (now - lastShotTime >= 250L) {
				state = 5; // hECYg: Firing
				client.interactionManager.interactItem(player, hand);
				player.swingHand(hand);
				lastShotTime = now;
				state = 6; // tKIGa: Shot completed
			}
		} else {
			state = 7; // wglWG: Waiting for cart target
		}
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

	@Override
	public void onDisable() {
		release(MinecraftClient.getInstance());
		state = 0;
	}

	public int getState() {
		return state;
	}

	static boolean isCharged(ItemStack stack) {
		return stack.contains(DataComponentTypes.CHARGED_PROJECTILES);
	}
}
