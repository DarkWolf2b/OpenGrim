package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.math.Vec2f;

/**
 * Strafe (registry sixtwo.eA, module id 35): "Makes player strafe".
 *
 * <p>Sources (declared-class-verified paths):
 * <ul>
 * <li>analysis/decompiled/casesafe/payload-named-cfr/sixtwo/eA_.java (class eA;
 *     constructor lines 17-36, listener line 46);
 *     the plain handlers/eA.md handler spec correctly documents sixtwo.eA</li>
 * <li>analysis/decompiled/casesafe/payload-decrypted/sixtwo/eA_.java (class eA;
 *     folded constructor 17-36)</li>
 * <li>The un-prefixed payload trees (analysis/decompiled/sixtwo/eA.java variants)
 *     declare sixtwo.ea (No Break Delay) on this checkout — case-collision twins</li>
 * <li>analysis/specs/handlers/eA.md</li>
 * </ul>
 *
 * <p>Settings (1 decrypted):
 * <ul>
 * <li>Speed (uYjwj, cC numeric, step 0.05, min 0.25, max 2.0, default 0.25, suffix null)</li>
 * </ul>
 *
 * <p>Behavior:
 * Virtualized pre-motion tick listener (avm, gH$th).
 * MC API surface: LivingEntity forwardSpeed/sidewaysSpeed, Entity updateVelocity, Vec3d getX/getY/getZ,
 * and reference to sixtwo.eC (Sprint module).
 * Re-derives horizontal movement vectors along camera yaw from forward and sideways input,
 * scaled by the Speed setting value.
 *
 * <p>static re-verify 2026-10-17: eA's own bounded pool run (resolved from
 * jna-decrypted-v2.dll, pool base RVA 0x301ee50, bounded by the next class
 * marker) is exactly {@code lClZL | avn | field_6250 LivingEntity.forwardSpeed |
 * field_6212 LivingEntity.sidewaysSpeed | oOQKe | GMvGu} — all eA's own
 * declared members plus the two input-velocity fields. Note that
 * {@code Entity.updateVelocity} is <b>not</b> in eA's run (it belongs to a
 * neighbour's window), so the forwardSpeed/sidewaysSpeed read-modify-write is
 * the recovered surface and the port's getVelocity/setVelocity approximation
 * stands as the documented stack adaptation.
 *
 * <p>Trace 2026-10-17: avm did NOT trigger — its 4 s window (~[168791.1,168832.9]) contained
 * ZERO client ticks: the per-tick hc event jumped from 168689.7 to 168883.8 across it (~19 s
 * tick stall under trace load; analysis/traces/2026-10-17/by-class-casesafe/eA_.jsonl =
 * class load only). Capture condition: enable eA during normal ticking and move (forward +
 * strafe) while airborne — avm is the pre-motion tick handler and should then call the
 * updateVelocity/forwardSpeed surface. The eC (Sprint) interaction form remains unrecovered.
 */
public class Strafe extends Module {
	private final DoubleSetting speed = register(new DoubleSetting("speed", 0.05, 0.25, 2.0, 0.25, null));

	public Strafe() {
		super("strafe", "Strafe", "Makes player strafe", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.isTouchingWater() || player.isInLava() || player.isClimbing()) {
			return;
		}

		Vec2f input = player.input.getMovementInput();
		float sideways = input.x;
		float forward = input.y;
		if (sideways == 0.0f && forward == 0.0f) {
			return;
		}

		// Touch Sprint module (sixtwo.eC reference in eA pool run)
		Module sprint = ModuleManager.get().byId("sprint");
		if (sprint != null && sprint.isEnabled()) {
			player.setSprinting(true);
		}

		if (!player.isOnGround()) {
			double currentSpeed = Math.hypot(player.getVelocity().x, player.getVelocity().z);
			double targetSpeed = Math.max(currentSpeed, speed.getValue().doubleValue());
			float yaw = player.getYaw();
			double yawRad = Math.toRadians(yaw);
			double vx = -Math.sin(yawRad) * forward + Math.cos(yawRad) * sideways;
			double vz = Math.cos(yawRad) * forward + Math.sin(yawRad) * sideways;
			double mag = Math.hypot(vx, vz);
			if (mag > 1.0E-4) {
				vx = (vx / mag) * targetSpeed;
				vz = (vz / mag) * targetSpeed;
				player.setVelocity(vx, player.getVelocity().y, vz);
			}
		}
	}
}
