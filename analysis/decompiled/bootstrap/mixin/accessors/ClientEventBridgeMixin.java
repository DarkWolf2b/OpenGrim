package mixin.accessors;

import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import net.minecraft.class_310;
import net.minecraft.class_437;
import net.minecraft.class_746;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;
import sixtwo.gJ;

@Mixin(
   value = {class_310.class},
   remap = false
)
public abstract class ClientEventBridgeMixin {
   private static final Set<String> offline$reported = ConcurrentHashMap.newKeySet();

   public ClientEventBridgeMixin() {
   }

   @Inject(
      method = {"method_1574"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$tickPre(CallbackInfo var1) {
      this.dispatch("sixtwo.gH$th");
   }

   @Inject(
      method = {"method_1574"},
      at = {@At("TAIL")},
      remap = false
   )
   private void offline$tickPost(CallbackInfo var1) {
      this.dispatch("sixtwo.gH$ti");
      this.restoreMovementModules();
   }

   @Inject(
      method = {"method_1523"},
      at = {@At("HEAD")},
      remap = false
   )
   private void offline$frame(boolean var1, CallbackInfo var2) {
      this.dispatch("sixtwo.gG");
   }

   @Inject(
      method = {"method_17673"},
      at = {@At("HEAD")},
      require = 0,
      remap = false
   )
   private void offline$tickPick(CallbackInfo var1) {
      this.dispatch("sixtwo.gF");
   }

   @Inject(
      method = {"method_1507"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$setScreen(class_437 var1, CallbackInfo var2) {
      try {
         gJ var3 = new gJ(var1);
         var3.bdV();
         if (var3.bdW()) {
            var2.cancel();
         }
      } catch (Throwable var4) {
         report("sixtwo.gJ", var4);
      }
   }

   @Inject(
      method = {"method_1583"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$startUseItemPre(CallbackInfo var1) {
      if (this.dispatchCancellable("sixtwo.gO$tm")) {
         var1.cancel();
      }
   }

   @Inject(
      method = {"method_1583"},
      at = {@At("RETURN")},
      cancellable = true,
      remap = false
   )
   private void offline$startUseItemPost(CallbackInfo var1) {
      if (this.dispatchCancellable("sixtwo.gO$tn")) {
         var1.cancel();
      }
   }

   @Inject(
      method = {"method_1590"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$continueAttackPre(boolean var1, CallbackInfo var2) {
      if (this.dispatchCancellable("sixtwo.gX$tr")) {
         var2.cancel();
      }
   }

   @Inject(
      method = {"method_1590"},
      at = {@At("RETURN")},
      cancellable = true,
      remap = false
   )
   private void offline$continueAttackPost(boolean var1, CallbackInfo var2) {
      if (this.dispatchCancellable("sixtwo.gX$ts")) {
         var2.cancel();
      }
   }

   @Inject(
      method = {"method_1536"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$startAttackPre(CallbackInfoReturnable<Boolean> var1) {
      if (this.dispatchCancellable("sixtwo.gZ$tt")) {
         var1.setReturnValue(false);
      }
   }

   @Inject(
      method = {"method_1536"},
      at = {@At("RETURN")},
      cancellable = true,
      remap = false
   )
   private void offline$startAttackPost(CallbackInfoReturnable<Boolean> var1) {
      if (this.dispatchCancellable("sixtwo.gZ$tu")) {
         var1.setReturnValue(false);
      }
   }

   private void dispatch(String var1) {
      try {
         Class var2 = Class.forName(var1, true, this.getClass().getClassLoader());
         Object var3 = var2.getDeclaredConstructor().newInstance();
         var2.getMethod("bdV").invoke(var3);
      } catch (Throwable var4) {
         report(var1, var4);
      }
   }

   private boolean dispatchCancellable(String var1) {
      try {
         Class var2 = Class.forName(var1, true, this.getClass().getClassLoader());
         Object var3 = var2.getDeclaredConstructor().newInstance();
         var2.getMethod("bdV").invoke(var3);
         return (Boolean)var2.getMethod("bdW").invoke(var3);
      } catch (Throwable var4) {
         report(var1, var4);
         return false;
      }
   }

   private void restoreMovementModules() {
      try {
         class_310 var1 = (class_310)this;
         class_746 var2 = var1.field_1724;
         if (var2 == null || var1.field_1755 != null) {
            return;
         }

         ClassLoader var3 = this.getClass().getClassLoader();
         Object var4 = Class.forName("sixtwo.rD", true, var3).getMethod("dlJ").invoke(null);
         Class var5 = Class.forName("sixtwo.eE", true, var3);
         Object var6 = var4.getClass().getMethod("aZx", Class.class).invoke(var4, var5);
         if ((Boolean)var5.getMethod("bag").invoke(var6) && (Boolean)var5.getMethod("awz").invoke(var6)) {
            var2.getClass().getMethod("method_6043").invoke(var2);
         }

         Class var7 = Class.forName("sixtwo.eC", true, var3);
         Object var8 = var4.getClass().getMethod("aZx", Class.class).invoke(var4, var7);
         if ((Boolean)var7.getMethod("bag").invoke(var8)) {
            Object var9 = var2.getClass().getField("field_3913").get(var2);
            Object var10 = var9.getClass().getMethod("method_3128").invoke(var9);
            float var11 = var10.getClass().getField("field_1343").getFloat(var10);
            float var12 = var10.getClass().getField("field_1342").getFloat(var10);
            if (var11 * var11 + var12 * var12 > 1.0E-4F) {
               var2.getClass().getMethod("method_5728", boolean.class).invoke(var2, true);
            }
         }
      } catch (Throwable var13) {
         report("movement-module-fallback", var13);
      }
   }

   private static void report(String var0, Throwable var1) {
      if (offline$reported.add(var0)) {
         System.err.println("[offline-bootstrap] event dispatch failed for " + var0 + ": " + var1);
         var1.printStackTrace();
      }
   }
}
