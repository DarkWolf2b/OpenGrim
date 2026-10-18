package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;

/**
 * Fired from the head of {@code Mouse#onMouseScroll(long,double,double)} for
 * every wheel scroll (over the world and over screens - Mouse Tweaks' wheel
 * transfer consumes scrolls while a {@code HandledScreen} is open); cancellable.
 */
public class MouseScrollEvent implements Cancellable {
	private final double vertical;
	private final double horizontal;
	private boolean cancelled;

	public MouseScrollEvent(double vertical, double horizontal) {
		this.vertical = vertical;
		this.horizontal = horizontal;
	}

	public double vertical() {
		return vertical;
	}

	public double horizontal() {
		return horizontal;
	}

	@Override
	public boolean cancelled() {
		return cancelled;
	}

	@Override
	public void setCancelled(boolean cancelled) {
		this.cancelled = cancelled;
	}
}
