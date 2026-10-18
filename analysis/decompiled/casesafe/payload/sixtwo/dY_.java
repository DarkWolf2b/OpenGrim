package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class dY extends gg {
   private final cF vJyXR;
   private static final long bUNLU = gb.aYR(-8274142678140933289L, 625689276679862641L, MethodHandles.lookup().lookupClass()).a(230252945837289L);
   private static final long[] dXRUT;
   private static final Integer[] UAgHi;
   private static final Map qbJue = new HashMap(13);

   public dY() {
      long var1 = bUNLU ^ 40329415189932L;
      super(gf.aZL(aqY<"m">(6538, 192369856254256323L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[aqY<"m">(12791, 2466301646069238973L ^ var1)];
      var10004[0] = aqY<"m">(1221, 6376636713336060299L ^ var1);
      var10004[1] = aqY<"m">(29510, 3737924278471413254L ^ var1);
      var10004[2] = aqY<"m">(14273, 5272137892343614082L ^ var1);
      var10004[3] = aqY<"m">(31247, 389103974439601998L ^ var1);
      var10004[4] = aqY<"m">(4555, 9220877023604485252L ^ var1);
      var10004[5] = aqY<"m">(12174, 535117295777682115L ^ var1);
      var10004[aqY<"m">(3058, 2383133501641602750L ^ var1)] = aqY<"m">(14408, 3965036784091399424L ^ var1);
      var10004[aqY<"m">(20100, 8909589756845913039L ^ var1)] = aqY<"m">(22978, 5180934221597697152L ^ var1);
      this.vJyXR = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM);
   }

   static {
      long var0 = bUNLU ^ 128577705982296L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[12];
      int var5 = 0;
      String var6 = "O\bNp<(w├ę├Ę\u0001T&e\n┬Č├╗┬ž\u0083\u0016\u0089p\u001f┬á|\u001fQ├Áq├î\u0006┬í\u0090H┬»├â+.├ÜR||\u007f\u009b9,├Ş\u0086┬Żc├ë┬ź├×├î{\u0007┬»├╣j\u000e┬┐L├¬├Ü_%├╝┬ž├őA#├Ž┬Žg├Ę├żwT├Á\u007f\u0012";
      int var7 = "O\bNp<(w├ę├Ę\u0001T&e\n┬Č├╗┬ž\u0083\u0016\u0089p\u001f┬á|\u001fQ├Áq├î\u0006┬í\u0090H┬»├â+.├ÜR||\u007f\u009b9,├Ş\u0086┬Żc├ë┬ź├×├î{\u0007┬»├╣j\u000e┬┐L├¬├Ü_%├╝┬ž├őA#├Ž┬Žg├Ę├żwT├Á\u007f\u0012"
         .length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
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
            byte[] var12 = var2.doFinal(
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
                  if (var4 >= var7) {
                     dXRUT = var8;
                     UAgHi = new Integer[12];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u0015├Ť-\u0013UY├ú\u0007┬▓G┬Ž├ĚM├¬┬ą2";
                  var7 = "\u0015├Ť-\u0013UY├ú\u0007┬▓G┬Ž├ĚM├¬┬ą2".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
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

   private static CallSite aqY(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aqX".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int aqX(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aqW(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int aqW(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11130;
      if (UAgHi[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = dXRUT[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])qbJue.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               qbJue.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dY", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         UAgHi[var3] = var15;
      }

      return UAgHi[var3];
   }

   public cF aqV() {
      return this.vJyXR;
   }
}
