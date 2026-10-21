package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;

import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.registry.tag.FluidTags;
import net.minecraft.util.Identifier;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;
import org.joml.Matrix4f;
import org.joml.Vector4f;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;

/**
 * Pearl Prediction (registry sixtwo.dg): "Renders thrown pearl trajectory".
 *
 * <p>Port of sixtwo.dg (analysis/decompiled/payload-decrypted/sixtwo/dg.java lines 64-515;
 * inner class dg$sx.java lines 38-326; spec analysis/specs/handlers/dg.md and
 * analysis/specs/modules/dg.md).
 *
 * <p>Settings:
 * <ul>
 *   <li>"Show Time Left" (BoolSetting, default false) — dg.java:82 {@code cJ.WE(false)}</li>
 * </ul>
 *
 * <p>Behavior (translated 1:1): tracking runs inside the world-render handler
 * (original {@code aei(go.sX)}, dg.java:191-377) — expired markers are dropped
 * ({@code removeIf(dop)}), tracked pearls that left the world get
 * {@code iAudN.dhd(0.0f)} + {@code sDPfY = true} (dg.java:264-270), untracked
 * live pearls are simulated and, when the termination kind is accepted, added
 * as {@code dg$sx(finalPosition, id, max(steps - 1, 0))} (dg.java:341-375).
 * A done marker disappears at the next pass (dop = fade == 0 && done). The
 * landing marker draws with the pearl icon and an optional time-left readout
 * (dg$sx.java:235-313).
 *
 * <p>Framework mapping:
 * <ul>
 *   <li>Simulation is the recovered {@code mh}/{@code me.cjZ} model: pearl
 *       parameters from {@code md.HIkeq} (gravity 0.03, air drag 0.99, water drag
 *       0.8), move → block raycast → min-Y {@code -128} → water/air drag →
 *       gravity, with both termination kinds {@code mf.juSGK} (block) and
 *       {@code mf.RlLKW} (min-Y) accepted exactly like {@code dg.java:341-375}.
 *       The max-steps argument ({@code cky}) remains DES; 600 is used.</li>
 *   <li>{@code dg$sx} is a HUD card: 25×25 circle (radius 12.5) or, with Show
 *       Time Left, 25×35 (radius 8) with a pearl icon and the formatted time
 *       text; medium MSDF 7.0, scale {@code 0.5+0.5·fade}, theme text color.
 *       {@code NkcQX} is unrecovered ("%.1fs" used; the {@code * 50 / 1000}
 *       seconds conversion is the natural reading of dg$sx.java:293-295).</li>
 *   <li>[G] The {@code rk} fade duration ({@code dou("z", ...)}) is DES; 300 ms
 *       is used. The "pearl left the world" path snaps the fade to 0.</li>
 * </ul>
 */
public class PearlPrediction extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "pearl_prediction_hud");
	private final BoolSetting showTimeLeft = register(new BoolSetting("show_time_left", false));

	/** [G] Max simulated steps; the original's cky() argument is unrecovered. */
	private static final int MAX_SIMULATION_STEPS = 600;
	/** dg$sx.java:343 ckz(-128.0) — minimum Y, byte-verified. */
	private static final double MIN_Y = -128.0;
	/** md.HIkeq (pearl): gravity 0.03, airDrag 0.99, waterDrag 0.8 (mj record). */
	private static final double PEARL_GRAVITY = 0.03;
	private static final double AIR_DRAG = 0.99;
	private static final double WATER_DRAG = 0.8;
	/** [G] dg$sx rk fade duration (DES): 300 ms. */
	private static final int FADE_MS = 300;

	private final List<PearlMarker> markers = new ArrayList<>();

	public PearlPrediction() {
		super("pearl_prediction", "Pearl Prediction", "Renders thrown pearl trajectory", ModuleCategory.VISUALS);
	}

	@Override
	protected void onEnable() {
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
	}

	private enum Termination {
		NONE, BLOCK, MIN_Y
	}

	private record SimResult(Vec3d landingPos, int steps, Termination termination) {
	}

	/**
	 * Port of {@code mh}/{@code me.cjZ} (md.HIkeq pearl parameters): move, block
	 * raycast, min-Y check, water drag 0.8 / air drag 0.99, gravity 0.03 unless
	 * noGravity. Both original termination kinds are accepted by dg
	 * ({@code mf.juSGK} block / {@code mf.RlLKW} min-Y).
	 */
	private SimResult simulate(MinecraftClient client, EnderPearlEntity pearl) {
		Vec3d pos = pearl.getEntityPos();
		Vec3d vel = pearl.getVelocity();
		boolean noGravity = pearl.hasNoGravity();

		for (int step = 1; step <= MAX_SIMULATION_STEPS; step++) {
			Vec3d prev = pos;
			Vec3d next = pos.add(vel);
			BlockHitResult hit = client.world.raycast(new RaycastContext(
					prev, next, RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, pearl));
			if (hit.getType() == HitResult.Type.BLOCK) {
				// mh.cku() (KfLbf) is true for the pearl preset: clamp to the hit.
				return new SimResult(hit.getPos(), step, Termination.BLOCK);
			}
			pos = next;
			if (pos.y <= MIN_Y) {
				return new SimResult(pos, step, Termination.MIN_Y);
			}
			boolean inWater = client.world.getBlockState(BlockPos.ofFloored(pos))
					.getFluidState().isIn(FluidTags.WATER);
			vel = vel.multiply(inWater ? WATER_DRAG : AIR_DRAG);
			if (!noGravity) {
				vel = vel.subtract(0.0, PEARL_GRAVITY, 0.0);
			}
		}
		return null;
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			markers.clear();
			return;
		}
		// dg#aei: tracking/simulation runs in the world-render handler.
		track(client, client.player);
	}

	/**
	 * {@code dg$sx}: projected HUD card at the landing position. With "Show Time
	 * Left" the card is 25×35 (radius 8) with the remaining-time text below the
	 * pearl icon; without it a 25×25 circle (radius 12.5). Scale
	 * {@code 0.5+0.5·fade}, medium MSDF 7.0, theme text color.
	 */
	private void renderHud(DrawContext ctx, RenderTickCounter tickCounter) {
		if (!isEnabled() || markers.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}
		GuiDraw draw = new GuiDraw(ctx, 0, 0, tickCounter.getTickProgress(true), client.textRenderer);
		MsdfFont medium = MsdfFont.of(MsdfFont.MEDIUM);
		Camera camera = client.gameRenderer.getCamera();
		Vec3d cameraPos = camera.getCameraPos();
		Matrix4f rotation = new Matrix4f().rotation(camera.getRotation());
		float fov = client.options.getFov().getValue().floatValue();
		Matrix4f projection = client.gameRenderer.getBasicProjectionMatrix(fov);
		int width = ctx.getScaledWindowWidth();
		int height = ctx.getScaledWindowHeight();
		boolean displayTimeLeft = showTimeLeft.getValue();
		int playerAge = client.player.age;
		int color = Theme.get().text().argb();
		ItemStack icon = new ItemStack(Items.ENDER_PEARL);

		for (PearlMarker marker : markers) {
			float fade = marker.fade;
			if (fade <= 0.0f) {
				continue;
			}
			Vec2f screen = project(marker.landingPos, cameraPos, rotation, projection, width, height);
			if (screen == null) {
				continue;
			}
			float cardW = 25.0f;
			float cardH = displayTimeLeft ? 35.0f : 25.0f;
			float x = screen.x - cardW / 2.0f;
			float y = screen.y;
			float centreX = x + cardW / 2.0f;
			float centreY = y + cardH / 2.0f;
			float scale = 0.5f + 0.5f * fade;
			float iconX = x + (cardW - 16.0f) / 2.0f;
			float iconY = y + 4.5f;

			ctx.getMatrices().pushMatrix();
			try {
				ctx.getMatrices().translate(centreX, centreY);
				ctx.getMatrices().scale(scale, scale);
				ctx.getMatrices().translate(-centreX, -centreY);
				drawCard(draw, x, y, cardW, cardH, displayTimeLeft ? 8.0f : cardW / 2.0f, fade);
				ctx.drawItem(icon, Math.round(iconX), Math.round(iconY));
				if (displayTimeLeft) {
					int remaining = marker.getRemainingTicks(playerAge);
					double seconds = (remaining * 50.0) / 1000.0;
					String text = String.format(Locale.ROOT, "%.1fs", seconds);
					float textW = textWidth(medium, text, 7.0f, client);
					drawText(draw, medium, client, text, x + (cardW - textW) / 2.0f, iconY + 18.0f,
							7.0f, color);
				}
			} finally {
				ctx.getMatrices().popMatrix();
			}
		}
	}

	/** lC#ccW: Blur backdrop with the Solid-branch fallback at the marker fade. */
	private static void drawCard(GuiDraw draw, float x, float y, float width, float height, float radius,
			float fade) {
		if (draw.blurredBackdrop(x, y, width, height, radius, ColorF.WHITE, 0.0f, fade)) {
			return;
		}
		Theme theme = Theme.get();
		draw.fillRounded(x, y, width, height, radius,
				theme.background().withAlphaScale(theme.backgroundStyle().opacity * fade));
	}

	private static float textWidth(MsdfFont font, String text, float size, MinecraftClient client) {
		if (font == null) {
			return client.textRenderer.getWidth(text) * (size / 9.0f);
		}
		float total = 0.0f;
		for (int i = 0; i < text.length(); i++) {
			total += font.advance(text.charAt(i), size) + 0.25f;
		}
		return total;
	}

	private static void drawText(GuiDraw draw, MsdfFont font, MinecraftClient client, String text, float x,
			float topY, float size, int argb) {
		ColorF color = ColorF.fromArgb(argb);
		if (font == null) {
			draw.text(client.textRenderer, text, x, topY, size, color);
			return;
		}
		float glyphTop = topY + 0.7f * size - font.ascent(size);
		float pen = x;
		for (int i = 0; i < text.length(); i++) {
			char codepoint = text.charAt(i);
			if (font.has(codepoint)) {
				draw.text(font, String.valueOf(codepoint), pen, glyphTop, size, color);
			}
			pen += font.advance(codepoint, size) + 0.025f * size;
		}
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

	/**
	 * Tracking pass — port of dg#aei (dg.java:191-377), originally the world
	 * render handler. Order preserved: drop expired markers, mark tracked
	 * pearls that left the world done, simulate untracked live pearls, advance
	 * the fade animation.
	 */
	private void track(MinecraftClient client, ClientPlayerEntity player) {
		markers.removeIf(PearlMarker::isExpired);

		Set<Integer> livePearlIds = new HashSet<>();
		List<EnderPearlEntity> livePearls = new ArrayList<>();
		for (Entity entity : client.world.getEntities()) {
			if (entity instanceof EnderPearlEntity pearl) {
				livePearlIds.add(pearl.getId());
				livePearls.add(pearl);
			}
		}

		for (PearlMarker marker : markers) {
			if (!livePearlIds.contains(marker.pearlId)) {
				// dg.java:264-270: iAudN.dhd(0.0f); sDPfY = true.
				marker.markDone();
			}
		}

		for (EnderPearlEntity pearl : livePearls) {
			int pearlId = pearl.getId();
			boolean alreadyTracked = false;
			for (PearlMarker marker : markers) {
				if (marker.pearlId == pearlId) {
					alreadyTracked = true;
					break;
				}
			}
			if (alreadyTracked) {
				continue;
			}

			SimResult result = simulate(client, pearl);
			if (result != null) {
				int steps = Math.max(result.steps - 1, 0);
				markers.add(new PearlMarker(result.landingPos, pearlId, steps, player.age));
			}
		}

		for (PearlMarker marker : markers) {
			marker.updateFade();
		}
	}

	@Override
	protected void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
		markers.clear();
	}

	public boolean shouldShowTimeLeft() {
		return showTimeLeft.getValue();
	}

	private static final class PearlMarker {
		final Vec3d landingPos;
		final int pearlId;
		final int predictedSteps;
		final int startAge;
		boolean done;
		float fade = 0.0f;
		float fadeStart;
		float fadeTarget;
		long fadeStartMs;

		PearlMarker(Vec3d landingPos, int pearlId, int predictedSteps, int startAge) {
			this.landingPos = landingPos;
			this.pearlId = pearlId;
			this.predictedSteps = predictedSteps;
			this.startAge = startAge;
		}

		void markDone() {
			// dg.java:264-270 / 431-439: dhd(0.0f) + sDPfY = true.
			this.done = true;
			this.fade = 0.0f;
			this.fadeStart = 0.0f;
			this.fadeTarget = 0.0f;
			this.fadeStartMs = System.currentTimeMillis();
		}

		/** rk target 1 alive / 0 done, XzDkv/AYqck easing (dg$sx). */
		void updateFade() {
			float target = done ? 0.0f : 1.0f;
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
				float c = 1.70158f;
				if (!done) {
					float f = t - 1.0f;
					fade = fadeStart + (fadeTarget - fadeStart) * (f * f * ((c + 1.0f) * f + c) + 1.0f);
				} else {
					fade = fadeStart + (fadeTarget - fadeStart) * (t * t * ((c + 1.0f) * t - c));
				}
			}
		}

		int getRemainingTicks(int currentAge) {
			return Math.max(predictedSteps - (currentAge - startAge), 0);
		}

		boolean isExpired() {
			return done && fade <= 0.0f;
		}
	}
}
