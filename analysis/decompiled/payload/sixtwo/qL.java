package sixtwo;

import native.Loader;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_243;

public class qL {
   private final mt<ot> elfkz = new mt<>(true);
   private ot JYBGF;
   private ov qkMAI;
   private ov gufEg;
   private ov adYOd = ov.cGv(0.0F, 0.0F);
   private static boolean sHqVn;
   private static long sVGUv;

   public qL() {
      hF.bdI(this);
   }

   static {
      Loader.doInit(qL.class);
      _b26acc6d65d5669e1307483cf7b7d82d();
   }

   public native ot dbF();

   public native ov dbY();

   public static native boolean dcc();

   public static native boolean dcb();

   public native void dbD(ov var1);

   public native void dbK();

   @hG(
      priority = mw.CRITICAL
   )
   public void dbN(gH$th var1) {
      gv var2 = new gv();
      var2.bdV();
      this.dbK();
   }

   private static native MatchException dcd(MatchException var0);

   public native void dbH(ov var1, ou var2, mw var3, gg var4);

   public native void dbJ(ot var1, mw var2, gg var3);

   public native double dbR(ov var1, ov var2);

   public native float dbS(float var1, float var2);

   public native void dbG(ov var1, class_1309 var2, ou var3, mw var4, gg var5);

   private native void dbL(class_1657 var1, ov var2);

   public native ot dbW();

   public static native void dca(boolean var0);

   @hG
   public native void dbM(hb var1);

   @hG
   public native void dbO(gL$tj var1);

   private native class_243 dbQ(class_243 var1, class_243 var2, float var3);

   public native void dbU();

   @hG
   public native void dbP(gL$tk var1);

   public native mt<ot> dbV();

   private static native void _b26acc6d65d5669e1307483cf7b7d82d();

   public native boolean dbT();

   public ov dbX() {
      return this.qkMAI;
   }

   public ot dbE() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qL.sVGUv J
      // 03: ldc2_w 58062424164969
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qL.dcb ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 33
      // 11: getfield sixtwo/qL.elfkz Lsixtwo/mt;
      // 14: invokevirtual sixtwo/mt.cmd ()Ljava/lang/Object;
      // 17: ifnull 32
      // 1a: goto 21
      // 1d: invokestatic sixtwo/qL.dcd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/qL.elfkz Lsixtwo/mt;
      // 25: invokevirtual sixtwo/mt.cmd ()Ljava/lang/Object;
      // 28: checkcast sixtwo/ot
      // 2b: goto 36
      // 2e: invokestatic sixtwo/qL.dcd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: getfield sixtwo/qL.JYBGF Lsixtwo/ot;
      // 36: areturn
   }

   public native ov dbZ();

   public native void dbI(class_243 var1, ou var2, mw var3, gg var4);

   public ov dbC() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qL.sVGUv J
      // 03: ldc2_w 37041078027627
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qL.dcb ()Z
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 11: invokevirtual net/minecraft/class_746.method_5802 ()Lnet/minecraft/class_241;
      // 14: astore 4
      // 16: istore 3
      // 17: aload 0
      // 18: getfield sixtwo/qL.qkMAI Lsixtwo/ov;
      // 1b: iload 3
      // 1c: ifeq 34
      // 1f: ifnull 37
      // 22: goto 29
      // 25: invokestatic sixtwo/qL.dcd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 0
      // 2a: getfield sixtwo/qL.qkMAI Lsixtwo/ov;
      // 2d: goto 34
      // 30: invokestatic sixtwo/qL.dcd (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: goto 3c
      // 37: aload 4
      // 39: invokestatic sixtwo/ov.cGw (Lnet/minecraft/class_241;)Lsixtwo/ov;
      // 3c: areturn
   }
}
