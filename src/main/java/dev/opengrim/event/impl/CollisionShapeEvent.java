package dev.opengrim.event.impl;

import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;
import net.minecraft.world.BlockView;

/**
 * Fired when the game queries a block state's collision shape. Mirrors the
 * original client's collision event (sixtwo {@code gS}), which exposes the
 * current block state ({@code bcg()}) and a replaceable state
 * ({@code bci(BlockState)}); the caller substitutes the replacement state's
 * collision shape for the current one.
 */
public class CollisionShapeEvent {
	private final BlockView view;
	private final BlockPos pos;
	private final BlockState state;
	private BlockState replacement;

	public CollisionShapeEvent(BlockView view, BlockPos pos, BlockState state) {
		this.view = view;
		this.pos = pos;
		this.state = state;
	}

	public BlockView view() {
		return view;
	}

	public BlockPos pos() {
		return pos;
	}

	public BlockState state() {
		return state;
	}

	public BlockState replacement() {
		return replacement;
	}

	public void setReplacement(BlockState replacement) {
		this.replacement = replacement;
	}
}
