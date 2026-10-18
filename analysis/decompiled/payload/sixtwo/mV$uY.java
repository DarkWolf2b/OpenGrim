package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum mV$uY {
   cbueF,
   shkMN,
   RjBTD;

   private static final mV$uY[] yTcfC;

   private static String dvR(byte[] var0) {
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

   private static mV$uY[] dvQ() {
      return new mV$uY[]{cbueF, shkMN, RjBTD};
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var9 = gb.aYR(-2341574322269048736L, 9031629930245312220L, MethodHandles.lookup().lookupClass()).a(13072599195549L) ^ 49428675052901L;
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
      String var5 = "¹\u0097\u0010\u0017\u0019À\u001eh®8Ó+Y\u0013¿§\u0096µØWñÿ\u0088¬\u0010¹\u0097\u0010\u0017\u0019À\u001ehÓá\u000b\u008ei×\u0011\u001b\u0010ûö8í=Z\u0090;qØÀ\u001e_\bO@";
      int var7 = "¹\u0097\u0010\u0017\u0019À\u001eh®8Ó+Y\u0013¿§\u0096µØWñÿ\u0088¬\u0010¹\u0097\u0010\u0017\u0019À\u001ehÓá\u000b\u008ei×\u0011\u001b\u0010ûö8í=Z\u0090;qØÀ\u001e_\bO@"
         .length();
      char var4 = 24;
      int var3 = -1;

      while (true) {
         byte[] var8 = var1.doFinal(var5.substring(++var3, var3 + var4).getBytes("ISO-8859-1"));
         String var13 = dvR(var8).intern();
         byte var10001 = -1;
         var0[var6++] = var13;
         if ((var3 += var4) >= var7) {
            cbueF = new mV$uY();
            shkMN = new mV$uY();
            RjBTD = new mV$uY();
            yTcfC = dvQ();
            return;
         }

         var4 = var5.charAt(var3);
      }
   }
}
