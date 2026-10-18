package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.PushOutOfBlocksEvent;
import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(Entity.class)
public class PushOutOfBlocksMixin {
	@Inject(method = "pushOutOfBlocks(DDD)V", at = @At("HEAD"), cancellable = true)
	public void opengrim$onPushOutOfBlocks(double x, double y, double z, CallbackInfo ci) {
		PushOutOfBlocksEvent event = EventBus.get().post(new PushOutOfBlocksEvent(x, y, z));
		if (event.cancelled()) {
			ci.cancel();
		}
	}
}