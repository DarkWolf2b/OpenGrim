package mixin.accessors;

import net.minecraft.class_2678;
import net.minecraft.class_634;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.gN;

@Mixin(
   value = {class_634.class},
   remap = false
)
public abstract class ClientLoginEventBridgeMixin {
   public ClientLoginEventBridgeMixin() {
   }

   @Inject(
      method = {"method_11120"},
      at = {@At("RETURN")},
      remap = false
   )
   private void offline$afterLogin(class_2678 var1, CallbackInfo var2) {
      try {
         new gN().bdV();
      } catch (Throwable var4) {
         System.err.println("[offline-bootstrap] login event failed: " + var4);
      }
   }
}
