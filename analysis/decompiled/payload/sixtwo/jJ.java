package sixtwo;

import java.lang.invoke.MethodHandles;
import mixin.accessors.LevelRendererAccessor;
import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_2586;
import net.minecraft.class_4604;

public class jJ {
   private static final long lrkPY = gb.aYR(-2468805518013952715L, 5312314740014689892L, MethodHandles.lookup().lookupClass()).a(43666576135917L);

   private static MatchException bIE(MatchException var0) {
      return var0;
   }

   private static class_4604 bID() {
      long var0 = lrkPY ^ 25755045233819L;
      String[] var10000 = jH.bIh();
      LevelRendererAccessor var3 = (LevelRendererAccessor)rD.dlmvG.field_1769;
      class_4604 var4 = var3.getCapturedFrustum();
      String[] var2 = var10000;

      label27: {
         try {
            if (var2 != null) {
               return var4;
            }

            if (var4 != null) {
               break label27;
            }
         } catch (MatchException var6) {
            throw bIE(var6);
         }

         return ((mN)rD.dlmvG.field_1769).getCullingFrustum();
      }

      class_243 var5 = ((mN)rD.dlmvG.field_1769).getFrustumPos();
      var4.method_23088(var5.field_1352, var5.field_1351, var5.field_1350);
      return var4;
   }

   public static boolean bIB(class_1297 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jJ.lrkPY J
      // 03: ldc2_w 81279821106055
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jH.bIh ()[Ljava/lang/String;
      // 0b: invokestatic sixtwo/jJ.bID ()Lnet/minecraft/class_4604;
      // 0e: astore 4
      // 10: astore 3
      // 11: aload 4
      // 13: aload 3
      // 14: ifnonnull 29
      // 17: ifnonnull 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jJ.bIE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: bipush 0
      // 22: ireturn
      // 23: invokestatic sixtwo/jJ.bIE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: aload 0
      // 2a: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 2d: invokevirtual net/minecraft/class_4604.method_23093 (Lnet/minecraft/class_238;)Z
      // 30: ireturn
   }

   public static boolean bIC(class_2586 var0) {
      return bIA(var0.method_11016().method_46558());
   }

   public static boolean bIA(class_243 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jJ.lrkPY J
      // 03: ldc2_w 19644006163410
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jH.bIh ()[Ljava/lang/String;
      // 0b: invokestatic sixtwo/jJ.bID ()Lnet/minecraft/class_4604;
      // 0e: astore 4
      // 10: astore 3
      // 11: aload 4
      // 13: aload 3
      // 14: ifnonnull 29
      // 17: ifnonnull 27
      // 1a: goto 21
      // 1d: invokestatic sixtwo/jJ.bIE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: bipush 0
      // 22: ireturn
      // 23: invokestatic sixtwo/jJ.bIE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: new net/minecraft/class_238
      // 2c: dup
      // 2d: aload 0
      // 2e: getfield net/minecraft/class_243.field_1352 D
      // 31: ldc2_w 0.5
      // 34: dsub
      // 35: aload 0
      // 36: getfield net/minecraft/class_243.field_1351 D
      // 39: ldc2_w 0.5
      // 3c: dsub
      // 3d: aload 0
      // 3e: getfield net/minecraft/class_243.field_1350 D
      // 41: ldc2_w 0.5
      // 44: dsub
      // 45: aload 0
      // 46: getfield net/minecraft/class_243.field_1352 D
      // 49: ldc2_w 0.5
      // 4c: dadd
      // 4d: aload 0
      // 4e: getfield net/minecraft/class_243.field_1351 D
      // 51: ldc2_w 0.5
      // 54: dadd
      // 55: aload 0
      // 56: getfield net/minecraft/class_243.field_1350 D
      // 59: ldc2_w 0.5
      // 5c: dadd
      // 5d: invokespecial net/minecraft/class_238.<init> (DDDDDD)V
      // 60: invokevirtual net/minecraft/class_4604.method_23093 (Lnet/minecraft/class_238;)Z
      // 63: ireturn
   }
}
