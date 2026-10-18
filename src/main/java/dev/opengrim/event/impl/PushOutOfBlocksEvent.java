package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;

/**
 * Fired from the head of {@code Entity#pushOutOfBlocks(double, double, double)}
 * (client side). Mirrors the original client's block-push event (sixtwo
 * {@code hd}, handled by No Push {@code es#aup}); cancelling it suppresses the
 * push-out displacement entirely.
 */
public class PushOutOfBlocksEvent implements Cancellable {
	private final double x;
	private final double y;
	private final double z;
	private boolean cancelled;

	public PushOutOfBlocksEvent(double x, double y, double z) {
		this.x = x;
		this.y = y;
		this.z = z;
	}

	public double x() {
		return x;
	}

	public double y() {
		return y;
	}

	public double z() {
		return z;
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