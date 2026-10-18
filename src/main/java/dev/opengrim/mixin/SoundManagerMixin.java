package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.SoundPlayEvent;
import net.minecraft.client.sound.SoundInstance;
import net.minecraft.client.sound.SoundManager;
import net.minecraft.client.sound.SoundSystem;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

/**
 * Posts {@link SoundPlayEvent} for every client-side sound start and lets a
 * listener suppress the original playback. Framework equivalent of the
 * original's {@code gI} event producer: sixtwo.dQ#aoY cancels the event and
 * the sound is never started (handlers/dQ_.md "Runtime model").
 */
@Mixin(SoundManager.class)
public class SoundManagerMixin {
	@Inject(method = "play(Lnet/minecraft/client/sound/SoundInstance;)Lnet/minecraft/client/sound/SoundSystem$PlayResult;",
			at = @At("HEAD"), cancellable = true)
	public void opengrim$onSoundPlay(SoundInstance sound, CallbackInfoReturnable<SoundSystem.PlayResult> cir) {
		SoundPlayEvent event = EventBus.get().post(new SoundPlayEvent(sound));
		if (event.cancelled()) {
			cir.setReturnValue(SoundSystem.PlayResult.NOT_STARTED);
		}
	}
}
