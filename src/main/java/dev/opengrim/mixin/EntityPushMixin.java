package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.EntityPushEvent;
import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(Entity.class)
public class EntityPushMixin {
	@Inject(method = "pushAwayFrom(Lnet/minecraft/entity/Entity;)V", at = @At("HEAD"), cancellable = true)
	public void opengrim$onPushAwayFrom(Entity pusher, CallbackInfo ci) {
		EntityPushEvent event = EventBus.get().post(new EntityPushEvent(pusher));
		if (event.cancelled()) {
			ci.cancel();
		}
	}
}