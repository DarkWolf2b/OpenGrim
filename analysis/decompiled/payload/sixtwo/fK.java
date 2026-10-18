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

public class fK extends gg {
   private final cC IRxGK;
   private final cC hDYSX;
   private static final long YOIFW = gb.aYR(-6406436463589819404L, 8493228117774850738L, MethodHandles.lookup().lookupClass()).a(260733083845978L);
   private static final String[] ZSzib;
   private static final String[] ZYcLJ;
   private static final Map NbiLf = new HashMap(13);
   private static final long[] MBsFK;
   private static final Integer[] JSHgz;
   private static final Map aROsM;

   public fK() {
      long var1 = YOIFW ^ 80296259258883L;
      super(gf.aZL(aVe<"r">(8144, 7705260544867749176L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aVe<"r">(21746, 3613938175210915336L ^ var1)];
      var10004[0] = aVe<"r">(11924, 6394213145691192422L ^ var1);
      var10004[1] = aVe<"r">(30514, 6199809235187475935L ^ var1);
      var10004[2] = aVe<"r">(23737, 1012373284856499805L ^ var1);
      var10004[3] = aVe<"r">(3440, 624314463972876174L ^ var1);
      var10004[4] = aVe<"r">(23182, 6831141551335934066L ^ var1);
      var10004[5] = aVe<"r">(27196, 5156142900846049502L ^ var1);
      var10004[aVe<"r">(23550, 302520349743548681L ^ var1)] = aVe<"r">(25022, 5988913442731570034L ^ var1);
      var10004[aVe<"r">(20443, 4252711476234722596L ^ var1)] = aVe<"r">(32551, 3902375103454850502L ^ var1);
      var10004[aVe<"r">(25507, 1627664373963239762L ^ var1)] = aVe<"r">(8769, 3231780150374166713L ^ var1);
      var10004[aVe<"r">(1870, 1981903573969163687L ^ var1)] = aVe<"r">(16797, 132024498719331197L ^ var1);
      var10004[aVe<"r">(6302, 3946997243799423589L ^ var1)] = aVe<"r">(7010, 3762695018012461482L ^ var1);
      var10004[aVe<"r">(23705, 6941109207461072495L ^ var1)] = aVe<"r">(19151, 7108438626162448421L ^ var1);
      this.IRxGK = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(3.0).Vx(6.0).VA(3.0).Vz(aVb<"k">(18297, 1652778719596803895L ^ var1));
      var10004 = new int[aVe<"r">(27114, 1695982273452751651L ^ var1)];
      var10004[0] = aVe<"r">(13410, 6439992386786158220L ^ var1);
      var10004[1] = aVe<"r">(11539, 4907258360668782584L ^ var1);
      var10004[2] = aVe<"r">(4593, 6990549957573493509L ^ var1);
      var10004[3] = aVe<"r">(6776, 292400764881520779L ^ var1);
      var10004[4] = aVe<"r">(10031, 7993478685491230156L ^ var1);
      var10004[5] = aVe<"r">(18623, 6211956736555522643L ^ var1);
      var10004[aVe<"r">(21176, 5576138404211228791L ^ var1)] = aVe<"r">(17651, 3858502406096000518L ^ var1);
      var10004[aVe<"r">(15831, 5648583715454414631L ^ var1)] = aVe<"r">(21346, 5202507354028868012L ^ var1);
      var10004[aVe<"r">(17404, 4160421850088608025L ^ var1)] = aVe<"r">(24454, 8456711098938395979L ^ var1);
      var10004[aVe<"r">(11490, 3691858973949427213L ^ var1)] = aVe<"r">(11539, 4907258360668782584L ^ var1);
      var10004[aVe<"r">(26102, 6310085539559290641L ^ var1)] = aVe<"r">(15595, 5454823112393813526L ^ var1);
      var10004[aVe<"r">(18450, 8935711459606633204L ^ var1)] = aVe<"r">(16532, 9098071536371110509L ^ var1);
      this.hDYSX = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(4.5).Vx(6.0).VA(4.5).Vz(aVb<"k">(15816, 8170592593343188359L ^ var1));
   }

   static {
      long var11 = YOIFW ^ 65665911042212L;
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
      String var17 = "ÛÊ]ÕÉ\u008cl\u0006\"\u008d%],\u009dþ|\u00105û&Å\u0091I0.¶\u001e)/°  ÷";
      int var19 = "ÛÊ]ÕÉ\u008cl\u0006\"\u008d%],\u009dþ|\u00105û&Å\u0091I0.¶\u001e)/°  ÷".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = aUY(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            ZSzib = var20;
            ZYcLJ = new String[2];
            aROsM = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[38];
            int var3 = 0;
            String var4 = "¬G)Ý\u001aã\u009dë\u000fÿÐ÷\b\u0089\u0084bÇ\u0005£\u0005b\u007f\u009b\u009eb¤.Ë`¹Ð#\u001b(\u0001ã\u001b©#Cï¨3ÏCyë¦¡åi\u0005\fÊ]Ú»¼Xv\u009d®¥K\u0018Ç\u007f\u009aI¶ÕÍ\u0084\u0085#&Hº9mz\u0096Î\u0089\tIDríêñCh¦X\u008fcB\u0001\u001e\u0080Òä\u001cýQ&¯\u0000ùfB¦: Õ9Ò±è\u0080\u000e*\u0016f\u0006tÈ·mk6vÓÓpXÂj\u0016Hè\u0080 ÎÝó@\u0099E¤\u009a6´ö¸\u0012\t\n\u0086h\u001d \u001d\u0016©Hp\n½Ýý(3î\u0088\u009bOÈ¨Ç\u0090¥We¨\u0099\u009fõ\u009cg\u0083íµÛNàô}\u001a?\u009a\u0089&ªqrT×\u0018dí\u009f\u001eÛþ\u0080\u00ad-\u008d\u0080ïHû9\u0013¹k\u0083\u0005íAþ5d÷ÀÄÀëÌ{e©\u0006ù\u000by-]Q*ÏÑÉÞ\u008d\u0091\u0016ö\u001ez\u001c\u001bÙïG¿>wPt\u0013·ªa~6ñÈ\u008d\u009a [\u0086Þ\u0093§";
            int var5 = "¬G)Ý\u001aã\u009dë\u000fÿÐ÷\b\u0089\u0084bÇ\u0005£\u0005b\u007f\u009b\u009eb¤.Ë`¹Ð#\u001b(\u0001ã\u001b©#Cï¨3ÏCyë¦¡åi\u0005\fÊ]Ú»¼Xv\u009d®¥K\u0018Ç\u007f\u009aI¶ÕÍ\u0084\u0085#&Hº9mz\u0096Î\u0089\tIDríêñCh¦X\u008fcB\u0001\u001e\u0080Òä\u001cýQ&¯\u0000ùfB¦: Õ9Ò±è\u0080\u000e*\u0016f\u0006tÈ·mk6vÓÓpXÂj\u0016Hè\u0080 ÎÝó@\u0099E¤\u009a6´ö¸\u0012\t\n\u0086h\u001d \u001d\u0016©Hp\n½Ýý(3î\u0088\u009bOÈ¨Ç\u0090¥We¨\u0099\u009fõ\u009cg\u0083íµÛNàô}\u001a?\u009a\u0089&ªqrT×\u0018dí\u009f\u001eÛþ\u0080\u00ad-\u008d\u0080ïHû9\u0013¹k\u0083\u0005íAþ5d÷ÀÄÀëÌ{e©\u0006ù\u000by-]Q*ÏÑÉÞ\u008d\u0091\u0016ö\u001ez\u001c\u001bÙïG¿>wPt\u0013·ªa~6ñÈ\u008d\u009a [\u0086Þ\u0093§"
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
                           MBsFK = var6;
                           JSHgz = new Integer[38];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u0003{i\u000e®°\u0096Þûã\u0082\u0000Ogé\u0097";
                        var5 = "\u0003{i\u000e®°\u0096Þûã\u0082\u0000Ogé\u0097".length();
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

   public double aUW() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fK.YOIFW J
      // 03: ldc2_w 119215002322189
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 43
      // 11: getfield sixtwo/fK.RliRe Z
      // 14: ifne 42
      // 17: goto 1e
      // 1a: invokestatic sixtwo/fK.aUX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 21: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 24: invokevirtual net/minecraft/class_636.method_2920 ()Lnet/minecraft/class_1934;
      // 27: invokevirtual net/minecraft/class_1934.method_8386 ()Z
      // 2a: ifeq 3e
      // 2d: goto 34
      // 30: invokestatic sixtwo/fK.aUX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: ldc2_w 5.0
      // 37: goto 41
      // 3a: invokestatic sixtwo/fK.aUX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ldc2_w 4.5
      // 41: dreturn
      // 42: aload 0
      // 43: getfield sixtwo/fK.hDYSX Lsixtwo/cC;
      // 46: invokevirtual sixtwo/cC.VI ()D
      // 49: dreturn
   }

   public double aUV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fK.YOIFW J
      // 03: ldc2_w 4346742149078
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/fg.aIW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 27
      // 11: getfield sixtwo/fK.RliRe Z
      // 14: ifne 26
      // 17: goto 1e
      // 1a: invokestatic sixtwo/fK.aUX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: ldc2_w 3.0
      // 21: dreturn
      // 22: invokestatic sixtwo/fK.aUX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/fK.IRxGK Lsixtwo/cC;
      // 2a: invokevirtual sixtwo/cC.VI ()D
      // 2d: dreturn
   }

   private static String aUY(byte[] var0) {
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

   private static int aVc(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 20202;
      if (JSHgz[var3] == null) {
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
         long var5 = MBsFK[var3];
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
         Object[] var9 = (Object[])aROsM.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               aROsM.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/fK", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         JSHgz[var3] = var15;
      }

      return JSHgz[var3];
   }

   private static int aVd(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aVc(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite aVe(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aVd".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fK" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException aUX(MatchException var0) {
      return var0;
   }

   private static Object aVa(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aUZ(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite aVb(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aVa".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fK" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String aUZ(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 11336;
      if (ZYcLJ[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])NbiLf.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               NbiLf.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/fK", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = ZSzib[var5].getBytes("ISO-8859-1");
         ZYcLJ[var5] = aUY(((Cipher)var4[0]).doFinal(var9));
      }

      return ZYcLJ[var5];
   }
}
