package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_238;
import net.minecraft.class_243;

public class pc implements pg {
   private double QbIpw;
   private class_243 wtRZv;
   private static int[] FKHaX;
   private static final long JaKLd = gb.aYR(6618584441570405985L, -1187251238384632253L, MethodHandles.lookup().lookupClass()).a(104743952861888L);

   public class_243 cMC() {
      return this.wtRZv;
   }

   public void cMA() {
      this.wtRZv = null;
   }

   private static MatchException cMH(MatchException var0) {
      return var0;
   }

   public static int[] cMG() {
      return FKHaX;
   }

   public void cME(class_243 var1) {
      this.wtRZv = var1;
   }

   public double cMB() {
      return this.QbIpw;
   }

   public void cMD(double var1) {
      this.QbIpw = var1;
   }

   public static void cMF(int[] var0) {
      FKHaX = var0;
   }

   public pc(double var1) {
      this.QbIpw = var1;
   }

   public pc() {
      this(0.15);
   }

   static {
      if (cMG() != null) {
         cMF(new int[3]);
      }
   }

   @Override
   public class_243 process(class_243 param1, class_238 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pc.JaKLd J
      // 03: ldc2_w 101268935184169
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pc.cMG ()[I
      // 0b: astore 5
      // 0d: aload 0
      // 0e: getfield sixtwo/pc.wtRZv Lnet/minecraft/class_243;
      // 11: aload 5
      // 13: ifnonnull 2c
      // 16: ifnonnull 2b
      // 19: goto 20
      // 1c: invokestatic sixtwo/pc.cMH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: aload 1
      // 22: putfield sixtwo/pc.wtRZv Lnet/minecraft/class_243;
      // 25: aload 1
      // 26: areturn
      // 27: invokestatic sixtwo/pc.cMH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 1
      // 2c: aload 0
      // 2d: getfield sixtwo/pc.wtRZv Lnet/minecraft/class_243;
      // 30: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 33: dstore 6
      // 35: aload 0
      // 36: getfield sixtwo/pc.QbIpw D
      // 39: aload 0
      // 3a: getfield sixtwo/pc.QbIpw D
      // 3d: dmul
      // 3e: dstore 8
      // 40: aload 5
      // 42: ifnonnull 62
      // 45: dload 6
      // 47: dload 8
      // 49: dcmpg
      // 4a: ifge 5d
      // 4d: goto 54
      // 50: invokestatic sixtwo/pc.cMH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 0
      // 55: getfield sixtwo/pc.wtRZv Lnet/minecraft/class_243;
      // 58: areturn
      // 59: invokestatic sixtwo/pc.cMH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 0
      // 5e: aload 1
      // 5f: putfield sixtwo/pc.wtRZv Lnet/minecraft/class_243;
      // 62: aload 1
      // 63: areturn
   }
}
