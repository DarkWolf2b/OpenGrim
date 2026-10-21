package dev.opengrim.mixin;

import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.EntityRenderer;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Invoker;

/**
 * Invoker for {@code EntityRenderer.renderLabelIfPresent}. The original Chams
 * bootstrap (LivingEntityRenderEventBridgeMixin.offline$renderLivingEntity)
 * cancels {@code LivingEntityRenderer.render} and then calls the base
 * {@code EntityRenderer.render} (which submits leashes + label) when
 * {@code dv.aiM(entity)} holds; with the reloaded renderer split the base call
 * is reproduced by submitting the leashes and invoking this protected method.
 */
@Mixin(EntityRenderer.class)
public interface EntityRendererInvoker {
	@Invoker("renderLabelIfPresent")
	void opengrim$renderLabelIfPresent(EntityRenderState state, MatrixStack matrices,
			OrderedRenderCommandQueue queue, CameraRenderState cameraState);
}
