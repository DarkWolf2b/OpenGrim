package mixin.accessors;

import net.minecraft.class_10017;
import net.minecraft.class_11659;
import net.minecraft.class_12075;
import net.minecraft.class_1297;
import net.minecraft.class_4587;
import net.minecraft.class_897;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.gi;

@Mixin(
   value = {class_897.class},
   remap = false
)
public abstract class EntityNameTagEventBridgeMixin {
   @Unique
   private class_1297 offline$renderedEntity;

   public EntityNameTagEventBridgeMixin() {
   }

   @Inject(
      method = {"method_62354"},
      at = {@At("RETURN")},
      remap = false
   )
   private void offline$captureEntity(class_1297 var1, class_10017 var2, float var3, CallbackInfo var4) {
      this.offline$renderedEntity = var1;
   }

   @Inject(
      method = {"method_3926"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$renderNameTag(class_10017 var1, class_4587 var2, class_11659 var3, class_12075 var4, CallbackInfo var5) {
      try {
         gi var6 = new gi(this.offline$renderedEntity, var1.field_53337, var2, var3);
         var6.bdV();
         if (var6.bdW()) {
            var5.cancel();
         }
      } catch (Throwable var7) {
         System.err.println("[offline-bootstrap] entity-label event failed: " + var7);
      }
   }
}
