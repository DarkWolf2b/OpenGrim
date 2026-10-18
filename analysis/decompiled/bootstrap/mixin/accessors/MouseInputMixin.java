package mixin.accessors;

import net.minecraft.class_312;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Shadow;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Coerce;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(
   value = {class_312.class},
   remap = false
)
public abstract class MouseInputMixin {
   @Shadow
   private double field_1795;
   @Shadow
   private double field_1794;

   public MouseInputMixin() {
   }

   @Inject(
      method = {"method_1601"},
      at = {@At("HEAD")},
      cancellable = true,
      remap = false
   )
   private void offline$onButton(long var1, @Coerce Object var3, int var4, CallbackInfo var5) {
      try {
         ClassLoader var6 = var3.getClass().getClassLoader();
         int var7 = ((Number)var3.getClass().getMethod("comp_4801").invoke(var3)).intValue();
         int var8 = ((Number)var3.getClass().getMethod("comp_4797").invoke(var3)).intValue();
         Class var9 = Class.forName("net.minecraft.class_241", true, var6);
         Object var10 = Class.forName("sixtwo.rm", true, var6).getMethod("dis").invoke(null);
         double var11 = ((Number)var9.getField("field_1343").get(var10)).doubleValue();
         double var13 = ((Number)var9.getField("field_1342").get(var10)).doubleValue();
         Class var15 = Class.forName("sixtwo.mA", true, var6);
         Object var16 = var15.getMethod("cmN", int.class).invoke(null, var7);
         Class var17 = Class.forName("sixtwo.gy", true, var6);
         Object var18 = var17.getConstructor(var15, int.class, int.class, double.class, double.class, double.class, double.class)
            .newInstance(var16, var4, var8, this.field_1795, this.field_1794, var11, var13);
         var17.getMethod("bdV").invoke(var18);
         if ((Boolean)var17.getMethod("bdW").invoke(var18)) {
            var5.cancel();
         }

         Class var19 = Class.forName("sixtwo.gA", true, var6);
         Object var20 = var19.getConstructors()[0].newInstance(var3, null, var7, var4, var8);
         Class var21 = Class.forName("sixtwo.rD", true, var6);
         Object var22 = var21.getMethod("dme").invoke(null);
         if (var22 != null && (Boolean)var22.getClass().getMethod("ddT", var19).invoke(var22, var20)) {
            var5.cancel();
            return;
         }

         Object var23 = var21.getField("dlmvG").get(null);
         Object var24 = var23 == null ? null : var23.getClass().getField("field_1755").get(var23);
         if (var24 == null) {
            var19.getMethod("bdV").invoke(var20);
            if ((Boolean)var19.getMethod("bdW").invoke(var20)) {
               var5.cancel();
            }
         }
      } catch (Throwable var25) {
      }
   }
}
