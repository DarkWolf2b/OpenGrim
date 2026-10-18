package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.CollisionShapeEvent;
import net.minecraft.block.AbstractBlock;
import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.shape.VoxelShape;
import net.minecraft.world.BlockView;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

@Mixin(AbstractBlock.AbstractBlockState.class)
public class CollisionShapeMixin {
	/**
	 * Re-entrancy guard: resolving a replacement state's shape re-enters this
	 * method. Listeners must not replace the replacement again — Hand No Clip's
	 * default Ignore=all mode replaces every state with AIR, including AIR's own
	 * query, which recursed until StackOverflowError (observed in-game
	 * 2026-10-17). Nested calls take the vanilla path.
	 *
	 * <p>Per-thread (same pattern as {@code ClientConnectionMixin}): a plain
	 * static boolean also suppressed concurrent queries on other threads
	 * (client vs. integrated-server thread in singleplayer), silently skipping
	 * the replacement shape there.
	 */
	private static final ThreadLocal<Boolean> opengrim$resolvingReplacement =
			ThreadLocal.withInitial(() -> Boolean.FALSE);

	@Inject(method = "getCollisionShape(Lnet/minecraft/world/BlockView;Lnet/minecraft/util/math/BlockPos;)Lnet/minecraft/util/shape/VoxelShape;",
			at = @At("HEAD"), cancellable = true)
	public void opengrim$onCollisionShape(BlockView view, BlockPos pos, CallbackInfoReturnable<VoxelShape> cir) {
		if (Boolean.TRUE.equals(opengrim$resolvingReplacement.get())) {
			return;
		}
		BlockState state = (BlockState) (Object) this;
		CollisionShapeEvent event = new CollisionShapeEvent(view, pos, state);
		EventBus.get().post(event);
		BlockState replacement = event.replacement();
		if (replacement != null) {
			opengrim$resolvingReplacement.set(Boolean.TRUE);
			try {
				cir.setReturnValue(replacement.getCollisionShape(view, pos));
			} finally {
				opengrim$resolvingReplacement.set(Boolean.FALSE);
			}
		}
	}
}
