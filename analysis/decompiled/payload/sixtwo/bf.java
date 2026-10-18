package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class bf extends aA {
   private final rk WZJax;
   private final rk LfVhX;
   private final mE QmUDf;
   private final ag StMVo;
   private boolean lGpSg;
   private static final long yhsxx = gb.aYR(-2964692983370650862L, 5945782339383189539L, MethodHandles.lookup().lookupClass()).a(67608889055075L);
   private static final String ZzLYN;
   private static final long[] xkIge;
   private static final Integer[] BNxZH;
   private static final Map dVkdH;

   public bf(mE var1) {
      long var2 = yhsxx ^ 46864855338786L;
      super();
      this.WZJax = new rk(CM<"z">(481, 8801742853479830103L ^ var2)).dhs(rj.UPXqT);
      this.LfVhX = new rk(CM<"z">(11671, 5833783957249998368L ^ var2)).dhs(rj.UPXqT);
      this.lGpSg = false;
      this.QmUDf = var1;
      this.StMVo = new ag(var1.cnD(), ag$rR.VdGoA);
      this.StMVo.sX(15.0F, 45.0F);
      this.BcpIo = 115.0F;
      this.WjISQ = 55.0F;
   }

   static {
      long var11 = yhsxx ^ 94924181128473L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u0012\u0087\u0090Âº(Û\u0012\u000bX<SÔÞ\u0088P".getBytes("ISO-8859-1"));
      String var19 = CJ(var15).intern();
      int var10001 = -1;
      ZzLYN = var19;
      dVkdH = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[2];
      int var3 = 0;
      String var4 = "Í\u0007g\u0099iK¼µj8Ø\u008cÿÍü³";
      int var5 = "Í\u0007g\u0099iK¼µj8Ø\u008cÿÍü³".length();
      byte var2 = 0;

      do {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         var10001 = var3++;
         long var8 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte[] var10 = var0.doFinal(
            new byte[]{
               (byte)(var8 >>> 56),
               (byte)(var8 >>> 48),
               (byte)(var8 >>> 40),
               (byte)(var8 >>> 32),
               (byte)(var8 >>> 24),
               (byte)(var8 >>> 16),
               (byte)(var8 >>> 8),
               (byte)var8
            }
         );
         long var10004 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         byte var22 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      xkIge = var6;
      BNxZH = new Integer[2];
   }

   @Override
   public void dl(double var1, double var3, mA var5) {
      this.StMVo.dl(var1, var3, var5);
      super.dl(var1, var3, var5);
   }

   public mE CE() {
      return this.QmUDf;
   }

   private static MatchException CI(MatchException var0) {
      return var0;
   }

   public bf CH(boolean var1) {
      this.lGpSg = var1;
      return this;
   }

   @Override
   public boolean dk(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bf.yhsxx J
      // 03: ldc2_w 47706118366127
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/bg.De ()I
      // 0c: istore 8
      // 0e: aload 0
      // 0f: getfield sixtwo/bf.StMVo Lsixtwo/ag;
      // 12: dload 1
      // 13: dload 3
      // 14: aload 5
      // 16: invokevirtual sixtwo/ag.dk (DDLsixtwo/mA;)Z
      // 19: iload 8
      // 1b: ifeq 29
      // 1e: ifeq 2a
      // 21: goto 28
      // 24: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: bipush 1
      // 29: ireturn
      // 2a: aload 5
      // 2c: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 2f: if_acmpne 7a
      // 32: new sixtwo/lc
      // 35: dup
      // 36: aload 0
      // 37: getfield sixtwo/bf.MCnYt F
      // 3a: aload 0
      // 3b: getfield sixtwo/bf.BcpIo F
      // 3e: fadd
      // 3f: ldc 15.0
      // 41: fsub
      // 42: aload 0
      // 43: getfield sixtwo/bf.pNyTQ F
      // 46: aload 0
      // 47: getfield sixtwo/bf.WjISQ F
      // 4a: fadd
      // 4b: ldc 15.0
      // 4d: fsub
      // 4e: ldc 8.0
      // 50: ldc 8.0
      // 52: invokespecial sixtwo/lc.<init> (FFFF)V
      // 55: astore 9
      // 57: aload 9
      // 59: dload 1
      // 5a: dload 3
      // 5b: invokevirtual sixtwo/lc.bXD (DD)Z
      // 5e: iload 8
      // 60: ifeq 82
      // 63: ifeq 7a
      // 66: goto 6d
      // 69: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6c: athrow
      // 6d: aload 0
      // 6e: getfield sixtwo/bf.QmUDf Lsixtwo/mE;
      // 71: invokevirtual sixtwo/mE.cnB ()V
      // 74: bipush 1
      // 75: ireturn
      // 76: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 0
      // 7b: dload 1
      // 7c: dload 3
      // 7d: aload 5
      // 7f: invokespecial sixtwo/aA.dk (DDLsixtwo/mA;)Z
      // 82: ireturn
   }

   @Override
   protected void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bf.yhsxx J
      // 003: ldc2_w 130802064357227
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/bg.De ()I
      // 00b: aload 0
      // 00c: getfield sixtwo/bf.LfVhX Lsixtwo/rk;
      // 00f: aload 0
      // 010: aload 1
      // 011: invokevirtual sixtwo/bf.ti (Lsixtwo/lC;)Z
      // 014: invokevirtual sixtwo/rk.dhc (Z)V
      // 017: istore 4
      // 019: aload 0
      // 01a: getfield sixtwo/bf.WZJax Lsixtwo/rk;
      // 01d: aload 0
      // 01e: getfield sixtwo/bf.lGpSg Z
      // 021: iload 4
      // 023: ifeq 031
      // 026: ifne 034
      // 029: goto 030
      // 02c: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: bipush 1
      // 031: goto 035
      // 034: bipush 0
      // 035: invokevirtual sixtwo/rk.dhc (Z)V
      // 038: ldc 7.0
      // 03a: fstore 5
      // 03c: aload 0
      // 03d: getfield sixtwo/bf.WZJax Lsixtwo/rk;
      // 040: invokevirtual sixtwo/rk.dhj ()F
      // 043: fstore 6
      // 045: aload 0
      // 046: getfield sixtwo/bf.CtPwV Lsixtwo/ii;
      // 049: invokevirtual sixtwo/ii.bje ()Lsixtwo/mG;
      // 04c: ldc 0.8
      // 04e: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 051: fload 6
      // 053: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 056: astore 7
      // 058: aload 1
      // 059: aload 0
      // 05a: getfield sixtwo/bf.MCnYt F
      // 05d: aload 0
      // 05e: getfield sixtwo/bf.pNyTQ F
      // 061: aload 0
      // 062: getfield sixtwo/bf.BcpIo F
      // 065: aload 0
      // 066: getfield sixtwo/bf.WjISQ F
      // 069: ldc 5.0
      // 06b: getstatic sixtwo/ld.M Lsixtwo/ld;
      // 06e: aload 7
      // 070: invokevirtual sixtwo/lC.cdm (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 073: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 076: ldc 7.0
      // 078: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 07b: astore 8
      // 07d: aload 0
      // 07e: getfield sixtwo/bf.MCnYt F
      // 081: ldc 15.0
      // 083: fadd
      // 084: aload 0
      // 085: getfield sixtwo/bf.StMVo Lsixtwo/ag;
      // 088: invokevirtual sixtwo/ag.kN ()F
      // 08b: fadd
      // 08c: ldc 15.0
      // 08e: fadd
      // 08f: fstore 9
      // 091: aload 0
      // 092: getfield sixtwo/bf.pNyTQ F
      // 095: ldc 8.0
      // 097: fadd
      // 098: fstore 10
      // 09a: aload 0
      // 09b: getfield sixtwo/bf.CtPwV Lsixtwo/ii;
      // 09e: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 0a1: invokestatic sixtwo/jF.bHw ()[F
      // 0a4: bipush 3
      // 0a5: faload
      // 0a6: ldc 0.75
      // 0a8: fmul
      // 0a9: ldc 0.25
      // 0ab: aload 0
      // 0ac: getfield sixtwo/bf.LfVhX Lsixtwo/rk;
      // 0af: invokevirtual sixtwo/rk.dhj ()F
      // 0b2: fmul
      // 0b3: fadd
      // 0b4: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0b7: fload 6
      // 0b9: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0bc: astore 11
      // 0be: aload 1
      // 0bf: aload 8
      // 0c1: aload 0
      // 0c2: getfield sixtwo/bf.QmUDf Lsixtwo/mE;
      // 0c5: invokevirtual sixtwo/mE.cnD ()Ljava/lang/String;
      // 0c8: fload 9
      // 0ca: fload 10
      // 0cc: aload 11
      // 0ce: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 0d1: aload 0
      // 0d2: getfield sixtwo/bf.CtPwV Lsixtwo/ii;
      // 0d5: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 0d8: ldc 0.5
      // 0da: fload 6
      // 0dc: fmul
      // 0dd: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0e0: astore 12
      // 0e2: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 0e5: ldc 6.0
      // 0e7: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 0ea: astore 13
      // 0ec: fload 10
      // 0ee: aload 8
      // 0f0: invokevirtual sixtwo/lq.cat ()F
      // 0f3: fadd
      // 0f4: ldc 3.0
      // 0f6: fadd
      // 0f7: fstore 14
      // 0f9: aload 1
      // 0fa: aload 13
      // 0fc: getstatic sixtwo/bf.ZzLYN Ljava/lang/String;
      // 0ff: fload 9
      // 101: fload 14
      // 103: aload 12
      // 105: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 108: fload 14
      // 10a: aload 13
      // 10c: invokevirtual sixtwo/lq.cat ()F
      // 10f: fadd
      // 110: ldc 3.0
      // 112: fadd
      // 113: fstore 15
      // 115: aload 1
      // 116: aload 13
      // 118: aload 0
      // 119: getfield sixtwo/bf.QmUDf Lsixtwo/mE;
      // 11c: invokevirtual sixtwo/mE.cnE ()J
      // 11f: invokestatic java/time/Instant.ofEpochSecond (J)Ljava/time/Instant;
      // 122: invokestatic sixtwo/jf.bAS (Ljava/time/Instant;)Ljava/lang/String;
      // 125: fload 9
      // 127: fload 15
      // 129: aload 12
      // 12b: ldc 0.8
      // 12d: ldc 0.99
      // 12f: aload 0
      // 130: getfield sixtwo/bf.BcpIo F
      // 133: fload 9
      // 135: aload 0
      // 136: getfield sixtwo/bf.MCnYt F
      // 139: fsub
      // 13a: fsub
      // 13b: ldc 7.0
      // 13d: fsub
      // 13e: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 141: new sixtwo/lc
      // 144: dup
      // 145: aload 0
      // 146: getfield sixtwo/bf.MCnYt F
      // 149: aload 0
      // 14a: getfield sixtwo/bf.BcpIo F
      // 14d: fadd
      // 14e: ldc 15.0
      // 150: fsub
      // 151: aload 0
      // 152: getfield sixtwo/bf.pNyTQ F
      // 155: aload 0
      // 156: getfield sixtwo/bf.WjISQ F
      // 159: fadd
      // 15a: ldc 15.0
      // 15c: fsub
      // 15d: ldc 8.0
      // 15f: ldc 8.0
      // 161: invokespecial sixtwo/lc.<init> (FFFF)V
      // 164: astore 16
      // 166: aload 1
      // 167: getstatic sixtwo/lf.JHGge Lsixtwo/lf;
      // 16a: aload 16
      // 16c: getstatic sixtwo/jk.mPXGi Lsixtwo/mG;
      // 16f: fload 6
      // 171: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 174: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 177: aload 0
      // 178: getfield sixtwo/bf.StMVo Lsixtwo/ag;
      // 17b: aload 0
      // 17c: getfield sixtwo/bf.MCnYt F
      // 17f: ldc 15.0
      // 181: fadd
      // 182: aload 0
      // 183: getfield sixtwo/bf.pNyTQ F
      // 186: fload 5
      // 188: fadd
      // 189: invokevirtual sixtwo/ag.sW (FF)Lsixtwo/az;
      // 18c: pop
      // 18d: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 190: invokevirtual sixtwo/bl.sf ()F
      // 193: ldc 0.8
      // 195: fcmpg
      // 196: iload 4
      // 198: ifeq 1bd
      // 19b: ifle 1c0
      // 19e: goto 1a5
      // 1a1: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a4: athrow
      // 1a5: fload 6
      // 1a7: iload 4
      // 1a9: ifeq 1c6
      // 1ac: goto 1b3
      // 1af: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b2: athrow
      // 1b3: ldc 0.8
      // 1b5: fcmpg
      // 1b6: goto 1bd
      // 1b9: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bc: athrow
      // 1bd: ifge 1c1
      // 1c0: return
      // 1c1: invokestatic sixtwo/jF.bHw ()[F
      // 1c4: bipush 3
      // 1c5: faload
      // 1c6: fstore 17
      // 1c8: fconst_1
      // 1c9: fconst_1
      // 1ca: fconst_1
      // 1cb: fconst_1
      // 1cc: fload 6
      // 1ce: invokestatic java/lang/Math.min (FF)F
      // 1d1: invokestatic sixtwo/jF.bHz (FFFF)V
      // 1d4: aload 0
      // 1d5: getfield sixtwo/bf.StMVo Lsixtwo/ag;
      // 1d8: aload 1
      // 1d9: invokevirtual sixtwo/ag.su (Lsixtwo/lC;)V
      // 1dc: fconst_1
      // 1dd: fconst_1
      // 1de: fconst_1
      // 1df: fload 17
      // 1e1: invokestatic sixtwo/jF.bHz (FFFF)V
      // 1e4: return
   }

   @Override
   public boolean dB(double param1, double param3, mA param5, double param6, double param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bf.yhsxx J
      // 03: ldc2_w 4070852858722
      // 06: lxor
      // 07: lstore 10
      // 09: invokestatic sixtwo/bg.De ()I
      // 0c: istore 12
      // 0e: aload 0
      // 0f: getfield sixtwo/bf.StMVo Lsixtwo/ag;
      // 12: dload 1
      // 13: dload 3
      // 14: aload 5
      // 16: dload 6
      // 18: dload 8
      // 1a: invokevirtual sixtwo/ag.dB (DDLsixtwo/mA;DD)Z
      // 1d: iload 12
      // 1f: ifeq 3e
      // 22: ifeq 32
      // 25: goto 2c
      // 28: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: bipush 1
      // 2d: ireturn
      // 2e: invokestatic sixtwo/bf.CI (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: dload 1
      // 34: dload 3
      // 35: aload 5
      // 37: dload 6
      // 39: dload 8
      // 3b: invokespecial sixtwo/aA.dB (DDLsixtwo/mA;DD)Z
      // 3e: ireturn
   }

   @Override
   public void dY() {
      super.dY();
      this.StMVo.dY();
   }

   private static CallSite CM(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("CL".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bf" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public rk CC() {
      return this.WZJax;
   }

   private static String CJ(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   public ag CF() {
      return this.StMVo;
   }

   private static int CK(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 22978;
      if (BNxZH[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = xkIge[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])dVkdH.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               dVkdH.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bf", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         BNxZH[var3] = var15;
      }

      return BNxZH[var3];
   }

   private static int CL(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = CK(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public rk CD() {
      return this.LfVhX;
   }

   public boolean CG() {
      return this.lGpSg;
   }
}
