package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.Identifier;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.utility.AntiBot;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.util.FriendsManager;

/**
 * Arrows (registry sixtwo.do): "Draws arrows to entities".
 *
 * <p>Port of sixtwo.do (analysis/decompiled/payload-decrypted/sixtwo/do.java
 * constructor 83-122, ahj HUD draw 293-383, ahi screen offset 385-419, ahh tick
 * rescan 425-570, ahk bearing 601-607, YO 609-613; inner record
 * payload-named-cfr/sixtwo/do$sG.java 26-136; spec
 * analysis/specs/handlers/do.md).
 *
 * <p>Settings (do.java:95-119): "Entities" cF empty (no VT seed), "Size" step
 * 0.1 min 1.0 max 10.0 default 3.0, "Radius" step 0.5 min 20.0 max 100.0
 * default 50.0, "Color" theme default (white), "Friend Color" jk.jEkxo
 * (unrecovered; 0xFF55FF55 kept from the sibling ports).
 *
 * <p>Visual (do$sG.doM + ahj): a screen-space square marker of side
 * {@code Size * 5.0f} px at {@code (centerX - w/2, centerY - Radius - rise)}
 * on the vanilla HUD matrix stack, rotated about the screen center by
 * {@code ahk(entity, delta) - player.getYaw()} (lC.cfb -> Matrix3x2fStack
 * rotateAbout, lC.java:298-300), alpha scaled by the entry fade
 * ({@code mG.cob(fade)}), rising {@code 30 - 30 * fade} px while fading in.
 * Tick rescan (ahh) skips the local player, keeps "Entities" members and drops
 * AntiBot positives for players ({@code rD.dml().aLp} = fo.java:118-154); the
 * draw pass re-tests AntiBot (skip) and colors qQ-registry friends
 * ({@code rD.dmc().ddy}) with Friend Color.
 *
 * <p>Fade animator (rk.dhd/dhj, rk.java:54-134): per-entry value ramps toward
 * target with ease-out-back easing (rj.XzDkv = dgl(1.70158), rj.java:527-532)
 * over the rk duration; removal when removed and value == 0 (doN). do$sG's
 * duration literal dEIfC is DES-decrypted and not in the dump — [G] labeled
 * guess: 400 ms, the module-level animator's literal (do.java:121).
 *
 * <p>Visual asset: the original starts a textured batch with `ob.cBv(eLTLf)` and
 * draws a full-sprite square per entry (`do$sG.doM`, kG.bTw). The recovered
 * `raster-assets.bin` key `arrow` (256×256) is extracted to
 * `assets/opengrim/textures/arrow.png` and drawn with `DrawContext.drawTexture`
 * tinted by the entry colour/fade. `eLTLf` is DES, so the asset identity is
 * inferred from the name/appearance (labeled [G]).
 *
 * <p>Gaps: the ahi GUI-offset literals (do.ahq("c", 15311/3999)) are
 * unrecovered — [U], offset left at 0.
 */
public class Arrows extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "arrows_hud");

	/** [G] do$sG fade duration dEIfC (unrecovered); same 400 ms as do.java:121. */
	private static final int FADE_MS = 400;
	/** rj.XzDkv = dgl(1.70158f), rj.java:527-532 — ease-out-back. */
	private static final float EASE_OUT_BACK_C1 = 1.70158f;

	private final DoubleSetting size = register(new DoubleSetting("size", 0.1, 1.0, 10.0, 3.0, null));
	private final DoubleSetting radius = register(new DoubleSetting("radius", 0.5, 20.0, 100.0, 50.0, null));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, false));
	private final ColorSetting friendColor = register(new ColorSetting("friend_color", 0xFF55FF55, false));

	private final Set<EntityType<?>> trackedTypes = new HashSet<>();
	private final List<TrackedArrow> tracked = new ArrayList<>();
	/** Arrow sprite (raster-assets key {@code arrow}); registered on the client tick. */
	private Identifier arrowTexture;

	public Arrows() {
		super("arrows", "Arrows", "Draws arrows to entities", ModuleCategory.VISUALS);
	}

	@Override
	protected void onEnable() {
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
	}

	@Override
	protected void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
		tracked.clear();
	}

	/**
	 * Tick rescan (sixtwo.do ahh, do.java:425-570): keep "Entities" members
	 * except the local player and AntiBot positives, add unseen entities, mark
	 * vanished entries for fade-out (removed at draw time by doN).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (arrowTexture == null) {
			arrowTexture = CircleTextures.builtin("arrow");
		}
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null) {
			tracked.clear();
			return;
		}
		AntiBot antiBot = antiBot();
		Set<Entity> kept = new HashSet<>();
		for (Entity entity : client.world.getEntities()) {
			if (entity == player) {
				continue;
			}
			if (!matches(entity)) {
				continue;
			}
			if (entity instanceof PlayerEntity p && antiBot != null && antiBot.isBot(p)) {
				continue;
			}
			kept.add(entity);
		}
		for (Entity entity : kept) {
			boolean known = false;
			for (TrackedArrow arrow : tracked) {
				if (arrow.entity == entity) {
					known = true;
					break;
				}
			}
			if (!known) {
				tracked.add(new TrackedArrow(entity));
			}
		}
		for (TrackedArrow arrow : tracked) {
			if (!kept.contains(arrow.entity)) {
				arrow.removed = true;
			}
		}
	}

	/**
	 * HUD draw (sixtwo.do ahj, do.java:293-383). The original consumes the
	 * game HUD event (gk.baT()) and draws through the shared batcher; here the
	 * Fabric HUD element registry delivers the vanilla {@link DrawContext},
	 * whose matrix stack is the same Matrix3x2fStack the original rotates.
	 */
	private void renderHud(DrawContext ctx, RenderTickCounter tickCounter) {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		float centerX = ctx.getScaledWindowWidth() / 2.0f;
		float centerY = ctx.getScaledWindowHeight() / 2.0f;
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		float markerSize = size.getValue().floatValue() * 5.0f;
		float radial = radius.getValue().floatValue();
		// ahi GUI offset (do.java:403) — literals unrecovered, kept at 0.
		float guiOffset = 0.0f;
		float markerY = centerY - radial - guiOffset;
		AntiBot antiBot = antiBot();

		Iterator<TrackedArrow> it = tracked.iterator();
		while (it.hasNext()) {
			TrackedArrow arrow = it.next();
			Entity entity = arrow.entity;
			int argb = color.getValue();
			if (entity instanceof PlayerEntity p) {
				// ahj do.java:344-346 — AntiBot positives are not drawn.
				if (antiBot != null && antiBot.isBot(p)) {
					continue;
				}
				// ahj do.java:357-361 — qQ registry membership switches to
				// "Friend Color" (rD.dmc().ddy).
				if (FriendsManager.isFriend(p.getGameProfile().name())) {
					argb = friendColor.getValue();
				}
			}
			// do$sG.doM: zzzOY.dhc(!removed) then dhj().
			float fade = arrow.updateFade(arrow.removed ? 0.0f : 1.0f);
			float bearing = bearing(entity, player, tickDelta) - player.getYaw();
			ctx.getMatrices().pushMatrix();
			ctx.getMatrices().rotateAbout((float) Math.toRadians(bearing), centerX, centerY);
			float rise = 30.0f - 30.0f * fade;
			float x = centerX - markerSize / 2.0f;
			float y = markerY - rise;
			if (arrowTexture != null) {
				// do$sG.doM: kG.bTw(full-sprite square) in the arrow-texture batch.
				ctx.drawTexture(RenderPipelines.GUI_TEXTURED, arrowTexture, (int) x, (int) y, 0.0f, 0.0f,
						(int) markerSize, (int) markerSize, 256, 256, scaleAlpha(argb, fade));
			}
			ctx.getMatrices().popMatrix();
			// do$sG.doN: removed and fade == 0.
			if (arrow.removed && fade == 0.0f) {
				it.remove();
			}
		}
	}

	/**
	 * Bearing ahk (do.java:601-607): {@code -(atan2(dx, dz) *
	 * 57.29577951308232)} degrees from the player to the entity, both lerped at
	 * tick delta. The caller subtracts player yaw before rotating the HUD stack.
	 */
	public static float bearing(Entity entity, ClientPlayerEntity player, float tickDelta) {
		double dx = entity.getLerpedPos(tickDelta).x - player.getLerpedPos(tickDelta).x;
		double dz = entity.getLerpedPos(tickDelta).z - player.getLerpedPos(tickDelta).z;
		return (float) (-(Math.atan2(dx, dz) * 57.29577951308232));
	}

	/** Marker side in px: Size * 5.0f (do$sG.doM, do$sG.java:95). */
	public float getMarkerSizePx() {
		return size.getValue().floatValue() * 5.0f;
	}

	public double getRadius() {
		return radius.getValue();
	}

	public double getSize() {
		return size.getValue();
	}

	public int getColor() {
		return color.getValue();
	}

	public int getFriendColor() {
		return friendColor.getValue();
	}

	/** cF.VX(entity): type selected; the empty default set matches nothing. */
	public boolean matches(Entity entity) {
		return !trackedTypes.isEmpty() && trackedTypes.contains(entity.getType());
	}

	/** Entities tracked on the last tick. */
	public List<Entity> getTrackedEntities() {
		List<Entity> entities = new ArrayList<>(tracked.size());
		for (TrackedArrow arrow : tracked) {
			entities.add(arrow.entity);
		}
		return Collections.unmodifiableList(entities);
	}

	public Set<EntityType<?>> getTrackedTypes() {
		return Collections.unmodifiableSet(trackedTypes);
	}

	public void addTrackedType(EntityType<?> type) {
		trackedTypes.add(type);
	}

	public void removeTrackedType(EntityType<?> type) {
		trackedTypes.remove(type);
	}

	/** mG.cob(fade): alpha scaled by the fade value. */
	private static int scaleAlpha(int argb, float fade) {
		int alpha = Math.clamp((int) (((argb >>> 24) & 0xFF) * fade), 0, 255);
		return (alpha << 24) | (argb & 0x00FFFFFF);
	}

	private static AntiBot antiBot() {
		Module module = ModuleManager.get().byId("anti_bot");
		return module instanceof AntiBot bot ? bot : null;
	}

	/** rk animator state (rk.java:54-134) for one tracked entity. */
	private static final class TrackedArrow {
		final Entity entity;
		boolean removed;
		float value;
		float start;
		float target;
		long startMs;

		TrackedArrow(Entity entity) {
			this.entity = entity;
		}

		/**
		 * rk.dhd(target) (rk.java:54-134): restart from the current value when
		 * the target changes, then advance by elapsed/duration through the
		 * ease-out-back easing (rj$wd.dga, rj.java:527-532) and return the new
		 * value.
		 */
		float updateFade(float newTarget) {
			long now = System.currentTimeMillis();
			if (newTarget != target) {
				start = value;
				target = newTarget;
				startMs = now;
			}
			if (FADE_MS <= 0) {
				value = target;
				return value;
			}
			long elapsed = now - startMs;
			if (elapsed >= FADE_MS) {
				value = target;
				return value;
			}
			float t = (float) elapsed / FADE_MS;
			value = start + (target - start) * easeOutBack(t);
			return value;
		}

		private static float easeOutBack(float t) {
			float c = EASE_OUT_BACK_C1;
			float f = t - 1.0f;
			return f * f * ((c + 1.0f) * f + c) + 1.0f;
		}
	}
}
