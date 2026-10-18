package sixtwo;

import com.mojang.blaze3d.pipeline.BlendFunction;
import com.mojang.blaze3d.platform.DestFactor;
import com.mojang.blaze3d.platform.SourceFactor;
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

public enum lh {
   RpYeK,
   YrFUh,
   GpGUc,
   aApMr,
   GJHNe,
   qrVCo,
   SsPSB,
   QvPcW;

   private final boolean hLJxo;
   private final SourceFactor SaFdy;
   private final DestFactor SzmHl;
   private final SourceFactor WPxlF;
   private final DestFactor CTaMX;
   private static final long YqonM = gb.aYR(3718153968914290918L, 7870687450461312330L, MethodHandles.lookup().lookupClass()).a(79120449975906L);
   private static final String[] FYdCZ;
   private static final String[] zABRf;
   private static final Map CpfpG = new HashMap(13);
   private static final long[] PogKY;
   private static final Integer[] xHPbz;
   private static final Map ZHvSP;

   private lh(boolean var3, SourceFactor var4, DestFactor var5, SourceFactor var6, DestFactor var7) {
      this.hLJxo = var3;
      this.SaFdy = var4;
      this.SzmHl = var5;
      this.WPxlF = var6;
      this.CTaMX = var7;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var20 = YqonM ^ 54475278622461L;
      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var20 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var18 = new String[9];
      int var16 = 0;
      String var15 = "├Č\u0096_├Şy*+\u0093├ĺ\u009f\u009c\u0002├Ę,├│\u0004├ś<├Ä\u0011@.├╣\u0002 L├ŁE^#]&{:\u0084\u0017├Ą*\u008eSw├Ě;W\r\u001c_├î┬Áqh├╝┬▒┬ó┬ó├×\u0087(├î\u0006┬Č4┬Ě\u008a\u0004├ô├öI}┬╣├ů^├Ć\u0010├Á{┬úc\u0087├Ą+\u008c├Ž┬ó\u008c\u0004\u009a├»J\u001bl\u0081f\rb┬┤┬╗S\u0010<\u0097\u00ad>├Ç\u009d\u009bY├éF\u0080*├Ü4\u0014m\u0010<\u0016=0W7├ç\t\u0092py├źYD├Ć\u0087\u0010\u009au├ÖI`\n\"├ú┬Ěd├ÄI\u007f\u009d├╗MP\u0096┬ź^X\u0088\u009ap\u009c\u008d.├ľ├Ż\u0096o\u0000*Z2├ł\u00181\u0006\f├╝├▓\u0004\u0096┬┤\u001d\u0088i├╝├žS├ůG\u0088\u0094├ü┬▓┬┐k├ů\u009b├ęL├╗├ž\u0084m\u0080,\u009fI┬╝85\u0005├▓├Â├ľ├ź├ů\n┬ÁNI├▒3tMT@U^\u008fek\u001dm";
      int var17 = "├Č\u0096_├Şy*+\u0093├ĺ\u009f\u009c\u0002├Ę,├│\u0004├ś<├Ä\u0011@.├╣\u0002 L├ŁE^#]&{:\u0084\u0017├Ą*\u008eSw├Ě;W\r\u001c_├î┬Áqh├╝┬▒┬ó┬ó├×\u0087(├î\u0006┬Č4┬Ě\u008a\u0004├ô├öI}┬╣├ů^├Ć\u0010├Á{┬úc\u0087├Ą+\u008c├Ž┬ó\u008c\u0004\u009a├»J\u001bl\u0081f\rb┬┤┬╗S\u0010<\u0097\u00ad>├Ç\u009d\u009bY├éF\u0080*├Ü4\u0014m\u0010<\u0016=0W7├ç\t\u0092py├źYD├Ć\u0087\u0010\u009au├ÖI`\n\"├ú┬Ěd├ÄI\u007f\u009d├╗MP\u0096┬ź^X\u0088\u009ap\u009c\u008d.├ľ├Ż\u0096o\u0000*Z2├ł\u00181\u0006\f├╝├▓\u0004\u0096┬┤\u001d\u0088i├╝├žS├ůG\u0088\u0094├ü┬▓┬┐k├ů\u009b├ęL├╗├ž\u0084m\u0080,\u009fI┬╝85\u0005├▓├Â├ľ├ź├ů\n┬ÁNI├▒3tMT@U^\u008fek\u001dm"
         .length();
      char var14 = 24;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var15.substring(++var24, var24 + var14);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var11.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = bYd(var19).intern();
            switch (var10001) {
               case 0:
                  var18[var16++] = var36;
                  if ((var24 += var14) >= var17) {
                     FYdCZ = var18;
                     zABRf = new String[9];
                     ZHvSP = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[5];
                     int var3 = 0;
                     String var4 = "\u0019├Ť├Á├á\u001bO\u0000X\u0090Y\u0086├Ź0\u007f├ĚC(┬╣.├óC\u009b├Ś\u00ad";
                     int var5 = "\u0019├Ť├Á├á\u001bO\u0000X\u0090Y\u0086├Ź0\u007f├ĚC(┬╣.├óC\u009b├Ś\u00ad".length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    PogKY = var6;
                                    xHPbz = new Integer[5];
                                    RpYeK = new lh(false, SourceFactor.ONE, DestFactor.ZERO, SourceFactor.ONE, DestFactor.ZERO);
                                    YrFUh = new lh(
                                       true, SourceFactor.SRC_ALPHA, DestFactor.ONE_MINUS_SRC_ALPHA, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA
                                    );
                                    GpGUc = new lh(true, SourceFactor.SRC_ALPHA, DestFactor.ONE_MINUS_SRC_ALPHA, SourceFactor.ONE, DestFactor.ZERO);
                                    aApMr = new lh(true, SourceFactor.SRC_ALPHA, DestFactor.ONE, SourceFactor.ONE, DestFactor.ONE);
                                    GJHNe = new lh(true, SourceFactor.ONE, DestFactor.ONE, SourceFactor.ONE, DestFactor.ONE);
                                    qrVCo = new lh(true, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
                                    SsPSB = new lh(true, SourceFactor.DST_COLOR, DestFactor.ZERO, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
                                    QvPcW = new lh(true, SourceFactor.ONE_MINUS_DST_COLOR, DestFactor.ONE, SourceFactor.ONE, DestFactor.ONE_MINUS_SRC_ALPHA);
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "_├î\u0081y├ů.Qv├×├ąQ┬▒├ö\u0097\u0091\u0096";
                                 var5 = "_├î\u0081y├ů.Qv├×├ąQ┬▒├ö\u0097\u0091\u0096".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var14 = var15.charAt(var24);
                  break;
               default:
                  var18[var16++] = var36;
                  if ((var24 += var14) < var17) {
                     var14 = var15.charAt(var24);
                     continue label54;
                  }

                  var15 = "C├ë;├ő┬Ą├í├Ş├Ť?├Ö├í├ťxj0\u0007├Ľ┬¬├«\u008aTYH├╗├¬├ą\"┬ę\u0086├á0┬╝ ┬áK┬í\tp┬▓\u0083\u0013\u0087\u0098\u000b├ź<\u0096y\u00183e┬ąS\u0012├íP├í6├ş#\td\u007f)Z";
                  var17 = "C├ë;├ő┬Ą├í├Ş├Ť?├Ö├í├ťxj0\u0007├Ľ┬¬├«\u008aTYH├╗├¬├ą\"┬ę\u0086├á0┬╝ ┬áK┬í\tp┬▓\u0083\u0013\u0087\u0098\u000b├ź<\u0096y\u00183e┬ąS\u0012├íP├í6├ş#\td\u007f)Z"
                     .length();
                  var14 = ' ';
                  var24 = -1;
            }

            var25 = var15.substring(++var24, var24 + var14);
            var10001 = 0;
         }
      }
   }

   private static IllegalStateException bYc(IllegalStateException var0) {
      return var0;
   }

   public boolean bYa() {
      return this.hLJxo;
   }

   private static CallSite bYj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bYi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lh" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bYd(byte[] var0) {
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

   private static String bYe(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 22334;
      if (zABRf[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])CpfpG.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               CpfpG.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lh", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = FYdCZ[var5].getBytes("ISO-8859-1");
         zABRf[var5] = bYd(((Cipher)var4[0]).doFinal(var9));
      }

      return zABRf[var5];
   }

   private static Object bYf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bYe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int bYh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 14127;
      if (xHPbz[var3] == null) {
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
         long var5 = PogKY[var3];
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
         Object[] var9 = (Object[])ZHvSP.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ZHvSP.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lh", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         xHPbz[var3] = var15;
      }

      return xHPbz[var3];
   }

   private static int bYi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bYh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public BlendFunction bXZ() {
      long var1 = YqonM ^ 42386484071913L;
      String var3 = ld.b();

      try {
         if (this == RpYeK) {
            throw new IllegalStateException(bYg<"n">(264, 8263678101598872976L ^ var1));
         }
      } catch (IllegalStateException var5) {
         throw bYc(var5);
      }

      try {
         BlendFunction var10000 = new BlendFunction(
            SourceFactor.valueOf(this.SaFdy.name()),
            DestFactor.valueOf(this.SzmHl.name()),
            SourceFactor.valueOf(this.WPxlF.name()),
            DestFactor.valueOf(this.CTaMX.name())
         );
         if (iS.bwL() == null) {
            ld.b("Yc9kZb");
         }

         return var10000;
      } catch (IllegalStateException var4) {
         throw bYc(var4);
      }
   }

   private static CallSite bYg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bYf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lh" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
