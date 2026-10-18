package sixtwo;

import native.Loader;
import net.minecraft.class_1304;
import net.minecraft.class_1309;
import net.minecraft.class_1799;

public class oJ extends oK {
   private final class_1309 rKbxM;
   private final int sJuFf;
   private static long hXcem;
   private static String fFKJR;
   private static long XMJQB;

   public oJ(int var1) {
      this(null, var1);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public oJ(class_1309 var1, int var2) {
      long var3 = hXcem ^ 30982827063185L;
      String var10000 = oI.cIG();
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
               throw cIP(var9);
            }

            var10 = var2;
         }

         try {
            if (var10 > 3) {
               break label42;
            }
         } catch (IllegalArgumentException var8) {
            throw cIP(var8);
         }

         try {
            this.rKbxM = var1;
            this.sJuFf = var2;
            if (iS.bwL() == null) {
               oI.cIF("JDOE7");
            }

            return;
         } catch (IllegalArgumentException var7) {
            throw cIP(var7);
         }
      }

      try {
         throw new IllegalArgumentException(fFKJR);
      } catch (IllegalArgumentException var6) {
         throw cIP(var6);
      }
   }

   static {
      Loader.doInit(oJ.class);
      _b449aaf11629725125c71fb3b860f015();
   }

   @Override
   public native class_1799 cIu();

   private static native IllegalArgumentException cIP(IllegalArgumentException var0);

   private static native String cIQ(byte[] var0);

   @Override
   public native int cIv();

   public native int cIO();

   private native class_1304 cIM();

   public native class_1309 cIN();

   private static native void _b449aaf11629725125c71fb3b860f015();
}
