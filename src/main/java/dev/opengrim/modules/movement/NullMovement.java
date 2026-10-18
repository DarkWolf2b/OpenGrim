package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.math.Vec3d;

/**
 * Null Movement (registry sixtwo.eq, module id 41): "Prevents movement blocking".
 *
 * <p>Port of sixtwo.eq. Sources:
 * analysis/decompiled/payload-named-cfr/sixtwo/eq.java:11-28 (constructor
 * eq.java:17-20; spec analysis/specs/handlers/eq.md).
 *
 * <p>The module constructs zero settings and declares NO event listener in Java: eq's
 * entire behavior is VM-resident — no {@code @hG} method, no aaj()/YO() override, and no
 * Minecraft API token at all (handlers/eq.md "Runtime model"/"Unrecovered";
 * native surface: class-init {@code _95f35cd333be09af769faf93936605a8()V} + 9 continuation
 * blocks). The tick logic below is therefore a discretionary stand-in for the registry
 * contract "Prevents movement blocking": none of the heuristic (thresholds 0.05/0.02/1.05/4.0,
 * the slow-block set) is evidenced by the decompile or the recovered constant pool.
 *
 * <p>static re-verify 2026-10-17: resolving the decrypted native pool
 * (jna-decrypted-v2.dll, pool base RVA 0x301ee50) at the {@code sixtwo/eq}
 * marker gives a run containing only eq's own declared statics
 * ({@code Ignfk}, {@code VLNez}, eq.java:11-12) before the next class marker —
 * there is no Minecraft class/method/field token anywhere in eq's run. That
 * upgrades the earlier "no token run exists" statement to a proven negative:
 * the module's effect is entirely outside the Java/native-pool API surface
 * (native movement-layer patch, like ex), so no static recovery of the
 * mechanism is possible from the payload.
 *
 * <p>Trace 2026-10-17: zero entries for sixtwo.eq in the whole session
 * (analysis/traces/2026-10-17/by-class-casesafe/eq.jsonl = class load only; the class-init
 * stub ran at boot, before method-entry capture). There is no capture condition that could
 * reveal more through Java-side tracing: the class has no listener to invoke — like ex
 * (Safe Walk), the effect lives in the native movement layer.
 */
public class NullMovement extends Module {
	private double freeSpeed;

	public NullMovement() {
		super("null_movement", "Null Movement", "Prevents movement blocking", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		boolean moving = player.input.playerInput.forward() || player.input.playerInput.backward()
				|| player.input.playerInput.left() || player.input.playerInput.right();
		Vec3d velocity = player.getVelocity();
		double speed = Math.sqrt(velocity.x * velocity.x + velocity.z * velocity.z);
		if (!moving) {
			return;
		}
		boolean blocked = player.isUsingItem() || isInSlowBlock(client, player);
		if (!blocked && speed > 0.05 && speed < 1.0) {
			freeSpeed = speed;
		} else if (blocked && speed > 0.02 && freeSpeed > speed * 1.05) {
			double factor = Math.min(freeSpeed / speed, 4.0);
			player.setVelocity(velocity.x * factor, velocity.y, velocity.z * factor);
		}
	}

	private static boolean isInSlowBlock(MinecraftClient client, ClientPlayerEntity player) {
		BlockState feet = client.world.getBlockState(player.getBlockPos());
		BlockState below = client.world.getBlockState(player.getBlockPos().down());
		return feet.isOf(Blocks.COBWEB)
				|| feet.isOf(Blocks.HONEY_BLOCK) || below.isOf(Blocks.HONEY_BLOCK)
				|| below.isOf(Blocks.SOUL_SAND)
				|| feet.isOf(Blocks.SWEET_BERRY_BUSH)
				|| feet.isOf(Blocks.POWDER_SNOW);
	}
}