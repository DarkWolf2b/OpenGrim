package mixin.accessors;

import net.minecraft.class_329;
import net.minecraft.class_332;
import net.minecraft.class_9779;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(
   value = {class_329.class},
   remap = false
)
public abstract class GuiHudMixin {
   public GuiHudMixin() {
   }

   @Inject(
      method = {"method_1759"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$hideVanillaHotbar(class_332 var1, class_9779 var2, CallbackInfo var3) {
      try {
         ClassLoader var4 = this.getClass().getClassLoader();
         Class var5 = Class.forName("sixtwo.rD", true, var4);
         Object var6 = var5.getMethod("dlK").invoke(null);
         if (var6 == null) {
            return;
         }

         Object var7 = var6.getClass().getMethod("RD").invoke(var6);
         if (var7 == null) {
            return;
         }

         boolean var8 = (Boolean)var7.getClass().getMethod("Se").invoke(var7);
         boolean var9 = (Boolean)var7.getClass().getMethod("Om").invoke(var7);
         if (var8 && var9) {
            var3.cancel();
         }
      } catch (Throwable var10) {
      }
   }
}
