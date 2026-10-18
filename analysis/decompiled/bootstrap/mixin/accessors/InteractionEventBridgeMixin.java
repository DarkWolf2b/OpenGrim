package mixin.accessors;

import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_636;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.hw$tv;
import sixtwo.hw$tw;

@Mixin(
   value = {class_636.class},
   remap = false
)
public abstract class InteractionEventBridgeMixin {
   public InteractionEventBridgeMixin() {
   }

   @Inject(
      method = {"method_2918"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$attackPre(class_1657 var1, class_1297 var2, CallbackInfo var3) {
      try {
         hw$tv var4 = new hw$tv(var2);
         var4.bdV();
         if (var4.bdW()) {
            var3.cancel();
         }
      } catch (Throwable var5) {
         System.err.println("[offline-bootstrap] attack-pre event failed: " + var5);
      }
   }

   @Inject(
      method = {"method_2918"},
      at = {@At("TAIL")},
      remap = false
   )
   private void offline$attackPost(class_1657 var1, class_1297 var2, CallbackInfo var3) {
      try {
         hw$tw var4 = new hw$tw(var2);
         var4.bdV();
      } catch (Throwable var5) {
         System.err.println("[offline-bootstrap] attack-post event failed: " + var5);
      }
   }
}
