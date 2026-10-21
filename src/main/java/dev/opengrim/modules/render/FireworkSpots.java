package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.projectile.FireworkRocketEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;

/**
 * Firework Spots (registry sixtwo.dn): "Renders used fireworks".
 *
 * <p>1:1 reconstruction of sixtwo.dn. Spec: analysis/specs/handlers/dn.md
 * (evidence: dn.java:54-97 registration id 98 and constructor, dn.java:203-207
 * YO lifecycle clear, dn.java:209-235 aha draw pass with "Time Before
 * Disappear" int deadline and doK removal, dn.java:280-330 ahb entity-add
 * handler recording {@code getEntityPos()} with cap trim of the oldest entries
 * via {@code dhd(0.0f)} + {@code uAOSS = true}, dn$sF.java:41-201 per-spot
 * record with wall-clock creation and fade animator).
 *
 * <p>Behavior notes (translated 1:1):
 * <ul>
 *   <li>Spots are recorded for every {@code FireworkRocketEntity} added to the
 *       client world (original event {@code hu}, fired from
 *       {@code ClientWorld#addEntity} HEAD — bootstrap mixin
 *       {@code mixin/accessors/ClientWorldEventBridgeMixin.java}); the
 *       framework has no entity-add event, so the same set is recovered by
 *       polling and pruning the seen-id set to the entities present in the
 *       world (so a chunk reload re-adds a spot, matching the add event).</li>
 *   <li>Positions are captured once at first sight and never follow the rocket
 *       ({@code getEntityPos()} at add time).</li>
 *   <li>Quantity Limit is applied on every add: the oldest {@code size - limit}
 *       entries get {@code dhd(0.0f)} (fade value slammed to 0) plus
 *       {@code uAOSS = true}, so they disappear at the next draw pass.</li>
 *   <li>The draw pass is also the expiry pass ({@code doJ}): once
 *       {@code now - createdMs > (int)TimeBeforeDisappear * 1000}, the spot is
 *       marked done and removed in the same pass ({@code doK} = fade == 0 &&
 *       done).</li>
 * </ul>
 *
 * <p>Framework divergences (labeled):
 * <ul>
 *   <li>[U] The original draws a screen-space firework icon with a glow disc
 *       ({@code lC.ccW}/{@code cdZ}, dn$sF.java:191-200) plus per-spot fade
 *       easing; this framework has no 2D overlay/projection surface, so spots
 *       render as world-space marker boxes at the captured position. The
 *       fade-in animation is omitted (its {@code rk} duration {@code jYWIl} is
 *       runtime-decrypted and unrecovered, as is the {@code ZOVgw} ms
 *       multiplier — {@code 1000} presumed, the only value consistent with the
 *       1-15 s setting).</li>
 *   <li>[U] Setting suffix {@code dn.AhEPk} is runtime-decrypted and absent
 *       from analysis/decrypted/full-dump.jsonl; left empty.</li>
 * </ul>
 */
public class FireworkSpots extends Module {
	private final DoubleSetting timeBeforeDisappear = register(new DoubleSetting("time_before_disappear", 1.0, 1.0, 15.0, 8.0, null));
	private final DoubleSetting quantityLimit = register(new DoubleSetting("quantity_limit", 1.0, 1.0, 100.0, 10.0, null));

	/** A recorded spot (port of dn$sF): fixed spawn position plus creation wall-clock. */
	public static final class FireworkSpot {
		private final Vec3d pos;
		private final long createdMs;
		private boolean fading;

		FireworkSpot(Vec3d pos, long createdMs) {
			this.pos = pos;
			this.createdMs = createdMs;
		}

		public Vec3d pos() {
			return pos;
		}

		public long createdMs() {
			return createdMs;
		}

		public boolean isFading() {
			return fading;
		}
	}

	private final List<FireworkSpot> spots = new ArrayList<>();
	private final Set<Integer> seenIds = new HashSet<>();

	public FireworkSpots() {
		super("firework_spots", "Firework Spots", "Renders used fireworks", ModuleCategory.VISUALS);
	}

	/**
	 * Entity-add pass (port of dn#ahb, dn.java:280-330). The framework has no
	 * {@code hu} entity-add event, so new fireworks are detected by polling the
	 * client world — the original applies no distance gate, so neither does
	 * this pass.
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null) {
			spots.clear();
			seenIds.clear();
			return;
		}
		if (!isEnabled()) {
			return;
		}
		Set<Integer> presentIds = new HashSet<>();
		for (net.minecraft.entity.Entity entity : client.world.getEntities()) {
			if (!(entity instanceof FireworkRocketEntity rocket)) {
				continue;
			}
			int id = rocket.getId();
			presentIds.add(id);
			if (!seenIds.add(id)) {
				continue;
			}
			spots.add(new FireworkSpot(rocket.getEntityPos(), System.currentTimeMillis()));
			int over = spots.size() - (int) quantityLimit.getValue().doubleValue();
			for (int i = 0; i < over; i++) {
				// dn.java:322-324: oldest entries get dhd(0.0f) + uAOSS = true.
				spots.get(i).fading = true;
			}
		}
		// Add-event semantics: an id that leaves the world can be re-added later.
		seenIds.retainAll(presentIds);
	}

	/**
	 * Draw pass (port of dn#aha / dn$sF#doJ, dn.java:209-235 + dn$sF.java:130-201):
	 * expiry is evaluated here, the marker is drawn, then removed when
	 * {@code doK()} holds (fade == 0 and done).
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || spots.isEmpty()) {
			return;
		}
		long lifetimeMs = (long) (int) timeBeforeDisappear.getValue().doubleValue() * 1000L;
		long now = System.currentTimeMillis();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			Iterator<FireworkSpot> iterator = spots.iterator();
			while (iterator.hasNext()) {
				FireworkSpot spot = iterator.next();
				if (!spot.fading && now - spot.createdMs > lifetimeMs) {
					// dn$sF.java:174-180: uAOSS = true; dhd(0.0f).
					spot.fading = true;
				}
				if (spot.fading) {
					// doK(): fade value is 0 -> remove (nothing visible to draw).
					iterator.remove();
					continue;
				}
				Box box = new Box(spot.pos.subtract(0.4, 0.4, 0.4), spot.pos.add(0.4, 0.4, 0.4));
				drawFilledBox(entry, consumers, box, 0x5080C0FF);
				drawBoxOutline(entry, consumers, box, 0xFF80C0FF);
			}
		} finally {
			matrices.pop();
		}
	}

	@Override
	protected void onDisable() {
		// dn.java:203-207 YO(): super.YO() + GtFRG.clear().
		spots.clear();
		seenIds.clear();
	}

	/** Recorded spots, oldest first. */
	public List<FireworkSpot> getSpots() {
		return List.copyOf(spots);
	}

	public double getTimeBeforeDisappear() {
		return timeBeforeDisappear.getValue();
	}

	public double getQuantityLimit() {
		return quantityLimit.getValue();
	}

	private static void drawFilledBox(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y0, z1, x0, y0, z1, r, g, b, a);
		quad(entry, vc, x0, y1, z0, x1, y1, z0, x1, y1, z1, x0, y1, z1, r, g, b, a);
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y1, z0, x0, y1, z0, r, g, b, a);
		quad(entry, vc, x0, y0, z1, x1, y0, z1, x1, y1, z1, x0, y1, z1, r, g, b, a);
		quad(entry, vc, x0, y0, z0, x0, y0, z1, x0, y1, z1, x0, y1, z0, r, g, b, a);
		quad(entry, vc, x1, y0, z0, x1, y0, z1, x1, y1, z1, x1, y1, z0, r, g, b, a);
	}

	private static void quad(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float cx, float cy, float cz, float dx, float dy, float dz,
			float r, float g, float b, float a) {
		vc.vertex(entry, ax, ay, az).color(r, g, b, a);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a);
		vc.vertex(entry, cx, cy, cz).color(r, g, b, a);
		vc.vertex(entry, dx, dy, dz).color(r, g, b, a);
	}

	private static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.lines());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a, 1.0f);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a, float width) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
