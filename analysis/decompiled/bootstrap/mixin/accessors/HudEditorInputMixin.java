package mixin.accessors;

import net.minecraft.class_408;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Coerce;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

@Mixin(
   value = {class_408.class},
   remap = false
)
public abstract class HudEditorInputMixin {
   public HudEditorInputMixin() {
   }

   private static ClassLoader loader(Object var0) {
      return var0 == null ? HudEditorInputMixin.class.getClassLoader() : var0.getClass().getClassLoader();
   }

   private static Object mouseButton(ClassLoader var0, int var1) throws Exception {
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
      method = {"method_25404"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$keyPressed(@Coerce Object var1, CallbackInfoReturnable<Boolean> var2) {
      try {
         int var3 = ((Number)var1.getClass().getMethod("comp_4795").invoke(var1)).intValue();
         int var4 = ((Number)var1.getClass().getMethod("comp_4796").invoke(var1)).intValue();
         int var5 = ((Number)var1.getClass().getMethod("comp_4797").invoke(var1)).intValue();
         dispatch(loader(var1), "hC", new Class[]{int.class, int.class, int.class}, var3, var4, var5);
      } catch (Throwable var6) {
      }
   }

   @Inject(
      method = {"method_25402"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$mouseClicked(@Coerce Object var1, boolean var2, CallbackInfoReturnable<Boolean> var3) {
      try {
         ClassLoader var4 = loader(var1);
         int var5 = ((Number)var1.getClass().getMethod("method_74245").invoke(var1)).intValue();
         Object var6 = mouseButton(var4, var5);
         double[] var7 = scaledMouse(var4);
         dispatch(var4, "hA", new Class[]{double.class, double.class, var6.getClass()}, var7[0], var7[1], var6);
      } catch (Throwable var8) {
      }
   }

   @Inject(
      method = {"method_25406"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$mouseReleased(@Coerce Object var1, CallbackInfoReturnable<Boolean> var2) {
      try {
         ClassLoader var3 = loader(var1);
         double var4 = ((Number)var1.getClass().getMethod("comp_4798").invoke(var1)).doubleValue();
         double var6 = ((Number)var1.getClass().getMethod("comp_4799").invoke(var1)).doubleValue();
         int var8 = ((Number)var1.getClass().getMethod("method_74245").invoke(var1)).intValue();
         Object var9 = mouseButton(var3, var8);
         dispatch(var3, "hy", new Class[]{double.class, double.class, var9.getClass()}, var4, var6, var9);
      } catch (Throwable var10) {
      }
   }

   @Inject(
      method = {"method_25403"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$mouseDragged(@Coerce Object var1, double var2, double var4, CallbackInfoReturnable<Boolean> var6) {
      try {
         ClassLoader var7 = loader(var1);
         int var8 = ((Number)var1.getClass().getMethod("method_74245").invoke(var1)).intValue();
         Object var9 = mouseButton(var7, var8);
         double[] var10 = scaledMouse(var7);
         dispatch(var7, "hz", new Class[]{double.class, double.class, var9.getClass(), double.class, double.class}, var10[0], var10[1], var9, var2, var4);
      } catch (Throwable var11) {
      }
   }

   @Inject(
      method = {"method_25401"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$mouseScrolled(double var1, double var3, double var5, double var7, CallbackInfoReturnable<Boolean> var9) {
      try {
         dispatch(HudEditorInputMixin.class.getClassLoader(), "hx", new Class[]{double.class, double.class, double.class}, var1, var3, var7);
      } catch (Throwable var11) {
      }
   }

   @Inject(
      method = {"method_25400"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$charTyped(@Coerce Object var1, CallbackInfoReturnable<Boolean> var2) {
      try {
         int var3 = ((Number)var1.getClass().getMethod("comp_4793").invoke(var1)).intValue();
         dispatch(loader(var1), "hE", new Class[]{char.class}, (char)var3);
      } catch (Throwable var4) {
      }
   }

   @Inject(
      method = {"method_25432"},
      at = {@At("HEAD")},
      remap = false,
      require = 0
   )
   private void offline$removed(CallbackInfo var1) {
      try {
         dispatch(HudEditorInputMixin.class.getClassLoader(), "hD", new Class[0]);
      } catch (Throwable var3) {
      }
   }
}
