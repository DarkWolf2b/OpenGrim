package fivefive;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public interface c {
   byte HuWlz = 0;
   byte CIGAd = 1;
   byte izAHv;
   byte Ndsyh;
   byte AhBwe;
   byte zgzqQ;
   byte jNOVo;
   byte pyjjV;
   byte FzpkL;
   byte whWpQ;
   byte sMalc;
   byte jtIgn;
   byte Zvzpu;
   byte QRVJY;
   byte MtWkI;
   byte iZvDe;

   static {
      long var1 = y.eg(-5736233333267106556L, 1766646056921393666L, MethodHandles.lookup().lookupClass()).a(224197335587919L) ^ 96267262250651L;
      Cipher var3;
      Cipher var10000 = var3 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var1 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var4 = 1; var4 < 8; var4++) {
         var10003[var4] = (byte)(var1 << var4 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var0 = new long[14];
      int var6 = 0;
      String var7 = "\u00ffjo\u00a9\u00b9\nX\u00d9\u00c0\u00a9j\u00f8\u00ac\u00beK\u00e2,\u000e\\\u001ei\u00aa;N\u00b7\u00e9PHY\u009dW\u00b27\u009e\u00b6|\u008fFD8(\bR|j\u001e\u009c\u00a5\u00a7\u00069\u00c0\u0012o\u00be\u00b0X-\u00f0\u00e2\u00c5\u0002\u0086\u00c1%X5=v\u00b4g\u0083\u009d;\u00c1\u00d9\u00ab\u00c5\"\u0089\u00a3L9m\u0004/\u00a4)-\u00b6\u00f6\u00fe\u00e7\u0083}a";
      int var8 = "\u00ffjo\u00a9\u00b9\nX\u00d9\u00c0\u00a9j\u00f8\u00ac\u00beK\u00e2,\u000e\\\u001ei\u00aa;N\u00b7\u00e9PHY\u009dW\u00b27\u009e\u00b6|\u008fFD8(\bR|j\u001e\u009c\u00a5\u00a7\u00069\u00c0\u0012o\u00be\u00b0X-\u00f0\u00e2\u00c5\u0002\u0086\u00c1%X5=v\u00b4g\u0083\u009d;\u00c1\u00d9\u00ab\u00c5\"\u0089\u00a3L9m\u0004/\u00a4)-\u00b6\u00f6\u00fe\u00e7\u0083}a"
         .length();
      byte var5 = 0;

      label23:
      while (true) {
         int var10001 = var5;
         var5 += 8;
         byte[] var9 = var7.substring(var10001, var5).getBytes("ISO-8859-1");
         long[] var14 = var0;
         var10001 = var6++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var3.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var5 >= var8) {
                     Ndsyh = (byte)((int)var0[10]);
                     zgzqQ = (byte)((int)var0[12]);
                     Zvzpu = (byte)((int)var0[0]);
                     sMalc = (byte)((int)var0[5]);
                     iZvDe = (byte)((int)var0[1]);
                     whWpQ = (byte)((int)var0[11]);
                     izAHv = (byte)((int)var0[9]);
                     jNOVo = (byte)((int)var0[3]);
                     jtIgn = (byte)((int)var0[4]);
                     AhBwe = (byte)((int)var0[8]);
                     MtWkI = (byte)((int)var0[13]);
                     FzpkL = (byte)((int)var0[7]);
                     pyjjV = (byte)((int)var0[6]);
                     QRVJY = (byte)((int)var0[2]);
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var5 < var8) {
                     continue label23;
                  }

                  var7 = "\u0015^\u00ce\u00b3\u00fa\u00d2Ua\u0086\u0005x\u00fe\u00faC\u00ae\u00dc";
                  var8 = "\u0015^\u00ce\u00b3\u00fa\u00d2Ua\u0086\u0005x\u00fe\u00faC\u00ae\u00dc".length();
                  var5 = 0;
            }

            byte var16 = var5;
            var5 += 8;
            var9 = var7.substring(var16, var5).getBytes("ISO-8859-1");
            var14 = var0;
            var10001 = var6++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }
}
