package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;

/** Fired when the local player presses the attack button, before the swing. */
public class AttackPressEvent implements Cancellable {
	private boolean cancelled;

	@Override
	public boolean cancelled() {
		return cancelled;
	}

	@Override
	public void setCancelled(boolean cancelled) {
		this.cancelled = cancelled;
	}
}
