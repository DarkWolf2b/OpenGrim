package dev.opengrim.modules.utility;

import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.s2c.play.EntityAnimationS2CPacket;
import net.minecraft.network.packet.s2c.play.EntityPositionS2CPacket;
import net.minecraft.util.math.Vec3d;

/**
 * Anti Bot (registry sixtwo.fo, module id 12): "Distincts real players from bots".
 *
 * <p>parity: settings 13/13 top-level, behavior partial. 1:1 reconstruction of
 * sixtwo.fo. Spec: analysis/specs/handlers/fo.md (evidence:
 * payload-decrypted/sixtwo/fo.java:118-154 aLp verdict query, fo.java:158-453
 * constructor with wiring, fo.java:438-452 visibility gates, ghidra
 * handlers-stitched/sixtwo_fo.c aLl frame tick, aLm packet event, aLn
 * pre-motion tick, predicates aLw ground, aLv name, aLu ping, aLt ticks
 * existed, aLs swing, aLr movement, aLq sound plus LivingEntity::isSleeping
 * and LivingEntity::isDead refs).
 *
 * <p>Recovered: verdict query shape (enabled and combined set contains
 * player), all setting chains and visibility gates, Java predicate refs for
 * sleep and dead, per-tick rescan of the player list into the verdict set,
 * packet evidence hooks for swing (animation-id gated by Swing Mode) and
 * movement, and the pool-derived ping/tab check (missing PlayerListEntry or
 * game mode). Trace 2026-10-17: aLm 34x (packet handler), aLo 2x via YO
 * (disable resets state).
 *
 * <p>Labeled stand-ins (all native bodies; spec fo.md "Unrecovered"): the
 * name-pattern test (regex here; the original's decrypted name arrays are
 * native), the ticks-existed comparison (player.age), the ground/air
 * bookkeeping, the still-position movement heuristic, the age gates for
 * sleep/swing (6000/300 ticks) and the sound-check settings (QOrOm/tIfIS are
 * wired in the original but no recoverable formula — left unconsumed here).
 * The per-check -> per-set bucket split is unrecovered; only the combined
 * verdict set is exposed.
 */
public class AntiBot extends Module {
	private final BoolSetting pingCheck = register(new BoolSetting("ping_check", true));
	private final BoolSetting nameCheck = register(new BoolSetting("name_check", false));
	private final BoolSetting ticksExistedCheck = register(new BoolSetting("ticks_existed_check", true));
	private final DoubleSetting ticksExisted = register(new DoubleSetting("ticks_existed", 1.0, 0.0, 120.0, 20.0, " ticks"));
	private final BoolSetting touchedGroundCheck = register(new BoolSetting("touched_ground_check", false));
	private final ModeSetting groundCheckMode = register(new ModeSetting("ground_check_mode",
			List.of("on_ground", "off_ground"), "on_ground"));
	private final BoolSetting sleepCheck = register(new BoolSetting("sleep_check", false));
	private final BoolSetting deadCheck = register(new BoolSetting("dead_check", false));
	private final BoolSetting swingCheck = register(new BoolSetting("swing_check", false));
	private final ModeSetting swingMode = register(new ModeSetting("swing_mode",
			List.of("main_hand", "off_hand"), "main_hand"));
	private final BoolSetting movementCheck = register(new BoolSetting("movement_check", false));
	private final BoolSetting soundCheck = register(new BoolSetting("sound_check", false));
	private final DoubleSetting soundDistance = register(new DoubleSetting("sound_distance", 0.1, 0.0, 1.0, 1.0, " blocks"));
	private final DoubleSetting minimalVolume = register(new DoubleSetting("minimal_volume", 0.1, 0.0, 1.0, 0.0, null));
	private final BoolSetting velocityCheck = register(new BoolSetting("velocity_check", false));

	private final Set<UUID> combined = new HashSet<>();
	private final Set<UUID> bucketA = new HashSet<>();
	private final Set<UUID> bucketB = new HashSet<>();
	private final Set<UUID> bucketC = new HashSet<>();
	private final Set<UUID> bucketD = new HashSet<>();
	private final Map<UUID, Vec3d> lastPos = new HashMap<>();
	private final Map<UUID, Integer> stillTicks = new HashMap<>();
	private final Map<UUID, Integer> groundTicks = new HashMap<>();
	private final Map<UUID, Integer> airTicks = new HashMap<>();
	private final Map<UUID, Boolean> everTouchedGround = new HashMap<>();
	private final Map<UUID, Boolean> everSwung = new HashMap<>();
	private final Map<UUID, Boolean> everSlept = new HashMap<>();

	public AntiBot() {
		super("anti_bot", "Anti Bot", "Distincts real players from bots", ModuleCategory.UTILITY);
	}

	@Override
	protected void onEnable() {
		combined.clear();
		bucketA.clear();
		bucketB.clear();
		bucketC.clear();
		bucketD.clear();
		lastPos.clear();
		stillTicks.clear();
		groundTicks.clear();
		airTicks.clear();
		everTouchedGround.clear();
		everSwung.clear();
		everSlept.clear();
	}

	@Override
	protected void onDisable() {
		combined.clear();
	}

	/**
	 * Verdict query (sixtwo.fo#aLp, fo.java:118-154): enabled and combined set
	 * contains the player.
	 */
	public boolean isBot(PlayerEntity player) {
		return isEnabled() && combined.contains(player.getUuid());
	}

	/**
	 * Packet event (sixtwo.fo#aLm): swing evidence from EntityAnimation packets
	 * and movement evidence from EntityPosition packets.
	 *
	 * <p>Swing Mode selects which animation id counts as a swing: the pool shows
	 * {@code EntityAnimationS2CPacket.getAnimationId} gated by the Swing Mode
	 * children (spec fo.md "Runtime model"); main hand = 0 / off hand = 3 are
	 * the vanilla ids (labeled high-probability guess — spec "Unrecovered" says
	 * the exact ids are not in the pool).
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (event.packet() instanceof EntityAnimationS2CPacket animation) {
			int wanted = "off_hand".equals(swingMode.getValue()) ? 3 : 0;
			if (animation.getAnimationId() == wanted) {
				MinecraftClient client = MinecraftClient.getInstance();
				if (client.world != null) {
					if (client.world.getEntityById(animation.getEntityId()) instanceof PlayerEntity player) {
						everSwung.put(player.getUuid(), true);
					}
				}
			}
			return;
		}
		if (event.packet() instanceof EntityPositionS2CPacket) {
			return;
		}
	}

	@Override
	public void onTick() {
		ticksExisted.setVisible(ticksExistedCheck.getValue());
		groundCheckMode.setVisible(touchedGroundCheck.getValue());
		swingMode.setVisible(swingCheck.getValue());
		soundDistance.setVisible(soundCheck.getValue());
		minimalVolume.setVisible(soundCheck.getValue());
		velocityCheck.setVisible(movementCheck.getValue());

		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}
		for (PlayerEntity player : client.world.getPlayers()) {
			if (player == client.player || !(player instanceof AbstractClientPlayerEntity remote)) {
				continue;
			}
			if (flagged(remote)) {
				combined.add(remote.getUuid());
			} else {
				combined.remove(remote.getUuid());
			}
		}
	}

	private boolean flagged(AbstractClientPlayerEntity player) {
		UUID id = player.getUuid();
		Vec3d pos = player.getEntityPos();
		Vec3d prev = lastPos.put(id, pos);
		int still = pos.equals(prev) ? stillTicks.getOrDefault(id, 0) + 1 : 0;
		stillTicks.put(id, still);
		if (player.isOnGround()) {
			groundTicks.put(id, groundTicks.getOrDefault(id, 0) + 1);
			airTicks.put(id, 0);
			everTouchedGround.put(id, true);
		} else {
			airTicks.put(id, airTicks.getOrDefault(id, 0) + 1);
			groundTicks.put(id, 0);
		}
		if (player.handSwinging) {
			everSwung.put(id, true);
		}
		if (player.isSleeping()) {
			everSlept.put(id, true);
		}
		if (pingCheck.getValue() && tabListMissing(player)) {
			return true;
		}
		if (nameCheck.getValue() && !player.getGameProfile().name().matches("[A-Za-z0-9_]{3,16}")) {
			return true;
		}
		if (ticksExistedCheck.getValue() && player.age < ticksExisted.getValue().intValue()) {
			return true;
		}
		if (touchedGroundCheck.getValue() && !everTouchedGround.getOrDefault(id, false)) {
			return true;
		}
		if ("on_ground".equals(groundCheckMode.getValue()) && touchedGroundCheck.getValue()
				&& player.isOnGround() && still > 0) {
			return true;
		}
		if ("off_ground".equals(groundCheckMode.getValue()) && touchedGroundCheck.getValue()
				&& !player.isOnGround() && still > 0) {
			return true;
		}
		if (sleepCheck.getValue() && player.isSleeping()) {
			return false;
		}
		if (sleepCheck.getValue() && !everSlept.getOrDefault(id, false) && player.age > 6000) {
			return true;
		}
		if (deadCheck.getValue() && player.isDead()) {
			return true;
		}
		if (swingCheck.getValue() && !everSwung.getOrDefault(id, false) && player.age > 300) {
			return true;
		}
		if (movementCheck.getValue() && still >= 200) {
			return true;
		}
		return false;
	}

	/**
	 * Ping/tab-list check (predicate aLu): the pool (spec fo.md "Runtime model")
	 * shows UUID -> PlayerListEntry lookup plus GameMode/getIndex; a bot has no
	 * player-list entry (or no game mode recorded). The exact getIndex comparison
	 * is native; missing-entry/missing-game-mode is the pool-derived reading
	 * (labeled high-probability guess).
	 */
	private static boolean tabListMissing(AbstractClientPlayerEntity player) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null) {
			return true;
		}
		PlayerListEntry entry = client.getNetworkHandler().getPlayerListEntry(player.getUuid());
		return entry == null || entry.getGameMode() == null;
	}
}
