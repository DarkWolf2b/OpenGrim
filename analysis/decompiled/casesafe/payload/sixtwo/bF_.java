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

public class bF extends cn {
   private final bH rMeCH;
   private final bH uTLas;
   private static final long SlbGB = gb.aYR(7165212067470311943L, -3106068011897424739L, MethodHandles.lookup().lookupClass()).a(1403987934215L);
   private static final String lnImF;
   private static final long[] nuUmx;
   private static final Integer[] Gjkur;
   private static final Map AUlej;

   public bF() {
      long var1 = SlbGB ^ 46314419323482L;
      int[] var10001 = new int[Mg<"p">(31495, 9085061606307130038L ^ var1)];
      var10001[0] = Mg<"p">(30538, 8716686144162785021L ^ var1);
      var10001[1] = Mg<"p">(15720, 5021981645860187355L ^ var1);
      var10001[2] = Mg<"p">(17883, 8705092036661302373L ^ var1);
      var10001[3] = Mg<"p">(18717, 5019950080637622443L ^ var1);
      var10001[4] = Mg<"p">(9291, 3327306708001011185L ^ var1);
      var10001[5] = Mg<"p">(6599, 5433873885331163256L ^ var1);
      super(var10001, lf.JliAr);
      cv var10003 = this.ZpVra;
      int[] var10004 = new int[Mg<"p">(12891, 1829274192230458336L ^ var1)];
      var10004[0] = Mg<"p">(23762, 219932289773718880L ^ var1);
      var10004[1] = Mg<"p">(5136, 8326347633990927780L ^ var1);
      var10004[2] = Mg<"p">(20980, 1790430941813588045L ^ var1);
      var10004[3] = Mg<"p">(6599, 5433873885331163256L ^ var1);
      var10004[4] = Mg<"p">(9291, 3327306708001011185L ^ var1);
      var10004[5] = Mg<"p">(26322, 6353750333766072175L ^ var1);
      var10004[Mg<"p">(16334, 240971957121855102L ^ var1)] = Mg<"p">(20179, 1420054004828430182L ^ var1);
      this.rMeCH = new bH(var10003, mr.clS(var10004));
      this.uTLas = new bH(
         this.ZpVra,
         mr.clS(new int[]{Mg<"p">(4478, 8175856998796230877L ^ var1), Mg<"p">(6873, 505420170472524641L ^ var1), Mg<"p">(8245, 8247315221388374409L ^ var1)}),
         lnImF
      );
   }

   static {
      long var11 = SlbGB ^ 123093412689874L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("├║:#\u0092┬«├┐├üg".getBytes("ISO-8859-1"));
      String var22 = Md(var15).intern();
      int var10001 = -1;
      lnImF = var22;
      AUlej = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[17];
      int var3 = 0;
      String var4 = "R.\u0094\bR┬┐K├łX\u0014┬ŻG├í┬úL\u0086┬╗W\u0001├×├ĺu\u0092\u0098\u0099├î├ü\u0081├»V┬»M\u0081├║┬ż┬ę├ą\u0082.\u009f>\u001b┬Ż├Ť├Á├Ć\u000f├ť├Ę┬Ě├▒4\u00144┬Ą\u0095L├ŐB\u0095\u0095\u001a?\u0097├ő4nS├Ż7\u0007\u0007u\u0082├éA\u009b├│├╗┬ź├╗├▓E\u0001\u009b-!├¬├Ç├ś[┬Ş\u0019\u0015├Ő├ľ├á├á├ů\u001db├Č4\u008e┬óY\u0096├ĺ\u0004_\u0084Rgy┬ú{ ┬Â?┬í";
      int var5 = "R.\u0094\bR┬┐K├łX\u0014┬ŻG├í┬úL\u0086┬╗W\u0001├×├ĺu\u0092\u0098\u0099├î├ü\u0081├»V┬»M\u0081├║┬ż┬ę├ą\u0082.\u009f>\u001b┬Ż├Ť├Á├Ć\u000f├ť├Ę┬Ě├▒4\u00144┬Ą\u0095L├ŐB\u0095\u0095\u001a?\u0097├ő4nS├Ż7\u0007\u0007u\u0082├éA\u009b├│├╗┬ź├╗├▓E\u0001\u009b-!├¬├Ç├ś[┬Ş\u0019\u0015├Ő├ľ├á├á├ů\u001db├Č4\u008e┬óY\u0096├ĺ\u0004_\u0084Rgy┬ú{ ┬Â?┬í"
         .length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var18 = var6;
         var10001 = var3++;
         long var24 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var27 = -1;

         while (true) {
            long var8 = var24;
            byte[] var10 = var0.doFinal(
               new byte[]{
                  (byte)(var8 >>> 56),
                  (byte)(var8 >>> 48),
                  (byte)(var8 >>> 40),
                  (byte)(var8 >>> 32),
                  (byte)(var8 >>> 24),
                  (byte)(var8 >>> 16),
                  (byte)(var8 >>> 8),
                  (byte)var8
               }
            );
            long var29 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var27) {
               case 0:
                  var18[var10001] = var29;
                  if (var2 >= var5) {
                     nuUmx = var6;
                     Gjkur = new Integer[17];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "U\u0091\u0000├ő├ť├Ł\u0001├┐┬╗├ą\u007f\u0094l├Ä\u0002┬á";
                  var5 = "U\u0091\u0000├ő├ť├Ł\u0001├┐┬╗├ą\u007f\u0094l├Ä\u0002┬á".length();
                  var2 = 0;
            }

            byte var21 = var2;
            var2 += 8;
            var7 = var4.substring(var21, var2).getBytes("ISO-8859-1");
            var18 = var6;
            var10001 = var3++;
            var24 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var27 = 0;
         }
      }
   }

   private static int Me(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 9798;
      if (Gjkur[var3] == null) {
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
         long var5 = nuUmx[var3];
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
         Object[] var9 = (Object[])AUlej.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               AUlej.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bF", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         Gjkur[var3] = var15;
      }

      return Gjkur[var3];
   }

   @Override
   public void LX(lC var1) {
      super.LX(var1);
      this.rMeCH.Mo(jd.bAl());
      this.uTLas.Mo(jf.bAM(rD.dmf().daM()));
   }

   private static CallSite Mg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Mf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bF" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int Mf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Me(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Md(byte[] var0) {
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
}
