package dev.opengrim.modules.combat;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Deque;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentLinkedQueue;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackPressEvent;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket;
import net.minecraft.network.packet.s2c.play.EntityPositionSyncS2CPacket;
import net.minecraft.network.packet.s2c.play.EntityS2CPacket;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Backtrack (registry sixtwo.fp): "Delays incoming packets to gain advantage".
 *
 * <p>Port of sixtwo.fp (payload-named-cfr/sixtwo/fp.java:93-110 wiring,
 * fp$sQ.doY(gG) flush/reset; packet hook aLG(gL$tk), tick aLJ(gH$th), marker
 * aLF(gM), render aLH(go$sX), entity aLI(hw$tv), selector aLK, gates
 * aLQ/aLR, classifier aLO; spec analysis/specs/handlers/fp.md). Settings in
 * declaration order: Min-Max Distance 0.1/0.0-10.0/2.0-3.5 " blocks", Latency
 * 10.0/0.0-2500.0/100.0-500.0 " ms", Track Delay 10.0/0.0-2000.0/500.0-500.0
 * " ms", Chance 1.0/1.0-100.0/100.0 " %", Pause On Hurt Time (true), Hurt Time
 * 1.0/0.0-10.0/3.0 " ticks", Target Delay 10.0/0.0-5000.0/1000.0 " ms", Last
 * Attack Time 10.0/0.0-2000.0/150.0 " ms", Target Mode (Hit / Distance),
 * Delay Knockback (false), Knock Delay 25.0/0.0-9000.0/2500.0-2500.0 " ms".
 *
 * <p>Recovered: exempt-packet cluster (passed through untouched), the
 * flush/reset shape of {@code fp$sQ.doY} (full flush on disable; selective
 * drain + target-drop timer on the valid-target path; working-delay re-sync
 * {@code heFtE}/{@code fNonW} from Latency/Knock Delay whenever both queues
 * are empty), and the {@code aLS} target-validity gate (target alive + aLQ).
 * Trace 2026-10-17: aLS/aLP 74x, aLN 72x, aLL 72x (36 false), aMu 70x
 * (35 true), aLJ/aLG 4x, aaj/YO 2x.
 *
 * <p>Labeled stand-ins (all hold/flush math is native — spec "Unrecovered"
 * 1-6): the per-target hold queues (the original holds one record queue plus
 * a knockback queue), the target-gated position-packet selection, the
 * distance band reading of the dual-value cA (second value 3.5 kept as the
 * sampled anchor), the Hit-mode gating through the attack event, the Chance
 * comparison ({@code random * 100 >= chance}), and re-delivery by applying the
 * held packet to the network handler.
 */
public class Backtrack extends Module {
	private final DoubleSetting minMaxDistance = register(new DoubleSetting("min_max_distance", 0.1, 0.0, 10.0, 2.0, " blocks"));
	private final DoubleSetting latency = register(new DoubleSetting("latency", 10.0, 0.0, 2500.0, 100.0, " ms"));
	private final DoubleSetting trackDelay = register(new DoubleSetting("track_delay", 10.0, 0.0, 2000.0, 500.0, " ms"));
	private final DoubleSetting chance = register(new DoubleSetting("chance", 1.0, 1.0, 100.0, 100.0, " %"));
	private final BoolSetting pauseOnHurtTime = register(new BoolSetting("pause_on_hurt_time", true));
	private final DoubleSetting hurtTime = register(new DoubleSetting("hurt_time", 1.0, 0.0, 10.0, 3.0, " ticks"));
	private final DoubleSetting targetDelay = register(new DoubleSetting("target_delay", 10.0, 0.0, 5000.0, 1000.0, " ms"));
	private final DoubleSetting lastAttackTime = register(new DoubleSetting("last_attack_time", 10.0, 0.0, 2000.0, 150.0, " ms"));
	private final ModeSetting targetMode = register(new ModeSetting("target_mode",
			List.of("hit", "distance"), "hit"));
	private final BoolSetting delayKnockback = register(new BoolSetting("delay_knockback", false));
	private final DoubleSetting knockDelay = register(new DoubleSetting("knock_delay", 25.0, 0.0, 9000.0, 2500.0, " ms"));

	private final Map<UUID, ConcurrentLinkedQueue<Held>> held = new ConcurrentHashMap<>();
	private final Map<UUID, Long> trackedSince = new ConcurrentHashMap<>();
	private final Map<UUID, Long> lastAttack = new ConcurrentHashMap<>();
	private long latencyMs = 100L;
	private long knockMs = 2500L;

	private record Held(Packet<?> packet, long time) {
	}

	public Backtrack() {
		super("backtrack", "Backtrack", "Delays incoming packets to gain advantage", ModuleCategory.COMBAT);
	}

	@Override
	public void onDisable() {
		flushAll();
		trackedSince.clear();
		lastAttack.clear();
	}

	public boolean isHolding() {
		return !held.isEmpty();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		if (pauseOnHurtTime.getValue() && player.hurtTime >= Math.round(hurtTime.getValue())) {
			flushAll();
			return;
		}
		if (held.isEmpty()) {
			latencyMs = Math.round(latency.getValue());
			knockMs = Math.round(knockDelay.getValue());
		}
		drainExpired(client, System.currentTimeMillis());
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		if (pauseOnHurtTime.getValue() && player.hurtTime >= Math.round(hurtTime.getValue())) {
			return;
		}
		if (isExempt(event.packet())) {
			return;
		}
		Entity entity = packetEntity(client, event.packet());
		if (!(entity instanceof PlayerEntity target) || target == player || !target.isAlive()) {
			return;
		}
		if (Math.random() * 100.0 >= chance.getValue()) {
			return;
		}
		if (!inBand(player, target)) {
			return;
		}
		long now = System.currentTimeMillis();
		UUID id = target.getUuid();
		Long since = trackedSince.computeIfAbsent(id, key -> now);
		if (now - since < Math.round(trackDelay.getValue())) {
			return;
		}
		if ("hit".equals(targetMode.getValue())) {
			Long hit = lastAttack.get(id);
			if (hit == null || now - hit > Math.round(lastAttackTime.getValue())) {
				return;
			}
		}
		held.computeIfAbsent(id, key -> new ConcurrentLinkedQueue<>()).add(new Held(event.packet(), now));
		event.setCancelled(true);
	}

	@Subscribe
	public void onAttackPress(AttackPressEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || !(client.targetedEntity instanceof PlayerEntity target)) {
			return;
		}
		lastAttack.put(target.getUuid(), System.currentTimeMillis());
	}

	private boolean inBand(ClientPlayerEntity player, PlayerEntity target) {
		double distance = player.distanceTo(target);
		double min = Math.min(2.0, minMaxDistance.getValue());
		return distance >= min - 1.0e-6 && distance <= minMaxDistance.getValue() + 3.5;
	}

	private static boolean isExempt(Packet<?> packet) {
		// aLG exempt cluster (spec fp.md "Runtime model"): GameMessage,
		// ChatMessage, RemoveMessage, Team, ProfilelessChatMessage,
		// ChatSuggestions, PlayerPositionLook, Disconnect, DamageTilt,
		// HealthUpdate, CommonPing.
		String name = packet.getClass().getSimpleName();
		return name.contains("ChatMessage") || name.contains("GameMessage")
				|| name.contains("RemoveMessage") || name.contains("Team")
				|| name.contains("ProfilelessChatMessage") || name.contains("ChatSuggestions")
				|| name.contains("PlayerPositionLook") || name.contains("Disconnect")
				|| name.contains("DamageTilt") || name.contains("HealthUpdate")
				|| name.contains("CommonPing");
	}

	private void drainExpired(MinecraftClient client, long now) {
		for (var entry : held.entrySet()) {
			var queue = entry.getValue();
			Held oldest;
			while ((oldest = queue.peek()) != null && now - oldest.time() > latencyMs) {
				apply(client, oldest);
				queue.poll();
			}
			if (queue.isEmpty()) {
				held.remove(entry.getKey());
			}
		}
		long cutoff = now - Math.round(targetDelay.getValue());
		trackedSince.entrySet().removeIf(e -> e.getValue() < cutoff && !held.containsKey(e.getKey()));
	}

	private void flushAll() {
		MinecraftClient client = MinecraftClient.getInstance();
		List<Held> all = new ArrayList<>();
		for (ConcurrentLinkedQueue<Held> queue : held.values()) {
			Held packet;
			while ((packet = queue.poll()) != null) {
				all.add(packet);
			}
		}
		all.sort(Comparator.comparingLong(Held::time));
		for (Held packet : all) {
			apply(client, packet);
		}
		held.clear();
	}

	@SuppressWarnings("unchecked")
	private static void apply(MinecraftClient client, Held heldPacket) {
		if (client.getNetworkHandler() == null) {
			return;
		}
		try {
			((Packet<net.minecraft.network.listener.ClientPlayPacketListener>) heldPacket.packet())
					.apply(client.getNetworkHandler());
		} catch (RuntimeException ignored) {
		}
	}

	private static Entity packetEntity(MinecraftClient client, Packet<?> packet) {
		if (packet instanceof EntityPositionSyncS2CPacket sync) {
			return client.world.getEntityById(sync.id());
		}
		if (packet instanceof EntityPositionS2CPacket teleport) {
			return client.world.getEntityById(teleport.entityId());
		}
		if (packet instanceof EntityS2CPacket move && move.isPositionChanged()) {
			return move.getEntity(client.world);
		}
		return null;
	}
}
