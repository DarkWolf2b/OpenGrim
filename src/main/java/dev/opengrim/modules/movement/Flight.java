package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.Vec3d;

/**
 * Flight (registry sixtwo.eB, module id 44): "Allows to fly".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/casesafe/handlers/eB_.md (the pre-audit javadoc cited
 * handlers/eB.md, which documents the case-collapsed eb Chest Stealer). Evidence: eB.java:39-198 constructor with Anti Kick
 * eB.java:52, Vertical Speed Match eB.java:74, Off Time eB.java:84
 * (1.0/1.0-20.0/1.0 " ticks"), Delay eB.java:85-101 (1.0/1.0-200.0/20.0
 * " ticks"), Speed eB.java:102-117 (0.01/0.01-3.0/0.05), Mode eB.java:118
 * ({@code ct}, no {@code .SY()} → default index 0 = Abilities, ct.java:34),
 * Abilities eB.java:140, Velocity eB.java:151, Anti Kick Mode eB.java:167
 * (default index 0 = Normal), Normal eB.java:176, Packet eB.java:185, None
 * eB.java:186-196; state {@code dHwGI = Double.MAX_VALUE} eB.java:197, latches
 * LSmOj/EKwun/raYeS/xVfhc eB.java:25-28. Handlers: avr(gH$th) pre-motion
 * eB.java:244-245, avs(gH$ti) post-motion eB.java:262-263, avu(gL$tj) outbound
 * packet eB.java:247-248, avt(PlayerMoveC2SPacket, double) packet mutator
 * eB.java:258, avw()/avx() steps eB.java:260/214, avv(double,double) eB.java:254,
 * avy(Entity) eB.java:222, getters avz/avQ eB.java:210/265, aaj() eB.java:205-206,
 * YO() eB.java:285-286. Trace 2026-10-17 (by-class-casesafe/eB_.jsonl): aaj →
 * avS (static String[] getter, 63 calls) → YO with avw() inside; no numeric
 * exits.
 *
 * <p>Recovered contract (handlers/eB_.md "Runtime model"): pre-motion tick
 * applies flight (Abilities mode: vanilla ability flags + ability packet;
 * Velocity mode: per-tick velocity injection), post-motion tick does anti-kick
 * bookkeeping (Off Time cycle, EKwun/raYeS counters), and the outbound-packet
 * listener rewrites PlayerMoveC2Packets for Anti Kick = Packet
 * ({@code avt}/{@code avu}; server-side onGround/Y spoofing). Anti Kick =
 * Normal uses the ground baseline {@code dHwGI} (initialized to
 * Double.MAX_VALUE, eB.java:197).
 *
 * <p>High-probability guesses (labeled): the velocity composition math
 * (yaw/strafe/jump/sneak composition from Speed/Vertical Speed Match), the
 * anti-kick Normal dip (−0.04/tick) and its Delay/Off Time cycle, and the
 * packet rewrite as {@code y = min(y, baseline)} + onGround=true. Not
 * implemented ([U]): the {@code .aZS(false)} metadata flag (eB.java:41 —
 * semantics unrecovered), {@code avv}/{@code avy} predicate roles, and the
 * shared-window tokens (spec "Unrecovered" 4-6).
 */
public class Flight extends Module {
	private final BoolSetting antiKick = register(new BoolSetting("anti_kick", false));
	private final BoolSetting verticalSpeedMatch = register(new BoolSetting("vertical_speed_match", false));
	private final DoubleSetting offTime = register(new DoubleSetting("off_time", 1.0, 1.0, 20.0, 1.0, " ticks"));
	private final DoubleSetting delay = register(new DoubleSetting("delay", 1.0, 1.0, 200.0, 20.0, " ticks"));
	private final DoubleSetting speed = register(new DoubleSetting("speed", 0.01, 0.01, 3.0, 0.05, null));
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("abilities", "velocity"), "abilities"));
	private final ModeSetting antiKickMode = register(new ModeSetting("anti_kick_mode",
			List.of("normal", "packet", "none"), "normal"));

	private boolean flyingLatch;
	private int phaseA;
	private int phaseB;
	private float lastSpeed;
	private double groundBaseline = Double.MAX_VALUE;
	private boolean prevAllowFlight;
	private boolean prevFlying;
	private boolean abilitiesSaved;
	private long tickCounter;

	public Flight() {
		super("flight", "Flight", "Allows to fly", ModuleCategory.MOVEMENT);
	}

	@Override
	protected void onEnable() {
		tickCounter = 0;
		flyingLatch = false;
		phaseA = 0;
		phaseB = 0;
		groundBaseline = Double.MAX_VALUE;
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player != null && "abilities".equals(mode.getValue())) {
			prevAllowFlight = player.getAbilities().allowFlying;
			prevFlying = player.getAbilities().flying;
			abilitiesSaved = true;
			player.getAbilities().allowFlying = true;
			player.getAbilities().flying = true;
		}
	}

	@Override
	protected void onDisable() {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player != null && abilitiesSaved) {
			player.getAbilities().allowFlying = prevAllowFlight;
			player.getAbilities().flying = prevFlying;
			abilitiesSaved = false;
		}
		flyingLatch = false;
		groundBaseline = Double.MAX_VALUE;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		tickCounter++;
		flyingLatch = true;
		if (groundBaseline == Double.MAX_VALUE) {
			groundBaseline = player.getY();
		}
		if ("abilities".equals(mode.getValue())) {
			player.getAbilities().allowFlying = true;
			player.getAbilities().flying = true;
		} else {
			applyVelocityFlight(player);
		}
		phaseA++;
		phaseB++;
		lastSpeed = (float) Math.hypot(player.getVelocity().x, player.getVelocity().z);
		if (antiKick.getValue() && !"none".equals(antiKickMode.getValue())) {
			applyAntiKick(player);
		}
	}

	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (!antiKick.getValue() || !"packet".equals(antiKickMode.getValue())) {
			return;
		}
		if (!(event.packet() instanceof PlayerMoveC2SPacket move)) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			return;
		}
		Vec3d pos = client.player.getEntityPos();
		double y = rewriteY(move.getY(pos.y));
		if (move instanceof PlayerMoveC2SPacket.Full full) {
			event.setPacket(new PlayerMoveC2SPacket.Full(
					new Vec3d(full.getX(pos.x), y, full.getZ(pos.z)),
					full.getYaw(0.0f), full.getPitch(0.0f), true, full.horizontalCollision()));
		} else if (move instanceof PlayerMoveC2SPacket.PositionAndOnGround packet) {
			event.setPacket(new PlayerMoveC2SPacket.PositionAndOnGround(
					packet.getX(pos.x), y, packet.getZ(pos.z), true, packet.horizontalCollision()));
		}
	}

	public float currentSpeed() {
		return lastSpeed;
	}

	public double baseline() {
		return groundBaseline;
	}

	private void applyVelocityFlight(ClientPlayerEntity player) {
		PlayerInput input = player.input.playerInput;
		float yaw = player.getYaw();
		double forward = (input.forward() ? 1.0 : 0.0) - (input.backward() ? 1.0 : 0.0);
		double strafe = (input.left() ? 1.0 : 0.0) - (input.right() ? 1.0 : 0.0);
		double mag = Math.hypot(forward, strafe);
		double v = speed.getValue();
		double yawRad = Math.toRadians(yaw);
		double vx = 0.0;
		double vz = 0.0;
		if (mag > 0.0) {
			vx = (-Math.sin(yawRad) * forward + Math.cos(yawRad) * strafe) / mag * v;
			vz = (-Math.cos(yawRad) * forward - Math.sin(yawRad) * strafe) / mag * v;
		}
		double vy = 0.0;
		if (input.jump()) {
			vy = verticalSpeedMatch.getValue() ? Math.max(v, Math.hypot(vx, vz)) : v;
		} else if (input.sneak()) {
			vy = verticalSpeedMatch.getValue() ? -Math.max(v, Math.hypot(vx, vz)) : -v;
		}
		player.setVelocity(new Vec3d(vx, vy, vz));
	}

	private void applyAntiKick(ClientPlayerEntity player) {
		long delayTicks = Math.max(1, (long) delay.getValue().doubleValue());
		long offTicks = (long) offTime.getValue().doubleValue();
		if (tickCounter % delayTicks >= offTicks) {
			return;
		}
		if (player.input.hasForwardMovement()) {
			return;
		}
		groundBaseline = player.getY();
		if ("normal".equals(antiKickMode.getValue())) {
			player.setVelocity(player.getVelocity().add(0.0, -0.04, 0.0));
		} else {
			player.networkHandler.sendPacket(new PlayerMoveC2SPacket.OnGroundOnly(true, false));
		}
	}

	private double rewriteY(double y) {
		if (groundBaseline == Double.MAX_VALUE) {
			return y;
		}
		return y < groundBaseline ? y : groundBaseline;
	}
}
