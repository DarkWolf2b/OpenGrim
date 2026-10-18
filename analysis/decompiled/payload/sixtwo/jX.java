package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class jX implements kh<jO> {
   private static final long kRcjs = gb.aYR(-6360556769871776842L, -1933544579734279765L, MethodHandles.lookup().lookupClass()).a(169418617892138L);
   private static final String cvxBK;

   static {
      long var0 = kRcjs ^ 61824375890868L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var4 = var2.doFinal("\u0093\u0019\u0012\u0097uI¬ÍÞ\u0086\u000eãË@?°".getBytes("ISO-8859-1"));
      String var5 = bNC(var4).intern();
      byte var10001 = -1;
      cvxBK = var5;
   }

   public void bNz(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jX.kRcjs J
      // 003: ldc2_w 51959087305734
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMR ()Z
      // 00b: aload 1
      // 00c: invokevirtual sixtwo/jO.bKi ()Lsixtwo/mG;
      // 00f: astore 5
      // 011: istore 4
      // 013: aload 5
      // 015: invokevirtual sixtwo/mG.cnW ()Z
      // 018: ifeq 020
      // 01b: return
      // 01c: invokestatic sixtwo/jX.bNB (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01f: athrow
      // 020: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 023: astore 6
      // 025: aload 1
      // 026: invokevirtual sixtwo/jO.bKb ()F
      // 029: fstore 7
      // 02b: aload 1
      // 02c: invokevirtual sixtwo/jO.bKc ()F
      // 02f: fstore 8
      // 031: aload 1
      // 032: invokevirtual sixtwo/jO.bKd ()F
      // 035: fstore 9
      // 037: aload 1
      // 038: invokevirtual sixtwo/jO.bKe ()F
      // 03b: fstore 10
      // 03d: fload 7
      // 03f: aload 6
      // 041: getfield net/minecraft/class_241.field_1343 F
      // 044: fdiv
      // 045: fstore 11
      // 047: fload 7
      // 049: fload 9
      // 04b: fadd
      // 04c: aload 6
      // 04e: getfield net/minecraft/class_241.field_1343 F
      // 051: fdiv
      // 052: fstore 12
      // 054: fconst_1
      // 055: fload 8
      // 057: aload 6
      // 059: getfield net/minecraft/class_241.field_1342 F
      // 05c: fdiv
      // 05d: fsub
      // 05e: fstore 13
      // 060: fconst_1
      // 061: fload 8
      // 063: fload 10
      // 065: fadd
      // 066: aload 6
      // 068: getfield net/minecraft/class_241.field_1342 F
      // 06b: fdiv
      // 06c: fsub
      // 06d: fstore 14
      // 06f: new net/minecraft/class_9799
      // 072: dup
      // 073: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 076: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 079: bipush 4
      // 07a: imul
      // 07b: invokespecial net/minecraft/class_9799.<init> (I)V
      // 07e: astore 15
      // 080: new net/minecraft/class_287
      // 083: dup
      // 084: aload 15
      // 086: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 089: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 08c: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 08f: astore 16
      // 091: getstatic sixtwo/jX.FroVm Lsixtwo/kb;
      // 094: aload 16
      // 096: aload 1
      // 097: invokevirtual sixtwo/jO.bKa ()Lorg/joml/Matrix3x2fStack;
      // 09a: fload 7
      // 09c: fload 8
      // 09e: fload 9
      // 0a0: fload 10
      // 0a2: fload 11
      // 0a4: fload 13
      // 0a6: fload 12
      // 0a8: fload 14
      // 0aa: aload 1
      // 0ab: invokevirtual sixtwo/jO.bKi ()Lsixtwo/mG;
      // 0ae: invokevirtual sixtwo/kb.uv_quad_region_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFFFFFLsixtwo/mG;)V
      // 0b1: aload 16
      // 0b3: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 0b6: astore 17
      // 0b8: getstatic sixtwo/kR.alRAH Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0bb: aload 17
      // 0bd: aload 1
      // 0be: invokedynamic accept (Lsixtwo/jO;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jX.bNA (Lsixtwo/jO;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 0c3: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0c6: iload 4
      // 0c8: ifne 108
      // 0cb: aload 17
      // 0cd: ifnull 103
      // 0d0: aload 17
      // 0d2: invokevirtual net/minecraft/class_9801.close ()V
      // 0d5: goto 103
      // 0d8: invokestatic sixtwo/jX.bNB (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0db: athrow
      // 0dc: astore 18
      // 0de: aload 17
      // 0e0: iload 4
      // 0e2: ifne 0f1
      // 0e5: ifnull 100
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/jX.bNB (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ee: athrow
      // 0ef: aload 17
      // 0f1: invokevirtual net/minecraft/class_9801.close ()V
      // 0f4: goto 100
      // 0f7: astore 19
      // 0f9: aload 18
      // 0fb: aload 19
      // 0fd: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 100: aload 18
      // 102: athrow
      // 103: aload 15
      // 105: invokevirtual net/minecraft/class_9799.close ()V
      // 108: goto 121
      // 10b: astore 16
      // 10d: aload 15
      // 10f: invokevirtual net/minecraft/class_9799.close ()V
      // 112: goto 11e
      // 115: astore 17
      // 117: aload 16
      // 119: aload 17
      // 11b: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 11e: aload 16
      // 120: athrow
      // 121: return
   }

   private static Throwable bNB(Throwable var0) {
      return var0;
   }

   private static String bNC(byte[] var0) {
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
}
