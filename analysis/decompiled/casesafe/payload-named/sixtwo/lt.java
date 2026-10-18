package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.FilterMode;
import net.minecraft.client.gl.GpuSampler;

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

   public static GpuSampler caX() {
      return RenderSystem.getSamplerCache().get(FilterMode.LINEAR);
   }

   public static GpuSampler caW(boolean var0) {
      return RenderSystem.getSamplerCache().getRepeated(FilterMode.LINEAR, var0);
   }

   public static GpuSampler caZ(boolean var0) {
      return RenderSystem.getSamplerCache().getRepeated(FilterMode.NEAREST, var0);
   }

   public static GpuSampler cba() {
      return RenderSystem.getSamplerCache().get(FilterMode.NEAREST);
   }

   public static GpuSampler caY(boolean var0) {
      return RenderSystem.getSamplerCache().get(FilterMode.LINEAR, var0);
   }

   public static void cbb(iS[] var0) {
      lwCsg = var0;
   }
}
