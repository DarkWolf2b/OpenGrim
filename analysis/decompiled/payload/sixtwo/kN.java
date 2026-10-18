package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.vertex.VertexFormat.class_5596;
import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_238;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_4587;
import net.minecraft.class_9799;
import net.minecraft.class_9801;
import org.joml.Matrix4f;

public class kN extends kQ<kH> {
   private static final kS WtlYB;
   private final class_9799 SEJzU;
   private class_287 yzZWb;
   private boolean ZoEfi;
   private kS BMkDs;
   private static final long yQFgm = gb.aYR(-4104447264869764605L, 6651616731393957419L, MethodHandles.lookup().lookupClass()).a(262061921378630L);
   private static final long xpgEf;

   public kN() {
      long var1 = yQFgm ^ 135397581673751L;
      super();
      this.SEJzU = new class_9799((int)xpgEf);
   }

   static {
      long var0 = yQFgm ^ 81298050151314L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 7252057620193234991L;
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
      xpgEf = var7;
      WtlYB = kS.bVE().duk(lh.aApMr).duo(false).dul(false).dun(true).dup();
   }

   @Override
   public void flush() {
      this.bVj();
      this.bUT();
      this.bVi(class_5596.field_29344, class_290.field_1576);
      this.bUU();
   }

   @Override
   public kS defaultState() {
      return WtlYB;
   }

   public void bUS(kH param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kN.yQFgm J
      // 03: ldc2_w 56356428799710
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kJ.bUj ()Z
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/kN.bVj ()V
      // 0f: istore 4
      // 11: aload 1
      // 12: invokevirtual sixtwo/kH.bTL ()Lnet/minecraft/class_4587;
      // 15: astore 5
      // 17: aload 1
      // 18: invokevirtual sixtwo/kH.bTN ()Lsixtwo/mG;
      // 1b: invokevirtual sixtwo/mG.coh ()I
      // 1e: istore 6
      // 20: aload 1
      // 21: invokevirtual sixtwo/kH.bTM ()Lnet/minecraft/class_238;
      // 24: astore 7
      // 26: aload 0
      // 27: aload 5
      // 29: aload 7
      // 2b: iload 6
      // 2d: invokevirtual sixtwo/kN.bUV (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;I)V
      // 30: aload 1
      // 31: invokevirtual sixtwo/kH.bTQ ()Z
      // 34: iload 4
      // 36: ifeq 5a
      // 39: ifeq 56
      // 3c: goto 43
      // 3f: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 42: athrow
      // 43: aload 1
      // 44: invokevirtual sixtwo/kH.bTO ()Lsixtwo/mG;
      // 47: invokevirtual sixtwo/mG.coh ()I
      // 4a: istore 8
      // 4c: aload 0
      // 4d: aload 5
      // 4f: aload 7
      // 51: iload 8
      // 53: invokevirtual sixtwo/kN.bUW (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;I)V
      // 56: aload 1
      // 57: invokevirtual sixtwo/kH.bTR ()Z
      // 5a: iload 4
      // 5c: ifeq 77
      // 5f: ifeq 83
      // 62: goto 69
      // 65: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 68: athrow
      // 69: aload 1
      // 6a: invokevirtual sixtwo/kH.bTP ()Lsixtwo/mG;
      // 6d: invokevirtual sixtwo/mG.coh ()I
      // 70: goto 77
      // 73: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 76: athrow
      // 77: istore 8
      // 79: aload 0
      // 7a: aload 5
      // 7c: aload 7
      // 7e: iload 8
      // 80: invokevirtual sixtwo/kN.bUX (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;I)V
      // 83: return
   }

   @Override
   public void startBatch(kS var1) {
      this.BMkDs = var1;
      lT.ciQ().setLineSmoothing(true);
      this.bVi(class_5596.field_29344, class_290.field_1576);
   }

   @Override
   public void endBatch() {
      this.bVj();
      this.bUT();
      this.bUU();
      lT.ciQ().setLineSmoothing(false);
      this.bVl();
   }

   private static Throwable bUY(Throwable var0) {
      return var0;
   }

   private void bUX(class_4587 var1, class_238 var2, int var3) {
      float var4 = (float)var2.field_1323;
      float var5 = (float)var2.field_1322;
      float var6 = (float)var2.field_1321;
      float var7 = (float)var2.field_1320;
      float var8 = (float)var2.field_1325;
      float var9 = (float)var2.field_1324;
      Matrix4f var10 = var1.method_23760().method_23761();
      this.WfBOj.method_22918(var10, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var6).method_39415(var3);
   }

   private void bUV(class_4587 var1, class_238 var2, int var3) {
      float var4 = (float)var2.field_1323;
      float var5 = (float)var2.field_1322;
      float var6 = (float)var2.field_1321;
      float var7 = (float)var2.field_1320;
      float var8 = (float)var2.field_1325;
      float var9 = (float)var2.field_1324;
      Matrix4f var10 = var1.method_23760().method_23761();
      this.WfBOj.method_22918(var10, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var6).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var7, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var9).method_39415(var3);
      this.WfBOj.method_22918(var10, var4, var8, var6).method_39415(var3);
   }

   private void bUW(class_4587 param1, class_238 param2, int param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kN.yQFgm J
      // 003: ldc2_w 85267135532846
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/kJ.bUj ()Z
      // 00c: istore 6
      // 00e: aload 0
      // 00f: getfield sixtwo/kN.ZoEfi Z
      // 012: iload 6
      // 014: ifeq 04e
      // 017: ifne 042
      // 01a: goto 021
      // 01d: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 020: athrow
      // 021: aload 0
      // 022: new net/minecraft/class_287
      // 025: dup
      // 026: aload 0
      // 027: getfield sixtwo/kN.SEJzU Lnet/minecraft/class_9799;
      // 02a: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27380 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 02d: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 030: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 033: putfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 036: aload 0
      // 037: bipush 1
      // 038: putfield sixtwo/kN.ZoEfi Z
      // 03b: goto 042
      // 03e: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 041: athrow
      // 042: iload 3
      // 043: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 046: ldc 0.5
      // 048: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 04b: invokevirtual sixtwo/mG.coh ()I
      // 04e: istore 7
      // 050: aload 2
      // 051: getfield net/minecraft/class_238.field_1323 D
      // 054: d2f
      // 055: fstore 8
      // 057: aload 2
      // 058: getfield net/minecraft/class_238.field_1322 D
      // 05b: d2f
      // 05c: fstore 9
      // 05e: aload 2
      // 05f: getfield net/minecraft/class_238.field_1321 D
      // 062: d2f
      // 063: fstore 10
      // 065: aload 2
      // 066: getfield net/minecraft/class_238.field_1320 D
      // 069: d2f
      // 06a: fstore 11
      // 06c: aload 2
      // 06d: getfield net/minecraft/class_238.field_1325 D
      // 070: d2f
      // 071: fstore 12
      // 073: aload 2
      // 074: getfield net/minecraft/class_238.field_1324 D
      // 077: d2f
      // 078: fstore 13
      // 07a: aload 1
      // 07b: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 07e: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 081: astore 14
      // 083: aload 0
      // 084: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 087: aload 14
      // 089: fload 8
      // 08b: fload 9
      // 08d: fload 10
      // 08f: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 092: iload 7
      // 094: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 099: pop
      // 09a: aload 0
      // 09b: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 09e: aload 14
      // 0a0: fload 8
      // 0a2: fload 9
      // 0a4: fload 10
      // 0a6: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0a9: iload 7
      // 0ab: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0b0: pop
      // 0b1: aload 0
      // 0b2: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 0b5: aload 14
      // 0b7: fload 8
      // 0b9: fload 9
      // 0bb: fload 10
      // 0bd: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0c0: iload 7
      // 0c2: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0c7: pop
      // 0c8: aload 0
      // 0c9: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 0cc: aload 14
      // 0ce: fload 8
      // 0d0: fload 9
      // 0d2: fload 13
      // 0d4: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0d7: iload 7
      // 0d9: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0de: pop
      // 0df: aload 0
      // 0e0: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 0e3: aload 14
      // 0e5: fload 8
      // 0e7: fload 12
      // 0e9: fload 10
      // 0eb: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0ee: iload 7
      // 0f0: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0f5: pop
      // 0f6: aload 0
      // 0f7: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 0fa: aload 14
      // 0fc: fload 8
      // 0fe: fload 12
      // 100: fload 13
      // 102: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 105: iload 7
      // 107: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 10c: pop
      // 10d: aload 0
      // 10e: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 111: aload 14
      // 113: fload 8
      // 115: fload 12
      // 117: fload 13
      // 119: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 11c: iload 7
      // 11e: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 123: pop
      // 124: aload 0
      // 125: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 128: aload 14
      // 12a: fload 8
      // 12c: fload 9
      // 12e: fload 13
      // 130: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 133: iload 7
      // 135: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 13a: pop
      // 13b: aload 0
      // 13c: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 13f: aload 14
      // 141: fload 11
      // 143: fload 12
      // 145: fload 13
      // 147: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 14a: iload 7
      // 14c: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 151: pop
      // 152: aload 0
      // 153: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 156: aload 14
      // 158: fload 11
      // 15a: fload 9
      // 15c: fload 13
      // 15e: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 161: iload 7
      // 163: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 168: pop
      // 169: aload 0
      // 16a: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 16d: aload 14
      // 16f: fload 11
      // 171: fload 9
      // 173: fload 13
      // 175: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 178: iload 7
      // 17a: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 17f: pop
      // 180: aload 0
      // 181: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 184: aload 14
      // 186: fload 11
      // 188: fload 9
      // 18a: fload 10
      // 18c: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 18f: iload 7
      // 191: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 196: pop
      // 197: aload 0
      // 198: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 19b: aload 14
      // 19d: fload 11
      // 19f: fload 12
      // 1a1: fload 13
      // 1a3: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1a6: iload 7
      // 1a8: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1ad: pop
      // 1ae: aload 0
      // 1af: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 1b2: aload 14
      // 1b4: fload 11
      // 1b6: fload 12
      // 1b8: fload 10
      // 1ba: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1bd: iload 7
      // 1bf: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1c4: pop
      // 1c5: aload 0
      // 1c6: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 1c9: aload 14
      // 1cb: fload 11
      // 1cd: fload 12
      // 1cf: fload 10
      // 1d1: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1d4: iload 7
      // 1d6: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1db: pop
      // 1dc: aload 0
      // 1dd: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 1e0: aload 14
      // 1e2: fload 11
      // 1e4: fload 9
      // 1e6: fload 10
      // 1e8: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1eb: iload 7
      // 1ed: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1f2: pop
      // 1f3: aload 0
      // 1f4: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 1f7: aload 14
      // 1f9: fload 8
      // 1fb: fload 12
      // 1fd: fload 10
      // 1ff: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 202: iload 7
      // 204: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 209: pop
      // 20a: aload 0
      // 20b: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 20e: aload 14
      // 210: fload 8
      // 212: fload 9
      // 214: fload 10
      // 216: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 219: iload 7
      // 21b: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 220: pop
      // 221: aload 0
      // 222: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 225: aload 14
      // 227: fload 8
      // 229: fload 9
      // 22b: fload 10
      // 22d: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 230: iload 7
      // 232: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 237: pop
      // 238: aload 0
      // 239: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 23c: aload 14
      // 23e: fload 11
      // 240: fload 9
      // 242: fload 10
      // 244: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 247: iload 7
      // 249: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 24e: pop
      // 24f: aload 0
      // 250: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 253: aload 14
      // 255: fload 8
      // 257: fload 9
      // 259: fload 13
      // 25b: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 25e: iload 7
      // 260: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 265: pop
      // 266: aload 0
      // 267: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 26a: aload 14
      // 26c: fload 11
      // 26e: fload 9
      // 270: fload 13
      // 272: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 275: iload 7
      // 277: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 27c: pop
      // 27d: aload 0
      // 27e: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 281: aload 14
      // 283: fload 11
      // 285: fload 9
      // 287: fload 13
      // 289: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 28c: iload 7
      // 28e: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 293: pop
      // 294: aload 0
      // 295: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 298: aload 14
      // 29a: fload 8
      // 29c: fload 12
      // 29e: fload 10
      // 2a0: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2a3: iload 7
      // 2a5: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2aa: pop
      // 2ab: aload 0
      // 2ac: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 2af: aload 14
      // 2b1: fload 8
      // 2b3: fload 12
      // 2b5: fload 10
      // 2b7: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2ba: iload 7
      // 2bc: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2c1: pop
      // 2c2: aload 0
      // 2c3: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 2c6: aload 14
      // 2c8: fload 8
      // 2ca: fload 12
      // 2cc: fload 13
      // 2ce: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2d1: iload 7
      // 2d3: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2d8: pop
      // 2d9: aload 0
      // 2da: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 2dd: aload 14
      // 2df: fload 11
      // 2e1: fload 12
      // 2e3: fload 10
      // 2e5: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2e8: iload 7
      // 2ea: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 2ef: pop
      // 2f0: aload 0
      // 2f1: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 2f4: aload 14
      // 2f6: fload 11
      // 2f8: fload 12
      // 2fa: fload 13
      // 2fc: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 2ff: iload 7
      // 301: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 306: pop
      // 307: aload 0
      // 308: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 30b: aload 14
      // 30d: fload 11
      // 30f: fload 12
      // 311: fload 13
      // 313: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 316: iload 7
      // 318: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 31d: pop
      // 31e: aload 0
      // 31f: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 322: aload 14
      // 324: fload 11
      // 326: fload 12
      // 328: fload 13
      // 32a: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 32d: iload 7
      // 32f: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 334: pop
      // 335: return
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void bUT() {
      long var1 = yQFgm ^ 74048797244501L;
      boolean var10000 = kJ.bUi();
      class_9801 var4 = this.WfBOj.method_60794();
      boolean var3 = var10000;

      label64: {
         try {
            label62: {
               try {
                  var14 = var4;
                  if (var3) {
                     break label64;
                  }

                  if (var4 == null) {
                     break label62;
                  }
               } catch (Throwable var11) {
                  throw bUY(var11);
               }

               RenderPipeline var5 = kR.DFLLz.bUZ(this.BMkDs);
               lF.cfW(var5, var4);
            }
         } catch (Throwable var12) {
            label43: {
               try {
                  var13 = var4;
                  if (var3) {
                     break label43;
                  }

                  if (var4 == null) {
                     throw var12;
                  }
               } catch (Throwable var9) {
                  throw bUY(var9);
               }

               try {
                  var13 = var4;
               } catch (Throwable var8) {
                  var12.addSuppressed(var8);
                  throw var12;
               }
            }

            try {
               var13.close();
            } catch (Throwable var7) {
               var12.addSuppressed(var7);
            }

            throw var12;
         }

         var14 = var4;
      }

      label53: {
         try {
            if (var3) {
               break label53;
            }

            if (var14 == null) {
               return;
            }
         } catch (Throwable var10) {
            throw bUY(var10);
         }

         var14 = var4;
      }

      var14.close();
   }

   private void bUU() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kN.yQFgm J
      // 03: ldc2_w 127182362562703
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kJ.bUi ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifne 26
      // 11: getfield sixtwo/kN.ZoEfi Z
      // 14: ifeq 94
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: getfield sixtwo/kN.yzZWb Lnet/minecraft/class_287;
      // 29: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 2c: astore 4
      // 2e: aload 4
      // 30: iload 3
      // 31: ifne 53
      // 34: ifnull 51
      // 37: goto 3e
      // 3a: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: getstatic sixtwo/kR.EIAsr Lsixtwo/kO;
      // 41: aload 0
      // 42: getfield sixtwo/kN.BMkDs Lsixtwo/kS;
      // 45: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 48: astore 5
      // 4a: aload 5
      // 4c: aload 4
      // 4e: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 51: aload 4
      // 53: iload 3
      // 54: ifne 63
      // 57: ifnull 8f
      // 5a: goto 61
      // 5d: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 60: athrow
      // 61: aload 4
      // 63: invokevirtual net/minecraft/class_9801.close ()V
      // 66: goto 8f
      // 69: astore 5
      // 6b: aload 4
      // 6d: iload 3
      // 6e: ifne 7d
      // 71: ifnull 8c
      // 74: goto 7b
      // 77: invokestatic sixtwo/kN.bUY (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7a: athrow
      // 7b: aload 4
      // 7d: invokevirtual net/minecraft/class_9801.close ()V
      // 80: goto 8c
      // 83: astore 6
      // 85: aload 5
      // 87: aload 6
      // 89: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 8c: aload 5
      // 8e: athrow
      // 8f: aload 0
      // 90: bipush 0
      // 91: putfield sixtwo/kN.ZoEfi Z
      // 94: return
   }
}
