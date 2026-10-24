package dev.opengrim.gui.ui;

import java.util.ArrayList;
import java.util.List;

import dev.opengrim.gui.ui.widgets.ActionWidget;
import dev.opengrim.gui.ui.widgets.ContainerWidget;
import dev.opengrim.gui.ui.widgets.EntityListWidget;
import dev.opengrim.gui.ui.widgets.ItemListWidget;
import dev.opengrim.gui.ui.widgets.KeybindWidget;
import dev.opengrim.gui.ui.widgets.ModeWidget;
import dev.opengrim.gui.ui.widgets.RangeSliderWidget;
import dev.opengrim.gui.ui.widgets.SliderWidget;
import dev.opengrim.gui.ui.widgets.TextFieldWidget;
import dev.opengrim.gui.ui.widgets.ToggleWidget;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.EntityListSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ItemListSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.RangeSetting;
import dev.opengrim.settings.Setting;
import dev.opengrim.settings.StringSetting;

/**
 * Binds {@link dev.opengrim.settings.Setting} trees to the widget framework —
 * the same binding the original performs inside the module settings popup
 * ({@code jf.bAR} in the payload; sixtwo.bd: 42 native handlers).
 *
 * <p>Row heights are the recovered {@code ak.dn()} natives (image addresses):
 *
 * <table>
 *   <tr><th>widget</th><th>setting</th><th>dn()</th><th>handler</th></tr>
 *   <tr><td>{@code v}</td><td>bool/cJ</td><td>18.0</td><td>0x1907f1c80</td></tr>
 *   <tr><td>{@code x}</td><td>cz/cF/cK</td><td>18.0</td><td>0x1907d0d30</td></tr>
 *   <tr><td>{@code y}</td><td>cD</td><td>18.0</td><td>0x1907c61b0</td></tr>
 *   <tr><td>{@code u}</td><td>cx</td><td>18.0</td><td>0x19085c750</td></tr>
 *   <tr><td>{@code A}</td><td>cG</td><td>18.0</td><td>0x19077b3e0</td></tr>
 *   <tr><td>{@code B}</td><td>cH</td><td>18.0</td><td>0x19072ce40</td></tr>
 *   <tr><td>{@code w}</td><td>cy</td><td>18.0</td><td>0x1907defa0</td></tr>
 *   <tr><td>{@code bk}</td><td>module row</td><td>18.0</td><td>0x18efa30a0</td></tr>
 *   <tr><td>{@code o}/{@code p}</td><td>cC/cA numeric</td><td>28.0</td><td>0x190b26880 / 0x190a6e120</td></tr>
 *   <tr><td>{@code D}</td><td>cL colour</td><td>122.0</td><td>0x1906b6210</td></tr>
 * </table>
 */
public final class ModuleWidgetFactory {
	private ModuleWidgetFactory() {
	}

	/**
	 * Row heights in design units, recovered from the native {@code dn()}
	 * handlers (see class javadoc).
	 */
	public static final float TOGGLE_H = 18.0f;
	public static final float SLIDER_H = 28.0f;
	public static final float COLOR_H = 122.0f;

	public static float measureHeight(List<Setting<?>> settings) {
		List<Widget> widgets = new ArrayList<>();
		build(widgets, settings, 0.0f, 0);
		float h = 0.0f;
		for (Widget widget : widgets) {
			h += widget.height();
		}
		return h;
	}

	/** Add the setting widgets to a plain list (settings panel row stack). */
	public static void populateRows(List<Widget> out, List<Setting<?>> settings, float width) {
		build(out, settings, width, 0);
	}

	/**
	 * Populate a container with widgets for the setting list (width in design
	 * units).
	 */
	public static void populate(ContainerWidget container, List<Setting<?>> settings, float width) {
		List<Widget> widgets = new ArrayList<>();
		build(widgets, settings, width, 0);
		for (Widget widget : widgets) {
			container.add(widget);
		}
	}

	private static void build(List<Widget> out, List<Setting<?>> settings, float width, int indent) {
		java.util.Set<Setting<?>> groupChildren = collectGroupChildren(settings);
		float x = indent * 8.0f;
		float w = width - x;
		for (Setting<?> setting : settings) {
			if (groupChildren.contains(setting) || !setting.isVisible()) {
				continue;
			}
			switch (setting) {
				case BoolSetting bool -> out.add(
						new ToggleWidget(bool.getId(), bool.getValue()) {
							@Override
							protected void drawWidget(GuiDraw draw) {
								setStateSilently(bool.getValue());
								super.drawWidget(draw);
							}
						}
								.onChange(() -> bool.setValue(!bool.getValue()))
								.bounds(x, 0.0f, w, TOGGLE_H));
				case DoubleSetting dbl -> {
					SliderWidget slider = new SliderWidget(dbl.getId(), (float) dbl.getMin(), (float) dbl.getMax(),
							dbl.getStep() <= 0 ? 0.1f : (float) dbl.getStep(), dbl.getValue().floatValue(),
							dbl.getSuffix(), decimalsFor(dbl.getStep()));
					slider.getter(dbl::getValue);
					slider.onChange(() -> dbl.setValue((double) slider.value()));
					out.add(slider.bounds(x, 0.0f, w, SLIDER_H));
				}
				case RangeSetting range -> {
					RangeSliderWidget slider = new RangeSliderWidget(range.getId(), (float) range.getMin(),
							(float) range.getMax(), range.getStep() <= 0 ? 0.1f : (float) range.getStep(),
							(float) range.getLow(), (float) range.getHigh(), range.getSuffix(),
							decimalsFor(range.getStep()));
					slider.getters(range::getLow, range::getHigh);
					slider.onChange(() -> range.setHandles((double) slider.low(), (double) slider.high()));
					out.add(slider.bounds(x, 0.0f, w, SLIDER_H));
				}
				case IntSetting intg -> {
					SliderWidget slider = new SliderWidget(intg.getId(), intg.getMin(), intg.getMax(), 1.0f,
							intg.getValue(), "", 0);
					slider.getter(intg::getValue);
					slider.onChange(() -> intg.setValue(Math.round(slider.value())));
					out.add(slider.bounds(x, 0.0f, w, SLIDER_H));
				}
				// cD keybind setting: the original's 18-unit keybind row
				// (sixtwo.y, dn() = 18), not a numeric slider.
				case KeybindSetting keybind -> out.add(
						new KeybindWidget(keybind).bounds(x, 0.0f, w, TOGGLE_H));
				case ModeSetting mode -> out.add(
						new ModeWidget(mode.getId(), mode.getModes(), mode.getValue()) {
							@Override
							protected void drawWidget(GuiDraw draw) {
								setModeSilently(mode.getValue());
								super.drawWidget(draw);
							}

							@Override
							public boolean onMouseDown(double mx, double my, MouseButton button) {
								if (button == MouseButton.LEFT) {
									mode.cycle();
									return true;
								}
								if (button == MouseButton.RIGHT) {
									List<String> modes = mode.getModes();
									int idx = modes.indexOf(mode.getValue());
									if (!modes.isEmpty()) {
										mode.setValue(modes.get((idx - 1 + modes.size()) % modes.size()));
									}
									return true;
								}
								return false;
							}
						}.bounds(x, 0.0f, w, TOGGLE_H));
				case ItemListSetting list -> out.add(
						new ItemListWidget(list).bounds(x, 0.0f, w, TOGGLE_H));
				case EntityListSetting entities -> out.add(
						new EntityListWidget(entities).bounds(x, 0.0f, w, TOGGLE_H));
				case StringSetting str -> {
					TextFieldWidget field = new TextFieldWidget(str.getValue()).bounds(x, 0.0f, w, TOGGLE_H);
					field.setText(str.getValue());
					field.onChange(value -> {
						if (!value.equals(str.getValue())) {
							str.setValue(value);
						}
					});
					out.add(field);
				}
				case ColorSetting color -> populateColor(out, color, x, w);
				case GroupSetting group -> {
					ActionWidget header = new ActionWidget("+ " + group.getId())
							.bounds(x, 0.0f, w, TOGGLE_H);
					out.add(header);
					int before = out.size();
					build(out, group.getChildren(), width, indent + 1);
					List<Widget> childWidgets = new ArrayList<>(out.subList(before, out.size()));
					header.onClick(() -> {
						if (childWidgets.isEmpty()) {
							return;
						}
						boolean visible = !childWidgets.get(0).isVisible();
						for (Widget child : childWidgets) {
							child.setVisible(visible);
						}
					});
				}
				default -> {
				}
			}
		}
	}

	private static void populateColor(List<Widget> out, ColorSetting color, float x, float w) {
		// cL.dn() == 122: name+swatch row (18) + channels split the rest.
		out.add(new ToggleWidget(color.getId(), false) {
			@Override
			protected void drawWidget(GuiDraw draw) {
				Theme theme = Theme.get();
				MsdfFont semibold = MsdfFont.of(MsdfFont.SEMIBOLD);
				float hoverT = hover.current();
				ColorF bg = theme.panelColor();
				if (hoverT > 0.0f) {
					bg = bg.lerp(theme.text(), 0.05f * hoverT);
				}
				draw.fillRounded(x, y, w, h, 3.5f, bg);
				draw.text(semibold, label, x + 9.0f, y + h / 2.0f - 1.0f, 7.0f, theme.text());
				float sw = 12.0f;
				draw.fillRounded(x + w - sw - 7.5f, y + 2.0f, sw, h - 4.0f, 2.5f,
						ColorF.fromArgb(color.getValue()));
			}
		}.bounds(x, 0.0f, w, TOGGLE_H));
		int channels = color.allowAlpha() ? 4 : 3;
		float channelH = (COLOR_H - TOGGLE_H) / channels;
		String[] names = {"R", "G", "B", "A"};
		for (int channel = 0; channel < channels; channel++) {
			final int ch = channel;
			SliderWidget slider = new SliderWidget(names[channel], 0.0f, 255.0f, 1.0f,
					channelValue(color, channel), "", 0) {
				@Override
				protected void drawWidget(GuiDraw draw) {
					setValueSilently(channelValue(color, ch));
					super.drawWidget(draw);
				}

				@Override
				public boolean onMouseDown(double mx, double my, MouseButton button) {
					if (button == MouseButton.LEFT) {
						applyPoint(mx);
						setChannel(color, ch, Math.round(value()));
						return true;
					}
					return false;
				}

				@Override
				public boolean onMouseDrag(double mx, double my, MouseButton button, double dx, double dy) {
					applyPoint(mx);
					setChannel(color, ch, Math.round(value()));
					return true;
				}
			};
			out.add(slider.bounds(x + 8.0f, 0.0f, w - 8.0f, channelH));
		}
	}

	private static int channelValue(ColorSetting color, int channel) {
		return switch (channel) {
			case 0 -> color.red();
			case 1 -> color.green();
			case 2 -> color.blue();
			default -> color.alpha();
		};
	}

	private static void setChannel(ColorSetting color, int channel, int v) {
		int shift = (3 - channel) * 8;
		int updated = (color.getValue() & ~(0xFF << shift)) | ((v & 0xFF) << shift);
		color.setValue(updated);
	}

	private static java.util.Set<Setting<?>> collectGroupChildren(List<Setting<?>> settings) {
		java.util.Set<Setting<?>> children = java.util.Collections.newSetFromMap(new java.util.IdentityHashMap<>());
		for (Setting<?> setting : settings) {
			if (setting instanceof GroupSetting group) {
				children.addAll(group.getChildren());
			}
		}
		return children;
	}

	private static int decimalsFor(double step) {
		if (step >= 1.0) {
			return 0;
		}
		if (step >= 0.1) {
			return 1;
		}
		return 2;
	}
}
