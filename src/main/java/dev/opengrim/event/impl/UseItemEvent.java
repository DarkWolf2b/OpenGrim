package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.Hand;
import net.minecraft.world.World;

/**
 * Fired when the local player attempts to use an item (right-click), before
 * vanilla processing; cancellable. Wired from Fabric's {@code UseItemCallback}
 * (fired by {@code MultiPlayerGameMode.interactItem}); the original client's
 * native item-use patch dispatches the empty-shell {@code gD} event at the
 * same point (see {@code casesafe/handlers/eu.md}).
 */
public class UseItemEvent implements Cancellable {
	private final PlayerEntity player;
	private final World world;
	private final Hand hand;
	private boolean cancelled;

	public UseItemEvent(PlayerEntity player, World world, Hand hand) {
		this.player = player;
		this.world = world;
		this.hand = hand;
	}

	public PlayerEntity player() {
		return player;
	}

	public World world() {
		return world;
	}

	public Hand hand() {
		return hand;
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
