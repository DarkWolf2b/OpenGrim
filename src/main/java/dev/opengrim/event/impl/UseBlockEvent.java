package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.world.World;

/**
 * Fired when the local player right-clicks a block, before vanilla processing;
 * cancellable. Wired from Fabric's {@code UseBlockCallback}. This is the
 * rebuild counterpart of the original block-use event {@code gO$tm}, the
 * trigger family used by Anchor Macro (sixtwo.eX) and the other block-use
 * modules listed in {@code analysis/specs/handlers/eX.md}.
 */
public class UseBlockEvent implements Cancellable {
	private final PlayerEntity player;
	private final World world;
	private final Hand hand;
	private final BlockHitResult hitResult;
	private boolean cancelled;

	public UseBlockEvent(PlayerEntity player, World world, Hand hand, BlockHitResult hitResult) {
		this.player = player;
		this.world = world;
		this.hand = hand;
		this.hitResult = hitResult;
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

	public BlockHitResult hitResult() {
		return hitResult;
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
