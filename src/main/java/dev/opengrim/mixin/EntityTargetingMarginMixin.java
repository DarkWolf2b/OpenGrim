package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.TargetingMarginEvent;
import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

/**
 * Mirrors the original shell's targeting-margin bridge (sixtwo.hr, an entity +
 * CallbackInfoReturnable&lt;Float&gt; pair): fires the margin event at the return
 * of vanilla {@code Entity#getTargetingMargin()} so Target Margin (sixtwo.fJ)
 * can inflate the crosshair-target box without drawing anything.
 */
@Mixin(Entity.class)
public class EntityTargetingMarginMixin {
	@Inject(method = "getTargetingMargin()F", at = @At("RETURN"), cancellable = true)
	public void opengrim$onTargetingMargin(CallbackInfoReturnable<Float> cir) {
		Entity self = (Entity) (Object) this;
		TargetingMarginEvent event = EventBus.get()
				.post(new TargetingMarginEvent(self, cir.getReturnValueF()));
		cir.setReturnValue(event.value());
	}
}
