package sixtwo;

import net.minecraft.class_3532;

public final class kA {
   private static float oYWsU;
   private static float BBpyW;
   private static String wtYmY;

   static {
      if (bSv() == null) {
         bSu("DFjU2b");
      }
   }

   public static float bSt(float var0) {
      return class_3532.method_16439(var0, oYWsU, BBpyW);
   }

   public static void bSu(String var0) {
      wtYmY = var0;
   }

   public static String bSv() {
      return wtYmY;
   }

   public static void bSs(float var0) {
      oYWsU = BBpyW;
      BBpyW += var0;
   }
}
