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
import net.minecraft.class_1044;
import net.minecraft.class_1297;
import net.minecraft.class_4587;

public final class kB {
   private static final float zDHsL = 1.5F;
   private static final kS gjoAf;
   private static float ViGYP;
   private static float aRpoV;
   private static float DyNKu;
   private static boolean OoDnB;
   private static iS[] PgIMH;
   private static final long ydRat = gb.aYR(-7885859841398095174L, -8548699133457943515L, MethodHandles.lookup().lookupClass()).a(220053362696368L);
   private static final String[] GnaPL;
   private static final String[] CvKvX;
   private static final Map kJuha = new HashMap(13);
   private static final long[] AiQKY;
   private static final Integer[] OUraq;
   private static final Map SyQMN;

   static {
      iS[] var10000 = new iS[3];
      bSA(var10000);
      long var11 = ydRat ^ 29959417532715L;
      Cipher var13;
      Cipher var24 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var24.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[6];
      int var18 = 0;
      String var17 = "x\u008c├│\f\u008b┬┐├║P├Â\u0010\u0086J\u009e├ôo├Ą\b├Ç\u0004\u000f\u0003t$\u0002├¬x\u009d┬ą├Ći\u0003\u001f \u0005ykT=Y├Ő\u009e├ůZ┬¬├▓├Čp\u0015\u0018%2_M├Ő├î\\?\u009b├░Ty├ú├é\u0085\u009a _┬ÁH├▒\u008ej├Ś(\u0000├║┬│~├░F[\u0089├ůKt\u0006\u0095\u0084L\u009a\u0087├ô├č├ćfT├Ž\u0091\u0010\b\u0093.\u0002\bU\u008bb`@/\u0091┬ú4m4";
      int var19 = "x\u008c├│\f\u008b┬┐├║P├Â\u0010\u0086J\u009e├ôo├Ą\b├Ç\u0004\u000f\u0003t$\u0002├¬x\u009d┬ą├Ći\u0003\u001f \u0005ykT=Y├Ő\u009e├ůZ┬¬├▓├Čp\u0015\u0018%2_M├Ő├î\\?\u009b├░Ty├ú├é\u0085\u009a _┬ÁH├▒\u008ej├Ś(\u0000├║┬│~├░F[\u0089├ůKt\u0006\u0095\u0084L\u009a\u0087├ô├č├ćfT├Ž\u0091\u0010\b\u0093.\u0002\bU\u008bb`@/\u0091┬ú4m4"
         .length();
      char var16 = ' ';
      int var23 = -1;

      label45:
      while (true) {
         String var25 = var17.substring(++var23, var23 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var34 = bSD(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var34;
                  if ((var23 += var16) >= var19) {
                     GnaPL = var20;
                     CvKvX = new String[6];
                     SyQMN = new HashMap(13);
                     Cipher var0;
                     Cipher var27 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var27.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "├░\u0097├┐\u008a├╣d?\u0011┬Ż\u0088\u0014:>!~\u0082";
                     int var5 = "├░\u0097├┐\u008a├╣d?\u0011┬Ż\u0088\u0014:>!~\u0082".length();
                     byte var2 = 0;

                     do {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        var10001 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
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
                        long var10004 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var39 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     AiQKY = var6;
                     OUraq = new Integer[2];
                     gjoAf = kS.bVE().duk(lh.aApMr).duo(false).dul(false).dun(true).dup();
                     ViGYP = 1.0F;
                     DyNKu = 1.0F;
                     return;
                  }

                  var16 = var17.charAt(var23);
                  break;
               default:
                  var20[var18++] = var34;
                  if ((var23 += var16) < var19) {
                     var16 = var17.charAt(var23);
                     continue label45;
                  }

                  var17 = "b:rf┬ę\u001a ┬Ą├Ü\u0086├Ü├á├ŻL┬ó├Ç&\u008f\u0099├╣├ť├Ž4├Ş├ő&\"┬Ž)\u0010\f~\u001b├┐├áJ\u0007├╝┬Á3 \u0005tq├ó\u0004├┤┬ú\u009c├Č┬«\u001e┬óT0├ë\u00ad\u0096\u0090\u009f\u00adtr#R5p+\u0083├Ś\u001f\u009ez";
                  var19 = "b:rf┬ę\u001a ┬Ą├Ü\u0086├Ü├á├ŻL┬ó├Ç&\u008f\u0099├╣├ť├Ž4├Ş├ő&\"┬Ž)\u0010\f~\u001b├┐├áJ\u0007├╝┬Á3 \u0005tq├ó\u0004├┤┬ú\u009c├Č┬«\u001e┬óT0├ë\u00ad\u0096\u0090\u009f\u00adtr#R5p+\u0083├Ś\u001f\u009ez"
                     .length();
                  var16 = '(';
                  var23 = -1;
            }

            var25 = var17.substring(++var23, var23 + var16);
            var10001 = 0;
         }
      }
   }

   public static void bSw() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kB.ydRat J
      // 03: ldc2_w 55203252423138
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/kB.bSB ()[Lsixtwo/iS;
      // 0b: getstatic sixtwo/kB.ViGYP F
      // 0e: putstatic sixtwo/kB.aRpoV F
      // 11: getstatic sixtwo/kB.ViGYP F
      // 14: getstatic sixtwo/kB.DyNKu F
      // 17: fadd
      // 18: putstatic sixtwo/kB.ViGYP F
      // 1b: astore 2
      // 1c: getstatic sixtwo/kB.DyNKu F
      // 1f: ldc 25.0
      // 21: fcmpl
      // 22: aload 2
      // 23: ifnull 41
      // 26: ifle 3b
      // 29: goto 30
      // 2c: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f: athrow
      // 30: bipush 1
      // 31: putstatic sixtwo/kB.OoDnB Z
      // 34: goto 3b
      // 37: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: getstatic sixtwo/kB.DyNKu F
      // 3e: ldc -25.0
      // 40: fcmpg
      // 41: aload 2
      // 42: ifnull 5d
      // 45: ifge 5a
      // 48: goto 4f
      // 4b: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4e: athrow
      // 4f: bipush 0
      // 50: putstatic sixtwo/kB.OoDnB Z
      // 53: goto 5a
      // 56: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 59: athrow
      // 5a: getstatic sixtwo/kB.OoDnB Z
      // 5d: ifeq 6d
      // 60: getstatic sixtwo/kB.DyNKu F
      // 63: ldc 0.5
      // 65: fsub
      // 66: goto 73
      // 69: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6c: athrow
      // 6d: getstatic sixtwo/kB.DyNKu F
      // 70: ldc 0.5
      // 72: fadd
      // 73: putstatic sixtwo/kB.DyNKu F
      // 76: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 79: ifnonnull 8a
      // 7c: bipush 5
      // 7d: anewarray 75
      // 80: invokestatic sixtwo/kB.bSA ([Lsixtwo/iS;)V
      // 83: goto 8a
      // 86: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 89: athrow
      // 8a: return
   }

   public static iS[] bSB() {
      return PgIMH;
   }

   private static CallSite bSJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bSI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kB" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bSD(byte[] var0) {
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

   private static Throwable bSC(Throwable var0) {
      return var0;
   }

   private static int bSH(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 948;
      if (OUraq[var3] == null) {
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
         long var5 = AiQKY[var3];
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
         Object[] var9 = (Object[])SyQMN.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               SyQMN.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kB", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         OUraq[var3] = var15;
      }

      return OUraq[var3];
   }

   private static CallSite bSG(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bSF".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kB" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static class_1044 bSy(int var0) {
      long var1 = ydRat ^ 103910578622359L;

      try {
         switch (var0) {
            case 1:
               return ob.cBv(bSG<"q">(31752, 3002985089767464750L ^ var1));
            case 2:
               return ob.cBv(bSG<"q">(1490, 4223806846940522224L ^ var1));
            case 3:
               return ob.cBv(bSG<"q">(9476, 2267976862774298147L ^ var1));
         }
      } catch (MatchException var3) {
         throw bSC(var3);
      }

      return ob.cBv(bSG<"q">(27061, 8678186259735562896L ^ var1));
   }

   private static String bSE(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 880;
      if (CvKvX[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])kJuha.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kJuha.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kB", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = GnaPL[var5].getBytes("ISO-8859-1");
         CvKvX[var5] = bSD(((Cipher)var4[0]).doFinal(var9));
      }

      return CvKvX[var5];
   }

   private static int bSI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bSH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void bSA(iS[] var0) {
      PgIMH = var0;
   }

   public static void bSx(class_4587 param0, class_1297 param1, mG param2, float param3, int param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kB.ydRat J
      // 003: ldc2_w 138533319396081
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/kB.bSB ()[Lsixtwo/iS;
      // 00c: astore 7
      // 00e: aload 0
      // 00f: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 012: aload 1
      // 013: fload 3
      // 014: invokevirtual net/minecraft/class_1297.method_30950 (F)Lnet/minecraft/class_243;
      // 017: dconst_0
      // 018: aload 1
      // 019: aload 1
      // 01a: invokevirtual net/minecraft/class_1297.method_18376 ()Lnet/minecraft/class_4050;
      // 01d: invokevirtual net/minecraft/class_1297.method_18381 (Lnet/minecraft/class_4050;)F
      // 020: fconst_2
      // 021: fdiv
      // 022: f2d
      // 023: dconst_0
      // 024: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 027: astore 8
      // 029: aload 0
      // 02a: aload 8
      // 02c: invokestatic sixtwo/jI.bIs (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;)V
      // 02f: aload 0
      // 030: invokestatic sixtwo/jI.bIu (Lnet/minecraft/class_4587;)V
      // 033: aload 0
      // 034: getstatic net/minecraft/class_7833.field_40718 Lnet/minecraft/class_7833;
      // 037: fload 3
      // 038: getstatic sixtwo/kB.aRpoV F
      // 03b: getstatic sixtwo/kB.ViGYP F
      // 03e: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 041: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 046: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 049: aload 0
      // 04a: ldc -0.75
      // 04c: ldc -0.75
      // 04e: ldc 0.01
      // 050: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 053: new net/minecraft/class_9799
      // 056: dup
      // 057: getstatic net/minecraft/class_290.field_20888 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 05a: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 05d: bipush 4
      // 05e: imul
      // 05f: invokespecial net/minecraft/class_9799.<init> (I)V
      // 062: astore 9
      // 064: new net/minecraft/class_287
      // 067: dup
      // 068: aload 9
      // 06a: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 06d: getstatic net/minecraft/class_290.field_20888 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 070: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 073: astore 10
      // 075: aload 0
      // 076: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 079: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 07c: astore 11
      // 07e: aload 10
      // 080: aload 11
      // 082: fconst_0
      // 083: ldc 1.5
      // 085: fconst_0
      // 086: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 089: aload 2
      // 08a: invokevirtual sixtwo/mG.coh ()I
      // 08d: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 092: fconst_0
      // 093: fconst_0
      // 094: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 099: bipush 0
      // 09a: sipush 24439
      // 09d: ldc2_w 5899735386516666866
      // 0a0: lload 5
      // 0a2: lxor
      // 0a3: invokedynamic g (IJ)I bsm=sixtwo/kB.bSJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a8: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 0ad: pop
      // 0ae: aload 10
      // 0b0: aload 11
      // 0b2: ldc 1.5
      // 0b4: ldc 1.5
      // 0b6: fconst_0
      // 0b7: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0ba: aload 2
      // 0bb: invokevirtual sixtwo/mG.coh ()I
      // 0be: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0c3: fconst_1
      // 0c4: fconst_0
      // 0c5: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0ca: bipush 0
      // 0cb: sipush 17493
      // 0ce: ldc2_w 6517679418648011473
      // 0d1: lload 5
      // 0d3: lxor
      // 0d4: invokedynamic g (IJ)I bsm=sixtwo/kB.bSJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d9: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 0de: pop
      // 0df: aload 10
      // 0e1: aload 11
      // 0e3: ldc 1.5
      // 0e5: fconst_0
      // 0e6: fconst_0
      // 0e7: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0ea: aload 2
      // 0eb: invokevirtual sixtwo/mG.coh ()I
      // 0ee: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0f3: fconst_1
      // 0f4: fconst_1
      // 0f5: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0fa: bipush 0
      // 0fb: sipush 17493
      // 0fe: ldc2_w 6517679418648011473
      // 101: lload 5
      // 103: lxor
      // 104: invokedynamic g (IJ)I bsm=sixtwo/kB.bSJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 109: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 10e: pop
      // 10f: aload 10
      // 111: aload 11
      // 113: fconst_0
      // 114: fconst_0
      // 115: fconst_0
      // 116: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 119: aload 2
      // 11a: invokevirtual sixtwo/mG.coh ()I
      // 11d: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 122: fconst_0
      // 123: fconst_1
      // 124: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 129: bipush 0
      // 12a: sipush 17493
      // 12d: ldc2_w 6517679418648011473
      // 130: lload 5
      // 132: lxor
      // 133: invokedynamic g (IJ)I bsm=sixtwo/kB.bSJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 138: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 13d: pop
      // 13e: aload 10
      // 140: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 143: astore 12
      // 145: getstatic sixtwo/kR.Dmmsd Lsixtwo/kO;
      // 148: getstatic sixtwo/kB.gjoAf Lsixtwo/kS;
      // 14b: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 14e: astore 13
      // 150: iload 4
      // 152: invokestatic sixtwo/kB.bSy (I)Lnet/minecraft/class_1044;
      // 155: astore 14
      // 157: aload 13
      // 159: aload 12
      // 15b: aload 14
      // 15d: invokedynamic accept (Lnet/minecraft/class_1044;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kB.bSz (Lnet/minecraft/class_1044;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 162: invokestatic sixtwo/lF.cfD (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 165: aload 7
      // 167: ifnull 1a7
      // 16a: aload 12
      // 16c: ifnull 1a2
      // 16f: aload 12
      // 171: invokevirtual net/minecraft/class_9801.close ()V
      // 174: goto 1a2
      // 177: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 17a: athrow
      // 17b: astore 13
      // 17d: aload 12
      // 17f: aload 7
      // 181: ifnull 190
      // 184: ifnull 19f
      // 187: goto 18e
      // 18a: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 18d: athrow
      // 18e: aload 12
      // 190: invokevirtual net/minecraft/class_9801.close ()V
      // 193: goto 19f
      // 196: astore 14
      // 198: aload 13
      // 19a: aload 14
      // 19c: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 19f: aload 13
      // 1a1: athrow
      // 1a2: aload 9
      // 1a4: invokevirtual net/minecraft/class_9799.close ()V
      // 1a7: goto 1c0
      // 1aa: astore 10
      // 1ac: aload 9
      // 1ae: invokevirtual net/minecraft/class_9799.close ()V
      // 1b1: goto 1bd
      // 1b4: astore 11
      // 1b6: aload 10
      // 1b8: aload 11
      // 1ba: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1bd: aload 10
      // 1bf: athrow
      // 1c0: aload 0
      // 1c1: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 1c4: goto 1d0
      // 1c7: astore 15
      // 1c9: aload 0
      // 1ca: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 1cd: aload 15
      // 1cf: athrow
      // 1d0: aload 7
      // 1d2: ifnonnull 1e2
      // 1d5: ldc_w "NNCN2"
      // 1d8: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 1db: goto 1e2
      // 1de: invokestatic sixtwo/kB.bSC (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e1: athrow
      // 1e2: return
   }

   private static Object bSF(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bSE(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
