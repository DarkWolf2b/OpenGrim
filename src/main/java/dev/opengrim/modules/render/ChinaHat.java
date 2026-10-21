package dev.opengrim.modules.render;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
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
 * China Hat (registry sixtwo.cS): "Renders china hat on your head".
 *
 * <p>parity: settings 1:1; behavior ported from the shell renderer pair
 * {@code qD} (player FeatureRenderer) + {@code ky.bSd} (cone draw), both plain
 * Java in the corpus.
 *
 * <p>Evidence:
 * <ul>
 *   <li>cS settings: analysis/decompiled/payload-named-cfr/sixtwo/cS.java:43-83
 *       constructor; names/values re-derived from the decrypted constant pool
 *       (analysis/decrypted/full-dump.jsonl, {@code sixtwo.cS} entries:
 *       group "Show For" [83,104,111,119,32,70,111,114], "Self"
 *       [83,101,108,102] default-on via {@code cw.Tz()}, "Friends"
 *       [70,114,105,101,110,100,115] default-off, "Color"
 *       {@code .Uf(rD.dlM().bjG().bis())}, numeric "Gradient Speed"
 *       [71,114,97,100,105,101,110,116,32,83,112,101,101,100]
 *       {@code .Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0)}). Trace 2026-10-17: class
 *       load only (never enabled in the tour).</li>
 *   <li>Render logic: analysis/decompiled/payload-named/sixtwo/qD.java:92-300
 *       (gating chain, head offsets -0.43/-0.5, NEGATIVE_Z 180 + POSITIVE_Y 90,
 *       deferred {@code jo.bEt(() -> ky.bSd(...))}) and
 *       analysis/decompiled/payload-named/sixtwo/ky.java:87-286 (triangle fan
 *       apex (0,0.3,0), rim radius {@code player.getWidth()} at
 *       (-sin,0,cos)*2pi*i/segments, alpha literal 40.0f, second
 *       DEBUG_LINE_STRIP pass, per-segment gradient from
 *       {@code jk.bDm(i, color, gradientSpeed)}).</li>
 * </ul>
 *
 * <p>Substitutions (framework, labeled):
 * <ul>
 *   <li>The original attaches a player-model FeatureRenderer; OpenGrim has no
 *       feature-renderer hook, so the cone is drawn from
 *       {@link WorldRenderEvent} AFTER_ENTITIES at the target's head height.
 *       The head-model transform ({@code getHead().applyTransform} + block-unit
 *       offsets -0.43/-0.5) is approximated by {@code getHeight() + offset}.</li>
 *   <li>{@code ky}'s segment count {@code nUFUt} and the gradient triangle
 *       constants are DES-encrypted in the shell class (not in the decrypted
 *       pool); 24 segments and the 180/360/0 triangle-wave reading are
 *       high-probability guesses (labeled).</li>
 *   <li>The {@code lT.ciQ().setLineSmoothing(...)} wrapper and the deferred
 *       render task have no OpenGrim equivalent; the line pass runs inline.</li>
 * </ul>
 */
public class ChinaHat extends Module {
	/** ky.bSd triangle-fan segment count (nUFUt, DES-only: high-probability guess). */
	private static final int SEGMENTS = 24;

	private final GroupSetting showFor = register(new GroupSetting("show_for"));
	private final BoolSetting self = register(new BoolSetting("self", true));
	private final BoolSetting friends = register(new BoolSetting("friends", false));
	private final ColorSetting color = register(new ColorSetting("color", 0xFF9747FF, false));
	private final DoubleSetting gradientSpeed = register(new DoubleSetting("gradient_speed", 1.0, 1.0, 10.0, 5.0, null));

	public ChinaHat() {
		super("china_hat", "China Hat", "Renders china hat on your head", ModuleCategory.VISUALS);
		showFor.add(self);
		showFor.add(friends);
	}

	@Subscribe
	private void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		int argb = color.getValue();
		double speed = gradientSpeed.getValue();

		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			for (AbstractClientPlayerEntity target : client.world.getPlayers()) {
				// qD.java:173-189: invisible players render no hat.
				if (target.isInvisible()) {
					continue;
				}
				if (target == client.player) {
					// qD.java:193-214: "Self" toggle, then first-person hides the own hat.
					if (!self.getValue() || client.options.getPerspective().isFirstPerson()) {
						continue;
					}
				} else {
					// qD.java:220-238: "Friends" toggle + friend-registry membership.
					if (!friends.getValue() || !FriendsManager.isFriend(target.getGameProfile().name())) {
						continue;
					}
				}
				Vec3d base = target.getLerpedPos(tickDelta).add(0.0, target.getHeight() + verticalOffset(target), 0.0);
				drawCone(entry, consumers, base, target.getWidth(), argb, speed);
			}
		} finally {
			// EventBus.post swallows listener Throwables (hH#bdV parity), so a leaked
			// push is not recovered by the dispatcher: the entity pass then throws
			// "Pose stack not empty" (LevelRenderer#checkEmpty, crash 2026-10-18
			// 10:56:26). Always pop, whatever the render pass did.
			matrices.pop();
		}
	}

	/**
	 * qD.java:283-291 pose-dependent head offset: {@code cIT() ? -0.43 : -0.5}
	 * (the {@code oK.cIT()} pose query is native; reading it as "sneaking" is a
	 * labeled guess, sneaking selects the lower -0.5).
	 */
	static double verticalOffset(AbstractClientPlayerEntity player) {
		return player.isSneaking() ? -0.5 : -0.43;
	}

	/**
	 * ky.bSd (ky.java:87-286): fan from apex (0, 0.3, 0) to a rim of radius
	 * {@code player.getWidth()}, per-segment gradient color, alpha literal
	 * 40.0f, then a rim line-strip pass. The original submits a
	 * TRIANGLE_FAN; OpenGrim's fill layer takes quads, so each fan triangle is
	 * emitted as a degenerate quad (apex, rim_i, rim_i+1, apex) — same covered
	 * area.
	 *
	 * <p>Buffer discipline: {@code VertexConsumerProvider.Immediate} keeps only
	 * ONE non-dedicated layer building at a time (its {@code currentLayer});
	 * requesting another layer ends the first layer's {@code BufferBuilder}, and
	 * the next write to that ended consumer throws "Not building!"
	 * ({@code BufferBuilder.ensureBuilding}). Each pass therefore requests its own
	 * buffer and finishes writing before the next {@code getBuffer} call — crash
	 * 2026-10-18 10:56:26. The original has no such constraint: it builds each
	 * pass in its own {@code BufferAllocator} and submits it via
	 * {@code lF.cfX(...)} (ky.java:150, 236).
	 */
	private static void drawCone(MatrixStack.Entry entry, VertexConsumerProvider consumers, Vec3d base,
			float radius, int argb, double speed) {
		long time = System.currentTimeMillis();
		float ax = (float) base.x;
		float ay = (float) base.y + 0.3f;
		float az = (float) base.z;
		float by = (float) base.y;

		// ky.java:104-134: rim point and per-segment gradient for i in 0..SEGMENTS.
		float[] rimX = new float[SEGMENTS + 1];
		float[] rimZ = new float[SEGMENTS + 1];
		float[][] rimRgb = new float[SEGMENTS + 1][];
		for (int i = 0; i <= SEGMENTS; i++) {
			double angle = (float) i * 6.2831855f / (float) SEGMENTS;
			rimX[i] = (float) (-MathHelper.sin(angle) * radius);
			rimZ[i] = (float) (MathHelper.cos(angle) * radius);
			rimRgb[i] = gradient(time, i, argb, speed);
		}

		// Pass 1 (ky.java:103-193, TRIANGLE_FAN): apex (0, 0.3, 0) + rim fan.
		VertexConsumer fan = consumers.getBuffer(RenderLayers.debugFilledBox());
		for (int i = 1; i <= SEGMENTS; i++) {
			float[] prev = rimRgb[i - 1];
			float[] rgb = rimRgb[i];
			// TRIANGLE_FAN triangle (apex, rim_{i-1}, rim_i) as a quad.
			fan.vertex(entry, ax, ay, az).color(prev[0], prev[1], prev[2], 40.0f);
			fan.vertex(entry, ax + rimX[i - 1], by, az + rimZ[i - 1]).color(prev[0], prev[1], prev[2], 40.0f);
			fan.vertex(entry, ax + rimX[i], by, az + rimZ[i]).color(rgb[0], rgb[1], rgb[2], 40.0f);
			fan.vertex(entry, ax, ay, az).color(rgb[0], rgb[1], rgb[2], 40.0f);
		}

		// Pass 2 (ky.java:199-283, DEBUG_LINE_STRIP): rim strip. Requesting this
		// layer flushes the fill buffer above, which is already complete.
		VertexConsumer lines = consumers.getBuffer(RenderLayers.lines());
		for (int i = 1; i <= SEGMENTS; i++) {
			line(entry, lines, ax + rimX[i - 1], by, az + rimZ[i - 1], ax + rimX[i], by, az + rimZ[i], rimRgb[i]);
		}
		// ky.java:221 closing vertex: the angle-0 rim point again (the strip already
		// ends at 2pi, so this closing segment is zero-length), colored with the last
		// segment's gradient — var10_9 in the original holds the final loop color.
		line(entry, lines, ax + rimX[SEGMENTS], by, az + rimZ[SEGMENTS], ax + rimX[0], by, az + rimZ[0],
				rimRgb[SEGMENTS]);
	}

	/**
	 * jk.bDm/bDo gradient (jk.java:283-285, 538-618): palette
	 * [color, color * 0.5] sampled by a 360-step triangle wave advanced by
	 * {@code time / speed + segment}. The triangle constants (180/360/0) are
	 * DES-encrypted in jk and read here as a high-probability guess.
	 */
	private static float[] gradient(long time, int segment, int argb, double speed) {
		float t = (float) (time / speed + segment) % 360.0f;
		if (t < 0.0f) {
			t += 360.0f;
		}
		if (t > 180.0f) {
			t = 360.0f - t;
		}
		float f = t / 180.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		float[] palette = new float[] { r, g, b };
		float[] half = new float[] { r * 0.5f, g * 0.5f, b * 0.5f };
		return new float[] {
				MathHelper.lerp(f, palette[0], half[0]),
				MathHelper.lerp(f, palette[1], half[1]),
				MathHelper.lerp(f, palette[2], half[2]) };
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float[] rgb) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(rgb[0], rgb[1], rgb[2], 40.0f).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, bx, by, bz).color(rgb[0], rgb[1], rgb[2], 40.0f).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}

	/** cS.Za() style group "Show For". */
	public GroupSetting getShowFor() {
		return showFor;
	}

	/** cS.Zb() "Self" select (field mjpkN). */
	public boolean isSelf() {
		return self.getValue();
	}

	/** cS.Zc() "Friends" select (field OHlmP). */
	public boolean isFriends() {
		return friends.getValue();
	}

	/** cS.Zd() "Color" (field Ccjvo). */
	public int getColor() {
		return color.getValue();
	}

	/** cS.Ze() "Gradient Speed" (field BdlMa). */
	public double getGradientSpeed() {
		return gradientSpeed.getValue();
	}
}
