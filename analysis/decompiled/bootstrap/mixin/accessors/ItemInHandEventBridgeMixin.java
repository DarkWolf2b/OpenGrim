package mixin.accessors;

import net.minecraft.class_11659;
import net.minecraft.class_1268;
import net.minecraft.class_1306;
import net.minecraft.class_1799;
import net.minecraft.class_4587;
import net.minecraft.class_742;
import net.minecraft.class_759;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.At.Shift;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.gl;
import sixtwo.gm;
import sixtwo.gt;

@Mixin(
   value = {class_759.class},
   remap = false
)
public abstract class ItemInHandEventBridgeMixin {
   public ItemInHandEventBridgeMixin() {
   }

   @Inject(
      method = {"method_3228"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$beginHandRender(
      class_742 var1,
      float var2,
      float var3,
      class_1268 var4,
      float var5,
      class_1799 var6,
      float var7,
      class_4587 var8,
      class_11659 var9,
      int var10,
      CallbackInfo var11
   ) {
      try {
         var8.method_22903();
         gm var12 = new gm(var4, var4 == class_1268.field_5808 ? var1.method_6068() : var1.method_6068().method_5928(), var5, var6, var7, var8);
         var12.bdV();
      } catch (Throwable var15) {
         try {
            var8.method_22909();
         } catch (Throwable var14) {
         }

         System.err.println("[offline-bootstrap] first-person swing event failed: " + var15);
      }
   }

   @Inject(
      method = {"method_3228"},
      at = {@At(
         value = "INVOKE",
         target = "Lnet/minecraft/class_759;method_3233(Lnet/minecraft/class_1309;Lnet/minecraft/class_1799;Lnet/minecraft/class_811;Lnet/minecraft/class_4587;Lnet/minecraft/class_11659;I)V",
         shift = Shift.BEFORE
      )},
      remap = false
   )
   private void offline$transformHeldItem(
      class_742 var1,
      float var2,
      float var3,
      class_1268 var4,
      float var5,
      class_1799 var6,
      float var7,
      class_4587 var8,
      class_11659 var9,
      int var10,
      CallbackInfo var11
   ) {
      try {
         class_1306 var12 = var4 == class_1268.field_5808 ? var1.method_6068() : var1.method_6068().method_5928();
         new gl(var4, var12, var5, var6, var7, var8).bdV();
      } catch (Throwable var13) {
         System.err.println("[offline-bootstrap] held-item swing transform failed: " + var13);
      }
   }

   @Inject(
      method = {"method_3228"},
      at = {@At("RETURN")},
      remap = false
   )
   private void offline$endHandRender(
      class_742 var1,
      float var2,
      float var3,
      class_1268 var4,
      float var5,
      class_1799 var6,
      float var7,
      class_4587 var8,
      class_11659 var9,
      int var10,
      CallbackInfo var11
   ) {
      try {
         var8.method_22909();
      } catch (Throwable var13) {
      }
   }

   @Inject(
      method = {"method_3219"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$renderPlayerArm(class_4587 var1, class_11659 var2, int var3, float var4, float var5, class_1306 var6, CallbackInfo var7) {
      try {
         new gt(var1).bdV();
      } catch (Throwable var9) {
         System.err.println("[offline-bootstrap] player-arm swing event failed: " + var9);
      }
   }
}
