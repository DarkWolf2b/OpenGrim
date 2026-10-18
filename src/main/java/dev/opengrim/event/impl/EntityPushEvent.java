package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.entity.Entity;

/**
 * Fired from the head of {@code Entity#pushAwayFrom(Entity)} (client side).
 * Mirrors the original client's entity-push event (sixtwo {@code hq}, handled
 * by No Push {@code es#auq}); cancelling it stops the pushing entity from
 * displacing the local player.
 */
public class EntityPushEvent implements Cancellable {
	private final Entity pusher;
	private boolean cancelled;

	public EntityPushEvent(Entity pusher) {
		this.pusher = pusher;
	}

	public Entity pusher() {
		return pusher;
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