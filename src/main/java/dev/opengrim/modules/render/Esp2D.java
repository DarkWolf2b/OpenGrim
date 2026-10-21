package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.util.FriendsManager;

/**
 * 2D ESP (registry sixtwo.di): "Allows you to see targets through walls".
 *
 * <p>Port of sixtwo.di (analysis/decompiled/casesafe/payload-decrypted/sixtwo/di.java, 908 lines;
 * spec analysis/specs/casesafe/handlers/di.md). The original is fully recovered Java: it keeps
 * no per-player state of its own and defers all drawing to the profile registry
 * ({@code rD.dlS()}/{@code pj.cNs}), which this port does not have.
 *
 * <p>Settings (di.java:101-128):
 * <ul>
 *   <li>"Edit ESP" ({@code cI} action button, callback {@code aR::yc}) — not expressible with
 *       this settings API; kept as an inert placeholder group.</li>
 *   <li>"ESP Profiles" ({@code cE} profile-list setting, backed by the global profile registry
 *       {@code rD.dlS()}, di.java:127) — the profile objects ({@code pG}/{@code py}/{@code po})
 *       are not recoverable here; kept as an inert placeholder group.</li>
 * </ul>
 *
 * <p>Behavior kept 1:1:
 * <ul>
 *   <li>Selection (di.java:342-389): every world entity that is a {@link PlayerEntity}, skipping
 *       the local player and friends ({@code rD.dml().aLp}, di.java:369). No spectator/alive
 *       filter exists in the original.</li>
 *   <li>Box (di.java:414-496, {@code afJ} fallback): {@code jg.bBB(entity, entity.getLerpedPos(delta))}
 *       — a box of {@code width}/{@code height} around the interpolated position (jg.java:1091-1093).</li>
 *   <li>Nametag gate (di.java:252-315 + 615-684): enabled → entity is a PlayerEntity → not the
 *       local player → not a friend → profile check. The profile half ({@code afK}: active
 *       {@code po} profile with {@code cOt()} set for the player's group) is approximated here by
 *       membership in the tracked set.</li>
 *   <li>Packet/tick subscribers (di.java:211-245) keep the original guard order; their bodies call
 *       the shared trackers {@code pv.cPH/cPJ} and {@code pl.cNJ/cNN/cNK}, which are not part of
 *       this port (documented gap).</li>
 * </ul>
 *
 * <p>Known divergences (documented, not guessed):
 * <ul>
 *   <li>The original draws screen-space rectangles through {@code pj.cNs(DrawContext, lc, entity,
 *       profiles, false)} in a HUD pass (di.java:405, {@code gk} event); this port has no HUD event
 *       and no profile renderer, so it draws a world-space box outline with the afJ box instead.</li>
 *   <li>{@code afD}/{@code afF}/{@code afG}/{@code afH}/{@code afI} (di.java:498-827) build a
 *       projected model-cuboid box using the vanilla renderer state; the afJ axis-aligned fallback
 *       is used here because the projection helper {@code jI.bIw} targets the screen-space profile
 *       renderer only.</li>
 *   <li>The profile group routing ({@code qQ.ddy} registry, di.java:398) and the profile colors
 *       are unrecovered; the outline color below is a placeholder.</li>
 * </ul>
 */
public class Esp2D extends Module {
	private final GroupSetting editEsp = register(new GroupSetting("edit_esp"));
	private final GroupSetting espProfiles = register(new GroupSetting("esp_profiles"));

	/** A tracked target for the overlay. */
	public record EspTarget(PlayerEntity player, Box box) {
	}

	private final List<EspTarget> targets = new ArrayList<>();

	public Esp2D() {
		super("2d_esp", "2D ESP", "Allows you to see targets through walls", ModuleCategory.VISUALS);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity self = client.player;
		if (client.world == null || self == null) {
			targets.clear();
			return;
		}
		targets.clear();
		// afB (di.java:342-389) — all world entities, players only, skip self and friends.
		for (Entity entity : client.world.getEntities()) {
			if (!(entity instanceof PlayerEntity player)) {
				continue;
			}
			if (player == self) {
				continue;
			}
			if (FriendsManager.isFriend(player.getGameProfile().name())) {
				continue;
			}
			targets.add(new EspTarget(player, fallbackBox(player, 1.0f)));
		}
	}

	/**
	 * afx (di.java:211-233): {@code if (bab()) pv.cPH(tk); pl.cNJ(tk);} — both trackers are
	 * shared helpers outside this port, so only the guard order is kept.
	 */
	@Subscribe
	private void onPacketReceive(PacketReceiveEvent event) {
		if (!isEnabled()) {
			return;
		}
	}

	@Subscribe
	private void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || targets.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			VertexConsumer lines = consumers.getBuffer(RenderLayers.lines());
			for (EspTarget target : targets) {
				// afC/afJ (di.java:769-801 / 414-496) — the afD model-cuboid pass is not available here.
				drawBoxOutline(entry, lines, fallbackBox(target.player(), tickDelta), 0xFF40FF70, 1.0f);
			}
		} finally {
			matrices.pop();
		}
	}

	@Override
	protected void onDisable() {
		targets.clear();
	}

	/**
	 * afJ (di.java:414-496) axis-aligned box: {@code jg.bBB} around the interpolated position
	 * (jg.java:1091-1093). The original additionally rejects screen-space boxes smaller than
	 * 1x1 px, which only applies to the projected profile pass.
	 */
	private static Box fallbackBox(PlayerEntity player, float tickDelta) {
		Vec3d pos = player.getLerpedPos(tickDelta);
		float halfWidth = player.getWidth() / 2.0f;
		return new Box(
				pos.x - halfWidth, pos.y, pos.z - halfWidth,
				pos.x + halfWidth, pos.y + player.getHeight(), pos.z + halfWidth);
	}

	/**
	 * Nametag gate afA (di.java:252-315) + afK (di.java:615-684). The original hides the vanilla
	 * plate when an active profile with the {@code cOt()} flag exists for the player's group; the
	 * profile registry is not recoverable here, so membership in the tracked set is used instead.
	 */
	public boolean shouldSuppressNametag(AbstractClientPlayerEntity player) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isEnabled() || client.player == null || player == client.player) {
			return false;
		}
		if (FriendsManager.isFriend(player.getGameProfile().name())) {
			return false;
		}
		for (EspTarget target : targets) {
			if (target.player() == player) {
				return true;
			}
		}
		return false;
	}

	/** Players currently tracked for the overlay. */
	public List<EspTarget> getTargets() {
		return List.copyOf(targets);
	}

	static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumer lines, Box box, int argb, float width) {
		line(entry, lines, box.minX, box.minY, box.minZ, box.maxX, box.minY, box.minZ, argb, width);
		line(entry, lines, box.maxX, box.minY, box.minZ, box.maxX, box.minY, box.maxZ, argb, width);
		line(entry, lines, box.maxX, box.minY, box.maxZ, box.minX, box.minY, box.maxZ, argb, width);
		line(entry, lines, box.minX, box.minY, box.maxZ, box.minX, box.minY, box.minZ, argb, width);
		line(entry, lines, box.minX, box.maxY, box.minZ, box.maxX, box.maxY, box.minZ, argb, width);
		line(entry, lines, box.maxX, box.maxY, box.minZ, box.maxX, box.maxY, box.maxZ, argb, width);
		line(entry, lines, box.maxX, box.maxY, box.maxZ, box.minX, box.maxY, box.maxZ, argb, width);
		line(entry, lines, box.minX, box.maxY, box.maxZ, box.minX, box.maxY, box.minZ, argb, width);
		line(entry, lines, box.minX, box.minY, box.minZ, box.minX, box.maxY, box.minZ, argb, width);
		line(entry, lines, box.maxX, box.minY, box.minZ, box.maxX, box.maxY, box.minZ, argb, width);
		line(entry, lines, box.maxX, box.minY, box.maxZ, box.maxX, box.maxY, box.maxZ, argb, width);
		line(entry, lines, box.minX, box.minY, box.maxZ, box.minX, box.maxY, box.maxZ, argb, width);
	}

	static void line(MatrixStack.Entry entry, VertexConsumer lines,
			double x1, double y1, double z1, double x2, double y2, double z2, int argb, float width) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		float dx = (float) (x2 - x1), dy = (float) (y2 - y1), dz = (float) (z2 - z1);
		lines.vertex(entry, (float) x1, (float) y1, (float) z1).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		lines.vertex(entry, (float) x2, (float) y2, (float) z2).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
