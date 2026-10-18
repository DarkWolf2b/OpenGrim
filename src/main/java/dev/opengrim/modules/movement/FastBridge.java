package dev.opengrim.modules.movement;

import com.google.common.collect.Streams;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.InputUtil;
import net.minecraft.item.BlockItem;
import net.minecraft.item.ItemStack;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.shape.VoxelShape;

/**
 * Fast Bridge (registry sixtwo.eD, module id 50): "Automatically sneaks on block edge".
 *
 * <p>Port of sixtwo.eD. Spec: analysis/specs/casesafe/handlers/eD_.md (evidence:
 * casesafe/payload-decrypted/sixtwo/eD_.java:22-106 ctor with Only When Holding Block
 * (:49), Only When Looking At Block (:77), Only When Moving Backwards (:105), all
 * .WE(false); awt(gH.th) tick handler and awu() helper).
 *
 * <p>Each tick the module evaluates the three gating settings, checks replaceable block state
 * under the player's center and probes the inset/offset bounding box via
 * {@code World.getBlockCollisions} + {@code Streams.stream(...).findAny()}, forcing sneak while
 * unsupported at a block edge and releasing it via {@link #awu()} otherwise.
 *
 * <p>high-probability guesses (VM bodies, casesafe/handlers/eD_.md "Unrecovered" #1-3):
 * the edge-test geometry (offset/expand amounts), the sneak actuation via
 * options.sneakKey/PlayerInput (the original patches the input natively - no Java token),
 * the "skip while already sneaking" guard, and the second isReplaceable() check.
 *
 * <p>trace 2026-10-17: awt ran 3x; awu ran 2x per tick (6x total) - the helper is invoked
 * twice inside the tick body (role unrecovered), so this port's single release-path call
 * is a documented stand-in. Capture condition: stand at a block edge with Fast Bridge on
 * and log awt/awu entry counts + the sneak key state per tick.
 */
public class FastBridge extends Module {
	private final BoolSetting onlyWhenHoldingBlock = register(new BoolSetting("only_when_holding_block", false));
	private final BoolSetting onlyWhenLookingAtBlock = register(new BoolSetting("only_when_looking_at_block", false));
	private final BoolSetting onlyWhenMovingBackwards = register(new BoolSetting("only_when_moving_backwards", false));

	private boolean forcedSneak;

	public FastBridge() {
		super("fast_bridge", "Fast Bridge", "Automatically sneaks on block edge", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		boolean shouldSneak = conditionsMet(client, player)
				&& player.isOnGround()
				&& wouldLeaveEdge(client, player);
		if (shouldSneak) {
			applySneak(client, player, true);
		} else {
			awu(client, player);
		}
	}

	private boolean conditionsMet(MinecraftClient client, ClientPlayerEntity player) {
		if (!forcedSneak && player.isSneaking()) {
			return false;
		}
		if (onlyWhenHoldingBlock.getValue() && !isHoldingBlock(player)) {
			return false;
		}
		if (onlyWhenLookingAtBlock.getValue()
				&& (!(client.crosshairTarget instanceof BlockHitResult blockHit)
						|| blockHit.getType() != HitResult.Type.BLOCK)) {
			return false;
		}
		if (onlyWhenMovingBackwards.getValue()
				&& (player.input.hasForwardMovement() || !player.input.playerInput.backward())) {
			return false;
		}
		return true;
	}

	private static boolean isHoldingBlock(ClientPlayerEntity player) {
		return isBlock(player.getMainHandStack()) || isBlock(player.getOffHandStack());
	}

	private static boolean isBlock(ItemStack stack) {
		return stack.getItem() instanceof BlockItem;
	}

	/**
	 * Probes whether the player's center/inset box at the current block edge has no supporting
	 * collision beneath it (mirroring {@code BlockState.isReplaceable()} + {@code Box.offset} /
	 * {@code Box.expand} + {@code World.getBlockCollisions} + {@code Streams.findAny} in eD_.md).
	 */
	private boolean wouldLeaveEdge(MinecraftClient client, ClientPlayerEntity player) {
		Box inset = player.getBoundingBox().offset(0.0, -0.5, 0.0).expand(-0.05, 0.0, -0.05);
		Iterable<VoxelShape> collisions = client.world.getBlockCollisions(player, inset);
		if (Streams.stream(collisions).findAny().isEmpty()) {
			return true;
		}
		BlockPos belowCenter = BlockPos.ofFloored(player.getX(), player.getY() - 0.5, player.getZ());
		return client.world.getBlockState(belowCenter).isReplaceable();
	}

	private void applySneak(MinecraftClient client, ClientPlayerEntity player, boolean sneak) {
		client.options.sneakKey.setPressed(sneak);
		PlayerInput current = player.input.playerInput;
		if (current != null) {
			player.input.playerInput = new PlayerInput(
					current.forward(), current.backward(), current.left(), current.right(),
					current.jump(), sneak, current.sprint());
		}
		player.setSneaking(sneak);
		forcedSneak = sneak;
	}

	/**
	 * Releases forced sneak state and restores physical sneak key state (mirroring {@code awu()}).
	 */
	private void awu(MinecraftClient client, ClientPlayerEntity player) {
		if (!forcedSneak) {
			return;
		}
		boolean physicalSneak = isPhysicalSneakPressed(client);
		applySneak(client, player, physicalSneak);
		forcedSneak = false;
	}

	private static boolean isPhysicalSneakPressed(MinecraftClient client) {
		if (client.getWindow() == null || client.currentScreen != null) {
			return false;
		}
		int code = client.options.sneakKey.getDefaultKey().getCode();
		return code >= 0 && InputUtil.isKeyPressed(client.getWindow(), code);
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null) {
			awu(client, client.player);
		}
		forcedSneak = false;
	}
}
