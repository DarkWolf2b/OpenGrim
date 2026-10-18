package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Comparator;
import java.util.Iterator;
import net.minecraft.class_241;

public abstract class az extends iS {
   private static long kRxcV;
   public static final Comparator<az> VjGAm = Comparator.<az>comparingInt(var0 -> var0.sN()).thenComparingInt(az::tt).thenComparingLong(az::tA);
   protected ii CtPwV;
   protected float MCnYt;
   protected float pNyTQ;
   protected float BcpIo;
   protected float WjISQ;
   protected int mXtVF;
   protected int eWYPl;
   protected az DjJTP;
   protected final mu<az> gJoaC;
   protected boolean tSjBL;
   protected boolean oTiGT;
   protected boolean VtZUv;
   protected boolean PGAcs;
   private final long tnbQU;
   private static String mqOlJ;
   private static final long smakX = gb.aYR(-7198668780647983144L, 6866809431512737463L, MethodHandles.lookup().lookupClass()).a(139834532818023L);

   protected az(float var1, float var2, float var3, float var4) {
      long var5 = smakX ^ 48051688989992L;
      super();
      this.CtPwV = rD.dlM();
      tE();
      this.gJoaC = new mu<>();
      this.tSjBL = true;
      this.tnbQU = kRxcV++;

      try {
         this.MCnYt = var1;
         this.pNyTQ = var2;
         this.BcpIo = var3;
         this.WjISQ = var4;
         if (iS.bwL() == null) {
            tD("hV0mUc");
         }
      } catch (MatchException var8) {
         throw tF(var8);
      }
   }

   protected az() {
      this(0.0F, 0.0F, 0.0F, 0.0F);
   }

   static {
      tD("lj13Ec");
   }

   public mu<az> tv() {
      return this.gJoaC;
   }

   public boolean ta(lc var1) {
      return jf.bAW(var1, this);
   }

   public az to(float var1) {
      this.WjISQ = var1;
      return this;
   }

   public float tb() {
      return this.pNyTQ + this.WjISQ;
   }

   public boolean tg(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 51496150014227
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: astore 7
      // 0e: invokestatic sixtwo/ay.sr ()Z
      // 11: aload 7
      // 13: ifnull 40
      // 16: ifeq 53
      // 19: goto 20
      // 1c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: dload 1
      // 21: dload 3
      // 22: aload 0
      // 23: getfield sixtwo/az.MCnYt F
      // 26: f2d
      // 27: aload 0
      // 28: getfield sixtwo/az.pNyTQ F
      // 2b: f2d
      // 2c: aload 0
      // 2d: getfield sixtwo/az.BcpIo F
      // 30: f2d
      // 31: aload 0
      // 32: getfield sixtwo/az.WjISQ F
      // 35: f2d
      // 36: invokestatic sixtwo/jf.bAE (DDDDDD)Z
      // 39: goto 40
      // 3c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: aload 7
      // 42: ifnull 50
      // 45: ifeq 53
      // 48: goto 4f
      // 4b: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: bipush 1
      // 50: goto 54
      // 53: bipush 0
      // 54: ireturn
   }

   public float dn() {
      return this.WjISQ;
   }

   public boolean th(double param1, double param3, double param5, double param7, double param9, double param11) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 85717027636221
      // 06: lxor
      // 07: lstore 13
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: astore 15
      // 0e: invokestatic sixtwo/ay.sr ()Z
      // 11: aload 15
      // 13: ifnull 34
      // 16: ifeq 47
      // 19: goto 20
      // 1c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: dload 1
      // 21: dload 3
      // 22: dload 5
      // 24: dload 7
      // 26: dload 9
      // 28: dload 11
      // 2a: invokestatic sixtwo/jf.bAE (DDDDDD)Z
      // 2d: goto 34
      // 30: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 15
      // 36: ifnull 44
      // 39: ifeq 47
      // 3c: goto 43
      // 3f: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: bipush 1
      // 44: goto 48
      // 47: bipush 0
      // 48: ireturn
   }

   public float tc() {
      return this.MCnYt + this.BcpIo;
   }

   public void sw() {
   }

   public boolean hc(double var1, double var3) {
      return this.PGAcs;
   }

   public float ts() {
      return this.pNyTQ;
   }

   public az tl(float var1) {
      this.MCnYt = var1;
      return this;
   }

   public float tr() {
      return this.MCnYt;
   }

   public az tp(az var1) {
      this.DjJTP = var1;
      return this;
   }

   public az tn(float var1) {
      this.BcpIo = var1;
      return this;
   }

   public void sz(f param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 42099134576451
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: getstatic sixtwo/az$rU.xmlDG [I
      // 10: aload 1
      // 11: invokevirtual sixtwo/f.ap ()Lsixtwo/f$rF;
      // 14: invokevirtual sixtwo/f$rF.ordinal ()I
      // 17: iaload
      // 18: aload 4
      // 1a: ifnull 5b
      // 1d: tableswitch 196 1 5 39 81 131 159 196
      // 40: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 0
      // 45: aload 1
      // 46: invokevirtual sixtwo/f.aq ()D
      // 49: aload 1
      // 4a: invokevirtual sixtwo/f.ar ()D
      // 4d: aload 1
      // 4e: invokevirtual sixtwo/f.as ()Lsixtwo/mA;
      // 51: invokevirtual sixtwo/az.dk (DDLsixtwo/mA;)Z
      // 54: goto 5b
      // 57: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: ifeq e1
      // 5e: aload 1
      // 5f: invokevirtual sixtwo/f.ao ()V
      // 62: aload 4
      // 64: ifnonnull e1
      // 67: goto 6e
      // 6a: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: aload 0
      // 6f: aload 1
      // 70: invokevirtual sixtwo/f.aq ()D
      // 73: aload 1
      // 74: invokevirtual sixtwo/f.ar ()D
      // 77: aload 1
      // 78: invokevirtual sixtwo/f.as ()Lsixtwo/mA;
      // 7b: aload 1
      // 7c: invokevirtual sixtwo/f.at ()D
      // 7f: aload 1
      // 80: invokevirtual sixtwo/f.au ()D
      // 83: invokevirtual sixtwo/az.dB (DDLsixtwo/mA;DD)Z
      // 86: ifeq e1
      // 89: goto 90
      // 8c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: aload 1
      // 91: invokevirtual sixtwo/f.ao ()V
      // 94: aload 4
      // 96: ifnonnull e1
      // 99: goto a0
      // 9c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9f: athrow
      // a0: aload 0
      // a1: aload 1
      // a2: invokevirtual sixtwo/f.aq ()D
      // a5: aload 1
      // a6: invokevirtual sixtwo/f.ar ()D
      // a9: aload 1
      // aa: invokevirtual sixtwo/f.as ()Lsixtwo/mA;
      // ad: invokevirtual sixtwo/az.dl (DDLsixtwo/mA;)V
      // b0: aload 4
      // b2: ifnonnull e1
      // b5: goto bc
      // b8: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bb: athrow
      // bc: aload 0
      // bd: aload 1
      // be: invokevirtual sixtwo/f.aq ()D
      // c1: aload 1
      // c2: invokevirtual sixtwo/f.ar ()D
      // c5: aload 1
      // c6: invokevirtual sixtwo/f.av ()D
      // c9: invokevirtual sixtwo/az.fC (DDD)Z
      // cc: ifeq e1
      // cf: goto d6
      // d2: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d5: athrow
      // d6: aload 1
      // d7: invokevirtual sixtwo/f.ao ()V
      // da: goto e1
      // dd: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e0: athrow
      // e1: return
   }

   public void dl(double var1, double var3, mA var5) {
   }

   public boolean ti(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 19423808491568
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: invokestatic sixtwo/ay.sr ()Z
      // 10: aload 4
      // 12: ifnull 2a
      // 15: ifeq 6b
      // 18: goto 1f
      // 1b: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: aload 1
      // 20: invokestatic sixtwo/jG.bHZ (Lsixtwo/lC;)Z
      // 23: goto 2a
      // 26: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 4
      // 2c: ifnull 58
      // 2f: ifeq 6b
      // 32: goto 39
      // 35: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: aload 1
      // 3a: aload 0
      // 3b: getfield sixtwo/az.MCnYt F
      // 3e: f2d
      // 3f: aload 0
      // 40: getfield sixtwo/az.pNyTQ F
      // 43: f2d
      // 44: aload 0
      // 45: getfield sixtwo/az.BcpIo F
      // 48: f2d
      // 49: aload 0
      // 4a: getfield sixtwo/az.WjISQ F
      // 4d: f2d
      // 4e: invokestatic sixtwo/jf.bAG (Lsixtwo/lC;DDDD)Z
      // 51: goto 58
      // 54: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: aload 4
      // 5a: ifnull 68
      // 5d: ifeq 6b
      // 60: goto 67
      // 63: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: bipush 1
      // 68: goto 6c
      // 6b: bipush 0
      // 6c: ireturn
   }

   public az tm(float var1) {
      this.pNyTQ = var1;
      return this;
   }

   public int tt() {
      return this.eWYPl;
   }

   public void sx() {
   }

   public boolean tz() {
      return this.PGAcs;
   }

   public boolean dm(int var1, int var2, int var3) {
      return false;
   }

   public boolean dk(double var1, double var3, mA var5) {
      return false;
   }

   public az tk(ii var1) {
      this.CtPwV = var1;
      return this;
   }

   private void sv(lC var1) {
      this.fX(var1);
      this.bV(var1);
   }

   public boolean tf() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 16478374487635
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/az.BcpIo F
      // 10: invokestatic java/lang/Float.isFinite (F)Z
      // 13: aload 3
      // 14: ifnull 2f
      // 17: ifeq 77
      // 1a: goto 21
      // 1d: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/az.WjISQ F
      // 25: invokestatic java/lang/Float.isFinite (F)Z
      // 28: goto 2f
      // 2b: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: aload 3
      // 30: ifnull 4a
      // 33: ifeq 77
      // 36: goto 3d
      // 39: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: getfield sixtwo/az.BcpIo F
      // 41: fconst_0
      // 42: fcmpl
      // 43: goto 4a
      // 46: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 3
      // 4b: ifnull 65
      // 4e: ifle 77
      // 51: goto 58
      // 54: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: aload 0
      // 59: getfield sixtwo/az.WjISQ F
      // 5c: fconst_0
      // 5d: fcmpl
      // 5e: goto 65
      // 61: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: aload 3
      // 66: ifnull 74
      // 69: ifle 77
      // 6c: goto 73
      // 6f: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: bipush 1
      // 74: goto 78
      // 77: bipush 0
      // 78: ireturn
   }

   protected abstract void bV(lC var1);

   public boolean fC(double var1, double var3, double var5) {
      return false;
   }

   public lc td() {
      return new lc(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ);
   }

   public boolean tw() {
      return this.tSjBL;
   }

   public class_241 te() {
      return new class_241(this.BcpIo, this.WjISQ);
   }

   public void sy(f var1) {
   }

   public boolean ty() {
      return this.VtZUv;
   }

   public boolean tx() {
      return this.oTiGT;
   }

   public void dY() {
   }

   public boolean dB(double var1, double var3, mA var5, double var6, double var8) {
      return false;
   }

   public void fX(lC var1) {
   }

   public boolean eK(char var1) {
      return false;
   }

   public void sB(h var1) {
   }

   public boolean tj(lC param1, double param2, double param4, double param6, double param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 127242613230864
      // 06: lxor
      // 07: lstore 10
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: astore 12
      // 0e: invokestatic sixtwo/ay.sr ()Z
      // 11: aload 12
      // 13: ifnull 2b
      // 16: ifeq 5f
      // 19: goto 20
      // 1c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: invokestatic sixtwo/jG.bHZ (Lsixtwo/lC;)Z
      // 24: goto 2b
      // 27: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 12
      // 2d: ifnull 4c
      // 30: ifeq 5f
      // 33: goto 3a
      // 36: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 1
      // 3b: dload 2
      // 3c: dload 4
      // 3e: dload 6
      // 40: dload 8
      // 42: invokestatic sixtwo/jf.bAG (Lsixtwo/lC;DDDD)Z
      // 45: goto 4c
      // 48: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 12
      // 4e: ifnull 5c
      // 51: ifeq 5f
      // 54: goto 5b
      // 57: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: bipush 1
      // 5c: goto 60
      // 5f: bipush 0
      // 60: ireturn
   }

   private lc sH(lc var1, lc var2) {
      float var3 = Math.max(var1.bXF(), var2.bXF());
      float var4 = Math.max(var1.bXG(), var2.bXG());
      float var5 = Math.min(var1.bXz(), var2.bXz());
      float var6 = Math.min(var1.bXA(), var2.bXA());
      return new lc(var3, var4, Math.max(0.0F, var5 - var3), Math.max(0.0F, var6 - var4));
   }

   public az sS(boolean var1) {
      this.VtZUv = var1;
      return this;
   }

   public az sM() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 115016617804511
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: aload 0
      // 0c: astore 4
      // 0e: astore 3
      // 0f: aload 4
      // 11: ifnull 39
      // 14: aload 4
      // 16: aload 3
      // 17: ifnull 33
      // 1a: invokevirtual sixtwo/az.nZ ()Z
      // 1d: ifeq 2e
      // 20: goto 27
      // 23: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: areturn
      // 2a: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 4
      // 30: getfield sixtwo/az.DjJTP Lsixtwo/az;
      // 33: astore 4
      // 35: aload 3
      // 36: ifnonnull 0f
      // 39: aconst_null
      // 3a: areturn
   }

   public ii tq() {
      return this.CtPwV;
   }

   public static void tD(String var0) {
      mqOlJ = var0;
   }

   public boolean sE(double param1, double param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 87665555673009
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: astore 7
      // 0e: aload 0
      // 0f: getfield sixtwo/az.tSjBL Z
      // 12: aload 7
      // 14: ifnull 2c
      // 17: ifeq 88
      // 1a: goto 21
      // 1d: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/az.VtZUv Z
      // 25: goto 2c
      // 28: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 7
      // 2e: ifnull 46
      // 31: ifne 88
      // 34: goto 3b
      // 37: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 0
      // 3c: invokevirtual sixtwo/az.tf ()Z
      // 3f: goto 46
      // 42: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 7
      // 48: ifnull 75
      // 4b: ifeq 88
      // 4e: goto 55
      // 51: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: dload 1
      // 56: dload 3
      // 57: aload 0
      // 58: getfield sixtwo/az.MCnYt F
      // 5b: f2d
      // 5c: aload 0
      // 5d: getfield sixtwo/az.pNyTQ F
      // 60: f2d
      // 61: aload 0
      // 62: getfield sixtwo/az.BcpIo F
      // 65: f2d
      // 66: aload 0
      // 67: getfield sixtwo/az.WjISQ F
      // 6a: f2d
      // 6b: invokestatic sixtwo/jf.bAE (DDDDDD)Z
      // 6e: goto 75
      // 71: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: aload 7
      // 77: ifnull 85
      // 7a: ifeq 88
      // 7d: goto 84
      // 80: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: bipush 1
      // 85: goto 89
      // 88: bipush 0
      // 89: ireturn
   }

   public int sN() {
      return this.mXtVF;
   }

   public az sP(int var1) {
      this.eWYPl = var1;
      return this;
   }

   public az tu() {
      return this.DjJTP;
   }

   public long tA() {
      return this.tnbQU;
   }

   public float kN() {
      return this.BcpIo;
   }

   public void sA(f var1) {
   }

   public void sC(h param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 29029992521302
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: getstatic sixtwo/az$rU.WjdnF [I
      // 10: aload 1
      // 11: invokevirtual sixtwo/h.bF ()Lsixtwo/h$rH;
      // 14: invokevirtual sixtwo/h$rH.ordinal ()I
      // 17: iaload
      // 18: aload 4
      // 1a: ifnull 53
      // 1d: lookupswitch 102 2 1 31 2 73
      // 38: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: aload 0
      // 3d: aload 1
      // 3e: invokevirtual sixtwo/h.bG ()I
      // 41: aload 1
      // 42: invokevirtual sixtwo/h.bH ()I
      // 45: aload 1
      // 46: invokevirtual sixtwo/h.bI ()I
      // 49: invokevirtual sixtwo/az.dm (III)Z
      // 4c: goto 53
      // 4f: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: ifeq 83
      // 56: aload 1
      // 57: invokevirtual sixtwo/h.bE ()V
      // 5a: aload 4
      // 5c: ifnonnull 83
      // 5f: goto 66
      // 62: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 0
      // 67: aload 1
      // 68: invokevirtual sixtwo/h.bJ ()C
      // 6b: invokevirtual sixtwo/az.eK (C)Z
      // 6e: ifeq 83
      // 71: goto 78
      // 74: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: aload 1
      // 79: invokevirtual sixtwo/h.bE ()V
      // 7c: goto 83
      // 7f: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 82: athrow
      // 83: return
   }

   public az sR(boolean var1) {
      this.oTiGT = var1;
      return this;
   }

   protected az sG(double param1, double param3, lc param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/az.smakX J
      // 003: ldc2_w 99531503222200
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 00c: astore 8
      // 00e: aload 0
      // 00f: getfield sixtwo/az.tSjBL Z
      // 012: ifne 01b
      // 015: aconst_null
      // 016: areturn
      // 017: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01a: athrow
      // 01b: aload 5
      // 01d: aload 8
      // 01f: ifnull 051
      // 022: ifnull 04f
      // 025: goto 02c
      // 028: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02b: athrow
      // 02c: aload 5
      // 02e: aload 8
      // 030: ifnull 051
      // 033: goto 03a
      // 036: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: dload 1
      // 03b: dload 3
      // 03c: invokevirtual sixtwo/lc.bXD (DD)Z
      // 03f: ifne 04f
      // 042: goto 049
      // 045: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 048: athrow
      // 049: aconst_null
      // 04a: areturn
      // 04b: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04e: athrow
      // 04f: aload 5
      // 051: astore 9
      // 053: aload 0
      // 054: getfield sixtwo/az.oTiGT Z
      // 057: aload 8
      // 059: ifnull 071
      // 05c: ifeq 0de
      // 05f: goto 066
      // 062: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 065: athrow
      // 066: aload 0
      // 067: invokevirtual sixtwo/az.tf ()Z
      // 06a: goto 071
      // 06d: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 070: athrow
      // 071: ifeq 0de
      // 074: aload 9
      // 076: aload 8
      // 078: ifnull 097
      // 07b: goto 082
      // 07e: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 081: athrow
      // 082: ifnonnull 09a
      // 085: goto 08c
      // 088: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08b: athrow
      // 08c: aload 0
      // 08d: invokevirtual sixtwo/az.td ()Lsixtwo/lc;
      // 090: goto 097
      // 093: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: goto 0a4
      // 09a: aload 0
      // 09b: aload 9
      // 09d: aload 0
      // 09e: invokevirtual sixtwo/az.td ()Lsixtwo/lc;
      // 0a1: invokevirtual sixtwo/az.sH (Lsixtwo/lc;Lsixtwo/lc;)Lsixtwo/lc;
      // 0a4: astore 9
      // 0a6: aload 9
      // 0a8: dload 1
      // 0a9: dload 3
      // 0aa: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0ad: aload 8
      // 0af: ifnull 0d5
      // 0b2: ifne 0de
      // 0b5: goto 0bc
      // 0b8: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bb: athrow
      // 0bc: aload 0
      // 0bd: aload 8
      // 0bf: ifnull 0d9
      // 0c2: goto 0c9
      // 0c5: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c8: athrow
      // 0c9: dload 1
      // 0ca: dload 3
      // 0cb: invokevirtual sixtwo/az.sE (DD)Z
      // 0ce: goto 0d5
      // 0d1: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d4: athrow
      // 0d5: ifeq 0dc
      // 0d8: aload 0
      // 0d9: goto 0dd
      // 0dc: aconst_null
      // 0dd: areturn
      // 0de: new java/util/ArrayList
      // 0e1: dup
      // 0e2: aload 0
      // 0e3: getfield sixtwo/az.gJoaC Lsixtwo/mu;
      // 0e6: invokevirtual sixtwo/mu.cmj ()Ljava/util/List;
      // 0e9: invokespecial java/util/ArrayList.<init> (Ljava/util/Collection;)V
      // 0ec: astore 10
      // 0ee: aload 10
      // 0f0: getstatic sixtwo/az.VjGAm Ljava/util/Comparator;
      // 0f3: invokeinterface java/util/Comparator.reversed ()Ljava/util/Comparator; 1
      // 0f8: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 0fd: aload 10
      // 0ff: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 104: astore 11
      // 106: aload 11
      // 108: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 10d: ifeq 14c
      // 110: aload 11
      // 112: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 117: checkcast sixtwo/az
      // 11a: astore 12
      // 11c: aload 12
      // 11e: dload 1
      // 11f: dload 3
      // 120: aload 9
      // 122: invokevirtual sixtwo/az.sG (DDLsixtwo/lc;)Lsixtwo/az;
      // 125: astore 13
      // 127: aload 13
      // 129: aload 8
      // 12b: ifnull 14d
      // 12e: aload 8
      // 130: ifnull 146
      // 133: goto 13a
      // 136: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 139: athrow
      // 13a: ifnull 147
      // 13d: goto 144
      // 140: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 143: athrow
      // 144: aload 13
      // 146: areturn
      // 147: aload 8
      // 149: ifnonnull 106
      // 14c: aload 0
      // 14d: aload 8
      // 14f: ifnull 169
      // 152: dload 1
      // 153: dload 3
      // 154: invokevirtual sixtwo/az.sE (DD)Z
      // 157: ifeq 16c
      // 15a: goto 161
      // 15d: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 160: athrow
      // 161: aload 0
      // 162: goto 169
      // 165: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 168: athrow
      // 169: goto 16d
      // 16c: aconst_null
      // 16d: areturn
   }

   public boolean oi() {
      return false;
   }

   public az sL() {
      long var1 = smakX ^ 111062014151343L;
      String var10000 = tE();
      az var4 = this;
      String var3 = var10000;

      while (true) {
         if (var4.DjJTP != null) {
            var5 = var4.DjJTP;
            if (var3 == null) {
               break;
            }

            var4 = var4.DjJTP;
            if (var3 != null) {
               continue;
            }
         }

         var5 = var4;
         break;
      }

      return var5;
   }

   public az sT(boolean var1) {
      this.PGAcs = var1;
      return this;
   }

   public static String tE() {
      return mqOlJ;
   }

   public void sD(h var1) {
   }

   public void sU() {
      long var1 = smakX ^ 124254510976777L;
      String var10000 = tE();
      g var4 = g.aD();
      String var3 = var10000;

      label20: {
         try {
            var6 = var4;
            if (var3 == null) {
               break label20;
            }

            if (var4 == null) {
               return;
            }
         } catch (MatchException var5) {
            throw tF(var5);
         }

         var6 = var4;
      }

      var6.aU(this);
   }

   public az sI(az param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 7912473412073
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 5b
      // 13: ifnull 53
      // 16: goto 1d
      // 19: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: aload 4
      // 20: ifnull 5b
      // 23: goto 2a
      // 26: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 0
      // 2b: if_acmpeq 53
      // 2e: goto 35
      // 31: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: aload 0
      // 36: aload 4
      // 38: ifnull 60
      // 3b: goto 42
      // 3e: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: getfield sixtwo/az.gJoaC Lsixtwo/mu;
      // 45: aload 1
      // 46: invokevirtual sixtwo/mu.contains (Ljava/lang/Object;)Z
      // 49: ifeq 5c
      // 4c: goto 53
      // 4f: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: aload 0
      // 54: goto 5b
      // 57: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: areturn
      // 5c: aload 1
      // 5d: getfield sixtwo/az.DjJTP Lsixtwo/az;
      // 60: aload 4
      // 62: ifnull 91
      // 65: ifnull 82
      // 68: goto 6f
      // 6b: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 1
      // 70: getfield sixtwo/az.DjJTP Lsixtwo/az;
      // 73: getfield sixtwo/az.gJoaC Lsixtwo/mu;
      // 76: aload 1
      // 77: invokevirtual sixtwo/mu.remove (Ljava/lang/Object;)Z
      // 7a: pop
      // 7b: goto 82
      // 7e: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 81: athrow
      // 82: aload 1
      // 83: aload 0
      // 84: putfield sixtwo/az.DjJTP Lsixtwo/az;
      // 87: aload 0
      // 88: getfield sixtwo/az.gJoaC Lsixtwo/mu;
      // 8b: aload 1
      // 8c: invokevirtual sixtwo/mu.add (Ljava/lang/Object;)Z
      // 8f: pop
      // 90: aload 0
      // 91: areturn
   }

   public void sV() {
      long var1 = smakX ^ 103682831037626L;
      String var10000 = tE();
      g var4 = g.aD();
      String var3 = var10000;

      label20: {
         try {
            var6 = var4;
            if (var3 == null) {
               break label20;
            }

            if (var4 == null) {
               return;
            }
         } catch (MatchException var5) {
            throw tF(var5);
         }

         var6 = var4;
      }

      var6.aW(this);
   }

   public az sJ(az param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 80664093084474
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 24
      // 13: ifnonnull 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: areturn
      // 1f: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: aload 4
      // 26: ifnull 47
      // 29: getfield sixtwo/az.gJoaC Lsixtwo/mu;
      // 2c: aload 1
      // 2d: invokevirtual sixtwo/mu.remove (Ljava/lang/Object;)Z
      // 30: ifeq 46
      // 33: goto 3a
      // 36: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 1
      // 3b: aconst_null
      // 3c: putfield sixtwo/az.DjJTP Lsixtwo/az;
      // 3f: goto 46
      // 42: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 0
      // 47: areturn
   }

   public az sY(float var1, float var2, float var3, float var4) {
      this.MCnYt = var1;
      this.pNyTQ = var2;
      this.BcpIo = var3;
      this.WjISQ = var4;
      return this;
   }

   public void su(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/az.smakX J
      // 03: ldc2_w 17523964086939
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 31
      // 13: invokevirtual sixtwo/az.nZ ()Z
      // 16: ifeq 30
      // 19: goto 20
      // 1c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: aload 0
      // 22: aload 1
      // 23: invokedynamic run (Lsixtwo/az;Lsixtwo/lC;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/az.tB (Lsixtwo/lC;)V, ()V ]
      // 28: invokestatic sixtwo/ay.sq (Ljava/lang/Object;Ljava/lang/Runnable;)V
      // 2b: return
      // 2c: invokestatic sixtwo/az.tF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: aload 1
      // 32: invokevirtual sixtwo/az.sv (Lsixtwo/lC;)V
      // 35: return
   }

   public az sZ(lc var1) {
      this.MCnYt = var1.bXF();
      this.pNyTQ = var1.bXG();
      this.BcpIo = var1.bXH();
      this.WjISQ = var1.bXI();
      return this;
   }

   public az sF(double var1, double var3) {
      return this.sG(var1, var3, null);
   }

   public az sK() {
      long var1 = smakX ^ 120262475164300L;
      String var10000 = tE();
      Iterator var4 = this.gJoaC.cmj().iterator();
      String var3 = var10000;

      while (true) {
         if (var4.hasNext()) {
            az var5 = (az)var4.next();

            try {
               var5.DjJTP = null;
               if (var3 == null) {
                  break;
               }

               if (var3 != null) {
                  continue;
               }
            } catch (MatchException var6) {
               throw tF(var6);
            }
         }

         this.gJoaC.clear();
         break;
      }

      return this;
   }

   public az sO(int var1) {
      this.mXtVF = Math.max(0, var1);
      return this;
   }

   public az sQ(boolean var1) {
      this.tSjBL = var1;
      return this;
   }

   protected boolean nZ() {
      return false;
   }

   public az sW(float var1, float var2) {
      this.MCnYt = var1;
      this.pNyTQ = var2;
      return this;
   }

   public az sX(float var1, float var2) {
      this.BcpIo = var1;
      this.WjISQ = var2;
      return this;
   }

   private static MatchException tF(MatchException var0) {
      return var0;
   }
}
