package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.ByteBuffer;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_3532;

public class mG {
   public static mG QHTxQ;
   public static mG hoGuU;
   public static mG vuAhq;
   public static mG rxCUH;
   public static mG FQWvo;
   public static mG Cgzkn;
   public static mG NwQaf;
   public static mG JTHGB;
   public static mG NiWiU;
   public static mG xeUrY;
   public static mG yHyOB;
   public static mG ibYER;
   public static mG UhgnI;
   private final float xjQHn;
   private final float FZDzG;
   private final float YYINU;
   private final float WkNmh;
   private transient float[] ovptP;
   private static mG sxpMj;
   private static final ByteBuffer eJMAE;
   private static int EyWoz;
   private static final long SITGr = gb.aYR(1187944685927143086L, -224467402785640834L, MethodHandles.lookup().lookupClass()).a(168219105537300L);
   private static final String jvVIY;
   private static final long[] QAIuI;
   private static final Integer[] MsXTk;
   private static final Map nZyyJ;

   public mG cob(float var1) {
      return new mG(this.xjQHn, this.FZDzG, this.YYINU, this.WkNmh * var1);
   }

   private mG(float var1, float var2, float var3) {
      this(var1, var2, var3, 255.0F);
   }

   private mG(float var1, float var2, float var3, float var4) {
      var1 = class_3532.method_15363(var1, 0.0F, 255.0F);
      var2 = class_3532.method_15363(var2, 0.0F, 255.0F);
      var3 = class_3532.method_15363(var3, 0.0F, 255.0F);
      var4 = class_3532.method_15363(var4, 0.0F, 255.0F);
      this.xjQHn = var1;
      this.FZDzG = var2;
      this.YYINU = var3;
      this.WkNmh = var4;
   }

   static {
      long var11 = SITGr ^ 68379434736826L;
      cov(0);
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("├ľ\f┬ĄN\u0014SS├ë├äy┬║├Ľ┬┤├î\u008d=┬«├Ö\u001b┬┤N{Ec".getBytes("ISO-8859-1"));
      String var22 = coz(var15).intern();
      int var10001 = -1;
      jvVIY = var22;
      nZyyJ = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[9];
      int var3 = 0;
      String var4 = "/Kfz┬╗├╝├äu┬Á\u008f\u009a├Ć(f├ó\u001bI┬ž\u000f├ĺ\u0096*\u0018w├»\r\u0087\u0089\u0098)2\u008c\u0013┬«├Ť┬╗ZJ3├â├žSU\u0095\u0000├ä┬ż┬Ę├ó├ľ┬í\u009ax\t┬┤\u0003";
      int var5 = "/Kfz┬╗├╝├äu┬Á\u008f\u009a├Ć(f├ó\u001bI┬ž\u000f├ĺ\u0096*\u0018w├»\r\u0087\u0089\u0098)2\u008c\u0013┬«├Ť┬╗ZJ3├â├žSU\u0095\u0000├ä┬ż┬Ę├ó├ľ┬í\u009ax\t┬┤\u0003"
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
                     QAIuI = var6;
                     MsXTk = new Integer[9];
                     QHTxQ = cnP(0.0F, 0.0F, 0.0F);
                     hoGuU = cnP(255.0F, 255.0F, 255.0F);
                     vuAhq = cnP(255.0F, 0.0F, 0.0F);
                     rxCUH = cnP(0.0F, 255.0F, 71.0F);
                     FQWvo = cnP(0.0F, 255.0F, 255.0F);
                     Cgzkn = cnP(0.0F, 71.0F, 255.0F);
                     NwQaf = cnP(128.0F, 205.0F, 255.0F);
                     JTHGB = cnP(88.0F, 86.0F, 214.0F);
                     NiWiU = cnP(255.0F, 255.0F, 0.0F);
                     xeUrY = cnP(255.0F, 155.0F, 0.0F);
                     yHyOB = cnP(151.0F, 71.0F, 255.0F);
                     ibYER = cnP(255.0F, 45.0F, 85.0F);
                     UhgnI = cnR(0.0F, 0.0F, 0.0F, 0.0F);
                     sxpMj = hoGuU;
                     eJMAE = ByteBuffer.allocateDirect(4);
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "┬ÂH'\u0093├┐D├â(├╗├▒\u008bF(\u0095├ĺ[";
                  var5 = "┬ÂH'\u0093├┐D├â(├╗├▒\u008bF(\u0095├ĺ[".length();
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

   @Override
   public boolean equals(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mG.SITGr J
      // 03: ldc2_w 73839145099693
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mr.clW ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 25
      // 13: aload 1
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: instanceof sixtwo/mG
      // 28: aload 4
      // 2a: ifnonnull 4a
      // 2d: ifeq 42
      // 30: goto 37
      // 33: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 1
      // 38: checkcast sixtwo/mG
      // 3b: astore 5
      // 3d: aload 4
      // 3f: ifnull 4b
      // 42: bipush 0
      // 43: goto 4a
      // 46: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: ireturn
      // 4b: aload 0
      // 4c: invokevirtual sixtwo/mG.coh ()I
      // 4f: aload 4
      // 51: ifnonnull 6b
      // 54: aload 5
      // 56: invokevirtual sixtwo/mG.coh ()I
      // 59: if_icmpne 6e
      // 5c: goto 63
      // 5f: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: bipush 1
      // 64: goto 6b
      // 67: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: goto 6f
      // 6e: bipush 0
      // 6f: ireturn
   }

   @Override
   public int hashCode() {
      return Integer.hashCode(this.coh());
   }

   public float cos() {
      return this.FZDzG;
   }

   public float[] con() {
      return new float[]{this.xjQHn / 255.0F, this.FZDzG / 255.0F, this.YYINU / 255.0F, this.WkNmh / 255.0F};
   }

   private static MatchException coy(MatchException var0) {
      return var0;
   }

   private float[] col() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mG.SITGr J
      // 03: ldc2_w 103727974984112
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mr.clW ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/mG.ovptP [F
      // 10: aload 3
      // 11: ifnonnull 31
      // 14: ifnonnull 2d
      // 17: goto 1e
      // 1a: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: aload 0
      // 20: invokevirtual sixtwo/mG.com ()[F
      // 23: putfield sixtwo/mG.ovptP [F
      // 26: goto 2d
      // 29: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: getfield sixtwo/mG.ovptP [F
      // 31: areturn
   }

   public static mG cnQ(int var0) {
      int var1 = jk.bDp(var0);
      int var2 = jk.bDq(var0);
      int var3 = jk.bDr(var0);
      int var4 = jk.bDs(var0);
      return new mG(var1, var2, var3, var4);
   }

   public mG coa(float var1) {
      return new mG(this.xjQHn, this.FZDzG, this.YYINU, var1);
   }

   public mG cod() {
      return this.coe(0.7F);
   }

   public static mG cnP(float var0, float var1, float var2) {
      return new mG(var0, var1, var2);
   }

   public mG coe(float var1) {
      float var2 = Math.max(this.xjQHn * var1, 0.0F);
      float var3 = Math.max(this.FZDzG * var1, 0.0F);
      float var4 = Math.max(this.YYINU * var1, 0.0F);
      return new mG(var2, var3, var4, this.WkNmh);
   }

   public static void cov(int var0) {
      EyWoz = var0;
   }

   public static mG cnT(String var0) {
      long var1 = SITGr ^ 104426447025792L;
      int var3 = Integer.decode(var0);
      return cnP(
         var3 >> coC<"y">(31717, 1426579508902280532L ^ var1) & coC<"y">(965, 3718699133713171826L ^ var1),
         var3 >> coC<"y">(24932, 6656226671997069266L ^ var1) & coC<"y">(5525, 5110201517433836325L ^ var1),
         var3 & coC<"y">(5525, 5110201517433836325L ^ var1)
      );
   }

   public static float[] cnV(int param0, int param1, int param2, float[] param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/mG.SITGr J
      // 003: ldc2_w 106917368748664
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/mr.clW ()[I
      // 00c: astore 6
      // 00e: aload 3
      // 00f: aload 6
      // 011: ifnonnull 028
      // 014: ifnonnull 029
      // 017: goto 01e
      // 01a: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 3
      // 01f: newarray 6
      // 021: goto 028
      // 024: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 027: athrow
      // 028: astore 3
      // 029: iload 0
      // 02a: iload 1
      // 02b: invokestatic java/lang/Math.max (II)I
      // 02e: istore 10
      // 030: iload 2
      // 031: iload 10
      // 033: aload 6
      // 035: ifnonnull 047
      // 038: if_icmple 045
      // 03b: goto 042
      // 03e: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 041: athrow
      // 042: iload 2
      // 043: istore 10
      // 045: iload 0
      // 046: iload 1
      // 047: invokestatic java/lang/Math.min (II)I
      // 04a: istore 11
      // 04c: iload 2
      // 04d: aload 6
      // 04f: ifnonnull 063
      // 052: iload 11
      // 054: if_icmpge 061
      // 057: goto 05e
      // 05a: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: iload 2
      // 05f: istore 11
      // 061: iload 10
      // 063: i2f
      // 064: ldc 255.0
      // 066: fdiv
      // 067: fstore 9
      // 069: iload 10
      // 06b: aload 6
      // 06d: ifnonnull 086
      // 070: ifeq 092
      // 073: goto 07a
      // 076: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 079: athrow
      // 07a: iload 10
      // 07c: iload 11
      // 07e: isub
      // 07f: goto 086
      // 082: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 085: athrow
      // 086: i2f
      // 087: iload 10
      // 089: i2f
      // 08a: fdiv
      // 08b: fstore 8
      // 08d: aload 6
      // 08f: ifnull 095
      // 092: fconst_0
      // 093: fstore 8
      // 095: fload 8
      // 097: fconst_0
      // 098: fcmpl
      // 099: aload 6
      // 09b: ifnonnull 0bb
      // 09e: ifne 0b0
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a7: athrow
      // 0a8: fconst_0
      // 0a9: fstore 7
      // 0ab: aload 6
      // 0ad: ifnull 144
      // 0b0: iload 10
      // 0b2: iload 0
      // 0b3: isub
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: i2f
      // 0bc: iload 10
      // 0be: iload 11
      // 0c0: isub
      // 0c1: i2f
      // 0c2: fdiv
      // 0c3: fstore 12
      // 0c5: iload 10
      // 0c7: iload 1
      // 0c8: isub
      // 0c9: i2f
      // 0ca: iload 10
      // 0cc: iload 11
      // 0ce: isub
      // 0cf: i2f
      // 0d0: fdiv
      // 0d1: fstore 13
      // 0d3: iload 10
      // 0d5: iload 2
      // 0d6: isub
      // 0d7: i2f
      // 0d8: iload 10
      // 0da: iload 11
      // 0dc: isub
      // 0dd: i2f
      // 0de: fdiv
      // 0df: fstore 14
      // 0e1: iload 0
      // 0e2: iload 10
      // 0e4: aload 6
      // 0e6: ifnonnull 109
      // 0e9: if_icmpne 0ff
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: fload 14
      // 0f5: fload 13
      // 0f7: fsub
      // 0f8: fstore 7
      // 0fa: aload 6
      // 0fc: ifnull 124
      // 0ff: iload 1
      // 100: iload 10
      // 102: goto 109
      // 105: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 108: athrow
      // 109: if_icmpne 11a
      // 10c: fconst_2
      // 10d: fload 12
      // 10f: fadd
      // 110: fload 14
      // 112: fsub
      // 113: fstore 7
      // 115: aload 6
      // 117: ifnull 124
      // 11a: ldc 4.0
      // 11c: fload 13
      // 11e: fadd
      // 11f: fload 12
      // 121: fsub
      // 122: fstore 7
      // 124: fload 7
      // 126: ldc 6.0
      // 128: fdiv
      // 129: fstore 7
      // 12b: aload 6
      // 12d: ifnonnull 153
      // 130: fload 7
      // 132: fconst_0
      // 133: fcmpg
      // 134: ifge 144
      // 137: goto 13e
      // 13a: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13d: athrow
      // 13e: fload 7
      // 140: fconst_1
      // 141: fadd
      // 142: fstore 7
      // 144: aload 3
      // 145: bipush 0
      // 146: fload 7
      // 148: fastore
      // 149: aload 3
      // 14a: bipush 1
      // 14b: fload 8
      // 14d: fastore
      // 14e: aload 3
      // 14f: bipush 2
      // 150: fload 9
      // 152: fastore
      // 153: aload 3
      // 154: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 157: ifnonnull 167
      // 15a: bipush 3
      // 15b: newarray 10
      // 15d: invokestatic sixtwo/mr.clV ([I)V
      // 160: goto 167
      // 163: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 166: athrow
      // 167: areturn
   }

   public static mG cnR(float var0, float var1, float var2, float var3) {
      return new mG(var0, var1, var2, var3);
   }

   public mG cnZ(float var1) {
      return new mG(this.xjQHn, this.FZDzG, var1, this.WkNmh);
   }

   public mG cnY(float var1) {
      return new mG(this.xjQHn, var1, this.YYINU, this.WkNmh);
   }

   public mG coc(mG var1, float var2) {
      var2 = Math.min(1.0F, Math.max(0.0F, var2));
      return new mG(
         mZ.csl(this.cor(), var1.cor(), var2), mZ.csl(this.cos(), var1.cos(), var2), mZ.csl(this.cot(), var1.cot(), var2), mZ.csl(this.cou(), var1.cou(), var2)
      );
   }

   public float cok() {
      return this.col()[1];
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public static mG cnS(float var0, float var1, float var2) {
      long var3 = SITGr ^ 94785707059028L;
      int[] var10000 = mr.clW();
      int var6 = 0;
      int[] var5 = var10000;
      int var7 = 0;
      int var8 = 0;

      float var10001;
      label74: {
         label81: {
            try {
               var18 = var1;
               var10001 = 0.0F;
               if (var5 != null) {
                  break label74;
               }

               if (var1 != 0.0F) {
                  break label81;
               }
            } catch (MatchException var17) {
               throw coy(var17);
            }

            var6 = var7 = var8 = (int)(var2 * 255.0F + 0.5F);

            try {
               if (var5 == null) {
                  return cnQ(
                     coC<"y">(27913, 4817312303983999589L ^ var3)
                        | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                        | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                        | var8
                  );
               }
            } catch (MatchException var16) {
               throw coy(var16);
            }
         }

         try {
            var18 = var0 - (float)Math.floor(var0);
            var10001 = 6.0F;
         } catch (MatchException var14) {
            throw coy(var14);
         }
      }

      float var9 = var18 * var10001;
      float var10 = var9 - (float)Math.floor(var9);
      float var11 = var2 * (1.0F - var1);
      float var12 = var2 * (1.0F - var1 * var10);
      float var13 = var2 * (1.0F - var1 * (1.0F - var10));

      label60: {
         label59: {
            label58: {
               label57: {
                  label56: {
                     try {
                        int var19 = (int)var9;
                        if (var5 != null) {
                           return cnQ(var19);
                        }

                        switch (var19) {
                           case 0:
                              break;
                           case 1:
                              break label56;
                           case 2:
                              break label57;
                           case 3:
                              break label58;
                           case 4:
                              break label59;
                           case 5:
                              break label60;
                           default:
                              return cnQ(
                                 coC<"y">(27913, 4817312303983999589L ^ var3)
                                    | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                                    | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                                    | var8
                              );
                        }
                     } catch (MatchException var15) {
                        throw coy(var15);
                     }

                     var6 = (int)(var2 * 255.0F + 0.5F);
                     var7 = (int)(var13 * 255.0F + 0.5F);
                     var8 = (int)(var11 * 255.0F + 0.5F);
                     if (var5 == null) {
                        return cnQ(
                           coC<"y">(27913, 4817312303983999589L ^ var3)
                              | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                              | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                              | var8
                        );
                     }
                  }

                  var6 = (int)(var12 * 255.0F + 0.5F);
                  var7 = (int)(var2 * 255.0F + 0.5F);
                  var8 = (int)(var11 * 255.0F + 0.5F);
                  if (var5 == null) {
                     return cnQ(
                        coC<"y">(27913, 4817312303983999589L ^ var3)
                           | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                           | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                           | var8
                     );
                  }
               }

               var6 = (int)(var11 * 255.0F + 0.5F);
               var7 = (int)(var2 * 255.0F + 0.5F);
               var8 = (int)(var13 * 255.0F + 0.5F);
               if (var5 == null) {
                  return cnQ(
                     coC<"y">(27913, 4817312303983999589L ^ var3)
                        | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                        | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                        | var8
                  );
               }
            }

            var6 = (int)(var11 * 255.0F + 0.5F);
            var7 = (int)(var12 * 255.0F + 0.5F);
            var8 = (int)(var2 * 255.0F + 0.5F);
            if (var5 == null) {
               return cnQ(
                  coC<"y">(27913, 4817312303983999589L ^ var3)
                     | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                     | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                     | var8
               );
            }
         }

         var6 = (int)(var13 * 255.0F + 0.5F);
         var7 = (int)(var11 * 255.0F + 0.5F);
         var8 = (int)(var2 * 255.0F + 0.5F);
         if (var5 == null) {
            return cnQ(
               coC<"y">(27913, 4817312303983999589L ^ var3)
                  | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
                  | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
                  | var8
            );
         }
      }

      var6 = (int)(var2 * 255.0F + 0.5F);
      var7 = (int)(var11 * 255.0F + 0.5F);
      var8 = (int)(var12 * 255.0F + 0.5F);
      return cnQ(
         coC<"y">(27913, 4817312303983999589L ^ var3)
            | var6 << coC<"y">(31717, 1426570492270685312L ^ var3)
            | var7 << coC<"y">(24932, 6656217071019111942L ^ var3)
            | var8
      );
   }

   private static CallSite coC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("coB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mG" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public static int cnU(float var0, float var1, float var2) {
      long var3 = SITGr ^ 76710289469772L;
      int var6 = 0;
      int[] var10000 = mr.clW();
      int var7 = 0;
      int[] var5 = var10000;
      int var8 = 0;

      float var10001;
      label74: {
         label81: {
            try {
               var18 = var1;
               var10001 = 0.0F;
               if (var5 != null) {
                  break label74;
               }

               if (var1 != 0.0F) {
                  break label81;
               }
            } catch (MatchException var17) {
               throw coy(var17);
            }

            var6 = var7 = var8 = (int)(var2 * 255.0F + 0.5F);

            try {
               if (var5 == null) {
                  return coC<"y">(3097, 8533461138107207009L ^ var3)
                     | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
                     | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
                     | var8;
               }
            } catch (MatchException var16) {
               throw coy(var16);
            }
         }

         try {
            var18 = var0 - (float)Math.floor(var0);
            var10001 = 6.0F;
         } catch (MatchException var14) {
            throw coy(var14);
         }
      }

      float var9 = var18 * var10001;
      float var10 = var9 - (float)Math.floor(var9);
      float var11 = var2 * (1.0F - var1);
      float var12 = var2 * (1.0F - var1 * var10);
      float var13 = var2 * (1.0F - var1 * (1.0F - var10));

      label60: {
         label59: {
            label58: {
               label57: {
                  label56: {
                     try {
                        int var19 = (int)var9;
                        if (var5 != null) {
                           return var19;
                        }

                        switch (var19) {
                           case 0:
                              break;
                           case 1:
                              break label56;
                           case 2:
                              break label57;
                           case 3:
                              break label58;
                           case 4:
                              break label59;
                           case 5:
                              break label60;
                           default:
                              return coC<"y">(3097, 8533461138107207009L ^ var3)
                                 | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
                                 | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
                                 | var8;
                        }
                     } catch (MatchException var15) {
                        throw coy(var15);
                     }

                     var6 = (int)(var2 * 255.0F + 0.5F);
                     var7 = (int)(var13 * 255.0F + 0.5F);
                     var8 = (int)(var11 * 255.0F + 0.5F);
                     if (var5 == null) {
                        return coC<"y">(3097, 8533461138107207009L ^ var3)
                           | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
                           | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
                           | var8;
                     }
                  }

                  var6 = (int)(var12 * 255.0F + 0.5F);
                  var7 = (int)(var2 * 255.0F + 0.5F);
                  var8 = (int)(var11 * 255.0F + 0.5F);
                  if (var5 == null) {
                     return coC<"y">(3097, 8533461138107207009L ^ var3)
                        | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
                        | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
                        | var8;
                  }
               }

               var6 = (int)(var11 * 255.0F + 0.5F);
               var7 = (int)(var2 * 255.0F + 0.5F);
               var8 = (int)(var13 * 255.0F + 0.5F);
               if (var5 == null) {
                  return coC<"y">(3097, 8533461138107207009L ^ var3)
                     | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
                     | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
                     | var8;
               }
            }

            var6 = (int)(var11 * 255.0F + 0.5F);
            var7 = (int)(var12 * 255.0F + 0.5F);
            var8 = (int)(var2 * 255.0F + 0.5F);
            if (var5 == null) {
               return coC<"y">(3097, 8533461138107207009L ^ var3)
                  | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
                  | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
                  | var8;
            }
         }

         var6 = (int)(var13 * 255.0F + 0.5F);
         var7 = (int)(var11 * 255.0F + 0.5F);
         var8 = (int)(var2 * 255.0F + 0.5F);
         if (var5 == null) {
            return coC<"y">(3097, 8533461138107207009L ^ var3)
               | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
               | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
               | var8;
         }
      }

      var6 = (int)(var2 * 255.0F + 0.5F);
      var7 = (int)(var11 * 255.0F + 0.5F);
      var8 = (int)(var12 * 255.0F + 0.5F);
      return coC<"y">(3097, 8533461138107207009L ^ var3)
         | var6 << coC<"y">(9171, 4613309662125499052L ^ var3)
         | var7 << coC<"y">(30857, 7821173852076177904L ^ var3)
         | var8;
   }

   public float cot() {
      return this.YYINU;
   }

   private float[] com() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/mG.SITGr J
      // 003: ldc2_w 18409743815041
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: getfield sixtwo/mG.xjQHn F
      // 00c: ldc 255.0
      // 00e: fdiv
      // 00f: fstore 4
      // 011: invokestatic sixtwo/mr.clW ()[I
      // 014: aload 0
      // 015: getfield sixtwo/mG.FZDzG F
      // 018: ldc 255.0
      // 01a: fdiv
      // 01b: fstore 5
      // 01d: aload 0
      // 01e: getfield sixtwo/mG.YYINU F
      // 021: ldc 255.0
      // 023: fdiv
      // 024: fstore 6
      // 026: fload 4
      // 028: fload 5
      // 02a: fload 6
      // 02c: invokestatic java/lang/Math.max (FF)F
      // 02f: invokestatic java/lang/Math.max (FF)F
      // 032: fstore 7
      // 034: fload 4
      // 036: fload 5
      // 038: fload 6
      // 03a: invokestatic java/lang/Math.min (FF)F
      // 03d: invokestatic java/lang/Math.min (FF)F
      // 040: fstore 8
      // 042: astore 3
      // 043: fload 7
      // 045: fload 8
      // 047: fsub
      // 048: fstore 9
      // 04a: fconst_0
      // 04b: fstore 10
      // 04d: fload 9
      // 04f: fconst_0
      // 050: fcmpl
      // 051: aload 3
      // 052: ifnonnull 0f3
      // 055: ifeq 0e4
      // 058: goto 05f
      // 05b: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: fload 7
      // 061: fload 4
      // 063: fcmpl
      // 064: aload 3
      // 065: ifnonnull 09e
      // 068: goto 06f
      // 06b: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: ifne 087
      // 072: goto 079
      // 075: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: fload 5
      // 07b: fload 6
      // 07d: fsub
      // 07e: fload 9
      // 080: fdiv
      // 081: fstore 10
      // 083: aload 3
      // 084: ifnull 0c5
      // 087: fload 7
      // 089: fload 5
      // 08b: aload 3
      // 08c: ifnonnull 0c2
      // 08f: goto 096
      // 092: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 095: athrow
      // 096: fcmpl
      // 097: goto 09e
      // 09a: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09d: athrow
      // 09e: ifne 0b1
      // 0a1: fload 6
      // 0a3: fload 4
      // 0a5: fsub
      // 0a6: fload 9
      // 0a8: fdiv
      // 0a9: fconst_2
      // 0aa: fadd
      // 0ab: fstore 10
      // 0ad: aload 3
      // 0ae: ifnull 0c5
      // 0b1: fload 4
      // 0b3: fload 5
      // 0b5: fsub
      // 0b6: fload 9
      // 0b8: fdiv
      // 0b9: ldc 4.0
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: fadd
      // 0c3: fstore 10
      // 0c5: fload 10
      // 0c7: ldc 6.0
      // 0c9: fdiv
      // 0ca: fstore 10
      // 0cc: fload 10
      // 0ce: fconst_0
      // 0cf: fcmpg
      // 0d0: aload 3
      // 0d1: ifnonnull 0f3
      // 0d4: ifge 0e4
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: fload 10
      // 0e0: fconst_1
      // 0e1: fadd
      // 0e2: fstore 10
      // 0e4: fload 7
      // 0e6: fconst_0
      // 0e7: aload 3
      // 0e8: ifnonnull 102
      // 0eb: fcmpl
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: ifne 0fe
      // 0f6: fconst_0
      // 0f7: goto 103
      // 0fa: invokestatic sixtwo/mG.coy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fd: athrow
      // 0fe: fload 9
      // 100: fload 7
      // 102: fdiv
      // 103: fstore 11
      // 105: fload 7
      // 107: fstore 12
      // 109: bipush 3
      // 10a: newarray 6
      // 10c: dup
      // 10d: bipush 0
      // 10e: fload 10
      // 110: fastore
      // 111: dup
      // 112: bipush 1
      // 113: fload 11
      // 115: fastore
      // 116: dup
      // 117: bipush 2
      // 118: fload 12
      // 11a: fastore
      // 11b: areturn
   }

   public float cor() {
      return this.xjQHn;
   }

   public mG cog(float var1) {
      float var2 = Math.min(this.xjQHn / var1, 255.0F);
      float var3 = Math.min(this.FZDzG / var1, 255.0F);
      float var4 = Math.min(this.YYINU / var1, 255.0F);
      return new mG(var2, var3, var4, this.WkNmh);
   }

   public float coj() {
      return this.col()[2];
   }

   private static int coA(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7877;
      if (MsXTk[var3] == null) {
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
         long var5 = QAIuI[var3];
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
         Object[] var9 = (Object[])nZyyJ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               nZyyJ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mG", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         MsXTk[var3] = var15;
      }

      return MsXTk[var3];
   }

   public static int cox() {
      int var0 = cow();

      try {
         return var0 == 0 ? 89 : 0;
      } catch (MatchException var1) {
         throw coy(var1);
      }
   }

   public boolean cnW() {
      long var1 = SITGr ^ 76459021579522L;
      int[] var3 = mr.clW();

      try {
         float var5;
         int var10000 = (var5 = this.WkNmh - 0.0F) == 0.0F ? 0 : (var5 < 0.0F ? -1 : 1);
         if (var3 != null) {
            return (boolean)var10000;
         }

         if (var10000 <= 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw coy(var4);
      }

      return (boolean)0;
   }

   public float cou() {
      return this.WkNmh;
   }

   public mG cof() {
      return this.cog(0.7F);
   }

   public float coi() {
      return this.col()[0];
   }

   public String coo() {
      long var1 = SITGr ^ 123766043754605L;
      return String.format(jvVIY, Math.round(this.WkNmh), Math.round(this.xjQHn), Math.round(this.FZDzG), Math.round(this.YYINU));
   }

   public static mG cop(float var0, float var1) {
      long var2 = SITGr ^ 97168814809868L;
      eJMAE.clear();
      lT.ciQ().readPixel((int)var0, (int)var1, eJMAE);
      int var4 = eJMAE.get() & coC<"y">(5525, 5110199723402806953L ^ var2);
      int var5 = eJMAE.get() & coC<"y">(5525, 5110199723402806953L ^ var2);
      int var6 = eJMAE.get() & coC<"y">(5525, 5110199723402806953L ^ var2);
      mG var7 = new mG(var4, var5, var6);
      sxpMj = var7;
      return var7;
   }

   public static mG coq() {
      return sxpMj;
   }

   private static String coz(byte[] var0) {
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

   private static int coB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = coA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public mG cnX(float var1) {
      return new mG(var1, this.FZDzG, this.YYINU, this.WkNmh);
   }

   public int coh() {
      long var1 = SITGr ^ 77673506382541L;
      int var3 = Math.round(this.WkNmh);
      int var4 = Math.round(this.xjQHn);
      int var5 = Math.round(this.FZDzG);
      int var6 = Math.round(this.YYINU);
      return (var3 & coC<"y">(5525, 5110192950726903656L ^ var1)) << coC<"y">(31181, 4582945137304087346L ^ var1)
         | (var4 & coC<"y">(5525, 5110192950726903656L ^ var1)) << coC<"y">(31717, 1426553511054584089L ^ var1)
         | (var5 & coC<"y">(5525, 5110192950726903656L ^ var1)) << coC<"y">(24932, 6656235282726892447L ^ var1)
         | var6 & coC<"y">(5525, 5110192950726903656L ^ var1);
   }

   public static int cow() {
      return EyWoz;
   }
}
