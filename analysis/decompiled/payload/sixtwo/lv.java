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
import net.minecraft.class_1011;
import net.minecraft.class_1044;
import net.minecraft.class_12137;
import net.minecraft.class_2960;

public final class lv extends class_1044 {
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
      class_1011 var5 = new class_1011(this.WfpeI, this.nTTvA, false);
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
                     var5.method_61941(var7, var6, var1.getRGB(var7, var6));
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

   public lv(class_1011 var1) {
      this.WfpeI = var1.method_4307();
      this.nTTvA = var1.method_4323();
      this.cbh(var1);
   }

   public lv(byte[] var1) {
      long var2 = yxpjw ^ 77205324630558L;
      super();

      class_1011 var4;
      try {
         var4 = class_1011.method_49277(var1);
      } catch (IOException var9) {
         throw new IllegalStateException(AUrwX, var9);
      } finally {
         Arrays.fill(var1, (byte)0);
      }

      this.WfpeI = var4.method_4307();
      this.nTTvA = var4.method_4323();
      this.cbh(var4);
   }

   static {
      Loader.doInit(lv.class);
      _6a9d7b9c57742586f19ef15f3c4cde57();
   }

   public native int cbl();

   private static native CallSite cbr(Lookup var0, String var1, MethodType var2);

   private static native String cbo(byte[] var0);

   private native void cbh(class_1011 var1);

   private static native IllegalStateException cbn(IllegalStateException var0);

   public native class_2960 cbi();

   public native class_2960 cbj(String var1);

   public native void cbk(class_12137 var1);

   public native int cbm();

   private static native int cbp(int var0, long var1);

   private static native int cbq(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _6a9d7b9c57742586f19ef15f3c4cde57();
}
