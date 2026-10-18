package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

/**
 * Safe Walk (registry sixtwo.ex, module id 51): "Stops you from walking off blocks".
 *
 * <p>1:1 port of sixtwo.ex. Sources:
 * analysis/decompiled/payload-decrypted/sixtwo/ex.java:10-57 (constructor
 * ex.java:19-42 with setting Release On Forward ex.java:41; getter auV()
 * ex.java:55; spec analysis/specs/casesafe/handlers/ex.md — the non-casesafe
 * specs/handlers/ex.md path carries sixtwo.eX (Anchor Macro) content because
 * of the eX/ex filename collision).
 *
 * <p>While enabled, prevents walking off block edges by clamping horizontal
 * movement at solid block boundaries. When Release On Forward is enabled,
 * the edge clamp releases while forward movement is held.
 *
 * <p>Parity notes: the original class is config-only on the Java surface (one
 * toggle + native getter auV); the safe-walk patch itself lives in the native
 * movement layer and its edge geometry is unrecovered (casesafe/handlers/ex.md
 * "Unrecovered" #1), so this tick-based clamp is a designer-discretion
 * approximation, not a decompiled-body port. The Release On Forward polarity
 * follows the spec's name-derived reading.
 *
 * <p>Trace 2026-10-17: zero entries for sixtwo.ex in the whole session
 * (analysis/traces/2026-10-17/by-class-casesafe/ex.jsonl = class load only) —
 * consistent with the config-only Java surface: there is no handler method that
 * could run. Capture condition: none is observable through Java-side tracing —
 * the edge patch executes inside the native layer (ex's pool run has zero MC
 * tokens, ew.md:27); a conditioned session can only observe its native effect.
 */
public class SafeWalk extends Module {
	private final BoolSetting releaseOnForward = register(new BoolSetting("release_on_forward", false));

	public SafeWalk() {
		super("safe_walk", "Safe Walk", "Stops you from walking off blocks", ModuleCategory.MOVEMENT);
	}

	/**
	 * Getter for Release On Forward toggle, porting {@code auV()} from sixtwo.ex.
	 */
	public BoolSetting auV() {
		return releaseOnForward;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		if (releaseOnForward.getValue() && (client.options.forwardKey.isPressed()
				|| player.input.playerInput.forward())) {
			return;
		}
		if (!player.isOnGround() || player.isSneaking() || player.isGliding()) {
			return;
		}
		Vec3d velocity = player.getVelocity();
		if (velocity.x * velocity.x + velocity.z * velocity.z < 1.0e-5) {
			return;
		}
		double nextX = player.getX() + velocity.x;
		double nextZ = player.getZ() + velocity.z;
		BlockPos below = BlockPos.ofFloored(nextX, player.getY() - 0.5, nextZ);
		BlockState state = client.world.getBlockState(below);
		if (state.isAir()) {
			player.setVelocity(0.0, velocity.y, 0.0);
		}
	}
}
