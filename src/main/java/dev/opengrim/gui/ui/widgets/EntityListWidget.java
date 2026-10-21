package dev.opengrim.gui.ui.widgets;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.MouseButton;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.gui.ui.Widget;
import dev.opengrim.settings.EntityListSetting;
import net.minecraft.entity.EntityType;

/**
 * Entity-type multiselect list for {@link EntityListSetting} — the OpenGrim
 * form of the original {@code cF} picker (sixtwo.cF).
 *
 * <p>The original widget renders the universe as an expandable list with the
 * selected entries highlighted ({@code cF.sulLA}). This list reproduces the
 * selection surface (name + selected state) with the repo's MSDF/shape widgets;
 * the original's exact row geometry is not recovered (the cF renderer is inside
 * the GUI shell). Click toggles one type ({@code VU}/{@code VV}).
 */
public class EntityListWidget extends Widget {
	private static final float HEADER_H = 18.0f;
	private static final float SEARCH_H = 14.0f;
	private static final float ROW_H = 14.0f;
	private static final int VISIBLE_ROWS = 5;
	private static final Map<EntityType<?>, String> NAMES = new LinkedHashMap<>();

	private final EntityListSetting setting;
	private final List<EntityType<?>> sorted;
	private boolean expanded;
	private boolean searchFocused;
	private String filter = "";
	private List<EntityType<?>> filtered;
	private float scroll;

	public EntityListWidget(EntityListSetting setting) {
		this.setting = setting;
		this.sorted = new ArrayList<>(setting.getOptions());
		this.sorted.sort(Comparator.comparing(EntityListWidget::displayName, String.CASE_INSENSITIVE_ORDER));
		this.filtered = sorted;
	}

	private static String displayName(EntityType<?> type) {
		return NAMES.computeIfAbsent(type, key -> key.getName().getString());
	}

	@Override
	public float height() {
		return expanded ? HEADER_H + SEARCH_H + VISIBLE_ROWS * ROW_H + 2.0f : HEADER_H;
	}

	public EntityListWidget bounds(float x, float y, float w, float h) {
		at(x, y);
		size(w, h);
		return this;
	}

	@Override
	protected void drawWidget(GuiDraw draw) {
		Theme theme = Theme.get();
		MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
		MsdfFont regular = MsdfFont.regular();
		ColorF bg = theme.panelColor();
		if (hover.current() > 0.0f) {
			bg = bg.lerp(theme.text(), 0.05f * hover.current());
		}
		draw.fillRounded(x, y, w, HEADER_H, 3.5f, bg);
		draw.text(semibold, setting.getId(), x + 7.5f, y + 1.0f, 7.0f, theme.text());
		draw.text(regular, (expanded ? "- " : "+ ") + setting.getTypes().size(), x + w - 7.5f, y + 1.5f, 6.0f,
				theme.text().withAlphaScale(0.5f));
		if (!expanded) {
			return;
		}

		float searchY = y + HEADER_H;
		draw.fillRounded(x + 4.0f, searchY, w - 8.0f, SEARCH_H - 2.0f, 3.0f,
				theme.background().withAlphaScale(0.8f));
		String shownFilter = filter.isEmpty() ? "search" : filter;
		draw.text(regular, shownFilter, x + 8.0f, searchY + 2.0f, 6.0f,
				theme.text().withAlphaScale(searchFocused ? 0.9f : 0.4f));

		float listY = searchY + SEARCH_H;
		float listH = VISIBLE_ROWS * ROW_H;
		draw.pushScissor(x, listY, w, listH);
		int start = Math.max(0, Math.min(filtered.size() - VISIBLE_ROWS, (int) (scroll / ROW_H)));
		for (int i = start; i < Math.min(filtered.size(), start + VISIBLE_ROWS); i++) {
			EntityType<?> type = filtered.get(i);
			float rowY = listY + (i - start) * ROW_H;
			boolean selected = setting.contains(type);
			draw.fillRounded(x + 8.0f, rowY + 4.0f, 6.0f, 6.0f, 1.5f,
					selected ? theme.accent() : theme.background().withAlphaScale(0.8f));
			draw.text(regular, displayName(type), x + 18.0f, rowY + 3.0f, 6.0f,
					theme.text().withAlphaScale(selected ? 1.0f : 0.6f));
		}
		draw.popScissor();
		String hint = (start + VISIBLE_ROWS < filtered.size()) ? "..." : "";
		if (!hint.isEmpty()) {
			draw.textRight(regular, hint, x + w - 7.5f, listY + listH - ROW_H + 3.0f, 6.0f,
					theme.text().withAlphaScale(0.4f));
		}
	}

	@Override
	public boolean onMouseDown(double mx, double my, MouseButton button) {
		if (button != MouseButton.LEFT || my < y || my >= y + height()) {
			return false;
		}
		if (my < y + HEADER_H) {
			expanded = !expanded;
			searchFocused = false;
			scroll = 0.0f;
			return true;
		}
		if (!expanded) {
			return false;
		}
		if (my < y + HEADER_H + SEARCH_H) {
			searchFocused = true;
			return true;
		}
		searchFocused = false;
		float listY = y + HEADER_H + SEARCH_H;
		int row = (int) ((my - listY) / ROW_H);
		int start = Math.max(0, Math.min(filtered.size() - VISIBLE_ROWS, (int) (scroll / ROW_H)));
		int index = start + row;
		if (row >= 0 && row < VISIBLE_ROWS && index < filtered.size()) {
			setting.toggle(filtered.get(index));
			return true;
		}
		return false;
	}

	@Override
	public boolean onScroll(double mx, double my, double amount) {
		if (!expanded || my < y + HEADER_H + SEARCH_H || my >= y + height()) {
			return false;
		}
		float max = Math.max(0.0f, (filtered.size() - VISIBLE_ROWS) * ROW_H);
		scroll = Math.max(0.0f, Math.min(max, scroll - (float) amount * ROW_H));
		return true;
	}

	@Override
	public boolean onCharTyped(char c) {
		if (!searchFocused || !expanded || c < 32) {
			return false;
		}
		filter += c;
		refreshFilter();
		return true;
	}

	@Override
	public boolean onKeyPressed(int key, int scancode, int modifiers) {
		if (!searchFocused || !expanded) {
			return false;
		}
		switch (key) {
			case 259 -> {
				if (!filter.isEmpty()) {
					filter = filter.substring(0, filter.length() - 1);
					refreshFilter();
				}
				return true;
			}
			case 257, 335 -> {
				searchFocused = false;
				return true;
			}
			case 256 -> {
				filter = "";
				refreshFilter();
				searchFocused = false;
				return true;
			}
			default -> {
				return false;
			}
		}
	}

	private void refreshFilter() {
		scroll = 0.0f;
		if (filter.isBlank()) {
			filtered = sorted;
			return;
		}
		String query = filter.toLowerCase(Locale.ROOT);
		List<EntityType<?>> matches = new ArrayList<>();
		for (EntityType<?> type : sorted) {
			if (displayName(type).toLowerCase(Locale.ROOT).contains(query)) {
				matches.add(type);
			}
		}
		filtered = matches;
	}
}
