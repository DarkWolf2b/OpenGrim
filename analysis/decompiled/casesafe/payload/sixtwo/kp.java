package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import java.util.function.BiFunction;
import net.minecraft.class_243;
import net.minecraft.class_4587;

public class kp {
   private static int WPTmC;
   private static final long TZtGn = gb.aYR(-8757875304823275970L, 3887249105142213068L, MethodHandles.lookup().lookupClass()).a(235240955982368L);

   static {
      if (bQE() == 0) {
         bQC(8);
      }
   }

   public static int bQE() {
      int var0 = bQD();

      try {
         return var0 == 0 ? 30 : 0;
      } catch (MatchException var1) {
         throw bQF(var1);
      }
   }

   public static void bQC(int var0) {
      WPTmC = var0;
   }

   private static Throwable bQF(Throwable var0) {
      return var0;
   }

   public static int bQD() {
      return WPTmC;
   }

   public static void bQB(
      class_4587 param0, List<class_243> param1, int param2, int param3, int param4, boolean param5, float param6, BiFunction<Integer, Integer, mG> param7
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kp.TZtGn J
      // 003: ldc2_w 93592290272581
      // 006: lxor
      // 007: lstore 8
      // 009: invokestatic sixtwo/kp.bQD ()I
      // 00c: aload 0
      // 00d: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 010: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 013: astore 11
      // 015: new net/minecraft/class_9799
      // 018: dup
      // 019: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 01c: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 01f: iload 4
      // 021: iload 3
      // 022: isub
      // 023: bipush 1
      // 024: iadd
      // 025: imul
      // 026: invokespecial net/minecraft/class_9799.<init> (I)V
      // 029: astore 12
      // 02b: istore 10
      // 02d: new net/minecraft/class_287
      // 030: dup
      // 031: aload 12
      // 033: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_29345 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 036: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 039: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 03c: astore 13
      // 03e: bipush 0
      // 03f: istore 14
      // 041: iload 3
      // 042: istore 15
      // 044: iload 15
      // 046: iload 4
      // 048: if_icmpgt 0b5
      // 04b: aload 7
      // 04d: iload 14
      // 04f: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 052: iload 2
      // 053: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 056: invokeinterface java/util/function/BiFunction.apply (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 05b: checkcast sixtwo/mG
      // 05e: astore 16
      // 060: aload 1
      // 061: iload 15
      // 063: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 068: checkcast net/minecraft/class_243
      // 06b: astore 17
      // 06d: iload 5
      // 06f: ifeq 07e
      // 072: aload 17
      // 074: getfield net/minecraft/class_243.field_1351 D
      // 077: goto 087
      // 07a: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 07d: athrow
      // 07e: aload 17
      // 080: getfield net/minecraft/class_243.field_1351 D
      // 083: fload 6
      // 085: f2d
      // 086: dadd
      // 087: dstore 18
      // 089: aload 13
      // 08b: aload 11
      // 08d: aload 17
      // 08f: getfield net/minecraft/class_243.field_1352 D
      // 092: d2f
      // 093: dload 18
      // 095: d2f
      // 096: aload 17
      // 098: getfield net/minecraft/class_243.field_1350 D
      // 09b: d2f
      // 09c: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 09f: aload 16
      // 0a1: invokevirtual sixtwo/mG.coh ()I
      // 0a4: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0a9: pop
      // 0aa: iinc 15 1
      // 0ad: iinc 14 1
      // 0b0: iload 10
      // 0b2: ifeq 044
      // 0b5: aload 13
      // 0b7: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 0ba: astore 14
      // 0bc: aload 14
      // 0be: iload 10
      // 0c0: ifne 0de
      // 0c3: ifnull 0dc
      // 0c6: goto 0cd
      // 0c9: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0cc: athrow
      // 0cd: getstatic sixtwo/kR.gNqqy Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0d0: aload 14
      // 0d2: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0db: athrow
      // 0dc: aload 14
      // 0de: iload 10
      // 0e0: ifne 0ef
      // 0e3: ifnull 11c
      // 0e6: goto 0ed
      // 0e9: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ec: athrow
      // 0ed: aload 14
      // 0ef: invokevirtual net/minecraft/class_9801.close ()V
      // 0f2: goto 11c
      // 0f5: astore 15
      // 0f7: aload 14
      // 0f9: iload 10
      // 0fb: ifne 10a
      // 0fe: ifnull 119
      // 101: goto 108
      // 104: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 107: athrow
      // 108: aload 14
      // 10a: invokevirtual net/minecraft/class_9801.close ()V
      // 10d: goto 119
      // 110: astore 16
      // 112: aload 15
      // 114: aload 16
      // 116: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 119: aload 15
      // 11b: athrow
      // 11c: aload 12
      // 11e: invokevirtual net/minecraft/class_9799.close ()V
      // 121: goto 13a
      // 124: astore 13
      // 126: aload 12
      // 128: invokevirtual net/minecraft/class_9799.close ()V
      // 12b: goto 137
      // 12e: astore 14
      // 130: aload 13
      // 132: aload 14
      // 134: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 137: aload 13
      // 139: athrow
      // 13a: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 13d: ifnonnull 14f
      // 140: iinc 10 1
      // 143: iload 10
      // 145: invokestatic sixtwo/kp.bQC (I)V
      // 148: goto 14f
      // 14b: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 14e: athrow
      // 14f: return
   }

   public static void bQA(class_4587 param0, List<class_243> param1, int param2, int param3, int param4, float param5, BiFunction<Integer, Integer, mG> param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kp.TZtGn J
      // 003: ldc2_w 69287183197300
      // 006: lxor
      // 007: lstore 7
      // 009: invokestatic sixtwo/kp.bQE ()I
      // 00c: aload 0
      // 00d: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 010: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 013: astore 10
      // 015: istore 9
      // 017: new net/minecraft/class_9799
      // 01a: dup
      // 01b: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 01e: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 021: iload 4
      // 023: iload 3
      // 024: isub
      // 025: bipush 1
      // 026: iadd
      // 027: imul
      // 028: bipush 2
      // 029: imul
      // 02a: invokespecial net/minecraft/class_9799.<init> (I)V
      // 02d: astore 11
      // 02f: new net/minecraft/class_287
      // 032: dup
      // 033: aload 11
      // 035: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27380 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 038: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 03b: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 03e: astore 12
      // 040: bipush 0
      // 041: istore 13
      // 043: iload 3
      // 044: istore 14
      // 046: iload 14
      // 048: iload 4
      // 04a: if_icmpgt 0d7
      // 04d: aload 6
      // 04f: iload 13
      // 051: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 054: iload 2
      // 055: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 058: invokeinterface java/util/function/BiFunction.apply (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 05d: checkcast sixtwo/mG
      // 060: astore 15
      // 062: aload 1
      // 063: iload 14
      // 065: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 06a: checkcast net/minecraft/class_243
      // 06d: astore 16
      // 06f: aload 12
      // 071: aload 10
      // 073: aload 16
      // 075: getfield net/minecraft/class_243.field_1352 D
      // 078: d2f
      // 079: aload 16
      // 07b: getfield net/minecraft/class_243.field_1351 D
      // 07e: fload 5
      // 080: f2d
      // 081: dadd
      // 082: d2f
      // 083: aload 16
      // 085: getfield net/minecraft/class_243.field_1350 D
      // 088: d2f
      // 089: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 08c: aload 15
      // 08e: invokevirtual sixtwo/mG.coh ()I
      // 091: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 096: pop
      // 097: aload 12
      // 099: iload 9
      // 09b: ifeq 0d9
      // 09e: aload 10
      // 0a0: aload 16
      // 0a2: getfield net/minecraft/class_243.field_1352 D
      // 0a5: d2f
      // 0a6: aload 16
      // 0a8: getfield net/minecraft/class_243.field_1351 D
      // 0ab: d2f
      // 0ac: aload 16
      // 0ae: getfield net/minecraft/class_243.field_1350 D
      // 0b1: d2f
      // 0b2: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0b5: aload 15
      // 0b7: invokevirtual sixtwo/mG.coh ()I
      // 0ba: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0bf: pop
      // 0c0: iinc 14 1
      // 0c3: iinc 13 1
      // 0c6: iload 9
      // 0c8: ifne 046
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d1: athrow
      // 0d2: ldc "w9VZfb"
      // 0d4: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 0d7: aload 12
      // 0d9: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 0dc: astore 13
      // 0de: aload 13
      // 0e0: iload 9
      // 0e2: ifeq 100
      // 0e5: ifnull 0fe
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ee: athrow
      // 0ef: getstatic sixtwo/kR.agqAS Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0f2: aload 13
      // 0f4: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 0f7: goto 0fe
      // 0fa: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0fd: athrow
      // 0fe: aload 13
      // 100: iload 9
      // 102: ifeq 111
      // 105: ifnull 13e
      // 108: goto 10f
      // 10b: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10e: athrow
      // 10f: aload 13
      // 111: invokevirtual net/minecraft/class_9801.close ()V
      // 114: goto 13e
      // 117: astore 14
      // 119: aload 13
      // 11b: iload 9
      // 11d: ifeq 12c
      // 120: ifnull 13b
      // 123: goto 12a
      // 126: invokestatic sixtwo/kp.bQF (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 129: athrow
      // 12a: aload 13
      // 12c: invokevirtual net/minecraft/class_9801.close ()V
      // 12f: goto 13b
      // 132: astore 15
      // 134: aload 14
      // 136: aload 15
      // 138: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 13b: aload 14
      // 13d: athrow
      // 13e: aload 11
      // 140: invokevirtual net/minecraft/class_9799.close ()V
      // 143: goto 15c
      // 146: astore 12
      // 148: aload 11
      // 14a: invokevirtual net/minecraft/class_9799.close ()V
      // 14d: goto 159
      // 150: astore 13
      // 152: aload 12
      // 154: aload 13
      // 156: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 159: aload 12
      // 15b: athrow
      // 15c: return
   }
}
