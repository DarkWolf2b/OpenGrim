package mixin.accessors;

import net.minecraft.class_1309;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.Redirect;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.hs;

@Mixin(
   value = {class_1309.class},
   remap = false
)
public abstract class LivingEntityJumpEventBridgeMixin {
   @Unique
   private hs offline$jumpEvent;

   public LivingEntityJumpEventBridgeMixin() {
   }

   @Shadow
   protected abstract float method_6106();

   @Inject(
      method = {"method_6043"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$beginJump(CallbackInfo var1) {
      class_1309 var2 = (class_1309)this;

      try {
         this.offline$jumpEvent = new hs(var2, this.method_6106(), var2.method_36454());
         this.offline$jumpEvent.bdV();
         if (this.offline$jumpEvent.bdW()) {
            var1.cancel();
         }
      } catch (Throwable var4) {
         this.offline$jumpEvent = null;
      }
   }

   @Redirect(
      method = {"method_6043"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_1309;method_6106()F"
      ),
      remap = false
   )
   private float offline$jumpPower(class_1309 var1) {
      return this.offline$jumpEvent != null ? this.offline$jumpEvent.bde() : this.method_6106();
   }

   @Redirect(
      method = {"method_6043"},
      at = @At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_1309;method_36454()F"
      ),
      remap = false
   )
   private float offline$jumpYaw(class_1309 var1) {
      return this.offline$jumpEvent != null ? this.offline$jumpEvent.bdf() : var1.method_36454();
   }

   @Inject(
      method = {"method_6043"},
      at = {@At("RETURN")},
      remap = false
   )
   private void offline$endJump(CallbackInfo var1) {
      this.offline$jumpEvent = null;
   }
}
