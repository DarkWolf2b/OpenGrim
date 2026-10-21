package dev.opengrim.modules.utility;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;

/**
 * Multi Task (registry sixtwo.dT, module id 65): "Allows to use two items at same time".
 *
 * <p>Port of sixtwo.dT (analysis/decompiled/casesafe/payload-named-cfr/sixtwo/dT_.java:13-36
 * constructor; listener apI(gH$th); spec analysis/specs/casesafe/handlers/dT_.md — the plain
 * handlers/dT.md path is the dt (Nametags) case-twin).
 *
 * <p>Settings: 0 settings in the original class.
 *
 * <p>Behavior: on the pre-motion tick listener (apI), checks KeyBinding.attackKey.isPressed()
 * (method_1434, field_1886) and drives ClientPlayerInteractionManager.attackBlock(BlockPos, Direction)
 * (method_2910) on the crosshair block while the player is using an item (player.isUsingItem()),
 * allowing simultaneous item use and block attacking/mining.
 *
 * <p>Stand-ins for VM-resident conditions (dT_.md "Unrecovered" items 2/4): the target
 * provenance (crosshair raycast) and the isUsingItem() gate are not evidenced — only the
 * attackKey read + attackBlock call are pool-proven. Our tick runs at END_CLIENT_TICK, a
 * stand-in for the original {@code gH$th} pre-motion phase (dT_.md:21).
 *
 * <p>trace 2026-10-17 (registry id 65): {@code apI} did not trigger in the 4&nbsp;s
 * window (zero method entries) even though {@code gH$th} tick dispatches occurred during
 * the session (other modules' pre-motion listeners did run then). Capture condition for a
 * follow-up: enable the module, hold the attack key and hold right-click on a use item
 * (food/potion/bow) so the tick body's attackKey &rarr; attackBlock path is exercised —
 * the listener itself fires on any in-world pre-motion tick while enabled.
 */
public class MultiTask extends Module {
	public MultiTask() {
		super("multi_task", "Multi Task", "Allows to use two items at same time", ModuleCategory.PLAYER);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}

		if (client.options.attackKey.isPressed() && player.isUsingItem()) {
			if (client.crosshairTarget instanceof BlockHitResult blockHit
					&& blockHit.getType() == HitResult.Type.BLOCK) {
				client.interactionManager.attackBlock(blockHit.getBlockPos(), blockHit.getSide());
			}
		}
	}
}