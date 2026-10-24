package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.MouseScrollEvent;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.render.Freecam;
import net.minecraft.client.Mouse;
import net.minecraft.client.network.ClientPlayerEntity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.Redirect;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(Mouse.class)
public class MouseMixin {
	@Inject(method = "onMouseScroll(JDD)V", at = @At("HEAD"), cancellable = true)
	public void opengrim$onMouseScroll(long window, double horizontal, double vertical, CallbackInfo ci) {
		MouseScrollEvent event = EventBus.get().post(new MouseScrollEvent(vertical, horizontal));
		if (event.cancelled()) {
			ci.cancel();
		}
	}

	@Redirect(
		method = "updateMouse(D)V",
		at = @At(
			value = "INVOKE",
			target = "Lnet/minecraft/client/network/ClientPlayerEntity;changeLookDirection(DD)V"
		)
	)
	private void opengrim$onLookDirection(ClientPlayerEntity player, double cursorDeltaX, double cursorDeltaY) {
		Freecam freecam = ModuleManager.get().getModule(Freecam.class);
		if (freecam != null && freecam.isEnabled()) {
			freecam.onMouseTurn(cursorDeltaX, cursorDeltaY);
			if (freecam.isRotate()) {
				player.changeLookDirection(cursorDeltaX, cursorDeltaY);
			}
			return;
		}
		player.changeLookDirection(cursorDeltaX, cursorDeltaY);
	}
}
