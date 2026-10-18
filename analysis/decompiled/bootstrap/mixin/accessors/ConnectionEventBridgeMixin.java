package mixin.accessors;

import java.lang.reflect.Constructor;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import net.minecraft.class_2535;
import net.minecraft.class_2547;
import net.minecraft.class_2596;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(
   value = {class_2535.class},
   remap = false
)
public abstract class ConnectionEventBridgeMixin {
   private static final Set<String> offline$reportedPacketFailures = ConcurrentHashMap.newKeySet();

   public ConnectionEventBridgeMixin() {
   }

   @Inject(
      method = {"method_10743"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$send(class_2596<?> var1, CallbackInfo var2) {
      if (dispatch("sixtwo.gL$tj", var1, this)) {
         var2.cancel();
      }
   }

   @Inject(
      method = {"method_10759"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private static void offline$receive(class_2596<?> var0, class_2547 var1, CallbackInfo var2) {
      if (dispatch("sixtwo.gL$tk", var0, var1)) {
         var2.cancel();
      }
   }

   private static boolean dispatch(String var0, Object var1, Object var2) {
      try {
         Class var3 = Class.forName(var0, true, var1.getClass().getClassLoader());
         Object var10 = null;

         for (Constructor var8 : var3.getDeclaredConstructors()) {
            if (var8.getParameterCount() == 2) {
               var8.setAccessible(true);
               var10 = var8.newInstance(var1, var2);
               break;
            }
         }

         if (var10 == null) {
            return false;
         } else {
            var3.getMethod("bdV").invoke(var10);
            return Boolean.TRUE.equals(var3.getMethod("bdW").invoke(var10));
         }
      } catch (Throwable var9) {
         if (offline$reportedPacketFailures.add(var0)) {
            Throwable var4 = var9;

            while (var4.getCause() != null) {
               var4 = var4.getCause();
            }

            System.err.println("[offline-bootstrap] packet event bridge failed for " + var0 + " / " + var1.getClass().getName() + ": " + var4);
            var4.printStackTrace();
         }

         return false;
      }
   }
}
