package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import java.lang.invoke.MethodHandles;
import java.util.function.Consumer;
import mixin.accessors.LevelRendererAccessor;
import net.minecraft.class_10017;
import net.minecraft.class_11658;
import net.minecraft.class_11659;
import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_276;
import net.minecraft.class_4587;

public class kn {
   public static boolean YNOIY = false;
   private static int pzGvS = 0;
   private static final class_11659 Ejyed = new kn$uh();
   private static jC nAplu;
   private static String[] UvnjA;
   private static final long JOztZ = gb.aYR(-731789322928536930L, -5995118959463714035L, MethodHandles.lookup().lookupClass()).a(167346395562571L);

   public static void bQq(RenderPipeline param0, class_276 param1, Consumer<RenderPass> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kn.JOztZ J
      // 003: ldc2_w 127839791378549
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/kn.bQy ()[Ljava/lang/String;
      // 00b: new net/minecraft/class_9799
      // 00e: dup
      // 00f: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 012: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 015: bipush 4
      // 016: imul
      // 017: invokespecial net/minecraft/class_9799.<init> (I)V
      // 01a: astore 6
      // 01c: astore 5
      // 01e: new net/minecraft/class_287
      // 021: dup
      // 022: aload 6
      // 024: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 027: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 02a: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 02d: astore 7
      // 02f: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 032: astore 8
      // 034: aload 8
      // 036: getfield net/minecraft/class_241.field_1343 F
      // 039: fconst_0
      // 03a: fcmpl
      // 03b: aload 5
      // 03d: ifnull 05a
      // 040: ifle 056
      // 043: goto 04a
      // 046: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 049: athrow
      // 04a: aload 8
      // 04c: getfield net/minecraft/class_241.field_1343 F
      // 04f: goto 05b
      // 052: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 055: athrow
      // 056: aload 1
      // 057: getfield net/minecraft/class_276.field_1482 I
      // 05a: i2f
      // 05b: fstore 9
      // 05d: aload 8
      // 05f: getfield net/minecraft/class_241.field_1342 F
      // 062: fconst_0
      // 063: fcmpl
      // 064: aload 5
      // 066: ifnull 083
      // 069: ifle 07f
      // 06c: goto 073
      // 06f: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 072: athrow
      // 073: aload 8
      // 075: getfield net/minecraft/class_241.field_1342 F
      // 078: goto 084
      // 07b: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 07e: athrow
      // 07f: aload 1
      // 080: getfield net/minecraft/class_276.field_1481 I
      // 083: i2f
      // 084: fstore 10
      // 086: aload 7
      // 088: fconst_0
      // 089: fconst_0
      // 08a: fconst_0
      // 08b: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 08e: fconst_0
      // 08f: fconst_1
      // 090: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 095: pop
      // 096: aload 7
      // 098: fconst_0
      // 099: fload 10
      // 09b: fconst_0
      // 09c: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 09f: fconst_0
      // 0a0: fconst_0
      // 0a1: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0a6: pop
      // 0a7: aload 7
      // 0a9: fload 9
      // 0ab: fload 10
      // 0ad: fconst_0
      // 0ae: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 0b1: fconst_1
      // 0b2: fconst_0
      // 0b3: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0b8: pop
      // 0b9: aload 7
      // 0bb: fload 9
      // 0bd: fconst_0
      // 0be: fconst_0
      // 0bf: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 0c2: fconst_1
      // 0c3: fconst_1
      // 0c4: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0c9: pop
      // 0ca: aload 7
      // 0cc: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 0cf: astore 11
      // 0d1: aload 11
      // 0d3: aload 5
      // 0d5: ifnull 0f3
      // 0d8: ifnull 0f1
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e1: athrow
      // 0e2: aload 1
      // 0e3: aload 0
      // 0e4: aload 11
      // 0e6: aload 2
      // 0e7: invokestatic sixtwo/lF.cfJ (Lnet/minecraft/class_276;Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0ea: goto 0f1
      // 0ed: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f0: athrow
      // 0f1: aload 11
      // 0f3: aload 5
      // 0f5: ifnull 104
      // 0f8: ifnull 131
      // 0fb: goto 102
      // 0fe: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 101: athrow
      // 102: aload 11
      // 104: invokevirtual net/minecraft/class_9801.close ()V
      // 107: goto 131
      // 10a: astore 12
      // 10c: aload 11
      // 10e: aload 5
      // 110: ifnull 11f
      // 113: ifnull 12e
      // 116: goto 11d
      // 119: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 11c: athrow
      // 11d: aload 11
      // 11f: invokevirtual net/minecraft/class_9801.close ()V
      // 122: goto 12e
      // 125: astore 13
      // 127: aload 12
      // 129: aload 13
      // 12b: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 12e: aload 12
      // 130: athrow
      // 131: aload 6
      // 133: invokevirtual net/minecraft/class_9799.close ()V
      // 136: goto 14f
      // 139: astore 7
      // 13b: aload 6
      // 13d: invokevirtual net/minecraft/class_9799.close ()V
      // 140: goto 14c
      // 143: astore 8
      // 145: aload 7
      // 147: aload 8
      // 149: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 14c: aload 7
      // 14e: athrow
      // 14f: aload 5
      // 151: ifnonnull 160
      // 154: ldc "TzJsIb"
      // 156: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 159: goto 160
      // 15c: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 15f: athrow
      // 160: return
   }

   public static boolean bQp() {
      long var0 = JOztZ ^ 105114984615484L;
      String[] var2 = bQy();

      try {
         if (var2 == null) {
            return (boolean)pzGvS;
         }

         if (pzGvS > 0) {
            return (boolean)1;
         }
      } catch (MatchException var3) {
         throw bQz(var3);
      }

      return (boolean)0;
   }

   static void bQu(class_1297 var0, float var1, class_4587 var2) {
      class_11658 var3 = ((LevelRendererAccessor)rD.dlmvG.field_1769).getLevelRenderState();

      try {
         class_10017 var4 = rD.dlmvG.method_1561().method_72977(var0, var1);
         class_243 var5 = var3.field_63082.field_63078;
         rD.dlmvG
            .method_1561()
            .method_72976(
               var4, var3.field_63082, var4.field_53325 - var5.field_1352, var4.field_53326 - var5.field_1351, var4.field_53327 - var5.field_1350, var2, Ejyed
            );
      } catch (Throwable var6) {
      }
   }

   public static void bQv() {
      bQw().bGY();
   }

   public static String[] bQy() {
      return UvnjA;
   }

   public static void bQr(RenderPipeline param0, class_276 param1, Consumer<RenderPass> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kn.JOztZ J
      // 03: ldc2_w 62590962326875
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/kn.bQy ()[Ljava/lang/String;
      // 0b: new net/minecraft/class_9799
      // 0e: dup
      // 0f: getstatic net/minecraft/class_290.field_1592 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 12: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 15: bipush 4
      // 16: imul
      // 17: invokespecial net/minecraft/class_9799.<init> (I)V
      // 1a: astore 6
      // 1c: astore 5
      // 1e: new net/minecraft/class_287
      // 21: dup
      // 22: aload 6
      // 24: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 27: getstatic net/minecraft/class_290.field_1592 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 2a: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 2d: astore 7
      // 2f: aload 7
      // 31: ldc -1.0
      // 33: ldc -1.0
      // 35: fconst_0
      // 36: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 39: pop
      // 3a: aload 7
      // 3c: fconst_1
      // 3d: ldc -1.0
      // 3f: fconst_0
      // 40: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 43: pop
      // 44: aload 7
      // 46: fconst_1
      // 47: fconst_1
      // 48: fconst_0
      // 49: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 4c: pop
      // 4d: aload 7
      // 4f: ldc -1.0
      // 51: fconst_1
      // 52: fconst_0
      // 53: invokevirtual net/minecraft/class_287.method_22912 (FFF)Lnet/minecraft/class_4588;
      // 56: pop
      // 57: aload 7
      // 59: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 5c: astore 8
      // 5e: aload 8
      // 60: aload 5
      // 62: ifnull 80
      // 65: ifnull 7e
      // 68: goto 6f
      // 6b: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6e: athrow
      // 6f: aload 1
      // 70: aload 0
      // 71: aload 8
      // 73: aload 2
      // 74: invokestatic sixtwo/lF.cfJ (Lnet/minecraft/class_276;Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 77: goto 7e
      // 7a: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7d: athrow
      // 7e: aload 8
      // 80: aload 5
      // 82: ifnull 91
      // 85: ifnull be
      // 88: goto 8f
      // 8b: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8e: athrow
      // 8f: aload 8
      // 91: invokevirtual net/minecraft/class_9801.close ()V
      // 94: goto be
      // 97: astore 9
      // 99: aload 8
      // 9b: aload 5
      // 9d: ifnull ac
      // a0: ifnull bb
      // a3: goto aa
      // a6: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a9: athrow
      // aa: aload 8
      // ac: invokevirtual net/minecraft/class_9801.close ()V
      // af: goto bb
      // b2: astore 10
      // b4: aload 9
      // b6: aload 10
      // b8: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // bb: aload 9
      // bd: athrow
      // be: aload 6
      // c0: invokevirtual net/minecraft/class_9799.close ()V
      // c3: goto dc
      // c6: astore 7
      // c8: aload 6
      // ca: invokevirtual net/minecraft/class_9799.close ()V
      // cd: goto d9
      // d0: astore 8
      // d2: aload 7
      // d4: aload 8
      // d6: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // d9: aload 7
      // db: athrow
      // dc: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // df: ifnonnull f0
      // e2: bipush 4
      // e3: anewarray 164
      // e6: invokestatic sixtwo/kn.bQx ([Ljava/lang/String;)V
      // e9: goto f0
      // ec: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // ef: athrow
      // f0: return
   }

   private static Throwable bQz(Throwable var0) {
      return var0;
   }

   public static void bQo(Runnable var0) {
      pzGvS++;

      try {
         var0.run();
      } finally {
         pzGvS--;
      }
   }

   public static void bQs(class_1297 var0, float var1, class_4587 var2) {
      lF.cfA(bQt(var0, var1, var2));
   }

   public static void bQx(String[] var0) {
      UvnjA = var0;
   }

   private static jC bQw() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kn.JOztZ J
      // 03: ldc2_w 75670510594187
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/kn.bQy ()[Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/kn.nAplu Lsixtwo/jC;
      // 0f: aload 2
      // 10: ifnull 31
      // 13: ifnonnull 2e
      // 16: goto 1d
      // 19: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: new sixtwo/jC
      // 20: dup
      // 21: invokespecial sixtwo/jC.<init> ()V
      // 24: putstatic sixtwo/kn.nAplu Lsixtwo/jC;
      // 27: goto 2e
      // 2a: invokestatic sixtwo/kn.bQz (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2d: athrow
      // 2e: getstatic sixtwo/kn.nAplu Lsixtwo/jC;
      // 31: areturn
   }

   static {
      String[] var10000 = new String[3];
      bQx(var10000);
   }

   public static lI bQt(class_1297 var0, float var1, class_4587 var2) {
      return new ko(var0, var1, var2);
   }
}
