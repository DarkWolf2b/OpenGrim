package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.entity.projectile.FireworkRocketEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Vector4f;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.Theme;
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
 * <p>Framework mapping:
 * <ul>
 *   <li>{@code aha(gk)} is a HUD pass; {@code HudElementRegistry} supplies the same
 *       {@link DrawContext}. Each spot draws the recovered 25×25 card: radius 12.5,
 *       {@code 0.5+0.5·fade} scale about the card centre, optional {@code lC.ccW} backdrop
 *       (Blur with Solid fallback), and a 16×16 {@code Items.FIREWORK_ROCKET} icon
 *       ({@code lC.cdZ}). Projection is the recovered {@code jI.bIw}.
 *   <li>[G] {@code dn$sF.jYWIl} (fade duration) is DES; 300 ms is used and labeled.
 *       {@code ZOVgw} remains presumed 1000 (the only value consistent with the
 *       1-15 s setting). Expiry reproduces the original quirk: the deadline branch
 *       sets {@code uAOSS} and snaps the fade to 0 ({@code rk.dhd(0)}), while
 *       quantity-limit removals animate out (ease-in-back).
 *   <li>[U] Setting suffix {@code dn.AhEPk} is runtime-decrypted and absent
 *       from analysis/decrypted/full-dump.jsonl; left empty.
 * </ul>
 */
public class FireworkSpots extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "firework_spots_hud");
	/** [G] dn$sF.jYWIl fade duration (DES): 300 ms, the repo's standard rk duration. */
	private static final int FADE_MS = 300;

	private final DoubleSetting timeBeforeDisappear = register(new DoubleSetting("time_before_disappear", 1.0, 1.0, 15.0, 8.0, null));
	private final DoubleSetting quantityLimit = register(new DoubleSetting("quantity_limit", 1.0, 1.0, 100.0, 10.0, null));

	/** A recorded spot (port of dn$sF): fixed spawn position plus creation wall-clock. */
	public static final class FireworkSpot {
		private final Vec3d pos;
		private final long createdMs;
		private boolean fading;
		private float fade;
		private float fadeStart;
		private float fadeTarget;
		private long fadeStartMs;

		FireworkSpot(Vec3d pos, long createdMs) {
			this.pos = pos;
			this.createdMs = createdMs;
		}

		/** rk.dhd: animate toward 1 while alive, 0 once fading; XzDkv/AYqck easing. */
		private float updateFade() {
			float target = fading ? 0.0f : 1.0f;
			if (target != fadeTarget) {
				fadeStart = fade;
				fadeTarget = target;
				fadeStartMs = System.currentTimeMillis();
			}
			long elapsed = System.currentTimeMillis() - fadeStartMs;
			if (elapsed >= FADE_MS) {
				fade = fadeTarget;
			} else {
				float t = (float) elapsed / FADE_MS;
				fade = fadeStart + (fadeTarget - fadeStart) * ease(t, !fading);
			}
			return fade;
		}

		private static float ease(float t, boolean appearing) {
			float c = 1.70158f;
			if (appearing) {
				float f = t - 1.0f;
				return f * f * ((c + 1.0f) * f + c) + 1.0f;
			}
			return t * t * ((c + 1.0f) * t - c);
		}

		/** rk.dhd(0): the expiry branch snaps the fade to zero. */
		private void snapZero() {
			fade = 0.0f;
			fadeStart = 0.0f;
			fadeTarget = 0.0f;
			fadeStartMs = System.currentTimeMillis();
		}

		/** dn$sF.doK: fade == 0 and fading. */
		private boolean dead() {
			return fading && fade <= 0.0f;
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

	@Override
	protected void onEnable() {
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
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
	 * {@code aha(gk)} + {@code dn$sF.doJ}: HUD card pass. The 25×25 rounded card
	 * (radius half-size), 16×16 firework item icon, scale {@code 0.5+0.5·fade} and
	 * the per-spot fade/expiry are the original's.
	 */
	private void renderHud(DrawContext ctx, RenderTickCounter tickCounter) {
		if (!isEnabled() || spots.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}
		GuiDraw draw = new GuiDraw(ctx, 0, 0, tickCounter.getTickProgress(true), client.textRenderer);
		Camera camera = client.gameRenderer.getCamera();
		Vec3d cameraPos = camera.getCameraPos();
		Matrix4f rotation = new Matrix4f().rotation(camera.getRotation());
		float fov = client.options.getFov().getValue().floatValue();
		Matrix4f projection = client.gameRenderer.getBasicProjectionMatrix(fov);
		int width = ctx.getScaledWindowWidth();
		int height = ctx.getScaledWindowHeight();
		long lifetimeMs = (long) (int) timeBeforeDisappear.getValue().doubleValue() * 1000L;
		long now = System.currentTimeMillis();
		ItemStack icon = new ItemStack(Items.FIREWORK_ROCKET);

		Iterator<FireworkSpot> iterator = spots.iterator();
		while (iterator.hasNext()) {
			FireworkSpot spot = iterator.next();
			// doJ: over the lifetime -> uAOSS = true + dhd(0.0f).
			if (!spot.fading && now - spot.createdMs > lifetimeMs) {
				spot.fading = true;
				spot.snapZero();
			}
			float fade = spot.updateFade();
			if (spot.dead()) {
				iterator.remove();
				continue;
			}
			Vec2f screen = project(spot.pos, cameraPos, rotation, projection, width, height);
			if (screen == null) {
				continue;
			}
			float size = 25.0f;
			float x = screen.x - size / 2.0f;
			float y = screen.y;
			float centreX = x + size / 2.0f;
			float centreY = y + size / 2.0f;
			float scale = 0.5f + 0.5f * fade;

			ctx.getMatrices().pushMatrix();
			try {
				ctx.getMatrices().translate(centreX, centreY);
				ctx.getMatrices().scale(scale, scale);
				ctx.getMatrices().translate(-centreX, -centreY);
				drawCard(draw, x, y, size, fade);
				float iconX = x + (size - 16.0f) / 2.0f;
				float iconY = y + (size - 16.0f) / 2.0f;
				ctx.drawItem(icon, Math.round(iconX), Math.round(iconY));
			} finally {
				ctx.getMatrices().popMatrix();
			}
		}
	}

	/** lC#ccW: Blur backdrop with the Solid-branch fallback at the spot fade. */
	private static void drawCard(GuiDraw draw, float x, float y, float size, float fade) {
		if (draw.blurredBackdrop(x, y, size, size, size / 2.0f, ColorF.WHITE, 0.0f, fade)) {
			return;
		}
		Theme theme = Theme.get();
		draw.fillRounded(x, y, size, size, size / 2.0f,
				theme.background().withAlphaScale(theme.backgroundStyle().opacity * fade));
	}

	/** jI#bIw: camera-relative position -> NDC -> screen pixels; null behind the camera. */
	private static Vec2f project(Vec3d pos, Vec3d cameraPos, Matrix4f rotation, Matrix4f projection,
			int width, int height) {
		Vector4f v = new Vector4f((float) (pos.x - cameraPos.x), (float) (pos.y - cameraPos.y),
				(float) (pos.z - cameraPos.z), 1.0f);
		v.mul(rotation).mul(projection);
		if (v.w <= 0.0f) {
			return null;
		}
		v.div(v.w);
		return new Vec2f((v.x + 1.0f) / 2.0f * width, (1.0f - v.y) / 2.0f * height);
	}

	@Override
	protected void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
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

}
