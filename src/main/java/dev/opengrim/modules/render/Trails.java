package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.util.FriendsManager;

/**
 * Trails (registry sixtwo.cU): "Renders trails behind players".
 * Original: analysis/decompiled/casesafe/payload-decrypted/sixtwo/cU_.java
 * (constructor 68-138, {@code Zz(go.sX)} render 232-565, {@code ZA} ribbon draw 567-667);
 * bytecode cross-check via javap of jar-casesafe/sixtwo/cU_.class.
 * Inner class: analysis/decompiled/payload-named-cfr/sixtwo/cU$sp.java (position + timestamp).
 * Helpers: analysis/decompiled/casesafe/payload-named-cfr/sixtwo/kp.java (bQB DEBUG_LINE_STRIP
 * 71-168, bQA TRIANGLE_STRIP ribbon 173-268); jk.java (bDn/bDm 270-286, bDo 538-618, bDu 628+);
 * jJ.java bIA (frustum box test, jar-casesafe javap: Box(pos±0.5), getCapturedFrustum);
 * jI.bIr (camera translate).
 *
 * <p>Every frame (no tick handler exists in the class): samples each qualifying player's
 * lerped position when it changed, prunes samples older than {@code 125.0f * Length} ms,
 * tracks the first/last frustum-visible index, then draws the ribbon quad strip plus the
 * top/bottom line strips through {@code kp.bQA/bQB}.
 *
 * <p>Show-For gating is bytecode-exact (cU_.class {@code Zz}): local player needs {@code Self},
 * every other player needs {@code Players}; then {@code !Friends && isFriend(p)} skips,
 * then {@code !Invisibles && p.isInvisible()} skips.
 *
 * <p>[G] jk.bDo gradient constants are DES-encrypted in the shell class (absent from the
 * decrypted pool): the 360-step triangle wave ({@code (now/speed + step) % 360}, palette
 * [color, color*0.5]) is the same labeled high-probability guess as ChinaHat's audit.
 * Color default: {@code cG.Uf(rD.dlM().bjG().bis())} is the theme-fed color; kept as white
 * per the module spec (theme value not statically recoverable).
 */
public class Trails extends Module {
	private final GroupSetting showFor = register(new GroupSetting("show_for"));
	private final BoolSetting players = register(new BoolSetting("players", false));
	private final BoolSetting friends = register(new BoolSetting("friends", false));
	private final BoolSetting invisibles = register(new BoolSetting("invisibles", false));
	private final BoolSetting self = register(new BoolSetting("self", true));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, true));
	private final DoubleSetting length = register(new DoubleSetting("length", 0.01, 2.0, 4.0, 3.0, null));
	private final DoubleSetting gradientSpeed = register(new DoubleSetting("gradient_speed", 1.0, 1.0, 10.0, 5.0, null));

	private final Map<PlayerEntity, List<TrailPoint>> history = new HashMap<>();

	public Trails() {
		super("trails", "Trails", "Renders trails behind players", ModuleCategory.VISUALS);
		showFor.add(players);
		showFor.add(friends);
		showFor.add(invisibles);
		showFor.add(self);
	}

	public record TrailPoint(Vec3d pos, long time) {
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		// cU.Zz is the sX world-render event; every other sX port maps to
		// AFTER_ENTITIES (EventBridge), so the earlier BEFORE_TRANSLUCENT gate
		// was a divergence.
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity localPlayer = client.player;
		if (localPlayer == null || client.world == null) {
			return;
		}

		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		long currentTime = System.currentTimeMillis();
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();

			for (PlayerEntity playerEntity : client.world.getPlayers()) {
				// cU_.class Zz: local player -> Self; everyone else -> Players.
				if (playerEntity == localPlayer) {
					if (!self.getValue()) {
						continue;
					}
				} else {
					if (!players.getValue()) {
						continue;
					}
				}
				// Zz: `if (!friends && isFriend(p)) continue` (friends are filtered out
				// unless the Friends box is checked, for the local player too).
				if (!friends.getValue() && FriendsManager.isFriend(playerEntity.getGameProfile().name())) {
					continue;
				}
				if (!invisibles.getValue() && playerEntity.isInvisible()) {
					continue;
				}

				List<TrailPoint> list = history.computeIfAbsent(playerEntity, p -> new ArrayList<>(64));
				long retention = (long) (125.0f * length.getValue().floatValue());
				Vec3d vec3d = playerEntity.getLerpedPos(tickDelta);
				int sizeBefore = list.size();
				if (sizeBefore == 0 || !list.get(sizeBefore - 1).pos().equals(vec3d)) {
					list.add(new TrailPoint(vec3d, currentTime));
				}

				int validCount = 0;
				int firstVisible = -1;
				int lastVisible = -1;
				int size = list.size();
				Frustum frustum = client.worldRenderer.getCapturedFrustum();

				for (int i = 0; i < size; ++i) {
					TrailPoint point = list.get(i);
					if (currentTime - point.time() - retention > 0L) {
						continue;
					}
					if (validCount != i) {
						list.set(validCount, point);
					}
					if (isFrustumVisible(frustum, point.pos())) {
						if (firstVisible == -1) {
							firstVisible = validCount;
						}
						lastVisible = validCount;
					}
					++validCount;
				}

				if (validCount < size) {
					list.subList(validCount, size).clear();
				}

				if (list.size() < 2) {
					continue;
				}
				if (firstVisible == -1) {
					continue;
				}
				if (lastVisible - firstVisible + 1 < 2) {
					continue;
				}

				renderPlayerTrail(entry, consumers, localPlayer, playerEntity, list, firstVisible, lastVisible);
			}
		} finally {
			matrices.pop();
		}
	}

	private boolean isFrustumVisible(Frustum frustum, Vec3d pos) {
		if (frustum == null) {
			return true;
		}
		return frustum.isVisible(new Box(pos.x - 0.5, pos.y - 0.5, pos.z - 0.5, pos.x + 0.5, pos.y + 0.5, pos.z + 0.5));
	}

	private void renderPlayerTrail(MatrixStack.Entry entry, VertexConsumerProvider consumers,
			ClientPlayerEntity localPlayer, PlayerEntity playerEntity,
			List<TrailPoint> list, int firstVisible, int lastVisible) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (playerEntity == localPlayer && client.options.getPerspective().isFirstPerson()) {
			return;
		}
		int size = list.size();
		if (size < 2) {
			return;
		}
		if (firstVisible < 0) {
			firstVisible = 0;
		}
		if (lastVisible >= size) {
			lastVisible = size - 1;
		}
		int count = lastVisible - firstVisible + 1;
		if (count < 2) {
			return;
		}

		float height = playerEntity.getHeight();
		int speed = gradientSpeed.getValue().intValue();
		int baseColor = color.getValue();

		VertexConsumer quadConsumer = consumers.getBuffer(RenderLayers.debugFilledBox());
		for (int i = firstVisible; i < lastVisible; ++i) {
			int step1 = i - firstVisible;
			int step2 = step1 + 1;
			Vec3d p1 = list.get(i).pos();
			Vec3d p2 = list.get(i + 1).pos();

			int c1 = calculateGradient(step1, count, baseColor, speed, ((float) step1 / count) * 0.7f);
			int c2 = calculateGradient(step2, count, baseColor, speed, ((float) step2 / count) * 0.7f);
			drawRibbonQuad(entry, quadConsumer, p1, p2, height, c1, c2);
		}

		VertexConsumer lineConsumer = consumers.getBuffer(RenderLayers.linesTranslucent());
		for (int i = firstVisible; i < lastVisible; ++i) {
			int step1 = i - firstVisible;
			int step2 = step1 + 1;
			Vec3d p1 = list.get(i).pos();
			Vec3d p2 = list.get(i + 1).pos();

			float alpha1 = Math.min(((float) step1 / count) * 1.5f, 1.0f);
			float alpha2 = Math.min(((float) step2 / count) * 1.5f, 1.0f);
			int c1 = calculateGradient(step1, count, baseColor, speed, alpha1);
			int c2 = calculateGradient(step2, count, baseColor, speed, alpha2);

			// Bottom line
			drawLine(entry, lineConsumer, p1, p2, c1, c2);
			// Top line
			Vec3d top1 = new Vec3d(p1.x, p1.y + height, p1.z);
			Vec3d top2 = new Vec3d(p2.x, p2.y + height, p2.z);
			drawLine(entry, lineConsumer, top1, top2, c1, c2);
		}
	}

	private static int calculateGradient(int stepIndex, int totalSteps, int baseArgb, int speed, float alphaMultiplier) {
		float baseAlpha = ((baseArgb >>> 24) & 0xFF) / 255.0f;
		float r1 = ((baseArgb >> 16) & 0xFF);
		float g1 = ((baseArgb >> 8) & 0xFF);
		float b1 = (baseArgb & 0xFF);

		float r2 = r1 * 0.5f;
		float g2 = g1 * 0.5f;
		float b2 = b1 * 0.5f;

		long now = System.currentTimeMillis();
		long div = Math.max(1, speed);
		int n6 = (int) (((now / div) + stepIndex) % 360L);
		if (n6 < 0) {
			n6 += 360;
		}

		float progress = (n6 / 360.0f) * 2.0f;
		int slot = (int) progress;
		if (slot >= 2) {
			slot = 1;
		}
		float frac = progress - slot;

		float r, g, b;
		if (slot == 0) {
			r = r1 + (r2 - r1) * frac;
			g = g1 + (g2 - g1) * frac;
			b = b1 + (b2 - b1) * frac;
		} else {
			r = r2 + (r1 - r2) * frac;
			g = g2 + (g1 - g2) * frac;
			b = b2 + (b1 - b2) * frac;
		}

		float finalAlpha = MathHelper.clamp(baseAlpha * alphaMultiplier, 0.0f, 1.0f);
		int ai = (int) (finalAlpha * 255.0f + 0.5f);
		int ri = (int) (MathHelper.clamp(r, 0.0f, 255.0f) + 0.5f);
		int gi = (int) (MathHelper.clamp(g, 0.0f, 255.0f) + 0.5f);
		int bi = (int) (MathHelper.clamp(b, 0.0f, 255.0f) + 0.5f);
		return (ai << 24) | (ri << 16) | (gi << 8) | bi;
	}

	private static void drawRibbonQuad(MatrixStack.Entry entry, VertexConsumer vc,
			Vec3d p1, Vec3d p2, float height, int c1, int c2) {
		float a1 = ((c1 >>> 24) & 0xFF) / 255.0f, r1 = ((c1 >> 16) & 0xFF) / 255.0f, g1 = ((c1 >> 8) & 0xFF) / 255.0f, b1 = (c1 & 0xFF) / 255.0f;
		float a2 = ((c2 >>> 24) & 0xFF) / 255.0f, r2 = ((c2 >> 16) & 0xFF) / 255.0f, g2 = ((c2 >> 8) & 0xFF) / 255.0f, b2 = (c2 & 0xFF) / 255.0f;

		vc.vertex(entry, (float) p1.x, (float) p1.y, (float) p1.z).color(r1, g1, b1, a1);
		vc.vertex(entry, (float) p2.x, (float) p2.y, (float) p2.z).color(r2, g2, b2, a2);
		vc.vertex(entry, (float) p2.x, (float) (p2.y + height), (float) p2.z).color(r2, g2, b2, a2);
		vc.vertex(entry, (float) p1.x, (float) (p1.y + height), (float) p1.z).color(r1, g1, b1, a1);
	}

	private static void drawLine(MatrixStack.Entry entry, VertexConsumer vc, Vec3d from, Vec3d to, int c1, int c2) {
		float a1 = ((c1 >>> 24) & 0xFF) / 255.0f, r1 = ((c1 >> 16) & 0xFF) / 255.0f, g1 = ((c1 >> 8) & 0xFF) / 255.0f, b1 = (c1 & 0xFF) / 255.0f;
		float a2 = ((c2 >>> 24) & 0xFF) / 255.0f, r2 = ((c2 >> 16) & 0xFF) / 255.0f, g2 = ((c2 >> 8) & 0xFF) / 255.0f, b2 = (c2 & 0xFF) / 255.0f;
		float dx = (float) (to.x - from.x), dy = (float) (to.y - from.y), dz = (float) (to.z - from.z);
		vc.vertex(entry, (float) from.x, (float) from.y, (float) from.z).color(r1, g1, b1, a1).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, (float) to.x, (float) to.y, (float) to.z).color(r2, g2, b2, a2).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}
}
