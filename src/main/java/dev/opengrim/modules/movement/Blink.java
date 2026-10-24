package dev.opengrim.modules.movement;

import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicBoolean;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Blink (registry sixtwo.ey, module id 45): "Cancels sending motion packets".
 *
 * <p>Port of sixtwo.ey (payload-decrypted/sixtwo/ey.java:39-142 constructor;
 * spec analysis/specs/casesafe/handlers/ey.md). Settings in declaration order:
 * Disable on Velocity (ey.java:62), Pulse (ey.java:63-75), Pulse Packets
 * 1.0/1.0-1000.0/17.0 (ey.java:90), Auto Disable (ey.java:104), Disable
 * Packets 1.0/1.0-1000.0/17.0 (ey.java:121), Cancel Key keybind default -999
 * (ey.java:133). Visibility wiring: Pulse Packets under Pulse and Disable
 * Packets under Auto Disable (ey.java:140-141). Handlers: ava(gL$tk) receive
 * (ey.java:36-37), auZ(gM) (ey.java:154-155), ave() (ey.java:157),
 * avd(go$sX) render (ey.java:159-160), avb(gL$tj) send (ey.java:164-165),
 * avf(Packet) re-send primitive (ey.java:167), avc(gH$th) tick
 * (ey.java:169-170), aaj/YO lifecycle (ey.java:149-150,178-179).
 *
 * <p>Outbound motion packets (all {@code PlayerMoveC2SPacket} subtypes, per
 * ey.md "Packet queueing" #1-2) are held in a FIFO queue instead of being
 * sent; the control-packet run passes through. The queue is drained in order
 * through the re-send primitive on disable — trace 2026-10-17: YO() drains the
 * queue via avf ×6 (one call per held packet, 170999608695-170999740813);
 * avb fired 6×, ava 32×, avc 6× in the same session.
 *
 * <p>Unrecovered (documented choices): the exact queue-vs-passthrough
 * assignment per packet class (ey.md #2 — impl passes the recovered control
 * run and holds all move subtypes), cancel-key semantics flush/revert (ey.md
 * #5 — impl restores the enable-time position/yaw/sprint then disables), pulse
 * cadence (ey.md #8), the {@code cN.XF} client-message text (ey.md #6 — not
 * posted), and whether aaj/YO clear or flush (ey.md #10 — impl clears on
 * enable, flushes on disable).
 */
public class Blink extends Module {
	private final BoolSetting disableOnVelocity = register(new BoolSetting("disable_on_velocity", false));
	private final BoolSetting pulse = register(new BoolSetting("pulse", false));
	private final DoubleSetting pulsePackets = register(new DoubleSetting("pulse_packets", 1.0, 1.0, 1000.0, 17.0, null));
	private final BoolSetting autoDisable = register(new BoolSetting("auto_disable", false));
	private final DoubleSetting disablePackets = register(new DoubleSetting("disable_packets", 1.0, 1.0, 1000.0, 17.0, null));
	private final KeybindSetting cancelKey = register(new KeybindSetting("cancel_key", -999));

	private final Queue<Packet<?>> held = new ConcurrentLinkedQueue<>();
	private final AtomicBoolean holding = new AtomicBoolean(false);
	private Vec3d captureA = Vec3d.ZERO;
	private Vec3d captureB = Vec3d.ZERO;
	private Box captureBox;
	private float captureYaw;
	private boolean captureSprinting;
	private boolean flushing;

	public Blink() {
		super("blink", "Blink", "Cancels sending motion packets", ModuleCategory.MOVEMENT);
	}

	@Override
	protected void onEnable() {
		held.clear();
		holding.set(true);
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player != null) {
			captureA = player.getEntityPos();
			captureB = player.getEntityPos();
			captureBox = player.getBoundingBox();
			captureYaw = player.getYaw();
			captureSprinting = player.isSprinting();
		} else {
			captureA = Vec3d.ZERO;
			captureB = Vec3d.ZERO;
			captureBox = null;
			captureYaw = 0.0f;
			captureSprinting = false;
		}
	}

	@Override
	protected void onDisable() {
		holding.set(false);
		flush();
	}

	@Override
	public void onTick() {
		pulsePackets.setVisible(pulse.getValue());
		disablePackets.setVisible(autoDisable.getValue());
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		if (cancelKey.isPressed()) {
			player.setPosition(captureA.x, captureA.y, captureA.z);
			player.setYaw(captureYaw);
			player.setSprinting(captureSprinting);
			setEnabled(false);
			return;
		}
		if (pulse.getValue() && held.size() >= pulsePackets.getValue().intValue()) {
			flushBurst(pulsePackets.getValue().intValue());
		}
		if (autoDisable.getValue() && held.size() >= disablePackets.getValue().intValue()) {
			setEnabled(false);
		}
	}

	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (flushing || !holding.get()) {
			return;
		}
		Packet<?> packet = event.packet();
		if (isMotionPacket(packet)) {
			held.add(packet);
			event.setCancelled(true);
			return;
		}
		if (isControlPacket(packet)) {
			return;
		}
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!disableOnVelocity.getValue()) {
			return;
		}
		if (!(event.packet() instanceof EntityVelocityUpdateS2CPacket velocity)) {
			return;
		}
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player != null && velocity.getEntityId() == player.getId()) {
			setEnabled(false);
		}
	}

	private static boolean isMotionPacket(Packet<?> packet) {
		return packet instanceof PlayerMoveC2SPacket;
	}

	private static boolean isControlPacket(Packet<?> packet) {
		String name = packet.getClass().getSimpleName();
		return name.contains("Pong") || name.contains("KeepAlive") || name.contains("TeleportConfirm")
				|| name.contains("ChatMessage") || name.contains("AdvancementTab") || name.contains("ClientStatus");
	}

	private void flushBurst(int count) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null) {
			return;
		}
		flushing = true;
		try {
			for (int i = 0; i < count; i++) {
				Packet<?> packet = held.poll();
				if (packet == null) {
					break;
				}
				client.getNetworkHandler().sendPacket(packet);
			}
		} finally {
			flushing = false;
		}
	}

	private void flush() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null) {
			held.clear();
			return;
		}
		flushing = true;
		try {
			Packet<?> packet;
			while ((packet = held.poll()) != null) {
				client.getNetworkHandler().sendPacket(packet);
			}
		} finally {
			flushing = false;
		}
	}
}
