package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.block.AbstractBannerBlock;
import net.minecraft.block.AbstractSignBlock;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.ButtonBlock;
import net.minecraft.block.DecoratedPotBlock;
import net.minecraft.block.LeverBlock;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.entity.Entity;
import net.minecraft.entity.FallingBlockEntity;
import net.minecraft.entity.decoration.AbstractDecorationEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.vehicle.AbstractMinecartEntity;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.ChunkPos;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.chunk.ChunkSection;
import net.minecraft.world.chunk.ChunkStatus;
import net.minecraft.world.chunk.WorldChunk;

import org.joml.Matrix4f;
import org.joml.Vector4f;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.IconGlyph;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;

/**
 * Trap ESP (registry sixtwo.cW): "Detects potential trap locations".
 * Original decompile: analysis/decompiled/payload-decrypted/sixtwo/cW.java (lines 114-258 constructor,
 * 543-617 ZZ greedy merge, 620-624 ZU state clear, 630-796 ZV scan loop, 802-983 ZX block predicate,
 * 989-1128 ZY entity predicate, 1131-1224 ZW HUD cards, 1227-1232 YO onDisable).
 * Inner classes: analysis/decompiled/payload-named-cfr/sixtwo/cW$sq.java (cluster candidate accumulator)
 * and cW$sr.java (tracked cluster: rk fade + rg position smoothing).
 * Helpers: sixtwo.rl#dhS (the scan, jar-casesafe/sixtwo/rl.class bytecode 748-1004), sixtwo.me#cjZ is
 * unrelated; projection helper sixtwo.jI#bIw (jar-casesafe/sixtwo/jI_.class bytecode 332-...).
 *
 * <p>Scans loaded chunks whose center lies within "Range" for trap clutter (paintings/frames, signs,
 * buttons, levers, banners, armor stands, minecarts, falling blocks, decorated pots), greedy-merges the
 * matched positions into clusters within "Cluster Radius" (mean center), drops clusters below
 * "Minimal Count", ages unmatched clusters with a 300 ms fade and draws one HUD card per cluster
 * ("Trap Detected", distance, OBJECTS label, count/progress bar, player coords).
 *
 * <p>Runtime-decrypted constants recovered by executing the original's own DES decoders against the
 * decrypted native image (probe 2026-10-17):
 * <ul>
 *   <li>cW#aad slot 18913 = {@code "Trap Detected"}; slot 29610 = {@code "OBJECTS"}.</li>
 *   <li>cW$sr#dnP slot 28298 = {@code 300} (rk fade duration ms); slot 21556 = {@code 300}
 *       (rg position-smoothing duration ms).</li>
 *   <li>rl#die slot 1115 = {@code 16}, slot 21912 = {@code 16} (section height / width).</li>
 *   <li>cW.UBtqj = 1000 (scanner registry hash; unused here, see below).</li>
 * </ul>
 *
 * <p>Framework divergences (labeled):
 * <ul>
 *   <li>[S] The original scans asynchronously (rl#dhL spawns rl#dhS on an executor, rl#dhG returns the
 *       previous pass); this port scans synchronously in {@link #onTick()} — the same predicate
 *       sequence, one tick fresher.</li>
 *   <li>[S] ZU(gM) (cW.java:620) clears the lists on a rare event that never fired during the
 *       2026-10-17 trace (cW digest: ZV x6, ZU x0); the clear is kept on disable only.</li>
 *   <li>{@code ii#bjb()/bjf()/bje()} are the live animated theme channels
 *       ({@code Theme.get().text()/accent()/background()}), read per frame exactly like the
 *       original; {@code lC#ccW} is the recovered Blur-style backdrop
 *       ({@code GuiDraw.blurredBackdrop}, shape SDF corner radius 4, smoothness 5.0) with the
 *       Solid-branch fallback ({@code background × fX.aYh() × fade}).</li>
 *   <li>Rounded corners are the recovered {@code shape.glsl} SDF path
 *       ({@code GuiDraw.fillRounded}); the card radius is {@code ld.all(4.0f)} and the bar
 *       radius {@code ld.all(0.25f)}. The 6 px icon is the real {@code lf.GHxLj} (U+EA26)
 *       glyph through the recovered {@code icons-4.4} MSDF sheet
 *       ({@link IconGlyph#LOCATION}), sized 6.0f as in {@code cem}.</li>
 *   <li>Font sizes 5/6/7 use the recovered {@code lE.WTzbi} = <b>medium</b> MSDF sheet
 *       (gui-dump lines 427-431) at those sizes,
 *       with the {@code lj.bYw} width (+0.25/char) and {@code kJ.bUe} baseline
 *       ({@code y + 0.7·size}, pen {@code advance + 0.025·size}). Vanilla
 *       {@link net.minecraft.client.font.TextRenderer} remains the fallback if the sheet does
 *       not load.</li>
 *   <li>[S] Projection (sixtwo.jI#bIw): the original applies P * modelview * camera-rotation to the
 *       camera-relative position; this port uses P * camera-rotation (RenderSystem modelview is
 *       identity at that point) with GameRenderer#getBasicProjectionMatrix at the base FOV.</li>
 * </ul>
 */
public class TrapEsp extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "trap_esp_hud");

	/** cW$sr rk fade duration (probe: dnP slot 28298 = 300 ms). */
	private static final int FADE_MS = 300;
	/** cW$sr rg position smoothing duration (probe: dnP slot 21556 = 300 ms). */
	private static final int SMOOTH_MS = 300;
	/** cW#aad(18913) probe = "Trap Detected". */
	private static final String TITLE = "Trap Detected";
	/** cW#aad(29610) probe = "OBJECTS". */
	private static final String OBJECTS_LABEL = "OBJECTS";

	/** cW.java:1184-1187 card metrics: padX 5, padY 4, w 70 + 2*padX, h 40. */
	private static final float CARD_W = 70.0f + 5.0f * 2.0f;
	private static final float CARD_H = 40.0f;
	private static final float PAD_X = 5.0f;
	private static final float PAD_Y = 4.0f;
	/** cW.java:1207-1215 bar metrics: barH 2.5, icon size 6. */
	private static final float BAR_H = 2.5f;
	private static final float ICON_SIZE = 6.0f;
	/** Vanilla font height, the scale denominator for the fallback text path. */
	private static final float FONT_BASE = 9.0f;

	/** fX.aYh() background style (0.75 Blur): bar background alpha = (255 - 100*0.75) * 0.7. */
	private static final float BAR_BG_ALPHA = (255.0f - 100.0f * 0.75f) * 0.7f;

	private final GroupSetting scanFor = register(new GroupSetting("scan_for"));
	private final BoolSetting paintings = register(new BoolSetting("paintings", true));
	private final BoolSetting signs = register(new BoolSetting("signs", true));
	private final BoolSetting buttons = register(new BoolSetting("buttons", false));
	private final BoolSetting levers = register(new BoolSetting("levers", false));
	private final BoolSetting banners = register(new BoolSetting("banners", true));
	private final BoolSetting armorStands = register(new BoolSetting("armor_stands", true));
	private final BoolSetting minecarts = register(new BoolSetting("minecarts", true));
	private final BoolSetting fallingBlocks = register(new BoolSetting("falling_blocks", true));
	private final BoolSetting decorationPots = register(new BoolSetting("decoration_pots", false));

	private final DoubleSetting minimalCount = register(new DoubleSetting("minimal_count", 1.0, 1.0, 100.0, 6.0, null));
	private final DoubleSetting clusterRadius = register(new DoubleSetting("cluster_radius", 1.0, 8.0, 32.0, 16.0, null));
	private final DoubleSetting range = register(new DoubleSetting("range", 1.0, 1.0, 128.0, 100.0, " blocks"));

	private final List<TrackedCluster> currentClusters = new ArrayList<>();
	private final List<TrackedCluster> displayedClusters = new ArrayList<>();

	public TrapEsp() {
		super("trap_esp", "Trap ESP", "Detects potential trap locations", ModuleCategory.VISUALS);
		scanFor.add(paintings);
		scanFor.add(signs);
		scanFor.add(buttons);
		scanFor.add(levers);
		scanFor.add(banners);
		scanFor.add(armorStands);
		scanFor.add(minecarts);
		scanFor.add(fallingBlocks);
		scanFor.add(decorationPots);
	}

	@Override
	protected void onEnable() {
		// ZW (cW.java:1131) is a HUD pass in the original; the Fabric HUD element
		// registry delivers the same DrawContext (pattern: Arrows).
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
	}

	@Override
	protected void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
		clearState();
	}

	private void clearState() {
		currentClusters.clear();
		displayedClusters.clear();
	}

	/**
	 * ZV (cW.java:630-796): scan, merge, track, age and sort. The framework tick is
	 * the original's pre-motion tick (trace 2026-10-17: ZV fires per tick, ZU never).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (!isEnabled() || player == null || client.world == null) {
			clearState();
			return;
		}

		List<Vec3d> matched = scan(client, player);
		List<ClusterCandidate> candidates = greedyMerge(matched, clusterRadius.getValue().floatValue());
		int minCount = minimalCount.getValue().intValue();

		Set<TrackedCluster> matchedTracked = new HashSet<>();
		for (ClusterCandidate candidate : candidates) {
			if (candidate.count < minCount) {
				continue;
			}
			Vec3d center = candidate.getCenter();
			double bestDistSq = clusterRadius.getValue().floatValue() * clusterRadius.getValue().floatValue();
			TrackedCluster best = null;
			for (TrackedCluster tracked : currentClusters) {
				if (matchedTracked.contains(tracked)) {
					continue;
				}
				double distSq = tracked.getCenter().squaredDistanceTo(center);
				if (distSq < bestDistSq) {
					best = tracked;
					bestDistSq = distSq;
				}
			}
			if (best != null) {
				best.update(candidate.count, center);
				matchedTracked.add(best);
			} else {
				TrackedCluster created = new TrackedCluster();
				created.update(candidate.count, center);
				currentClusters.add(created);
				matchedTracked.add(created);
			}
		}

		Iterator<TrackedCluster> it = currentClusters.iterator();
		while (it.hasNext()) {
			TrackedCluster tracked = it.next();
			if (!matchedTracked.contains(tracked)) {
				tracked.markDying();
			}
			if (tracked.isDead()) {
				it.remove();
			}
		}

		Vec3d playerPos = player.getEntityPos();
		displayedClusters.clear();
		displayedClusters.addAll(currentClusters);
		displayedClusters.sort(Comparator.comparingDouble(c -> c.getCenter().squaredDistanceTo(playerPos)));
	}

	/**
	 * rl#dhS (jar-casesafe/sixtwo/rl.class bytecode 748-1004): every loaded chunk whose
	 * center is within Range is scanned section by section; non-air blocks go through the
	 * block predicate and matching ones are collected at block-center. Entities pass the
	 * entity predicate and the chunk-center test of their own position.
	 */
	private List<Vec3d> scan(MinecraftClient client, ClientPlayerEntity player) {
		List<Vec3d> matched = new ArrayList<>();
		ClientWorld world = client.world;
		int scanRange = range.getValue().intValue();
		double rangeSq = (double) scanRange * scanRange;
		double playerX = player.getX();
		double playerZ = player.getZ();

		ChunkPos playerChunk = player.getChunkPos();
		int chunkRadius = (scanRange >> 4) + 2;
		for (int dx = -chunkRadius; dx <= chunkRadius; dx++) {
			for (int dz = -chunkRadius; dz <= chunkRadius; dz++) {
				WorldChunk chunk = world.getChunkManager().getChunk(
						playerChunk.x + dx, playerChunk.z + dz, ChunkStatus.FULL, false);
				if (chunk == null || !chunkWithinRange(chunk.getPos(), playerX, playerZ, rangeSq)) {
					continue;
				}
				int startX = chunk.getPos().getStartX();
				int startZ = chunk.getPos().getStartZ();
				ChunkSection[] sections = chunk.getSectionArray();
				for (int index = 0; index < sections.length; index++) {
					ChunkSection section = sections[index];
					if (section == null || section.isEmpty()) {
						continue;
					}
					int baseY = world.getBottomY() + index * 16;
					for (int x = 0; x < 16; x++) {
						for (int y = 0; y < 16; y++) {
							for (int z = 0; z < 16; z++) {
								BlockState state = section.getBlockState(x, y, z);
								if (state.isAir()) {
									continue;
								}
								if (matchesBlock(state)) {
									matched.add(new Vec3d(startX + x + 0.5, baseY + y + 0.5, startZ + z + 0.5));
								}
							}
						}
					}
				}
			}
		}

		for (Entity entity : world.getEntities()) {
			if (entity == null || entity == player) {
				continue;
			}
			if (!matchesEntity(entity, player)) {
				continue;
			}
			if (!chunkWithinRange(new ChunkPos(entity.getBlockPos()), playerX, playerZ, rangeSq)) {
				continue;
			}
			matched.add(entity.getEntityPos());
		}
		return matched;
	}

	/** rl#dhT (rl.class bytecode 713-738): chunk center within range. */
	private static boolean chunkWithinRange(ChunkPos pos, double playerX, double playerZ, double rangeSq) {
		double cx = pos.getStartX() + 8.0;
		double cz = pos.getStartZ() + 8.0;
		double dx = playerX - cx;
		double dz = playerZ - cz;
		return dx * dx + dz * dz - rangeSq <= 0.0;
	}

	/**
	 * ZZ (cW.java:543-617): greedy merge, each position joins the nearest existing
	 * candidate within Cluster Radius (strictly closer than the running minimum), else
	 * seeds a new one. Candidate centers are the running means (cW$sq.dnH).
	 */
	private List<ClusterCandidate> greedyMerge(List<Vec3d> points, float radius) {
		double radiusSq = (double) radius * radius;
		List<ClusterCandidate> candidates = new ArrayList<>();
		for (Vec3d pos : points) {
			ClusterCandidate best = null;
			double bestDistSq = radiusSq;
			for (ClusterCandidate candidate : candidates) {
				double distSq = candidate.getCenter().squaredDistanceTo(pos);
				if (distSq < bestDistSq) {
					best = candidate;
					bestDistSq = distSq;
				}
			}
			if (best != null) {
				best.add(pos);
			} else {
				ClusterCandidate created = new ClusterCandidate();
				created.add(pos);
				candidates.add(created);
			}
		}
		return candidates;
	}

	/** cW#ZX (cW.java:802-983): air/null rejected, then each toggle gates its block type. */
	public boolean matchesBlock(BlockState state) {
		if (state == null || state.isAir()) {
			return false;
		}
		Block block = state.getBlock();
		if (signs.getValue() && block instanceof AbstractSignBlock) {
			return true;
		}
		if (buttons.getValue() && block instanceof ButtonBlock) {
			return true;
		}
		if (levers.getValue() && block instanceof LeverBlock) {
			return true;
		}
		if (banners.getValue() && block instanceof AbstractBannerBlock) {
			return true;
		}
		if (decorationPots.getValue() && block instanceof DecoratedPotBlock) {
			return true;
		}
		return false;
	}

	/** cW#ZY (cW.java:989-1128): self rejected, then each toggle gates its entity type. */
	public boolean matchesEntity(Entity entity, ClientPlayerEntity localPlayer) {
		if (entity == null || entity == localPlayer) {
			return false;
		}
		if (paintings.getValue() && entity instanceof AbstractDecorationEntity) {
			return true;
		}
		if (armorStands.getValue() && entity instanceof ArmorStandEntity) {
			return true;
		}
		if (minecarts.getValue() && entity instanceof AbstractMinecartEntity) {
			return true;
		}
		if (fallingBlocks.getValue() && entity instanceof FallingBlockEntity) {
			return true;
		}
		return false;
	}

	/**
	 * ZW (cW.java:1131-1224): one card per displayed cluster. Layout, texts, bar
	 * proportions and the fade/scale animation are the original's.
	 */
	private void renderHud(DrawContext ctx, RenderTickCounter tickCounter) {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || displayedClusters.isEmpty()) {
			return;
		}

		float delta = tickCounter.getTickProgress(true);
		GuiDraw draw = new GuiDraw(ctx, 0, 0, delta, client.textRenderer);
		CardText text = new CardText(draw, client.textRenderer);
		Theme theme = Theme.get();
		Vec3d playerPos = player.getEntityPos();
		int screenWidth = ctx.getScaledWindowWidth();
		int screenHeight = ctx.getScaledWindowHeight();
		Vec3d cameraPos = client.gameRenderer.getCamera().getCameraPos();
		Matrix4f rotation = new Matrix4f().rotation(client.gameRenderer.getCamera().getRotation());
		float fov = client.options.getFov().getValue().floatValue();
		Matrix4f projection = client.gameRenderer.getBasicProjectionMatrix(fov);
		int minCount = minimalCount.getValue().intValue();

		for (TrackedCluster cluster : displayedClusters) {
			float fade = cluster.fade();
			if (fade == 0.0f) {
				continue;
			}
			Vec2f screen = project(cluster.smoothCenter(), cameraPos, rotation, projection, screenWidth, screenHeight);
			if (screen == null) {
				continue;
			}

			double distance = playerPos.distanceTo(cluster.getCenter());
			String distanceText = Math.round(distance) + "m";

			float x0 = screen.x - CARD_W / 2.0f;
			float y0 = screen.y;
			float anchorX = x0 + CARD_W / 2.0f;
			float anchorY = y0 + CARD_H / 2.0f;

			// jH#bId: scale about (anchorX, anchorY) by 0.5 + 0.5*fade.
			ctx.getMatrices().pushMatrix();
			ctx.getMatrices().translate(anchorX, anchorY);
			ctx.getMatrices().scale(0.5f + 0.5f * fade, 0.5f + 0.5f * fade);
			ctx.getMatrices().translate(-anchorX, -anchorY);

			drawCard(draw, x0, y0, fade);

			int titleColor = withAlpha(theme.text().argb(), 255.0f * fade);
			int textColor = multiplyAlpha(theme.text().argb(), 0.5f);
			int barColor = withAlpha(theme.accent().argb(), 220.0f * fade);
			int barBgColor = multiplyAlpha(withAlpha(theme.background().argb(), BAR_BG_ALPHA), fade);

			float textX = x0 + PAD_X;
			float textY = y0 + PAD_Y;
			text.draw(TITLE, textX, textY, 7.0f, titleColor);
			text.drawRight(distanceText, x0 + CARD_W - PAD_X, textY, 6.0f, textColor);

			float labelX = x0 + PAD_X;
			float barY = textY + 18.0f;
			text.draw(OBJECTS_LABEL, labelX, barY - 7.0f, 5.0f, textColor);

			float barW = CARD_W - 2.0f * PAD_X;
			text.drawRight(String.valueOf(cluster.getCount()), labelX + barW, barY - 7.5f, 6.0f, titleColor);

			// lC#cdg(..., ld.all(0.25f)): rounded bar through the shape SDF.
			draw.fillRounded(labelX, barY, barW, BAR_H, 0.25f, ColorF.fromArgb(barBgColor));
			float progress = barW * Math.min((float) cluster.getCount() / (float) minCount, 1.0f);
			draw.fillRounded(labelX, barY, progress, BAR_H, 0.25f, ColorF.fromArgb(barColor));

			float coordsY = barY + BAR_H + 5.0f;
			// lC#cem(lf.GHxLj, ...): the real U+EA26 icon through the icons-4.4 sheet.
			draw.icon(MsdfFont.icons(), IconGlyph.LOCATION, textX, coordsY, ICON_SIZE,
					ColorF.fromArgb(textColor));
			float coordsTextX = textX + ICON_SIZE + 3.0f;
			float coordsTextY = coordsY + (lineHeight(6.0f) - ICON_SIZE) * 0.5f;
			String coords = Math.round(player.getX()) + " " + Math.round(player.getY()) + " "
					+ Math.round(player.getZ());
			text.draw(coords, coordsTextX, coordsTextY, 6.0f, textColor);

			ctx.getMatrices().popMatrix();
		}
	}

	/**
	 * lC#ccW: the recovered Blur-style backdrop (shape-masked blur) with the Solid
	 * branch as the fallback ({@code ii2.bjd().cob(fX.aYh() * fade)}).
	 */
	private static void drawCard(GuiDraw draw, float x0, float y0, float fade) {
		if (draw.blurredBackdrop(x0, y0, CARD_W, CARD_H, 4.0f, ColorF.WHITE, 0.0f, fade)) {
			return;
		}
		Theme theme = Theme.get();
		draw.fillRounded(x0, y0, CARD_W, CARD_H, 4.0f,
				theme.background().withAlphaScale(theme.backgroundStyle().opacity * fade));
	}

	/** {@code lq.cat()} = {@code lj.bYG(size)} = 0.7f * size. */
	private static float lineHeight(float size) {
		return 0.7f * size;
	}

	/**
	 * The card text surface: recovered {@code lE.WTzbi} = medium MSDF sheet,
	 * {@code lj.bYw} width (+0.25/char), {@code kJ.bUe} baseline (+0.7·size),
	 * pen step {@code advance + 0.025·size}. Vanilla text is the fallback only.
	 */
	private static final class CardText {
		private static final float LAYOUT_SPACING = 0.25f;
		private static final float DRAW_SPACING = 0.025f;

		private final GuiDraw draw;
		private final TextRenderer vanilla;
		private final MsdfFont msdf;

		CardText(GuiDraw draw, TextRenderer vanilla) {
			this.draw = draw;
			this.vanilla = vanilla;
			this.msdf = MsdfFont.of(MsdfFont.MEDIUM);
		}

		float width(String text, float size) {
			if (text == null || text.isEmpty()) {
				return 0.0f;
			}
			if (msdf == null) {
				return vanilla.getWidth(text) * (size / FONT_BASE);
			}
			float total = 0.0f;
			for (int i = 0; i < text.length(); i++) {
				total += msdf.advance(text.charAt(i), size) + LAYOUT_SPACING;
			}
			return total;
		}

		void draw(String text, float x, float topY, float size, int argb) {
			if (text == null || text.isEmpty()) {
				return;
			}
			ColorF color = ColorF.fromArgb(argb);
			if (msdf == null) {
				draw.text(vanilla, text, x, topY, size, color);
				return;
			}
			float glyphTop = topY + lineHeight(size) - msdf.ascent(size);
			float pen = x;
			for (int i = 0; i < text.length(); i++) {
				char codepoint = text.charAt(i);
				if (msdf.has(codepoint)) {
					draw.text(msdf, String.valueOf(codepoint), pen, glyphTop, size, color);
				}
				pen += msdf.advance(codepoint, size) + DRAW_SPACING * size;
			}
		}

		/** lC#ceP: right-aligned using the same {@code bYC} width. */
		void drawRight(String text, float rightX, float topY, float size, int argb) {
			draw(text, rightX - width(text, size), topY, size, argb);
		}
	}

	/** jI#bIw: camera-relative position -> NDC -> screen pixels; null when behind the camera. */
	private static Vec2f project(Vec3d pos, Vec3d cameraPos, Matrix4f rotation, Matrix4f projection, int width, int height) {
		Vector4f v = new Vector4f(
				(float) (pos.x - cameraPos.x),
				(float) (pos.y - cameraPos.y),
				(float) (pos.z - cameraPos.z),
				1.0f);
		v.mul(rotation).mul(projection);
		if (v.w <= 0.0f) {
			return null;
		}
		v.div(v.w);
		return new Vec2f((v.x + 1.0f) / 2.0f * width, (1.0f - v.y) / 2.0f * height);
	}

	/** mG#coa: set the alpha (0..255). */
	private static int withAlpha(int argb, float alpha255) {
		int a = Math.clamp(Math.round(alpha255), 0, 255);
		return (a << 24) | (argb & 0x00FFFFFF);
	}

	/** mG#cob: multiply the alpha by f (0..1). */
	private static int multiplyAlpha(int argb, float f) {
		int a = Math.clamp(Math.round(((argb >>> 24) & 0xFF) * f), 0, 255);
		return (a << 24) | (argb & 0x00FFFFFF);
	}

	/** Clusters tracked on the last scan, nearest first. */
	public List<TrackedCluster> getClusters() {
		return Collections.unmodifiableList(displayedClusters);
	}

	/** cW$sq: running-mean accumulator of one merge candidate. */
	private static final class ClusterCandidate {
		private double sumX;
		private double sumY;
		private double sumZ;
		private int count;

		void add(Vec3d pos) {
			sumX += pos.x;
			sumY += pos.y;
			sumZ += pos.z;
			count++;
		}

		Vec3d getCenter() {
			if (count == 0) {
				return Vec3d.ZERO;
			}
			return new Vec3d(sumX / count, sumY / count, sumZ / count);
		}
	}

	/**
	 * cW$sr: tracked cluster. {@code fade} is the rk animator (300 ms; ease-out-back
	 * while appearing - rj.XzDkv, ease-in-back while dying - rj.AYqck); the position
	 * is smoothed by an rg triple (300 ms ease-in-out-cubic, rj.ZIApv).
	 */
	public static final class TrackedCluster {
		private Vec3d center = Vec3d.ZERO;
		private int count;
		private boolean dying;
		private final Animator fade = new Animator(FADE_MS, Easing.EASE_OUT_BACK);
		private final Animator smoothX = new Animator(SMOOTH_MS, Easing.EASE_IN_OUT_CUBIC);
		private final Animator smoothY = new Animator(SMOOTH_MS, Easing.EASE_IN_OUT_CUBIC);
		private final Animator smoothZ = new Animator(SMOOTH_MS, Easing.EASE_IN_OUT_CUBIC);
		private boolean smoothInitialized;

		public TrackedCluster() {
		}

		public TrackedCluster(Vec3d center, int count) {
			update(count, center);
		}

		/** cW$sr#dnJ: count/center update, target fade 1.0 with ease-out-back. */
		public void update(int count, Vec3d center) {
			this.count = count;
			this.center = center;
			this.dying = false;
			this.fade.setEasing(Easing.EASE_OUT_BACK);
		}

		/** cW$sr#dnK: unmatched this scan, target fade 0.0 with ease-in-back. */
		public void markDying() {
			this.dying = true;
			this.fade.setEasing(Easing.EASE_IN_BACK);
		}

		/** cW$sr#dnN: dying and fully faded (rk value <= 0). */
		public boolean isDead() {
			return dying && fade.value() <= 0.0f;
		}

		/** cW$sr#dnM: advance the fade toward !dying and read it. */
		private float fade() {
			return fade.update(dying ? 0.0f : 1.0f);
		}

		/** cW$sr#dnL: snap on first use (rg#dfE), then animate toward the center (rg#dfA). */
		private Vec3d smoothCenter() {
			if (!smoothInitialized) {
				smoothX.set((float) center.x);
				smoothY.set((float) center.y);
				smoothZ.set((float) center.z);
				smoothInitialized = true;
				return center;
			}
			smoothX.update((float) center.x);
			smoothY.update((float) center.y);
			smoothZ.update((float) center.z);
			return new Vec3d(smoothX.value(), smoothY.value(), smoothZ.value());
		}

		public Vec3d getCenter() {
			return center;
		}

		public int getCount() {
			return count;
		}
	}

	/** rj easing kinds used by the cluster animators. */
	private enum Easing {
		/** rj.XzDkv = dgl(1.70158): ease-out-back. */
		EASE_OUT_BACK,
		/** rj.AYqck = dgk(1.70158): ease-in-back. */
		EASE_IN_BACK,
		/** rj.ZIApv: ease-in-out-cubic. */
		EASE_IN_OUT_CUBIC
	}

	/**
	 * rk animator (rk.java:54-134): value ramps from the value at the last target
	 * change to the target over the duration, eased; the easing can be swapped on
	 * transitions (rk#dhs).
	 */
	private static final class Animator {
		private final float durationMs;
		private Easing easing;
		private float value;
		private float start;
		private float target;
		private long startMs;

		Animator(float durationMs, Easing easing) {
			this.durationMs = durationMs;
			this.easing = easing;
		}

		void setEasing(Easing easing) {
			this.easing = easing;
		}

		/** rk#dhe: snap value/start/target and finish. */
		void set(float v) {
			this.value = v;
			this.start = v;
			this.target = v;
			this.startMs = System.currentTimeMillis();
		}

		float value() {
			return value;
		}

		/** rk#dhd: restart on target change, then advance by elapsed/duration. */
		float update(float newTarget) {
			long now = System.currentTimeMillis();
			if (newTarget != target) {
				this.start = this.value;
				this.target = newTarget;
				this.startMs = now;
			}
			if (durationMs <= 0.0f) {
				this.value = target;
				return value;
			}
			long elapsed = now - startMs;
			if (elapsed >= durationMs) {
				this.value = target;
				return value;
			}
			float t = (float) elapsed / durationMs;
			this.value = start + (target - start) * ease(t);
			return value;
		}

		private float ease(float t) {
			switch (easing) {
				case EASE_OUT_BACK: {
					// rj.dgl: f = t-1; f*f*((c+1)*f + c) + 1, c = 1.70158.
					float c = 1.70158f;
					float f = t - 1.0f;
					return f * f * ((c + 1.0f) * f + c) + 1.0f;
				}
				case EASE_IN_BACK: {
					// rj.dgk: t*t*((c+1)*t - c), c = 1.70158.
					float c = 1.70158f;
					return t * t * ((c + 1.0f) * t - c);
				}
				case EASE_IN_OUT_CUBIC:
				default: {
					// rj.ZIApv: t < 0.5 ? 0.5*(2t)^3 : 0.5*((2t-2)^3 + 2).
					float f = t * 2.0f;
					if (f < 1.0f) {
						return 0.5f * f * f * f;
					}
					f -= 2.0f;
					return 0.5f * (f * f * f + 2.0f);
				}
			}
		}
	}
}
