package dev.opengrim.gui;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.module.ModuleCategory;

/**
 * Shared palette and metrics for the GUI surfaces outside the Click GUI window
 * (the emote wheel and the HUD).
 *
 * <p>All values are the recovered theme constants: ig.java:238 default theme
 * {@code PtFoz} = {@code ie.bhE(text WHITE, accentStrong WHITE, background
 * (12,12,12), panel (24,24,27), accent mG.yHyOB (151,71,255))} — the same
 * values measured in the recovered reference frames
 * (analysis/artifacts/gui-reference/page-*.png: window fill 11,11,13, card
 * fill 21,21,25, accent 151,71,255) — plus the fX background-style opacities
 * (0.2 Liquid Glass / 0.75 Blur / 0.85 Solid, fX.aYh).
 *
 * <p>The metrics mirror the recovered bl window (bl.java:100-103 + bl.Ep):
 * window 465.0 x 305.5, header 28.0, sidebar 100.0, card grid 175.0 x 28.0
 * with a 5.0 gap. Earlier revisions of this file carried an invented
 * "Liquid Glass" palette (per-category accent colors, 124px panels); those
 * values are superseded — the original uses one accent color for every
 * category.
 */
public final class GuiTheme {
	private GuiTheme() {
	}

	/** Accent (mG.yHyOB) — the single accent of the original theme. */
	public static final int ACCENT = 0xFF9747FF;
	/** Background (bhH) at the Blur style opacity 0.75. */
	public static final int BACKDROP = 0xBF0C0C0C;
	/** Panel (bhI) at the Blur style opacity 0.75. */
	public static final int PANEL_BODY = 0xBF18181B;
	/** Panel (bhI), opaque — headers/labels drawn over the window fill. */
	public static final int PANEL_HEADER = 0xE618181B;
	/** Window border (bl.Ep stroke alpha 6/255). */
	public static final int PANEL_BORDER = 0x0FFFFFFF;
	/** Depth shade under a panel body. */
	public static final int PANEL_SHADE = 0x40000000;

	/** Normal row background (transparent — rows sit on the panel). */
	public static final int ROW_BG = 0x00000000;
	/** Row background when the mouse hovers it (card hover lift). */
	public static final int ROW_HOVER = 0x14FFFFFF;
	/** Row background for an enabled module. */
	public static final int ROW_ENABLED = 0x1F9747FF;

	/** Text (bhF = WHITE). */
	public static final int TEXT = 0xFFFFFFFF;
	/** Secondary text (measured ~50% white). */
	public static final int TEXT_DIM = 0x80FFFFFF;
	/** Disabled/faint text (measured ~40% white). */
	public static final int TEXT_DISABLED = 0x66FFFFFF;

	public static final int SLIDER_BG = 0x6618181B;
	public static final int SLIDER_FILL = 0xFFFFFFFF; // multiplied by accent alpha at draw time
	public static final int CHECK_ON = ACCENT;
	public static final int CHECK_OFF = 0x6618181B;
	public static final int CHECK_MARK = 0xFF0C0C0C;
	public static final int EDITOR_BG = 0x6618181B;
	public static final int EDITOR_CURSOR = 0xFFFFFFFF;
	public static final int CAPTURE_BANNER = 0xE618181B;
	public static final int CAPTURE_ACCENT = ACCENT;

	/** Per-category accents: one accent for all categories in the original. */
	public static final int COMBAT = ACCENT;
	public static final int MOVEMENT = ACCENT;
	public static final int PLAYER = ACCENT;
	public static final int VISUALS = ACCENT;
	public static final int CLIENT = ACCENT;

	/** HUD watermark color. */
	public static final int HUD_WATERMARK = 0xFFFFFFFF;
	/** HUD info color (fps / ping). */
	public static final int HUD_INFO = 0xB3FFFFFF;

	/**
	 * HUD element labels and the user-block UID format, captured at their use
	 * sites in the 2026-10-17 runtime trace (analysis/traces/2026-10-17/
	 * strings-full.tsv: {@code sixtwo/jk.bDz} receives "FPS", "BPS", "TPS",
	 * "UID", "XYZ", "Facing"; {@code sixtwo/lC.cez} receives "UID: 1337").
	 * The HUD overlay itself lives in {@code dev.opengrim.hud} (outside this
	 * package) and still renders its own stand-ins; these constants are the
	 * recovered labels for it to pick up.
	 */
	public static final String HUD_FPS = "FPS";
	public static final String HUD_BPS = "BPS";
	public static final String HUD_TPS = "TPS";
	public static final String HUD_UID = "UID";
	public static final String HUD_XYZ = "XYZ";
	public static final String HUD_FACING = "Facing";
	/** "UID: %d" — the sidebar user-block line (trace literal "UID: 1337"). */
	public static final String UID_FORMAT = "UID: %d";

	/** bl.java:100-103 window width. */
	public static final int PANEL_WIDTH = 465;
	/** bl.Ep header height (f4). */
	public static final int HEADER_HEIGHT = 28;
	/** bi card height (page-friends.png). */
	public static final int ROW_HEIGHT = 28;
	/** Setting row height (plain rows). */
	public static final int SETTING_ROW_HEIGHT = 16;
	/** Slider row height (label line + drag bar). */
	public static final int SLIDER_ROW_HEIGHT = 22;
	/** String setting edit box height. */
	public static final int EDITOR_ROW_HEIGHT = 14;
	/** bi card grid gap. */
	public static final int COLUMN_GAP = 5;
	/** Screen margin around the window grid. */
	public static final int MARGIN = 12;
	/** Indentation of children inside a group. */
	public static final int GROUP_INDENT = 5;

	/** The recovered theme surface (ig/ii) as a float color. */
	public static ColorF accent() {
		return Theme.get().accent();
	}

	/**
	 * Returns the accent color for a category — the original uses the single
	 * theme accent for every category.
	 */
	public static int accent(ModuleCategory category) {
		return switch (category) {
			case COMBAT -> COMBAT;
			case MOVEMENT -> MOVEMENT;
			case PLAYER -> PLAYER;
			case VISUALS -> VISUALS;
			case CLIENT -> CLIENT;
		};
	}

	/**
	 * Multiplies the alpha channel of {@code argb} by {@code factor} (0..1).
	 */
	public static int withAlpha(int argb, float factor) {
		int a = (int) (((argb >>> 24) & 0xFF) * Math.max(0.0f, Math.min(1.0f, factor)));
		return (a << 24) | (argb & 0xFFFFFF);
	}
}
