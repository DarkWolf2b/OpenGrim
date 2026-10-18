package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.FilterMode;
import net.minecraft.class_12137;

public final class lt {
   private static iS[] lwCsg;

   static {
      if (cbc() != null) {
         cbb(new iS[5]);
      }
   }

   public static iS[] cbc() {
      return lwCsg;
   }

   public static class_12137 caX() {
      return RenderSystem.getSamplerCache().method_75294(FilterMode.LINEAR);
   }

   public static class_12137 caW(boolean var0) {
      return RenderSystem.getSamplerCache().method_76521(FilterMode.LINEAR, var0);
   }

   public static class_12137 caZ(boolean var0) {
      return RenderSystem.getSamplerCache().method_76521(FilterMode.NEAREST, var0);
   }

   public static class_12137 cba() {
      return RenderSystem.getSamplerCache().method_75294(FilterMode.NEAREST);
   }

   public static class_12137 caY(boolean var0) {
      return RenderSystem.getSamplerCache().method_76520(FilterMode.LINEAR, var0);
   }

   public static void cbb(iS[] var0) {
      lwCsg = var0;
   }
}
