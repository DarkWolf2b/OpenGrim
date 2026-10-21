package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.AttackEntityPostEvent;
import net.minecraft.client.network.ClientPlayerInteractionManager;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Attack-post bridge, mirroring the original shell's
 * {@code mixin.accessors.InteractionEventBridgeMixin#offline$attackPost}
 * (analysis/decompiled/bootstrap/mixin/accessors/InteractionEventBridgeMixin.java
 * :40-53): {@code ClientPlayerInteractionManager#attackEntity} (Yarn
 * {@code method_2918}) TAIL constructs the bare {@code hw$tw(target)} event and
 * dispatches it. Fake Lag (sixtwo.ff {@code aIk}, ff.java:1030-1064) is the
 * listener.
 */
@Mixin(ClientPlayerInteractionManager.class)
public class ClientPlayerInteractionManagerMixin {
	@Inject(method = "attackEntity(Lnet/minecraft/entity/player/PlayerEntity;Lnet/minecraft/entity/Entity;)V",
			at = @At("TAIL"))
	private void opengrim$attackEntityPost(PlayerEntity player, Entity target, CallbackInfo ci) {
		EventBus.get().post(new AttackEntityPostEvent(player, target));
	}
}
