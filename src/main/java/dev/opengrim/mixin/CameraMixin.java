package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.CameraUpdateEvent;
import net.minecraft.client.render.Camera;
import net.minecraft.client.render.GameRenderer;
import net.minecraft.entity.Entity;
import net.minecraft.world.World;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(Camera.class)
public class CameraMixin {
	@Inject(method = "update(Lnet/minecraft/world/World;Lnet/minecraft/entity/Entity;ZZF)V",
			at = @At("TAIL"))
	public void opengrim$onCameraUpdate(World world, Entity ignoredFocus, boolean ignoredThirdPerson,
			boolean ignoredFrontView, float tickProgress, CallbackInfo ci) {
		// GameRenderer holds the owning camera; fetch through the render context
		Camera camera = (Camera) (Object) this;
		GameRenderer renderer = net.minecraft.client.MinecraftClient.getInstance().gameRenderer;
		EventBus.get().post(new CameraUpdateEvent(camera, renderer, tickProgress));
	}
}
