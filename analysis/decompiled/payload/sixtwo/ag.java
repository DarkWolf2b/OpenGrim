package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.function.Function;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_156;
import net.minecraft.class_3532;
import net.minecraft.class_591;

public class ag extends az {
   private static final float sbZWT = 2.125F;
   private static final float qccLr = -0.53125F;
   private static final float RjGUj = 1.515625F;
   private static final float YhWDg = 0.28125F;
   private static final float Uofge = 0.515625F;
   private static final float vlFnX = 0.453125F;
   private String cKAzP;
   private class_591 varoa;
   private class_591 QSyUZ;
   private final ag$rR VSKnI;
   private boolean FiFgY;
   Function<String, ag$rQ> ZYZql = param0 -> {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ag.WkMeU J
      // 03: ldc2_w 125929459513409
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/ag$rQ.cachedSkins Ljava/util/Map;
      // 0e: aload 0
      // 0f: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 14: checkcast net/minecraft/class_2960
      // 17: astore 4
      // 19: astore 3
      // 1a: aload 4
      // 1c: aload 3
      // 1d: ifnull 61
      // 20: ifnonnull 5f
      // 23: goto 2a
      // 26: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: aload 3
      // 31: ifnull 52
      // 34: goto 3b
      // 37: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: ifnull 5f
      // 3e: goto 45
      // 41: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 48: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 4b: goto 52
      // 4e: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: invokevirtual net/minecraft/class_746.method_52814 ()Lnet/minecraft/class_8685;
      // 55: invokevirtual net/minecraft/class_8685.comp_1626 ()Lnet/minecraft/class_12079$class_12081;
      // 58: invokeinterface net/minecraft/class_12079$class_12081.comp_3627 ()Lnet/minecraft/class_2960; 1
      // 5d: astore 4
      // 5f: aload 4
      // 61: aload 3
      // 62: ifnull 81
      // 65: ifnonnull 83
      // 68: goto 6f
      // 6b: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: invokestatic net/minecraft/class_1068.method_62620 ()Lnet/minecraft/class_8685;
      // 72: invokevirtual net/minecraft/class_8685.comp_1626 ()Lnet/minecraft/class_12079$class_12081;
      // 75: invokeinterface net/minecraft/class_12079$class_12081.comp_3627 ()Lnet/minecraft/class_2960; 1
      // 7a: goto 81
      // 7d: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: astore 4
      // 83: new sixtwo/ag$rQ
      // 86: dup
      // 87: aload 4
      // 89: bipush 1
      // 8a: invokespecial sixtwo/ag$rQ.<init> (Lnet/minecraft/class_2960;Z)V
      // 8d: areturn
   };
   float EnbkJ = -5.0F;
   float Vinex = 30.0F;
   private static final long WkMeU = gb.aYR(-2652524297955319212L, -8454400431850127096L, MethodHandles.lookup().lookupClass()).a(258803647282649L);
   private static final long wxrIA;

   public ag(String var1, ag$rR var2) {
      this.cKAzP = var1;
      this.VSKnI = var2;
   }

   static {
      long var0 = WkMeU ^ 105779997228872L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 8043091998414103728L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      wxrIA = var7;
   }

   public lc nl(lC param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ag.WkMeU J
      // 003: ldc2_w 122115208554014
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 00b: astore 5
      // 00d: aload 1
      // 00e: ifnull 02b
      // 011: aload 0
      // 012: aload 5
      // 014: ifnull 041
      // 017: goto 01e
      // 01a: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: invokevirtual sixtwo/ag.tf ()Z
      // 021: ifne 034
      // 024: goto 02b
      // 027: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02a: athrow
      // 02b: aload 0
      // 02c: invokevirtual sixtwo/ag.td ()Lsixtwo/lc;
      // 02f: areturn
      // 030: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 033: athrow
      // 034: aload 0
      // 035: getfield sixtwo/ag.ZYZql Ljava/util/function/Function;
      // 038: aload 0
      // 039: getfield sixtwo/ag.cKAzP Ljava/lang/String;
      // 03c: invokeinterface java/util/function/Function.apply (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 041: checkcast sixtwo/ag$rQ
      // 044: astore 6
      // 046: aload 6
      // 048: ifnonnull 054
      // 04b: aload 0
      // 04c: invokevirtual sixtwo/ag.td ()Lsixtwo/lc;
      // 04f: areturn
      // 050: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 053: athrow
      // 054: aload 0
      // 055: getfield sixtwo/ag.WjISQ F
      // 058: ldc 2.125
      // 05a: fdiv
      // 05b: fstore 7
      // 05d: aload 6
      // 05f: invokevirtual sixtwo/ag$rQ.slim ()Z
      // 062: ifeq 06e
      // 065: ldc 0.453125
      // 067: goto 070
      // 06a: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06d: athrow
      // 06e: ldc 0.515625
      // 070: fstore 8
      // 072: aload 1
      // 073: invokevirtual sixtwo/lC.cfc ()Lorg/joml/Matrix3x2fStack;
      // 076: invokestatic sixtwo/jI.bIl (Lorg/joml/Matrix3x2fc;)Lorg/joml/Matrix4f;
      // 079: astore 9
      // 07b: aload 9
      // 07d: aload 0
      // 07e: getfield sixtwo/ag.MCnYt F
      // 081: aload 0
      // 082: getfield sixtwo/ag.BcpIo F
      // 085: fconst_2
      // 086: fdiv
      // 087: fadd
      // 088: aload 0
      // 089: getfield sixtwo/ag.pNyTQ F
      // 08c: aload 0
      // 08d: getfield sixtwo/ag.WjISQ F
      // 090: fadd
      // 091: fconst_0
      // 092: invokevirtual org/joml/Matrix4f.translate (FFF)Lorg/joml/Matrix4f;
      // 095: pop
      // 096: aload 9
      // 098: fload 7
      // 09a: fload 7
      // 09c: fload 7
      // 09e: invokevirtual org/joml/Matrix4f.scale (FFF)Lorg/joml/Matrix4f;
      // 0a1: pop
      // 0a2: aload 9
      // 0a4: fconst_0
      // 0a5: ldc -0.0625
      // 0a7: fconst_0
      // 0a8: invokevirtual org/joml/Matrix4f.translate (FFF)Lorg/joml/Matrix4f;
      // 0ab: pop
      // 0ac: aload 5
      // 0ae: ifnull 0ff
      // 0b1: iload 2
      // 0b2: ifne 0eb
      // 0b5: goto 0bc
      // 0b8: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bb: athrow
      // 0bc: aload 9
      // 0be: getstatic net/minecraft/class_7833.field_40714 Lnet/minecraft/class_7833;
      // 0c1: aload 0
      // 0c2: getfield sixtwo/ag.EnbkJ F
      // 0c5: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 0ca: fconst_0
      // 0cb: ldc -1.0625
      // 0cd: fconst_0
      // 0ce: invokevirtual org/joml/Matrix4f.rotateAround (Lorg/joml/Quaternionfc;FFF)Lorg/joml/Matrix4f;
      // 0d1: pop
      // 0d2: aload 9
      // 0d4: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 0d7: aload 0
      // 0d8: getfield sixtwo/ag.Vinex F
      // 0db: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 0e0: invokevirtual org/joml/Matrix4f.rotate (Lorg/joml/Quaternionfc;)Lorg/joml/Matrix4f;
      // 0e3: pop
      // 0e4: goto 0eb
      // 0e7: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ea: athrow
      // 0eb: aload 9
      // 0ed: fconst_1
      // 0ee: fconst_1
      // 0ef: ldc -1.0
      // 0f1: invokevirtual org/joml/Matrix4f.scale (FFF)Lorg/joml/Matrix4f;
      // 0f4: pop
      // 0f5: aload 9
      // 0f7: fconst_0
      // 0f8: ldc -1.5
      // 0fa: fconst_0
      // 0fb: invokevirtual org/joml/Matrix4f.translate (FFF)Lorg/joml/Matrix4f;
      // 0fe: pop
      // 0ff: ldc Infinity
      // 101: fstore 10
      // 103: ldc Infinity
      // 105: fstore 11
      // 107: ldc -Infinity
      // 109: fstore 12
      // 10b: ldc -Infinity
      // 10d: fstore 13
      // 10f: bipush 2
      // 110: newarray 6
      // 112: dup
      // 113: bipush 0
      // 114: fload 8
      // 116: fneg
      // 117: fastore
      // 118: dup
      // 119: bipush 1
      // 11a: fload 8
      // 11c: fastore
      // 11d: astore 14
      // 11f: aload 14
      // 121: arraylength
      // 122: istore 15
      // 124: bipush 0
      // 125: istore 16
      // 127: iload 16
      // 129: iload 15
      // 12b: if_icmpge 1f1
      // 12e: aload 14
      // 130: iload 16
      // 132: faload
      // 133: fstore 17
      // 135: bipush 2
      // 136: newarray 6
      // 138: dup
      // 139: bipush 0
      // 13a: ldc -0.53125
      // 13c: fastore
      // 13d: dup
      // 13e: bipush 1
      // 13f: ldc 1.515625
      // 141: fastore
      // 142: astore 18
      // 144: aload 18
      // 146: arraylength
      // 147: istore 19
      // 149: bipush 0
      // 14a: aload 5
      // 14c: ifnull 1f6
      // 14f: istore 20
      // 151: iload 20
      // 153: iload 19
      // 155: if_icmpge 1e9
      // 158: aload 18
      // 15a: iload 20
      // 15c: faload
      // 15d: fstore 21
      // 15f: bipush 2
      // 160: newarray 6
      // 162: dup
      // 163: bipush 0
      // 164: ldc -0.28125
      // 166: fastore
      // 167: dup
      // 168: bipush 1
      // 169: ldc 0.28125
      // 16b: fastore
      // 16c: astore 22
      // 16e: aload 22
      // 170: arraylength
      // 171: istore 23
      // 173: bipush 0
      // 174: aload 5
      // 176: ifnull 129
      // 179: istore 24
      // 17b: iload 24
      // 17d: iload 23
      // 17f: if_icmpge 1e1
      // 182: aload 22
      // 184: iload 24
      // 186: faload
      // 187: fstore 25
      // 189: aload 9
      // 18b: fload 17
      // 18d: fload 21
      // 18f: fload 25
      // 191: new org/joml/Vector3f
      // 194: dup
      // 195: invokespecial org/joml/Vector3f.<init> ()V
      // 198: invokevirtual org/joml/Matrix4f.transformPosition (FFFLorg/joml/Vector3f;)Lorg/joml/Vector3f;
      // 19b: astore 26
      // 19d: fload 10
      // 19f: aload 26
      // 1a1: getfield org/joml/Vector3f.x F
      // 1a4: invokestatic java/lang/Math.min (FF)F
      // 1a7: fstore 10
      // 1a9: fload 11
      // 1ab: aload 26
      // 1ad: getfield org/joml/Vector3f.y F
      // 1b0: invokestatic java/lang/Math.min (FF)F
      // 1b3: fstore 11
      // 1b5: fload 12
      // 1b7: aload 26
      // 1b9: getfield org/joml/Vector3f.x F
      // 1bc: invokestatic java/lang/Math.max (FF)F
      // 1bf: fstore 12
      // 1c1: fload 13
      // 1c3: aload 26
      // 1c5: getfield org/joml/Vector3f.y F
      // 1c8: invokestatic java/lang/Math.max (FF)F
      // 1cb: fstore 13
      // 1cd: iinc 24 1
      // 1d0: aload 5
      // 1d2: ifnull 1e4
      // 1d5: aload 5
      // 1d7: ifnonnull 17b
      // 1da: goto 1e1
      // 1dd: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e0: athrow
      // 1e1: iinc 20 1
      // 1e4: aload 5
      // 1e6: ifnonnull 151
      // 1e9: iinc 16 1
      // 1ec: aload 5
      // 1ee: ifnonnull 127
      // 1f1: fload 10
      // 1f3: invokestatic java/lang/Float.isFinite (F)Z
      // 1f6: aload 5
      // 1f8: ifnull 211
      // 1fb: ifeq 24a
      // 1fe: goto 205
      // 201: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 204: athrow
      // 205: fload 11
      // 207: invokestatic java/lang/Float.isFinite (F)Z
      // 20a: goto 211
      // 20d: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 210: athrow
      // 211: aload 5
      // 213: ifnull 22c
      // 216: ifeq 24a
      // 219: goto 220
      // 21c: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21f: athrow
      // 220: fload 12
      // 222: invokestatic java/lang/Float.isFinite (F)Z
      // 225: goto 22c
      // 228: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22b: athrow
      // 22c: aload 5
      // 22e: ifnull 247
      // 231: ifeq 24a
      // 234: goto 23b
      // 237: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23a: athrow
      // 23b: fload 13
      // 23d: invokestatic java/lang/Float.isFinite (F)Z
      // 240: goto 247
      // 243: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 246: athrow
      // 247: ifne 253
      // 24a: aload 0
      // 24b: invokevirtual sixtwo/ag.td ()Lsixtwo/lc;
      // 24e: areturn
      // 24f: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 252: athrow
      // 253: new sixtwo/lc
      // 256: dup
      // 257: fload 10
      // 259: fconst_1
      // 25a: fsub
      // 25b: fload 11
      // 25d: fconst_1
      // 25e: fsub
      // 25f: fload 12
      // 261: fload 10
      // 263: fsub
      // 264: fconst_2
      // 265: fadd
      // 266: fload 13
      // 268: fload 11
      // 26a: fsub
      // 26b: fconst_2
      // 26c: fadd
      // 26d: invokespecial sixtwo/lc.<init> (FFFF)V
      // 270: areturn
   }

   public class_591 nr() {
      return this.QSyUZ;
   }

   public ag$rR ns() {
      return this.VSKnI;
   }

   public boolean nt() {
      return this.FiFgY;
   }

   private void nm(class_591 var1) {
      long var2 = WkMeU ^ 19720470180297L;
      if (this.VSKnI == ag$rR.VdGoA) {
         float var4 = (float)(class_156.method_658() % wxrIA) / 1000.0F;
         float var5 = 0.8F;
         float var6 = var4 * var5 * (float) Math.PI;
         float var7 = 0.8F;
         float var8 = class_3532.method_15362(var6) * var7;
         float var9 = class_3532.method_15362(var6 + (float) Math.PI) * var7;
         float var10 = class_3532.method_15362(var6 + (float) Math.PI) * var7;
         float var11 = class_3532.method_15362(var6) * var7;
         var1.field_3401.field_3654 = var8;
         var1.field_3392.field_3654 = var10;
         var1.field_27433.field_3654 = var9;
         var1.field_3397.field_3654 = var11;
      }
   }

   @Override
   public void dl(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ag.WkMeU J
      // 03: ldc2_w 85705703799571
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 8
      // 10: ifnull 36
      // 13: aload 5
      // 15: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 18: if_acmpne 2e
      // 1b: goto 22
      // 1e: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: bipush 0
      // 24: putfield sixtwo/ag.FiFgY Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 0
      // 2f: dload 1
      // 30: dload 3
      // 31: aload 5
      // 33: invokespecial sixtwo/az.dl (DDLsixtwo/mA;)V
      // 36: return
   }

   public String np() {
      return this.cKAzP;
   }

   public Function<String, ag$rQ> nu() {
      return this.ZYZql;
   }

   private void no() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ag.WkMeU J
      // 03: ldc2_w 30747480886367
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/ag.varoa Lnet/minecraft/class_591;
      // 10: aload 3
      // 11: ifnull 29
      // 14: ifnull 2d
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/ag.QSyUZ Lnet/minecraft/class_591;
      // 22: goto 29
      // 25: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: ifnull 2d
      // 2c: return
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: invokevirtual net/minecraft/class_310.method_31974 ()Lnet/minecraft/class_5599;
      // 33: astore 4
      // 35: aload 0
      // 36: new net/minecraft/class_591
      // 39: dup
      // 3a: aload 4
      // 3c: getstatic net/minecraft/class_5602.field_27577 Lnet/minecraft/class_5601;
      // 3f: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 42: bipush 0
      // 43: invokespecial net/minecraft/class_591.<init> (Lnet/minecraft/class_630;Z)V
      // 46: putfield sixtwo/ag.varoa Lnet/minecraft/class_591;
      // 49: aload 0
      // 4a: new net/minecraft/class_591
      // 4d: dup
      // 4e: aload 4
      // 50: getstatic net/minecraft/class_5602.field_27581 Lnet/minecraft/class_5601;
      // 53: invokevirtual net/minecraft/class_5599.method_32072 (Lnet/minecraft/class_5601;)Lnet/minecraft/class_630;
      // 56: bipush 1
      // 57: invokespecial net/minecraft/class_591.<init> (Lnet/minecraft/class_630;Z)V
      // 5a: putfield sixtwo/ag.QSyUZ Lnet/minecraft/class_591;
      // 5d: return
   }

   private boolean nn() {
      long var1 = WkMeU ^ 128783521785551L;

      try {
         if (this.VSKnI == ag$rR.cyZLf) {
            return true;
         }
      } catch (MatchException var3) {
         throw nF(var3);
      }

      return false;
   }

   public ag nk(float var1, float var2) {
      this.EnbkJ = var1;
      this.Vinex = var2;
      return this;
   }

   @Override
   public boolean dk(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ag.WkMeU J
      // 03: ldc2_w 69552561086058
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 0
      // 0f: invokevirtual sixtwo/ag.nn ()Z
      // 12: aload 8
      // 14: ifnull 5b
      // 17: ifeq 4c
      // 1a: goto 21
      // 1d: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 5
      // 23: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 26: if_acmpne 4c
      // 29: goto 30
      // 2c: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: dload 1
      // 32: dload 3
      // 33: invokevirtual sixtwo/ag.tg (DD)Z
      // 36: aload 8
      // 38: ifnull 62
      // 3b: goto 42
      // 3e: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: ifne 5c
      // 45: goto 4c
      // 48: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 0
      // 4d: dload 1
      // 4e: dload 3
      // 4f: aload 5
      // 51: invokespecial sixtwo/az.dk (DDLsixtwo/mA;)Z
      // 54: goto 5b
      // 57: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: ireturn
      // 5c: aload 0
      // 5d: bipush 1
      // 5e: putfield sixtwo/ag.FiFgY Z
      // 61: bipush 1
      // 62: ireturn
   }

   public float nv() {
      return this.EnbkJ;
   }

   public float nw() {
      return this.Vinex;
   }

   public ag nx(String var1) {
      this.cKAzP = var1;
      return this;
   }

   public ag ny(class_591 var1) {
      this.varoa = var1;
      return this;
   }

   public ag nz(class_591 var1) {
      this.QSyUZ = var1;
      return this;
   }

   @Override
   protected void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ag.WkMeU J
      // 03: ldc2_w 108663731358382
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/ag.no ()V
      // 0f: aload 0
      // 10: getfield sixtwo/ag.ZYZql Ljava/util/function/Function;
      // 13: aload 0
      // 14: getfield sixtwo/ag.cKAzP Ljava/lang/String;
      // 17: invokeinterface java/util/function/Function.apply (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 1c: checkcast sixtwo/ag$rQ
      // 1f: astore 5
      // 21: astore 4
      // 23: aload 5
      // 25: aload 4
      // 27: ifnull 36
      // 2a: ifnull 48
      // 2d: goto 34
      // 30: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 5
      // 36: aload 4
      // 38: ifnull 4f
      // 3b: invokevirtual sixtwo/ag$rQ.skin ()Lnet/minecraft/class_2960;
      // 3e: ifnonnull 4d
      // 41: goto 48
      // 44: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: return
      // 49: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: aload 5
      // 4f: invokevirtual sixtwo/ag$rQ.slim ()Z
      // 52: ifeq 60
      // 55: aload 0
      // 56: getfield sixtwo/ag.QSyUZ Lnet/minecraft/class_591;
      // 59: goto 64
      // 5c: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: aload 0
      // 61: getfield sixtwo/ag.varoa Lnet/minecraft/class_591;
      // 64: astore 6
      // 66: aload 0
      // 67: aload 6
      // 69: invokevirtual sixtwo/ag.nm (Lnet/minecraft/class_591;)V
      // 6c: aload 0
      // 6d: getfield sixtwo/ag.WjISQ F
      // 70: ldc 2.125
      // 72: fdiv
      // 73: fstore 7
      // 75: aload 1
      // 76: aload 6
      // 78: aload 5
      // 7a: invokevirtual sixtwo/ag$rQ.skin ()Lnet/minecraft/class_2960;
      // 7d: aload 0
      // 7e: getfield sixtwo/ag.MCnYt F
      // 81: aload 0
      // 82: getfield sixtwo/ag.pNyTQ F
      // 85: aload 0
      // 86: getfield sixtwo/ag.BcpIo F
      // 89: aload 0
      // 8a: getfield sixtwo/ag.WjISQ F
      // 8d: invokevirtual sixtwo/lC.cec (Lnet/minecraft/class_591;Lnet/minecraft/class_2960;FFFF)Lsixtwo/jq;
      // 90: fload 7
      // 92: invokevirtual sixtwo/jq.bFo (F)Lsixtwo/jq;
      // 95: aload 0
      // 96: getfield sixtwo/ag.EnbkJ F
      // 99: aload 0
      // 9a: getfield sixtwo/ag.Vinex F
      // 9d: invokevirtual sixtwo/jq.bFp (FF)Lsixtwo/jq;
      // a0: invokevirtual sixtwo/jq.bFs ()Lsixtwo/jq;
      // a3: pop
      // a4: return
   }

   @Override
   public boolean dB(double param1, double param3, mA param5, double param6, double param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ag.WkMeU J
      // 03: ldc2_w 25912950288039
      // 06: lxor
      // 07: lstore 10
      // 09: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0c: astore 12
      // 0e: aload 0
      // 0f: invokevirtual sixtwo/ag.nn ()Z
      // 12: aload 12
      // 14: ifnull 5d
      // 17: ifeq 4a
      // 1a: goto 21
      // 1d: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/ag.FiFgY Z
      // 25: aload 12
      // 27: ifnull 5d
      // 2a: goto 31
      // 2d: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: ifeq 4a
      // 34: goto 3b
      // 37: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 5
      // 3d: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 40: if_acmpeq 5e
      // 43: goto 4a
      // 46: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 0
      // 4b: dload 1
      // 4c: dload 3
      // 4d: aload 5
      // 4f: dload 6
      // 51: dload 8
      // 53: invokespecial sixtwo/az.dB (DDLsixtwo/mA;DD)Z
      // 56: goto 5d
      // 59: invokestatic sixtwo/ag.nF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: ireturn
      // 5e: aload 0
      // 5f: aload 0
      // 60: getfield sixtwo/ag.Vinex F
      // 63: dload 6
      // 65: d2f
      // 66: ldc_w 1.5
      // 69: fmul
      // 6a: fadd
      // 6b: invokestatic net/minecraft/class_3532.method_15393 (F)F
      // 6e: putfield sixtwo/ag.Vinex F
      // 71: aload 0
      // 72: aload 0
      // 73: getfield sixtwo/ag.EnbkJ F
      // 76: dload 8
      // 78: d2f
      // 79: ldc_w 1.2
      // 7c: fmul
      // 7d: fadd
      // 7e: ldc_w -60.0
      // 81: ldc_w 60.0
      // 84: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 87: putfield sixtwo/ag.EnbkJ F
      // 8a: bipush 1
      // 8b: ireturn
   }

   public class_591 nq() {
      return this.varoa;
   }

   private static MatchException nF(MatchException var0) {
      return var0;
   }

   public ag nD(float var1) {
      this.Vinex = var1;
      return this;
   }

   public ag nA(boolean var1) {
      this.FiFgY = var1;
      return this;
   }

   public ag nC(float var1) {
      this.EnbkJ = var1;
      return this;
   }

   public ag nB(Function<String, ag$rQ> var1) {
      this.ZYZql = var1;
      return this;
   }
}
