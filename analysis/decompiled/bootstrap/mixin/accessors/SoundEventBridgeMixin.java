package mixin.accessors;

import net.minecraft.class_1113;
import net.minecraft.class_1140;
import net.minecraft.class_1140.class_11518;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;
import sixtwo.gI;

@Mixin(
   value = {class_1140.class},
   remap = false
)
public abstract class SoundEventBridgeMixin {
   private static boolean offline$reportedSoundFailure;

   public SoundEventBridgeMixin() {
   }

   @Inject(
      method = {"method_4854"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$playSound(class_1113 var1, CallbackInfoReturnable<class_11518> var2) {
      try {
         gI var3 = new gI(var1);
         var3.bdV();
         if (var3.bdW()) {
            var2.setReturnValue(class_11518.field_60956);
         }
      } catch (Throwable var4) {
         if (!offline$reportedSoundFailure) {
            offline$reportedSoundFailure = true;
            System.err.println("[offline-bootstrap] sound event bridge failed: " + var4);
            var4.printStackTrace();
         }
      }
   }
}
