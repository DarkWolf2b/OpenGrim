package dev.opengrim.rotation;

import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.function.Supplier;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import net.minecraft.client.MinecraftClient;
import net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.util.math.Vec3d;

/**
 * Port of sixtwo.qL (payload-named-cfr/sixtwo/qL.java) — the original client's
 * rotation manager.
 *
 * <p>Translated members:
 * <ul>
 *   <li>Pending queue {@code elfkz} (qL.java:32) with max-heap ordering by
 *       priority (sixtwo.mt, mt.java:13-18) and tick-expiry plus the strict
 *       owner-enabled gate ({@code xOoyO.bag()}) in {@code cmd} (mt.java:24-140).
 *   <li>Fallback slot {@code JYBGF} (qL.java:33), returned when the queue is
 *       empty (qL#dbE, qL.java:110-139).
 *   <li>Pending-rotation slot {@code qkMAI} (qL.java:34): {@link #rawPending}
 *       ports {@code dbX} (qL.java:106-108); {@link #effectiveRotation} ports
 *       {@code dbC} (qL.java:145-172), falling back to the client's visual
 *       rotation ({@code player.getRotationClient()}) when no silent rotation
 *       is pending.
 *   <li>Submit entry points {@code dbH} (qL.java:71, raw yaw/pitch),
 *       {@code dbI} (qL.java:143, world point) and {@code dbJ} (qL.java:73,
 *       prebuilt request) — the {@code ou} policy / {@code mw} priority / {@code gg}
 *       owner triple is carried as ({@link Rotation}, {@link RotationPriority},
 *       {@link Module}).
 *   <li>Tick-expiry advance ({@code mt#cmb}, mt.java:156-158), driven per client
 *       tick in place of the native {@code dbK} apply step called from
 *       {@code dbN} (qL.java:62-67).
 *   <li>Global silent-active flag {@code sHqVn} with {@code dca} setter /
 *       {@code dcb} + {@code dcc} getters (qL.java:37,54-56,85).
 *   <li>Send-path rewrite of outgoing look packets, the Java-visible role of
 *       {@code dbO(gL.tj)} (qL.java:90-91): while a silent rotation is pending,
 *       {@code PlayerMoveC2SPacket} look fields are replaced so the server sees
 *       the silent rotation and the view stays untouched.
 *   <li>Interact-packet rewrite: {@code PlayerInteractItemC2SPacket} also carries
 *       a yaw/pitch pair (the server copies it onto the player before the use).
 *       The original {@code dbO(gL.tj)} receives every outbound packet, so the
 *       silent rotation is applied there too; without it a pearl/crossbow use
 *       travels along the player's visual view even though the movement packets
 *       are silently rotated. See {@link #applyForAction} for the client-side
 *       raycast case (buckets/blocks) where the vanilla use logic reads the real
 *       rotation before the packet is built.
 * </ul>
 *
 * <p>Framework wiring note (allowed deviation): the original is driven by the
 * native-registered {@code hF} bus plus the {@code gH.th}/{@code gv} tick
 * phases; here the manager registers on our {@link EventBus} and is ticked
 * from {@code OpenGrimClient} after {@code ModuleManager.tick()}.
 *
 * <p>Not ported (native method bodies, see analysis/PARITY-DIVERGENCES.md):
 * {@code dbR/dbS/dbQ/dbL} smoothing, {@code dbM(hb)} movement-event intercept,
 * {@code dbP(gL.tk)} receive-path handling, {@code dbY/dbZ/dbF/dbW/dbV/dbT/dbU/dbD}
 * readouts/lifecycle, the {@code gufEg}/{@code adYOd} slots (qL.java:35-36),
 * and the {@code ou/os/ow} gating policy behind each submit.
 */
public class RotationManager {
	private static final RotationManager INSTANCE = new RotationManager();

	/** Default silent-request lifetime in ticks (native expiry driver unrecovered). */
	private static final int DEFAULT_LIFETIME_TICKS = 2;

	private final PriorityQueue<RotationRequest> queue = new PriorityQueue<>(
			Comparator.comparingInt((RotationRequest r) -> r.priority().rank()).reversed());

	private RotationRequest fallback;
	private Rotation pending;
	private int tickClock;
	private boolean silentActive;
	private boolean registered;

	public static RotationManager get() {
		return INSTANCE;
	}

	private RotationManager() {
	}

	/** Framework wiring: register once on the event bus (cf. qL ctor hF.bdI, qL.java:41-43). */
	public void init() {
		if (!registered) {
			registered = true;
			EventBus.get().register(this);
		}
	}

	/**
	 * Port of sixtwo.qL#dbH (qL.java:71): queue an explicit yaw/pitch rotation
	 * charged to the calling module.
	 */
	public void submitRotation(Rotation rotation, RotationPriority priority, Module owner) {
		submitRotation(rotation, priority, owner, DEFAULT_LIFETIME_TICKS);
	}

	public void submitRotation(Rotation rotation, RotationPriority priority, Module owner,
			int lifetimeTicks) {
		if (rotation == null || priority == null || owner == null) {
			return;
		}
		pending = rotation;
		silentActive = true;
		int expiry = tickClock + Math.max(1, lifetimeTicks);
		// Mirrors sixtwo.mt#cmc (casesafe/payload-named-cfr/sixtwo/mt.java:146-150):
		// remove every entry owned by the same module, then add the new request -
		// the newest submission replaces the previous rotation. (Extending the
		// old entry instead froze the pending rotation at the first submission.)
		queue.removeIf(existing -> existing.owner() == owner);
		queue.add(new RotationRequest(rotation, owner, priority, expiry));
	}

	/**
	 * Port of sixtwo.qL#dbI (qL.java:143): aim at a world point. Rotation is
	 * resolved eye-relative (cf. sixtwo.ov#cGy, ov.java:269-272).
	 */
	public void submitPosition(Vec3d target, RotationPriority priority, Module owner) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || target == null) {
			return;
		}
		submitRotation(Rotation.lookingAt(client.player.getEyePos(), target).clamped(), priority, owner);
	}

	/**
	 * Applies a rotation to the player's real yaw/pitch for the duration of
	 * {@code action} and restores the previous rotation afterwards.
	 *
	 * <p>Vanilla client-side use logic (notably {@code BucketItem.raycast} and
	 * block placement) reads the player's real rotation <em>before</em> the
	 * outgoing packet is built. The send-path rewrite below can therefore not
	 * help those actions: the client must see the aim while it computes the use.
	 * Centralising the temporary apply/restore here keeps module code free of
	 * direct {@code setYaw}/{@code setPitch} calls (the qL apply step,
	 * {@code dbK}, is the original owner of this responsibility).
	 *
	 * <p>The caller still submits the same rotation with
	 * {@link #submitRotation} so the visual tick and the movement-packet rewrite
	 * stay silent.
	 */
	public <T> T applyForAction(Rotation rotation, Supplier<T> action) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (rotation == null || client.player == null || action == null) {
			return action == null ? null : action.get();
		}
		float yaw = client.player.getYaw();
		float pitch = client.player.getPitch();
		client.player.setYaw(rotation.getYaw());
		client.player.setPitch(rotation.getPitch());
		try {
			return action.get();
		} finally {
			client.player.setYaw(yaw);
			client.player.setPitch(pitch);
		}
	}

	/**
	 * Port of sixtwo.qL#dbX (qL.java:106-108): raw pending rotation, null when
	 * none is queued.
	 */
	public Rotation rawPending() {
		return pending;
	}

	/**
	 * Port of sixtwo.qL#dbC (qL.java:145-172): silent override when active,
	 * otherwise the client's visual rotation.
	 */
	public Rotation effectiveRotation() {
		if (silentActive && pending != null) {
			return pending;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			// Vanilla-API difference: the original dereferences the player
			// unconditionally here; we return a neutral rotation instead.
			return Rotation.fromAngles(0.0f, 0.0f);
		}
		return Rotation.fromClientRotation(client.player.getRotationClient());
	}

	/**
	 * Port of sixtwo.qL#dbE (qL.java:110-139): head of the pending queue, or
	 * the fallback when empty. Expired entries and entries whose owner is no
	 * longer enabled are dropped first (cf. mt#cmd, mt.java:24-140).
	 */
	public RotationRequest currentRequest() {
		purge();
		RotationRequest head = queue.peek();
		return head != null ? head : fallback;
	}

	/** Sets the fallback returned when the queue is empty (cf. JYBGF, qL.java:33). */
	public void setFallback(RotationRequest fallback) {
		this.fallback = fallback;
	}

	/** Port of sixtwo.qL#dca (qL.java:85). */
	public void setSilentActive(boolean active) {
		this.silentActive = active;
		if (!active) {
			pending = null;
		}
	}

	/** Port of sixtwo.qL#dcb / dcc (qL.java:54-56). */
	public boolean isSilentActive() {
		return silentActive;
	}

	/**
	 * Per-tick expiry advance (cf. mt#cmb, mt.java:156-158), called after
	 * module ticks in place of the native {@code dbK} step in {@code dbN}
	 * (qL.java:62-67).
	 */
	public void tick() {
		tickClock++;
		purge();
		if (pending != null && queue.isEmpty()) {
			pending = null;
			silentActive = false;
		} else if (pending != null) {
			RotationRequest head = queue.peek();
			if (head != null) {
				pending = head.rotation();
			}
		}
	}

	private void purge() {
		while (!queue.isEmpty()) {
			RotationRequest head = queue.peek();
			if (head.expiryTick() > tickClock && head.isValid()) {
				break;
			}
			queue.poll();
		}
	}

	/**
	 * Send-path look rewrite — the Java-visible role of {@code dbO(gL.tj)}
	 * (qL.java:90-91). Packets that carry look data are rebuilt with the
	 * pending silent yaw/pitch; position-only packets pass through untouched.
	 */
	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (!silentActive || pending == null) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			return;
		}
		float yaw = pending.getYaw();
		float pitch = pending.getPitch();
		// The use packet carries its own yaw/pitch; the server copies them onto
		// the player before running the item use, so the silent rotation must be
		// written here as well (qL.dbO receives every outbound packet).
		if (event.packet() instanceof PlayerInteractItemC2SPacket interact) {
			event.setPacket(new PlayerInteractItemC2SPacket(
					interact.getHand(), interact.getSequence(), yaw, pitch));
			return;
		}
		if (!(event.packet() instanceof PlayerMoveC2SPacket move) || !move.changesLook()) {
			return;
		}
		if (move instanceof PlayerMoveC2SPacket.Full) {
			Vec3d pos = client.player.getEntityPos();
			event.setPacket(new PlayerMoveC2SPacket.Full(
					new Vec3d(move.getX(pos.x), move.getY(pos.y), move.getZ(pos.z)),
					yaw, pitch, move.isOnGround(), move.horizontalCollision()));
		} else if (move instanceof PlayerMoveC2SPacket.LookAndOnGround) {
			event.setPacket(new PlayerMoveC2SPacket.LookAndOnGround(
					yaw, pitch, move.isOnGround(), move.horizontalCollision()));
		}
	}
}
