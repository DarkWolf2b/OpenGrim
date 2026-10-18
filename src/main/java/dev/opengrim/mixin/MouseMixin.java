package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.MouseScrollEvent;
import net.minecraft.client.Mouse;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
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
}
