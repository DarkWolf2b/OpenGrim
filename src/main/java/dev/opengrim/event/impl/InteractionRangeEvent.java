package dev.opengrim.event.impl;

/**
 * Fired at the return of {@code PlayerEntity#getBlockInteractionRange()} and
 * {@code PlayerEntity#getEntityInteractionRange()} — the attribute getters the
 * vanilla crosshair-target scan and attack-range checks read. Reach (sixtwo
 * fK) exposes its "Blocks Value"/"Entity Value" sliders through these.
 *
 * <p>The vanilla value is carried in {@link #value}; a listener may overwrite
 * it with {@link #setValue(double)} before the call returns.
 */
public class InteractionRangeEvent {
	public enum Kind {
		BLOCK, ENTITY
	}

	private final Kind kind;
	private double value;

	public InteractionRangeEvent(Kind kind, double value) {
		this.kind = kind;
		this.value = value;
	}

	public Kind kind() {
		return kind;
	}

	public double value() {
		return value;
	}

	public void setValue(double value) {
		this.value = value;
	}
}