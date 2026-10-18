package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11905;
import net.minecraft.class_11908;
import net.minecraft.class_11909;
import net.minecraft.class_241;
import net.minecraft.class_2561;
import net.minecraft.class_332;
import net.minecraft.class_437;
import org.jspecify.annotations.NonNull;

public abstract class av extends class_437 implements cs {
   protected final rk Weytw;
   protected boolean VWsmm;
   private static boolean LSCIa;
   private static final long oVYdO = gb.aYR(5327485615965762991L, -6615214864910727710L, MethodHandles.lookup().lookupClass()).a(37594205416973L);
   private static final long myUnc;

   protected av() {
      long var1 = oVYdO ^ 30088186513181L;
      super(class_2561.method_43473());
      this.Weytw = new rk((int)myUnc);
      this.VWsmm = true;
   }

   static {
      long var0 = oVYdO ^ 135637812438228L;
      sk(false);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -3729010028508391083L;
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
      myUnc = var7;
   }

   public static boolean sl() {
      return LSCIa;
   }

   protected abstract class_241 n();

   public static boolean sm() {
      boolean var0 = sl();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw sn(var1);
      }
   }

   public abstract void m(lC var1);

   protected void si() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 7335011637379
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/ad.rmmkh Lsixtwo/ad;
      // 0f: ifnonnull 22
      // 12: invokestatic sixtwo/rD.dme ()Lsixtwo/qS;
      // 15: invokevirtual sixtwo/qS.ddY ()Z
      // 18: ifeq 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: getstatic sixtwo/iX.HpSlL [Lnet/minecraft/class_304;
      // 2a: astore 4
      // 2c: aload 4
      // 2e: arraylength
      // 2f: istore 5
      // 31: bipush 0
      // 32: istore 6
      // 34: iload 6
      // 36: iload 5
      // 38: if_icmpge 59
      // 3b: aload 4
      // 3d: iload 6
      // 3f: aaload
      // 40: astore 7
      // 42: aload 7
      // 44: aload 7
      // 46: invokevirtual net/minecraft/class_304.method_1429 ()Lnet/minecraft/class_3675$class_306;
      // 49: invokevirtual net/minecraft/class_3675$class_306.method_1444 ()I
      // 4c: invokestatic sixtwo/rr.diW (I)Z
      // 4f: invokevirtual net/minecraft/class_304.method_23481 (Z)V
      // 52: iinc 6 1
      // 55: aload 3
      // 56: ifnonnull 34
      // 59: return
   }

   public rk sj() {
      return this.Weytw;
   }

   protected double sh() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 91873788796312
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: ldc2_w 2.0
      // 0e: dstore 4
      // 10: astore 3
      // 11: aload 0
      // 12: invokevirtual sixtwo/av.n ()Lnet/minecraft/class_241;
      // 15: astore 6
      // 17: aload 6
      // 19: aload 3
      // 1a: ifnull 29
      // 1d: ifnull 58
      // 20: goto 27
      // 23: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 6
      // 29: getfield net/minecraft/class_241.field_1343 F
      // 2c: fconst_0
      // 2d: fcmpg
      // 2e: aload 3
      // 2f: ifnull 55
      // 32: ifle 58
      // 35: goto 3c
      // 38: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: aload 6
      // 3e: aload 3
      // 3f: ifnull 62
      // 42: goto 49
      // 45: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: getfield net/minecraft/class_241.field_1342 F
      // 4c: fconst_0
      // 4d: fcmpg
      // 4e: goto 55
      // 51: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: ifgt 5f
      // 58: dload 4
      // 5a: dreturn
      // 5b: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: invokestatic sixtwo/rm.dip ()Lnet/minecraft/class_241;
      // 62: astore 7
      // 64: aload 7
      // 66: getfield net/minecraft/class_241.field_1343 F
      // 69: aload 6
      // 6b: getfield net/minecraft/class_241.field_1343 F
      // 6e: fdiv
      // 6f: f2d
      // 70: dstore 8
      // 72: aload 7
      // 74: getfield net/minecraft/class_241.field_1342 F
      // 77: aload 6
      // 79: getfield net/minecraft/class_241.field_1342 F
      // 7c: fdiv
      // 7d: f2d
      // 7e: dstore 10
      // 80: dload 8
      // 82: dload 10
      // 84: invokestatic java/lang/Math.min (DD)D
      // 87: dstore 12
      // 89: dload 12
      // 8b: aload 3
      // 8c: ifnull ad
      // 8f: invokestatic java/lang/Double.isFinite (D)Z
      // 92: ifne a3
      // 95: goto 9c
      // 98: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: dload 4
      // 9e: dreturn
      // 9f: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a2: athrow
      // a3: dload 12
      // a5: ldc2_w 0.5
      // a8: dload 4
      // aa: invokestatic net/minecraft/class_3532.method_15350 (DDD)D
      // ad: dreturn
   }

   public boolean closing() {
      return this.VWsmm;
   }

   private static MatchException sn(MatchException var0) {
      return var0;
   }

   public float sf() {
      return 0.5F + 0.5F * this.Weytw.dhj();
   }

   public static void sk(boolean var0) {
      LSCIa = var0;
   }

   protected void sg() {
      kk.bPH();
   }

   public final boolean method_25401(double param1, double param3, double param5, double param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 26693722247041
      // 06: lxor
      // 07: lstore 9
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: invokestatic sixtwo/rm.dis ()Lnet/minecraft/class_241;
      // 0f: astore 12
      // 11: astore 11
      // 13: aload 0
      // 14: aload 12
      // 16: getfield net/minecraft/class_241.field_1343 F
      // 19: f2d
      // 1a: aload 12
      // 1c: getfield net/minecraft/class_241.field_1342 F
      // 1f: f2d
      // 20: dload 7
      // 22: invokevirtual sixtwo/av.onMouseScrolled (DDD)Z
      // 25: aload 11
      // 27: ifnull 44
      // 2a: ifeq 3a
      // 2d: goto 34
      // 30: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: bipush 1
      // 35: ireturn
      // 36: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: dload 1
      // 3c: dload 3
      // 3d: dload 5
      // 3f: dload 7
      // 41: invokespecial net/minecraft/class_437.method_25401 (DDDD)Z
      // 44: ireturn
   }

   public final boolean method_25406(class_11909 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 48198692962555
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: aload 1
      // 0c: invokevirtual net/minecraft/class_11909.method_74245 ()I
      // 0f: invokestatic sixtwo/mA.cmN (I)Lsixtwo/mA;
      // 12: astore 5
      // 14: astore 4
      // 16: invokestatic sixtwo/rm.dis ()Lnet/minecraft/class_241;
      // 19: astore 6
      // 1b: aload 0
      // 1c: aload 6
      // 1e: getfield net/minecraft/class_241.field_1343 F
      // 21: f2d
      // 22: aload 6
      // 24: getfield net/minecraft/class_241.field_1342 F
      // 27: f2d
      // 28: aload 5
      // 2a: invokevirtual sixtwo/av.onMouseReleased (DDLsixtwo/mA;)Z
      // 2d: aload 4
      // 2f: ifnull 47
      // 32: ifeq 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: ireturn
      // 3e: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 0
      // 43: aload 1
      // 44: invokespecial net/minecraft/class_437.method_25406 (Lnet/minecraft/class_11909;)Z
      // 47: ireturn
   }

   public final boolean method_25403(class_11909 param1, double param2, double param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 62519279790392
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: aload 1
      // 0d: invokevirtual net/minecraft/class_11909.method_74245 ()I
      // 10: invokestatic sixtwo/mA.cmN (I)Lsixtwo/mA;
      // 13: astore 9
      // 15: astore 8
      // 17: invokestatic sixtwo/rm.dis ()Lnet/minecraft/class_241;
      // 1a: astore 10
      // 1c: aload 0
      // 1d: aload 10
      // 1f: getfield net/minecraft/class_241.field_1343 F
      // 22: f2d
      // 23: aload 10
      // 25: getfield net/minecraft/class_241.field_1342 F
      // 28: f2d
      // 29: aload 9
      // 2b: dload 2
      // 2c: dload 4
      // 2e: invokevirtual sixtwo/av.onMouseDragged (DDLsixtwo/mA;DD)Z
      // 31: aload 8
      // 33: ifnull 4e
      // 36: ifeq 46
      // 39: goto 40
      // 3c: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: bipush 1
      // 41: ireturn
      // 42: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 0
      // 47: aload 1
      // 48: dload 2
      // 49: dload 4
      // 4b: invokespecial net/minecraft/class_437.method_25403 (Lnet/minecraft/class_11909;DD)Z
      // 4e: ireturn
   }

   public final boolean method_25400(class_11905 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 31965466792289
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 1
      // 0f: invokevirtual net/minecraft/class_11905.comp_4793 ()I
      // 12: i2c
      // 13: invokevirtual sixtwo/av.onCharTyped (C)Z
      // 16: aload 4
      // 18: ifnull 30
      // 1b: ifeq 2b
      // 1e: goto 25
      // 21: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: bipush 1
      // 26: ireturn
      // 27: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 0
      // 2c: aload 1
      // 2d: invokespecial net/minecraft/class_437.method_25400 (Lnet/minecraft/class_11905;)Z
      // 30: ireturn
   }

   public final boolean method_25402(class_11909 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 29781345830387
      // 06: lxor
      // 07: lstore 3
      // 08: aload 1
      // 09: invokevirtual net/minecraft/class_11909.method_74245 ()I
      // 0c: invokestatic sixtwo/mA.cmN (I)Lsixtwo/mA;
      // 0f: astore 6
      // 11: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 14: invokestatic sixtwo/rm.dis ()Lnet/minecraft/class_241;
      // 17: astore 7
      // 19: astore 5
      // 1b: aload 0
      // 1c: aload 7
      // 1e: getfield net/minecraft/class_241.field_1343 F
      // 21: f2d
      // 22: aload 7
      // 24: getfield net/minecraft/class_241.field_1342 F
      // 27: f2d
      // 28: aload 6
      // 2a: invokevirtual sixtwo/av.onMouseClicked (DDLsixtwo/mA;)Z
      // 2d: aload 5
      // 2f: ifnull 48
      // 32: ifeq 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: ireturn
      // 3e: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 0
      // 43: aload 1
      // 44: iload 2
      // 45: invokespecial net/minecraft/class_437.method_25402 (Lnet/minecraft/class_11909;Z)Z
      // 48: ireturn
   }

   public void method_25420(class_332 param1, int param2, int param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 59550572882851
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: astore 7
      // 0e: aload 0
      // 0f: aload 7
      // 11: ifnull 2c
      // 14: getfield sixtwo/av.field_22787 Lnet/minecraft/class_310;
      // 17: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 1a: ifnonnull 32
      // 1d: goto 24
      // 20: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: goto 2c
      // 28: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 1
      // 2d: fload 4
      // 2f: invokevirtual sixtwo/av.method_57728 (Lnet/minecraft/class_332;F)V
      // 32: return
   }

   public final void method_25394(@NonNull class_332 var1, int var2, int var3, float var4) {
      rm.dil(this.sh());
      class_241 var5 = rm.dis();
      lC var6 = lC.ccP(var1, var5.field_1343, var5.field_1342, var4);

      try {
         this.m(var6);
      } finally {
         var6.ccR();
         rm.dim();
      }
   }

   public final boolean method_25404(class_11908 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/av.oVYdO J
      // 03: ldc2_w 65536509537430
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 1
      // 0f: invokevirtual net/minecraft/class_11908.comp_4795 ()I
      // 12: aload 1
      // 13: invokevirtual net/minecraft/class_11908.comp_4796 ()I
      // 16: aload 1
      // 17: invokevirtual net/minecraft/class_11908.comp_4797 ()I
      // 1a: invokevirtual sixtwo/av.onKeyPressed (III)Z
      // 1d: aload 4
      // 1f: ifnull 37
      // 22: ifeq 32
      // 25: goto 2c
      // 28: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: bipush 1
      // 2d: ireturn
      // 2e: invokestatic sixtwo/av.sn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: aload 1
      // 34: invokespecial net/minecraft/class_437.method_25404 (Lnet/minecraft/class_11908;)Z
      // 37: ireturn
   }

   public boolean method_25421() {
      return false;
   }
}
