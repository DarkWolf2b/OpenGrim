package dev.opengrim.gui.ui;

import java.util.ArrayList;
import java.util.List;

import dev.opengrim.gui.ui.widgets.ActionWidget;
import dev.opengrim.gui.ui.widgets.ContainerWidget;
import dev.opengrim.gui.ui.widgets.ModeWidget;
import dev.opengrim.gui.ui.widgets.SliderWidget;
import dev.opengrim.gui.ui.widgets.TextFieldWidget;
import dev.opengrim.gui.ui.widgets.ToggleWidget;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.Setting;
import dev.opengrim.settings.StringSetting;

/**
 * Binds {@link dev.opengrim.settings.Setting} trees to the widget framework —
 * the same binding the original performs inside the module settings popup
 * (sixtwo.bd: 42 native handlers wiring BoolSetting/cJ, Double/IntSetting/cC,
 * ModeSetting/cD, StringSetting/in, ColorSetting rows and GroupSetting
 * ct/cu/cv/cw groups; the bd handler bodies are runtime-decrypted so the
 * binding is rebuilt from the observable widget set).
 */
public final class ModuleWidgetFactory {
	private ModuleWidgetFactory() {
	}

	/** Row heights in design units (slider rows are taller: cC has label + track). */
	public static final float TOGGLE_H = 12.0f;
	public static final float SLIDER_H = 16.0f;

	public static float measureHeight(List<Setting<?>> settings) {
		java.util.Set<Setting<?>> groupChildren = collectGroupChildren(settings);
		float h = 0.0f;
		for (Setting<?> setting : settings) {
			if (groupChildren.contains(setting) || !setting.isVisible()) {
				continue;
			}
			if (setting instanceof DoubleSetting || setting instanceof IntSetting) {
				h += SLIDER_H;
			} else {
				h += TOGGLE_H;
			}
			if (setting instanceof GroupSetting group) {
				h += measureHeight(group.getChildren());
			}
			if (setting instanceof ColorSetting color) {
				h += SLIDER_H * (color.allowAlpha() ? 4 : 3);
			}
		}
		return h;
	}

	/** Populate a container with widgets for the setting list (width in design units). */
	public static void populate(ContainerWidget container, List<Setting<?>> settings, float width) {
		populate(container, settings, width, 0);
	}

	private static void populate(ContainerWidget container, List<Setting<?>> settings, float width, int indent) {
		java.util.Set<Setting<?>> groupChildren = collectGroupChildren(settings);
		float x = 4.0f + indent * 8.0f;
		float w = width - x - 4.0f;
		for (Setting<?> setting : settings) {
			if (groupChildren.contains(setting) || !setting.isVisible()) {
				continue;
			}
			switch (setting) {
				case BoolSetting bool -> container.add(
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
					container.add(slider.bounds(x, 0.0f, w, SLIDER_H));
				}
				case IntSetting intg -> {
					SliderWidget slider = new SliderWidget(intg.getId(), intg.getMin(), intg.getMax(), 1.0f,
							intg.getValue(), "", 0);
					slider.getter(intg::getValue);
					slider.onChange(() -> intg.setValue(Math.round(slider.value())));
					container.add(slider.bounds(x, 0.0f, w, SLIDER_H));
				}
				case ModeSetting mode -> container.add(
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
				case StringSetting str -> {
					TextFieldWidget field = new TextFieldWidget(str.getValue()).bounds(x, 0.0f, w, TOGGLE_H);
					field.setText(str.getValue());
					field.onChange(value -> {
						if (!value.equals(str.getValue())) {
							str.setValue(value);
						}
					});
					container.add(field);
				}
				case ColorSetting color -> populateColor(container, color, x, w);
				case GroupSetting group -> {
					ActionWidget header = new ActionWidget("+ " + group.getId())
							.bounds(x, 0.0f, w, TOGGLE_H);
					container.add(header);
					int before = container.children().size();
					populate(container, group.getChildren(), width, indent + 1);
					List<dev.opengrim.gui.ui.Widget> childWidgets = new ArrayList<>(
							container.children().subList(before, container.children().size()));
					header.onClick(() -> {
						if (childWidgets.isEmpty()) {
							return;
						}
						boolean visible = !childWidgets.get(0).isVisible();
						for (dev.opengrim.gui.ui.Widget child : childWidgets) {
							child.setVisible(visible);
						}
					});
				}
				default -> {
				}
			}
		}
	}

	private static void populateColor(ContainerWidget container, ColorSetting color, float x, float w) {
		// Color row: name + swatch; then per-channel sliders (R/G/B/A).
		container.add(new ToggleWidget(color.getId(), false) {
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
				draw.text(semibold, label, x + 7.5f, y + h / 2.0f - 1.0f, 7.0f, theme.text());
				float sw = 12.0f;
				draw.fillRounded(x + w - sw - 7.5f, y + 2.0f, sw, h - 4.0f, 2.5f,
						ColorF.fromArgb(color.getValue()));
			}
		}.bounds(x, 0.0f, w, TOGGLE_H));
		int channels = color.allowAlpha() ? 4 : 3;
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
			container.add(slider.bounds(x + 8.0f, 0.0f, w - 8.0f, SLIDER_H));
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
