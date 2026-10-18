package mixin.accessors;

import net.minecraft.class_309;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Coerce;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(
   value = {class_309.class},
   remap = false
)
public abstract class KeyboardInputMixin {
   public KeyboardInputMixin() {
   }

   @Inject(
      method = {"method_1466"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$keyPress(long var1, int var3, @Coerce Object var4, CallbackInfo var5) {
      try {
         int var6 = ((Number)var4.getClass().getMethod("comp_4795").invoke(var4)).intValue();
         int var7 = ((Number)var4.getClass().getMethod("comp_4797").invoke(var4)).intValue();
         Class var8 = Class.forName("sixtwo.gA", true, var4.getClass().getClassLoader());
         Object var9 = var8.getConstructors()[0].newInstance(null, var4, var6, var3, var7);
         Class var10 = Class.forName("sixtwo.rD", true, var8.getClassLoader());
         Object var11 = var10.getMethod("dme").invoke(null);
         if (var11 != null && (Boolean)var11.getClass().getMethod("ddT", var8).invoke(var11, var9)) {
            var5.cancel();
            return;
         }

         Object var12 = var10.getField("dlmvG").get(null);
         Object var13 = var12 == null ? null : var12.getClass().getField("field_1755").get(var12);
         if (var13 == null) {
            var8.getMethod("bdV").invoke(var9);
            if ((Boolean)var8.getMethod("bdW").invoke(var9)) {
               var5.cancel();
            }
         }
      } catch (Throwable var14) {
      }
   }
}
