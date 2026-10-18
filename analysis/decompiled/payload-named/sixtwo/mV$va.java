package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum mV$va {
   mIFyi,
   xvJym,
   nSVue,
   ZzPmA;

   private static final mV$va[] tlqtB;

   private static mV$va[] dvX() {
      return new mV$va[]{mIFyi, xvJym, nSVue, ZzPmA};
   }

   private static String dvY(byte[] var0) {
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

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var9 = gb.aYR(-6363050942209904719L, 7906421645435602670L, MethodHandles.lookup().lookupClass()).a(88850852790273L) ^ 18515571574588L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[4];
      int var6 = 0;
      String var5 = "å\u0093pnm´\u0084\u0082\u0010\tÖ¤|\u0084ö\u0091kt°»\u0099w\u008bü4";
      int var7 = "å\u0093pnm´\u0084\u0082\u0010\tÖ¤|\u0084ö\u0091kt°»\u0099w\u008bü4".length();
      char var4 = '\b';
      int var12 = -1;

      label28:
      while (true) {
         String var13 = var5.substring(++var12, var12 + var4);
         byte var10001 = -1;

         while (true) {
            byte[] var8 = var1.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dvY(var8).intern();
            switch (var10001) {
               case 0:
                  var0[var6++] = var19;
                  if ((var12 += var4) >= var7) {
                     mIFyi = new mV$va();
                     xvJym = new mV$va();
                     nSVue = new mV$va();
                     ZzPmA = new mV$va();
                     tlqtB = dvX();
                     return;
                  }

                  var4 = var5.charAt(var12);
                  break;
               default:
                  var0[var6++] = var19;
                  if ((var12 += var4) < var7) {
                     var4 = var5.charAt(var12);
                     continue label28;
                  }

                  var5 = "\tÖ¤|\u0084ö\u0091kò~ªâÈ\u000eÊt\u0010\u00ad£\f\t|\u0095uñ!p\bGÜd\u0014à";
                  var7 = "\tÖ¤|\u0084ö\u0091kò~ªâÈ\u000eÊt\u0010\u00ad£\f\t|\u0095uñ!p\bGÜd\u0014à".length();
                  var4 = 16;
                  var12 = -1;
            }

            var13 = var5.substring(++var12, var12 + var4);
            var10001 = 0;
         }
      }
   }
}
