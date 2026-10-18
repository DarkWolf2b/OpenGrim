package dev.opengrim.gui;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.Click;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.text.Text;

/**
 * Radial emote wheel (the {@code bD} screen).
 *
 * <p>Sources: sixtwo/bD.java (lines 61-115 fields/ctor/LE, 162-166
 * {@code n()}, 168-350 {@code m()}, 352-376 {@code LF()}, 381-409
 * {@code LL()}, 440-454 {@code LD()}, 460-498 {@code LG()}, 511-547
 * {@code onMouseClicked}, 553-577 {@code close()}, 579-582 {@code tick()},
 * 584-592 {@code init()}, 594-601 {@code LJ()}, 603-605 {@code LP()},
 * 607-652 {@code LN()}, 687-711 {@code LR()}, 713-721 {@code LM()},
 * 723-747 {@code LI()}, 753-779 {@code LH()}, 790-846 {@code LK()},
 * 848-894 {@code LQ()}, 896-922 {@code LO()}), sixtwo/av.java (lines 57-62
 * ctor, 112-134 {@code si()}, 144-226 {@code sh()}, 236-238 {@code sf()},
 * 357-383 {@code mouseClicked}, 385-408 {@code renderBackground}, 413-424
 * {@code render()}, 452-454 {@code shouldPause()}), sixtwo/bB.java (line 6
 * wedge record), sixtwo/bC.java (lines 52-58 ctor, 102-142 {@code Lu()},
 * 144-211 {@code Lt()}, 237-274 {@code Lq()}, 276-278 {@code Lv()},
 * 284-361 {@code Lr()}, 363-405 {@code Lw()}), sixtwo/pW.java
 * ({@code cTX(player, pY)} confirm shape), sixtwo/jF.java (line 38
 * {@code bHz} tint), sixtwo/jH.java (lines 35, 62 {@code bIf}/{@code bId}
 * scale).
 *
 * <p>Vanilla-API deviations (geometry and order unchanged):
 * <ul>
 * <li>Disc/wedge/divider/center fills use {@link WheelDraw} vanilla
 * {@code fill} helpers; the original uses {@code lC.cdN}/{@code cdG}/
 * {@code cdE}/{@code cek}/{@code cdg} custom pipelines (sixtwo/lC.java).</li>
 * <li>Colors come from {@link GuiTheme}; the original reads them from native
 * {@code ii}/{@code mG} theme state (sixtwo/ii.java, sixtwo/mG.java).</li>
 * <li>Labels use {@code textRenderer}; the original uses {@code lE} SDF
 * atlases {@code SVnNc} (center, 10.0f) and {@code WTzbi} (wedge, 5.5-6.0)
 * (sixtwo/lE.java, sixtwo/bD.java {@code LN()}, sixtwo/bC.java
 * {@code Lq()}).</li>
 * <li>Open/selection ramps are timed linear ramps here; the original drives
 * {@code rk} with {@code rj.XzDkv}/{@code rj.MBpuQ}/{@code rj.UPXqT} curves
 * and native durations (sixtwo/rk.java, sixtwo/rj.java, sixtwo/bD.java).</li>
 * <li>Key-gated auto-confirm inside {@code m()} ({@code rr.diW} plus
 * {@code fX} flags) is omitted; confirm happens only on left click, matching
 * {@code onMouseClicked} (sixtwo/bD.java).</li>
 * <li>Empty-wheel label uses {@code ""} here; the original uses the DES
 * string {@code VxFyM} (sixtwo/bD.java {@code LN()}).</li>
 * </ul>
 */
public class EmoteWheelScreen extends WheelScreenBase {
	private static EmoteWheelScreen instance;

	private final List<WheelEntry> entries = new ArrayList<>();
	/** Hovered wedge; mirrors {@code LUWfM} (bD.java), {@code -1} when none. */
	private int hovered = -1;
	/** Last hovered wedge; mirrors {@code QYxCg} (bD.java). */
	private int lastHovered = -1;
	/** Confirm latch; mirrors {@code zRUoI} (bD.java). */
	private boolean confirmArmed;
	/** Close flag from {@code av}; mirrors {@code VWsmm}. */
	private boolean closing;
	/** Selection highlight progress; mirrors {@code BOnqc.dhd(1.0f)}. */
	private float selectionAnim = 1.0f;
	private long selectionChangedAt = System.currentTimeMillis();

	public EmoteWheelScreen() {
		super(Text.literal("OpenGrim Wheel"));
		instance = this;
		initState();
	}

	public EmoteWheelScreen(Collection<WheelEntry> initial) {
		super(Text.literal("OpenGrim Wheel"));
		instance = this;
		setEntries(initial);
		initState();
	}

	/** Mirrors {@code bD.LE()}: singleton accessor. */
	public static EmoteWheelScreen getInstance() {
		if (instance == null) {
			instance = new EmoteWheelScreen();
		}
		return instance;
	}

	/**
	 * Mirrors {@code bD.LF()}: replace wedge content.
	 */
	public void setEntries(Collection<? extends WheelEntry> next) {
		entries.clear();
		if (next != null) {
			entries.addAll(next);
		}
		hovered = -1;
		lastHovered = -1;
	}

	/**
	 * Mirrors {@code bD.LD()}: open only when a world is present, clearing the
	 * close/confirm latches first.
	 */
	public static void open() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client == null || client.world == null) {
			return;
		}
		EmoteWheelScreen screen = getInstance();
		screen.closing = false;
		screen.confirmArmed = false;
		client.setScreen(screen);
	}

	/** Open with the given entries; keeps the existing ClickGui path separate. */
	public static void openWith(Collection<WheelEntry> next) {
		getInstance().setEntries(next);
		open();
	}

	/**
	 * Default entries built from registered modules (toggle on confirm). Uses
	 * only the existing Module API; the original lists {@code pY} emotes from
	 * {@code pU.cTP()} (sixtwo/bD.java ctor).
	 */
	public static void openWithModules() {
		List<WheelEntry> list = new ArrayList<>();
		for (Module m : ModuleManager.get().getModules()) {
			list.add(WheelEntry.actionable(m.getId(), m.getName(), m::toggle));
		}
		openWith(list);
	}

	/** Mirrors {@code bD.init()}: reset hover, latches and anims. */
	public void initState() {
		closing = false;
		confirmArmed = false;
		hovered = -1;
		lastHovered = -1;
		openAnim = 0.0f;
		openStartedAt = System.currentTimeMillis();
		selectionAnim = 0.0f;
		selectionChangedAt = System.currentTimeMillis();
		for (WheelEntry e : entries) {
			e.snapClosed();
		}
	}

	@Override
	protected void init() {
		initState();
	}

	/**
	 * Mirrors {@code bD.LJ()}: polar layout derived from the current screen
	 * size (center at half extents, outer clamped, inner at 0.43 ratio).
	 */
	private WheelGeometry.Layout currentLayout() {
		return WheelGeometry.layout((float) width, (float) height);
	}

	/**
	 * Mirrors {@code bD.LG()}: selected wedge or {@code null} when the hover
	 * index is out of range.
	 */
	public WheelEntry selectedEntry() {
		if (hovered < 0 || hovered >= entries.size()) {
			return null;
		}
		return entries.get(hovered);
	}

	/** Mirrors {@code bD.LR()}: drop hover-instance state for one index. */
	private void resetPrevious(int index) {
		if (index < 0 || index >= entries.size()) {
			return;
		}
		entries.get(index).resetHoverInstance();
	}

	/**
	 * Mirrors {@code bD.LI()}: reset every wedge plus selection state.
	 */
	public void resetAll() {
		for (WheelEntry e : entries) {
			e.resetHoverInstance();
			e.snapClosed();
		}
		hovered = -1;
		lastHovered = -1;
	}

	/**
	 * Mirrors {@code bD.LH()}: confirm the hovered entry when it carries a
	 * payload. The original calls {@code pW.cTX(player, bC.Lx())}
	 * (sixtwo/pW.java); here the entry runs its local action.
	 */
	public void confirmSelected() {
		WheelEntry entry = selectedEntry();
		if (entry == null || !entry.hasPayload()) {
			return;
		}
		entry.confirm();
	}

	@Override
	public void render(DrawContext ctx, int mouseX, int mouseY, float delta) {
		// Open ramp: 0 -> 1. Original reads Weytw.dhd(1.0f) (sixtwo/bD.java m()).
		long now = System.currentTimeMillis();
		openAnim = Math.max(0.0f, Math.min(1.0f, (float) (now - openStartedAt) / 180.0f));
		float scale = openScale();

		if (entries.isEmpty()) {
			hovered = -1;
		} else if (!closing) {
			// Mirrors LP()/LQ() hover tracking in m().
			WheelGeometry.Layout layout = currentLayout();
			int hit = WheelGeometry.hitTest((double) mouseX, (double) mouseY,
					layout.centerX(), layout.centerY(),
					layout.innerRadius() * scale, layout.outerRadius() * scale, entries.size());
			hovered = hit;
		}
		if (hovered != lastHovered) {
			resetPrevious(lastHovered);
			lastHovered = hovered;
			selectionChangedAt = now;
		}
		selectionAnim = Math.max(0.0f, Math.min(1.0f, (float) (now - selectionChangedAt) / 120.0f));
		for (int i = 0; i < entries.size(); i++) {
			entries.get(i).setHovered(i == hovered);
		}

		if (entries.isEmpty()) {
			super.render(ctx, mouseX, mouseY, delta);
			return;
		}

		WheelGeometry.Layout layout = currentLayout();
		float cx = layout.centerX();
		float cy = layout.centerY();
		float inner = layout.innerRadius();
		float outer = layout.outerRadius();
		float diameter = layout.diameter();

		// Draw order mirrors m(): jF tint -> jH scale -> LK -> LN -> reset.
		int tint = WheelDraw.tintAlpha(openAnim);
		WheelDraw.pushScaleAbout(ctx, cx, cy, scale);
		layoutAndDraw(ctx, cx, cy, diameter, inner, outer, tint);
		WheelDraw.popScale(ctx);
		super.render(ctx, mouseX, mouseY, delta);
	}

	/**
	 * Mirrors {@code bD.LK()}: backdrop, selected wedge, then per-wedge
	 * content. Sweep {@code 360/size} and {@code base = -90 - sweep/2} match
	 * the decompile.
	 */
	private void layoutAndDraw(DrawContext ctx, float cx, float cy, float diameter,
			float inner, float outer, int tint) {
		int size = entries.size();
		float sweep = WheelGeometry.sweep(size);
		float base = WheelGeometry.baseAngle(sweep);
		float x = cx - diameter * 0.5f;
		float y = cy - diameter * 0.5f;

		// LL(): backdrop disc.
		drawBackdrop(ctx, x, y, diameter, inner, outer, tint);

		// LM(): selected wedge highlight.
		if (hovered >= 0 && hovered < size) {
			float start = base + (float) hovered * sweep;
			float end = base + (float) (hovered + 1) * sweep;
			drawSelected(ctx, x, y, diameter, inner, outer, start, end, selectionAnim, tint);
		}

		// Per-wedge bB + bC content.
		for (int i = 0; i < size; i++) {
			float start = base + (float) i * sweep;
			float end = base + (float) (i + 1) * sweep;
			float mid = base + ((float) i + 0.5f) * sweep;
			WheelGeometry.Wedge wedge = new WheelGeometry.Wedge(i, i == hovered, cx, cy,
					diameter, inner, outer, start, end, mid);
			drawWedge(ctx, wedge, tint);
		}

		// LN() center disc (dividers drawn inside drawCenter to keep LN order).
		drawCenter(ctx, cx, cy, inner, tint);
	}

	/** Mirrors {@code bD.LL()}: full 0-360 backdrop disc. */
	private void drawBackdrop(DrawContext ctx, float x, float y, float diameter,
			float inner, float outer, int tint) {
		WheelDraw.backdropDisc(ctx, x, y, diameter, GuiTheme.withAlpha(GuiTheme.PANEL_BODY, tint / 255.0f));
	}

	/**
	 * Mirrors {@code bD.LM()}: theme color with hover alpha, angular span
	 * narrowed by the same alpha ({@code mid +/- half * alpha}).
	 */
	private void drawSelected(DrawContext ctx, float x, float y, float diameter,
			float inner, float outer, float startDeg, float endDeg, float anim, int tint) {
		float mid = (startDeg + endDeg) * 0.5f;
		float half = (endDeg - startDeg) * 0.5f * Math.max(0.0f, Math.min(1.0f, anim));
		float lo = mid - half;
		float hi = mid + half;
		WheelDraw.selectedWedge(ctx, x, y, diameter, inner, outer, lo, hi,
				GuiTheme.withAlpha(GuiTheme.ROW_HOVER, tint / 255.0f));
	}

	/**
	 * Mirrors {@code bC.Lq()} (bC.java:237-274): preview box at the centroid
	 * radius plus the centered label below it. With {@code f7 = Lv(anim)},
	 * {@code f8 = f6 - (f7 + cat) * 0.5}, preview center
	 * {@code f9 = f8 + f7 * 0.5 + 3} and label baseline {@code f10 = f8 + f7};
	 * {@code cat} is the SDF atlas line height there, {@code fontHeight} here.
	 */
	private void drawWedge(DrawContext ctx, WheelGeometry.Wedge wedge, int tint) {
		WheelEntry entry = entries.get(wedge.index());
		float anim = entry.hoverAnim();
		float centroid = WheelGeometry.centroidRadius(wedge.innerRadius(), wedge.outerRadius(),
				wedge.segmentStart(), wedge.segmentEnd());
		float lift = WheelGeometry.LABEL_LIFT * anim;
		float r = centroid + lift;
		double rad = Math.toRadians(wedge.segmentMiddleAngle());
		float px = wedge.centerX() + (float) Math.cos(rad) * r;
		float py = wedge.centerY() + (float) Math.sin(rad) * r;

		float preview = WheelGeometry.previewSize(Math.max(0.0f, Math.min(1.0f, anim)));
		float halfPrev = preview * 0.5f;
		float textH = (float) textRenderer.fontHeight;
		float f8 = py - (preview + textH) * 0.5f;
		float prevCy = f8 + halfPrev + WheelGeometry.LABEL_LIFT;
		float labelY = f8 + preview;
		int color = entry.hasPayload() ? GuiTheme.TEXT : GuiTheme.TEXT_DIM;
		ctx.fill(Math.round(px - halfPrev), Math.round(prevCy - halfPrev),
				Math.round(px + halfPrev), Math.round(prevCy + halfPrev),
				GuiTheme.withAlpha(GuiTheme.PANEL_HEADER, tint / 255.0f));
		ctx.drawStrokedRectangle(Math.round(px - halfPrev), Math.round(prevCy - halfPrev),
				Math.round(preview), Math.round(preview), GuiTheme.PANEL_BORDER);

		String label = entry.label();
		int w = WheelDraw.labelWidth(textRenderer, label);
		float lx = px - w * 0.5f;
		WheelDraw.label(ctx, textRenderer, label, lx, labelY,
				GuiTheme.withAlpha(color, tint / 255.0f));
	}

	/**
	 * Mirrors {@code bD.LN()} then {@code LO()}: center disc, divider ticks,
	 * then the centered label (selected label or empty fallback).
	 */
	private void drawCenter(DrawContext ctx, float cx, float cy, float inner, int tint) {
		float disc = inner * WheelGeometry.CENTER_FACTOR;
		float x = cx - disc * 0.5f;
		float y = cy - disc * 0.5f;
		WheelDraw.centerDisc(ctx, x, y, disc,
				GuiTheme.withAlpha(GuiTheme.PANEL_HEADER, tint / 255.0f), GuiTheme.PANEL_BORDER);

		drawDividers(ctx, cx, cy, disc, tint);

		String label = "";
		WheelEntry selected = selectedEntry();
		if (selected != null) {
			label = selected.label();
		}
		if (!label.isEmpty()) {
			int w = WheelDraw.labelWidth(textRenderer, label);
			WheelDraw.label(ctx, textRenderer, label, cx - w * 0.5f,
					cy - (float) textRenderer.fontHeight * 0.5f,
					GuiTheme.withAlpha(GuiTheme.TEXT, tint / 255.0f));
		}
	}

	/**
	 * Mirrors {@code bD.LO()}: one tick per wedge boundary, width capped at
	 * {@code min(8, sweep * 0.34)} and colors dimmed unless hovered.
	 */
	private void drawDividers(DrawContext ctx, float cx, float cy, float disc, int tint) {
		int size = entries.size();
		if (size <= 0) {
			return;
		}
		float sweep = WheelGeometry.sweep(size);
		float base = WheelGeometry.baseAngle(sweep);
		float radius = disc * 0.5f - 2.0f;
		for (int i = 0; i < size; i++) {
			float angle = base + (float) i * sweep;
			int color = (i == hovered)
					? GuiTheme.withAlpha(GuiTheme.TEXT, tint / 255.0f)
					: GuiTheme.withAlpha(GuiTheme.TEXT_DIM, 0.5f * tint / 255.0f);
			WheelDraw.dividerTick(ctx, cx, cy, radius, angle, color);
		}
	}

	/**
	 * Mirrors {@code bD.onMouseClicked()}: left button only. Hit-tests the
	 * scaled ring, confirms on hit, latches close flags, and consumes the
	 * event. Other buttons fall through unhandled.
	 */
	@Override
	public boolean mouseClicked(Click click, boolean doubled) {
		if (!isLeftButton(click.button())) {
			return false;
		}
		WheelGeometry.Layout layout = currentLayout();
		float scale = openScale();
		int hit = WheelGeometry.hitTest(click.x(), click.y(),
				layout.centerX(), layout.centerY(),
				layout.innerRadius() * scale, layout.outerRadius() * scale, entries.size());
		if (hit < 0) {
			return false;
		}
		hovered = hit;
		confirmSelected();
		confirmArmed = true;
		closing = true;
		return true;
	}

	@Override
	public void removed() {
		resetAll();
		super.removed();
	}

	/**
	 * Mirrors {@code bD.tick()} (bD.java:579-582) plus {@code close()}
	 * (bD.java:553-577): the original syncs key state ({@code si()}, no
	 * counterpart here) then, when the close latch ({@code VWsmm}) is set,
	 * resets every wedge ({@code LI()}) and closes the screen
	 * ({@code Screen.close()} sets the screen to null on 1.21.11).
	 * The latch is set by {@link #mouseClicked} after a confirm.
	 */
	@Override
	public void tick() {
		if (closing) {
			resetAll();
			closing = false;
			close();
		}
	}
}
