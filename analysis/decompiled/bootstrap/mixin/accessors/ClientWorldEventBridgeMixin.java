package mixin.accessors;

import net.minecraft.class_1297;
import net.minecraft.class_2561;
import net.minecraft.class_638;
import net.minecraft.class_1297.class_5529;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.gM;
import sixtwo.hp;
import sixtwo.hu;

@Mixin(
   value = {class_638.class},
   remap = false
)
public abstract class ClientWorldEventBridgeMixin {
   public ClientWorldEventBridgeMixin() {
   }

   @Shadow
   public abstract class_1297 method_8469(int var1);

   @Inject(
      method = {"method_53875"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$entityAdded(class_1297 var1, CallbackInfo var2) {
      try {
         new hu(var1).bdV();
      } catch (Throwable var4) {
         System.err.println("[offline-bootstrap] entity-add event failed: " + var4);
      }
   }

   @Inject(
      method = {"method_2945"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$entityRemoved(int var1, class_5529 var2, CallbackInfo var3) {
      try {
         new hp(this.method_8469(var1), var2).bdV();
      } catch (Throwable var5) {
         System.err.println("[offline-bootstrap] entity-remove event failed: " + var5);
      }
   }

   @Inject(
      method = {"method_8525"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$disconnect(class_2561 var1, CallbackInfo var2) {
      try {
         new gM().bdV();
      } catch (Throwable var4) {
         System.err.println("[offline-bootstrap] disconnect event failed: " + var4);
      }
   }
}
