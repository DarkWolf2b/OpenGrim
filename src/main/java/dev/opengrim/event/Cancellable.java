package dev.opengrim.event;

/** Implemented by events that listeners may cancel. */
public interface Cancellable {
	boolean cancelled();

	void setCancelled(boolean cancelled);

	default void cancel() {
		setCancelled(true);
	}
}
