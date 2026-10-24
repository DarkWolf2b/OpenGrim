package dev.opengrim.gui.screen;

import java.util.ArrayList;
import java.util.List;
import java.util.Locale;

import dev.opengrim.config.ConfigManager;
import dev.opengrim.gui.GuiTheme;
import dev.opengrim.gui.anim.Tween;
import dev.opengrim.gui.ui.AnimatedScreen;
import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.Manager;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Popup;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.widgets.TextFieldWidget;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.Setting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.text.Text;
import net.minecraft.util.Identifier;

/**
 * Port of sixtwo.bl: the main Click GUI window (the screen opened by the
 * Interface module's bind, sixtwo.fX).
 *
 * <p>Geometry is 1:1 from the recovered render body {@code bl.Ep}
 * (analysis/gui-src/sixtwo_2.java:869-894): window 465.0 x 305.5 centered on
 * the screen ({@code bl.java:100-103}), corner radius 5.0, background padding
 * {@code ld.all(11.0f)}, sidebar {@code f5 = 100.0f}, header pad
 * {@code f3 = 7.0f} / header height {@code f4 = 28.0f}, content pane
 * {@code bi cjnmJ} at {@code (x + 100, y + 42)} sized {@code (w - 110, h - 42)},
 * drag clamping {@code bl.Et} and the open/close curves of {@code bl.m}
 * (XzDkv while opening, AYqck while closing — see {@link dev.opengrim.gui.anim.Easing}).
 *
 * <p>Internal layout, typography and colours are taken from the recovered
 * reference frames of the original GUI
 * (analysis/artifacts/gui-reference/page-*.png, measured at 1.5 image px per
 * design unit — the frames' window is 697.5x458.25 px = 465x305.5 units) and
 * from the 2026-10-17 runtime trace
 * (analysis/traces/2026-10-17/raw/trace.jsonl; {@code lc} rect getters and
 * {@code lq.caw()} font-size returns of the first {@code bl.Ep} frame):
 * <ul>
 * <li>sidebar ({@code aJ}): the 30x30 logo tile at (5, 7.5) drawn with the
 * payload's {@code logo} raster asset (one texture quad, trace {@code lC.cdU});
 * title "Grim
 * Client" (size 9, baseline 21) + subtitle "Version: 4.4" (size 6, baseline
 * 29.3) at x 40.5; section labels "FEATURES"/"OTHER" (size 5, baselines
 * 55.3/186.0) at x 12.4; nav tabs 80x18 at x 7.5, first at y 60, step 23,
 * +15 section gap, +23 extra gap before "Hud" (trace icon tops 62.4375 +
 * 23k); category icons 13.125 at (11.9375, ty + 2.4375); user block at the
 * bottom (avatar 12px at (11.5, 282), name "matthew" size 7 baseline 286 at
 * x 32.3, "UID: n" size 7 baseline 295.3)</li>
 * <li>header ({@code al}): category icon 13.125 at +6.4375/+7.4375, title
 * (size 8, baseline 16.3) at +26.2, drawn separator dot (circle 2.75 at
 * title-advance + 6, y 12.625) and subtitle (size 7, same baseline) at
 * dot + 2.75 + 6.3; search button 20x20 at {@code hw - 27} with the zoom
 * icon 13.125 at +3.4375; the add icon (10x10 at +306.33/+8.67) only on the
 * Friends/Hud pages (frames)</li>
 * <li>content ({@code bi}): two columns of module cards 175x28 with a 5.0 gap
 * (trace {@code az} sizes 175/28, grid x 100/280, y 42 + 33k), name size 7
 * semibold (accent when the module is enabled), description size 6 regular
 * truncated with "…", radius 3.5</li>
 * <li>Friends empty state ({@code aq}): title size 11 (baseline 147.3),
 * hint size 8 (baseline 160.7), both centred in the content pane</li>
 * </ul>
 *
 * <p>Icon artwork is the payload's own vector/raster asset set, extracted from
 * analysis/decompiled/bootstrap/offline/assets (vector-assets.bin,
 * vector-frames.bin, raster-assets.bin; container formats documented in
 * OfflineClientInit.java:239-406) and shipped as the first animation frame of
 * each icon — the sidebar/header icon shapes now match the frames exactly
 * (category/combat..hud, add, zoom, user_icon). The icons are animated in the
 * original (60 fps frame lists); the port draws frame 1 statically.
 *
 * <p>Typography uses the recovered original font sheets through
 * {@link MsdfFont} (assets/opengrim/fonts/*, baked from
 * analysis/decompiled/bootstrap/offline/fonts) — regular/medium/semibold text
 * plus the icons-4.4 glyph font (still used for the settings-popup close
 * glyph), so glyph shapes and advances are the originals.
 *
 * <p>parity: the popup titles/subtitles and toggle labels of {@code c}'s
 * native bodies remain DES-encrypted; the sidebar labels used here are the
 * ones visible in the reference frames. Backdrop blur / liquid-glass
 * refraction is still not reproducible (the window is drawn as a translucent
 * themed fill at the recovered style opacity).
 */
public class ClickGuiScreen extends AnimatedScreen {
	/** bl.java:100-103 — window size (centered via rm.diq()). */
	public static final float WINDOW_W = 465.0f;
	public static final float WINDOW_H = 305.5f;
	/** bl.Ep constants (bl.java:876-891): f3, f4, f5. */
	private static final float HEADER_PAD = 7.0f;
	private static final float HEADER_H = 28.0f;
	private static final float SIDEBAR_W = 100.0f;
	/** bl.Ep: radius 5.0f for both the background and the border layer. */
	private static final float WINDOW_RADIUS = 5.0f;
	/** aJ sidebar tab strip (aJ ctor; confirmed by page-friends.png). */
	private static final float TAB_X = 7.5f;
	private static final float TAB_W = 80.0f;
	private static final float TAB_H = 18.0f;
	private static final float TAB_STEP = 23.0f;
	private static final float TAB_FIRST_Y = 60.0f;
	/** The +15.0f separator gap of the aJ tab strip. */
	private static final float TAB_SECTION_GAP = 15.0f;
	/** Pill corner radius (frames: ~5 units, not a full stadium). */
	private static final float PILL_RADIUS = 5.0f;
	/** Header bar corner radius (frames: squircle corner, ~6 units circular). */
	private static final float HEADER_RADIUS = 6.0f;
	/** bi card grid (page-friends.png: 175x28 cards, 5.0 gaps, two columns). */
	private static final float CARD_W = 175.0f;
	private static final float CARD_H = 28.0f;
	private static final float CARD_GAP = 5.0f;
	private static final float CARD_RADIUS = 3.5f;
	/** Card text baselines relative to the card top (measured 12.7 / 20.0). */
	private static final float CARD_NAME_BASELINE = 12.7f;
	private static final float CARD_DESC_BASELINE = 20.0f;
	/** Card text inset (measured 7.5). */
	private static final float CARD_TEXT_X = 7.5f;
	/** Sidebar/header typography (measured sizes; trace {@code lq.caw()}). */
	private static final float TITLE_SIZE = 9.0f;
	private static final float SUBTITLE_SIZE = 6.0f;
	private static final float SECTION_SIZE = 5.0f;
	private static final float NAV_SIZE = 7.0f;
	private static final float HEADER_TITLE_SIZE = 8.0f;
	/** Header subtitle + sidebar UID line: size 7 in the trace ({@code lq.caw}). */
	private static final float HEADER_SUBTITLE_SIZE = 7.0f;
	private static final float UID_SIZE = 7.0f;
	private static final float CARD_NAME_SIZE = 7.0f;
	private static final float CARD_DESC_SIZE = 6.0f;
	/** aq empty state: title 11 / hint 8, line gap 15 (aq.java:28-30). */
	private static final float EMPTY_TITLE_SIZE = 11.0f;
	private static final float EMPTY_HINT_SIZE = 8.0f;
	/** Sidebar category icon box (trace rect 11.9375 x ty+2.4375, 13.125). */
	private static final float NAV_ICON_X = 11.9375f;
	private static final float NAV_ICON_Y = 2.4375f;
	private static final float NAV_ICON_SIZE = 13.125f;
	/** Header icon box (trace rect 106.4375, 14.4375, 13.125). */
	private static final float HEADER_ICON_X = 6.4375f;
	private static final float HEADER_ICON_Y = 7.4375f;
	private static final float HEADER_ICON_SIZE = 13.125f;
	/** Header title text x (frames: glyphs start at 126.7 = hx + 26.7). */
	private static final float HEADER_TITLE_X = 26.2f;
	/** Separator dot: circle 2.75 at title-advance + 6 (trace 132.625 t=0, 161.92 t=1). */
	private static final float HEADER_DOT_SIZE = 2.75f;
	private static final float HEADER_DOT_GAP = 6.0f;
	private static final float HEADER_DOT_Y = 12.625f;
	/** Header search button 20x20 at hw - 27 with the zoom icon inset 3.4375. */
	private static final float HEADER_BUTTON_W = 20.0f;
	private static final float HEADER_BUTTON_RIGHT = 27.0f;
	private static final float HEADER_BUTTON_INSET = 3.4375f;
	/** The add icon of the Friends/Hud header (frames: 10x10 at 306.33/8.67). */
	private static final float HEADER_ADD_X = 306.33f;
	private static final float HEADER_ADD_Y = 8.67f;
	private static final float HEADER_ADD_SIZE = 10.0f;
	/** "Grim Client" / "Version: 4.4" (page-*.png sidebar + trace cez strings). */
	private static final String CLIENT_TITLE = "Grim Client";
	private static final String CLIENT_VERSION = "Version: 4.4";
	private static final String FEATURES_LABEL = "FEATURES";
	private static final String OTHER_LABEL = "OTHER";
	private static final String FRIENDS_TITLE = "Friends";
	private static final String HUD_TITLE = "Hud";
	private static final String FRIENDS_EMPTY_TITLE = "You haven't got any friends.";
	private static final String FRIENDS_EMPTY_HINT = "Add new friends using Middle Click Friend module!";

	/**
	 * Icon textures: the payload's vector/raster UI assets
	 * (bootstrap/offline/assets; extracted first animation frames, see the
	 * class doc). The file names are the asset keys of vector-assets.bin
	 * ({@code category/*}, {@code add}, {@code zoom}) and raster-assets.bin
	 * ({@code user_icon}).
	 */
	private static final Identifier ICON_USER = Identifier.of("opengrim", "icons/user.png");
	private static final Identifier ICON_ZOOM = Identifier.of("opengrim", "icons/zoom.png");
	private static final Identifier ICON_ADD = Identifier.of("opengrim", "icons/add.png");
	/**
	 * The sidebar logo tile artwork: the payload's {@code logo} raster asset
	 * (bootstrap/offline/assets/raster-assets.bin, 60x60 PNG) — the trace draws
	 * the tile as a single texture quad ({@code lC.cdU(Identifier, rect(5, 7.5,
	 * 30, 30), mG)}).
	 */
	private static final Identifier ICON_LOGO = Identifier.of("opengrim", "icons/logo.png");

	/**
	 * The sidebar pages in the recovered order (page-*.png; trace tab loop).
	 * The five feature pages are the original {@code gh} categories; their
	 * cards come from {@link ModuleManager#byCategory} in registration order,
	 * which is the original module-map order (registry class id — see
	 * analysis/artifacts/gui-reference/category-map.tsv).
	 */
	private enum Page {
		COMBAT(ModuleCategory.COMBAT, "Combat", "category_combat"),
		MOVEMENT(ModuleCategory.MOVEMENT, "Movement", "category_movement"),
		PLAYER(ModuleCategory.PLAYER, "Player", "category_player"),
		VISUALS(ModuleCategory.VISUALS, "Visuals", "category_visuals"),
		CLIENT(ModuleCategory.CLIENT, "Client", "category_client"),
		FRIENDS(null, FRIENDS_TITLE, "category_friends"),
		HUD(null, HUD_TITLE, "category_hud");

		final ModuleCategory category;
		final String title;
		final Identifier icon;

		Page(ModuleCategory category, String title, String iconAsset) {
			this.category = category;
			this.title = title;
			this.icon = Identifier.of("opengrim", "icons/" + iconAsset + ".png");
		}
	}

	private static final Page[] PAGES = Page.values();

	private final Manager manager = new Manager();
	private final TextFieldWidget search;
	private final SettingsWindow settingsWindow;
	private final ModuleBindPopup bindPopup = new ModuleBindPopup();

	private Page page = Page.COMBAT;
	private float windowX;
	private float windowY;
	private boolean dragging;
	private float dragX;
	private float dragY;
	private float scroll;
	private Module hovered;
	/** Header subtitle: the description of the last hovered module (see class doc). */
	private String subtitle = "";
	private final Tween pill = new Tween(150, 0.0f);
	/** bc result row: a module and/or one of its settings. */
	private record SearchResult(Module module, Setting<?> setting, String label, String detail) {
	}

	/** bc search overlay state (opened from the magnifier/Ctrl+F). */
	private boolean searchOpen;
	private int searchSelected;
	private List<SearchResult> searchResults = List.of();
	private static final int SEARCH_MAX_RESULTS = 8;
	private static final float SEARCH_ROW_H = 18.0f;
	private static final float SEARCH_BAR_H = 28.0f;

	public ClickGuiScreen() {
		super(Text.literal(CLIENT_TITLE));
		search = new TextFieldWidget("Search");
		search.bare(true);
		search.onChange(this::onSearchChanged);
		settingsWindow = new SettingsWindow();
		settingsWindow.setVisible(false);
		settingsWindow.setKeybindRowAction(this::openBindPopup);
		manager.add(settingsWindow);
		manager.add(bindPopup);
		centre();
	}

	private void openBindPopup(Module module, float x, float y) {
		float px = Math.max(0.0f, Math.min(x + 20.0f, designWindowWidth() - 110.0f));
		float py = Math.max(0.0f, Math.min(y, designWindowHeight() - 80.0f));
		bindPopup.openFor(module, px, py);
		manager.raise(bindPopup);
	}

	/** bl.java:100-103 — centered on the screen at construction. */
	private void centre() {
		windowX = designWindowWidth() / 2.0f - WINDOW_W / 2.0f;
		windowY = designWindowHeight() / 2.0f - WINDOW_H / 2.0f;
	}

	/**
	 * Screen.width/height are only set when the screen is opened (init/resize),
	 * not at construction — re-centre here so the window lands on-screen
	 * (construction-time centring computed negative coordinates).
	 */
	@Override
	protected void init() {
		super.init();
		centre();
	}

	/** bl/av: the design space is the raw screen space (rm.diq()). */
	@Override
	protected float designWidth() {
		return width;
	}

	@Override
	protected float designHeight() {
		return height;
	}

	// ------------------------------------------------------------------
	// Layout helpers (bl.Ep: bl.java:869-894)
	// ------------------------------------------------------------------

	/** bi cjnmJ: content pane. */
	private float contentX() {
		return windowX + SIDEBAR_W;
	}

	private float contentY() {
		return windowY + 42.0f;
	}

	private float contentW() {
		return WINDOW_W - SIDEBAR_W - 10.0f;
	}

	private float contentH() {
		return WINDOW_H - 42.0f;
	}

	/** al ZmUwR: header row. */
	private float headerX() {
		return windowX + SIDEBAR_W;
	}

	private float headerY() {
		return windowY + HEADER_PAD;
	}

	private float headerW() {
		return WINDOW_W - SIDEBAR_W - 10.0f;
	}

	/** aJ tab strip y for a sidebar entry (measured from the window top). */
	private float tabY(int index) {
		float y = TAB_FIRST_Y;
		for (int i = 0; i < index; i++) {
			y += TAB_STEP;
			if (i == 4) {
				y += TAB_SECTION_GAP;
			}
			if (i == 5) {
				// page-*.png: the Hud entry sits one further row below Friends.
				y += TAB_STEP;
			}
		}
		return windowY + y;
	}

		/** One grid entry: a module card or a friend card (Friends page). */
	private record Card(String name, String description, Module module) {
	}

	/** The cards of the current page (module grid, or the friend list). */
	private List<Card> pageCards() {
		if (page == Page.FRIENDS) {
			List<Card> friends = new ArrayList<>();
			String query = search.text().toLowerCase(Locale.ROOT).trim();
			for (String name : FriendsManager.all()) {
				if (query.isEmpty() || name.toLowerCase(Locale.ROOT).contains(query)) {
					friends.add(new Card(name, "", null));
				}
			}
			friends.sort(java.util.Comparator.comparing(Card::name, String.CASE_INSENSITIVE_ORDER));
			return friends;
		}
		if (page.category == null) {
			return List.of();
		}
		String query = search.text().toLowerCase(Locale.ROOT).trim();
		List<Card> out = new ArrayList<>();
		if (!query.isEmpty()) {
			for (Module module : ModuleManager.get().getModules()) {
				if (module.getName().toLowerCase(Locale.ROOT).contains(query)
						|| module.getId().toLowerCase(Locale.ROOT).contains(query)) {
					out.add(new Card(module.getName(), module.getDescription(), module));
				}
			}
			return out;
		}
		for (Module module : ModuleManager.get().byCategory(page.category)) {
			out.add(new Card(module.getName(), module.getDescription(), module));
		}
		return out;
	}

	private void onSearchChanged(String query) {
		scroll = 0.0f;
		refreshSearchResults();
	}

	/** bc result scan: module names/ids/descriptions and every setting id. */
	private void refreshSearchResults() {
		String query = search.text().toLowerCase(Locale.ROOT).trim();
		if (query.isEmpty()) {
			searchResults = List.of();
			searchSelected = 0;
			return;
		}
		List<SearchResult> results = new ArrayList<>();
		for (Module module : ModuleManager.get().getModules()) {
			if (module.getName().toLowerCase(Locale.ROOT).contains(query)
					|| module.getId().contains(query)
					|| module.getDescription().toLowerCase(Locale.ROOT).contains(query)) {
				results.add(new SearchResult(module, null, module.getName(),
						module.getCategory().name().toLowerCase(Locale.ROOT)));
			}
			collectSettingResults(results, module, module.getSettings(), module.getName(), query);
		}
		results.sort(java.util.Comparator.comparing(SearchResult::label, String.CASE_INSENSITIVE_ORDER));
		searchResults = results.stream().limit(SEARCH_MAX_RESULTS).toList();
		searchSelected = Math.max(0, Math.min(searchSelected, searchResults.size() - 1));
	}

	private void collectSettingResults(List<SearchResult> out, Module module, List<Setting<?>> settings,
			String prefix, String query) {
		for (Setting<?> setting : settings) {
			if (setting instanceof GroupSetting group) {
				collectSettingResults(out, module, group.getChildren(), prefix, query);
				continue;
			}
			if (setting.getId().toLowerCase(Locale.ROOT).contains(query)) {
				out.add(new SearchResult(module, setting, prefix + " > " + setting.getId(),
						module.getCategory().name().toLowerCase(Locale.ROOT)));
			}
		}
	}

	private void openSearch() {
		searchOpen = true;
		search.focus();
		refreshSearchResults();
	}

	private void dismissSearchOverlay() {
		searchOpen = false;
		search.blur();
		searchResults = List.of();
		searchSelected = 0;
	}

	private void closeSearch() {
		dismissSearchOverlay();
		search.clear();
	}

	private void selectSearchResult() {
		if (searchSelected < 0 || searchSelected >= searchResults.size()) {
			return;
		}
		SearchResult result = searchResults.get(searchSelected);
		Module module = result.module();
		page = switch (module.getCategory()) {
			case COMBAT -> Page.COMBAT;
			case MOVEMENT -> Page.MOVEMENT;
			case PLAYER -> Page.PLAYER;
			case VISUALS -> Page.VISUALS;
			case CLIENT -> Page.CLIENT;
		};
		List<Card> cards = pageCards();
		int index = -1;
		for (int i = 0; i < cards.size(); i++) {
			if (cards.get(i).module() == module) {
				index = i;
				break;
			}
		}
		scroll = index < 0 ? 0.0f : Math.max(0.0f, (index / 2) * (CARD_H + CARD_GAP));
		subtitle = module.getDescription();
		dismissSearchOverlay();
		openSettings(module);
		if (result.setting() != null) {
			settingsWindow.scrollToSetting(result.setting());
		}
	}

	private float searchX() {
		return windowX + (WINDOW_W - searchWidth()) / 2.0f;
	}

	private float searchY() {
		// bc ctor: y = window.y - padding * 2 (padding 5).
		return windowY - 10.0f;
	}

	private float searchWidth() {
		return WINDOW_W / 2.25f;
	}

	private float searchHeight() {
		return SEARCH_BAR_H + searchResults.size() * SEARCH_ROW_H;
	}

	// ------------------------------------------------------------------
	// Rendering (bl.Ep)
	// ------------------------------------------------------------------

	@Override
	protected void renderGui(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont medium = MsdfFont.of(MsdfFont.MEDIUM);
		MsdfFont regular = MsdfFont.regular();
		if (!settingsWindow.isVisible() && bindPopup.isVisible()) {
			bindPopup.close();
		}
		float t = Math.min(1.0f, openTween.current());
		float alpha = Math.min(1.0f, t);

		// bl.Ep: background layer. Blur uses the recovered two-pass separable
		// backdrop; Liquid Glass uses the recovered liquid_glass composite;
		// Solid keeps the opaque themed fill.
		boolean blurred;
		if (theme.backgroundStyle() == Theme.BackgroundStyle.LIQUID_GLASS) {
			// lC.ccW's glass branch passes ii2.bjm() (theme PanelProps.bhk,
			// recovered default 0.0) as the corner smoothing. It is a 0..1
			// smoothing value, not the shape shader's squircle exponent; passing
			// the 5.0 exponent here turned the window into a square-cornered
			// fill that stepped outside the rounded border.
			blurred = draw.glassBackdrop(windowX, windowY, WINDOW_W, WINDOW_H, WINDOW_RADIUS,
					0.0f, theme.glassFill(), alpha);
		} else if (theme.backgroundStyle() == Theme.BackgroundStyle.BLUR) {
			blurred = draw.blurredBackdrop(windowX, windowY, WINDOW_W, WINDOW_H, WINDOW_RADIUS,
					theme.background(), styleOpacity(), alpha);
		} else {
			blurred = false;
		}
		if (!blurred) {
			draw.fillRounded(windowX, windowY, WINDOW_W, WINDOW_H, WINDOW_RADIUS,
					theme.background().withAlphaScale(alpha * styleOpacity())
							.lerp(theme.panelColor(), 0.3f * alpha));
		}
		draw.strokeRounded(windowX, windowY, WINDOW_W, WINDOW_H, WINDOW_RADIUS,
				theme.text().withAlphaScale(0.06f * alpha));

		drawSidebar(draw, theme, semibold, medium, regular, alpha);
		drawHeader(draw, theme, semibold, regular, alpha);
		drawContent(draw, theme, semibold, regular, alpha);
		manager.render(draw);
		if (searchOpen) {
			drawSearchOverlay(draw, theme, semibold, regular, alpha);
		}
	}

	/**
	 * Port of the {@code bc} search overlay: a centered bar above the window
	 * (width {@code window / 2.25}, height {@code lineHeight*2 + 10}) that
	 * expands into a result list. The original searches modules and settings;
	 * the port searches module names/ids/descriptions and navigates to the
	 * result's category page.
	 */
	private void drawSearchOverlay(GuiDraw draw, Theme theme, MsdfFont semibold, MsdfFont regular,
			float alpha) {
		float x = searchX();
		float y = searchY();
		float w = searchWidth();
		float h = searchHeight();
		ColorF panel = theme.panelColor().withAlphaScale(alpha);
		draw.fillRounded(x, y, w, h, 6.0f, panel);
		draw.strokeRounded(x, y, w, h, 6.0f, theme.text().withAlphaScale(0.08f * alpha));

		String text = search.text();
		String shown = text.isEmpty() ? "Search" : text;
		ColorF textColor = text.isEmpty() ? theme.text().withAlphaScale(0.4f * alpha) : theme.text().withAlphaScale(alpha);
		draw.text(regular, shown, x + 7.0f, y + (SEARCH_BAR_H - 8.0f) / 2.0f, 8.0f, textColor);
		if (search.isFocused() && (System.currentTimeMillis() / 500) % 2 == 0) {
			float caret = x + 7.0f + draw.textWidth(regular, text, 8.0f);
			draw.fillRect(caret, y + (SEARCH_BAR_H - 8.0f) / 2.0f, 1.0f, 8.0f,
					theme.accent().withAlphaScale(alpha));
		}

		for (int i = 0; i < searchResults.size(); i++) {
			SearchResult result = searchResults.get(i);
			float rowY = y + SEARCH_BAR_H + i * SEARCH_ROW_H;
			if (i == searchSelected) {
				draw.fillRounded(x + 3.0f, rowY + 1.0f, w - 6.0f, SEARCH_ROW_H - 2.0f, 3.5f,
						theme.accent().withAlphaScale(0.25f * alpha));
			}
			draw.text(semibold, result.label(), x + 7.0f, rowY + 5.0f, 7.0f,
					theme.text().withAlphaScale(alpha));
			draw.textRight(regular, result.detail(), x + w - 7.0f, rowY + 6.0f, 6.0f,
					theme.text().withAlphaScale(0.5f * alpha));
		}
	}

	/** fX background-style opacity (0.2 / 0.75 / 0.85). */
	private float styleOpacity() {
		return Theme.get().backgroundStyle().opacity;
	}

	/**
	 * Draws an icon texture in design space. The payload's icons are 20-24 px
	 * PNGs drawn as 10-13 unit quads (trace {@code cdW} rects), so the full
	 * texture is mapped onto the destination box.
	 */
	private static void drawIcon(GuiDraw draw, Identifier texture, float x, float y, float size, float textureSize,
			ColorF color) {
		draw.texturedQuad(texture, x, y, x + size, y + size, 0.0f, 0.0f, textureSize, textureSize, textureSize,
				textureSize, color);
	}

	private void drawSidebar(GuiDraw draw, Theme theme, MsdfFont semibold, MsdfFont medium, MsdfFont regular,
			float alpha) {
		ColorF text = theme.text().withAlphaScale(alpha);
		ColorF muted = theme.text().withAlphaScale(0.5f * alpha);
		ColorF faint = theme.text().withAlphaScale(0.4f * alpha);

		// aJ: the 30x30 logo tile at (5, 7.5). The trace draws it as ONE texture
		// quad (lC.cdU with the tile rect); the artwork is the payload's "logo"
		// raster asset (shipped as assets/opengrim/icons/logo.png).
		drawIcon(draw, ICON_LOGO, windowX + 5.0f, windowY + 7.5f, 30.0f, 60.0f, text);

		// Title / subtitle pair (the WpzHJ stacked style of the sidebar popup).
		float titleX = windowX + 40.5f;
		draw.text(semibold, CLIENT_TITLE, titleX, baselineTop(semibold, TITLE_SIZE, windowY + 21.0f), TITLE_SIZE, text);
		draw.text(regular, CLIENT_VERSION, titleX, baselineTop(regular, SUBTITLE_SIZE, windowY + 29.3f),
				SUBTITLE_SIZE, muted);

		draw.text(medium, FEATURES_LABEL, windowX + 12.4f,
				baselineTop(medium, SECTION_SIZE, windowY + 55.3f), SECTION_SIZE, faint);

		float pillY = tabY(indexOfSelected());
		pill.update(pillY);
		for (int i = 0; i < PAGES.length; i++) {
			Page entry = PAGES[i];
			float ty = tabY(i);
			boolean selected = entry == page;
			// The sliding accent pill (cL element of sixtwo.c; slide is a
			// high-probability reading of the cL start/end pair).
			if (selected) {
				draw.fillRounded(windowX + TAB_X, pill.current(), TAB_W, TAB_H, PILL_RADIUS,
						theme.accent().withAlphaScale(alpha));
			}
			// Category icon texture (trace cdW rect 11.9375 x ty+2.4375, 13.125).
			drawIcon(draw, entry.icon, windowX + NAV_ICON_X, ty + NAV_ICON_Y, NAV_ICON_SIZE, 24.0f,
					selected ? ColorF.WHITE.withAlphaScale(alpha) : text);
			MsdfFont label = selected ? semibold : medium;
			draw.text(label, entry.title, windowX + 29.5f, baselineTop(label, NAV_SIZE, ty + 11.5f), NAV_SIZE,
					selected ? ColorF.WHITE.withAlphaScale(alpha) : text);
			if (i == 4) {
				draw.text(medium, OTHER_LABEL, windowX + 12.4f,
						baselineTop(medium, SECTION_SIZE, windowY + 186.0f), SECTION_SIZE, faint);
			}
		}

		// User block (frames: avatar 12px at (11.5, 282), name baseline 286 /
		// "UID: n" baseline 295.3, both size 7 at x 32.3).
		drawIcon(draw, ICON_USER, windowX + 11.5f, windowY + 282.0f, 12.0f, 40.0f, text);
		draw.text(semibold, playerName(), windowX + 32.3f,
				baselineTop(semibold, NAV_SIZE, windowY + 286.0f), NAV_SIZE, text);
		draw.text(regular, String.format(GuiTheme.UID_FORMAT, userId()), windowX + 32.3f,
				baselineTop(regular, UID_SIZE, windowY + 295.3f), UID_SIZE, muted);
	}

	private void drawHeader(GuiDraw draw, Theme theme, MsdfFont semibold, MsdfFont regular, float alpha) {
		ColorF text = theme.text().withAlphaScale(alpha);
		ColorF muted = theme.text().withAlphaScale(0.5f * alpha);
		float hx = headerX();
		float hy = headerY();
		float hw = headerW();
		// al: header bar (page-*.png: filled with the panel colour, radius ~6).
		draw.fillRounded(hx, hy, hw, HEADER_H, HEADER_RADIUS, theme.panelColor().withAlphaScale(alpha));

		// Category icon + title (trace: icon rect 106.4375/14.4375 13.125,
		// title glyphs size 8 starting at 126.7).
		drawIcon(draw, page.icon, hx + HEADER_ICON_X, hy + HEADER_ICON_Y, HEADER_ICON_SIZE, 24.0f, text);
		draw.text(semibold, page.title, hx + HEADER_TITLE_X,
				baselineTop(semibold, HEADER_TITLE_SIZE, hy + 16.3f), HEADER_TITLE_SIZE, text);

		String sub = pageSubtitle();
		if (!sub.isEmpty()) {
			// The separator is a drawn circle (trace lC.cdc: 2.75 at
			// title-advance + 6, y 19.625), not a glyph.
			float dotX = hx + HEADER_TITLE_X + semibold.width(page.title, HEADER_TITLE_SIZE) + HEADER_DOT_GAP;
			draw.fillCircle(dotX, hy + HEADER_DOT_Y, HEADER_DOT_SIZE, muted);
			draw.text(regular, sub, dotX + HEADER_DOT_SIZE + 6.3f,
					baselineTop(regular, HEADER_SUBTITLE_SIZE, hy + 16.3f), HEADER_SUBTITLE_SIZE, muted);
		}

		// The add icon of the Friends/Hud pages (frames; trace az 12x12 in the
		// header, drawn 10x10 at 306.33/8.67).
		if (page == Page.FRIENDS || page == Page.HUD) {
			drawIcon(draw, ICON_ADD, hx + HEADER_ADD_X, hy + HEADER_ADD_Y, HEADER_ADD_SIZE, 20.0f, muted);
		}

		// Search: the recovered zoom button (20x20, trace az at hw - 27, icon
		// 13.125 inset 3.4375) opens the bc overlay.
		float buttonX = hx + hw - HEADER_BUTTON_RIGHT;
		drawIcon(draw, ICON_ZOOM, buttonX + HEADER_BUTTON_INSET, hy + 4.0f + HEADER_BUTTON_INSET,
				HEADER_ICON_SIZE, 24.0f, searchOpen ? text : muted);
	}

	private void drawContent(GuiDraw draw, Theme theme, MsdfFont semibold, MsdfFont regular, float alpha) {
		float cx = contentX();
		float cy = contentY();
		float cw = contentW();
		float ch = contentH();
		draw.pushScissor(cx, cy, cw, ch);

		List<Card> cards = pageCards();
		if (cards.isEmpty()) {
			// Only the Friends page shows the recovered empty-state pair
			// (page-combat.png); empty category pages stay blank (page-player.png).
			if (page == Page.FRIENDS) {
				drawEmptyState(draw, theme, semibold, regular, cx, cw, alpha);
			}
			draw.popScissor();
			return;
		}
		ColorF text = theme.text().withAlphaScale(alpha);
		float maxScroll = Math.max(0.0f, rowsFor(cards.size()) * (CARD_H + CARD_GAP) - CARD_GAP - ch);
		scroll = Math.max(0.0f, Math.min(scroll, maxScroll));
		hovered = null;
		for (int i = 0; i < cards.size(); i++) {
			Card card = cards.get(i);
			float x = cx + (i % 2) * (CARD_W + CARD_GAP);
			float y = cy + (i / 2) * (CARD_H + CARD_GAP) - scroll;
			if (y + CARD_H < cy || y > cy + ch) {
				continue;
			}
			boolean hover = draw.mouseX() >= x && draw.mouseX() < x + CARD_W
					&& draw.mouseY() >= y && draw.mouseY() < y + CARD_H;
			boolean enabled = card.module() != null && card.module().isEnabled();
			ColorF bg = theme.panelColor().withAlphaScale(alpha);
			if (hover) {
				bg = bg.lerp(theme.text(), 0.05f);
				hovered = card.module();
			}
			draw.fillRounded(x, y, CARD_W, CARD_H, CARD_RADIUS, bg);
			draw.text(semibold, card.name(), x + CARD_TEXT_X,
					baselineTop(semibold, CARD_NAME_SIZE, y + CARD_NAME_BASELINE), CARD_NAME_SIZE,
					enabled ? theme.accent().withAlphaScale(alpha) : text);
			String description = card.description() == null ? "" : card.description();
			draw.text(regular, regular.truncate(description, CARD_DESC_SIZE, CARD_W - 2 * CARD_TEXT_X),
					x + CARD_TEXT_X, baselineTop(regular, CARD_DESC_SIZE, y + CARD_DESC_BASELINE),
					CARD_DESC_SIZE, theme.text().withAlphaScale(0.5f * alpha));
		}
		if (hovered != null && hovered.getDescription() != null) {
			subtitle = hovered.getDescription();
		}
		draw.popScissor();
	}

	private void drawEmptyState(GuiDraw draw, Theme theme, MsdfFont semibold, MsdfFont regular, float cx, float cw,
			float alpha) {
		String title = FRIENDS_EMPTY_TITLE;
		String hint = FRIENDS_EMPTY_HINT;
		float titleW = semibold.width(title, EMPTY_TITLE_SIZE);
		float hintW = regular.width(hint, EMPTY_HINT_SIZE);
		// page-combat.png: centered pair, title (size 11, aq.java:28) baseline
		// 147.3 / hint (size 8, aq.java:29) baseline 160.7 from the window top.
		draw.text(semibold, title, cx + (cw - titleW) / 2.0f,
				baselineTop(semibold, EMPTY_TITLE_SIZE, windowY + 147.3f), EMPTY_TITLE_SIZE,
				theme.text().withAlphaScale(alpha));
		draw.text(regular, hint, cx + (cw - hintW) / 2.0f,
				baselineTop(regular, EMPTY_HINT_SIZE, windowY + 160.7f), EMPTY_HINT_SIZE,
				theme.text().withAlphaScale(0.5f * alpha));
	}

	/** Convert a measured baseline into the em-box top used by {@link MsdfFont}. */
	private static float baselineTop(MsdfFont font, float size, float baseline) {
		return baseline - (font == null ? size : font.ascent(size));
	}

	private int rowsFor(int count) {
		return (count + 1) / 2;
	}

	private int indexOfSelected() {
		for (int i = 0; i < PAGES.length; i++) {
			if (PAGES[i] == page) {
				return i;
			}
		}
		return 0;
	}

	private String pageSubtitle() {
		if (page == Page.FRIENDS) {
			return "Total friends " + FriendsManager.all().size();
		}
		if (page == Page.HUD) {
			return "";
		}
		return subtitle;
	}

	private String playerName() {
		MinecraftClient client = MinecraftClient.getInstance();
		return client != null && client.getSession() != null ? client.getSession().getUsername() : "";
	}

	private int userId() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client != null && client.player != null) {
			return client.player.getUuid().hashCode() & 0xFFFF;
		}
		return 0;
	}

	// ------------------------------------------------------------------
	// Input
	// ------------------------------------------------------------------

	@Override
	protected boolean onMouseClicked(double mx, double my, MouseButton button) {
		if (searchOpen) {
			if (onSearchClicked(mx, my, button)) {
				return true;
			}
		}
		// An armed keybind row captures the next mouse button anywhere on the
		// screen, so mouse bindings work from the same row.
		if (settingsWindow.isVisible() && settingsWindow.isCapturingKeybind()
				&& settingsWindow.captureKeybindMouse(button)) {
			return true;
		}
		if (settingsWindow.isVisible() && settingsWindow.contains(mx, my)) {
			manager.mouseDown(mx, my, button);
			return true;
		}
		if (bindPopup.isVisible()) {
			if (bindPopup.contains(mx, my)) {
				manager.mouseDown(mx, my, button);
				return true;
			}
			bindPopup.close();
		}
		if (searchIconHit(mx, my)) {
			if (searchOpen) {
				closeSearch();
			} else {
				openSearch();
			}
			return true;
		}
		if ((button == MouseButton.LEFT || button == MouseButton.RIGHT) && my >= windowY
				&& my < windowY + WINDOW_H && mx >= windowX && mx < windowX + WINDOW_W) {
			// aJ tab strip hit test (inverse of tabY). Left click only.
			for (int i = 0; i < PAGES.length; i++) {
				float ty = tabY(i);
				if (button == MouseButton.LEFT && mx >= windowX + TAB_X && mx < windowX + TAB_X + TAB_W
						&& my >= ty && my < ty + TAB_H) {
					selectPage(PAGES[i]);
					return true;
				}
			}
			// bi card grid hit test: left click toggles, right click opens the settings window.
			List<Card> cards = pageCards();
			for (int i = 0; i < cards.size(); i++) {
				float x = contentX() + (i % 2) * (CARD_W + CARD_GAP);
				float y = contentY() + (i / 2) * (CARD_H + CARD_GAP) - scroll;
				if (mx >= x && mx < x + CARD_W && my >= y && my < y + CARD_H) {
					Module module = cards.get(i).module();
					if (module == null) {
						return true;
					}
					if (button == MouseButton.RIGHT) {
						openSettings(module);
					} else {
						module.toggle();
					}
					return true;
				}
			}
			if (button == MouseButton.LEFT && my < windowY + HEADER_H + HEADER_PAD) {
				// al header surface drag (bl.TCMij + bvjoR/dKaMJ offsets).
				dragging = true;
				dragX = (float) (mx - windowX);
				dragY = (float) (my - windowY);
				return true;
			}
		}
		return false;
	}

	private boolean searchIconHit(double mx, double my) {
		float buttonX = headerX() + headerW() - HEADER_BUTTON_RIGHT;
		float buttonY = headerY() + 4.0f;
		return mx >= buttonX && mx < buttonX + HEADER_BUTTON_W && my >= buttonY
				&& my < buttonY + HEADER_BUTTON_W;
	}

	private boolean onSearchClicked(double mx, double my, MouseButton button) {
		float x = searchX();
		float y = searchY();
		float w = searchWidth();
		if (mx >= x && mx < x + w && my >= y && my < y + searchHeight()) {
			if (my >= y + SEARCH_BAR_H) {
				int index = (int) ((my - (y + SEARCH_BAR_H)) / SEARCH_ROW_H);
				if (index >= 0 && index < searchResults.size()) {
					searchSelected = index;
					selectSearchResult();
				}
			} else {
				search.onMouseDown(mx, my, button);
			}
			return true;
		}
		dismissSearchOverlay();
		return false;
	}

	private void selectPage(Page next) {
		if (page != next) {
			page = next;
			scroll = 0.0f;
			subtitle = "";
		}
	}

	private void openSettings(Module module) {
		// bg.CQ (sixtwo_52.java:488-544): the settings panel of a module card is
		// created at the window's right edge + 10.0f, aligned with the window
		// top (bl.Ey() = the bl window rect). Re-targeting the same card keeps
		// the panel (bd.Cg(true)); other cards' panels are hidden.
		bindPopup.close();
		settingsWindow.openFor(module, windowX + WINDOW_W + 10.0f, windowY);
		// [G] port guard: keep the panel reachable on design viewports narrower
		// than window + panel + 10 (the original clamps the window only, bl.Et).
		settingsWindow.clampInto(designWindowWidth(), designWindowHeight());
		manager.remove(settingsWindow);
		manager.add(settingsWindow);
	}

	/** Command/UI hook: open a module's settings panel on an already-open screen. */
	public void openModuleSettings(Module module) {
		selectPage(pageFor(module.getCategory()));
		openSettings(module);
	}

	private static Page pageFor(ModuleCategory category) {
		return switch (category) {
			case COMBAT -> Page.COMBAT;
			case MOVEMENT -> Page.MOVEMENT;
			case PLAYER -> Page.PLAYER;
			case VISUALS -> Page.VISUALS;
			case CLIENT -> Page.CLIENT;
		};
	}

	@Override
	protected boolean onMouseReleased(double mx, double my, MouseButton button) {
		boolean consumed = manager.mouseUp(mx, my, button);
		if (dragging) {
			dragging = false;
			consumed = true;
		}
		return consumed;
	}

	@Override
	protected boolean onMouseDragged(double mx, double my, MouseButton button, double dx, double dy) {
		if (dragging) {
			windowX = (float) (mx - dragX);
			windowY = (float) (my - dragY);
			clampWindow();
			return true;
		}
		return manager.mouseDrag(mx, my, button, dx, dy);
	}

	/** bl.Et: clamp the window into the screen. */
	private void clampWindow() {
		float maxX = Math.max(0.0f, designWindowWidth() - WINDOW_W);
		float maxY = Math.max(0.0f, designWindowHeight() - WINDOW_H);
		windowX = Math.max(0.0f, Math.min(windowX, maxX));
		windowY = Math.max(0.0f, Math.min(windowY, maxY));
	}

	@Override
	protected boolean onMouseScrolled(double mx, double my, double amount) {
		if (searchOpen) {
			return true;
		}
		if (settingsWindow.isVisible() && settingsWindow.onScroll(mx, my, amount)) {
			return true;
		}
		if (mx >= contentX() && mx < contentX() + contentW() && my >= contentY()) {
			scroll -= (float) amount * 12.0f;
			return true;
		}
		return false;
	}

	@Override
	protected boolean onCharTyped(char c) {
		if (searchOpen) {
			search.onCharTyped(c);
			return true;
		}
		if (bindPopup.isVisible() && bindPopup.isListening()) {
			return true;
		}
		if (settingsWindow.isVisible() && settingsWindow.isCapturingKeybind()) {
			return true;
		}
		return manager.charTyped(c);
	}

	@Override
	protected boolean onKeyPressed(int key, int scancode, int modifiers) {
		// An armed keybind row owns the keyboard until it binds or cancels.
		if (settingsWindow.isVisible() && settingsWindow.isCapturingKeybind()) {
			settingsWindow.onKeyPressed(key, scancode, modifiers);
			return true;
		}
		if (bindPopup.isVisible() && bindPopup.onKeyPressed(key, scancode, modifiers)) {
			return true;
		}
		if (searchOpen) {
			if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_ESCAPE) {
				closeSearch();
				return true;
			}
			if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_ENTER
					|| key == org.lwjgl.glfw.GLFW.GLFW_KEY_KP_ENTER) {
				selectSearchResult();
				return true;
			}
			if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_UP && !searchResults.isEmpty()) {
				searchSelected = (searchSelected - 1 + searchResults.size()) % searchResults.size();
				return true;
			}
			if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_DOWN && !searchResults.isEmpty()) {
				searchSelected = (searchSelected + 1) % searchResults.size();
				return true;
			}
			search.onKeyPressed(key, scancode, modifiers);
			return true;
		}
		// bl.onKeyPressed opens the bc search overlay on the Ctrl-modified key.
		if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_F
				&& (modifiers & org.lwjgl.glfw.GLFW.GLFW_MOD_CONTROL) != 0) {
			openSearch();
			return true;
		}
		if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_ESCAPE) {
			closeNow();
			return true;
		}
		if (manager.keyPressed(key, scancode, modifiers)) {
			return true;
		}
		// RSHIFT closes the GUI (fX bind 344; GuiManager also closes).
		if (key == org.lwjgl.glfw.GLFW.GLFW_KEY_RIGHT_SHIFT) {
			closeNow();
			return true;
		}
		// Keep every other key press inside the screen. Returning false here
		// lets Keyboard.onKey pass the press to KeyBinding.setKeyPressed, which
		// makes WASD/space move the player while the Click GUI is open.
		return true;
	}

	@Override
	public void removed() {
		// Save on GUI close (framework contract: config write on close).
		new ConfigManager().save();
		closeSearch();
		bindPopup.close();
		super.removed();
	}

	/** Exposed for the manager/tests: the popup surface of this screen. */
	public Popup settingsPopup() {
		return settingsWindow;
	}
}
