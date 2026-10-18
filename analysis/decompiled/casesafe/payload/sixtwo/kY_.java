package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum kY {
   DsgDa,
   YYiVQ;

   private final int RpkTL;
   private final boolean nyRgJ;

   private kY(int var3, boolean var4) {
      this.RpkTL = var3;
      this.nyRgJ = var4;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var9 = gb.aYR(-4835773653455488233L, 4752228430730453527L, MethodHandles.lookup().lookupClass()).a(245841564494153L) ^ 23659549514887L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[2];
      int var6 = 0;
      String var5 = "├Ź├»┬╝\u009dijEp\u0010\u008f\u008c┬á├¬=├łSi\t┬ú3\u0094┬Ş\u00ad\u0003 ";
      int var7 = "├Ź├»┬╝\u009dijEp\u0010\u008f\u008c┬á├¬=├łSi\t┬ú3\u0094┬Ş\u00ad\u0003 ".length();
      char var4 = '\b';
      int var3 = -1;

      while (true) {
         byte[] var8 = var1.doFinal(var5.substring(++var3, var3 + var4).getBytes("ISO-8859-1"));
         String var13 = bWz(var8).intern();
         byte var10001 = -1;
         var0[var6++] = var13;
         if ((var3 += var4) >= var7) {
            DsgDa = new kY(0, false);
            YYiVQ = new kY(1, true);
            return;
         }

         var4 = var5.charAt(var3);
      }
   }

   public int bWw() {
      return this.RpkTL;
   }

   private static String bWz(byte[] var0) {
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

   public boolean bWx() {
      return this.nyRgJ;
   }
}
