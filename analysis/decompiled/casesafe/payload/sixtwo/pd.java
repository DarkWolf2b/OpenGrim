package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.SecureRandom;
import net.minecraft.class_238;
import net.minecraft.class_243;

public class pd implements pg {
   private static final double HgXpS = 0.00942;
   private static final double mVOXG = 0.2332;
   private static final double QEAUy = -0.3008;
   private static final double abnbA = 0.3492;
   private static final double POIeO = 0.01328;
   private static final double zodGQ = 0.2445;
   private static final SecureRandom PSTgh = new SecureRandom();
   private double JgCbI;
   private double XFANn;
   private double sTjzf;
   private double auNLg;
   private class_243 gllEQ;
   private class_243 KGqRJ;
   private static final long xbBal = gb.aYR(-6019655902098696184L, -970663675502112895L, MethodHandles.lookup().lookupClass()).a(47648860311874L);

   private static double cMK(double var0, double var2, double var4) {
      return var0 + (var2 - var0) * var4;
   }

   public double cML() {
      return this.JgCbI;
   }

   public void cMR(double var1) {
      this.JgCbI = var1;
   }

   public void cMU(double var1) {
      this.auNLg = var1;
   }

   public void cMS(double var1) {
      this.XFANn = var1;
   }

   public void cMW(class_243 var1) {
      this.KGqRJ = var1;
   }

   private void cMI() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pd.xbBal J
      // 03: ldc2_w 26570277146851
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pc.cMG ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 64
      // 11: invokevirtual sixtwo/pd.cMJ ()Z
      // 14: ifeq 63
      // 17: goto 1e
      // 1a: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: new net/minecraft/class_243
      // 22: dup
      // 23: getstatic sixtwo/pd.PSTgh Ljava/security/SecureRandom;
      // 26: ldc2_w 0.00942
      // 29: ldc2_w 0.2332
      // 2c: invokevirtual java/security/SecureRandom.nextGaussian (DD)D
      // 2f: aload 0
      // 30: getfield sixtwo/pd.JgCbI D
      // 33: dmul
      // 34: getstatic sixtwo/pd.PSTgh Ljava/security/SecureRandom;
      // 37: ldc2_w -0.3008
      // 3a: ldc2_w 0.3492
      // 3d: invokevirtual java/security/SecureRandom.nextGaussian (DD)D
      // 40: aload 0
      // 41: getfield sixtwo/pd.XFANn D
      // 44: dmul
      // 45: getstatic sixtwo/pd.PSTgh Ljava/security/SecureRandom;
      // 48: ldc2_w 0.01328
      // 4b: ldc2_w 0.2445
      // 4e: invokevirtual java/security/SecureRandom.nextGaussian (DD)D
      // 51: aload 0
      // 52: getfield sixtwo/pd.JgCbI D
      // 55: dmul
      // 56: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 59: putfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 5c: goto 63
      // 5f: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: aload 0
      // 64: new net/minecraft/class_243
      // 67: dup
      // 68: aload 0
      // 69: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 6c: getfield net/minecraft/class_243.field_1352 D
      // 6f: aload 0
      // 70: getfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 73: getfield net/minecraft/class_243.field_1352 D
      // 76: aload 0
      // 77: getfield sixtwo/pd.sTjzf D
      // 7a: invokestatic sixtwo/pd.cMK (DDD)D
      // 7d: aload 0
      // 7e: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 81: getfield net/minecraft/class_243.field_1351 D
      // 84: aload 0
      // 85: getfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 88: getfield net/minecraft/class_243.field_1351 D
      // 8b: aload 0
      // 8c: getfield sixtwo/pd.sTjzf D
      // 8f: invokestatic sixtwo/pd.cMK (DDD)D
      // 92: aload 0
      // 93: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 96: getfield net/minecraft/class_243.field_1350 D
      // 99: aload 0
      // 9a: getfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 9d: getfield net/minecraft/class_243.field_1350 D
      // a0: aload 0
      // a1: getfield sixtwo/pd.sTjzf D
      // a4: invokestatic sixtwo/pd.cMK (DDD)D
      // a7: invokespecial net/minecraft/class_243.<init> (DDD)V
      // aa: putfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // ad: return
   }

   public double cMM() {
      return this.XFANn;
   }

   public double cMO() {
      return this.auNLg;
   }

   public void cMT(double var1) {
      this.sTjzf = var1;
   }

   private boolean cMJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pd.xbBal J
      // 03: ldc2_w 79276531770628
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pc.cMG ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 10: getfield net/minecraft/class_243.field_1352 D
      // 13: aload 0
      // 14: getfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 17: getfield net/minecraft/class_243.field_1352 D
      // 1a: dsub
      // 1b: invokestatic java/lang/Math.abs (D)D
      // 1e: aload 0
      // 1f: getfield sixtwo/pd.auNLg D
      // 22: dcmpg
      // 23: aload 3
      // 24: ifnonnull 4f
      // 27: ifge 8d
      // 2a: goto 31
      // 2d: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 35: getfield net/minecraft/class_243.field_1351 D
      // 38: aload 0
      // 39: getfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 3c: getfield net/minecraft/class_243.field_1351 D
      // 3f: dsub
      // 40: invokestatic java/lang/Math.abs (D)D
      // 43: aload 0
      // 44: getfield sixtwo/pd.auNLg D
      // 47: dcmpg
      // 48: goto 4f
      // 4b: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: aload 3
      // 50: ifnonnull 7b
      // 53: ifge 8d
      // 56: goto 5d
      // 59: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 0
      // 5e: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 61: getfield net/minecraft/class_243.field_1350 D
      // 64: aload 0
      // 65: getfield sixtwo/pd.KGqRJ Lnet/minecraft/class_243;
      // 68: getfield net/minecraft/class_243.field_1350 D
      // 6b: dsub
      // 6c: invokestatic java/lang/Math.abs (D)D
      // 6f: aload 0
      // 70: getfield sixtwo/pd.auNLg D
      // 73: dcmpg
      // 74: goto 7b
      // 77: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: aload 3
      // 7c: ifnonnull 8a
      // 7f: ifge 8d
      // 82: goto 89
      // 85: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 88: athrow
      // 89: bipush 1
      // 8a: goto 8e
      // 8d: bipush 0
      // 8e: ireturn
   }

   private static MatchException cMX(MatchException var0) {
      return var0;
   }

   public class_243 cMQ() {
      return this.KGqRJ;
   }

   public double cMN() {
      return this.sTjzf;
   }

   public void cMV(class_243 var1) {
      this.gllEQ = var1;
   }

   public class_243 cMP() {
      return this.gllEQ;
   }

   public pd(double var1, double var3, double var5, double var7) {
      long var9 = xbBal ^ 74774614428739L;
      int[] var10000 = pc.cMG();
      super();
      this.gllEQ = class_243.field_1353;
      this.KGqRJ = class_243.field_1353;
      int[] var11 = var10000;

      try {
         this.JgCbI = var1;
         this.XFANn = var3;
         this.sTjzf = var5;
         this.auNLg = var7;
         if (var11 != null) {
            iS.bwK("ubmCuc");
         }
      } catch (MatchException var12) {
         throw cMX(var12);
      }
   }

   public pd() {
      this(0.15, 0.15, 0.15, 0.05);
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
      // 00: getstatic sixtwo/pd.xbBal J
      // 03: ldc2_w 102124395246503
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pc.cMG ()[I
      // 0b: astore 5
      // 0d: aload 0
      // 0e: aload 5
      // 10: ifnonnull 45
      // 13: getfield sixtwo/pd.JgCbI D
      // 16: dconst_0
      // 17: dcmpg
      // 18: ifgt 44
      // 1b: goto 22
      // 1e: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: aload 5
      // 25: ifnonnull 45
      // 28: goto 2f
      // 2b: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: getfield sixtwo/pd.XFANn D
      // 32: dconst_0
      // 33: dcmpg
      // 34: ifgt 44
      // 37: goto 3e
      // 3a: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 1
      // 3f: areturn
      // 40: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 0
      // 45: invokevirtual sixtwo/pd.cMI ()V
      // 48: aload 1
      // 49: aload 0
      // 4a: getfield sixtwo/pd.gllEQ Lnet/minecraft/class_243;
      // 4d: invokevirtual net/minecraft/class_243.method_1019 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 50: astore 6
      // 52: new net/minecraft/class_243
      // 55: dup
      // 56: aload 6
      // 58: getfield net/minecraft/class_243.field_1352 D
      // 5b: aload 2
      // 5c: getfield net/minecraft/class_238.field_1323 D
      // 5f: aload 2
      // 60: getfield net/minecraft/class_238.field_1320 D
      // 63: invokestatic net/minecraft/class_3532.method_15350 (DDD)D
      // 66: aload 6
      // 68: getfield net/minecraft/class_243.field_1351 D
      // 6b: aload 2
      // 6c: getfield net/minecraft/class_238.field_1322 D
      // 6f: aload 2
      // 70: getfield net/minecraft/class_238.field_1325 D
      // 73: invokestatic net/minecraft/class_3532.method_15350 (DDD)D
      // 76: aload 6
      // 78: getfield net/minecraft/class_243.field_1350 D
      // 7b: aload 2
      // 7c: getfield net/minecraft/class_238.field_1321 D
      // 7f: aload 2
      // 80: getfield net/minecraft/class_238.field_1324 D
      // 83: invokestatic net/minecraft/class_3532.method_15350 (DDD)D
      // 86: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 89: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 8c: ifnonnull 9c
      // 8f: bipush 1
      // 90: newarray 10
      // 92: invokestatic sixtwo/pc.cMF ([I)V
      // 95: goto 9c
      // 98: invokestatic sixtwo/pd.cMX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: areturn
   }
}
