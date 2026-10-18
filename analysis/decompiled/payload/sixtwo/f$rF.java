package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum f$rF {
   feLzE,
   aMhng,
   TvRJf,
   dHaRm,
   CjcqV;

   private static final f$rF[] CoxOk;

   private static f$rF[] dmz() {
      return new f$rF[]{feLzE, aMhng, TvRJf, dHaRm, CjcqV};
   }

   private static String dmA(byte[] var0) {
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
      long var9 = gb.aYR(8655956642286907199L, -4501477493932508548L, MethodHandles.lookup().lookupClass()).a(194376674244792L) ^ 108711930025378L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[5];
      int var6 = 0;
      String var5 = "¢òï:f\u009a\u00808|`5¢~T\u0018\u0081\u0010Öüx\u00ad³\u001c\u0000òô¿×ë»g1õ\u0010\u0085Më0ÜýÍ½÷iWÍ\u0081ÚØÄ";
      int var7 = "¢òï:f\u009a\u00808|`5¢~T\u0018\u0081\u0010Öüx\u00ad³\u001c\u0000òô¿×ë»g1õ\u0010\u0085Më0ÜýÍ½÷iWÍ\u0081ÚØÄ".length();
      char var4 = 16;
      int var12 = -1;

      label28:
      while (true) {
         String var13 = var5.substring(++var12, var12 + var4);
         byte var10001 = -1;

         while (true) {
            byte[] var8 = var1.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = dmA(var8).intern();
            switch (var10001) {
               case 0:
                  var0[var6++] = var19;
                  if ((var12 += var4) >= var7) {
                     feLzE = new f$rF();
                     aMhng = new f$rF();
                     TvRJf = new f$rF();
                     dHaRm = new f$rF();
                     CjcqV = new f$rF();
                     CoxOk = dmz();
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

                  var5 = "³ïþð\u009at¿\u0001ÞG\u0086¯Ëi\u0004_\u0010ÌIq\tïÁ\u0093\b\u009dHX\u0094ÀéÀ\u009f";
                  var7 = "³ïþð\u009at¿\u0001ÞG\u0086¯Ëi\u0004_\u0010ÌIq\tïÁ\u0093\b\u009dHX\u0094ÀéÀ\u009f".length();
                  var4 = 16;
                  var12 = -1;
            }

            var13 = var5.substring(++var12, var12 + var4);
            var10001 = 0;
         }
      }
   }
}
