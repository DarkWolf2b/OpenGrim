package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;

/** Fired when the local player attacks an entity, before vanilla processing; cancellable. */
public class AttackEntityEvent implements Cancellable {
	private final PlayerEntity player;
	private Entity target;
	private boolean cancelled;

	public AttackEntityEvent(PlayerEntity player, Entity target) {
		this.player = player;
		this.target = target;
	}

	public PlayerEntity player() {
		return player;
	}

	public Entity target() {
		return target;
	}

	public void setTarget(Entity target) {
		this.target = target;
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
