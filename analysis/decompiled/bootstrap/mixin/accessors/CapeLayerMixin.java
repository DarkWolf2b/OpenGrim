package mixin.accessors;

import net.minecraft.class_10055;
import net.minecraft.class_11659;
import net.minecraft.class_4587;
import net.minecraft.class_972;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.ee;
import sixtwo.rD;

@Mixin(
   value = {class_972.class},
   remap = false
)
public abstract class CapeLayerMixin {
   public CapeLayerMixin() {
   }

   @Inject(
      method = {"method_4177"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$replaceVanillaCape(class_4587 var1, class_11659 var2, int var3, class_10055 var4, float var5, float var6, CallbackInfo var7) {
      try {
         ee var8 = rD.dlJ().aZx(ee.class);
         if (var8.bag()) {
            var7.cancel();
         }
      } catch (Throwable var9) {
      }
   }
}
