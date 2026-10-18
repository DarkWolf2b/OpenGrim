package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.CollisionShapeEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;

/**
 * Anti Web (registry sixtwo.et, module id 42): "Allows to move faster in webs".
 *
 * <p>parity: full. 1:1 reconstruction of sixtwo.et. Spec:
 * analysis/specs/handlers/et.md (evidence: et.java:55-157 constructor,
 * auv tick handler et.java:298-385, auw collision-rewrite handler
 * et.java:388-425; jg.bBs cobweb-intersection helper, iX.bxO input-to-motion
 * converter).
 *
 * <p>Two strategies neutralize cobwebs client-side:
 * <ul>
 *   <li><b>Flight</b> — while the player intersects a cobweb, gravity is
 *       zeroed and WASD + jump + sneak become free 6-directional flight at
 *       configurable speeds (tick handler, only runs in this mode).</li>
 *   <li><b>Solid</b> — cobweb collision is rewritten to a full solid cube by
 *       substituting {@code Blocks.DIRT#getDefaultState()} in the collision
 *       event, so webs behave like normal solid blocks.</li>
 * </ul>
 * Vanilla is a pure passthrough (no behavior code in the original either).
 *
 * <p>The iX.bxO direction helper is translated from raw bytecode
 * (analysis/jars/payload-raw/sixtwo/iX.class#bxO; decompile
 * casesafe/payload-named-cfr/sixtwo/iX_.java:250-396): pure strafe keeps the
 * raw vector, forward input snaps the rotation by ±45 and uses a unit forward,
 * so the resulting direction has magnitude = speed. [G] The four rotation
 * constants are DES-decrypted (unrecovered); ±45 is forced by the
 * input→direction mapping. The {@code jg.bBs} cobweb test is mirrored locally
 * per the spec.
 */
public class AntiWeb extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("vanilla", "flight", "solid"), "flight"));
	private final DoubleSetting horizontalSpeed = register(new DoubleSetting("horizontal_speed", 0.01, 0.1, 2.0, 0.64, null));
	private final DoubleSetting verticalSpeed = register(new DoubleSetting("vertical_speed", 0.01, 0.1, 2.0, 0.64, null));

	public AntiWeb() {
		super("anti_web", "Anti Web", "Allows to move faster in webs", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		verticalSpeed.setVisible("flight".equals(mode.getValue()));
		horizontalSpeed.setVisible(!"vanilla".equals(mode.getValue()));
		// Original gate: enabled && jg.bBs(player) && Mode == Flight;
		// Vanilla and Solid have no tick behavior (et.md "Per-handler semantics").
		if (!isEnabled() || !"flight".equals(mode.getValue()) || !isInCobweb(client, player)) {
			return;
		}
		// iX.bxO(speed) — bytecode-verified direction helper (decompile
		// casesafe/payload-named-cfr/sixtwo/iX_.java:250-396; raw bytecode
		// analysis/jars/payload-raw/sixtwo/iX.class#bxO):
		//   forward == 0 -> raw strafe vector (no snap);
		//   forward != 0 -> yaw snapped by ±45 (sign of forward x sign of
		//   strafe), strafe zeroed, forward = ±1;
		//   result = unit direction * speed via the (yaw+90) basis.
		// [G] The four rotation constants are DES-decrypted (unrecovered);
		// ±45 is forced by the input->direction mapping (forward/backward
		// diagonals with forward = ±1).
		Vec2f input = player.input.getMovementInput();
		double forward = input.y;
		double strafe = input.x;
		float yaw = RotationManager.get().effectiveRotation().getYaw();
		if (forward != 0.0) {
			if (strafe > 0.0) {
				yaw += forward > 0.0 ? -45.0f : 45.0f;
			} else if (strafe < 0.0) {
				yaw += forward > 0.0 ? 45.0f : -45.0f;
			}
			strafe = 0.0;
			forward = forward > 0.0 ? 1.0 : -1.0;
		}
		double speed = horizontalSpeed.getValue().floatValue();
		double sin = Math.sin(Math.toRadians(yaw + 90.0f));
		double cos = Math.cos(Math.toRadians(yaw + 90.0f));
		Vec2f direction = new Vec2f(
				(float) (forward * speed * cos + strafe * speed * sin),
				(float) (forward * speed * sin - strafe * speed * cos));
		player.setVelocity(direction.x, 0.0, direction.y);
		double vertical = verticalSpeed.getValue().floatValue();
		if (client.options.jumpKey.isPressed()) {
			player.setVelocity(player.getVelocity().add(0.0, vertical, 0.0));
		}
		if (client.options.sneakKey.isPressed()) {
			player.setVelocity(player.getVelocity().add(0.0, -vertical, 0.0));
		}
	}

	/**
	 * Collision-rewrite handler (sixtwo.et auw(gS), et.java:388-425): in Solid
	 * mode, any cobweb block state whose collision is queried is replaced by
	 * Blocks.DIRT#getDefaultState().
	 */
	@Subscribe
	private void onCollisionShape(CollisionShapeEvent event) {
		if (!isEnabled() || !"solid".equals(mode.getValue())) {
			return;
		}
		if (event.state().isOf(Blocks.COBWEB)) {
			event.setReplacement(Blocks.DIRT.getDefaultState());
		}
	}

	/**
	 * Mirrors sixtwo.jg#bBs (et.md evidence base): iterates
	 * floor(minX..maxX) × floor(minY..maxY) × floor(minZ..maxZ) over the
	 * entity bounding box and returns true if any contained position's block
	 * state is cobweb. Position containment uses the block's lowest corner
	 * (Box.contains(BlockPos) in the payload mappings).
	 */
	private static boolean isInCobweb(MinecraftClient client, ClientPlayerEntity player) {
		Box box = player.getBoundingBox();
		BlockPos min = BlockPos.ofFloored(box.minX, box.minY, box.minZ);
		BlockPos max = BlockPos.ofFloored(box.maxX, box.maxY, box.maxZ);
		for (BlockPos pos : BlockPos.iterate(min, max)) {
			if (box.contains(Vec3d.of(pos))
					&& client.world.getBlockState(pos).isOf(Blocks.COBWEB)) {
				return true;
			}
		}
		return false;
	}
}
