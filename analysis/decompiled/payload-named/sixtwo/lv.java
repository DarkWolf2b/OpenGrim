package sixtwo;

import java.awt.image.BufferedImage;
import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gl.GpuSampler;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.util.Identifier;

public final class lv extends AbstractTexture {
   private final int WfpeI;
   private final int nTTvA;
   private static long yxpjw;
   private static String AUrwX;
   private static long[] VYoph;
   private static Integer[] xmMgG;
   private static Map PiNTh;

   public lv(BufferedImage var1) {
      long var2 = yxpjw ^ 16983991746010L;
      super();
      iS[] var10000 = lt.cbc();
      this.WfpeI = var1.getWidth();
      this.nTTvA = var1.getHeight();
      NativeImage var5 = new NativeImage(this.WfpeI, this.nTTvA, false);
      iS[] var4 = var10000;
      int var6 = 0;

      while (true) {
         if (var6 < this.nTTvA) {
            if (var4 != null) {
               break;
            }

            int var7 = 0;

            label34: {
               while (var7 < this.WfpeI) {
                  try {
                     var5.setColorArgb(var7, var6, var1.getRGB(var7, var6));
                     var7++;
                     if (var4 != null) {
                        break label34;
                     }

                     if (var4 == null) {
                        continue;
                     }
                  } catch (IllegalStateException var8) {
                     throw cbn(var8);
                  }

                  iS.bwK("zr74mc");
                  break;
               }

               var6++;
            }

            if (var4 == null) {
               continue;
            }
         }

         this.cbh(var5);
         break;
      }
   }

   public lv(NativeImage var1) {
      this.WfpeI = var1.getWidth();
      this.nTTvA = var1.getHeight();
      this.cbh(var1);
   }

   public lv(byte[] var1) {
      long var2 = yxpjw ^ 77205324630558L;
      super();

      NativeImage var4;
      try {
         var4 = NativeImage.read(var1);
      } catch (IOException var9) {
         throw new IllegalStateException(AUrwX, var9);
      } finally {
         Arrays.fill(var1, (byte)0);
      }

      this.WfpeI = var4.getWidth();
      this.nTTvA = var4.getHeight();
      this.cbh(var4);
   }

   static {
      Loader.doInit(lv.class);
      _6a9d7b9c57742586f19ef15f3c4cde57();
   }

   public native int cbl();

   private static native CallSite cbr(Lookup var0, String var1, MethodType var2);

   private static native String cbo(byte[] var0);

   private native void cbh(NativeImage var1);

   private static native IllegalStateException cbn(IllegalStateException var0);

   public native Identifier cbi();

   public native Identifier cbj(String var1);

   public native void cbk(GpuSampler var1);

   public native int cbm();

   private static native int cbp(int var0, long var1);

   private static native int cbq(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _6a9d7b9c57742586f19ef15f3c4cde57();
}
