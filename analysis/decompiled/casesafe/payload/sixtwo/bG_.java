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

public class bG extends cn {
   private final bH jEFqT;
   private final bH KRQEY;
   private final rk pePjV;
   private final rk aaKXr;
   private static final long xeDNj = gb.aYR(-8832293978279949331L, -8353497630788713414L, MethodHandles.lookup().lookupClass()).a(159406309179691L);
   private static final String[] EWhLc;
   private static final String[] SLNuF;
   private static final Map RGkOd = new HashMap(13);
   private static final long[] dmiyD;
   private static final Integer[] jIRWP;
   private static final Map XDQAr;

   public bG() {
      long var1 = xeDNj ^ 50912943712709L;
      int[] var10001 = new int[Mn<"k">(14490, 5252010684320685962L ^ var1)];
      var10001[0] = Mn<"k">(16264, 5473965808146847897L ^ var1);
      var10001[1] = Mn<"k">(11171, 2412686867893816504L ^ var1);
      var10001[2] = Mn<"k">(20011, 1684510254588848444L ^ var1);
      var10001[3] = Mn<"k">(4243, 4812245606981973903L ^ var1);
      var10001[4] = Mn<"k">(1048, 8866816990264894209L ^ var1);
      var10001[5] = Mn<"k">(30326, 1956943300803481966L ^ var1);
      super(var10001, lf.PWkZi);
      this.jEFqT = new bH(
         this.ZpVra,
         mr.clS(new int[]{Mn<"k">(21247, 180652050957202921L ^ var1), Mn<"k">(32670, 4854157378519324812L ^ var1), Mn<"k">(8553, 2283161665851950714L ^ var1)}),
         Mk<"y">(31360, 6845144118983083686L ^ var1)
      );
      this.KRQEY = new bH(
         this.ZpVra,
         mr.clS(new int[]{Mn<"k">(2769, 140489806622895556L ^ var1), Mn<"k">(32670, 4854157378519324812L ^ var1), Mn<"k">(5810, 296565476857131432L ^ var1)}),
         Mk<"y">(1652, 174938214270024275L ^ var1)
      );
      this.pePjV = new rk(Mn<"k">(4066, 4487812946592770294L ^ var1)).dhs(rj.UPXqT);
      this.aaKXr = new rk(Mn<"k">(5544, 4655510172536910517L ^ var1)).dhs(rj.UPXqT);
   }

   static {
      long var11 = xeDNj ^ 103388287698353L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "┬ú├ť├ç\r\u0094P*├É\u008a\u0011├ÖU\u001c┬źWO\u0010#;\u0094├ĄZ`_$\u001b├┐├×n\u007f├▒├ő\u0086";
      int var19 = "┬ú├ť├ç\r\u0094P*├É\u008a\u0011├ÖU\u001c┬źWO\u0010#;\u0094├ĄZ`_$\u001b├┐├×n\u007f├▒├ő\u0086".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = Mh(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            EWhLc = var20;
            SLNuF = new String[2];
            XDQAr = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[14];
            int var3 = 0;
            String var4 = "├░{1U\u0013S\u0092\u0089\u0093ki\u009d├Ĺ\"├│6)├ói├ä├Č├╝<U\u000e├╣~k┬Ž\"\u0085├Ż\u001f├┤├Ś`r\t├Á\f\u0081\u000eK┬Čx\u0084pq├ľ\b\u0007\u0085X├ç├óge├ę\u001e\u0080\u001b├ôs├Ę\u0081┬│h\u001f\u000b┬ÁK\u0099\u0096├ć\u0004┬║├íKci├Ç├│`\u007f9├ő┬¬\u0006&\u0086├Łx├ć├é\u00ad\u0007";
            int var5 = "├░{1U\u0013S\u0092\u0089\u0093ki\u009d├Ĺ\"├│6)├ói├ä├Č├╝<U\u000e├╣~k┬Ž\"\u0085├Ż\u001f├┤├Ś`r\t├Á\f\u0081\u000eK┬Čx\u0084pq├ľ\b\u0007\u0085X├ç├óge├ę\u001e\u0080\u001b├ôs├Ę\u0081┬│h\u001f\u000b┬ÁK\u0099\u0096├ć\u0004┬║├íKci├Ç├│`\u007f9├ő┬¬\u0006&\u0086├Łx├ć├é\u00ad\u0007"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           dmiyD = var6;
                           jIRWP = new Integer[14];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u0090┬Ě\u008cz├â\u009c%;\u0099├é\u0096#AS┬│┬ą";
                        var5 = "\u0090┬Ě\u008cz├â\u009c%;\u0099├é\u0096#AS┬│┬ą".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   private static CallSite Mn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Mm".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bG" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   public void LX(lC var1) {
      super.LX(var1);
      this.pePjV.dhd(rD.dlmvG.method_47599());
      this.aaKXr.dhd(iX.bxS());
      this.jEFqT.Mo(String.valueOf((int)this.pePjV.dhj()));
      this.KRQEY.Mo(jf.bAM(this.aaKXr.dhj()));
   }

   private static Object Mj(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Mi(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Mh(byte[] var0) {
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

   private static int Ml(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 27751;
      if (jIRWP[var3] == null) {
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
         long var5 = dmiyD[var3];
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
         Object[] var9 = (Object[])XDQAr.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               XDQAr.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bG", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         jIRWP[var3] = var15;
      }

      return jIRWP[var3];
   }

   private static CallSite Mk(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Mj".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bG" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int Mm(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Ml(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Mi(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 30544;
      if (SLNuF[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])RGkOd.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               RGkOd.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/bG", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = EWhLc[var5].getBytes("ISO-8859-1");
         SLNuF[var5] = Mh(((Cipher)var4[0]).doFinal(var9));
      }

      return SLNuF[var5];
   }
}
