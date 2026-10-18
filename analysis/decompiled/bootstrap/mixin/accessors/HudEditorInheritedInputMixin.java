package mixin.accessors;

import net.minecraft.class_4069;
import net.minecraft.class_408;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Coerce;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

@Mixin(
   value = {class_4069.class},
   remap = false
)
public interface HudEditorInheritedInputMixin {
   private boolean offline$isHudEditor() {
      return this instanceof class_408;
   }

   private static Object mappedButton(ClassLoader var0, int var1) throws Exception {
      Class var2 = Class.forName("sixtwo.mA", true, var0);
      return var2.getMethod("cmN", int.class).invoke(null, var1);
   }

   private static double[] scaledMouse(ClassLoader var0) throws Exception {
      Class var1 = Class.forName("net.minecraft.class_241", true, var0);
      Object var2 = Class.forName("sixtwo.rm", true, var0).getMethod("dis").invoke(null);
      return new double[]{((Number)var1.getField("field_1343").get(var2)).doubleValue(), ((Number)var1.getField("field_1342").get(var2)).doubleValue()};
   }

   private static void dispatch(ClassLoader var0, String var1, Class<?>[] var2, Object... var3) throws Exception {
      Class var4 = Class.forName("sixtwo." + var1, true, var0);
      Object var5 = var4.getConstructor(var2).newInstance(var3);
      var4.getMethod("bdV").invoke(var5);
   }

   @Inject(
      method = {"method_25406"},
      at = {@At("HEAD")},
      remap = false
   )
   default void offline$mouseReleased(@Coerce Object var1, CallbackInfoReturnable<Boolean> var2) {
      if (this.offline$isHudEditor()) {
         try {
            ClassLoader var3 = var1.getClass().getClassLoader();
            double var4 = ((Number)var1.getClass().getMethod("comp_4798").invoke(var1)).doubleValue();
            double var6 = ((Number)var1.getClass().getMethod("comp_4799").invoke(var1)).doubleValue();
            int var8 = ((Number)var1.getClass().getMethod("method_74245").invoke(var1)).intValue();
            Object var9 = mappedButton(var3, var8);
            dispatch(var3, "hy", new Class[]{double.class, double.class, var9.getClass()}, var4, var6, var9);
         } catch (Throwable var10) {
         }
      }
   }

   @Inject(
      method = {"method_25403"},
      at = {@At("HEAD")},
      remap = false
   )
   default void offline$mouseDragged(@Coerce Object var1, double var2, double var4, CallbackInfoReturnable<Boolean> var6) {
      if (this.offline$isHudEditor()) {
         try {
            ClassLoader var7 = var1.getClass().getClassLoader();
            int var8 = ((Number)var1.getClass().getMethod("method_74245").invoke(var1)).intValue();
            Object var9 = mappedButton(var7, var8);
            double[] var10 = scaledMouse(var7);
            dispatch(var7, "hz", new Class[]{double.class, double.class, var9.getClass(), double.class, double.class}, var10[0], var10[1], var9, var2, var4);
         } catch (Throwable var11) {
         }
      }
   }
}
