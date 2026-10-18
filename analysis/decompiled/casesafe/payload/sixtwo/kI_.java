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

public class kI extends kQ<kC> {
   private static final kS ycoVK;
   private final class_9799 lhPSr;
   private class_287 kRoQN;
   private boolean oiwQk;
   private kS ndzku;
   private static final long LucMv = gb.aYR(74625261366909609L, -8283339496095112206L, MethodHandles.lookup().lookupClass()).a(7746435210437L);
   private static final long cFNAk;

   public kI() {
      long var1 = LucMv ^ 117762479042546L;
      super();
      this.lhPSr = new class_9799((int)cFNAk);
   }

   static {
      long var0 = LucMv ^ 101626079945360L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -2376035461498767251L;
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
      cFNAk = var7;
      ycoVK = kS.bVE().duk(lh.aApMr).duo(false).dul(true).dun(false).dup();
   }

   @Override
   public void flush() {
      this.bVj();
      this.bTT();
      this.bVi(class_5596.field_29344, class_290.field_1576);
      this.bTU();
   }

   @Override
   public kS defaultState() {
      return ycoVK;
   }

   public void bTS(kC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kI.LucMv J
      // 03: ldc2_w 42468969423371
      // 06: lxor
      // 07: lstore 2
      // 08: aload 0
      // 09: invokevirtual sixtwo/kI.bVj ()V
      // 0c: invokestatic sixtwo/kJ.bUi ()Z
      // 0f: aload 1
      // 10: invokevirtual sixtwo/kC.bSM ()Lnet/minecraft/class_4587;
      // 13: astore 5
      // 15: istore 4
      // 17: aload 1
      // 18: invokevirtual sixtwo/kC.bSO ()Lsixtwo/mG;
      // 1b: invokevirtual sixtwo/mG.coh ()I
      // 1e: istore 6
      // 20: aload 1
      // 21: invokevirtual sixtwo/kC.bSN ()Lnet/minecraft/class_238;
      // 24: astore 7
      // 26: aload 0
      // 27: aload 5
      // 29: aload 7
      // 2b: iload 6
      // 2d: invokevirtual sixtwo/kI.bTV (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;I)V
      // 30: aload 1
      // 31: invokevirtual sixtwo/kC.bSR ()Z
      // 34: iload 4
      // 36: ifne 5a
      // 39: ifeq 56
      // 3c: goto 43
      // 3f: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 42: athrow
      // 43: aload 1
      // 44: invokevirtual sixtwo/kC.bSP ()Lsixtwo/mG;
      // 47: invokevirtual sixtwo/mG.coh ()I
      // 4a: istore 8
      // 4c: aload 0
      // 4d: aload 5
      // 4f: aload 7
      // 51: iload 8
      // 53: invokevirtual sixtwo/kI.bTW (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;I)V
      // 56: aload 1
      // 57: invokevirtual sixtwo/kC.bSS ()Z
      // 5a: iload 4
      // 5c: ifne 77
      // 5f: ifeq 83
      // 62: goto 69
      // 65: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 68: athrow
      // 69: aload 1
      // 6a: invokevirtual sixtwo/kC.bSQ ()Lsixtwo/mG;
      // 6d: invokevirtual sixtwo/mG.coh ()I
      // 70: goto 77
      // 73: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 76: athrow
      // 77: istore 8
      // 79: aload 0
      // 7a: aload 5
      // 7c: aload 7
      // 7e: iload 8
      // 80: invokevirtual sixtwo/kI.bTX (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;I)V
      // 83: return
   }

   @Override
   public void startBatch(kS var1) {
      this.ndzku = var1;
      lT.ciQ().setLineSmoothing(true);
      this.bVi(class_5596.field_29344, class_290.field_1576);
   }

   @Override
   public void endBatch() {
      this.bVj();
      this.bTT();
      this.bTU();
      lT.ciQ().setLineSmoothing(false);
      this.bVl();
   }

   private static Throwable bTZ(Throwable var0) {
      return var0;
   }

   private void bTV(class_4587 var1, class_238 var2, int var3) {
      float var4 = (float)var2.field_1323;
      float var5 = (float)var2.field_1322;
      float var6 = (float)var2.field_1321;
      float var7 = (float)var2.field_1320;
      float var8 = (float)var2.field_1325;
      float var9 = (float)var2.field_1324;
      float var10 = (var4 + var7) * 0.5F;
      float var11 = (var6 + var9) * 0.5F;
      Matrix4f var12 = var1.method_23760().method_23761();
      this.WfBOj.method_22918(var12, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var10, var8, var11).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var10, var8, var11).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var10, var8, var11).method_39415(var3);
      this.WfBOj.method_22918(var12, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var10, var8, var11).method_39415(var3);
   }

   private void bTX(class_4587 var1, class_238 var2, int var3) {
      float var4 = (float)var2.field_1323;
      float var5 = (float)var2.field_1322;
      float var6 = (float)var2.field_1321;
      float var7 = (float)var2.field_1320;
      float var8 = (float)var2.field_1325;
      float var9 = (float)var2.field_1324;
      float var10 = (var4 + var7) * 0.5F;
      float var11 = (var6 + var9) * 0.5F;
      Matrix4f var12 = var1.method_23760().method_23761();
      this.WfBOj.method_22918(var12, var4, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var7, var5, var6).method_39415(var3);
      this.WfBOj.method_22918(var12, var4, var5, var9).method_39415(var3);
      this.WfBOj.method_22918(var12, var10, var5, var11).method_39415(var3);
      this.WfBOj.method_22918(var12, var10, var8, var11).method_39415(var3);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void bTT() {
      long var1 = LucMv ^ 9133064678466L;
      boolean var10000 = kJ.bUj();
      class_9801 var4 = this.WfBOj.method_60794();
      boolean var3 = var10000;

      label64: {
         try {
            label62: {
               try {
                  var14 = var4;
                  if (!var3) {
                     break label64;
                  }

                  if (var4 == null) {
                     break label62;
                  }
               } catch (Throwable var11) {
                  throw bTZ(var11);
               }

               RenderPipeline var5 = kR.MTMwE.bUZ(this.ndzku);
               lF.cfW(var5, var4);
            }
         } catch (Throwable var12) {
            label43: {
               try {
                  var13 = var4;
                  if (!var3) {
                     break label43;
                  }

                  if (var4 == null) {
                     throw var12;
                  }
               } catch (Throwable var9) {
                  throw bTZ(var9);
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
            if (!var3) {
               break label53;
            }

            if (var14 == null) {
               return;
            }
         } catch (Throwable var10) {
            throw bTZ(var10);
         }

         var14 = var4;
      }

      var14.close();
   }

   private void bTU() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kI.LucMv J
      // 03: ldc2_w 42963436514698
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kJ.bUj ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 26
      // 11: getfield sixtwo/kI.oiwQk Z
      // 14: ifeq 94
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: getfield sixtwo/kI.kRoQN Lnet/minecraft/class_287;
      // 29: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 2c: astore 4
      // 2e: aload 4
      // 30: iload 3
      // 31: ifeq 53
      // 34: ifnull 51
      // 37: goto 3e
      // 3a: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: getstatic sixtwo/kR.meLIO Lsixtwo/kO;
      // 41: aload 0
      // 42: getfield sixtwo/kI.ndzku Lsixtwo/kS;
      // 45: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 48: astore 5
      // 4a: aload 5
      // 4c: aload 4
      // 4e: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 51: aload 4
      // 53: iload 3
      // 54: ifeq 63
      // 57: ifnull 8f
      // 5a: goto 61
      // 5d: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 60: athrow
      // 61: aload 4
      // 63: invokevirtual net/minecraft/class_9801.close ()V
      // 66: goto 8f
      // 69: astore 5
      // 6b: aload 4
      // 6d: iload 3
      // 6e: ifeq 7d
      // 71: ifnull 8c
      // 74: goto 7b
      // 77: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
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
      // 91: putfield sixtwo/kI.oiwQk Z
      // 94: return
   }

   private void bTY(Matrix4f var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, float var10, int var11) {
      this.kRoQN.method_22918(var1, var2, var3, var4).method_39415(var11);
      this.kRoQN.method_22918(var1, var5, var6, var7).method_39415(var11);
      this.kRoQN.method_22918(var1, var8, var9, var10).method_39415(var11);
   }

   private void bTW(class_4587 param1, class_238 param2, int param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kI.LucMv J
      // 003: ldc2_w 115276517701635
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/kJ.bUi ()Z
      // 00c: istore 6
      // 00e: aload 0
      // 00f: getfield sixtwo/kI.oiwQk Z
      // 012: iload 6
      // 014: ifne 04e
      // 017: ifne 042
      // 01a: goto 021
      // 01d: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 020: athrow
      // 021: aload 0
      // 022: new net/minecraft/class_287
      // 025: dup
      // 026: aload 0
      // 027: getfield sixtwo/kI.lhPSr Lnet/minecraft/class_9799;
      // 02a: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27380 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 02d: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 030: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 033: putfield sixtwo/kI.kRoQN Lnet/minecraft/class_287;
      // 036: aload 0
      // 037: bipush 1
      // 038: putfield sixtwo/kI.oiwQk Z
      // 03b: goto 042
      // 03e: invokestatic sixtwo/kI.bTZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
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
      // 07a: fload 8
      // 07c: fload 11
      // 07e: fadd
      // 07f: ldc 0.5
      // 081: fmul
      // 082: fstore 14
      // 084: fload 10
      // 086: fload 13
      // 088: fadd
      // 089: ldc 0.5
      // 08b: fmul
      // 08c: fstore 15
      // 08e: aload 1
      // 08f: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 092: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 095: astore 16
      // 097: aload 0
      // 098: aload 16
      // 09a: fload 8
      // 09c: fload 9
      // 09e: fload 10
      // 0a0: fload 11
      // 0a2: fload 9
      // 0a4: fload 10
      // 0a6: fload 11
      // 0a8: fload 9
      // 0aa: fload 13
      // 0ac: iload 7
      // 0ae: invokevirtual sixtwo/kI.bTY (Lorg/joml/Matrix4f;FFFFFFFFFI)V
      // 0b1: aload 0
      // 0b2: aload 16
      // 0b4: fload 8
      // 0b6: fload 9
      // 0b8: fload 10
      // 0ba: fload 11
      // 0bc: fload 9
      // 0be: fload 13
      // 0c0: fload 8
      // 0c2: fload 9
      // 0c4: fload 13
      // 0c6: iload 7
      // 0c8: invokevirtual sixtwo/kI.bTY (Lorg/joml/Matrix4f;FFFFFFFFFI)V
      // 0cb: aload 0
      // 0cc: aload 16
      // 0ce: fload 8
      // 0d0: fload 9
      // 0d2: fload 10
      // 0d4: fload 11
      // 0d6: fload 9
      // 0d8: fload 10
      // 0da: fload 14
      // 0dc: fload 12
      // 0de: fload 15
      // 0e0: iload 7
      // 0e2: invokevirtual sixtwo/kI.bTY (Lorg/joml/Matrix4f;FFFFFFFFFI)V
      // 0e5: aload 0
      // 0e6: aload 16
      // 0e8: fload 11
      // 0ea: fload 9
      // 0ec: fload 10
      // 0ee: fload 11
      // 0f0: fload 9
      // 0f2: fload 13
      // 0f4: fload 14
      // 0f6: fload 12
      // 0f8: fload 15
      // 0fa: iload 7
      // 0fc: invokevirtual sixtwo/kI.bTY (Lorg/joml/Matrix4f;FFFFFFFFFI)V
      // 0ff: aload 0
      // 100: aload 16
      // 102: fload 11
      // 104: fload 9
      // 106: fload 13
      // 108: fload 8
      // 10a: fload 9
      // 10c: fload 13
      // 10e: fload 14
      // 110: fload 12
      // 112: fload 15
      // 114: iload 7
      // 116: invokevirtual sixtwo/kI.bTY (Lorg/joml/Matrix4f;FFFFFFFFFI)V
      // 119: aload 0
      // 11a: aload 16
      // 11c: fload 8
      // 11e: fload 9
      // 120: fload 13
      // 122: fload 8
      // 124: fload 9
      // 126: fload 10
      // 128: fload 14
      // 12a: fload 12
      // 12c: fload 15
      // 12e: iload 7
      // 130: invokevirtual sixtwo/kI.bTY (Lorg/joml/Matrix4f;FFFFFFFFFI)V
      // 133: return
   }
}
