package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1657;
import net.minecraft.class_1799;

public class oI extends oK {
   private final class_1657 sgPHk;
   private final int yUtMe;
   private static String QAjJe;
   private static long Nyxqf;
   private static String SiwyH;
   private static long[] gJXIM;
   private static Integer[] OObll;
   private static Map XjpLI;

   public native int cIE();

   public oI(int var1) {
      this(null, var1);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public oI(class_1657 var1, int var2) {
      long var3 = Nyxqf ^ 57672505296514L;
      String var10000 = cIG();
      super();
      String var5 = var10000;

      label42: {
         label37: {
            try {
               var10 = var2;
               if (var5 != null) {
                  break label37;
               }

               if (var2 < 0) {
                  break label42;
               }
            } catch (IllegalArgumentException var9) {
               throw cIH(var9);
            }

            var10 = var2;
         }

         try {
            if (var10 > cIL<"k">(31862, 8689029994629743799L ^ var3)) {
               break label42;
            }
         } catch (IllegalArgumentException var8) {
            throw cIH(var8);
         }

         try {
            this.sgPHk = var1;
            this.yUtMe = var2;
            if (var5 != null) {
               iS.bwK("ae7Vz");
            }

            return;
         } catch (IllegalArgumentException var7) {
            throw cIH(var7);
         }
      }

      try {
         throw new IllegalArgumentException(SiwyH);
      } catch (IllegalArgumentException var6) {
         throw cIH(var6);
      }
   }

   static {
      Loader.doInit(oI.class);
      _46a80b374e1aa282fd748f80b5cdc450();
   }

   @Override
   public native class_1799 cIu();

   public native class_1657 cID();

   private static native CallSite cIL(Lookup var0, String var1, MethodType var2);

   public native boolean cIC();

   private static native String cII(byte[] var0);

   private static native IllegalArgumentException cIH(IllegalArgumentException var0);

   private static native int cIJ(int var0, long var1);

   private static native int cIK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native String cIG();

   public static native void cIF(String var0);

   @Override
   public native int cIv();

   private static native void _46a80b374e1aa282fd748f80b5cdc450();
}
