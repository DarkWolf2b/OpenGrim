package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_4587;
import net.minecraft.class_742;

public class ky {
   private static iS[] sZugG;
   private static final long IIrsF = gb.aYR(5063248569340969831L, -5038562141169279977L, MethodHandles.lookup().lookupClass()).a(64925766217404L);
   private static final long nUFUt;

   static {
      long var0 = IIrsF ^ 1591103402983L;
      bSe(null);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -5533034104330567558L;
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
      nUFUt = var7;
   }

   public static iS[] bSf() {
      return sZugG;
   }

   private static Throwable bSg(Throwable var0) {
      return var0;
   }

   public static void bSe(iS[] var0) {
      sZugG = var0;
   }

   public static void bSd(class_4587 param0, class_742 param1, mG param2, int param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ky.IIrsF J
      // 003: ldc2_w 6821386178283
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/ky.bSf ()[Lsixtwo/iS;
      // 00c: invokestatic sixtwo/lT.ciQ ()Lsixtwo/lU;
      // 00f: bipush 1
      // 010: invokeinterface sixtwo/lU.setLineSmoothing (Z)V 2
      // 015: astore 6
      // 017: aload 0
      // 018: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 01b: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 01e: astore 7
      // 020: aload 1
      // 021: invokevirtual net/minecraft/class_742.method_17681 ()F
      // 024: fstore 8
      // 026: getstatic sixtwo/ky.nUFUt J
      // 029: l2i
      // 02a: istore 9
      // 02c: new net/minecraft/class_9799
      // 02f: dup
      // 030: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 033: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 036: iload 9
      // 038: bipush 1
      // 039: iadd
      // 03a: iload 9
      // 03c: iadd
      // 03d: bipush 1
      // 03e: iadd
      // 03f: imul
      // 040: invokespecial net/minecraft/class_9799.<init> (I)V
      // 043: astore 10
      // 045: new net/minecraft/class_287
      // 048: dup
      // 049: aload 10
      // 04b: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27381 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 04e: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 051: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 054: astore 11
      // 056: bipush 0
      // 057: istore 12
      // 059: iload 12
      // 05b: iload 9
      // 05d: if_icmpgt 0a4
      // 060: iload 12
      // 062: aload 2
      // 063: iload 3
      // 064: invokestatic sixtwo/jk.bDm (ILsixtwo/mG;I)Lsixtwo/mG;
      // 067: invokevirtual sixtwo/mG.con ()[F
      // 06a: astore 13
      // 06c: aload 11
      // 06e: aload 7
      // 070: fconst_0
      // 071: ldc 0.3
      // 073: fconst_0
      // 074: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 077: aload 13
      // 079: bipush 0
      // 07a: faload
      // 07b: aload 13
      // 07d: bipush 1
      // 07e: faload
      // 07f: aload 13
      // 081: bipush 2
      // 082: faload
      // 083: ldc 40.0
      // 085: invokeinterface net/minecraft/class_4588.method_22915 (FFFF)Lnet/minecraft/class_4588; 5
      // 08a: pop
      // 08b: iinc 12 1
      // 08e: aload 6
      // 090: ifnonnull 0a7
      // 093: aload 6
      // 095: ifnull 059
      // 098: goto 09f
      // 09b: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 09e: athrow
      // 09f: ldc "LI3gec"
      // 0a1: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 0a4: bipush 0
      // 0a5: istore 12
      // 0a7: iload 12
      // 0a9: iload 9
      // 0ab: if_icmpgt 10d
      // 0ae: iload 12
      // 0b0: aload 2
      // 0b1: iload 3
      // 0b2: invokestatic sixtwo/jk.bDm (ILsixtwo/mG;I)Lsixtwo/mG;
      // 0b5: invokevirtual sixtwo/mG.con ()[F
      // 0b8: astore 13
      // 0ba: aload 11
      // 0bc: aload 6
      // 0be: ifnonnull 10f
      // 0c1: aload 7
      // 0c3: iload 12
      // 0c5: i2f
      // 0c6: ldc 6.2831855
      // 0c8: fmul
      // 0c9: iload 9
      // 0cb: i2f
      // 0cc: fdiv
      // 0cd: f2d
      // 0ce: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 0d1: fneg
      // 0d2: fload 8
      // 0d4: fmul
      // 0d5: fconst_0
      // 0d6: iload 12
      // 0d8: i2f
      // 0d9: ldc 6.2831855
      // 0db: fmul
      // 0dc: iload 9
      // 0de: i2f
      // 0df: fdiv
      // 0e0: f2d
      // 0e1: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 0e4: fload 8
      // 0e6: fmul
      // 0e7: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0ea: aload 13
      // 0ec: bipush 0
      // 0ed: faload
      // 0ee: aload 13
      // 0f0: bipush 1
      // 0f1: faload
      // 0f2: aload 13
      // 0f4: bipush 2
      // 0f5: faload
      // 0f6: ldc 40.0
      // 0f8: invokeinterface net/minecraft/class_4588.method_22915 (FFFF)Lnet/minecraft/class_4588; 5
      // 0fd: pop
      // 0fe: iinc 12 1
      // 101: aload 6
      // 103: ifnull 0a7
      // 106: goto 10d
      // 109: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10c: athrow
      // 10d: aload 11
      // 10f: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 112: astore 12
      // 114: aload 12
      // 116: aload 6
      // 118: ifnonnull 136
      // 11b: ifnull 134
      // 11e: goto 125
      // 121: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 124: athrow
      // 125: getstatic sixtwo/kR.CDFBk Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 128: aload 12
      // 12a: invokestatic sixtwo/lF.cfX (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 12d: goto 134
      // 130: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 133: athrow
      // 134: aload 12
      // 136: aload 6
      // 138: ifnonnull 147
      // 13b: ifnull 174
      // 13e: goto 145
      // 141: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 144: athrow
      // 145: aload 12
      // 147: invokevirtual net/minecraft/class_9801.close ()V
      // 14a: goto 174
      // 14d: astore 13
      // 14f: aload 12
      // 151: aload 6
      // 153: ifnonnull 162
      // 156: ifnull 171
      // 159: goto 160
      // 15c: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 15f: athrow
      // 160: aload 12
      // 162: invokevirtual net/minecraft/class_9801.close ()V
      // 165: goto 171
      // 168: astore 14
      // 16a: aload 13
      // 16c: aload 14
      // 16e: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 171: aload 13
      // 173: athrow
      // 174: aload 10
      // 176: invokevirtual net/minecraft/class_9799.close ()V
      // 179: goto 192
      // 17c: astore 11
      // 17e: aload 10
      // 180: invokevirtual net/minecraft/class_9799.close ()V
      // 183: goto 18f
      // 186: astore 12
      // 188: aload 11
      // 18a: aload 12
      // 18c: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 18f: aload 11
      // 191: athrow
      // 192: iload 9
      // 194: aload 2
      // 195: iload 3
      // 196: invokestatic sixtwo/jk.bDm (ILsixtwo/mG;I)Lsixtwo/mG;
      // 199: invokevirtual sixtwo/mG.con ()[F
      // 19c: astore 10
      // 19e: new net/minecraft/class_9799
      // 1a1: dup
      // 1a2: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 1a5: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 1a8: iload 9
      // 1aa: bipush 2
      // 1ab: iadd
      // 1ac: imul
      // 1ad: invokespecial net/minecraft/class_9799.<init> (I)V
      // 1b0: astore 11
      // 1b2: new net/minecraft/class_287
      // 1b5: dup
      // 1b6: aload 11
      // 1b8: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_29345 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 1bb: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 1be: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 1c1: astore 12
      // 1c3: bipush 0
      // 1c4: istore 13
      // 1c6: iload 13
      // 1c8: iload 9
      // 1ca: if_icmpgt 230
      // 1cd: iload 13
      // 1cf: aload 2
      // 1d0: iload 3
      // 1d1: invokestatic sixtwo/jk.bDm (ILsixtwo/mG;I)Lsixtwo/mG;
      // 1d4: invokevirtual sixtwo/mG.con ()[F
      // 1d7: astore 14
      // 1d9: aload 12
      // 1db: aload 7
      // 1dd: iload 13
      // 1df: i2f
      // 1e0: ldc 6.2831855
      // 1e2: fmul
      // 1e3: iload 9
      // 1e5: i2f
      // 1e6: fdiv
      // 1e7: f2d
      // 1e8: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 1eb: fneg
      // 1ec: fload 8
      // 1ee: fmul
      // 1ef: fconst_0
      // 1f0: iload 13
      // 1f2: i2f
      // 1f3: ldc 6.2831855
      // 1f5: fmul
      // 1f6: iload 9
      // 1f8: i2f
      // 1f9: fdiv
      // 1fa: f2d
      // 1fb: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 1fe: fload 8
      // 200: fmul
      // 201: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 204: aload 14
      // 206: bipush 0
      // 207: faload
      // 208: aload 14
      // 20a: bipush 1
      // 20b: faload
      // 20c: aload 14
      // 20e: bipush 2
      // 20f: faload
      // 210: ldc 40.0
      // 212: invokeinterface net/minecraft/class_4588.method_22915 (FFFF)Lnet/minecraft/class_4588; 5
      // 217: pop
      // 218: aload 14
      // 21a: astore 10
      // 21c: iinc 13 1
      // 21f: aload 6
      // 221: ifnonnull 25b
      // 224: aload 6
      // 226: ifnull 1c6
      // 229: goto 230
      // 22c: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22f: athrow
      // 230: aload 12
      // 232: aload 7
      // 234: dconst_0
      // 235: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 238: fneg
      // 239: fload 8
      // 23b: fmul
      // 23c: fconst_0
      // 23d: dconst_0
      // 23e: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 241: fload 8
      // 243: fmul
      // 244: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 247: aload 10
      // 249: bipush 0
      // 24a: faload
      // 24b: aload 10
      // 24d: bipush 1
      // 24e: faload
      // 24f: aload 10
      // 251: bipush 2
      // 252: faload
      // 253: ldc 40.0
      // 255: invokeinterface net/minecraft/class_4588.method_22915 (FFFF)Lnet/minecraft/class_4588; 5
      // 25a: pop
      // 25b: aload 12
      // 25d: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 260: astore 13
      // 262: aload 13
      // 264: aload 6
      // 266: ifnonnull 284
      // 269: ifnull 282
      // 26c: goto 273
      // 26f: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 272: athrow
      // 273: getstatic sixtwo/kR.Uzcne Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 276: aload 13
      // 278: invokestatic sixtwo/lF.cfX (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 27b: goto 282
      // 27e: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 281: athrow
      // 282: aload 13
      // 284: aload 6
      // 286: ifnonnull 295
      // 289: ifnull 2c2
      // 28c: goto 293
      // 28f: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 292: athrow
      // 293: aload 13
      // 295: invokevirtual net/minecraft/class_9801.close ()V
      // 298: goto 2c2
      // 29b: astore 14
      // 29d: aload 13
      // 29f: aload 6
      // 2a1: ifnonnull 2b0
      // 2a4: ifnull 2bf
      // 2a7: goto 2ae
      // 2aa: invokestatic sixtwo/ky.bSg (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2ad: athrow
      // 2ae: aload 13
      // 2b0: invokevirtual net/minecraft/class_9801.close ()V
      // 2b3: goto 2bf
      // 2b6: astore 15
      // 2b8: aload 14
      // 2ba: aload 15
      // 2bc: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2bf: aload 14
      // 2c1: athrow
      // 2c2: aload 11
      // 2c4: invokevirtual net/minecraft/class_9799.close ()V
      // 2c7: goto 2e0
      // 2ca: astore 12
      // 2cc: aload 11
      // 2ce: invokevirtual net/minecraft/class_9799.close ()V
      // 2d1: goto 2dd
      // 2d4: astore 13
      // 2d6: aload 12
      // 2d8: aload 13
      // 2da: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2dd: aload 12
      // 2df: athrow
      // 2e0: invokestatic sixtwo/lT.ciQ ()Lsixtwo/lU;
      // 2e3: bipush 0
      // 2e4: invokeinterface sixtwo/lU.setLineSmoothing (Z)V 2
      // 2e9: return
   }
}
