package dev.opengrim.mixin;

import dev.opengrim.modules.render.HandChams;
import net.minecraft.client.render.GameRenderer;
import org.joml.Matrix4f;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Hand Chams hand-pass hook (sixtwo.de#acv). The original bootstrap exposes
 * {@code GameRendererAccessor.callRenderItemInHand} and re-renders the hand
 * into the effect target; 1.21.11's {@code GameRenderer.renderHand(float,
 * boolean, Matrix4f)} is the equivalent boundary. The mask/composite itself is
 * {@link HandChams#beginHandRender()} / {@link HandChams#endHandRender()}
 * ({@code HandChamsRenderer}).
 */
@Mixin(GameRenderer.class)
public class GameRendererMixin {
	@Inject(method = "renderHand(FZLorg/joml/Matrix4f;)V", at = @At("HEAD"))
	private void opengrim$beginHandChams(float tickDelta, boolean sleeping, Matrix4f matrix,
			CallbackInfo ci) {
		HandChams.beginHandRender(sleeping);
	}

	@Inject(method = "renderHand(FZLorg/joml/Matrix4f;)V", at = @At("RETURN"))
	private void opengrim$endHandChams(float tickDelta, boolean sleeping, Matrix4f matrix,
			CallbackInfo ci) {
		HandChams.endHandRender();
	}
}
