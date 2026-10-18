package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;

/**
 * Speed (registry sixtwo.er, module id 133): "Increases your speed".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/casesafe/handlers/er.md. Evidence: er.java:37-241 constructor
 * with Mode er.java:40 ({@code ct}, no {@code .SY()}/{@code .SO()} → default
 * index 0 = Collision; children Collision er.java:62, Collision Target
 * er.java:81, Matrix er.java:90), Yaw Offset er.java:102 (default off), Yaw
 * Offset Mode er.java:119 ({@code .SO(1)} → default index 1 = Air; children
 * Ground er.java:128, Air er.java:130-135, Constant er.java:146), Distance
 * er.java:156 (0.05/0.05-2.0/0.3 " blocks"), On Ground er.java:167 / On Jump
 * er.java:176 / On Fall er.java:185 (0.05/0.5-3.0/1.1 each), Power
 * er.java:186-201 (0.01/0.01-0.1/0.06), Boost Range er.java:217
 * (0.1/0.0-2.0/1.0 " blocks"), Predict er.java:226 (1.0/0.0-10.0/5.0
 * " ticks"); visibility wiring er.java:227-233 (Distance + On Ground/Jump/Fall
 * iff Collision, Power/Boost Range/Predict iff Collision Target, Yaw Offset
 * Mode iff Yaw Offset). State: static {@code ou UGcHq} er.java:27, float
 * tmlzg er.java:28. Handlers: auc(gH$th) pre-motion er.java:258-259, aub(gv)
 * post-gH$th/pre-motion er.java:274-275, aud(gw) movement-input er.java:261-262,
 * private aue/auf/aug er.java:248/264/277. Trace 2026-10-17
 * (by-class-casesafe/er.jsonl): one auc and one aub call — no numeric exits.
 *
 * <p>Setting semantics: {@code ct}+{@code cu} is an exclusive radio group —
 * {@code cu.SZ() = IopEl && parent.index == this} with {@code IopEl} always
 * true (no setter; cu.java:174-198), so the {@code ct} selected index alone
 * decides; there are no independent toggle groups (contra the [inferred]
 * reading in the spec's Runtime model). The wiring gates above follow
 * {@code cu.SZ()} / {@code cJ.WF()}.
 *
 * <p>Recovered contract (handlers/er.md "Runtime model", all [inferred]): the
 * pool's group surface includes {@code jg.bBN(LivingEntity, double)} (box
 * overlap with {@code expand(d, 0, d)}), movement-flag reads
 * ({@code iX.bxG/bxH}), {@code Block.getSlipperiness()},
 * {@code Entity.setVelocity}, {@code getEntities/isAlive/isSpectator} and
 * {@code hurtTime}; per-tick order is auc (gH$th) → aub (gv) → qL motion
 * processing, with aud(gw) the only handler holding live movement input.
 *
 * <p>High-probability guesses (labeled): the velocity multiplier branch for
 * Collision/Collision Target (state-selected On Ground/On Jump/On Fall factor),
 * the Matrix branch as a directional Power increment, and the yaw-offset
 * lateral push — the original's motion math is VM-resident and explicitly not
 * recoverable (spec "Unrecovered" 1). Not implemented ([U]): the Collision
 * Target loop (Boost Range/Predict/hurtTime gates), the {@code ou UGcHq}
 * rotation-pipeline context, {@code tmlzg}, and the {@code gw} event booleans.
 */
public class Speed extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("collision", "collision_target", "matrix"), "collision"));
	private final BoolSetting yawOffset = register(new BoolSetting("yaw_offset", false));
	private final ModeSetting yawOffsetMode = register(new ModeSetting("yaw_offset_mode",
			List.of("ground", "air", "constant"), "air"));
	private final DoubleSetting distance = register(new DoubleSetting("distance", 0.05, 0.05, 2.0, 0.3, " blocks"));
	private final DoubleSetting onGround = register(new DoubleSetting("on_ground", 0.05, 0.5, 3.0, 1.1, null));
	private final DoubleSetting onJump = register(new DoubleSetting("on_jump", 0.05, 0.5, 3.0, 1.1, null));
	private final DoubleSetting onFall = register(new DoubleSetting("on_fall", 0.05, 0.5, 3.0, 1.1, null));
	private final DoubleSetting power = register(new DoubleSetting("power", 0.01, 0.01, 0.1, 0.06, null));
	private final DoubleSetting boostRange = register(new DoubleSetting("boost_range", 0.1, 0.0, 2.0, 1.0, " blocks"));
	private final DoubleSetting predict = register(new DoubleSetting("predict", 1.0, 0.0, 10.0, 5.0, " ticks"));

	public Speed() {
		super("speed", "Speed", "Increases your speed", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		boolean collisionMode = "collision".equals(mode.getValue());
		boolean collisionTargetMode = "collision_target".equals(mode.getValue());
		distance.setVisible(collisionMode);
		onGround.setVisible(collisionMode);
		onJump.setVisible(collisionMode);
		onFall.setVisible(collisionMode);
		power.setVisible(collisionTargetMode);
		boostRange.setVisible(collisionTargetMode);
		predict.setVisible(collisionTargetMode);
		yawOffsetMode.setVisible(yawOffset.getValue());

		Vec2f input = player.input.getMovementInput();
		if (input.lengthSquared() < 0.05) {
			return;
		}
		Vec3d dir = toWorldSpace(player, input).normalize();
		Vec3d velocity = player.getVelocity();
		boolean onGroundNow = player.isOnGround();
		if ("matrix".equals(mode.getValue())) {
			player.setVelocity(velocity.add(dir.multiply(power.getValue())));
		} else {
			double multiplier = onGroundNow ? onGround.getValue()
					: velocity.y > 0.0 ? onJump.getValue() : onFall.getValue();
			player.setVelocity(velocity.x * multiplier, velocity.y, velocity.z * multiplier);
		}
		if (yawOffset.getValue() && yawStateMatches(onGroundNow)) {
			Vec3d lateral = new Vec3d(-dir.z, 0.0, dir.x);
			player.setVelocity(player.getVelocity().add(lateral.multiply(power.getValue())));
		}
	}

	private boolean yawStateMatches(boolean onGroundNow) {
		return switch (yawOffsetMode.getValue()) {
			case "ground" -> onGroundNow;
			case "air" -> !onGroundNow;
			default -> true;
		};
	}

	private static Vec3d toWorldSpace(ClientPlayerEntity player, Vec2f input) {
		double yaw = Math.toRadians(player.getYaw());
		Vec3d forward = new Vec3d(-Math.sin(yaw), 0.0, Math.cos(yaw));
		Vec3d right = new Vec3d(Math.cos(yaw), 0.0, Math.sin(yaw));
		return forward.multiply(input.y).add(right.multiply(input.x));
	}
}