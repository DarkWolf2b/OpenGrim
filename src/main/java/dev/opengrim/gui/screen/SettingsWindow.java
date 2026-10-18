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
import dev.opengrim.gui.ui.widgets.ContainerWidget;
import dev.opengrim.gui.ui.widgets.ToggleWidget;

/**
 * Port of the sixtwo.ap popup as used by the Click GUI for module settings
 * (the {@code d} panels bound to the cJonW/uFsRc popups of sixtwo.c).
 *
 * <p>Chrome is taken from the recovered {@code bl.Ep} surface (the only
 * recovered popup paint path): corner radius 5.0f, background
 * {@code bjd().lerp(bje(), 0.3f)} at the fX background-style opacity, border
 * padding {@code ld.all(6.0f + 5.0f * openT)} and the header split of the
 * reference frames — an inline title (module name) + "·" + subtitle (module
 * description, the iKApR style of cJonW/uFsRc) with the {@code R} close button
 * (20x20, bl.java:109) at the right of the header row.
 *
 * <p>Geometry (bl.Ep, bl.java:876-891): header pad 7.0f, header height 28.0f,
 * content pane at {@code (x, y + 42)}. The popup size itself is native
 * (ap.qr/qb setters are native-dispatched), so the height follows the setting
 * list with the container's measured content height, clamped to the screen
 * (high-probability guess).
 */
public class SettingsWindow extends Popup {
	/** bl.Ep constants shared with the main window. */
	private static final float HEADER_PAD = 7.0f;
	private static final float HEADER_H = 28.0f;
	private static final float RADIUS = 5.0f;
	/**
	 * bd.BcpIo (sixtwo_46.java:69): the module settings panel is 127 units
	 * wide — {@code bd} sets {@code this.BcpIo = 127.0f} in its constructor.
	 */
	private static final float POPUP_W = 127.0f;
	private static final float MIN_H = 60.0f;
	private static final float MAX_H = 240.0f;
	private static final float TITLE_SIZE = 8.0f;
	/** Header subtitle size 7 (trace {@code lq.caw} of the al/ap headers). */
	private static final float SUBTITLE_SIZE = 7.0f;
	/** Separator dot of the recovered header style (circle 2.75). */
	private static final float DOT_SIZE = 2.75f;

	private Module module;
	private final ContainerWidget content = new ContainerWidget();
	private final CloseButton closeButton = new CloseButton();

	public SettingsWindow() {
		super(0.0f, 0.0f, POPUP_W, MIN_H);
	}

	/** Open (or re-target) the popup for a module; bl.Eu resets the tween. */
	public void openFor(Module module, float atX, float atY) {
		if (this.module != module) {
			// A different card gets its own bd panel in the original (bg.CQ
			// creates one per card), so the setting list starts unscrolled.
			content.setScroll(0.0f);
		}
		this.module = module;
		setVisible(true);
		setOpen(true);
		openAnim.snap(0.0f);
		rebuild();
		// First open: anchor at the position passed by the caller (bg.CQ: the
		// window's right edge + 10, window top); later opens keep the drag
		// position (the original reuses the bd panel of the same card).
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
		content.children().clear();
	}

	/** Rebuild the setting rows for the current module. */
	public void rebuild() {
		content.children().clear();
		if (module == null) {
			return;
		}
		// bd ctor (sixtwo_46.java:86-88): the first row of the panel is the
		// module toggle — a cJ labelled from the string pool, seeded with the
		// module state (WE(module.bag())) and wired to toggle the module
		// (Vd(() -> bd.Cm(module))).
		float rowW = POPUP_W - 16.0f - 8.0f;
		content.add(new ToggleWidget(module.getName(), module.isEnabled()) {
			@Override
			protected void drawWidget(GuiDraw draw) {
				setStateSilently(module.isEnabled());
				super.drawWidget(draw);
			}
		}.onChange(module::toggle).bounds(4.0f, 0.0f, rowW, ModuleWidgetFactory.TOGGLE_H));
		ModuleWidgetFactory.populate(content, module.getSettings(), POPUP_W - 16.0f);
		float measured = ModuleWidgetFactory.TOGGLE_H + ModuleWidgetFactory.measureHeight(module.getSettings());
		size(POPUP_W, Math.max(MIN_H, Math.min(MAX_H, HEADER_H + 2 * HEADER_PAD + Math.min(measured, MAX_H - 42.0f))));
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont regular = MsdfFont.regular();
		float t = Math.min(1.0f, openAnim.current());
		// ap open animation: scale from the center (bl/av sf() = 0.5 + 0.5t).
		draw.pushTransform(x + w / 2.0f, y + h / 2.0f, 0.5f + 0.5f * t);
		draw.fillRounded(x, y, w, h, RADIUS, theme.background().withAlphaScale(t)
				.lerp(theme.panelColor(), 0.3f * t));
		draw.strokeRounded(x, y, w, h, RADIUS, theme.text().withAlphaScale(0.06f * t));

		String title = module == null ? "" : module.getName();
		String subtitle = module == null || module.getDescription() == null ? "" : module.getDescription();
		// Same header typography as the bl window: title/subtitle baseline
		// +16.3, drawn dot at +12.625 (see ClickGuiScreen).
		draw.text(semibold, title, x + HEADER_PAD + 2.0f, y + HEADER_PAD + 16.3f, TITLE_SIZE,
				theme.text().withAlphaScale(t));
		// The panel is 127 units wide (bd.BcpIo): the recovered header style's
		// separator dot + subtitle only fit when enough room is left of the
		// close button, so they are dropped on the narrow panel otherwise.
		float dotX = x + HEADER_PAD + 2.0f + semibold.width(title, TITLE_SIZE) + 6.0f;
		float subtitleX = dotX + DOT_SIZE + 6.3f;
		float subtitleMax = x + w - HEADER_PAD - 20.0f - subtitleX;
		if (subtitleMax >= 24.0f) {
			draw.fillCircle(dotX, y + HEADER_PAD + 12.625f, DOT_SIZE, theme.text().withAlphaScale(0.5f * t));
			draw.text(regular, regular.truncate(subtitle, SUBTITLE_SIZE, subtitleMax), subtitleX,
					y + HEADER_PAD + 16.3f, SUBTITLE_SIZE, theme.text().withAlphaScale(0.5f * t));
		}

		closeButton.at(x + w - HEADER_PAD - 20.0f, y + HEADER_PAD + 4.0f).size(20.0f, 20.0f).render(draw);

		float contentY = y + 42.0f;
		content.bounds(x + 8.0f, contentY, w - 16.0f, Math.max(0.0f, h - 42.0f - HEADER_PAD)).render(draw);
		draw.popTransform();
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (closeButton.contains(mx, my)) {
			return closeButton.onMouseDown(mx, my, button);
		}
		if (content.contains(mx, my)) {
			return content.onMouseDown(mx, my, button);
		}
		// Header drag surface (bl.TCMij header drag).
		if (my < y + HEADER_H + HEADER_PAD && button == MouseButton.LEFT) {
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
		return content.onMouseDrag(mx, my, button, dx, dy);
	}

	@Override
	public boolean onMouseUp(double mx, double my, MouseButton button) {
		boolean consumed = super.onMouseUp(mx, my, button);
		consumed |= closeButton.onMouseUp(mx, my, button);
		consumed |= content.onMouseUp(mx, my, button);
		return consumed;
	}

	@Override
	public boolean onScroll(double mx, double my, double amount) {
		return content.contains(mx, my) && content.onScroll(mx, my, amount);
	}

	@Override
	public boolean onCharTyped(char c) {
		return content.onCharTyped(c);
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		return content.onKeyPressed(key, scancode, modifiers);
	}

	/** Window rect accessor for the manager (topmost checks). */
	public Rect windowRect() {
		return new Rect(x, y, w, h);
	}

	/**
	 * [G] Clamp the panel into the design viewport so it stays reachable on
	 * small windows. The original's {@code bd} has no recovered clamp (only
	 * {@code bl.Et} clamps the window itself), so this is a port guard.
	 */
	public void clampInto(float viewW, float viewH) {
		x = Math.max(0.0f, Math.min(x, Math.max(0.0f, viewW - w)));
		y = Math.max(0.0f, Math.min(y, Math.max(0.0f, viewH - h)));
	}

	/** The {@code R} close button of the original popups (lf.PqdjL = CROSS). */
	private final class CloseButton extends dev.opengrim.gui.ui.Widget {
		@Override
		protected void drawWidget(GuiDraw draw) {
			Theme theme = Theme.get();
			MsdfFont icons = MsdfFont.icons();
			float hoverT = hover.current();
			draw.icon(icons, IconGlyph.CROSS, x + 4.0f, y + 4.0f, 12.0f,
					theme.text().withAlphaScale(0.6f + 0.4f * hoverT));
		}

		@Override
		public boolean onMouseDown(double mx, double my, MouseButton button) {
			if (button == MouseButton.LEFT) {
				close();
			}
			return true;
		}
	}
}
