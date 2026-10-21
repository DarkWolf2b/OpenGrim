package dev.opengrim.mixin;

import dev.opengrim.modules.render.Chams;
import dev.opengrim.modules.render.ChamsRenderState;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.LivingEntityRenderer;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.entity.state.LivingEntityRenderState;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Chams "Hide Original" (sixtwo.dv#aiJ, dv.java:1266-1390): cancel the living
 * entity's model + features at HEAD.
 *
 * <p>This is the same injection point as the original bootstrap
 * ({@code LivingEntityRenderEventBridgeMixin.offline$renderLivingEntity},
 * {@code @Mixin(class_922)} at HEAD of {@code method_4054}): it fires
 * {@code gp$sZ}, cancels when aiJ cancels, and then calls the base
 * {@code EntityRenderer.render} ({@code method_3936}) when {@code dv.aiM}
 * holds, which re-submits the leash and nameplate. The port stores the aiM
 * result on the render state and reproduces the base call by submitting
 * {@code state.leashDatas} and invoking {@code renderLabelIfPresent}.
 */
@Mixin(LivingEntityRenderer.class)
public class LivingEntityRendererMixin {
	@Inject(method = "render(Lnet/minecraft/client/render/entity/state/LivingEntityRenderState;Lnet/minecraft/client/util/math/MatrixStack;Lnet/minecraft/client/render/command/OrderedRenderCommandQueue;Lnet/minecraft/client/render/state/CameraRenderState;)V",
			at = @At("HEAD"), cancellable = true)
	private void opengrim$hideChamsModel(LivingEntityRenderState state, MatrixStack matrices,
			OrderedRenderCommandQueue queue, CameraRenderState cameraState, CallbackInfo ci) {
		if (Chams.isChamsBatchActive || !(state instanceof ChamsRenderState marker)
				|| !marker.opengrim$isChamsHidden()) {
			return;
		}
		ci.cancel();
		// EntityRenderer.render(state, matrices, queue, cameraState), the
		// method_3936 fallback of the original bootstrap: leashes then label.
		if (marker.opengrim$isChamsKeepLabel()) {
			if (state.leashDatas != null) {
				for (EntityRenderState.LeashData leash : state.leashDatas) {
					queue.submitLeash(matrices, leash);
				}
			}
			if (this instanceof EntityRendererInvoker invoker) {
				invoker.opengrim$renderLabelIfPresent(state, matrices, queue, cameraState);
			}
		}
	}
}
