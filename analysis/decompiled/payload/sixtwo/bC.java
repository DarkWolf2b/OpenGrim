package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10055;

public class bC {
   private final pY imthM;
   private final String neETJ;
   private final pX VRAiw;
   private pX ouKLq;
   private final rk XclRQ;
   private static final long ZpdFS = gb.aYR(-3195232151852259922L, 3105695006094609560L, MethodHandles.lookup().lookupClass()).a(190578593781542L);
   private static final long LMIZW;
   private static final long FEhqQ;

   public bC(pY var1) {
      long var2 = ZpdFS ^ 93219808432866L;
      super();
      this.XclRQ = new rk((int)LMIZW).dhs(rj.XzDkv);
      this.imthM = var1;
      this.neETJ = var1.label();
      this.VRAiw = new bC$si(var1);
   }

   static {
      long var5 = ZpdFS ^ 134284862537834L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var9 = 1611812430527484127L;
      byte[] var11 = var7.doFinal(
         new byte[]{
            (byte)(var9 >>> 56),
            (byte)(var9 >>> 48),
            (byte)(var9 >>> 40),
            (byte)(var9 >>> 32),
            (byte)(var9 >>> 24),
            (byte)(var9 >>> 16),
            (byte)(var9 >>> 8),
            (byte)var9
         }
      );
      long var14 = (var11[0] & 255L) << 56
         | (var11[1] & 255L) << 48
         | (var11[2] & 255L) << 40
         | (var11[3] & 255L) << 32
         | (var11[4] & 255L) << 24
         | (var11[5] & 255L) << 16
         | (var11[6] & 255L) << 8
         | var11[7] & 255L;
      byte var10001 = -1;
      LMIZW = var14;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -7248963263439970520L;
      byte[] var4 = var0.doFinal(
         new byte[]{
            (byte)(var2 >>> 56),
            (byte)(var2 >>> 48),
            (byte)(var2 >>> 40),
            (byte)(var2 >>> 32),
            (byte)(var2 >>> 24),
            (byte)(var2 >>> 16),
            (byte)(var2 >>> 8),
            (byte)var2
         }
      );
      long var16 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      FEhqQ = var16;
   }

   private void Lu(lC param1, float param2, float param3, boolean param4, float param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bC.ZpdFS J
      // 03: ldc2_w 126312291564863
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/bB.b ()[I
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: astore 10
      // 14: astore 8
      // 16: aload 10
      // 18: aload 8
      // 1a: ifnonnull 33
      // 1d: instanceof net/minecraft/class_742
      // 20: ifeq 3a
      // 23: goto 2a
      // 26: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 10
      // 2c: goto 33
      // 2f: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: astore 9
      // 35: aload 8
      // 37: ifnull 3f
      // 3a: return
      // 3b: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 42: invokevirtual net/minecraft/class_310.method_1561 ()Lnet/minecraft/class_898;
      // 45: aload 9
      // 47: invokevirtual net/minecraft/class_898.method_74405 (Lnet/minecraft/class_742;)Lnet/minecraft/class_1007;
      // 4a: astore 10
      // 4c: new net/minecraft/class_10055
      // 4f: dup
      // 50: invokespecial net/minecraft/class_10055.<init> ()V
      // 53: astore 11
      // 55: aload 10
      // 57: aload 9
      // 59: aload 11
      // 5b: aload 1
      // 5c: invokevirtual sixtwo/lC.cfh ()F
      // 5f: invokevirtual net/minecraft/class_1007.method_62604 (Lnet/minecraft/class_11890;Lnet/minecraft/class_10055;F)V
      // 62: aload 0
      // 63: aload 11
      // 65: iload 4
      // 67: invokevirtual sixtwo/bC.Lw (Lnet/minecraft/class_10055;Z)V
      // 6a: aload 11
      // 6c: checkcast sixtwo/mS
      // 6f: aload 0
      // 70: iload 4
      // 72: invokevirtual sixtwo/bC.Lr (Z)Lsixtwo/pX;
      // 75: invokeinterface sixtwo/mS.setEmoteInstance (Lsixtwo/pX;)V 2
      // 7a: aload 0
      // 7b: fload 5
      // 7d: invokevirtual sixtwo/bC.Lv (F)F
      // 80: fstore 12
      // 82: ldc2_w 14.5
      // 85: ldc2_w 16.5
      // 88: fload 5
      // 8a: f2d
      // 8b: invokestatic sixtwo/mZ.csl (DDD)F
      // 8e: fstore 13
      // 90: aload 1
      // 91: aload 11
      // 93: fload 2
      // 94: fload 12
      // 96: ldc 0.5
      // 98: fmul
      // 99: fsub
      // 9a: fload 3
      // 9b: fload 12
      // 9d: ldc 0.5
      // 9f: fmul
      // a0: fsub
      // a1: fload 12
      // a3: fload 12
      // a5: invokevirtual sixtwo/lC.ced (Lnet/minecraft/class_10017;FFFF)Lsixtwo/jt;
      // a8: fload 13
      // aa: invokevirtual sixtwo/jt.bFH (F)Lsixtwo/jt;
      // ad: fconst_0
      // ae: ldc_w 0.45
      // b1: fconst_0
      // b2: invokevirtual sixtwo/jt.bFJ (FFF)Lsixtwo/jt;
      // b5: invokevirtual sixtwo/jt.bFM ()Lsixtwo/jt;
      // b8: pop
      // b9: return
   }

   private float Lt(bB param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bC.ZpdFS J
      // 03: ldc2_w 20549726561789
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bB.b ()[I
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/bB.innerRadius ()F
      // 0f: fstore 5
      // 11: aload 1
      // 12: invokevirtual sixtwo/bB.outerRadius ()F
      // 15: fstore 6
      // 17: aload 1
      // 18: invokevirtual sixtwo/bB.segmentEnd ()F
      // 1b: aload 1
      // 1c: invokevirtual sixtwo/bB.segmentStart ()F
      // 1f: fsub
      // 20: f2d
      // 21: invokestatic java/lang/Math.toRadians (D)D
      // 24: d2f
      // 25: invokestatic java/lang/Math.abs (F)F
      // 28: fstore 7
      // 2a: astore 4
      // 2c: fload 7
      // 2e: ldc 6.282185
      // 30: aload 4
      // 32: ifnonnull 51
      // 35: fcmpl
      // 36: iflt 4d
      // 39: goto 40
      // 3c: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: fload 5
      // 42: fload 6
      // 44: fadd
      // 45: ldc 0.5
      // 47: fmul
      // 48: freturn
      // 49: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: fload 7
      // 4f: ldc 0.5
      // 51: fmul
      // 52: fstore 8
      // 54: ldc 0.6666667
      // 56: fload 6
      // 58: fload 6
      // 5a: fmul
      // 5b: fload 6
      // 5d: fmul
      // 5e: fload 5
      // 60: fload 5
      // 62: fmul
      // 63: fload 5
      // 65: fmul
      // 66: fsub
      // 67: fmul
      // 68: fload 6
      // 6a: fload 6
      // 6c: fmul
      // 6d: fload 5
      // 6f: fload 5
      // 71: fmul
      // 72: fsub
      // 73: fdiv
      // 74: fstore 9
      // 76: fload 8
      // 78: fconst_0
      // 79: aload 4
      // 7b: ifnonnull 9a
      // 7e: fcmpl
      // 7f: ifne 91
      // 82: goto 89
      // 85: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 88: athrow
      // 89: fconst_1
      // 8a: goto 9b
      // 8d: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: fload 8
      // 93: f2d
      // 94: invokestatic java/lang/Math.sin (D)D
      // 97: d2f
      // 98: fload 8
      // 9a: fdiv
      // 9b: fstore 10
      // 9d: fload 9
      // 9f: fload 10
      // a1: fmul
      // a2: freturn
   }

   private static MatchException LC(MatchException var0) {
      return var0;
   }

   public pX LA() {
      return this.ouKLq;
   }

   public rk LB() {
      return this.XclRQ;
   }

   public String Ly() {
      return this.neETJ;
   }

   public pY Lx() {
      return this.imthM;
   }

   public void Ls() {
      this.ouKLq = null;
   }

   public void Lq(lC var1, bB var2) {
      long var3 = ZpdFS ^ 53793457053471L;
      int[] var5 = bB.b();

      rk var10000;
      rj var10001;
      label27: {
         try {
            var10000 = this.XclRQ;
            if (var2.selected()) {
               var10001 = rj.XzDkv;
               break label27;
            }
         } catch (MatchException var20) {
            throw LC(var20);
         }

         var10001 = rj.UPXqT;
      }

      var10000.dhs(var10001);
      this.XclRQ.dhc(var2.selected());
      ii var6 = rD.dlM();
      float var7 = this.XclRQ.dhj();
      float var8 = (float)Math.toRadians(var2.segmentMiddleAngle());
      float var9 = this.Lt(var2) + 3.0F * var7;
      float var10 = var2.centerX() + (float)Math.cos(var8) * var9;
      float var11 = var2.centerY() + (float)Math.sin(var8) * var9;
      mG var12 = var6.bjb().cob(0.5F).coc(var6.bjb(), var7);
      lq var13 = lE.WTzbi.bYM(mZ.csl(5.5, 6.0, var7));
      float var14 = this.Lv(var7);
      float var15 = var11 - (var14 + var13.cat()) * 0.5F;
      float var16 = var15 + var14 * 0.5F + 3.0F;
      float var17 = var15 + var14;
      this.Lu(var1, var10, var16, var2.selected(), var7);
      float var18 = var10 - var13.cao(this.neETJ) * 0.5F;

      try {
         var1.cez(var13, this.neETJ, var18, var17, var12);
         if (var5 != null) {
            iS.bwK("Kujvoc");
         }
      } catch (MatchException var19) {
         throw LC(var19);
      }
   }

   private float Lv(float var1) {
      return mZ.csl(30.0, 34.0, var1);
   }

   public pX Lz() {
      return this.VRAiw;
   }

   public pX Lr(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bC.ZpdFS J
      // 03: ldc2_w 5870922892468
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bB.b ()[I
      // 0b: astore 4
      // 0d: iload 1
      // 0e: ifne 1a
      // 11: aload 0
      // 12: getfield sixtwo/bC.VRAiw Lsixtwo/pX;
      // 15: areturn
      // 16: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19: athrow
      // 1a: aload 0
      // 1b: aload 4
      // 1d: ifnonnull 54
      // 20: getfield sixtwo/bC.ouKLq Lsixtwo/pX;
      // 23: ifnull 4c
      // 26: goto 2d
      // 29: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: getfield sixtwo/bC.ouKLq Lsixtwo/pX;
      // 31: aload 4
      // 33: ifnonnull 82
      // 36: goto 3d
      // 39: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: invokeinterface sixtwo/pX.finished ()Z 1
      // 42: ifeq 7e
      // 45: goto 4c
      // 48: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: aload 0
      // 4d: goto 54
      // 50: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 0
      // 55: getfield sixtwo/bC.imthM Lsixtwo/pY;
      // 58: aload 4
      // 5a: ifnonnull 76
      // 5d: ifnonnull 72
      // 60: goto 67
      // 63: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: aload 0
      // 68: getfield sixtwo/bC.VRAiw Lsixtwo/pX;
      // 6b: goto 7b
      // 6e: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 71: athrow
      // 72: aload 0
      // 73: getfield sixtwo/bC.imthM Lsixtwo/pY;
      // 76: invokeinterface sixtwo/pY.createInstance ()Lsixtwo/pX; 1
      // 7b: putfield sixtwo/bC.ouKLq Lsixtwo/pX;
      // 7e: aload 0
      // 7f: getfield sixtwo/bC.ouKLq Lsixtwo/pX;
      // 82: areturn
   }

   private void Lw(class_10055 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bC.ZpdFS J
      // 03: ldc2_w 99375637116249
      // 06: lxor
      // 07: lstore 3
      // 08: aload 1
      // 09: aconst_null
      // 0a: putfield net/minecraft/class_10055.field_53337 Lnet/minecraft/class_2561;
      // 0d: aload 1
      // 0e: ldc_w 180.0
      // 11: putfield net/minecraft/class_10055.field_53446 F
      // 14: invokestatic sixtwo/bB.b ()[I
      // 17: aload 1
      // 18: fconst_0
      // 19: putfield net/minecraft/class_10055.field_53447 F
      // 1c: aload 1
      // 1d: fconst_0
      // 1e: putfield net/minecraft/class_10055.field_53448 F
      // 21: aload 1
      // 22: fconst_0
      // 23: putfield net/minecraft/class_10055.field_53451 F
      // 26: astore 5
      // 28: aload 1
      // 29: fconst_0
      // 2a: putfield net/minecraft/class_10055.field_53450 F
      // 2d: aload 1
      // 2e: fconst_0
      // 2f: putfield net/minecraft/class_10055.field_53403 F
      // 32: aload 1
      // 33: bipush 0
      // 34: putfield net/minecraft/class_10055.field_53410 Z
      // 37: aload 1
      // 38: bipush 0
      // 39: putfield net/minecraft/class_10055.field_53411 Z
      // 3c: aload 1
      // 3d: bipush 0
      // 3e: putfield net/minecraft/class_10055.field_53412 Z
      // 41: aload 1
      // 42: bipush 0
      // 43: putfield net/minecraft/class_10055.field_53413 Z
      // 46: aload 1
      // 47: fconst_0
      // 48: putfield net/minecraft/class_10055.field_53534 F
      // 4b: aload 1
      // 4c: bipush 0
      // 4d: putfield net/minecraft/class_10055.field_53535 Z
      // 50: aload 1
      // 51: fconst_0
      // 52: aload 5
      // 54: ifnonnull 7e
      // 57: putfield net/minecraft/class_10055.field_53521 F
      // 5a: aload 1
      // 5b: bipush 0
      // 5c: putfield net/minecraft/class_10055.field_53455 Z
      // 5f: aload 1
      // 60: iload 2
      // 61: ifeq 81
      // 64: goto 6b
      // 67: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: invokestatic java/lang/System.currentTimeMillis ()J
      // 6e: getstatic sixtwo/bC.FEhqQ J
      // 71: lrem
      // 72: l2f
      // 73: ldc_w 50.0
      // 76: fdiv
      // 77: goto 7e
      // 7a: invokestatic sixtwo/bC.LC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: goto 82
      // 81: fconst_0
      // 82: putfield net/minecraft/class_10055.field_53328 F
      // 85: return
   }
}
