package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.KeyEvent;
import net.minecraft.client.Keyboard;
import net.minecraft.client.input.KeyInput;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Raw key bridge, mirroring the original shell's
 * {@code mixin.accessors.KeyboardInputMixin#offline$keyPress}
 * (analysis/decompiled/bootstrap/mixin/accessors/KeyboardInputMixin.java:20-47):
 * at the head of {@code Keyboard#onKey(long, int action, KeyInput)} the shell
 * builds {@code gA(null, input, input.key, action, input.modifiers)} and posts
 * it, cancelling the vanilla callback when the event's {@code bdW()} is set.
 * Interface ({@code sixtwo.fX aYc}, casesafe fX_.java:231-287) is the listener.
 */
@Mixin(Keyboard.class)
public class KeyboardMixin {
	@Inject(method = "onKey(JILnet/minecraft/client/input/KeyInput;)V", at = @At("HEAD"), cancellable = true)
	private void opengrim$onKey(long window, int action, KeyInput input, CallbackInfo ci) {
		KeyEvent event = EventBus.get().post(
				new KeyEvent(input.key(), input.scancode(), action, input.modifiers()));
		if (event.cancelled()) {
			ci.cancel();
		}
	}
}
