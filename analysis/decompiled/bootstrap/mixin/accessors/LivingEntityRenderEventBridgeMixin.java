package mixin.accessors;

import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MethodHandles.Lookup;
import net.minecraft.class_10017;
import net.minecraft.class_10042;
import net.minecraft.class_11659;
import net.minecraft.class_12075;
import net.minecraft.class_1309;
import net.minecraft.class_310;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_583;
import net.minecraft.class_897;
import net.minecraft.class_922;
import org.spongepowered.asm.mixin.Final;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.dv;
import sixtwo.gp$sZ;
import sixtwo.ot;
import sixtwo.ov;
import sixtwo.qL;
import sixtwo.rD;

@Mixin(
   value = {class_922.class},
   remap = false
)
public abstract class LivingEntityRenderEventBridgeMixin {
   @Shadow
   @Final
   protected class_583<?> field_4737;
   @Unique
   private class_1309 offline$renderedEntity;
   @Unique
   private static boolean offline$reportedEntityRenderFailure;
   @Unique
   private static MethodHandle offline$baseEntitySubmit;

   public LivingEntityRenderEventBridgeMixin() {
   }

   @Inject(
      method = {"method_62355"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$captureRenderedEntity(class_1309 var1, class_10042 var2, float var3, CallbackInfo var4) {
      this.offline$renderedEntity = var1;
   }

   @Inject(
      method = {"method_62355"},
      at = {@At("RETURN")},
      remap = false
   )
   private void offline$applyManagedRenderRotation(class_1309 var1, class_10042 var2, float var3, CallbackInfo var4) {
      try {
         if (var1 != class_310.method_1551().field_1724) {
            return;
         }

         qL var5 = rD.dlX();
         ot var6 = var5.dbF();
         ov var7 = var5.dbX();
         ov var8 = var5.dbY();
         if (var6 == null || var7 == null || var8 == null || !var6.cGm() || var6.cGg()) {
            return;
         }

         float var9 = class_3532.method_17821(var3, var8.cGI(), var7.cGI());
         float var10 = class_3532.method_17821(var3, var8.cGJ(), var7.cGJ());
         var2.field_53446 = var9;
         var2.field_53447 = class_3532.method_15393(var9 - var2.field_53446);
         var2.field_53448 = var10;
      } catch (Throwable var11) {
      }
   }

   @Inject(
      method = {"method_4054"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$renderLivingEntity(class_10042 var1, class_4587 var2, class_11659 var3, class_12075 var4, CallbackInfo var5) {
      try {
         class_1309 var6 = this.offline$renderedEntity;
         if (var6 == null) {
            return;
         }

         float var7 = class_310.method_1551().method_61966().method_60637(true);
         gp$sZ var8 = new gp$sZ(var2, this.field_4737, var6, var7, var1.field_61820, var5);
         var8.bdV();
         if (var5.isCancelled() && dv.aiM(var6)) {
            if (offline$baseEntitySubmit == null) {
               Lookup var9 = MethodHandles.privateLookupIn(class_922.class, MethodHandles.lookup());
               offline$baseEntitySubmit = var9.findSpecial(
                  class_897.class,
                  "method_3936",
                  MethodType.methodType(void.class, class_10017.class, class_4587.class, class_11659.class, class_12075.class),
                  class_922.class
               );
            }

            offline$baseEntitySubmit.bindTo(this).invokeWithArguments(var1, var2, var3, var4);
         }
      } catch (Throwable var10) {
         if (!offline$reportedEntityRenderFailure) {
            offline$reportedEntityRenderFailure = true;
            System.err.println("[offline-bootstrap] living entity render event bridge failed: " + var10);
            var10.printStackTrace();
         }
      }
   }
}
