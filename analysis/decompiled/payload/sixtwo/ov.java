package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1297;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_3532;

public class ov {
   private float WjcUH;
   private float pDaqa;
   private static iS[] xZSRu;
   private static final long RVwSP = gb.aYR(3040186214229664376L, 1947325989950969753L, MethodHandles.lookup().lookupClass()).a(207253909410786L);

   private ov(float var1, float var2) {
      this.WjcUH = var1;
      this.pDaqa = var2;
   }

   static {
      if (cGN() == null) {
         cGM(new iS[4]);
      }
   }

   @Override
   public boolean equals(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ov.RVwSP J
      // 03: ldc2_w 94068068905981
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ov.cGN ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 25
      // 13: aload 1
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: ifnull 96
      // 28: aload 0
      // 29: invokevirtual java/lang/Object.getClass ()Ljava/lang/Class;
      // 2c: aload 4
      // 2e: ifnull 4e
      // 31: goto 38
      // 34: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 1
      // 39: invokevirtual java/lang/Object.getClass ()Ljava/lang/Class;
      // 3c: if_acmpne 96
      // 3f: goto 46
      // 42: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 1
      // 47: goto 4e
      // 4a: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: checkcast sixtwo/ov
      // 51: astore 5
      // 53: aload 5
      // 55: getfield sixtwo/ov.WjcUH F
      // 58: aload 0
      // 59: getfield sixtwo/ov.WjcUH F
      // 5c: invokestatic java/lang/Float.compare (FF)I
      // 5f: aload 4
      // 61: ifnull 81
      // 64: ifne 94
      // 67: goto 6e
      // 6a: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: aload 5
      // 70: getfield sixtwo/ov.pDaqa F
      // 73: aload 0
      // 74: getfield sixtwo/ov.pDaqa F
      // 77: invokestatic java/lang/Float.compare (FF)I
      // 7a: goto 81
      // 7d: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 4
      // 83: ifnull 91
      // 86: ifne 94
      // 89: goto 90
      // 8c: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: bipush 1
      // 91: goto 95
      // 94: bipush 0
      // 95: ireturn
      // 96: bipush 0
      // 97: ireturn
   }

   public class_243 cGH() {
      long var1 = RVwSP ^ 114074944291718L;
      float var4 = this.pDaqa * (float) (Math.PI / 180.0);
      float var5 = -this.WjcUH * (float) (Math.PI / 180.0);
      iS[] var10000 = cGN();
      float var6 = class_3532.method_15362(var5);
      float var7 = class_3532.method_15374(var5);
      float var8 = class_3532.method_15362(var4);
      iS[] var3 = var10000;
      float var9 = class_3532.method_15374(var4);

      try {
         class_243 var11 = new class_243(var7 * var8, -var9, var6 * var8);
         if (var3 == null) {
            iS.bwK("OgWBT");
         }

         return var11;
      } catch (MatchException var10) {
         throw cGO(var10);
      }
   }

   public float cGJ() {
      return this.pDaqa;
   }

   public float cGI() {
      return this.WjcUH;
   }

   public static ov cGv(float var0, float var1) {
      return new ov(var0, var1);
   }

   public void cGK(float var1) {
      this.WjcUH = var1;
   }

   public static iS[] cGN() {
      return xZSRu;
   }

   private float cGG(float var1, float var2, double var3) {
      float var5 = var1 - var2;
      return var2 + (float)Math.round(var5 / var3) * (float)var3;
   }

   private static MatchException cGO(MatchException var0) {
      return var0;
   }

   public static ov cGx(class_243 var0) {
      return new ov(
         (float)class_3532.method_15338(Math.toDegrees(Math.atan2(var0.field_1350, var0.field_1352)) - 90.0),
         (float)class_3532.method_15338(Math.toDegrees(-Math.atan2(var0.field_1351, Math.hypot(var0.field_1352, var0.field_1350))))
      );
   }

   public ov cGC(ov var1) {
      return new ov(this.WjcUH - var1.WjcUH, this.pDaqa - var1.pDaqa);
   }

   public void cGE(class_1297 var1) {
      var1.method_36456(this.WjcUH);
      var1.method_36457(this.pDaqa);
   }

   public void cGL(float var1) {
      this.pDaqa = var1;
   }

   public ov cGB(ov var1) {
      return new ov(this.WjcUH + var1.WjcUH, this.pDaqa + var1.pDaqa);
   }

   public static void cGM(iS[] var0) {
      xZSRu = var0;
   }

   public ov cGF() {
      double var1 = mZ.csr();
      ov var3 = rD.dlX().dbZ();
      float var4 = this.cGG(this.WjcUH, var3.WjcUH, var1);
      float var5 = this.cGG(this.pDaqa, var3.pDaqa, var1);
      return new ov(var4, class_3532.method_15363(var5, -90.0F, 90.0F));
   }

   public static ov cGw(class_241 var0) {
      return new ov(var0.field_1342, var0.field_1343);
   }

   public static ov cGz(class_1297 var0) {
      return new ov(var0.method_36454(), var0.method_36455());
   }

   public float cGD(ov var1) {
      float var2 = class_3532.method_15393(var1.WjcUH - this.WjcUH);
      float var3 = var1.pDaqa - this.pDaqa;
      return (float)Math.sqrt(var2 * var2 + var3 * var3);
   }

   public static ov cGA() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ov.RVwSP J
      // 03: ldc2_w 55654251208474
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/ov.cGN ()[Lsixtwo/iS;
      // 0b: astore 2
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: aload 2
      // 10: ifnull 30
      // 13: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 16: ifnull 2d
      // 19: goto 20
      // 1c: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 26: goto 33
      // 29: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 33: astore 3
      // 34: aload 3
      // 35: ifnonnull 42
      // 38: fconst_0
      // 39: fconst_0
      // 3a: invokestatic sixtwo/ov.cGv (FF)Lsixtwo/ov;
      // 3d: areturn
      // 3e: invokestatic sixtwo/ov.cGO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 45: invokevirtual net/minecraft/class_310.method_61966 ()Lnet/minecraft/class_9779;
      // 48: bipush 1
      // 49: invokeinterface net/minecraft/class_9779.method_60637 (Z)F 2
      // 4e: fstore 4
      // 50: aload 3
      // 51: fload 4
      // 53: invokevirtual net/minecraft/class_1297.method_5705 (F)F
      // 56: aload 3
      // 57: fload 4
      // 59: invokevirtual net/minecraft/class_1297.method_5695 (F)F
      // 5c: invokestatic sixtwo/ov.cGv (FF)Lsixtwo/ov;
      // 5f: areturn
   }

   public static ov cGy(class_243 var0) {
      class_243 var1 = rD.dlmvG.field_1724.method_33571();
      return cGx(var0.method_1020(var1));
   }
}
