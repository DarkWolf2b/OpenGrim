package dev.opengrim.gui.screen;

import dev.opengrim.module.Module;
import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.IconGlyph;
import dev.opengrim.gui.ui.ModuleWidgetFactory;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Popup;
import dev.opengrim.gui.ui.Rect;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.Widget;
import dev.opengrim.gui.ui.widgets.ToggleWidget;

import java.util.ArrayList;
import java.util.List;

/**
 * Port of the {@code sixtwo.bd} module-settings panel (the popup opened by
 * right-clicking a Click-GUI card).
 *
 * <p>Recovered from the native {@code bd} bodies with
 * {@code analysis/tools/j2cc/j2cc_cfg.py} + {@code j2cc_lift.py}:
 *
 * <ul>
 *   <li>{@code bd.BcpIo = 127.0f} (constructor, sixtwo_46.java:69) — panel width.</li>
 *   <li>{@code bd.dn()} (image 0x18f122150): {@code min(200, 18 + Σ oH_i·dn_i + 51)}
 *       — the panel height, including the 18-unit header and 51 units of
 *       bottom padding (verified: the reference screenshot's panel is 198
 *       units for a 7-row module, i.e. at the 200 cap).</li>
 *   <li>{@code bd.bV} (image 0x18f124290) draw order: shadow ({@code cej}),
 *       panel fill ({@code cdm}), title ({@code ceI} twice), close glyph
 *       ({@code BO}), children ({@code su}).  There is no scrollbar draw
 *       ({@code ah} is a scroll model only).</li>
 *   <li>Shadow/fill radius {@code 7.0f}; shadow stroke {@code ld.all(7.0f)};
 *       fill stroke {@code ld.all(3·t + 4)}.</li>
 *   <li>Fill colour = {@code bjd().cob(…).coc(bje(), 0.3f)} — recovered from
 *       {@code ig}/{@code ie} as <b>background lerped to panel at 0.3</b>
 *       ({@code bjd}=palette bhH=(5,5,8), {@code bje}=bhI=(8,10,20);
 *       {@code li.bje} is also the card hover fill in bg.java:286).</li>
 *   <li>{@code bk} module row (image 0x18ef9aa70): inherited
 *       {@code oF(lC, width-21)} label + {@code cel(lf.cuxpa, x+w-16, y+2.5,
 *       7)} — {@code lf.cuxpa} is the EDIT pencil ({@code IconGlyph.EDIT}).</li>
 *   <li>Title at {@code (x + 7 + 2t, y + 8 + 2t)} then {@code (x + 9, y + 10)};
 *       title font size {@code 7 + 2t}.</li>
 *   <li>{@code bd.BO} (image 0x18f15c990): close glyph at
 *       {@code (x + w - 17.5, y + 9.5)}, box 8×8, font size 6, white
 *       ({@code mG.hoGuU}), glyph {@code lf.PqdjL} (CROSS).</li>
 *   <li>Row heights ({@code dn()} handlers): toggle/bool/mode/string/module
 *       rows 18, numeric sliders 28, colour rows 122.</li>
 * </ul>
 *
 * <p>Child order is the recovered one: module toggle ({@code v}/{@code cJ},
 * label <b>"Enabled"</b>), module row ({@code bk}, 18 units, label
 * <b>"Keybind"</b>), then the setting rows.  Both labels are native glyph
 * arrays decoded through the class's own resolver
 * ({@code bd.Cq}/{@code Co} and {@code bk.Eo}/{@code Em}): arrays of 7 ints,
 * {@code [69,110,97,98,108,101,100]} and
 * {@code [75,101,121,98,105,110,100]} — see
 * {@code analysis/artifacts/gui-native/labels-decrypt.txt}.  The {@code bk}
 * row keeps the exact geometry, EDIT icon and hover tween.  Its click opens a
 * {@code bh} 110×80 popup ({@code bk.dk} ctor {@code (FFFLsixtwo/gg;)V}); that
 * popup is out of this slice.
 *
 * <p>No scrollbar is painted: {@code ah.bV} contains only the dead thumb
 * geometry (`thumb = max(24, h·viewport/content)`), has no {@code lC} calls,
 * and {@code bd.bV} only uses {@code nQ/nH/nG} on the {@code ah} scroll
 * model.  The port keeps wheel scrolling.
 */
public class SettingsWindow extends Popup {
	/** bd.BcpIo: panel width (sixtwo_46.java:69). */
	public static final float PANEL_W = 127.0f;
	/** bd.bV cdm/cej radius (recovered 7.0f). */
	private static final float RADIUS = 7.0f;
	/** bd.dn base offset before the children (18.0f). */
	private static final float BASE_H = 18.0f;
	/** bd.dn constant added after the children (51.0f). */
	private static final float BOTTOM_PAD = 51.0f;
	/** bd.dn hard cap (min(200, ...)). */
	private static final float MAX_H = 200.0f;
	/** First row top offset: the 18-unit base of bd.dn. */
	private static final float ROW_TOP = BASE_H;

	/** ceI title insets (bd.bV image 0x18f13b775 / 0x18f13cd74). */
	private static final float TITLE_X = 7.0f;
	private static final float TITLE_Y = 8.0f;
	private static final float TITLE_SHADOW_X = 9.0f;
	private static final float TITLE_SHADOW_Y = 10.0f;
	/** bd.BO glyph box (8×8, font 6) at (x + w - 17.5, y + 9.5). */
	private static final float CLOSE_SIZE = 8.0f;
	private static final float CLOSE_FONT = 6.0f;
	private static final float CLOSE_RIGHT = 17.5f;
	private static final float CLOSE_TOP = 9.5f;
	/** bd.dk hit box around the close glyph (20×20, bl close style). */
	private static final float CLOSE_HIT = 20.0f;

	private Module module;
	private final Rows rows = new Rows();
	private float contentHeight;

	public SettingsWindow() {
		super(0.0f, 0.0f, PANEL_W, BASE_H + BOTTOM_PAD);
	}

	/** bg.CQ: open (or re-target) the panel for a module. */
	public void openFor(Module module, float atX, float atY) {
		if (this.module != module) {
			rows.scroll = 0.0f;
		}
		this.module = module;
		setVisible(true);
		setOpen(true);
		openAnim.snap(0.0f);
		rebuild();
		if (x == 0.0f && y == 0.0f) {
			at(atX, atY);
		}
	}

	public Module module() {
		return module;
	}

	public void close() {
		setOpen(false);
		setVisible(false);
		module = null;
		rows.children.clear();
	}

	/** Rebuild the row list and the recovered bd.dn() height. */
	public void rebuild() {
		rows.children.clear();
		contentHeight = 0.0f;
		if (module == null) {
			return;
		}
		// bd ctor: first child = module toggle row (cJ + WE(state) + Vd(toggle)).
		// Label decoded from the native ctor glyph array: "Enabled".
		rows.add(new ToggleWidget("Enabled", module.isEnabled()) {
			@Override
			protected void drawWidget(GuiDraw draw) {
				setStateSilently(module.isEnabled());
				super.drawWidget(draw);
			}
		}.onChange(module::toggle).size(PANEL_W, ModuleWidgetFactory.TOGGLE_H));
		// bd ctor: second child = module row (bk); bV draws it after the toggle.
		rows.add(new ModuleRow(module).size(PANEL_W, ModuleWidgetFactory.TOGGLE_H));
		ModuleWidgetFactory.populateRows(rows.children, module.getSettings(), PANEL_W);
		for (Widget child : rows.children) {
			contentHeight += child.height() > 0.0f ? child.height() : ModuleWidgetFactory.TOGGLE_H;
		}
		// bd.dn: min(200, 18 + Σ(oH·dn) + 51); the child list already contains
		// the toggle row and the bk module row.
		float h = Math.min(MAX_H, BASE_H + BOTTOM_PAD + contentHeight);
		size(PANEL_W, h);
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont titleFont = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont icons = MsdfFont.icons();
		float t = Math.min(1.0f, openAnim.current());
		float anim = 2.0f * t;
		float titleSize = 7.0f + anim;

		// ap/av open animation: scale about the panel centre.
		draw.pushTransform(x + w / 2.0f, y + h / 2.0f, 0.5f + 0.5f * t);

		// bd.bV: cej shadow, radius 7, stroke ld.all(7), alpha from the theme.
		draw.strokeRounded(x, y, w, h, RADIUS, theme.background().withAlphaScale(0.25f * t));

		// bd.bV: cdm panel fill = bjd().cob(…).coc(bje(), 0.3f) — background
		// lerped to panel at 0.3, faded by the open animation.
		ColorF panel = theme.background().lerp(theme.panelColor(), 0.3f).withAlphaScale(t);
		draw.fillRounded(x, y, w, h, RADIUS, panel);
		draw.strokeRounded(x, y, w, h, RADIUS, theme.text().withAlphaScale(0.06f * t));

		String name = module == null ? "" : module.getName();
		ColorF titleColor = theme.text().withAlphaScale(t);
		// ceI #1 (animated title) and ceI #2 (static/shadow pass), bd.bV.
		draw.text(titleFont, name, x + TITLE_X + anim, y + TITLE_Y + anim, titleSize, titleColor);
		draw.text(titleFont, name, x + TITLE_SHADOW_X, y + TITLE_SHADOW_Y, titleSize, titleColor);

		// bd.BO: close glyph, 8×8 box at (x+w-17.5, y+9.5), font 6.
		float closeX = x + w - CLOSE_RIGHT;
		float closeY = y + CLOSE_TOP;
		draw.icon(icons, IconGlyph.CROSS, closeX, closeY, CLOSE_SIZE,
				theme.text().withAlphaScale(0.6f + 0.4f * hover.current()));

		// Children: sW(x, runningY) + su(lC); clip the scroll viewport.
		float viewportH = Math.max(0.0f, h - ROW_TOP);
		rows.at(x, y + ROW_TOP).size(w, viewportH);
		rows.render(draw);

		draw.popTransform();
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (closeBox().contains(mx, my)) {
			if (button == MouseButton.LEFT) {
				close();
			}
			return true;
		}
		if (rows.contains(mx, my)) {
			return rows.onMouseDown(mx, my, button);
		}
		if (my < y + ROW_TOP && button == MouseButton.LEFT) {
			dragging = true;
			dragOffsetX = (float) (mx - x);
			dragOffsetY = (float) (my - y);
			return true;
		}
		return false;
	}

	@Override
	public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
		if (dragging) {
			return super.onMouseDrag(mx, my, button, dx, dy);
		}
		return rows.onMouseDrag(mx, my, button, dx, dy);
	}

	@Override
	public boolean onMouseUp(double mx, double my, MouseButton button) {
		boolean consumed = super.onMouseUp(mx, my, button);
		consumed |= rows.onMouseUp(mx, my, button);
		return consumed;
	}

	@Override
	public boolean onScroll(double mx, double my, double amount) {
		if (!rows.contains(mx, my)) {
			return false;
		}
		// ah.nJ/nN: wheel step sZwZd = 20 design units (sixtwo_48.java:327,
		// constructor default 20.0).  The original eases the value through its
		// rk tween; the port applies it directly.
		float max = Math.max(0.0f, contentHeight - rows.height());
		rows.scroll = Math.max(0.0f, Math.min(max, rows.scroll - (float) amount * 20.0f));
		return true;
	}

	@Override
	public boolean onCharTyped(char c) {
		return rows.onCharTyped(c);
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		return rows.onKeyPressed(key, scancode, modifiers);
	}

	/** Window rect accessor for the manager (topmost checks). */
	public Rect windowRect() {
		return new Rect(x, y, w, h);
	}

	private Rect closeBox() {
		return new Rect(x + w - CLOSE_RIGHT + CLOSE_SIZE / 2.0f - CLOSE_HIT / 2.0f,
				y + CLOSE_TOP + CLOSE_SIZE / 2.0f - CLOSE_HIT / 2.0f, CLOSE_HIT, CLOSE_HIT);
	}

	/**
	 * [G] Clamp the panel into the design viewport so it stays reachable on
	 * small windows. The original {@code bd} has no recovered clamp (only
	 * {@code bl.Et} clamps the window itself), so this is a port guard.
	 */
	public void clampInto(float viewW, float viewH) {
		x = Math.max(0.0f, Math.min(x, Math.max(0.0f, viewW - w)));
		y = Math.max(0.0f, Math.min(y, Math.max(0.0f, viewH - h)));
	}

	/**
	 * {@code bk} module row (image 0x18ef9aa70): inherited {@code ak.oF}
	 * label at {@code (x+9, y + bAH(font.cat(),18))} with max width
	 * {@code BcpIo-21}, plus {@code cel(lf.cuxpa, x+BcpIo-16, y+2.5, 7)}.
	 * Hover drives {@code tDliG} ({@code ti(lC)} → {@code dhc(bool)}), which
	 * brightens the label ({@code 0.75 + 0.25·t}).
	 *
	 * <p>Label decoded from the native ctor glyph array: "Keybind"
	 * ({@code [75,101,121,98,105,110,100]}).  The click constructs
	 * {@code bh} (110×80, two toggles) and routes the event to it; that popup
	 * is out of scope.
	 */
	private static final class ModuleRow extends Widget {
		private final Module module;

		ModuleRow(Module module) {
			this.module = module;
		}

		@Override
		protected void drawWidget(GuiDraw draw) {
			Theme theme = Theme.get();
			float t = hover.current();
			ColorF color = theme.text().withAlphaScale(0.75f + 0.25f * t);
			draw.text(MsdfFont.of(MsdfFont.SEMIBOLD), "Keybind", x + 9.0f,
					y + h / 2.0f - 1.0f, 7.0f, color);
			draw.icon(MsdfFont.icons(), IconGlyph.EDIT, x + w - 16.0f, y + 2.5f, 7.0f,
					theme.text());
		}

		@Override
		public boolean onMouseDown(double mx, double my, MouseButton button) {
			// bk.dk opens the bh editor popup (out of this slice).
			return contains(mx, my);
		}
	}

	/**
	 * Exact row stack: children are positioned at {@code (x, y + 18)} and
	 * advance by their recovered {@code dn()} height (az.sW + su; bd.bV).
	 * The container draw is the {@code iS.bwI} list of {@code bd.iWGks}.
	 */
	private static final class Rows extends Widget {
		private final List<Widget> children = new ArrayList<>();
		private float scroll;

		void add(Widget child) {
			children.add(child);
		}

		@Override
		protected void drawWidget(GuiDraw draw) {
			draw.pushScissor(x, y, w, h);
			float top = y - scroll;
			for (Widget child : children) {
				float childH = child.height() > 0.0f ? child.height() : ModuleWidgetFactory.TOGGLE_H;
				child.at(x, top).size(w, childH);
				if (child.isVisible()) {
					child.render(draw);
				}
				top += childH;
			}
			draw.popScissor();
		}

		@Override
		public boolean onMouseDown(double mx, double my, MouseButton button) {
			if (!contains(mx, my)) {
				return false;
			}
			for (int i = children.size() - 1; i >= 0; i--) {
				Widget child = children.get(i);
				if (child.isVisible() && child.contains(mx, my) && child.onMouseDown(mx, my, button)) {
					return true;
				}
			}
			return false;
		}

		@Override
		public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
			for (int i = children.size() - 1; i >= 0; i--) {
				Widget child = children.get(i);
				if (child.isVisible() && child.onMouseDrag(mx, my, button, dx, dy)) {
					return true;
				}
			}
			return false;
		}

		@Override
		public boolean onMouseUp(double mx, double my, MouseButton button) {
			boolean consumed = false;
			for (Widget child : children) {
				if (child.isVisible() && child.onMouseUp(mx, my, button)) {
					consumed = true;
				}
			}
			return consumed;
		}

		@Override
		public boolean onCharTyped(char c) {
			for (int i = children.size() - 1; i >= 0; i--) {
				if (children.get(i).onCharTyped(c)) {
					return true;
				}
			}
			return false;
		}

		@Override
		public boolean onKeyPressed(int key, int scancode, int modifiers) {
			for (int i = children.size() - 1; i >= 0; i--) {
				if (children.get(i).onKeyPressed(key, scancode, modifiers)) {
					return true;
				}
			}
			return false;
		}
	}
}
