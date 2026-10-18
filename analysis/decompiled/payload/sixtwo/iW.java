package sixtwo;

import java.awt.image.BufferedImage;
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
import net.minecraft.class_1011;
import net.minecraft.class_2338;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2960;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_1011.class_1012;
import org.joml.Matrix4f;

public class iW {
   public static final int PDWiH;
   public static final class_2960 HaVqD;
   private static final long LVQnS = gb.aYR(2284949245207991303L, 43599466955523576L, MethodHandles.lookup().lookupClass()).a(85259852255064L);
   private static final long[] whWMv;
   private static final Integer[] VMVMH;
   private static final Map njwRb;

   static {
      long var15 = LVQnS ^ 9595942733839L;
      Cipher var12;
      Cipher var10000 = var12 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var15 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var13 = 1; var13 < 8; var13++) {
         var10003[var13] = (byte)(var15 << var13 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var14 = var12.doFinal("\fúâòV\u0092\u0014@".getBytes("ISO-8859-1"));
      String var23 = bxy(var14).intern();
      int var10001 = -1;
      String var11 = var23;
      njwRb = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var15 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var15 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[10];
      int var3 = 0;
      String var4 = "qG¤i\u009a\u008bH\u0082'ªØ\u008f4Ø\u0014\u009f3ôÙtØ$\u0095²¾ÚfG÷Fj¬£\u0013\rº©ñú+±\u0087H- rE\u001eZÄ\u0096úûoé\u0093ã³Þ}\u0004í)Ü";
      int var5 = "qG¤i\u009a\u008bH\u0082'ªØ\u008f4Ø\u0014\u009f3ôÙtØ$\u0095²¾ÚfG÷Fj¬£\u0013\rº©ñú+±\u0087H- rE\u001eZÄ\u0096úûoé\u0093ã³Þ}\u0004í)Ü".length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var19 = var6;
         var10001 = var3++;
         long var25 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var28 = -1;

         while (true) {
            long var8 = var25;
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
            long var30 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var28) {
               case 0:
                  var19[var10001] = var30;
                  if (var2 >= var5) {
                     whWMv = var6;
                     VMVMH = new Integer[10];
                     PDWiH = bxB<"o">(15365, var15 ^ 6144512136898043017L);
                     HaVqD = class_2960.method_60656(var11);
                     return;
                  }
                  break;
               default:
                  var19[var10001] = var30;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "Ðçk\u0016\bM!PÍ\u0095Î$ \u0091 \u0085";
                  var5 = "Ðçk\u0016\bM!PÍ\u0095Î$ \u0091 \u0085".length();
                  var2 = 0;
            }

            byte var22 = var2;
            var2 += 8;
            var7 = var4.substring(var22, var2).getBytes("ISO-8859-1");
            var19 = var6;
            var10001 = var3++;
            var25 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var28 = 0;
         }
      }
   }

   private static String bxy(byte[] var0) {
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

   public static void bxq(class_4587 var0, class_2338 var1, mG var2) {
      bxs(var0, new class_238(var1), var2, var2, false);
   }

   private static int bxz(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 9087;
      if (VMVMH[var3] == null) {
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
         long var5 = whWMv[var3];
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
         Object[] var9 = (Object[])njwRb.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               njwRb.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/iW", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         VMVMH[var3] = var15;
      }

      return VMVMH[var3];
   }

   private static int bxA(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bxz(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite bxB(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bxA".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/iW" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static class_1011 bxu(BufferedImage var0) {
      long var1 = LVQnS ^ 55566799957688L;
      String[] var10000 = jf.bBe();
      int var4 = var0.getWidth();
      String[] var3 = var10000;
      int var5 = var0.getHeight();
      class_1011 var6 = new class_1011(class_1012.field_4997, var4, var5, true);
      int var7 = 0;

      while (var7 < var5) {
         int var8 = 0;

         while (true) {
            if (var8 < var4) {
               int var9 = var0.getRGB(var8, var7);
               int var10 = var9 >> bxB<"o">(18295, 2614550399787745606L ^ var1) & bxB<"o">(27083, 1812134110810501115L ^ var1);
               int var11 = var9 >> bxB<"o">(10085, 7575287285263769948L ^ var1) & bxB<"o">(18538, 2552304621268356688L ^ var1);
               int var12 = var9 >> bxB<"o">(13589, 733976767564362538L ^ var1) & bxB<"o">(18538, 2552304621268356688L ^ var1);
               int var13 = var9 & bxB<"o">(18538, 2552304621268356688L ^ var1);
               int var14 = var10 << bxB<"o">(31072, 831620526487535448L ^ var1)
                  | var13 << bxB<"o">(6810, 1122504024298921127L ^ var1)
                  | var12 << bxB<"o">(8684, 5543266449586497490L ^ var1)
                  | var11;

               try {
                  var6.method_61941(var8, var7, var14);
                  var8++;
                  if (var3 == null) {
                     break;
                  }

                  if (var3 != null) {
                     continue;
                  }
               } catch (MatchException var15) {
                  throw bxx(var15);
               }
            }

            var7++;
            break;
         }

         if (var3 == null) {
            break;
         }
      }

      return var6;
   }

   public static void bxw(
      class_4587 var0,
      class_4588 var1,
      float var2,
      float var3,
      float var4,
      float var5,
      float var6,
      float var7,
      float var8,
      float var9,
      float var10,
      float var11
   ) {
      long var12 = LVQnS ^ 7236576186458L;
      Matrix4f var15 = var0.method_23760().method_23761();
      var1.method_22918(var15, var2, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var6, var7).method_22915(var8, var9, var10, var11);
      jf.bBe();
      var1.method_22918(var15, var5, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var6, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var6, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var6, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var3, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var5, var3, var7).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var4).method_22915(var8, var9, var10, var11);
      var1.method_22918(var15, var2, var6, var7).method_22915(var8, var9, var10, var11);

      try {
         var1.method_22918(var15, var5, var6, var4).method_22915(var8, var9, var10, var11);
         var1.method_22918(var15, var5, var6, var7).method_22915(var8, var9, var10, var11);
         var1.method_22918(var15, var5, var6, var7).method_22915(var8, var9, var10, var11);
         var1.method_22918(var15, var5, var6, var7).method_22915(var8, var9, var10, var11);
         if (iS.bwL() == null) {
            jf.bBd(new String[2]);
         }
      } catch (MatchException var16) {
         throw bxx(var16);
      }
   }

   public static void bxp(class_4587 var0, class_2338 var1, mG var2, mG var3, boolean var4) {
      bxs(var0, new class_238(var1), var2, var3, var4);
   }

   public static void bxs(class_4587 param0, class_238 param1, mG param2, mG param3, boolean param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/iW.LVQnS J
      // 003: ldc2_w 86620200070575
      // 006: lxor
      // 007: lstore 5
      // 009: aload 1
      // 00a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00d: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 010: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 013: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 016: invokevirtual net/minecraft/class_243.method_22882 ()Lnet/minecraft/class_243;
      // 019: invokevirtual net/minecraft/class_238.method_997 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 01c: astore 8
      // 01e: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 021: aload 0
      // 022: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 025: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 028: astore 9
      // 02a: astore 7
      // 02c: iload 4
      // 02e: aload 7
      // 030: ifnull 116
      // 033: ifeq 112
      // 036: goto 03d
      // 039: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 03c: athrow
      // 03d: aload 3
      // 03e: invokevirtual sixtwo/mG.con ()[F
      // 041: astore 10
      // 043: new net/minecraft/class_9799
      // 046: dup
      // 047: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 04a: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 04d: sipush 20910
      // 050: ldc2_w 5876849983144350853
      // 053: lload 5
      // 055: lxor
      // 056: invokedynamic o (IJ)I bsm=sixtwo/iW.bxB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05b: imul
      // 05c: invokespecial net/minecraft/class_9799.<init> (I)V
      // 05f: astore 11
      // 061: new net/minecraft/class_287
      // 064: dup
      // 065: aload 11
      // 067: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27380 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 06a: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 06d: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 070: astore 12
      // 072: aload 0
      // 073: aload 12
      // 075: aload 8
      // 077: getfield net/minecraft/class_238.field_1323 D
      // 07a: aload 8
      // 07c: getfield net/minecraft/class_238.field_1322 D
      // 07f: aload 8
      // 081: getfield net/minecraft/class_238.field_1321 D
      // 084: aload 8
      // 086: getfield net/minecraft/class_238.field_1320 D
      // 089: aload 8
      // 08b: getfield net/minecraft/class_238.field_1325 D
      // 08e: aload 8
      // 090: getfield net/minecraft/class_238.field_1324 D
      // 093: aload 10
      // 095: bipush 0
      // 096: faload
      // 097: aload 10
      // 099: bipush 1
      // 09a: faload
      // 09b: aload 10
      // 09d: bipush 2
      // 09e: faload
      // 09f: aload 10
      // 0a1: bipush 3
      // 0a2: faload
      // 0a3: fconst_2
      // 0a4: fdiv
      // 0a5: invokestatic sixtwo/iW.bxv (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;DDDDDDFFFF)V
      // 0a8: aload 12
      // 0aa: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 0ad: astore 13
      // 0af: getstatic sixtwo/kR.ShkJj Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0b2: aload 13
      // 0b4: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 0b7: aload 7
      // 0b9: ifnull 0f9
      // 0bc: aload 13
      // 0be: ifnull 0f4
      // 0c1: aload 13
      // 0c3: invokevirtual net/minecraft/class_9801.close ()V
      // 0c6: goto 0f4
      // 0c9: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0cc: athrow
      // 0cd: astore 14
      // 0cf: aload 13
      // 0d1: aload 7
      // 0d3: ifnull 0e2
      // 0d6: ifnull 0f1
      // 0d9: goto 0e0
      // 0dc: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0df: athrow
      // 0e0: aload 13
      // 0e2: invokevirtual net/minecraft/class_9801.close ()V
      // 0e5: goto 0f1
      // 0e8: astore 15
      // 0ea: aload 14
      // 0ec: aload 15
      // 0ee: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 0f1: aload 14
      // 0f3: athrow
      // 0f4: aload 11
      // 0f6: invokevirtual net/minecraft/class_9799.close ()V
      // 0f9: goto 112
      // 0fc: astore 12
      // 0fe: aload 11
      // 100: invokevirtual net/minecraft/class_9799.close ()V
      // 103: goto 10f
      // 106: astore 13
      // 108: aload 12
      // 10a: aload 13
      // 10c: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 10f: aload 12
      // 111: athrow
      // 112: aload 2
      // 113: invokevirtual sixtwo/mG.coh ()I
      // 116: istore 10
      // 118: new net/minecraft/class_9799
      // 11b: dup
      // 11c: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 11f: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 122: sipush 31072
      // 125: ldc2_w 831756597744663631
      // 128: lload 5
      // 12a: lxor
      // 12b: invokedynamic o (IJ)I bsm=sixtwo/iW.bxB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 130: imul
      // 131: invokespecial net/minecraft/class_9799.<init> (I)V
      // 134: astore 11
      // 136: new net/minecraft/class_287
      // 139: dup
      // 13a: aload 11
      // 13c: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_29344 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 13f: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 142: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 145: astore 12
      // 147: aload 12
      // 149: aload 9
      // 14b: aload 8
      // 14d: getfield net/minecraft/class_238.field_1323 D
      // 150: d2f
      // 151: aload 8
      // 153: getfield net/minecraft/class_238.field_1322 D
      // 156: d2f
      // 157: aload 8
      // 159: getfield net/minecraft/class_238.field_1321 D
      // 15c: d2f
      // 15d: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 160: iload 10
      // 162: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 167: pop
      // 168: aload 12
      // 16a: aload 9
      // 16c: aload 8
      // 16e: getfield net/minecraft/class_238.field_1320 D
      // 171: d2f
      // 172: aload 8
      // 174: getfield net/minecraft/class_238.field_1322 D
      // 177: d2f
      // 178: aload 8
      // 17a: getfield net/minecraft/class_238.field_1321 D
      // 17d: d2f
      // 17e: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 181: iload 10
      // 183: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 188: pop
      // 189: aload 12
      // 18b: aload 9
      // 18d: aload 8
      // 18f: getfield net/minecraft/class_238.field_1320 D
      // 192: d2f
      // 193: aload 8
      // 195: getfield net/minecraft/class_238.field_1322 D
      // 198: d2f
      // 199: aload 8
      // 19b: getfield net/minecraft/class_238.field_1321 D
      // 19e: d2f
      // 19f: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1a2: iload 10
      // 1a4: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1a9: pop
      // 1aa: aload 12
      // 1ac: aload 9
      // 1ae: aload 8
      // 1b0: getfield net/minecraft/class_238.field_1320 D
      // 1b3: d2f
      // 1b4: aload 8
      // 1b6: getfield net/minecraft/class_238.field_1322 D
      // 1b9: d2f
      // 1ba: aload 8
      // 1bc: getfield net/minecraft/class_238.field_1324 D
      // 1bf: d2f
      // 1c0: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1c3: iload 10
      // 1c5: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1ca: pop
      // 1cb: aload 12
      // 1cd: aload 9
      // 1cf: aload 8
      // 1d1: getfield net/minecraft/class_238.field_1320 D
      // 1d4: d2f
      // 1d5: aload 8
      // 1d7: getfield net/minecraft/class_238.field_1322 D
      // 1da: d2f
      // 1db: aload 8
      // 1dd: getfield net/minecraft/class_238.field_1324 D
      // 1e0: d2f
      // 1e1: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1e4: iload 10
      // 1e6: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1eb: pop
      // 1ec: aload 12
      // 1ee: aload 9
      // 1f0: aload 8
      // 1f2: getfield net/minecraft/class_238.field_1323 D
      // 1f5: d2f
      // 1f6: aload 8
      // 1f8: getfield net/minecraft/class_238.field_1322 D
      // 1fb: d2f
      // 1fc: aload 8
      // 1fe: getfield net/minecraft/class_238.field_1324 D
      // 201: d2f
      // 202: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 205: iload 10
      // 207: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 20c: pop
      // 20d: aload 12
      // 20f: aload 9
      // 211: aload 8
      // 213: getfield net/minecraft/class_238.field_1323 D
      // 216: d2f
      // 217: aload 8
      // 219: getfield net/minecraft/class_238.field_1322 D
      // 21c: d2f
      // 21d: aload 8
      // 21f: getfield net/minecraft/class_238.field_1324 D
      // 222: d2f
      // 223: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 226: iload 10
      // 228: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 22d: pop
      // 22e: aload 12
      // 230: aload 9
      // 232: aload 8
      // 234: getfield net/minecraft/class_238.field_1323 D
      // 237: d2f
      // 238: aload 8
      // 23a: getfield net/minecraft/class_238.field_1322 D
      // 23d: d2f
      // 23e: aload 8
      // 240: getfield net/minecraft/class_238.field_1321 D
      // 243: d2f
      // 244: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 247: iload 10
      // 249: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 24e: pop
      // 24f: aload 12
      // 251: aload 9
      // 253: aload 8
      // 255: getfield net/minecraft/class_238.field_1323 D
      // 258: d2f
      // 259: aload 8
      // 25b: getfield net/minecraft/class_238.field_1322 D
      // 25e: d2f
      // 25f: aload 8
      // 261: getfield net/minecraft/class_238.field_1321 D
      // 264: d2f
      // 265: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 268: iload 10
      // 26a: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 26f: pop
      // 270: aload 12
      // 272: aload 9
      // 274: aload 8
      // 276: getfield net/minecraft/class_238.field_1323 D
      // 279: d2f
      // 27a: aload 8
      // 27c: getfield net/minecraft/class_238.field_1325 D
      // 27f: d2f
      // 280: aload 8
      // 282: getfield net/minecraft/class_238.field_1321 D
      // 285: d2f
      // 286: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 289: iload 10
      // 28b: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 290: pop
      // 291: aload 12
      // 293: aload 9
      // 295: aload 8
      // 297: getfield net/minecraft/class_238.field_1320 D
      // 29a: d2f
      // 29b: aload 8
      // 29d: getfield net/minecraft/class_238.field_1322 D
      // 2a0: d2f
      // 2a1: aload 8
      // 2a3: getfield net/minecraft/class_238.field_1321 D
      // 2a6: d2f
      // 2a7: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2aa: iload 10
      // 2ac: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2b1: pop
      // 2b2: aload 12
      // 2b4: aload 9
      // 2b6: aload 8
      // 2b8: getfield net/minecraft/class_238.field_1320 D
      // 2bb: d2f
      // 2bc: aload 8
      // 2be: getfield net/minecraft/class_238.field_1325 D
      // 2c1: d2f
      // 2c2: aload 8
      // 2c4: getfield net/minecraft/class_238.field_1321 D
      // 2c7: d2f
      // 2c8: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2cb: iload 10
      // 2cd: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2d2: pop
      // 2d3: aload 12
      // 2d5: aload 9
      // 2d7: aload 8
      // 2d9: getfield net/minecraft/class_238.field_1320 D
      // 2dc: d2f
      // 2dd: aload 8
      // 2df: getfield net/minecraft/class_238.field_1322 D
      // 2e2: d2f
      // 2e3: aload 8
      // 2e5: getfield net/minecraft/class_238.field_1324 D
      // 2e8: d2f
      // 2e9: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2ec: iload 10
      // 2ee: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2f3: pop
      // 2f4: aload 12
      // 2f6: aload 9
      // 2f8: aload 8
      // 2fa: getfield net/minecraft/class_238.field_1320 D
      // 2fd: d2f
      // 2fe: aload 8
      // 300: getfield net/minecraft/class_238.field_1325 D
      // 303: d2f
      // 304: aload 8
      // 306: getfield net/minecraft/class_238.field_1324 D
      // 309: d2f
      // 30a: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 30d: iload 10
      // 30f: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 314: pop
      // 315: aload 12
      // 317: aload 9
      // 319: aload 8
      // 31b: getfield net/minecraft/class_238.field_1323 D
      // 31e: d2f
      // 31f: aload 8
      // 321: getfield net/minecraft/class_238.field_1322 D
      // 324: d2f
      // 325: aload 8
      // 327: getfield net/minecraft/class_238.field_1324 D
      // 32a: d2f
      // 32b: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 32e: iload 10
      // 330: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 335: pop
      // 336: aload 12
      // 338: aload 9
      // 33a: aload 8
      // 33c: getfield net/minecraft/class_238.field_1323 D
      // 33f: d2f
      // 340: aload 8
      // 342: getfield net/minecraft/class_238.field_1325 D
      // 345: d2f
      // 346: aload 8
      // 348: getfield net/minecraft/class_238.field_1324 D
      // 34b: d2f
      // 34c: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 34f: iload 10
      // 351: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 356: pop
      // 357: aload 12
      // 359: aload 9
      // 35b: aload 8
      // 35d: getfield net/minecraft/class_238.field_1323 D
      // 360: d2f
      // 361: aload 8
      // 363: getfield net/minecraft/class_238.field_1325 D
      // 366: d2f
      // 367: aload 8
      // 369: getfield net/minecraft/class_238.field_1321 D
      // 36c: d2f
      // 36d: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 370: iload 10
      // 372: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 377: pop
      // 378: aload 12
      // 37a: aload 9
      // 37c: aload 8
      // 37e: getfield net/minecraft/class_238.field_1320 D
      // 381: d2f
      // 382: aload 8
      // 384: getfield net/minecraft/class_238.field_1325 D
      // 387: d2f
      // 388: aload 8
      // 38a: getfield net/minecraft/class_238.field_1321 D
      // 38d: d2f
      // 38e: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 391: iload 10
      // 393: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 398: pop
      // 399: aload 12
      // 39b: aload 9
      // 39d: aload 8
      // 39f: getfield net/minecraft/class_238.field_1320 D
      // 3a2: d2f
      // 3a3: aload 8
      // 3a5: getfield net/minecraft/class_238.field_1325 D
      // 3a8: d2f
      // 3a9: aload 8
      // 3ab: getfield net/minecraft/class_238.field_1321 D
      // 3ae: d2f
      // 3af: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 3b2: iload 10
      // 3b4: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 3b9: pop
      // 3ba: aload 12
      // 3bc: aload 9
      // 3be: aload 8
      // 3c0: getfield net/minecraft/class_238.field_1320 D
      // 3c3: d2f
      // 3c4: aload 8
      // 3c6: getfield net/minecraft/class_238.field_1325 D
      // 3c9: d2f
      // 3ca: aload 8
      // 3cc: getfield net/minecraft/class_238.field_1324 D
      // 3cf: d2f
      // 3d0: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 3d3: iload 10
      // 3d5: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 3da: pop
      // 3db: aload 12
      // 3dd: aload 9
      // 3df: aload 8
      // 3e1: getfield net/minecraft/class_238.field_1320 D
      // 3e4: d2f
      // 3e5: aload 8
      // 3e7: getfield net/minecraft/class_238.field_1325 D
      // 3ea: d2f
      // 3eb: aload 8
      // 3ed: getfield net/minecraft/class_238.field_1324 D
      // 3f0: d2f
      // 3f1: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 3f4: iload 10
      // 3f6: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 3fb: pop
      // 3fc: aload 12
      // 3fe: aload 9
      // 400: aload 8
      // 402: getfield net/minecraft/class_238.field_1323 D
      // 405: d2f
      // 406: aload 8
      // 408: getfield net/minecraft/class_238.field_1325 D
      // 40b: d2f
      // 40c: aload 8
      // 40e: getfield net/minecraft/class_238.field_1324 D
      // 411: d2f
      // 412: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 415: iload 10
      // 417: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 41c: pop
      // 41d: aload 12
      // 41f: aload 9
      // 421: aload 8
      // 423: getfield net/minecraft/class_238.field_1323 D
      // 426: d2f
      // 427: aload 8
      // 429: getfield net/minecraft/class_238.field_1325 D
      // 42c: d2f
      // 42d: aload 8
      // 42f: getfield net/minecraft/class_238.field_1324 D
      // 432: d2f
      // 433: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 436: iload 10
      // 438: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 43d: pop
      // 43e: aload 12
      // 440: aload 9
      // 442: aload 8
      // 444: getfield net/minecraft/class_238.field_1323 D
      // 447: d2f
      // 448: aload 8
      // 44a: getfield net/minecraft/class_238.field_1325 D
      // 44d: d2f
      // 44e: aload 8
      // 450: getfield net/minecraft/class_238.field_1321 D
      // 453: d2f
      // 454: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 457: iload 10
      // 459: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 45e: pop
      // 45f: aload 12
      // 461: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 464: astore 13
      // 466: getstatic sixtwo/kR.YTwxL Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 469: aload 13
      // 46b: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 46e: aload 7
      // 470: ifnull 4b0
      // 473: aload 13
      // 475: ifnull 4ab
      // 478: aload 13
      // 47a: invokevirtual net/minecraft/class_9801.close ()V
      // 47d: goto 4ab
      // 480: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 483: athrow
      // 484: astore 14
      // 486: aload 13
      // 488: aload 7
      // 48a: ifnull 499
      // 48d: ifnull 4a8
      // 490: goto 497
      // 493: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 496: athrow
      // 497: aload 13
      // 499: invokevirtual net/minecraft/class_9801.close ()V
      // 49c: goto 4a8
      // 49f: astore 15
      // 4a1: aload 14
      // 4a3: aload 15
      // 4a5: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 4a8: aload 14
      // 4aa: athrow
      // 4ab: aload 11
      // 4ad: invokevirtual net/minecraft/class_9799.close ()V
      // 4b0: goto 4c9
      // 4b3: astore 12
      // 4b5: aload 11
      // 4b7: invokevirtual net/minecraft/class_9799.close ()V
      // 4ba: goto 4c6
      // 4bd: astore 13
      // 4bf: aload 12
      // 4c1: aload 13
      // 4c3: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 4c6: aload 12
      // 4c8: athrow
      // 4c9: aload 7
      // 4cb: ifnonnull 4da
      // 4ce: ldc "phDL2b"
      // 4d0: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 4d3: goto 4da
      // 4d6: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4d9: athrow
      // 4da: return
   }

   private static Throwable bxx(Throwable var0) {
      return var0;
   }

   public static void bxv(
      class_4587 var0,
      class_4588 var1,
      double var2,
      double var4,
      double var6,
      double var8,
      double var10,
      double var12,
      float var14,
      float var15,
      float var16,
      float var17
   ) {
      bxw(var0, var1, (float)var2, (float)var4, (float)var6, (float)var8, (float)var10, (float)var12, var14, var15, var16, var17);
   }

   public static void bxt(class_4587 param0, Iterable<class_243> param1, mG param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/iW.LVQnS J
      // 003: ldc2_w 90968232533751
      // 006: lxor
      // 007: lstore 3
      // 008: new java/util/ArrayList
      // 00b: dup
      // 00c: invokespecial java/util/ArrayList.<init> ()V
      // 00f: astore 6
      // 011: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 014: aload 1
      // 015: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 01a: astore 7
      // 01c: astore 5
      // 01e: aload 7
      // 020: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 025: ifeq 04f
      // 028: aload 7
      // 02a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 02f: checkcast net/minecraft/class_243
      // 032: astore 8
      // 034: aload 6
      // 036: aload 8
      // 038: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 03d: pop
      // 03e: aload 5
      // 040: ifnull 066
      // 043: aload 5
      // 045: ifnonnull 01e
      // 048: goto 04f
      // 04b: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04e: athrow
      // 04f: aload 6
      // 051: invokeinterface java/util/List.isEmpty ()Z 1
      // 056: ifeq 05e
      // 059: return
      // 05a: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 05d: athrow
      // 05e: aload 0
      // 05f: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 062: aload 0
      // 063: invokestatic sixtwo/jI.bIr (Lnet/minecraft/class_4587;)V
      // 066: new net/minecraft/class_9799
      // 069: dup
      // 06a: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 06d: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 070: aload 6
      // 072: invokeinterface java/util/List.size ()I 1
      // 077: imul
      // 078: invokespecial net/minecraft/class_9799.<init> (I)V
      // 07b: astore 7
      // 07d: new net/minecraft/class_287
      // 080: dup
      // 081: aload 7
      // 083: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_29345 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 086: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 089: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 08c: astore 8
      // 08e: aload 0
      // 08f: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 092: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 095: astore 9
      // 097: aload 6
      // 099: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 09e: astore 10
      // 0a0: aload 10
      // 0a2: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0a7: ifeq 0ea
      // 0aa: aload 10
      // 0ac: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0b1: checkcast net/minecraft/class_243
      // 0b4: astore 11
      // 0b6: aload 8
      // 0b8: aload 5
      // 0ba: ifnull 0ec
      // 0bd: aload 9
      // 0bf: aload 11
      // 0c1: getfield net/minecraft/class_243.field_1352 D
      // 0c4: d2f
      // 0c5: aload 11
      // 0c7: getfield net/minecraft/class_243.field_1351 D
      // 0ca: d2f
      // 0cb: aload 11
      // 0cd: getfield net/minecraft/class_243.field_1350 D
      // 0d0: d2f
      // 0d1: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0d4: aload 2
      // 0d5: invokevirtual sixtwo/mG.coh ()I
      // 0d8: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0dd: pop
      // 0de: aload 5
      // 0e0: ifnonnull 0a0
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e9: athrow
      // 0ea: aload 8
      // 0ec: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 0ef: astore 10
      // 0f1: getstatic sixtwo/kR.jLECJ Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0f4: aload 10
      // 0f6: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 0f9: aload 5
      // 0fb: ifnull 13b
      // 0fe: aload 10
      // 100: ifnull 136
      // 103: aload 10
      // 105: invokevirtual net/minecraft/class_9801.close ()V
      // 108: goto 136
      // 10b: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10e: athrow
      // 10f: astore 11
      // 111: aload 10
      // 113: aload 5
      // 115: ifnull 124
      // 118: ifnull 133
      // 11b: goto 122
      // 11e: invokestatic sixtwo/iW.bxx (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 121: athrow
      // 122: aload 10
      // 124: invokevirtual net/minecraft/class_9801.close ()V
      // 127: goto 133
      // 12a: astore 12
      // 12c: aload 11
      // 12e: aload 12
      // 130: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 133: aload 11
      // 135: athrow
      // 136: aload 7
      // 138: invokevirtual net/minecraft/class_9799.close ()V
      // 13b: goto 154
      // 13e: astore 8
      // 140: aload 7
      // 142: invokevirtual net/minecraft/class_9799.close ()V
      // 145: goto 151
      // 148: astore 9
      // 14a: aload 8
      // 14c: aload 9
      // 14e: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 151: aload 8
      // 153: athrow
      // 154: aload 0
      // 155: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 158: goto 164
      // 15b: astore 13
      // 15d: aload 0
      // 15e: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 161: aload 13
      // 163: athrow
      // 164: return
   }

   public static void bxr(class_4587 var0, class_238 var1, mG var2) {
      bxs(var0, var1, var2, var2, false);
   }
}
