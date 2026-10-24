package dev.opengrim.mixin;

import dev.opengrim.modules.render.Chams;
import dev.opengrim.modules.render.ChamsRenderState;
import dev.opengrim.modules.render.Esp2D;
import dev.opengrim.modules.render.NametagSuppressState;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.EntityRenderer;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Marks each extracted {@link EntityRenderState} with the Chams "Hide Original"
 * decision and 2D ESP nametag suppression. 1.21.11 splits entity rendering into
 * {@code EntityRenderer.updateRenderState(entity, state, delta)} and
 * {@code LivingEntityRenderer.render(state, ...)}; only the former still has
 * the entity reference.
 */
@Mixin(EntityRenderer.class)
public class EntityRendererMixin {
	@Inject(method = "updateRenderState(Lnet/minecraft/entity/Entity;Lnet/minecraft/client/render/entity/state/EntityRenderState;F)V",
			at = @At("TAIL"))
	private void opengrim$markRenderState(Entity entity, EntityRenderState state, float tickDelta,
			CallbackInfo ci) {
		if (state instanceof ChamsRenderState marker) {
			marker.opengrim$setChamsHidden(Chams.shouldHideModel(entity, state.light));
			marker.opengrim$setChamsKeepLabel(Chams.shouldHideOriginal(entity));
		}
		if (state instanceof NametagSuppressState marker) {
			marker.opengrim$setNametagSuppressed(Esp2D.shouldSuppressNametagFor(entity));
		}
	}

	@Inject(method = "renderLabelIfPresent", at = @At("HEAD"), cancellable = true)
	private void opengrim$suppressLabel(EntityRenderState state, MatrixStack matrices,
			OrderedRenderCommandQueue queue, CameraRenderState cameraState, CallbackInfo ci) {
		if (state instanceof NametagSuppressState marker && marker.opengrim$isNametagSuppressed()) {
			ci.cancel();
		}
	}
}
