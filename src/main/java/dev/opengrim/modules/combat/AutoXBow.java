package dev.opengrim.modules.combat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;

/**
 * Auto X-Bow (registry sixtwo.fa): "Automatically performs crossbow cart".
 *
 * <p>Port of sixtwo.fa (casesafe/payload-named-cfr/sixtwo/fa.java:27-47 constructor -
 * the non-casesafe fa.java is the sixtwo.fA Potion Refill twin - plan
 * fa$sL(railPos, firePos, cartHitResult, shotPoint), state enum fa$sK with 8 states;
 * handlers aGb(gM)/aGc(gA)/aGd(gv)/aGe(gH$th), plan builders aGn/aGo/aGp/aGq,
 * validators aGr/aGs; spec analysis/specs/casesafe/handlers/fa.md).
 * Single setting: Activation Key (unbound -999, fa.java:45).
 *
 * <p>Recovered-but-unimplemented surface (casesafe/handlers/fa.md): the cart technique
 * works with Items.TNT_MINECART (field_8069) + Items.FLINT_AND_STEEL (field_8884), a
 * rail/fire/cart-hit plan record and a vertical rail scan bounded by
 * HeightLimitView.getBottomY/getTopYInclusive, with an 8-state machine
 * (fa$sK YbJTa..wglWG).
 *
 * <p>stand-in, NOT 1:1: the entire behavior body is VM-virtualized (handlers/fa.md
 * "Unrecovered" #1-3, #10). The crossbow hold-to-charge / release-when-charged loop below
 * is a design-level placeholder for "Automatically performs crossbow cart" - it does not
 * implement the plan builders or the state machine. Only the Activation Key setting and
 * the state-field shape are evidence-backed. The shared static String[3] buffer
 * (aGV/aGU, read by fc's constructor and by fa's own aGd/aGe - trace 2026-10-17, 2x) is
 * omitted (documented gap).
 *
 * <p>trace 2026-10-17: aGd (pre-rotation) 1x, aGe (tick) 1x, each calling aGV once
 * (shared-buffer read), aGQ 1x inside YO. No TNT-minecart scenario in the tour, so no
 * plan/state path ran. Capture condition: enable with a TNT minecart on a rail in view
 * and log aGn/aGs + the aGf..aGm state steps.
 */
public class AutoXBow extends Module {
	private final KeybindSetting activationKey = register(new KeybindSetting("activation_key", -999));

	private int state;
	private boolean holdingUse;

	public AutoXBow() {
		super("auto_x_bow", "Auto X-Bow", "Automatically performs crossbow cart", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		state = 0;
		holdingUse = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		int key = activationKey.getValue();
		if (player == null || client.currentScreen != null || key < 0
				|| !net.minecraft.client.util.InputUtil.isKeyPressed(client.getWindow(), key)) {
			release(client);
			state = 0;
			return;
		}
		ItemStack stack = player.getMainHandStack();
		if (!stack.isOf(Items.CROSSBOW)) {
			stack = player.getOffHandStack();
			if (!stack.isOf(Items.CROSSBOW)) {
				release(client);
				state = 0;
				return;
			}
		}
		boolean tntNearby = hasTntMinecart(client, player);
		if (!isCharged(stack)) {
			if (!player.isUsingItem()) {
				client.options.useKey.setPressed(true);
				holdingUse = true;
			}
			state = 1;
			return;
		}
		state = 2;
		if (player.isUsingItem()) {
			client.options.useKey.setPressed(false);
			holdingUse = false;
		}
		if (tntNearby) {
			state = 3;
		}
	}

	private static boolean hasTntMinecart(MinecraftClient client, ClientPlayerEntity player) {
		if (client.world == null) {
			return false;
		}
		var box = new net.minecraft.util.math.Box(player.getEntityPos(), player.getEntityPos()).expand(6.0);
		return !client.world.getEntitiesByClass(
				net.minecraft.entity.vehicle.TntMinecartEntity.class, box, e -> e.isAlive()).isEmpty();
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

	static boolean isCharged(ItemStack stack) {
		return stack.contains(DataComponentTypes.CHARGED_PROJECTILES);
	}
}
