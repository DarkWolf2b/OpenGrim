package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Set;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.text.Text;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
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
 * <p>Framework divergences (labeled):
 * <ul>
 *   <li>[G] Simulation: the original drives the client's own trajectory
 *       simulator ({@code mh.ckg(pearl).ckD(md.HIkeq).ckF(hasNoGravity)
 *       .ckx(velocity).cky(maxSteps).ckz(-128.0)} → {@code me.cjZ}); the
 *       max-steps argument is runtime-decrypted and unrecovered, so the port
 *       re-implements pearl physics (drag 0.99, gravity 0.03) with a 600-step
 *       cap and a block-collision raycast. The original accepts two
 *       termination kinds ({@code mf.juSGK}/{@code mf.RlLKW}, unrecovered);
 *       the port accepts block hits only.</li>
 *   <li>[G] The original draws a projected HUD card (rounded rect + pearl icon
 *       + {@code String.format(NkcQX, ...)} time text, dg$sx.java:291-310);
 *       this framework has no 2D overlay surface, so the port draws a
 *       world-space box marker with nametag text. The format string
 *       {@code NkcQX} is unrecovered ("%.1fs" used; the {@code * 50 / 1000}
 *       seconds conversion is the natural reading of dg$sx.java:293-295).</li>
 *   <li>[G] Fade-in rate per frame; the original {@code rk} duration
 *       ({@code dou("z", ...)}) is runtime-decrypted and unrecovered.</li>
 * </ul>
 */
public class PearlPrediction extends Module {
	private final BoolSetting showTimeLeft = register(new BoolSetting("show_time_left", false));

	/** [G] Max simulated steps; the original's cky() argument is unrecovered. */
	private static final int MAX_SIMULATION_STEPS = 600;
	/** dg$sx.java:343 ckz(-128.0) — minimum Y, byte-verified. */
	private static final double MIN_Y = -128.0;
	/** [G] Fade-in rate per frame; the original rk duration is unrecovered. */
	private static final float FADE_IN_PER_FRAME = 0.15f;

	private final List<PearlMarker> markers = new ArrayList<>();

	public PearlPrediction() {
		super("pearl_prediction", "Pearl Prediction", "Renders thrown pearl trajectory", ModuleCategory.VISUALS);
	}

	private record SimResult(Vec3d landingPos, int steps) {
	}

	private SimResult simulate(MinecraftClient client, EnderPearlEntity pearl) {
		Vec3d pos = pearl.getEntityPos();
		Vec3d vel = pearl.getVelocity();
		boolean noGravity = pearl.hasNoGravity();

		for (int step = 1; step <= MAX_SIMULATION_STEPS; step++) {
			Vec3d nextPos = pos.add(vel);
			BlockHitResult hit = client.world.raycast(new RaycastContext(
					pos, nextPos, RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, pearl));
			if (hit != null && hit.getType() != HitResult.Type.MISS) {
				return new SimResult(hit.getPos(), step);
			}
			if (nextPos.y < MIN_Y) {
				return null;
			}

			vel = vel.multiply(0.99);
			if (!noGravity) {
				vel = vel.subtract(0.0, 0.03, 0.0);
			}
			pos = nextPos;
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
		track(client, client.player);
		if (markers.isEmpty()) {
			return;
		}

		Camera camera = event.camera();
		Vec3d cameraPos = camera.getCameraPos();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		VertexConsumer lines = consumers.getBuffer(RenderLayers.lines());

		matrices.push();
		try {
			matrices.translate(-cameraPos.x, -cameraPos.y, -cameraPos.z);

			boolean displayTimeLeft = showTimeLeft.getValue();
			int playerAge = client.player.age;

			for (PearlMarker marker : markers) {
				float fade = marker.fade;
				if (fade <= 0.0f) {
					continue;
				}

				Vec3d p = marker.landingPos;
				float radius = 0.25f;
				Box box = new Box(p.x - radius, p.y, p.z - radius, p.x + radius, p.y + 0.1, p.z + radius);
				int alpha = (int) (255 * fade);
				int argb = (alpha << 24) | 0x00A0FF;
				drawBoxOutline(matrices.peek(), lines, box, argb);

				if (displayTimeLeft) {
					int remaining = marker.getRemainingTicks(playerAge);
					double seconds = (remaining * 50.0) / 1000.0;
					String text = String.format(Locale.ROOT, "%.1fs", seconds);

					matrices.push();
					try {
						matrices.translate(p.x, p.y + 0.4, p.z);
						matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(-camera.getYaw()));
						matrices.multiply(RotationAxis.POSITIVE_X.rotationDegrees(camera.getPitch()));
						matrices.scale(-0.025f, -0.025f, 0.025f);

						TextRenderer tr = client.textRenderer;
						float textX = -tr.getWidth(text) / 2.0f;
						tr.draw(Text.literal(text), textX, 0.0f, (alpha << 24) | 0xFFFFFF, false,
								matrices.peek().getPositionMatrix(), consumers, TextRenderer.TextLayerType.SEE_THROUGH, 0, 0xF00020);
					} finally {
						matrices.pop();
					}
				}
			}
		} finally {
			matrices.pop();
		}
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

	private static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumer vc, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;

		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float x1, float y1, float z1,
			float x2, float y2, float z2, float r, float g, float b, float a) {
		float dx = x2 - x1, dy = y2 - y1, dz = z2 - z1;
		vc.vertex(entry, x1, y1, z1).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, x2, y2, z2).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}

	@Override
	protected void onDisable() {
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
		}

		void updateFade() {
			if (done) {
				fade = 0.0f;
				return;
			}
			if (fade < 1.0f) {
				fade = Math.min(1.0f, fade + FADE_IN_PER_FRAME);
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
