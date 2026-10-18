package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_12075;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_4184;
import net.minecraft.class_4587;
import net.minecraft.class_7833;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.jspecify.annotations.Nullable;

public class jI {
   private static Matrix4f BfOvs = new Matrix4f();
   private static Matrix4f GDhOW = new Matrix4f();
   private static Matrix4f ruTXP = new Matrix4f();
   private static final long PXtDs = gb.aYR(704151637779864399L, -6002197135173590387L, MethodHandles.lookup().lookupClass()).a(135865284138013L);

   private static MatchException bIz(MatchException var0) {
      return var0;
   }

   public static void bIt(class_4587 var0, double var1) {
      var0.method_22904(var1, var1, var1);
   }

   public static class_4587 bIm(Matrix3x2fc var0) {
      class_4587 var1 = new class_4587();
      var1.method_34425(bIl(var0));
      return var1;
   }

   public static class_4587 bIp(double var0, double var2, double var4) {
      return bIo(new class_243(var0, var2, var4));
   }

   public static float bIy() {
      return Math.max(rD.dlmvG.field_1690.method_38521() * 4.0F, 4.0F);
   }

   public static Matrix3x2fStack bIn(@Nullable Matrix3x2fc var0) {
      long var1 = PXtDs ^ 106041187386758L;
      Matrix3x2fStack var3 = new Matrix3x2fStack();

      try {
         if (var0 != null) {
            var3.set(var0);
         }

         return var3;
      } catch (MatchException var4) {
         throw bIz(var4);
      }
   }

   public static void bIv(class_4587 var0, float var1, float var2, float var3, float var4) {
      var0.method_46416(var1, var2, var3);
      var0.method_22907(class_7833.field_40718.rotationDegrees(var4));
      var0.method_46416(-var1, -var2, var3);
   }

   public static Matrix4f bIx(class_12075 var0, float var1) {
      return jK.bIF(((Integer)rD.dlmvG.field_1690.method_41808().method_41753()).floatValue(), var1, bIy());
   }

   public static void bIr(class_4587 var0) {
      class_4184 var1 = rD.dlmvG.field_1773.method_19418();
      class_243 var2 = var1.method_71156().method_22882();
      var0.method_22904(var2.field_1352, var2.field_1351, var2.field_1350);
   }

   public static void bIs(class_4587 var0, class_243 var1) {
      class_4184 var2 = rD.dlmvG.field_1773.method_19418();
      class_243 var3 = var2.method_71156();
      class_243 var4 = var1.method_1020(var3);
      var0.method_22904(var4.field_1352, var4.field_1351, var4.field_1350);
   }

   public static void bIj(Matrix4f var0, Matrix4f var1, Matrix4f var2) {
      BfOvs = new Matrix4f(var0);
      GDhOW = new Matrix4f(var1);
      ruTXP = new Matrix4f(var2);
   }

   public static Matrix4f bIl(Matrix3x2fc var0) {
      return new Matrix4f(var0.m00(), var0.m01(), 0.0F, 0.0F, var0.m10(), var0.m11(), 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 0.0F, var0.m20(), var0.m21(), 0.0F, 1.0F);
   }

   public static class_4587 bIo(class_243 var0) {
      long var1 = PXtDs ^ 45591857539631L;
      class_4587 var4 = new class_4587();
      jH.bIh();
      class_4184 var5 = rD.dlmvG.field_1773.method_19418();
      var4.method_22907(class_7833.field_40714.rotationDegrees(var5.method_19329()));
      var4.method_22907(class_7833.field_40716.rotationDegrees(var5.method_19330() + 180.0F));
      class_243 var6 = var0.method_1020(var5.method_71156());
      var4.method_22904(var6.field_1352, var6.field_1351, var6.field_1350);

      try {
         if (iS.bwL() == null) {
            jH.bIg(new String[2]);
         }

         return var4;
      } catch (MatchException var7) {
         throw bIz(var7);
      }
   }

   public static void bIu(class_4587 var0) {
      class_4184 var1 = rD.dlmvG.field_1773.method_19418();
      var0.method_22907(class_7833.field_40716.rotationDegrees(-var1.method_19330()));
      var0.method_22907(class_7833.field_40714.rotationDegrees(var1.method_19329()));
   }

   public static void bIq(class_4587 var0) {
      class_4184 var1 = rD.dlmvG.field_1773.method_19418();
      var0.method_22907(var1.method_23767());
   }

   public static class_241 bIw(class_243 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jI.PXtDs J
      // 03: ldc2_w 81080288893341
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jH.bIh ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 11: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 14: astore 4
      // 16: astore 3
      // 17: aload 4
      // 19: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 1c: astore 5
      // 1e: aload 0
      // 1f: getfield net/minecraft/class_243.field_1352 D
      // 22: aload 5
      // 24: getfield net/minecraft/class_243.field_1352 D
      // 27: dsub
      // 28: d2f
      // 29: fstore 6
      // 2b: aload 0
      // 2c: getfield net/minecraft/class_243.field_1351 D
      // 2f: aload 5
      // 31: getfield net/minecraft/class_243.field_1351 D
      // 34: dsub
      // 35: d2f
      // 36: fstore 7
      // 38: aload 0
      // 39: getfield net/minecraft/class_243.field_1350 D
      // 3c: aload 5
      // 3e: getfield net/minecraft/class_243.field_1350 D
      // 41: dsub
      // 42: d2f
      // 43: fstore 8
      // 45: new org/joml/Vector4f
      // 48: dup
      // 49: fload 6
      // 4b: fload 7
      // 4d: fload 8
      // 4f: fconst_1
      // 50: invokespecial org/joml/Vector4f.<init> (FFFF)V
      // 53: astore 9
      // 55: aload 9
      // 57: getstatic sixtwo/jI.ruTXP Lorg/joml/Matrix4f;
      // 5a: invokevirtual org/joml/Vector4f.mul (Lorg/joml/Matrix4fc;)Lorg/joml/Vector4f;
      // 5d: getstatic sixtwo/jI.BfOvs Lorg/joml/Matrix4f;
      // 60: invokevirtual org/joml/Vector4f.mul (Lorg/joml/Matrix4fc;)Lorg/joml/Vector4f;
      // 63: getstatic sixtwo/jI.GDhOW Lorg/joml/Matrix4f;
      // 66: invokevirtual org/joml/Vector4f.mul (Lorg/joml/Matrix4fc;)Lorg/joml/Vector4f;
      // 69: pop
      // 6a: aload 9
      // 6c: aload 3
      // 6d: ifnonnull 8f
      // 70: getfield org/joml/Vector4f.w F
      // 73: fconst_0
      // 74: fcmpg
      // 75: ifgt 85
      // 78: goto 7f
      // 7b: invokestatic sixtwo/jI.bIz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: aconst_null
      // 80: areturn
      // 81: invokestatic sixtwo/jI.bIz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 84: athrow
      // 85: aload 9
      // 87: aload 9
      // 89: getfield org/joml/Vector4f.w F
      // 8c: invokevirtual org/joml/Vector4f.div (F)Lorg/joml/Vector4f;
      // 8f: astore 10
      // 91: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 94: astore 11
      // 96: aload 10
      // 98: getfield org/joml/Vector4f.x F
      // 9b: fconst_1
      // 9c: fadd
      // 9d: fconst_2
      // 9e: fdiv
      // 9f: aload 11
      // a1: getfield net/minecraft/class_241.field_1343 F
      // a4: fmul
      // a5: fstore 12
      // a7: fconst_1
      // a8: aload 10
      // aa: getfield org/joml/Vector4f.y F
      // ad: fsub
      // ae: fconst_2
      // af: fdiv
      // b0: aload 11
      // b2: getfield net/minecraft/class_241.field_1342 F
      // b5: fmul
      // b6: fstore 13
      // b8: new net/minecraft/class_241
      // bb: dup
      // bc: fload 12
      // be: fload 13
      // c0: invokespecial net/minecraft/class_241.<init> (FF)V
      // c3: aload 3
      // c4: ifnull d3
      // c7: ldc "TXQKec"
      // c9: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // cc: goto d3
      // cf: invokestatic sixtwo/jI.bIz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d2: athrow
      // d3: areturn
   }

   public static Matrix4f bIk() {
      return new Matrix4f(GDhOW);
   }
}
