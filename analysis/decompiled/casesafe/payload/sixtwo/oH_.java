package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1657;
import net.minecraft.class_1799;

public class oH extends oK {
   private final class_1657 PFgHm;
   private final int LNOqr;
   private static long ianDy;
   private static String pvUue;
   private static long[] wMohK;
   private static Integer[] XkfyD;
   private static Map OxWir;

   public oH(int var1) {
      this(null, var1);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public oH(class_1657 var1, int var2) {
      long var3 = ianDy ^ 9192844765261L;
      String var10000 = oI.cIG();
      super();
      String var5 = var10000;

      label31: {
         label30: {
            label29: {
               try {
                  var9 = var2;
                  if (var5 != null) {
                     break label29;
                  }

                  if (var2 < 0) {
                     break label30;
                  }
               } catch (IllegalArgumentException var8) {
                  throw cIx(var8);
               }

               var9 = var2;
            }

            try {
               if (var9 <= cIB<"i">(20811, 8157452811162577594L ^ var3)) {
                  break label31;
               }
            } catch (IllegalArgumentException var7) {
               throw cIx(var7);
            }
         }

         try {
            throw new IllegalArgumentException(pvUue);
         } catch (IllegalArgumentException var6) {
            throw cIx(var6);
         }
      }

      this.PFgHm = var1;
      this.LNOqr = var2;
   }

   static {
      Loader.doInit(oH.class);
      _1e65200583226e7e83e116e0481e0fbd();
   }

   @Override
   public native class_1799 cIu();

   private static native void _1e65200583226e7e83e116e0481e0fbd();

   private static native String cIy(byte[] var0);

   private static native CallSite cIB(Lookup var0, String var1, MethodType var2);

   private static native IllegalArgumentException cIx(IllegalArgumentException var0);

   private static native int cIA(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int cIz(int var0, long var1);

   @Override
   public native int cIv();
}
