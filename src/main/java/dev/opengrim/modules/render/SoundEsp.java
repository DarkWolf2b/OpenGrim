package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.client.sound.SoundInstance;
import net.minecraft.client.sound.SoundInstanceListener;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Vector4f;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;

/**
 * Sound ESP (registry sixtwo.da): "Highlights sounds".
 *
 * <p>Decompile citations:
 * <ul>
 *   <li>{@code analysis/decompiled/payload-named-cfr/sixtwo/da.java:60-117} (constructor, settings, module id 85)</li>
 *   <li>{@code analysis/decompiled/payload-named-cfr/sixtwo/da.java:243-302} ({@code abs} sound-played event handler)</li>
 *   <li>{@code analysis/decompiled/payload-named-cfr/sixtwo/da.java:377-405} ({@code abt} render update and cleanup handler)</li>
 *   <li>{@code analysis/decompiled/payload-named-cfr/sixtwo/da.java:466-469} ({@code YO} disable callback)</li>
 *   <li>{@code analysis/decompiled/payload-named-cfr/sixtwo/da$sv.java:36-255} (inner entry class, timer, fade animator, card projection)</li>
 *   <li>{@code analysis/specs/handlers/da.md} (spec)</li>
 * </ul>
 *
 * <p>Tracks sound positions from played sound instances. Entries exceeding {@code Max Distance}
 * are ignored. Entries beyond {@code Quantity Limit} get the original's forced eviction
 * ({@code Taibw.dhd(0.0f)} + {@code zUbCd = true}, da.java:278-286) so they disappear at the
 * next draw pass; entries past {@code Time Before Disappear} seconds expire inside the draw
 * pass ({@code doj}, da$sv.java:175-190) and are removed by {@code dok()} (fade == 0 && done)
 * in that same pass.
 *
 * <p>Framework mapping:
 * <ul>
 *   <li>{@code abt(gk)} is a HUD pass; {@code HudElementRegistry} supplies the same
 *       {@link DrawContext}. The card reproduces {@code da$sv.doj}: medium MSDF 7.0,
 *       width = text width + 10, height = line height + 10, radius 7
 *       ({@code lC.ccU} = {@code ccW(..., ld.all(7), 7)}), scale
 *       {@code 0.5+0.5·fade}, live theme text color, {@code jI.bIw} projection.</li>
 *   <li>[G] The {@code rk} fade duration ({@code xwXDE}) is DES; 300 ms is used.
 *       Expiry reproduces the original quirk: it snaps the fade to 0 (the
 *       Quantity Limit path animates out instead).</li>
 *   <li>[U] The sound-name regex {@code ySNLn} is runtime-decrypted; {@code '.'} is used as
 *       the separator substitute (plain {@code '_'} replacement is byte-verified).</li>
 * </ul>
 */
public class SoundEsp extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "sound_esp_hud");
	/** [G] da$sv.xwXDE rk fade duration (DES): 300 ms, the repo's standard rk duration. */
	private static final int FADE_MS = 300;

	private final DoubleSetting timeBeforeDisappear = register(new DoubleSetting("time_before_disappear", 1.0, 1.0, 15.0, 8.0, " s"));
	private final DoubleSetting quantityLimit = register(new DoubleSetting("quantity_limit", 1.0, 1.0, 100.0, 10.0, null));
	private final DoubleSetting maxDistance = register(new DoubleSetting("max_distance", 1.0, 1.0, 128.0, 32.0, " blocks"));

	/** A recorded sound entry matching original da$sv. */
	public static class SoundSpot {
		private final SoundInstance sound;
		private final Vec3d pos;
		private final long startTime;
		private final String label;
		private boolean evicted;
		private float fade;
		private float fadeStart;
		private float fadeTarget;
		private long fadeStartMs;

		public SoundSpot(SoundInstance sound, Vec3d pos, long startTime, String label) {
			this.sound = sound;
			this.pos = pos;
			this.startTime = startTime;
			this.label = label;
			this.evicted = false;
			this.fade = 0.0f;
		}

		/** da$sv.doj: rk target 1 alive / 0 evicted, XzDkv/AYqck easing. */
		private float updateFade() {
			float target = evicted ? 0.0f : 1.0f;
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
				fade = fadeStart + (fadeTarget - fadeStart) * ease(t, !evicted);
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

		/** da$sv.dok: fade == 0 and evicted. */
		private boolean dead() {
			return evicted && fade <= 0.0f;
		}

		public SoundInstance sound() {
			return sound;
		}

		public Vec3d pos() {
			return pos;
		}

		public long startTime() {
			return startTime;
		}

		public String label() {
			return label;
		}

		public boolean isEvicted() {
			return evicted;
		}

		public float fade() {
			return fade;
		}
	}

	private final List<SoundSpot> spots = new ArrayList<>();
	private final SoundInstanceListener soundListener = (sound, soundSet, range) -> onSound(sound);

	public SoundEsp() {
		super("sound_esp", "Sound ESP", "Highlights sounds", ModuleCategory.VISUALS);
	}

	@Override
	public void onEnable() {
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getSoundManager() != null) {
			client.getSoundManager().registerListener(soundListener);
		}
	}

	@Override
	public void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getSoundManager() != null) {
			client.getSoundManager().unregisterListener(soundListener);
		}
		spots.clear();
	}

	/**
	 * Sound played handler, port of da#abs (da.java:243-302).
	 */
	public void onSound(SoundInstance sound) {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}
		Vec3d pos = new Vec3d(sound.getX(), sound.getY(), sound.getZ());
		double dist = client.player.getEntityPos().distanceTo(pos);
		if (dist > maxDistance.getValue().floatValue()) {
			return;
		}
		String label = formatSoundName(sound.getId().getPath());
		spots.add(new SoundSpot(sound, pos, System.currentTimeMillis(), label));
		int excess = spots.size() - (int) quantityLimit.getValue().doubleValue();
		if (excess > 0) {
			for (int i = 0; i < excess; i++) {
				// da.java:278-286: dhd(0.0f) + zUbCd = true on the oldest entries.
				SoundSpot spot = spots.get(i);
				spot.evicted = true;
				spot.fade = 0.0f;
			}
		}
	}

	/**
	 * {@code abt(gk)} + {@code da$sv.doj}: HUD card pass. Card = text width + 10 by
	 * line height + 10, radius 7 ({@code lC.ccU} = {@code ccW(..., ld.all(7), 7)}),
	 * scale {@code 0.5+0.5·fade}, medium MSDF 7.0, theme text color.
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
		MsdfFont medium = MsdfFont.of(MsdfFont.MEDIUM);
		Camera camera = client.gameRenderer.getCamera();
		Vec3d cameraPos = camera.getCameraPos();
		Matrix4f rotation = new Matrix4f().rotation(camera.getRotation());
		float fov = client.options.getFov().getValue().floatValue();
		Matrix4f projection = client.gameRenderer.getBasicProjectionMatrix(fov);
		int width = ctx.getScaledWindowWidth();
		int height = ctx.getScaledWindowHeight();
		long lifetimeMs = (long) (int) timeBeforeDisappear.getValue().doubleValue() * 1000L;
		long now = System.currentTimeMillis();
		int color = Theme.get().text().argb();

		Iterator<SoundSpot> iterator = spots.iterator();
		while (iterator.hasNext()) {
			SoundSpot spot = iterator.next();
			if (!spot.evicted && now - spot.startTime > lifetimeMs) {
				spot.evicted = true;
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
			String label = formatSoundName(spot.sound.getId().getPath());
			float textW = textWidth(medium, label, 7.0f, client);
			float cardW = textW + 10.0f;
			float cardH = 0.7f * 7.0f + 10.0f;
			float x = screen.x - cardW / 2.0f;
			float y = screen.y;
			float centreX = x + cardW / 2.0f;
			float centreY = y + cardH / 2.0f;
			float scale = 0.5f + 0.5f * fade;

			ctx.getMatrices().pushMatrix();
			try {
				ctx.getMatrices().translate(centreX, centreY);
				ctx.getMatrices().scale(scale, scale);
				ctx.getMatrices().translate(-centreX, -centreY);
				drawCard(draw, x, y, cardW, cardH, fade);
				drawText(draw, medium, client, label, x + (cardW - textW) / 2.0f,
						y + (cardH - 0.7f * 7.0f) / 2.0f, 7.0f, color);
			} finally {
				ctx.getMatrices().popMatrix();
			}
		}
	}

	/** lC#ccU = ccW with radius 7 / smoothness 7. */
	private static void drawCard(GuiDraw draw, float x, float y, float width, float height, float fade) {
		if (draw.blurredBackdrop(x, y, width, height, 7.0f, ColorF.WHITE, 0.0f, fade)) {
			return;
		}
		Theme theme = Theme.get();
		draw.fillRounded(x, y, width, height, 7.0f,
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

	public List<SoundSpot> getSpots() {
		return new ArrayList<>(spots);
	}

	public long getTicksLeft(SoundSpot spot) {
		long lifetimeMs = timeBeforeDisappear.getValue().longValue() * 1000L;
		long elapsed = System.currentTimeMillis() - spot.startTime;
		return Math.max(0L, (lifetimeMs - elapsed) / 50L);
	}

	private static String formatSoundName(String path) {
		String spaced = path.replace('.', ' ').replace('_', ' ');
		if (spaced.isEmpty()) {
			return spaced;
		}
		return Character.toUpperCase(spaced.charAt(0)) + spaced.substring(1);
	}
}
