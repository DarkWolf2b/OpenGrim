package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum ph {
   pvrFV,
   izpdM,
   iXNlP;

   private static boolean CSSXR;
   private static final long CSIsH = gb.aYR(5961235257073571500L, -7285154396015252657L, MethodHandles.lookup().lookupClass()).a(16588453934257L);

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var9 = CSIsH ^ 109303871310257L;
      if (!cNp()) {
         cNn(true);
      }

      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[3];
      int var6 = 0;
      String var5 = "\u0096ãN\"\u0088öpÌØ\u0018\u0097\u0006º\u008by32#Ä/ß\u0017»Á\bJ\u0095H3´\u001f¤.\u0018\u0096ãN\"\u0088öpÌöQ\\eË_$a}%ÙÏªå[û";
      int var7 = "\u0096ãN\"\u0088öpÌØ\u0018\u0097\u0006º\u008by32#Ä/ß\u0017»Á\bJ\u0095H3´\u001f¤.\u0018\u0096ãN\"\u0088öpÌöQ\\eË_$a}%ÙÏªå[û".length();
      char var4 = 24;
      int var3 = -1;

      while (true) {
         byte[] var8 = var1.doFinal(var5.substring(++var3, var3 + var4).getBytes("ISO-8859-1"));
         String var13 = cNr(var8).intern();
         byte var10001 = -1;
         var0[var6++] = var13;
         if ((var3 += var4) >= var7) {
            pvrFV = new ph();
            izpdM = new ph();
            iXNlP = new ph();
            return;
         }

         var4 = var5.charAt(var3);
      }
   }

   public static boolean cNo() {
      return CSSXR;
   }

   public static boolean cNp() {
      boolean var0 = cNo();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw cNq(var1);
      }
   }

   public static void cNn(boolean var0) {
      CSSXR = var0;
   }

   private static String cNr(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static MatchException cNq(MatchException var0) {
      return var0;
   }

   public static ph cNl(int var0) {
      long var1 = CSIsH ^ 59734196587775L;

      try {
         switch (var0) {
            case 1:
               return izpdM;
            case 2:
               return iXNlP;
         }
      } catch (MatchException var3) {
         throw cNq(var3);
      }

      return pvrFV;
   }
}
