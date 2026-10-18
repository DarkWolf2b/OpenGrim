package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum mV$uW {
   CYtXg,
   qGicn,
   ArrYB,
   PLxbX,
   IZyor,
   lnOVG;

   private static final mV$uW[] zrTgs;
   private static final long wNLpw = gb.aYR(-3260000387179747194L, -2714361973627559324L, MethodHandles.lookup().lookupClass()).a(188532629667448L);
   private static final long zXfnD;

   private static mV$uW[] dvM() {
      long var0 = wNLpw ^ 65973750125372L;
      mV$uW[] var10000 = new mV$uW[(int)zXfnD];
      var10000[0] = CYtXg;
      var10000[1] = qGicn;
      var10000[2] = ArrYB;
      var10000[3] = PLxbX;
      var10000[4] = IZyor;
      var10000[5] = lnOVG;
      return var10000;
   }

   private static String dvN(byte[] var0) {
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
      long var14 = wNLpw ^ 118026694154762L;
      Cipher var6;
      Cipher var10000 = var6 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var14 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var7 = 1; var7 < 8; var7++) {
         var10003[var7] = (byte)(var14 << var7 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var5 = new String[6];
      int var11 = 0;
      String var10 = "\bæ\u008c¦\u0002ÈýLb&Ð¾\u000f\u0000\u0002ö\u0010\u0095\u0091\f'H\u0095G7\u0094÷ÔqÆ1+l\búÑ\u008eÎ\u00899\u0011Â\u0010\u0095\u0091\f'H\u0095G7#¶\u0007rú\u0089\u0010¹";
      int var12 = "\bæ\u008c¦\u0002ÈýLb&Ð¾\u000f\u0000\u0002ö\u0010\u0095\u0091\f'H\u0095G7\u0094÷ÔqÆ1+l\búÑ\u008eÎ\u00899\u0011Â\u0010\u0095\u0091\f'H\u0095G7#¶\u0007rú\u0089\u0010¹"
         .length();
      char var9 = 16;
      int var17 = -1;

      label37:
      while (true) {
         String var18 = var10.substring(++var17, var17 + var9);
         byte var10001 = -1;

         while (true) {
            byte[] var13 = var6.doFinal(var18.getBytes("ISO-8859-1"));
            String var26 = dvN(var13).intern();
            switch (var10001) {
               case 0:
                  var5[var11++] = var26;
                  if ((var17 += var9) >= var12) {
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var14 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var14 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = 7896330065170531842L;
                     byte[] var4 = var0.doFinal(
                        new byte[]{
                           (byte)(var2 >>> 56),
                           (byte)(var2 >>> 48),
                           (byte)(var2 >>> 40),
                           (byte)(var2 >>> 32),
                           (byte)(var2 >>> 24),
                           (byte)(var2 >>> 16),
                           (byte)(var2 >>> 8),
                           (byte)var2
                        }
                     );
                     long var30 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     var10001 = -1;
                     zXfnD = var30;
                     CYtXg = new mV$uW();
                     qGicn = new mV$uW();
                     ArrYB = new mV$uW();
                     PLxbX = new mV$uW();
                     IZyor = new mV$uW();
                     lnOVG = new mV$uW();
                     zrTgs = dvM();
                     return;
                  }

                  var9 = var10.charAt(var17);
                  break;
               default:
                  var5[var11++] = var26;
                  if ((var17 += var9) < var12) {
                     var9 = var10.charAt(var17);
                     continue label37;
                  }

                  var10 = "°âí\u008f;Ü\tp.QÇí\u001dw×A\bn\u0086ës\u0081Ñ°\u009a";
                  var12 = "°âí\u008f;Ü\tp.QÇí\u001dw×A\bn\u0086ës\u0081Ñ°\u009a".length();
                  var9 = 16;
                  var17 = -1;
            }

            var18 = var10.substring(++var17, var17 + var9);
            var10001 = 0;
         }
      }
   }
}
