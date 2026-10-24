package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;

import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.InputUtil;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.text.Text;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Quaternionf;
import org.joml.Vector4f;

import dev.opengrim.event.Subscribe;
import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.utility.AntiBot;
import dev.opengrim.render.WorldProjection;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Logout Spots (registry sixtwo.dp): "Renders boxes at where player logged out".
 * Module id 99, category gh.nOCvV.
 *
 * <p>Port of sixtwo.dp (analysis/decompiled/casesafe/payload-decrypted/sixtwo/dp.java;
 * bytecode cross-checked via javap of jar-casesafe/sixtwo/dp.class):
 * constructor 110-242, {@code aaj()} on-enable 368-394, {@code ahx()} world-snapshot
 * rebuild 407-433, {@code ahs(hu)} entity-add/re-login 435-532,
 * {@code aht(gH.th)} tick rescan 534-625, {@code ahv(gk)} HUD labels 627-708,
 * {@code ahu(go.sX)} world render 710-799, {@code ahw(gA)} Clear Spots key 801-846,
 * {@code ahr(gM)} clear 859-863.
 *
 * <p>Recovered semantics ported here:
 * <ul>
 *   <li>Settings (dp.java:113-236): Refresh Timer 1/0-100/5 " s", Login
 *       Notification false, Position Render Mode Simple/Textured (default
 *       Simple), Position Color white ({@code .Uf(mG.hoGuU).Uh(false)} — no
 *       alpha), Height 0.1/0.1-3/2.8 " blocks", Background false, Clear Spots
 *       int default -999.</li>
 *   <li>Tick rescan {@code aht}: throttle {@code Refresh Timer.VC() * 20} ticks
 *       through the mT timer (dp.java:552-555), then rescan <b>only when the
 *       tab-list size changed</b> (dp.java:569): world players whose UUID is
 *       absent from the tab-list profile-id set and who are not AntiBot-flagged
 *       ({@code rD.dml().aLp}, dp.java:595-614 — AntiBot verdict, not friends)
 *       are recorded; the tab snapshot is refreshed and the world snapshot
 *       rebuilt (dp.java:619-621).</li>
 *   <li>Clear Spots key {@code ahw} (dp.java:801-846): GLFW action 1 with the
 *       key code equal to the Clear Spots value clears FlxVs + JTVMZ.</li>
 * </ul>
 *
 * <p>Approximations / gaps (documented in analysis/docs/PARITY.md):
 * <ul>
 *   <li>[G] mT tick quantum {@code fCqJQ} is DES-encrypted (mT_.class): read as
 *       50 ms so that {@code VC() * 20} ticks equals the seconds setting.</li>
 *   <li>[U] {@code ahs(hu)} entity-add event has no OpenGrim counterpart; the
 *       re-login removal + Login Notification is detected per tick against the
 *       world player list (UUID-based).</li>
 *   <li>[U] {@code ahv(gk)} HUD name labels: no 2D overlay/projection surface in
 *       this framework (cf. FireworkSpots).</li>
 *   <li>[N] {@code ahu(go.sX)} renders a player-model hologram through the
 *       {@code kt} helper (PlayerEntityModel + cape/elytra, helper class out of
 *       audit scope); a box at the logout position (the registry description)
 *       stands in, with the recovered frustum gate {@code jJ.bIB} and the
 *       Height/Background/Position Color settings.</li>
 *   <li>[U] {@code ahr(gM)} bare marker event has no counterpart in the event
 *       bus (cf. ShieldBlock/AirStuck notes); nothing clears the spot lists
 *       until the next {@code aaj()} on-enable or Clear Spots.</li>
 * </ul>
 */
public class LogoutSpots extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "logout_spots_hud");

	private final DoubleSetting refreshTimer = register(new DoubleSetting("refresh_timer", 1.0, 0.0, 100.0, 5.0, " s"));
	private final BoolSetting loginNotification = register(new BoolSetting("login_notification", false));
	private final ModeSetting positionRenderMode = register(new ModeSetting("position_render_mode",
			List.of("Simple", "Textured"), "Simple"));
	// dp.java:203: .Uf(mG.hoGuU).Uh(false) — white, no alpha.
	private final ColorSetting positionColor = register(new ColorSetting("position_color", 0xFFFFFFFF, false));
	private final DoubleSetting height = register(new DoubleSetting("height", 0.1, 0.1, 3.0, 2.8, " blocks"));
	private final BoolSetting background = register(new BoolSetting("background", false));
	private final KeybindSetting clearSpots = register(new KeybindSetting("clear_spots", -999));

	/** kt snapshot stand-in: UUID, name, captured logout position. */
	public record LogoutSpot(UUID uuid, String name, Vec3d pos) {
	}

	/** FlxVs: players recorded as logged out. */
	private final List<AbstractClientPlayerEntity> loggedOut = new ArrayList<>();
	/** mBTku: world player snapshot rebuilt by ahx. */
	private final List<AbstractClientPlayerEntity> worldPlayers = new ArrayList<>();
	/** KrDsH: last tab-list snapshot. */
	private final List<PlayerListEntry> tabSnapshot = new ArrayList<>();
	/** JTVMZ: logout spot per UUID. */
	private final Map<UUID, LogoutSpot> spots = new HashMap<>();
	/** UUIDs present in the world on the previous tick (entity-add stand-in). */
	private final Set<UUID> lastPresent = new HashSet<>();
	/** YUykz: refresh throttle (mT, started at construction — mT(true) cpB). */
	private long lastRefreshMs = System.currentTimeMillis();

	public LogoutSpots() {
		super("logout_spots", "Logout Spots", "Renders boxes at where player logged out", ModuleCategory.VISUALS);
	}

	@Override
	public void onEnable() {
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
		// aaj (dp.java:368-394): rebuild the world snapshot, seed the tab-list
		// snapshot, clear recorded spots.
		rebuildWorldPlayers();
		ClientPlayNetworkHandler handler = MinecraftClient.getInstance().getNetworkHandler();
		if (handler != null) {
			tabSnapshot.addAll(handler.getPlayerList());
		}
		loggedOut.clear();
		spots.clear();
	}

	@Override
	protected void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
	}

	@Override
	public void onTick() {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}

		// ahs(hu) stand-in: the entity-add event has no OpenGrim counterpart, so
		// a player re-entering the world (absent -> present transition) clears
		// the spot and dispatches the optional login notification
		// (dp.java:435-530).
		Set<UUID> presentNow = new HashSet<>();
		for (AbstractClientPlayerEntity player : client.world.getPlayers()) {
			UUID uuid = player.getUuid();
			presentNow.add(uuid);
			if (!lastPresent.contains(uuid) && spots.containsKey(uuid)) {
				loggedOut.removeIf(p -> p.getUuid().equals(uuid));
				spots.remove(uuid);
				if (loginNotification.getValue()) {
					client.inGameHud.getChatHud().addMessage(
							Text.literal(player.getGameProfile().name() + " logged in"));
				}
			}
		}
		lastPresent.clear();
		lastPresent.addAll(presentNow);

		// ahw(gA) stand-in: key event surface is unavailable, so the Clear
		// Spots key is polled (dp.java:801-846 clears FlxVs + JTVMZ).
		if (clearSpots.isPressed()) {
			clearSpots();
		}

		// aht (dp.java:534-625): refresh throttle, then rescan only when the
		// tab-list size changed.
		ClientPlayNetworkHandler handler = client.getNetworkHandler();
		int intervalTicks = (int) refreshTimer.getValue().doubleValue() * 20;
		if (handler == null || System.currentTimeMillis() - lastRefreshMs <= intervalTicks * 50L) {
			return;
		}
		Collection<PlayerListEntry> tabList = handler.getPlayerList();
		if (tabList.size() != tabSnapshot.size()) {
			Set<UUID> tabUuids = new HashSet<>();
			for (PlayerListEntry entry : tabList) {
				tabUuids.add(entry.getProfile().id());
			}
			for (AbstractClientPlayerEntity player : worldPlayers) {
				if (tabUuids.contains(player.getUuid()) || isBot(player)) {
					continue;
				}
				loggedOut.add(player);
				spots.computeIfAbsent(player.getUuid(), id -> new LogoutSpot(id,
						player.getGameProfile().name(), player.getEntityPos()));
			}
			tabSnapshot.clear();
			tabSnapshot.addAll(tabList);
			rebuildWorldPlayers();
		}
		lastRefreshMs = System.currentTimeMillis();
	}

	/** ahx (dp.java:407-433): rebuild the world-player snapshot from world entities. */
	private void rebuildWorldPlayers() {
		worldPlayers.clear();
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return;
		}
		for (var entity : client.world.getEntities()) {
			if (entity instanceof AbstractClientPlayerEntity player) {
				worldPlayers.add(player);
			}
		}
	}

	/** AntiBot verdict (rD.dml().aLp, dp.java:476/602). */
	private static boolean isBot(AbstractClientPlayerEntity player) {
		Module module = ModuleManager.get().byId("anti_bot");
		return module instanceof AntiBot antiBot && antiBot.isBot(player);
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || spots.isEmpty()) {
			return;
		}
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}

		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		Frustum frustum = client.worldRenderer.getCapturedFrustum();

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();

			int argb = positionColor.getValue();
			double boxH = height.getValue().doubleValue();

			for (LogoutSpot spot : spots.values()) {
				Vec3d p = spot.pos();
				Box box = new Box(p.x, p.y, p.z, p.x + 1.0, p.y + boxH, p.z + 1.0);
				// ahu (dp.java:761-765): jJ.bIB entity-box frustum gate.
				if (frustum != null && !frustum.isVisible(box)) {
					continue;
				}

				if (background.getValue()) {
					int fillArgb = (argb & 0x00FFFFFF) | 0x30000000;
					drawFilledBox(entry, consumers, box, fillArgb);
				}
				drawBoxOutline(entry, consumers, box, argb);
			}
		} finally {
			matrices.pop();
		}
	}

	/**
	 * {@code ahv(gk)} (dp.java:627-708): one projected name label per logged-out
	 * player at {@code entityPos + Height}, medium MSDF 9.0, theme text color,
	 * optional {@code lC.ccW} rounded background. The rebuild's HUD element is
	 * the same {@link DrawContext} surface as {@code gk.baT()}.
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
		LabelText text = new LabelText(draw, client.textRenderer);
		Camera camera = client.gameRenderer.getCamera();
		Vec3d cameraPos = camera.getCameraPos();
		// View rotation = conjugate of Camera#getRotation (GameRenderer.project:844-845).
		Matrix4f rotation = new Matrix4f().rotation(camera.getRotation().conjugate(new Quaternionf()));
		Matrix4f projection = WorldProjection.get(client);
		int width = ctx.getScaledWindowWidth();
		int heightPx = ctx.getScaledWindowHeight();
		int color = Theme.get().text().argb();
		double labelHeight = height.getValue().doubleValue();
		float lineHeight = 0.7f * 9.0f;

		for (LogoutSpot spot : spots.values()) {
			Vec3d pos = spot.pos();
			Vec2f screen = project(new Vec3d(pos.x, pos.y + labelHeight, pos.z), cameraPos, rotation,
					projection, width, heightPx);
			if (screen == null) {
				continue;
			}
			String name = spot.name();
			float textW = text.width(name, 9.0f);
			float boxW = textW + 8.0f;
			float boxH = lineHeight + 4.0f;
			float textX = screen.x - textW / 2.0f;
			float textY = screen.y + (lineHeight - boxH) / 2.0f;
			if (background.getValue()) {
				drawCard(draw, screen.x - boxW / 2.0f, screen.y, boxW, boxH);
			}
			text.draw(name, textX, textY, 9.0f, color);
		}
	}

	/** lC#ccW: Blur backdrop with the Solid branch fallback (Background setting). */
	private static void drawCard(GuiDraw draw, float x, float y, float width, float height) {
		if (draw.blurredBackdrop(x, y, width, height, 3.0f, ColorF.WHITE, 0.0f, 1.0f)) {
			return;
		}
		Theme theme = Theme.get();
		draw.fillRounded(x, y, width, height, 3.0f,
				theme.background().withAlphaScale(theme.backgroundStyle().opacity));
	}

	/** {@code jI.bIw}: camera-relative position -> NDC -> screen pixels; null behind the camera. */
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

	/** lE.WTzbi = medium MSDF, lj.bYw width, kJ.bUe baseline (cf. Nametags TagRenderer). */
	private static final class LabelText {
		private final GuiDraw draw;
		private final TextRenderer vanilla;
		private final MsdfFont msdf;

		LabelText(GuiDraw draw, TextRenderer vanilla) {
			this.draw = draw;
			this.vanilla = vanilla;
			this.msdf = MsdfFont.of(MsdfFont.MEDIUM);
		}

		float width(String text, float size) {
			if (text == null || text.isEmpty()) {
				return 0.0f;
			}
			if (msdf == null) {
				return vanilla.getWidth(text) * (size / 9.0f);
			}
			float total = 0.0f;
			for (int i = 0; i < text.length(); i++) {
				total += msdf.advance(text.charAt(i), size) + 0.25f;
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
			float glyphTop = topY + 0.7f * size - msdf.ascent(size);
			float pen = x;
			for (int i = 0; i < text.length(); i++) {
				char codepoint = text.charAt(i);
				if (msdf.has(codepoint)) {
					draw.text(msdf, String.valueOf(codepoint), pen, glyphTop, size, color);
				}
				pen += msdf.advance(codepoint, size) + 0.025f * size;
			}
		}
	}

	/** Clear Spots action (dp.java:838-841 clears FlxVs + JTVMZ). */
	public void clearSpots() {
		loggedOut.clear();
		spots.clear();
	}

	public Map<UUID, LogoutSpot> getSpots() {
		return Map.copyOf(spots);
	}

	public double getBoxHeight() {
		return height.getValue().doubleValue();
	}

	public boolean isBackground() {
		return background.getValue();
	}

	public String getRenderMode() {
		return positionRenderMode.getValue();
	}

	public int getPositionColor() {
		return positionColor.getValue();
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

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}
}
