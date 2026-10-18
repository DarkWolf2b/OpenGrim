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

public class bI extends cn {
   private final bH EOqRP;
   private final bH dqBnO;
   private static final long cNgNw = gb.aYR(7391329729738366473L, -6258484634165681461L, MethodHandles.lookup().lookupClass()).a(61652026067547L);
   private static final String[] QFEJf;
   private static final String[] iySMc;
   private static final Map Xlfqe = new HashMap(13);
   private static final long[] PqrSJ;
   private static final Integer[] TyQEX;
   private static final Map jhHvO;

   public bI() {
      long var1 = cNgNw ^ 126363248658569L;
      int[] var10001 = new int[MF<"w">(1702, 532634942780033293L ^ var1)];
      var10001[0] = MF<"w">(17698, 1906974193552853648L ^ var1);
      var10001[1] = MF<"w">(24356, 2325761145799708831L ^ var1);
      var10001[2] = MF<"w">(31336, 5994741254005175748L ^ var1);
      var10001[3] = MF<"w">(29124, 2593461130454220388L ^ var1);
      var10001[4] = MF<"w">(15197, 5655227097522533627L ^ var1);
      var10001[5] = MF<"w">(2377, 2815341034943596272L ^ var1);
      var10001[MF<"w">(26742, 4485165458952300481L ^ var1)] = MF<"w">(32120, 3931938675168424640L ^ var1);
      var10001[MF<"w">(14679, 3299322977392228065L ^ var1)] = MF<"w">(12503, 7617025464701550435L ^ var1);
      var10001[MF<"w">(27043, 6668254768085607949L ^ var1)] = MF<"w">(15691, 8158170458807104238L ^ var1);
      var10001[MF<"w">(23892, 6577203617000264441L ^ var1)] = MF<"w">(19854, 1055968647847641636L ^ var1);
      var10001[MF<"w">(27310, 2516347225483846924L ^ var1)] = MF<"w">(9602, 8359907660488010275L ^ var1);
      super(var10001, lf.GHxLj);
      bH.Mt();
      cv var10004 = this.ZpVra;
      int[] var10005 = new int[MF<"w">(20877, 1165771096322350648L ^ var1)];
      var10005[0] = MF<"w">(18002, 5448540897815169533L ^ var1);
      var10005[1] = MF<"w">(31336, 5994741254005175748L ^ var1);
      var10005[2] = MF<"w">(31336, 5994741254005175748L ^ var1);
      var10005[3] = MF<"w">(24319, 4419101851614581083L ^ var1);
      var10005[4] = MF<"w">(23758, 731022421908329332L ^ var1);
      var10005[5] = MF<"w">(3581, 1336080722175607373L ^ var1);
      this.EOqRP = new bH(var10004, mr.clS(var10005), MC<"j">(10156, 6930506615860176484L ^ var1));

      try {
         cv var10003 = this.ZpVra;
         int[] var5 = new int[MF<"w">(20877, 1165771096322350648L ^ var1)];
         var5[0] = MF<"w">(21360, 8437880423763156179L ^ var1);
         var5[1] = MF<"w">(8679, 50943027145305678L ^ var1);
         var5[2] = MF<"w">(2914, 7137266464463307987L ^ var1);
         var5[3] = MF<"w">(18296, 7746120883466373323L ^ var1);
         var5[4] = MF<"w">(2395, 4327796558992623356L ^ var1);
         var5[5] = MF<"w">(15888, 7179523189421076920L ^ var1);
         this.dqBnO = new bH(var10003, mr.clS(var5), MC<"j">(809, 3078979572292485856L ^ var1));
         if (iS.bwL() == null) {
            bH.Ms(new String[2]);
         }
      } catch (MatchException var4) {
         throw My(var4);
      }
   }

   static {
      long var11 = cNgNw ^ 115757924585657L;
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
      String var17 = ".YI├ÖW\u009d\u0017├őo┬źE\u00adS├ż\u001c├ć\u0010├Á┬«y┬Ě├╝,┬»\u0016\u0095├ś├Ö├ö├őg%9";
      int var19 = ".YI├ÖW\u009d\u0017├őo┬źE\u00adS├ż\u001c├ć\u0010├Á┬«y┬Ě├╝,┬»\u0016\u0095├ś├Ö├ö├őg%9".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = Mz(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            QFEJf = var20;
            iySMc = new String[2];
            jhHvO = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[28];
            int var3 = 0;
            String var4 = "\u000eV<├ëc├×├ëq3┬░K├â┬▒┬í|\u0001\u009e!\u000b\u0089E8├ü\u007fK\u0082\u009d├ż\u0084\u00ad├Ć@B├ó\u0003\u0005\u009b\u0000v'\u0085j├▒├ú┬ú├ľS├Č┬ą\u000fH\u0019\u008f├Â\u001d\u0004^\u009dK\u009d(├ľ┬Ě┬Şx┬Ę\t\u0012u┬▒├í\u008a\u00001\u0016┬Ę=┬░\u0094├×\u009dG├â9┬▓t├É┬╣M\u0084L├ő├Ś\u009c├ştH\u0007X┬ž┬Ę┬ŽY%Vw}eu├ş├Ł4\u0011Q\u0006├öI├▓0?G┬Č┬░\u0091┬á├Ś├ż_├álJj├░c/\u00045\u0017\u0003├ź├ż\"├ę┬╗\u001dl├í^l<\u0095┬╝>F├ú┬źOEI\u0084q+=├Ő├░\u0088├ź\u0001.n6┬┐H\u0086\f├Ő├Ź├É├ĺ\u00964\rp\u0094\u001dA┬┤J\u0081'\u001d\n~b┬¬┬»├ĆTq┬íy┬│Q├î├ž├út┬ę";
            int var5 = "\u000eV<├ëc├×├ëq3┬░K├â┬▒┬í|\u0001\u009e!\u000b\u0089E8├ü\u007fK\u0082\u009d├ż\u0084\u00ad├Ć@B├ó\u0003\u0005\u009b\u0000v'\u0085j├▒├ú┬ú├ľS├Č┬ą\u000fH\u0019\u008f├Â\u001d\u0004^\u009dK\u009d(├ľ┬Ě┬Şx┬Ę\t\u0012u┬▒├í\u008a\u00001\u0016┬Ę=┬░\u0094├×\u009dG├â9┬▓t├É┬╣M\u0084L├ő├Ś\u009c├ştH\u0007X┬ž┬Ę┬ŽY%Vw}eu├ş├Ł4\u0011Q\u0006├öI├▓0?G┬Č┬░\u0091┬á├Ś├ż_├álJj├░c/\u00045\u0017\u0003├ź├ż\"├ę┬╗\u001dl├í^l<\u0095┬╝>F├ú┬źOEI\u0084q+=├Ő├░\u0088├ź\u0001.n6┬┐H\u0086\f├Ő├Ź├É├ĺ\u00964\rp\u0094\u001dA┬┤J\u0081'\u001d\n~b┬¬┬»├ĆTq┬íy┬│Q├î├ž├út┬ę"
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
                           PqrSJ = var6;
                           TyQEX = new Integer[28];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u0084┬¬├ąw8\u009c\u008d\u0017├░\u0016_\u0004!\u008eI┬ž";
                        var5 = "\u0084┬¬├ąw8\u009c\u008d\u0017├░\u0016_\u0004!\u008eI┬ž".length();
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

   private static Object MB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = MA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public void LX(lC var1) {
      super.LX(var1);
      this.EOqRP.Mo(Math.round(rD.dlmvG.player.getX()) + " " + Math.round(rD.dlmvG.player.getY()) + " " + Math.round(rD.dlmvG.player.getZ()));
      this.dqBnO.Mo(jg.bBO(rD.dlmvG.player.getYaw()));
   }

   private static CallSite MF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ME".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bI" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite MC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("MB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bI" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException My(MatchException var0) {
      return var0;
   }

   private static int ME(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = MD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Mz(byte[] var0) {
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

   private static String MA(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 4184;
      if (iySMc[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])Xlfqe.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Xlfqe.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/bI", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = QFEJf[var5].getBytes("ISO-8859-1");
         iySMc[var5] = Mz(((Cipher)var4[0]).doFinal(var9));
      }

      return iySMc[var5];
   }

   private static int MD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24112;
      if (TyQEX[var3] == null) {
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
         long var5 = PqrSJ[var3];
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
         Object[] var9 = (Object[])jhHvO.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               jhHvO.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bI", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         TyQEX[var3] = var15;
      }

      return TyQEX[var3];
   }
}
