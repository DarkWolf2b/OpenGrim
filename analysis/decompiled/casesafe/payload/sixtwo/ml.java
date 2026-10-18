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
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_3532;
import net.minecraft.class_4184;
import net.minecraft.class_4587;

public class ml {
   private class_243 lkXRd;
   private class_243 dLTzU;
   private final class_243 FykKC;
   private final class_243 KCxUk;
   private final float IuXHJ;
   private final float cnPZu;
   private final float PgeQF;
   private final mG udGdm;
   private final long zwlqH;
   private final long FQoIN;
   private final long uBxPJ;
   private final long KGTDW;
   private final float ONXuz;
   private final float TXMLT;
   private final float NOetf;
   private final float cjpBa;
   private final float Ndtrs;
   private final float SMirh;
   private final float oguBV;
   private final float zkkML;
   private final float FUCeB;
   private final float doUzS;
   private long oTvTP;
   private int ZmQqB;
   private static final long FTbXO = gb.aYR(-1319155063296182793L, 4469899127024224993L, MethodHandles.lookup().lookupClass()).a(243541798435071L);
   private static final long[] YCHoM;
   private static final Long[] plVos;
   private static final Map CPIRa = new HashMap(13);

   public ml(class_243 var1, class_243 var2, float var3, float var4, long var5, long var7, long var9, mG var11) {
      long var12 = FTbXO ^ 88173386788896L;
      super();
      this.lkXRd = var1;
      this.dLTzU = var1;
      this.FykKC = var1;
      this.KCxUk = var2;
      this.IuXHJ = var3;
      this.PgeQF = var4;
      this.zwlqH = var5;
      this.FQoIN = var7;
      this.uBxPJ = var9;
      this.udGdm = var11;
      this.KGTDW = System.currentTimeMillis();
      this.cnPZu = clk(0.0F, (float) (Math.PI * 2));
      this.ONXuz = clk(0.012F, 0.03F);
      int var10000 = mm.clx();
      this.TXMLT = clk(0.012F, 0.03F);
      this.NOetf = clk(0.012F, 0.03F);
      this.cjpBa = clk(0.005F, 0.015F);
      this.Ndtrs = clk(0.005F, 0.015F);
      int var14 = var10000;

      try {
         this.SMirh = clk(0.005F, 0.015F);
         this.oguBV = clk(0.0F, (float) (Math.PI * 2));
         this.zkkML = clk(0.0F, (float) (Math.PI * 2));
         this.FUCeB = clk(0.0F, (float) (Math.PI * 2));
         this.doUzS = clk(0.4F, 0.7F);
         if (iS.bwL() == null) {
            mm.clv(++var14);
         }
      } catch (MatchException var15) {
         throw cll(var15);
      }
   }

   static {
      long var0 = FTbXO ^ 14480599787836L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "┬Ą=├ž├░\u0093n\u00909\u009c├Čb├ž$_┬Ş├ö";
      int var7 = "┬Ą=├ž├░\u0093n\u00909\u009c├Čb├ž$_┬Ş├ö".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
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
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      YCHoM = var8;
      plVos = new Long[2];
   }

   private static long cln(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = clm(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   public void clh(class_287 param1, class_4587 param2, class_4184 param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ml.FTbXO J
      // 03: ldc2_w 129504394522488
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/mm.clw ()I
      // 0c: aload 0
      // 0d: invokevirtual sixtwo/ml.clj ()F
      // 10: fstore 8
      // 12: istore 7
      // 14: iload 7
      // 16: ifne 43
      // 19: fload 8
      // 1b: ldc 0.005
      // 1d: fcmpg
      // 1e: ifge 2d
      // 21: goto 28
      // 24: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: return
      // 29: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 2
      // 2e: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 31: aload 2
      // 32: aload 0
      // 33: fload 4
      // 35: invokevirtual sixtwo/ml.cli (F)Lnet/minecraft/class_243;
      // 38: invokestatic sixtwo/jI.bIs (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;)V
      // 3b: aload 2
      // 3c: aload 3
      // 3d: invokevirtual net/minecraft/class_4184.method_23767 ()Lorg/joml/Quaternionf;
      // 40: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 43: aload 2
      // 44: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 47: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 4a: astore 9
      // 4c: aload 0
      // 4d: getfield sixtwo/ml.PgeQF F
      // 50: ldc 0.5
      // 52: fmul
      // 53: fstore 10
      // 55: aload 0
      // 56: getfield sixtwo/ml.udGdm Lsixtwo/mG;
      // 59: ldc 255.0
      // 5b: fload 8
      // 5d: fmul
      // 5e: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 61: invokevirtual sixtwo/mG.coh ()I
      // 64: istore 11
      // 66: aload 1
      // 67: aload 9
      // 69: fload 10
      // 6b: fneg
      // 6c: fload 10
      // 6e: fneg
      // 6f: fconst_0
      // 70: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 73: fconst_0
      // 74: fconst_0
      // 75: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 7a: iload 11
      // 7c: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 81: pop
      // 82: aload 1
      // 83: aload 9
      // 85: fload 10
      // 87: fload 10
      // 89: fneg
      // 8a: fconst_0
      // 8b: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 8e: fconst_1
      // 8f: fconst_0
      // 90: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 95: iload 11
      // 97: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 9c: pop
      // 9d: aload 1
      // 9e: aload 9
      // a0: fload 10
      // a2: fload 10
      // a4: fconst_0
      // a5: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // a8: fconst_1
      // a9: fconst_1
      // aa: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // af: iload 11
      // b1: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // b6: pop
      // b7: aload 1
      // b8: aload 9
      // ba: fload 10
      // bc: fneg
      // bd: fload 10
      // bf: fconst_0
      // c0: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // c3: fconst_0
      // c4: fconst_1
      // c5: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // ca: iload 11
      // cc: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // d1: pop
      // d2: aload 2
      // d3: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // d6: return
   }

   public boolean clg() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ml.FTbXO J
      // 003: ldc2_w 131731333722943
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/mm.clw ()I
      // 00b: aload 0
      // 00c: aload 0
      // 00d: getfield sixtwo/ml.lkXRd Lnet/minecraft/class_243;
      // 010: putfield sixtwo/ml.dLTzU Lnet/minecraft/class_243;
      // 013: istore 3
      // 014: aload 0
      // 015: invokestatic java/lang/System.currentTimeMillis ()J
      // 018: aload 0
      // 019: getfield sixtwo/ml.KGTDW J
      // 01c: lsub
      // 01d: putfield sixtwo/ml.oTvTP J
      // 020: aload 0
      // 021: dup
      // 022: getfield sixtwo/ml.ZmQqB I
      // 025: dup_x1
      // 026: bipush 1
      // 027: iadd
      // 028: putfield sixtwo/ml.ZmQqB I
      // 02b: i2f
      // 02c: fstore 4
      // 02e: aload 0
      // 02f: getfield sixtwo/ml.oTvTP J
      // 032: iload 3
      // 033: ifne 050
      // 036: aload 0
      // 037: getfield sixtwo/ml.zwlqH J
      // 03a: lcmp
      // 03b: ifge 08d
      // 03e: goto 045
      // 041: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 044: athrow
      // 045: aload 0
      // 046: getfield sixtwo/ml.oTvTP J
      // 049: goto 050
      // 04c: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04f: athrow
      // 050: l2f
      // 051: aload 0
      // 052: getfield sixtwo/ml.zwlqH J
      // 055: l2f
      // 056: fdiv
      // 057: fstore 6
      // 059: fload 6
      // 05b: fload 6
      // 05d: fmul
      // 05e: ldc 3.0
      // 060: fconst_2
      // 061: fload 6
      // 063: fmul
      // 064: fsub
      // 065: fmul
      // 066: fstore 7
      // 068: fload 7
      // 06a: f2d
      // 06b: aload 0
      // 06c: getfield sixtwo/ml.doUzS F
      // 06f: f2d
      // 070: invokestatic java/lang/Math.pow (DD)D
      // 073: ldc2_w 3.141592653589793
      // 076: dmul
      // 077: invokestatic java/lang/Math.sin (D)D
      // 07a: d2f
      // 07b: fstore 5
      // 07d: iload 3
      // 07e: ifeq 090
      // 081: ldc "VuXHr"
      // 083: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 086: goto 08d
      // 089: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08c: athrow
      // 08d: fconst_0
      // 08e: fstore 5
      // 090: fload 5
      // 092: f2d
      // 093: ldc2_w 0.15
      // 096: dmul
      // 097: dstore 6
      // 099: fload 4
      // 09b: aload 0
      // 09c: getfield sixtwo/ml.ONXuz F
      // 09f: fmul
      // 0a0: aload 0
      // 0a1: getfield sixtwo/ml.oguBV F
      // 0a4: fadd
      // 0a5: f2d
      // 0a6: invokestatic java/lang/Math.sin (D)D
      // 0a9: ldc2_w 0.025
      // 0ac: dmul
      // 0ad: fload 4
      // 0af: aload 0
      // 0b0: getfield sixtwo/ml.cjpBa F
      // 0b3: fmul
      // 0b4: f2d
      // 0b5: aload 0
      // 0b6: getfield sixtwo/ml.oguBV F
      // 0b9: f2d
      // 0ba: ldc2_w 1.7
      // 0bd: dmul
      // 0be: dadd
      // 0bf: invokestatic java/lang/Math.sin (D)D
      // 0c2: ldc2_w 0.015
      // 0c5: dmul
      // 0c6: dadd
      // 0c7: dstore 8
      // 0c9: fload 4
      // 0cb: aload 0
      // 0cc: getfield sixtwo/ml.TXMLT F
      // 0cf: fmul
      // 0d0: aload 0
      // 0d1: getfield sixtwo/ml.zkkML F
      // 0d4: fadd
      // 0d5: f2d
      // 0d6: invokestatic java/lang/Math.sin (D)D
      // 0d9: ldc2_w 0.025
      // 0dc: dmul
      // 0dd: fload 4
      // 0df: aload 0
      // 0e0: getfield sixtwo/ml.Ndtrs F
      // 0e3: fmul
      // 0e4: f2d
      // 0e5: aload 0
      // 0e6: getfield sixtwo/ml.zkkML F
      // 0e9: f2d
      // 0ea: ldc2_w 1.7
      // 0ed: dmul
      // 0ee: dadd
      // 0ef: invokestatic java/lang/Math.sin (D)D
      // 0f2: ldc2_w 0.015
      // 0f5: dmul
      // 0f6: dadd
      // 0f7: dstore 10
      // 0f9: fload 4
      // 0fb: aload 0
      // 0fc: getfield sixtwo/ml.NOetf F
      // 0ff: fmul
      // 100: aload 0
      // 101: getfield sixtwo/ml.FUCeB F
      // 104: fadd
      // 105: f2d
      // 106: invokestatic java/lang/Math.sin (D)D
      // 109: ldc2_w 0.025
      // 10c: dmul
      // 10d: fload 4
      // 10f: aload 0
      // 110: getfield sixtwo/ml.SMirh F
      // 113: fmul
      // 114: f2d
      // 115: aload 0
      // 116: getfield sixtwo/ml.FUCeB F
      // 119: f2d
      // 11a: ldc2_w 1.7
      // 11d: dmul
      // 11e: dadd
      // 11f: invokestatic java/lang/Math.sin (D)D
      // 122: ldc2_w 0.015
      // 125: dmul
      // 126: dadd
      // 127: dstore 12
      // 129: aload 0
      // 12a: aload 0
      // 12b: getfield sixtwo/ml.FykKC Lnet/minecraft/class_243;
      // 12e: aload 0
      // 12f: getfield sixtwo/ml.KCxUk Lnet/minecraft/class_243;
      // 132: getfield net/minecraft/class_243.field_1352 D
      // 135: fload 5
      // 137: f2d
      // 138: dmul
      // 139: aload 0
      // 13a: getfield sixtwo/ml.IuXHJ F
      // 13d: f2d
      // 13e: dmul
      // 13f: dload 8
      // 141: dadd
      // 142: aload 0
      // 143: getfield sixtwo/ml.KCxUk Lnet/minecraft/class_243;
      // 146: getfield net/minecraft/class_243.field_1351 D
      // 149: fload 5
      // 14b: f2d
      // 14c: dmul
      // 14d: aload 0
      // 14e: getfield sixtwo/ml.IuXHJ F
      // 151: f2d
      // 152: dmul
      // 153: dload 6
      // 155: dadd
      // 156: dload 10
      // 158: dadd
      // 159: aload 0
      // 15a: getfield sixtwo/ml.KCxUk Lnet/minecraft/class_243;
      // 15d: getfield net/minecraft/class_243.field_1350 D
      // 160: fload 5
      // 162: f2d
      // 163: dmul
      // 164: aload 0
      // 165: getfield sixtwo/ml.IuXHJ F
      // 168: f2d
      // 169: dmul
      // 16a: dload 12
      // 16c: dadd
      // 16d: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 170: putfield sixtwo/ml.lkXRd Lnet/minecraft/class_243;
      // 173: aload 0
      // 174: getfield sixtwo/ml.oTvTP J
      // 177: aload 0
      // 178: getfield sixtwo/ml.uBxPJ J
      // 17b: lcmp
      // 17c: iload 3
      // 17d: ifne 18b
      // 180: iflt 18e
      // 183: goto 18a
      // 186: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 189: athrow
      // 18a: bipush 1
      // 18b: goto 18f
      // 18e: bipush 0
      // 18f: ireturn
   }

   private static MatchException cll(MatchException var0) {
      return var0;
   }

   public float clj() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ml.FTbXO J
      // 03: ldc2_w 21192610107608
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mm.clx ()I
      // 0b: sipush 11388
      // 0e: ldc2_w 9022193099628950842
      // 11: lload 1
      // 12: lxor
      // 13: invokedynamic f (IJ)J bsm=sixtwo/ml.clo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 18: aload 0
      // 19: getfield sixtwo/ml.zwlqH J
      // 1c: sipush 21204
      // 1f: ldc2_w 8474110163862604691
      // 22: lload 1
      // 23: lxor
      // 24: invokedynamic f (IJ)J bsm=sixtwo/ml.clo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 29: ldiv
      // 2a: invokestatic java/lang/Math.max (JJ)J
      // 2d: lstore 4
      // 2f: istore 3
      // 30: aload 0
      // 31: getfield sixtwo/ml.uBxPJ J
      // 34: aload 0
      // 35: getfield sixtwo/ml.FQoIN J
      // 38: lsub
      // 39: lstore 6
      // 3b: aload 0
      // 3c: getfield sixtwo/ml.oTvTP J
      // 3f: lload 4
      // 41: lcmp
      // 42: iload 3
      // 43: ifeq 67
      // 46: ifge 5e
      // 49: goto 50
      // 4c: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: aload 0
      // 51: getfield sixtwo/ml.oTvTP J
      // 54: l2f
      // 55: lload 4
      // 57: l2f
      // 58: fdiv
      // 59: freturn
      // 5a: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: getfield sixtwo/ml.oTvTP J
      // 62: aload 0
      // 63: getfield sixtwo/ml.FQoIN J
      // 66: lcmp
      // 67: iload 3
      // 68: ifeq 7f
      // 6b: ifge 7b
      // 6e: goto 75
      // 71: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: fconst_1
      // 76: freturn
      // 77: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: lload 6
      // 7d: lconst_0
      // 7e: lcmp
      // 7f: ifle aa
      // 82: fconst_1
      // 83: aload 0
      // 84: getfield sixtwo/ml.oTvTP J
      // 87: aload 0
      // 88: getfield sixtwo/ml.FQoIN J
      // 8b: lsub
      // 8c: l2f
      // 8d: lload 6
      // 8f: l2f
      // 90: fdiv
      // 91: invokestatic java/lang/Math.min (FF)F
      // 94: fstore 8
      // 96: fconst_1
      // 97: fload 8
      // 99: fsub
      // 9a: fstore 9
      // 9c: fload 9
      // 9e: fload 9
      // a0: fmul
      // a1: ldc 3.0
      // a3: fconst_2
      // a4: fload 9
      // a6: fmul
      // a7: fsub
      // a8: fmul
      // a9: freturn
      // aa: fconst_0
      // ab: freturn
   }

   private static CallSite clo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cln".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ml" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static float clk(float param0, float param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ml.FTbXO J
      // 03: ldc2_w 97194475284405
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mm.clw ()I
      // 0b: istore 4
      // 0d: fload 1
      // 0e: iload 4
      // 10: ifne 2d
      // 13: fload 0
      // 14: fcmpg
      // 15: ifgt 25
      // 18: goto 1f
      // 1b: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: fload 0
      // 20: freturn
      // 21: invokestatic sixtwo/ml.cll (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: fload 0
      // 26: f2d
      // 27: fload 1
      // 28: f2d
      // 29: invokestatic sixtwo/mU.cpP (DD)D
      // 2c: d2f
      // 2d: freturn
   }

   public class_243 cli(float var1) {
      double var2 = class_3532.method_16436(var1, this.dLTzU.field_1352, this.lkXRd.field_1352);
      double var4 = class_3532.method_16436(var1, this.dLTzU.field_1351, this.lkXRd.field_1351);
      double var6 = class_3532.method_16436(var1, this.dLTzU.field_1350, this.lkXRd.field_1350);
      return new class_243(var2, var4, var6);
   }

   private static long clm(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28992;
      if (plVos[var3] == null) {
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
         long var5 = YCHoM[var3];
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
         Object[] var9 = (Object[])CPIRa.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               CPIRa.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ml", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         plVos[var3] = var15;
      }

      return plVos[var3];
   }
}
