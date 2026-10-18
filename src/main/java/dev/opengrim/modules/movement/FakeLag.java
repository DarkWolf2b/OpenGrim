package dev.opengrim.modules.movement;

import java.util.List;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket;
import net.minecraft.network.packet.c2s.play.HandSwingC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerInteractBlockC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;
import net.minecraft.network.packet.s2c.play.ExplosionS2CPacket;
import net.minecraft.network.packet.s2c.play.HealthUpdateS2CPacket;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Fake Lag (registry sixtwo.ff, module id 18, bind 82): "Creates lagging effect".
 *
 * <p>1:1 port of sixtwo.ff (analysis/decompiled/payload-decrypted/sixtwo/ff.java;
 * handler spec analysis/specs/handlers/ff.md; bytecode
 * {@code javap -c -p analysis/decompiled/jar-casesafe/sixtwo/ff.class} for
 * {@code aIl}, which CFR could not decompile). Category {@code gh.xwjCw}
 * (ff.java:99). Settings in declaration order:
 * <ul>
 *   <li>Mode {@code ct} "Mode" (ff.java:100) with children Normal (ff.java:108)
 *       and Lag Range (ff.java:119);</li>
 *   <li>Packet Interval {@code cA .UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0)
 *       .UH(" ms")} (ff.java:136) - step 5.0, min 0.0, max 2000.0, " ms";</li>
 *   <li>Lag Range Distance {@code cA .UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6)
 *       .UH(" blocks")} (ff.java:156) - step 0.1, min 1.0, max 6.0, " blocks",
 *       visible only while Mode = Lag Range (ff.java:237);</li>
 *   <li>Reset On Knockback {@code cJ .WE(false)} (ff.java:176);</li>
 *   <li>Reset Time {@code cC .Vy(5.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz(" ms")}
 *       (ff.java:188) - step 5.0, min 0.0, max 1000.0, default 100.0, " ms";</li>
 *   <li>Reset On Explosion {@code cJ .WE(true)} (ff.java:208);</li>
 *   <li>Reset On Health Update {@code cJ .WE(false)} (ff.java:232).</li>
 * </ul>
 *
 * <p>Handlers: {@code aaj()} enable (ff.java:365-374), {@code YO()} disable ->
 * {@code aIp()} (ff.java:377-380), {@code aIm(gL$tj)} C2S capture
 * (ff.java:679-872), {@code aIl(gL$tk)} S2C resets (ff.java:877-899, body from
 * bytecode), {@code aIn(gH$th)} tick (ff.java:947-1021), {@code aIj(gM)}
 * disconnect (ff.java:1024-1027), {@code aIk(hw$tw)} attack latch
 * (ff.java:1030-1064), {@code aIp()} flush (ff.java:530-574), {@code aIq()}
 * lag-range release test (ff.java:576-670), {@code aIr()} target scan
 * (ff.java:936-938), {@code aIs()} latch reset (ff.java:940-943).
 *
 * <p>Behavior: every outbound C2S packet on the play connection is queued and
 * cancelled; the queue is flushed wholesale when the hold ends. Normal mode ends
 * the hold when the {@code mT} stopwatch exceeds the current interval
 * ({@code uiKAR.cpC(lseaG)}, strictly greater, mT.class javap); Lag Range mode
 * ends it when {@code aIq()} reports release (no target in range, latch set, or
 * the frozen position was closer to the target than the live one). Interaction
 * packets (PlayerInteractEntity / HandSwing / PlayerInteractBlock /
 * PlayerInteractItem / ClickSlot) are never delayed - they force a flush. Incoming
 * Explosion / own EntityVelocityUpdate / HealthUpdate packets flush and redraw the
 * interval when their reset toggle is on (velocity: only when the packet's entity
 * id is the local player's).
 *
 * <p>Framework stand-ins (each labeled):
 * <ul>
 *   <li>[S] {@code cA} is a two-handle range (UI(lo, hi) = the two handles;
 *       {@code mU.cpR} draws a fresh uniform value from [lo, hi] on every
 *       redraw, and {@code cA.UM(d)} tests lo &le; d &le; hi). Our settings tree
 *       has no range widget, so both ranges are single-value sliders holding the
 *       original <em>left</em> handle (Packet Interval 100 ms, Lag Range
 *       Distance 1.0) and the per-cycle random draw is dropped - the same
 *       reduction used by the peer ports (WTap, SpearDoubleTap, AutoStunSlam,
 *       Ambience). Lag Range Distance is read as the upper bound of the band
 *       ({@code d <= value}) because the original lower handle (1.0) is the
 *       widget minimum, so no band narrower than the default can be expressed.</li>
 *   <li>[S] {@code mT} millisecond stopwatch is inlined (System.currentTimeMillis;
 *       cpC = elapsed &gt; arg, cpF = elapsed, cpB = reset - mT.class javap).</li>
 *   <li>[S] the {@code aIm} connection identity check
 *       ({@code event.dpm() == client.getNetworkHandler().getConnection()},
 *       ff.java:710) is implicit: our PacketSendEvent is posted from
 *       ClientConnection#send and carries no connection reference; the play
 *       connection is the only sender in practice.</li>
 *   <li>[S] {@code aIk(hw$tw)} is the attack-<em>post</em> event (bootstrap mixin
 *       InteractionEventBridgeMixin#offline$attackPost constructs
 *       {@code new hw$tw(target)} at the TAIL of PlayerEntity#attack); our bus
 *       only has the pre-attack AttackEntityEvent, used here as the stand-in.</li>
 *   <li>[S] {@code aIj(gM)} - {@code gM} is the ClientWorld.disconnect event
 *       (JumpCircle/TargetEsp convention); our bus has no disconnect event, so
 *       the body (clear the queue, then {@code baa(false)} = disable the module)
 *       runs from the world-null guard in {@link #onTick()}.</li>
 * </ul>
 *
 * <p>[U] Not ported: the embedded {@code kx AhpMu} indicator (ff.java:233) and its
 * render handler {@code aIo(go$sX)} (ff.java:440-501). The indicator is a
 * {@code kr}-based component whose own toggle label is a 22-char DES literal with
 * no {@code sixtwo.kx} entry in analysis/decrypted/full-dump.jsonl (key is native
 * {@code gb.aYR}), whose {@code kr} option semantics CFR could not decompile, and
 * whose draw body is native - the sibling port of fp (Backtrack) leaves its
 * {@code kx} out for the same reason.
 */
public class FakeLag extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("normal", "lag_range"), "normal"));
	private final DoubleSetting packetInterval = register(new DoubleSetting("packet_interval", 5.0, 0.0, 2000.0, 100.0, " ms"));
	private final DoubleSetting lagRangeDistance = register(new DoubleSetting("lag_range_distance", 0.1, 1.0, 6.0, 1.0, " blocks"));
	private final BoolSetting resetOnKnockback = register(new BoolSetting("reset_on_knockback", false));
	private final DoubleSetting resetTime = register(new DoubleSetting("reset_time", 5.0, 0.0, 1000.0, 100.0, " ms"));
	private final BoolSetting resetOnExplosion = register(new BoolSetting("reset_on_explosion", true));
	private final BoolSetting resetOnHealthUpdate = register(new BoolSetting("reset_on_health_update", false));

	/** {@code zkfXg} - held outbound packets (ff.java:234). */
	private final Queue<Packet<?>> held = new ConcurrentLinkedQueue<>();
	/** {@code uiKAR} - mT stopwatch (ff.java:235). */
	private long timerStart;
	/** {@code qBKIn} - held/fake position (ff.java:236, 368). */
	private Vec3d holdPos = Vec3d.ZERO;
	/** {@code lseaG} - current hold interval in ms (ff.java:370, 993, 1019). */
	private int intervalMs;
	/** {@code Stryf} - frozen bounding box snapshot (ff.java:372, 859). */
	private Box frozenBox;
	/** {@code nlYuR} - attack latch (ff.java:373, 1063). */
	private boolean inRangeLatch;
	/** {@code IydTB} - flushing latch (ff.java:555, 569). */
	private boolean flushing;

	public FakeLag() {
		super("fake_lag", "Fake Lag", "Creates lagging effect", ModuleCategory.MOVEMENT);
		setBind(82); // registry metadata.txt:ff key=18 bind=82
	}

	/** {@code aaj()} (ff.java:365-374): enable. */
	@Override
	protected void onEnable() {
		held.clear();
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		holdPos = player != null ? player.getEntityPos() : Vec3d.ZERO;
		intervalMs = (int) packetInterval.getValue().doubleValue();
		timerStart = System.currentTimeMillis();
		frozenBox = null;
		inRangeLatch = false;
	}

	/** {@code YO()} (ff.java:377-380): disable - flush everything still held. */
	@Override
	protected void onDisable() {
		flush();
	}

	/**
	 * {@code aIn(gH$th)} (ff.java:947-1021). Bails unless in game; in Lag Range
	 * mode an {@code aIq()} release flushes, resets the latch and redraws the
	 * interval; otherwise the stopwatch gate ({@code cpC(lseaG)}, strictly
	 * greater) does the same in both modes. The redraw only happens after a
	 * flush (the mangled CFR guard ff.java:1009-1019 is the obfuscator's
	 * never-taken branch).
	 */
	@Override
	public void onTick() {
		lagRangeDistance.setVisible("lag_range".equals(mode.getValue()));
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			// aIj(gM), ff.java:1024-1027 - gM is ClientWorld.disconnect: held
			// packets are DROPPED (no flush) and the module switches itself off.
			held.clear();
			setEnabled(false);
			return;
		}
		if (!inGame(client)) {
			return;
		}
		ClientPlayerEntity player = client.player;
		if ("lag_range".equals(mode.getValue())) {
			if (releaseForRange(client, player)) {
				flush();
				resetHold();
				intervalMs = (int) packetInterval.getValue().doubleValue();
				return;
			}
		}
		if (System.currentTimeMillis() - timerStart > intervalMs) {
			flush();
			resetHold();
			intervalMs = (int) packetInterval.getValue().doubleValue();
		}
	}

	/**
	 * {@code aIm(gL$tj)} (ff.java:679-872): capture outbound packets. Bail
	 * unless in game, unless {@code IydTB} (no re-capture during our own flush);
	 * interaction packets force a flush; Lag Range mode releases on
	 * {@code aIq()} and otherwise freezes the box/position on the first held
	 * packet; finally the packet is queued and the event cancelled.
	 */
	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!inGame(client)) {
			return;
		}
		Packet<?> packet = event.packet();
		if (flushing) {
			return;
		}
		if (packet instanceof PlayerInteractEntityC2SPacket || packet instanceof HandSwingC2SPacket
				|| packet instanceof PlayerInteractBlockC2SPacket || packet instanceof PlayerInteractItemC2SPacket
				|| packet instanceof ClickSlotC2SPacket) {
			flush();
			return;
		}
		if ("lag_range".equals(mode.getValue())) {
			ClientPlayerEntity player = client.player;
			if (releaseForRange(client, player)) {
				flush();
				resetHold();
				return;
			}
			if (frozenBox == null) {
				frozenBox = player.getBoundingBox();
				holdPos = player.getEntityPos();
			}
		}
		held.add(packet);
		event.setCancelled(true);
	}

	/**
	 * {@code aIl(gL$tk)} (ff.java:877-899, body recovered from the bytecode:
	 * tableswitch on Explosion / EntityVelocityUpdate / HealthUpdate). Bail
	 * unless in game or when the event is already cancelled; each reset packet
	 * flushes and redraws the interval only when its toggle is on (velocity:
	 * only for the local player's entity id, checked before the toggle, and it
	 * redraws with the fixed Reset Time instead of the random draw).
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!inGame(client) || event.cancelled()) {
			return;
		}
		Packet<?> packet = event.packet();
		if (packet instanceof ExplosionS2CPacket) {
			if (!resetOnExplosion.getValue()) {
				return;
			}
			flush();
			intervalMs = (int) packetInterval.getValue().doubleValue();
		} else if (packet instanceof EntityVelocityUpdateS2CPacket velocity) {
			if (client.player == null || velocity.getEntityId() != client.player.getId()) {
				return;
			}
			if (!resetOnKnockback.getValue()) {
				return;
			}
			flush();
			intervalMs = (int) resetTime.getValue().doubleValue();
		} else if (packet instanceof HealthUpdateS2CPacket) {
			if (!resetOnHealthUpdate.getValue()) {
				return;
			}
			flush();
			intervalMs = (int) packetInterval.getValue().doubleValue();
		}
	}

	/**
	 * {@code aIk(hw$tw)} (ff.java:1030-1064): in Lag Range mode an attack latches
	 * {@code nlYuR} so the next release test keeps holding until the following
	 * release. [S] stand-in for the attack-post event, see the class javadoc.
	 */
	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!inGame(client)) {
			return;
		}
		if (!"lag_range".equals(mode.getValue())) {
			return;
		}
		inRangeLatch = true;
	}

	/** {@code aIp()} (ff.java:530-574): flush the queue through the network handler. */
	private void flush() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!inGame(client)) {
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
		timerStart = System.currentTimeMillis();
		holdPos = client.player.getEntityPos();
	}

	/**
	 * {@code aIq()} (ff.java:576-670): Lag Range release test. No target in the
	 * band releases (and clears the attack latch); a set latch releases; with no
	 * frozen box yet the hold continues; otherwise the hold continues while the
	 * frozen position is closer to the target than the live position.
	 */
	private boolean releaseForRange(MinecraftClient client, ClientPlayerEntity player) {
		LivingEntity target = findLagTarget(client, player);
		if (target == null) {
			return true;
		}
		double distance = eyeToBoxDistance(player.getEyePos(), target.getBoundingBox());
		if (!(distance <= lagRangeDistance.getValue())) {
			inRangeLatch = false;
			return true;
		}
		if (inRangeLatch) {
			return true;
		}
		if (frozenBox == null) {
			return false;
		}
		double frozen = eyeToBoxDistance(frozenBox.getCenter(), target.getBoundingBox());
		double live = eyeToBoxDistance(player.getBoundingBox().getCenter(), target.getBoundingBox());
		return frozen < live;
	}

	/**
	 * {@code aIr()} (ff.java:936-938) = {@code oh.cCY().cDb(FUqia).cDg(of.ahXwo)
	 * .cDm()} (oh.java:330-350): the nearest living entity (by
	 * {@code Entity#distanceTo(player)}, of.java:69) that is not the local
	 * player, is not dead (oh.java:228-247; invisible entities are kept - the
	 * {@code iepqN} default, analysis/specs/handlers/eP.md:75) and whose
	 * eye-to-bounding-box distance lies in the Lag Range Distance band
	 * (oh.java:283-322). [S] the band's lower handle is dropped, see the class
	 * javadoc.
	 */
	private LivingEntity findLagTarget(MinecraftClient client, ClientPlayerEntity player) {
		if (client.world == null) {
			return null;
		}
		double range = lagRangeDistance.getValue();
		LivingEntity best = null;
		double bestDistance = Double.MAX_VALUE;
		for (var entity : client.world.getEntities()) {
			if (entity == player || !(entity instanceof LivingEntity living) || living.isDead()) {
				continue;
			}
			double distance = eyeToBoxDistance(player.getEyePos(), living.getBoundingBox());
			if (distance > range) {
				continue;
			}
			double sort = player.distanceTo(living);
			if (best == null || sort < bestDistance) {
				best = living;
				bestDistance = sort;
			}
		}
		return best;
	}

	/** {@code aIs()} (ff.java:940-943): drop the frozen box and the attack latch. */
	private void resetHold() {
		frozenBox = null;
		inRangeLatch = false;
	}

	/** {@code gg.bab()} (gg.java:393-458): player, world, interaction manager and network handler present. */
	private static boolean inGame(MinecraftClient client) {
		return client.player != null && client.world != null && client.interactionManager != null
				&& client.getNetworkHandler() != null;
	}

	/**
	 * {@code jg.bBJ(Vec3d, Box)} (used at ff.java:601, 654-655): Euclidean
	 * distance from the point to the closest point of the box.
	 */
	private static double eyeToBoxDistance(Vec3d point, Box box) {
		double dx = Math.max(box.minX - point.x, Math.max(0.0, point.x - box.maxX));
		double dy = Math.max(box.minY - point.y, Math.max(0.0, point.y - box.maxY));
		double dz = Math.max(box.minZ - point.z, Math.max(0.0, point.z - box.maxZ));
		return Math.sqrt(dx * dx + dy * dy + dz * dz);
	}

	/** {@code aIF()} (ff.java:526-528): held/fake position (cross-module readout). */
	public Vec3d getHoldPos() {
		return holdPos;
	}

	/** {@code aIH()} (ff.java:1066-1068): current hold interval in ms. */
	public int getIntervalMs() {
		return intervalMs;
	}

	/** {@code aII()} (ff.java:432-434): frozen box while holding, null otherwise. */
	public Box getFrozenBox() {
		return frozenBox;
	}

	/** {@code aIG()} (ff.java:932-934): true while the queue is being flushed. */
	public boolean isFlushing() {
		return flushing;
	}

	/** {@code aIJ()} (ff.java:1070-1072): attack latch (Lag Range mode). */
	public boolean isLatched() {
		return inRangeLatch;
	}

	/** {@code aID()} (ff.java:924-926): the held-packet queue. */
	public Queue<Packet<?>> getHeldPackets() {
		return held;
	}
}
