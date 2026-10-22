package dev.opengrim.mixin;

import dev.opengrim.modules.render.HandChams;
import dev.opengrim.render.WorldProjection;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.GameRenderer;
import net.minecraft.client.render.RenderTickCounter;
import org.joml.Matrix4f;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

/**
 * Hand Chams hand-pass hook (sixtwo.de#acv). The original bootstrap exposes
 * {@code GameRendererAccessor.callRenderItemInHand} and re-renders the hand
 * into the effect target; 1.21.11's {@code GameRenderer.renderHand(float,
 * boolean, Matrix4f)} is the equivalent boundary. The mask/composite itself is
 * {@link HandChams#beginHandRender()} / {@link HandChams#endHandRender()}
 * ({@code HandChamsRenderer}).
 *
 * <p>Also captures the live world FOV for {@link WorldProjection}: the original
 * bridge calls {@code getFov(camera, tick, true)} before recomputing the
 * projection for {@code jI.bIw}
 * (analysis/decompiled/bootstrap/mixin/accessors/WorldRenderEventBridgeMixin.java:94).
 * Only the {@code changingFov = true} call made inside {@code renderWorld} (the
 * world pass, {@code GameRenderer.java:745}) is recorded; the HUD pass uses
 * {@code false}, and {@code GameRenderer.project} calls outside the world pass
 * (locator-bar waypoints) are ignored.
 */
@Mixin(GameRenderer.class)
public class GameRendererMixin {
	@Unique
	private boolean opengrim$inWorldRender;

	@Inject(method = "renderWorld(Lnet/minecraft/client/render/RenderTickCounter;)V", at = @At("HEAD"))
	private void opengrim$beginWorldRender(RenderTickCounter tickCounter, CallbackInfo ci) {
		opengrim$inWorldRender = true;
	}

	@Inject(method = "renderWorld(Lnet/minecraft/client/render/RenderTickCounter;)V", at = @At("RETURN"))
	private void opengrim$endWorldRender(RenderTickCounter tickCounter, CallbackInfo ci) {
		opengrim$inWorldRender = false;
	}

	@Inject(method = "getFov(Lnet/minecraft/client/render/Camera;FZ)F", at = @At("RETURN"))
	private void opengrim$captureWorldFov(Camera camera, float tickProgress, boolean changingFov,
			CallbackInfoReturnable<Float> cir) {
		if (opengrim$inWorldRender && changingFov) {
			WorldProjection.captureFov(cir.getReturnValue());
		}
	}

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
