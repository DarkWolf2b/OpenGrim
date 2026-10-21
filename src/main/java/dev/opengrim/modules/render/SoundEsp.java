package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.sound.SoundInstance;
import net.minecraft.client.sound.SoundInstanceListener;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
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
 * <p>Framework divergences (labeled):
 * <ul>
 *   <li>[G] The original draws a projected HUD card (rounded rect + capitalized sound name,
 *       da$sv.java:201-214); this framework has no 2D overlay surface, so entries render as
 *       world-space marker boxes at the captured position.</li>
 *   <li>[G] Fade-in timing: the original {@code rk} animator duration ({@code xwXDE}) is
 *       runtime-decrypted and unrecovered; the port ramps the fade value at a fixed rate.</li>
 *   <li>[U] The sound-name regex {@code ySNLn} is runtime-decrypted; {@code '.'} is used as
 *       the separator substitute (plain {@code '_'} replacement is byte-verified).</li>
 * </ul>
 */
public class SoundEsp extends Module {
	private static final int MARKER_COLOR = 0x40FFE0;

	/** [G] Fade-in rate per tick; the original rk animator duration (xwXDE) is unrecovered. */
	private static final float FADE_IN_PER_TICK = 0.1f;

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

		public SoundSpot(SoundInstance sound, Vec3d pos, long startTime, String label) {
			this.sound = sound;
			this.pos = pos;
			this.startTime = startTime;
			this.label = label;
			this.evicted = false;
			this.fade = 0.0f;
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
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getSoundManager() != null) {
			client.getSoundManager().registerListener(soundListener);
		}
	}

	@Override
	public void onDisable() {
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

	@Override
	public void onTick() {
		// Fade-in only (da$sv.doj runs dhc/dhs per draw); expiry and removal live in the
		// draw pass below, mirroring abt/doj/dok.
		for (SoundSpot spot : spots) {
			if (!spot.evicted) {
				spot.fade = Math.min(1.0f, spot.fade + FADE_IN_PER_TICK);
			}
		}
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || spots.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
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
			Iterator<SoundSpot> iterator = spots.iterator();
			while (iterator.hasNext()) {
				SoundSpot spot = iterator.next();
				if (!spot.evicted && now - spot.startTime > lifetimeMs) {
					// da$sv.java:175-190: zUbCd = true; dhd(0.0f).
					spot.evicted = true;
					spot.fade = 0.0f;
				}
				if (spot.fade > 0.0f) {
					Box box = new Box(spot.pos.subtract(0.15, 0.15, 0.15), spot.pos.add(0.15, 0.15, 0.15));
					drawFilledBox(entry, consumers, box, withAlpha(MARKER_COLOR, (int) (0x50 * spot.fade)));
					drawBoxOutline(entry, consumers, box, withAlpha(MARKER_COLOR, (int) (0xFF * spot.fade)));
				}
				if (spot.evicted) {
					// dok(): fade == 0 && done -> remove.
					iterator.remove();
				}
			}
		} finally {
			matrices.pop();
		}
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

	private static int withAlpha(int rgb, int alpha) {
		return (alpha << 24) | (rgb & 0xFFFFFF);
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
