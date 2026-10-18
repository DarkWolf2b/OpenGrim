package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum kd {
   AhlXN,
   sQVlR,
   IbNTv;

   private final int hYhDr;
   private static iS[] qESfC;

   private kd(int var3) {
      this.hYhDr = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var9 = gb.aYR(-3065632304402411693L, -4551052499802911118L, MethodHandles.lookup().lookupClass()).a(7103219834343L) ^ 117399497342482L;
      if (bOg() == null) {
         bOf(new iS[3]);
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
      String var5 = "A┬╝├ö\n├ę\u0012\u008c,\u0019\u009b├┤├é\u0084I\u0089├ź\u0010├Ž\u0013\u009e*#├Ľ┬╣\u009a}├î\u0002├▓\u009a\u0080├î\u001c\u00108├Ő\u000f├│├íZ\u0011├ë├»├Ő├┤/c\u0081h\u0019";
      int var7 = "A┬╝├ö\n├ę\u0012\u008c,\u0019\u009b├┤├é\u0084I\u0089├ź\u0010├Ž\u0013\u009e*#├Ľ┬╣\u009a}├î\u0002├▓\u009a\u0080├î\u001c\u00108├Ő\u000f├│├íZ\u0011├ë├»├Ő├┤/c\u0081h\u0019"
         .length();
      char var4 = 16;
      int var3 = -1;

      while (true) {
         byte[] var8 = var1.doFinal(var5.substring(++var3, var3 + var4).getBytes("ISO-8859-1"));
         String var13 = bOh(var8).intern();
         byte var10001 = -1;
         var0[var6++] = var13;
         if ((var3 += var4) >= var7) {
            AhlXN = new kd(0);
            sQVlR = new kd(1);
            IbNTv = new kd(2);
            return;
         }

         var4 = var5.charAt(var3);
      }
   }

   public static iS[] bOg() {
      return qESfC;
   }

   public static void bOf(iS[] var0) {
      qESfC = var0;
   }

   private static String bOh(byte[] var0) {
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

   public int bOd() {
      return this.hYhDr;
   }
}
