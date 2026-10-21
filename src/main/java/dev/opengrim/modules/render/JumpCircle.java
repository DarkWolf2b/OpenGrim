package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.List;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.StringSetting;

/**
 * Jump Circle (registry sixtwo.db, module id 89, category {@code gh.nOCvV}):
 * "Draws circle when you jump".
 *
 * <p>1:1 port of {@code analysis/decompiled/payload-decrypted/sixtwo/db.java}
 * (class-key 76154492359407, validated against the runtime dump — the
 * {@code (IJ)J} entry for call site 7659 decrypts to 1000):
 * <ul>
 * <li>Constructor/settings, db.java:96-198: {@code Circle Scale} (step .1,
 *     min .5, max 5, default 1), {@code Only Self} {@code WE(false)},
 *     {@code Circle Color} (theme default; port keeps white), {@code Circle
 *     Texture} Default(0)/Glowing(1)/Custom(2) (no {@code SO} = Default),
 *     {@code Texture URL} (max 2048, default ""). The original wires
 *     {@code ZQjnc.Vf(() -> GZUSi.SQ(2))} (db.java:197) — the URL row is only
 *     visible in Custom mode; ported through {@code Setting.setVisible} (the
 *     same pattern as AimAssist's Vf gates).</li>
 * <li>{@code abC(gM)} world-disconnect handler, db.java:524-528: clears the
 *     circle and tracked-player lists. {@code gM} is the empty disconnect
 *     event (payload-named-cfr/sixtwo/gM.java; dispatched from
 *     ClientWorldEventBridgeMixin {@code offline$disconnect}); our framework
 *     has no disconnect event, so the lists are cleared when the client world
 *     is null on tick (same approximation as TrapEsp).</li>
 * <li>{@code abG()} texture management, db.java:548-636 (bytecode-verified):
 *     throttled by a 1000 ms stopwatch ({@code hvsLj = mT.cpA()}, initial
 *     last-reset 0); Custom (index 2) reads {@code Texture URL} — unusable URL
 *     ({@code jd.bAm}) or unchanged URL just resets the throttle, a changed URL
 *     starts {@code oe.cCd} (callback abH sets the texture, remembers the URL
 *     and resets); Default/Glowing set the built-in texture
 *     {@code ob.cBv("circle")} / {@code ob.cBv("circle_glow")} and reset.
 *     Decrypted call sites: 27709 → "circle", 11427 → "circle_glow".</li>
 * <li>{@code abF()} player tracking, db.java:638-824: drop tracked players
 *     that are gone/removed/other-world/not in {@code world.getPlayers()};
 *     add on-ground players not yet tracked when {@code p == self ||
 *     !Only Self}; every tracked player that leaves the ground spawns a
 *     {@code db$sw} circle at {@code (x, floor(y) + 0.001f, z)} and stops being
 *     tracked; finished circles whose shrink animation reached 0 are removed.</li>
 * <li>{@code abD(gH.th)} tick, db.java:974-999: enabled guard, then abG, abF.</li>
 * <li>{@code abE(go.sX)} render, db.java:844-971: enabled/empty/texture-null
 *     guards; per circle (reverse order) — when the per-circle 1000 ms stopwatch
 *     ({@code mT.cpz()}, reset at spawn; call site 31128 → 1000) elapses, switch
 *     the animation easing to {@code rj.AYqck} (easeInBack, rj.java:418/643-645)
 *     and mark finished; {@code dhc(!finished)} animates the radius progress
 *     toward 1 while alive and back to 0 once finished (initial easing
 *     {@code rj.XzDkv} = easeOutBack, rj.java:419/527-532; {@code rk} tween
 *     rk.java:54-135/335-362); radius = Circle Scale × progress; quad from
 *     −radius to +radius after translate-to-circle and X-90° rotation.</li>
 * </ul>
 *
 * <p>Framework ports / remaining gaps (all labeled):
 * <ul>
 * <li>[G] the {@code db$sw} animation duration {@code yqWBV} is encrypted with
 *     the db$sw class key (native {@code gb.aYR}, not derivable) and absent from
 *     the runtime dump; {@value #ANIM_MS} ms is a high-probability guess
 *     (matching the {@code new rk(400).dhs(rj.XzDkv)} pattern in cO/do).</li>
 * <li>[G] {@code ob.cBv} assets are generated procedurally
 *     ({@link CircleTextures}); {@code jd.bAm} is approximated; the textured
 *     layer (original {@code XSRvt} batch + {@code kR}) is ported to
 *     {@code RenderLayers.entityTranslucent} with full-bright lighting.</li>
 * <li>Trace 2026-10-17: YO 1× (disable only); no tick/render events captured.</li>
 * </ul>
 */
public class JumpCircle extends Module {
	/** [G] db$sw {@code yqWBV} unrecovered — high-probability guess. */
	private static final int ANIM_MS = 400;
	/** db.java:561/634 and call site 31128 — both throttle/circle timers = 1000 ms. */
	private static final long CIRCLE_LIFETIME_MS = 1000L;
	private static final int FULL_BRIGHT = 0xF000F0;

	private final DoubleSetting circleScale = register(new DoubleSetting("circle_scale", 0.1, 0.5, 5.0, 1.0, null));
	private final BoolSetting onlySelf = register(new BoolSetting("only_self", false));
	private final ColorSetting color = register(new ColorSetting("circle_color", 0xFFFFFFFF, false));
	private final ModeSetting circleTexture = register(new ModeSetting("circle_texture",
			List.of("Default", "Glowing", "Custom"), "Default"));
	private final StringSetting textureUrl = register(new StringSetting("texture_url", ""));

	/** mqXLF: current texture identifier (null = not loaded yet). */
	private Identifier texture;
	/** OlDHF: URL the current custom texture was loaded from (default ""). */
	private String loadedUrl = "";
	/** hvsLj = mT.cpA(): stopwatch whose last-reset starts at 0. */
	private long textureTimerMs;

	/** CdBII: spawned circles (db$sw). */
	private final List<Circle> circles = new ArrayList<>();
	/** RbHqK: players currently standing on the ground. */
	private final List<PlayerEntity> trackedPlayers = new ArrayList<>();

	/** An active circle drawn at a recorded jump takeoff point (db$sw). */
	public static final class Circle {
		private final Vec3d pos;
		private final Tween tween = new Tween(ANIM_MS);
		private final long spawnMs = System.currentTimeMillis();
		private boolean finished;

		Circle(Vec3d pos) {
			this.pos = pos;
			this.tween.setEasing(Tween.EASE_OUT_BACK);
		}

		public Vec3d getPos() {
			return pos;
		}

		public float getProgress() {
			return tween.value();
		}

		public boolean isFinished() {
			return finished;
		}
	}

	public JumpCircle() {
		super("jump_circle", "Jump Circle", "Draws circle when you jump", ModuleCategory.VISUALS);
		textureUrl.setVisible(false); // default mode is Default, not Custom
	}

	/**
	 * {@code abD(gH.th)} — db.java:974-999: enabled guard, abG, abF. The
	 * {@code gM} disconnect clear (db.java:524-528) is folded in as the
	 * world-null check (no disconnect event in this framework).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isEnabled()) {
			return;
		}
		// ZQjnc.Vf(() -> GZUSi.SQ(2)) — db.java:197: the URL row is only
		// visible in Custom mode (Setting.setVisible mirrors cB.Vf).
		textureUrl.setVisible("Custom".equals(circleTexture.getValue()));
		if (client.world == null) {
			circles.clear();
			trackedPlayers.clear();
			return;
		}
		updateTexture();
		updatePlayers(client);
	}

	/** {@code YO()} — db.java:1001-1006: disable clears both lists. */
	@Override
	protected void onDisable() {
		circles.clear();
		trackedPlayers.clear();
	}

	/** {@code abG()} — db.java:548-636. */
	private void updateTexture() {
		if (!textureTimerElapsed(CIRCLE_LIFETIME_MS)) {
			return;
		}
		if ("Custom".equals(circleTexture.getValue())) {
			String url = textureUrl.getValue();
			if (!CircleTextures.validUrl(url)) {
				resetTextureTimer();
				return;
			}
			if (url.equals(loadedUrl)) {
				resetTextureTimer();
				return;
			}
			CircleTextures.fetch(url, "circle_custom", id -> {
				texture = id;
				loadedUrl = url;
				resetTextureTimer();
			});
			return;
		}
		texture = CircleTextures.builtin("Default".equals(circleTexture.getValue()) ? "circle" : "circle_glow");
		resetTextureTimer();
	}

	/** {@code abF()} — db.java:638-824. */
	private void updatePlayers(MinecraftClient client) {
		ClientPlayerEntity self = client.player;
		// 1) drop tracked players that are gone/removed/other-world.
		trackedPlayers.removeIf(player -> player == null
				|| player.isRemoved()
				|| player.getEntityWorld() != client.world
				|| !client.world.getPlayers().contains(player));
		// 2) track every on-ground player (self always, others unless Only Self).
		for (PlayerEntity player : client.world.getPlayers()) {
			if (trackedPlayers.contains(player)) {
				continue;
			}
			if (!player.isOnGround()) {
				continue;
			}
			if (player != self && onlySelf.getValue()) {
				continue;
			}
			trackedPlayers.add(player);
		}
		// 3) a tracked player leaving the ground spawns a circle and stops
		//    being tracked.
		trackedPlayers.removeIf(player -> {
			if (player.isOnGround()) {
				return false;
			}
			circles.add(new Circle(new Vec3d(player.getX(), Math.floor(player.getY()) + (double) 0.001f,
					player.getZ())));
			return true;
		});
		// 4) finished circles whose shrink animation reached 0 are removed.
		circles.removeIf(circle -> circle.finished && circle.tween.value() <= 0.0f);
	}

	/** {@code abE(go.sX)} — db.java:844-971. */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		if (!isEnabled() || circles.isEmpty() || texture == null) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		Vec3d cam = event.camera().getCameraPos();
		MatrixStack stack = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		float scale = circleScale.getValue().floatValue();
		int argb = color.getValue();
		for (int i = circles.size() - 1; i >= 0; --i) {
			Circle circle = circles.get(i);
			if (!circle.finished && System.currentTimeMillis() - circle.spawnMs >= CIRCLE_LIFETIME_MS) {
				circle.tween.setEasing(Tween.EASE_IN_BACK);
				circle.finished = true;
			}
			circle.tween.animateTo(circle.finished ? 0.0f : 1.0f);
			float radius = scale * circle.tween.value();
			stack.push();
			try {
				stack.translate(circle.pos.x - cam.x, circle.pos.y - cam.y, circle.pos.z - cam.z);
				stack.multiply(RotationAxis.POSITIVE_X.rotationDegrees(90.0f));
				MatrixStack.Entry entry = stack.peek();
				VertexConsumer vc = consumers.getBuffer(RenderLayers.entityTranslucent(texture));
				float size = radius * 2.0f;
				quadVertex(vc, entry, -radius, -radius + size, argb, 0.0f, 1.0f);
				quadVertex(vc, entry, -radius + size, -radius + size, argb, 1.0f, 1.0f);
				quadVertex(vc, entry, -radius + size, -radius, argb, 1.0f, 0.0f);
				quadVertex(vc, entry, -radius, -radius, argb, 0.0f, 0.0f);
			} finally {
				stack.pop();
			}
		}
	}

	private static void quadVertex(VertexConsumer vc, MatrixStack.Entry entry, float x, float y, int argb,
			float u, float v) {
		vc.vertex(entry, x, y, 0.0f)
				.color(argb)
				.texture(u, v)
				.overlay(OverlayTexture.DEFAULT_UV)
				.light(FULL_BRIGHT)
				.normal(entry, 0.0f, 0.0f, 1.0f);
	}

	/** mT.cpC(long): now − last − ms > 0 (mT.java:60-81). */
	private boolean textureTimerElapsed(long ms) {
		return System.currentTimeMillis() - textureTimerMs - ms > 0L;
	}

	/** mT.cpB(): last = now (mT.java:118-120). */
	private void resetTextureTimer() {
		textureTimerMs = System.currentTimeMillis();
	}

	public List<Circle> getCircles() {
		return List.copyOf(circles);
	}

	public Identifier getTexture() {
		return texture;
	}

	/**
	 * Port of {@code rk} (rk.java:54-135 dhd, 335-341 dhj, 339-345 dhc,
	 * 362-364 dhs) with the two easing functions db uses: {@code rj.XzDkv}
	 * (easeOutBack, rj.java:527-532) and {@code rj.AYqck} (easeInBack,
	 * rj.java:643-645), both s = 1.70158.
	 */
	private static final class Tween {
		static final int EASE_OUT_BACK = 0;
		static final int EASE_IN_BACK = 1;

		private final int durationMs;
		private float current;
		private float from;
		private float to;
		private long startMs;
		private boolean atRest = true;
		private int easing = EASE_OUT_BACK;

		Tween(int durationMs) {
			this.durationMs = durationMs;
		}

		void setEasing(int easing) {
			this.easing = easing;
		}

		float value() {
			return current;
		}

		/** rk.dhc(boolean) → rk.dhd(target) (rk.java:339-345, 54-135). */
		void animateTo(float target) {
			long now = System.currentTimeMillis();
			if (target != to) {
				from = current;
				to = target;
				startMs = now;
				atRest = false;
			}
			if (durationMs <= 0) {
				current = to;
				atRest = true;
				return;
			}
			long elapsed = now - startMs;
			if (elapsed >= durationMs) {
				current = to;
				atRest = true;
				return;
			}
			float t = (float) elapsed / (float) durationMs;
			float eased = easing == EASE_OUT_BACK ? easeOutBack(t) : easeInBack(t);
			current = from + (to - from) * eased;
		}

		private static float easeOutBack(float t) {
			float f = t - 1.0f;
			return f * f * (2.70158f * f + 1.70158f) + 1.0f;
		}

		private static float easeInBack(float t) {
			return t * t * (2.70158f * t - 1.70158f);
		}
	}
}
