package dev.opengrim.gui.ui;

/**
 * Port of sixtwo.mA (mouse button enum): {@code cmN(int)} maps vanilla
 * button codes; {@code sCBUa} = left, plus right/middle/unknown.
 */
public enum MouseButton {
	LEFT,
	RIGHT,
	MIDDLE,
	UNKNOWN;

	/** mA.cmN. */
	public static MouseButton of(int vanillaButton) {
		return switch (vanillaButton) {
			case 0 -> LEFT;
			case 1 -> RIGHT;
			case 2 -> MIDDLE;
			default -> UNKNOWN;
		};
	}
}
