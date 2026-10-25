package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.RangeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.world.World;

/**
 * Criticals (registry sixtwo.fu): "Makes it easier to crit".
 *
 * <p>Port of sixtwo.fu (payload-named-cfr/sixtwo/fu.java constructor; events
 * aQm(hw$tv) attack, aQo(gL$tj) packet, aQn(gH$th) tick, aQl(gM) marker,
 * executor aQp(DZZ); spec analysis/specs/handlers/fu.md). Settings in
 * declaration order: Mode (Vanilla / Custom / Packet / Web Lag), Lag Delay
 * 5.0/0.0-2000.0/100.0-150.0 " ms" (visible with Web Lag), Packet 1..5 groups
 * (visible with Custom), each with Send Packet N (true,true,true,false,false),
 * Ground N (true,false,false,false,false), Full N (true,true,false,false,false),
 * Offset N 0.01/-1.0-1.0/0.0,0.0625,0.04535,0.0,0.0 " blocks".
 *
 * <p>Web Lag (documented natural reading): the original holds outbound packets
 * in the {@code ConcurrentLinkedQueue} via its gL$tj listener and releases them
 * after "Lag Delay"; the exact target set is not recoverable (spec
 * "Unrecovered / uncertain" §6). This rebuild holds only movement packets —
 * holding `ClickSlotC2SPacket` across the 100–150 ms window can desync the
 * screen handler, and the spec does not establish whether `class_2813` is the
 * filter or an emitted packet. The queue is dropped on world/connection change
 * and flushed on disable. `Lag Delay` is the recovered `cA` two-handle range
 * (0–2000, step 5, default 100–150 ms; `cA.UN()` uniform draw per hold).
 */
public class Criticals extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("vanilla", "custom", "packet", "web_lag"), "vanilla"));
	private final RangeSetting lagDelay = register(new RangeSetting(
			"lag_delay", 5.0, 0.0, 2000.0, 100.0, 150.0, " ms"));
	private final GroupSetting packet1 = register(new GroupSetting("packet_1"));
	private final BoolSetting sendPacket1 = register(new BoolSetting("send_packet_1", true));
	private final BoolSetting ground1 = register(new BoolSetting("ground_1", true));
	private final BoolSetting full1 = register(new BoolSetting("full_1", true));
	private final DoubleSetting offset1 = register(new DoubleSetting("offset_1", 0.01, -1.0, 1.0, 0.0, " blocks"));
	private final GroupSetting packet2 = register(new GroupSetting("packet_2"));
	private final BoolSetting sendPacket2 = register(new BoolSetting("send_packet_2", true));
	private final BoolSetting ground2 = register(new BoolSetting("ground_2", false));
	private final BoolSetting full2 = register(new BoolSetting("full_2", true));
	private final DoubleSetting offset2 = register(new DoubleSetting("offset_2", 0.01, -1.0, 1.0, 0.0625, " blocks"));
	private final GroupSetting packet3 = register(new GroupSetting("packet_3"));
	private final BoolSetting sendPacket3 = register(new BoolSetting("send_packet_3", true));
	private final BoolSetting ground3 = register(new BoolSetting("ground_3", false));
	private final BoolSetting full3 = register(new BoolSetting("full_3", false));
	private final DoubleSetting offset3 = register(new DoubleSetting("offset_3", 0.01, -1.0, 1.0, 0.04535, " blocks"));
	private final GroupSetting packet4 = register(new GroupSetting("packet_4"));
	private final BoolSetting sendPacket4 = register(new BoolSetting("send_packet_4", false));
	private final BoolSetting ground4 = register(new BoolSetting("ground_4", false));
	private final BoolSetting full4 = register(new BoolSetting("full_4", false));
	private final DoubleSetting offset4 = register(new DoubleSetting("offset_4", 0.01, -1.0, 1.0, 0.0, " blocks"));
	private final GroupSetting packet5 = register(new GroupSetting("packet_5"));
	private final BoolSetting sendPacket5 = register(new BoolSetting("send_packet_5", false));
	private final BoolSetting ground5 = register(new BoolSetting("ground_5", false));
	private final BoolSetting full5 = register(new BoolSetting("full_5", false));
	private final DoubleSetting offset5 = register(new DoubleSetting("offset_5", 0.01, -1.0, 1.0, 0.0, " blocks"));

	private final java.util.Queue<Packet<?>> held = new java.util.concurrent.ConcurrentLinkedQueue<>();
	private long webLagStart = -1L;
	private long webLagDuration;
	private boolean flushing;
	private boolean sendingOffsets;
	private World lastWorld;

	public Criticals() {
		super("criticals", "Criticals", "Makes it easier to crit", ModuleCategory.COMBAT);
		packet1.add(sendPacket1);
		packet1.add(ground1);
		packet1.add(full1);
		packet1.add(offset1);
		packet2.add(sendPacket2);
		packet2.add(ground2);
		packet2.add(full2);
		packet2.add(offset2);
		packet3.add(sendPacket3);
		packet3.add(ground3);
		packet3.add(full3);
		packet3.add(offset3);
		packet4.add(sendPacket4);
		packet4.add(ground4);
		packet4.add(full4);
		packet4.add(offset4);
		packet5.add(sendPacket5);
		packet5.add(ground5);
		packet5.add(full5);
		packet5.add(offset5);
	}

	@Override
	public void onTick() {
		lagDelay.setVisible("web_lag".equals(mode.getValue()));
		boolean custom = "custom".equals(mode.getValue());
		packet1.setVisible(custom);
		packet2.setVisible(custom);
		packet3.setVisible(custom);
		packet4.setVisible(custom);
		packet5.setVisible(custom);
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null || client.world == null) {
			// Never replay a queue into a new connection/world.
			held.clear();
			webLagStart = -1L;
			lastWorld = null;
			return;
		}
		if (client.world != lastWorld) {
			held.clear();
			webLagStart = -1L;
			lastWorld = client.world;
		}
		ClientPlayerEntity player = client.player;
		if (player == null) {
			held.clear();
			webLagStart = -1L;
			return;
		}
		if (webLagStart >= 0 && !"web_lag".equals(mode.getValue())) {
			// Mode switched mid-hold: release the held packets.
			flush(client);
		}
		if ("web_lag".equals(mode.getValue())) {
			if (webLagStart >= 0 && System.currentTimeMillis() - webLagStart >= webLagDuration) {
				flush(client);
			}
			return;
		}
		if (!"vanilla".equals(mode.getValue()) && !"custom".equals(mode.getValue())) {
			return;
		}
		if (!client.options.attackKey.isPressed() || client.targetedEntity == null) {
			return;
		}
		if (player.getAttackCooldownProgress(0.0f) < 1.0f) {
			return;
		}
		if (player.isOnGround() && !player.isTouchingWater() && !player.hasVehicle() && !player.isClimbing()) {
			player.setVelocity(player.getVelocity().x, 0.15, player.getVelocity().z);
		}
	}

	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		if (!"packet".equals(mode.getValue()) && !"custom".equals(mode.getValue())
				&& !"web_lag".equals(mode.getValue())) {
			return;
		}
		if (!(event.player() instanceof ClientPlayerEntity player)) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null) {
			return;
		}
		double x = player.getX();
		double y = player.getY();
		double z = player.getZ();
		if ("web_lag".equals(mode.getValue())) {
			if (webLagStart < 0) {
				webLagStart = System.currentTimeMillis();
				// cA.UN(): uniform draw over the two Lag Delay handles.
				webLagDuration = Math.max(0L, Math.round(lagDelay.randomValue()));
			}
			sendingOffsets = true;
			try {
				client.getNetworkHandler().sendPacket(
						new PlayerMoveC2SPacket.PositionAndOnGround(x, y + 0.0625, z, false, false));
				client.getNetworkHandler().sendPacket(
						new PlayerMoveC2SPacket.PositionAndOnGround(x, y, z, false, false));
			} finally {
				sendingOffsets = false;
			}
			return;
		}
		if ("packet".equals(mode.getValue())) {
			client.getNetworkHandler().sendPacket(
					new PlayerMoveC2SPacket.PositionAndOnGround(x, y + 0.0625, z, false, false));
			client.getNetworkHandler().sendPacket(
					new PlayerMoveC2SPacket.PositionAndOnGround(x, y, z, false, false));
			return;
		}
		sendProfile(client, x, y, z, sendPacket1.getValue(), ground1.getValue(), full1.getValue(), offset1.getValue());
		sendProfile(client, x, y, z, sendPacket2.getValue(), ground2.getValue(), full2.getValue(), offset2.getValue());
		sendProfile(client, x, y, z, sendPacket3.getValue(), ground3.getValue(), full3.getValue(), offset3.getValue());
		sendProfile(client, x, y, z, sendPacket4.getValue(), ground4.getValue(), full4.getValue(), offset4.getValue());
		sendProfile(client, x, y, z, sendPacket5.getValue(), ground5.getValue(), full5.getValue(), offset5.getValue());
	}

	private static void sendProfile(MinecraftClient client, double x, double y, double z,
			boolean send, boolean ground, boolean full, double offset) {
		if (!send || client.getNetworkHandler() == null) {
			return;
		}
		boolean onGround = full ? ground : false;
		client.getNetworkHandler().sendPacket(
				new PlayerMoveC2SPacket.PositionAndOnGround(x, y + offset, z, onGround, false));
	}

	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (flushing || sendingOffsets || webLagStart < 0 || !"web_lag".equals(mode.getValue())) {
			return;
		}
		Packet<?> packet = event.packet();
		// Only movement packets are held. fu.md:70-72 proves a ClickSlot class
		// token in fu's slice but not whether it is the filter or an emitted
		// packet; holding inventory clicks across a 100-150 ms window can
		// desync the screen handler, so the safer natural reading is recorded
		// as a divergence in PARITY.md.
		if (!(packet instanceof PlayerMoveC2SPacket)) {
			return;
		}
		held.add(packet);
		event.setCancelled(true);
	}

	@Override
	protected void onDisable() {
		flush(MinecraftClient.getInstance());
	}

	private void flush(MinecraftClient client) {
		webLagStart = -1L;
		webLagDuration = 0L;
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
