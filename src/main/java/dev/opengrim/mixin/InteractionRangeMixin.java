package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.InteractionRangeEvent;
import net.minecraft.entity.player.PlayerEntity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

@Mixin(PlayerEntity.class)
public class InteractionRangeMixin {
	@Inject(method = "getBlockInteractionRange()D", at = @At("RETURN"), cancellable = true)
	public void opengrim$onBlockInteractionRange(CallbackInfoReturnable<Double> cir) {
		InteractionRangeEvent event = EventBus.get()
				.post(new InteractionRangeEvent(InteractionRangeEvent.Kind.BLOCK, cir.getReturnValueD()));
		cir.setReturnValue(event.value());
	}

	@Inject(method = "getEntityInteractionRange()D", at = @At("RETURN"), cancellable = true)
	public void opengrim$onEntityInteractionRange(CallbackInfoReturnable<Double> cir) {
		InteractionRangeEvent event = EventBus.get()
				.post(new InteractionRangeEvent(InteractionRangeEvent.Kind.ENTITY, cir.getReturnValueD()));
		cir.setReturnValue(event.value());
	}
}