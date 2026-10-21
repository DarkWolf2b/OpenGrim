package dev.opengrim.modules.movement;

import java.lang.reflect.Field;
import java.util.List;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.InputUtil;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Knockback Displacement (registry sixtwo.fs, module id 151):
 * "Allows to knockback target in custom direction".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/casesafe/handlers/fs.md (the source-map's handlers/fs.md is
 * the case-collapsed fS Name Protect twin). Evidence: fs.java:141-328
 * constructor — Mode fs.java:144 (Rotation fs.java:165 / Instant fs.java:175,
 * default index 0 = Rotation), Displace fs.java:185 (Always fs.java:194 / With
 * Knockback Only fs.java:216, default Always), Knockback Direction fs.java:237
 * ({@code .SO(0)} → default index 0 = Dynamic; Dynamic fs.java:247, Direction
 * fs.java:289), Change Angle Key fs.java:265 ({@code .VO(-999)}), Angle Step
 * fs.java:277 (1.0/1.0-180.0/90.0), Given Direction fs.java:306
 * (1.0/-180.0-180.0/180.0, suffix {@code aRvFo}), Hide Rotation fs.java:321;
 * visibility wiring fs.java:324-327 (Change Angle Key + Angle Step iff Dynamic,
 * Given Direction iff Direction, Hide Rotation iff Rotation); state
 * fs.java:29-38 (LypUB = 180.0F, PnWns, QOpIL, TvEdE, FFrtc, latches,
 * bapCK queue). The full 13-name tree is confirmed by the decrypted name order
 * in analysis/decrypted/full-dump.jsonl (Mode, Rotation, Instant, Displace,
 * Always, With Knockback Only, Knockback Direction, Dynamic, Change Angle Key,
 * Angle Step, Direction, Given Direction, Hide Rotation — resolving spec
 * "Unrecovered" 5). Handlers: aPg(gL$tj) outbound packet at
 * {@code mw.CRUCIAL} fs.java:45-48, aPh(gA) input fs.java:50-51, aPf(gH$th)
 * fs.java:75-76, aPd(gZ$tt) fs.java:106-107, aPc(gM) fs.java:111-112, aPe(gv)
 * fs.java:124-125, aPp(gL$tj) filter fs.java:94, steps aPk/aPq/aPr
 * fs.java:104/86/59, aPn(Entity,double,boolean,int) fs.java:57, aPm(KeyBinding,
 * KeyBinding) fs.java:55, aPl/aPo float setters fs.java:53/84, aPj()F
 * fs.java:98. Trace 2026-10-17 (by-class-casesafe/fs.jsonl): three aPg calls,
 * each with aPp returning false (no rewrite); aPe and aPf once per tick ×2;
 * YO → aPr → aPq on the disable path.
 *
 * <p>Mechanism divergence (labeled): the original rewrites OUTBOUND movement
 * packets while a displacement latch is set — aPg at CRUCIAL priority, the
 * aPp packet-type filter, spoofed sends through the raw ClientConnection
 * ({@code dpm()}/{@code callSendPosition}) with the originals held in the
 * bapCK queue; velocity detection is tick-side (no inbound listener,
 * handlers/fs.md "Unrecovered" 3). This rebuild instead rewrites the inbound
 * {@code EntityVelocityUpdateS2CPacket} for the local player to the computed
 * direction — the only hook in the current framework that can express
 * "displacement in a custom direction"; all displacement math is VM-resident
 * and explicitly not recoverable (spec "Unrecovered" 1-2,4).
 *
 * <p>High-probability guesses (labeled): the 0.35 horizontal magnitude of the
 * rewritten knockback, the Dynamic direction as yaw + working angle with the
 * Change Angle Key rotating it by Angle Step per press, With Knockback Only as
 * {@code getRecentDamageSource() != null}, and the " deg" suffix (aRvFo is not
 * resolved in the dump — spec "Unrecovered" 6).
 */
public class KnockbackDisplacement extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("rotation", "instant"), "rotation"));
	private final ModeSetting displace = register(new ModeSetting("displace",
			List.of("always", "with_knockback_only"), "always"));
	private final ModeSetting knockbackDirection = register(new ModeSetting("knockback_direction",
			List.of("dynamic", "direction"), "dynamic"));
	private final IntSetting changeAngleKey = register(new IntSetting("change_angle_key", -999, 348, -999));
	private final DoubleSetting angleStep = register(new DoubleSetting("angle_step", 1.0, 1.0, 180.0, 90.0, null));
	private final DoubleSetting givenDirection = register(new DoubleSetting("given_direction", 1.0, -180.0, 180.0, 180.0, " deg"));
	private final BoolSetting hideRotation = register(new BoolSetting("hide_rotation", false));

	private float givenAngleCache = 180.0f;
	private float workingAngle;
	private Entity trackedEntity;
	private int stepCounter;
	private boolean latchBtLpD;
	private boolean latchVoVop;
	private double displacementAccumulator;
	private boolean latchBYxHg;
	private boolean latchURrjv;
	private final Queue<Packet<?>> packetQueue = new ConcurrentLinkedQueue<>();

	private boolean prevChangeAngleKeyPressed;
	private volatile Field velocityField;

	public KnockbackDisplacement() {
		super("knockback_displacement", "Knockback Displacement",
				"Allows to knockback target in custom direction", ModuleCategory.COMBAT);
	}

	@Override
	protected void onEnable() {
		givenAngleCache = givenDirection.getValue().floatValue();
		workingAngle = 0.0f;
		stepCounter = 0;
		displacementAccumulator = 0.0;
		latchBtLpD = false;
		latchVoVop = false;
		latchBYxHg = false;
		latchURrjv = false;
		packetQueue.clear();
		prevChangeAngleKeyPressed = false;
	}

	@Override
	protected void onDisable() {
		packetQueue.clear();
		latchBtLpD = false;
		latchVoVop = false;
		latchBYxHg = false;
		latchURrjv = false;
	}

	@Override
	public void onTick() {
		boolean dynamic = "dynamic".equals(knockbackDirection.getValue());
		boolean direction = "direction".equals(knockbackDirection.getValue());
		boolean rotation = "rotation".equals(mode.getValue());

		changeAngleKey.setVisible(dynamic);
		angleStep.setVisible(dynamic);
		givenDirection.setVisible(direction);
		hideRotation.setVisible(rotation);

		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getWindow() != null) {
			int key = changeAngleKey.getValue();
			boolean held = key != -999 && InputUtil.isKeyPressed(client.getWindow(), key);
			if (held && !prevChangeAngleKeyPressed) {
				float step = angleStep.getValue().floatValue();
				workingAngle = MathHelper.wrapDegrees(workingAngle + step);
			}
			prevChangeAngleKeyPressed = held;
		}
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!(event.packet() instanceof EntityVelocityUpdateS2CPacket packet)) {
			return;
		}
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player == null || packet.getEntityId() != player.getId()) {
			return;
		}
		if ("with_knockback_only".equals(displace.getValue()) && player.getRecentDamageSource() == null) {
			return;
		}

		double angleDegrees;
		if ("dynamic".equals(knockbackDirection.getValue())) {
			angleDegrees = MathHelper.wrapDegrees(player.getYaw() + workingAngle);
		} else {
			angleDegrees = givenDirection.getValue().doubleValue();
		}

		double radians = Math.toRadians(angleDegrees);
		Vec3d rewritten = new Vec3d(-Math.sin(radians) * 0.35, packet.getVelocity().y, Math.cos(radians) * 0.35);
		if (!setVelocity(packet, rewritten)) {
			return;
		}

		if ("rotation".equals(mode.getValue()) && hideRotation.getValue()) {
			player.setBodyYaw(player.getYaw());
		}
	}

	private boolean setVelocity(EntityVelocityUpdateS2CPacket packet, Vec3d velocity) {
		Field field = velocityField;
		if (field == null) {
			for (Field f : EntityVelocityUpdateS2CPacket.class.getDeclaredFields()) {
				if (f.getType() == Vec3d.class) {
					f.setAccessible(true);
					velocityField = f;
					field = f;
					break;
				}
			}
			if (field == null) {
				try {
					field = EntityVelocityUpdateS2CPacket.class.getDeclaredField("velocity");
					field.setAccessible(true);
					velocityField = field;
				} catch (ReflectiveOperationException e) {
					return false;
				}
			}
		}
		try {
			field.set(packet, velocity);
			return true;
		} catch (IllegalAccessException e) {
			return false;
		}
	}

	public float getGivenAngleCache() {
		return givenAngleCache;
	}

	public float getWorkingAngle() {
		return workingAngle;
	}

	public Entity getTrackedEntity() {
		return trackedEntity;
	}

	public int getStepCounter() {
		return stepCounter;
	}

	public double getDisplacementAccumulator() {
		return displacementAccumulator;
	}

	public Queue<Packet<?>> getPacketQueue() {
		return packetQueue;
	}

	public boolean isLatchBtLpD() {
		return latchBtLpD;
	}

	public boolean isLatchVoVop() {
		return latchVoVop;
	}

	public boolean isLatchBYxHg() {
		return latchBYxHg;
	}

	public boolean isLatchURrjv() {
		return latchURrjv;
	}
}
