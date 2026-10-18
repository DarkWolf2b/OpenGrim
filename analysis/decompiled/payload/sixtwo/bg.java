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

public class bg extends az {
   private final rk yScCM;
   private final rk CUqhT;
   private final rk Mgsdz;
   private final rk fSVRe;
   private final rk DAnVX;
   private final ri UjiHh;
   private final gg leLdq;
   private bh MPosk;
   private boolean OfuUM;
   private boolean wAIFj;
   private static int BIqnm;
   private static final long CEakp = gb.aYR(1510145277589715049L, -9149368666420411358L, MethodHandles.lookup().lookupClass()).a(12342236566515L);
   private static final long[] tfkIz;
   private static final Integer[] figLz;
   private static final Map aaqZK = new HashMap(13);

   public bg(gg var1) {
      long var2 = CEakp ^ 139428440737330L;
      super();
      this.yScCM = new rk(Di<"b">(10421, 5713803004554153300L ^ var2)).dhs(rj.UPXqT);
      this.CUqhT = new rk(Di<"b">(27352, 1825278903543254842L ^ var2)).dhs(rj.UPXqT);
      this.Mgsdz = new rk(Di<"b">(27352, 1825278903543254842L ^ var2)).dhs(rj.UPXqT);
      this.fSVRe = new rk(Di<"b">(12257, 3995126327458892289L ^ var2)).dhs(rj.UPXqT);
      this.DAnVX = new rk(Di<"b">(29257, 8205353966831097770L ^ var2)).dhs(rj.UPXqT);
      this.UjiHh = new ri(Di<"b">(23869, 2815008585216063706L ^ var2), mG.hoGuU);
      this.leLdq = var1;
      this.BcpIo = 175.0F;
      this.WjISQ = 28.0F;
   }

   static {
      long var0 = CEakp ^ 90933238133144L;
      Dc(0);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[5];
      int var5 = 0;
      String var6 = "\u008f5\u0095¦;Pür;¥`²¶ ð\u009aâr8H\u009b¬¯\u0092";
      int var7 = "\u008f5\u0095¦;Pür;¥`²¶ ð\u009aâr8H\u009b¬¯\u0092".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     tfkIz = var8;
                     figLz = new Integer[5];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "ùóXT\u0011e\u0012iï\u008a\u008a\u0001@\u0089!î";
                  var7 = "ùóXT\u0011e\u0012iï\u008a\u008a\u0001@\u0089!î".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   public rk CR() {
      return this.yScCM;
   }

   private boolean CN(bg var1) {
      return bl.Ex().manager().aY(bd.class).stream().anyMatch(var1x -> {
         long var2 = CEakp ^ 24422575216144L;

         try {
            if (var1x.BS() == var1) {
               return true;
            }
         } catch (MatchException var4) {
            throw Df(var4);
         }

         return false;
      });
   }

   @Override
   public boolean dk(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bg.CEakp J
      // 03: ldc2_w 1713281979675
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/bg.De ()I
      // 0c: istore 8
      // 0e: aload 0
      // 0f: dload 1
      // 10: dload 3
      // 11: invokevirtual sixtwo/bg.tg (DD)Z
      // 14: iload 8
      // 16: ifeq e1
      // 19: ifeq d9
      // 1c: goto 23
      // 1f: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/bg.yScCM Lsixtwo/rk;
      // 27: invokevirtual sixtwo/rk.dhj ()F
      // 2a: fconst_0
      // 2b: fcmpl
      // 2c: iload 8
      // 2e: ifeq e1
      // 31: goto 38
      // 34: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: ifeq d9
      // 3b: goto 42
      // 3e: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: getstatic sixtwo/bg$sc.gbAZn [I
      // 45: aload 5
      // 47: invokevirtual sixtwo/mA.ordinal ()I
      // 4a: iaload
      // 4b: iload 8
      // 4d: ifeq d8
      // 50: goto 57
      // 53: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: tableswitch 128 1 3 29 99 117
      // 70: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: aload 0
      // 75: getfield sixtwo/bg.leLdq Lsixtwo/gg;
      // 78: iload 8
      // 7a: ifeq b2
      // 7d: goto 84
      // 80: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: invokestatic sixtwo/fX.aYl ()Lsixtwo/fX;
      // 87: if_acmpne a7
      // 8a: goto 91
      // 8d: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: aload 0
      // 92: bipush 1
      // 93: putfield sixtwo/bg.OfuUM Z
      // 96: aload 0
      // 97: bipush 1
      // 98: putfield sixtwo/bg.wAIFj Z
      // 9b: iload 8
      // 9d: ifne d7
      // a0: goto a7
      // a3: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: aload 0
      // a8: getfield sixtwo/bg.leLdq Lsixtwo/gg;
      // ab: goto b2
      // ae: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b1: athrow
      // b2: invokevirtual sixtwo/gg.aZZ ()V
      // b5: iload 8
      // b7: ifne d7
      // ba: aload 0
      // bb: dload 1
      // bc: dload 3
      // bd: invokevirtual sixtwo/bg.CO (DD)V
      // c0: iload 8
      // c2: ifne d7
      // c5: goto cc
      // c8: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cb: athrow
      // cc: aload 0
      // cd: invokevirtual sixtwo/bg.CP ()V
      // d0: goto d7
      // d3: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d6: athrow
      // d7: bipush 1
      // d8: ireturn
      // d9: aload 0
      // da: dload 1
      // db: dload 3
      // dc: aload 5
      // de: invokespecial sixtwo/az.dk (DDLsixtwo/mA;)Z
      // e1: ireturn
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
      // 000: getstatic sixtwo/bg.CEakp J
      // 003: ldc2_w 101271826170335
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/bg.Dd ()I
      // 00b: aload 0
      // 00c: getfield sixtwo/bg.Mgsdz Lsixtwo/rk;
      // 00f: getstatic sixtwo/rj.JbGQS Lsixtwo/rj;
      // 012: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 015: pop
      // 016: aload 0
      // 017: getfield sixtwo/bg.Mgsdz Lsixtwo/rk;
      // 01a: aload 0
      // 01b: getfield sixtwo/bg.leLdq Lsixtwo/gg;
      // 01e: invokevirtual sixtwo/gg.bag ()Z
      // 021: invokevirtual sixtwo/rk.dhc (Z)V
      // 024: istore 4
      // 026: aload 0
      // 027: aload 1
      // 028: invokevirtual sixtwo/bg.ti (Lsixtwo/lC;)Z
      // 02b: istore 5
      // 02d: iload 4
      // 02f: ifne 07b
      // 032: iload 5
      // 034: ifeq 067
      // 037: goto 03e
      // 03a: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: ldc sixtwo/aC
      // 040: invokestatic sixtwo/aE.vA (Ljava/lang/Class;)Lsixtwo/aE;
      // 043: checkcast sixtwo/aC
      // 046: astore 6
      // 048: iload 4
      // 04a: ifne 07b
      // 04d: aload 6
      // 04f: ifnull 067
      // 052: goto 059
      // 055: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 058: athrow
      // 059: aload 6
      // 05b: aload 0
      // 05c: invokevirtual sixtwo/aC.ul (Lsixtwo/bg;)Lsixtwo/aC;
      // 05f: pop
      // 060: goto 067
      // 063: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 066: athrow
      // 067: aload 0
      // 068: getfield sixtwo/bg.CUqhT Lsixtwo/rk;
      // 06b: iload 5
      // 06d: invokevirtual sixtwo/rk.dhc (Z)V
      // 070: aload 0
      // 071: getfield sixtwo/bg.DAnVX Lsixtwo/rk;
      // 074: aload 0
      // 075: getfield sixtwo/bg.OfuUM Z
      // 078: invokevirtual sixtwo/rk.dhc (Z)V
      // 07b: aload 0
      // 07c: getfield sixtwo/bg.yScCM Lsixtwo/rk;
      // 07f: aload 0
      // 080: aload 0
      // 081: invokevirtual sixtwo/bg.CN (Lsixtwo/bg;)Z
      // 084: iload 4
      // 086: ifne 094
      // 089: ifne 097
      // 08c: goto 093
      // 08f: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 092: athrow
      // 093: bipush 1
      // 094: goto 098
      // 097: bipush 0
      // 098: invokevirtual sixtwo/rk.dhc (Z)V
      // 09b: ldc 7.0
      // 09d: fstore 6
      // 09f: fconst_1
      // 0a0: aload 0
      // 0a1: getfield sixtwo/bg.yScCM Lsixtwo/rk;
      // 0a4: invokevirtual sixtwo/rk.dhj ()F
      // 0a7: invokestatic java/lang/Math.min (FF)F
      // 0aa: fstore 7
      // 0ac: aload 0
      // 0ad: getfield sixtwo/bg.CtPwV Lsixtwo/ii;
      // 0b0: invokevirtual sixtwo/ii.bje ()Lsixtwo/mG;
      // 0b3: ldc 204.0
      // 0b5: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0b8: fload 7
      // 0ba: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0bd: astore 8
      // 0bf: aload 0
      // 0c0: getfield sixtwo/bg.UjiHh Lsixtwo/ri;
      // 0c3: aload 0
      // 0c4: getfield sixtwo/bg.OfuUM Z
      // 0c7: iload 4
      // 0c9: ifne 0f3
      // 0cc: ifeq 0e0
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d5: athrow
      // 0d6: getstatic sixtwo/jk.mPXGi Lsixtwo/mG;
      // 0d9: goto 10b
      // 0dc: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0df: athrow
      // 0e0: aload 0
      // 0e1: iload 4
      // 0e3: ifne 105
      // 0e6: getfield sixtwo/bg.leLdq Lsixtwo/gg;
      // 0e9: invokevirtual sixtwo/gg.bag ()Z
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: ifeq 104
      // 0f6: aload 0
      // 0f7: getfield sixtwo/bg.CtPwV Lsixtwo/ii;
      // 0fa: invokevirtual sixtwo/ii.bjf ()Lsixtwo/mG;
      // 0fd: goto 10b
      // 100: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 103: athrow
      // 104: aload 0
      // 105: getfield sixtwo/bg.CtPwV Lsixtwo/ii;
      // 108: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 10b: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 10e: pop
      // 10f: aload 0
      // 110: getfield sixtwo/bg.fSVRe Lsixtwo/rk;
      // 113: aload 0
      // 114: getfield sixtwo/bg.OfuUM Z
      // 117: iload 4
      // 119: ifne 131
      // 11c: ifeq 141
      // 11f: goto 126
      // 122: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 125: athrow
      // 126: aload 0
      // 127: getfield sixtwo/bg.wAIFj Z
      // 12a: goto 131
      // 12d: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 130: athrow
      // 131: ifeq 13c
      // 134: fconst_1
      // 135: goto 142
      // 138: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13b: athrow
      // 13c: ldc -1.0
      // 13e: goto 142
      // 141: fconst_0
      // 142: invokevirtual sixtwo/rk.dhd (F)F
      // 145: pop
      // 146: aload 0
      // 147: getfield sixtwo/bg.DAnVX Lsixtwo/rk;
      // 14a: invokevirtual sixtwo/rk.dhj ()F
      // 14d: fconst_1
      // 14e: fcmpl
      // 14f: iload 4
      // 151: ifne 173
      // 154: ifne 16a
      // 157: goto 15e
      // 15a: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15d: athrow
      // 15e: aload 0
      // 15f: bipush 0
      // 160: putfield sixtwo/bg.OfuUM Z
      // 163: goto 16a
      // 166: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 169: athrow
      // 16a: aload 0
      // 16b: getfield sixtwo/bg.fSVRe Lsixtwo/rk;
      // 16e: invokevirtual sixtwo/rk.dhj ()F
      // 171: fconst_1
      // 172: fcmpl
      // 173: iload 4
      // 175: ifne 1a4
      // 178: ifne 18e
      // 17b: goto 182
      // 17e: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 181: athrow
      // 182: aload 0
      // 183: bipush 0
      // 184: putfield sixtwo/bg.wAIFj Z
      // 187: goto 18e
      // 18a: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18d: athrow
      // 18e: aload 0
      // 18f: iload 4
      // 191: ifne 1cf
      // 194: getfield sixtwo/bg.fSVRe Lsixtwo/rk;
      // 197: invokevirtual sixtwo/rk.dhj ()F
      // 19a: ldc -1.0
      // 19c: fcmpl
      // 19d: goto 1a4
      // 1a0: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a3: athrow
      // 1a4: ifne 1b3
      // 1a7: aload 0
      // 1a8: bipush 1
      // 1a9: putfield sixtwo/bg.wAIFj Z
      // 1ac: goto 1b3
      // 1af: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b2: athrow
      // 1b3: aload 1
      // 1b4: aload 0
      // 1b5: getfield sixtwo/bg.MCnYt F
      // 1b8: aload 0
      // 1b9: getfield sixtwo/bg.pNyTQ F
      // 1bc: aload 0
      // 1bd: getfield sixtwo/bg.BcpIo F
      // 1c0: aload 0
      // 1c1: getfield sixtwo/bg.WjISQ F
      // 1c4: ldc 5.0
      // 1c6: getstatic sixtwo/ld.M Lsixtwo/ld;
      // 1c9: aload 8
      // 1cb: invokevirtual sixtwo/lC.cdm (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 1ce: aload 0
      // 1cf: getfield sixtwo/bg.UjiHh Lsixtwo/ri;
      // 1d2: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 1d5: ldc 255.0
      // 1d7: fload 7
      // 1d9: fmul
      // 1da: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 1dd: invokestatic sixtwo/jF.bHw ()[F
      // 1e0: bipush 3
      // 1e1: faload
      // 1e2: ldc 0.75
      // 1e4: fmul
      // 1e5: ldc 0.25
      // 1e7: aload 0
      // 1e8: getfield sixtwo/bg.Mgsdz Lsixtwo/rk;
      // 1eb: invokevirtual sixtwo/rk.dhj ()F
      // 1ee: fmul
      // 1ef: fadd
      // 1f0: ldc 0.25
      // 1f2: aload 0
      // 1f3: getfield sixtwo/bg.CUqhT Lsixtwo/rk;
      // 1f6: invokevirtual sixtwo/rk.dhj ()F
      // 1f9: fmul
      // 1fa: fadd
      // 1fb: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 1fe: astore 9
      // 200: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 203: ldc 7.0
      // 205: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 208: astore 10
      // 20a: aload 0
      // 20b: getfield sixtwo/bg.MCnYt F
      // 20e: fload 6
      // 210: fadd
      // 211: aload 0
      // 212: getfield sixtwo/bg.fSVRe Lsixtwo/rk;
      // 215: invokevirtual sixtwo/rk.dhj ()F
      // 218: fadd
      // 219: fstore 11
      // 21b: aload 0
      // 21c: getfield sixtwo/bg.pNyTQ F
      // 21f: ldc_w 8.0
      // 222: fadd
      // 223: fstore 12
      // 225: aload 1
      // 226: aload 10
      // 228: aload 0
      // 229: getfield sixtwo/bg.leLdq Lsixtwo/gg;
      // 22c: invokevirtual sixtwo/gg.bad ()[I
      // 22f: fload 11
      // 231: fload 12
      // 233: aload 9
      // 235: invokevirtual sixtwo/lC.ceA (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 238: aload 0
      // 239: getfield sixtwo/bg.CtPwV Lsixtwo/ii;
      // 23c: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 23f: ldc 255.0
      // 241: fload 7
      // 243: fmul
      // 244: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 247: ldc_w 0.5
      // 24a: fload 7
      // 24c: fmul
      // 24d: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 250: astore 13
      // 252: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 255: ldc_w 6.0
      // 258: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 25b: astore 14
      // 25d: aload 0
      // 25e: getfield sixtwo/bg.MCnYt F
      // 261: fload 6
      // 263: fadd
      // 264: fstore 15
      // 266: aload 0
      // 267: getfield sixtwo/bg.pNyTQ F
      // 26a: ldc_w 16.0
      // 26d: fadd
      // 26e: fstore 16
      // 270: aload 1
      // 271: aload 14
      // 273: aload 0
      // 274: getfield sixtwo/bg.leLdq Lsixtwo/gg;
      // 277: invokevirtual sixtwo/gg.bae ()[I
      // 27a: fload 15
      // 27c: fload 16
      // 27e: aload 13
      // 280: ldc_w 0.7
      // 283: ldc_w 0.99
      // 286: aload 0
      // 287: getfield sixtwo/bg.BcpIo F
      // 28a: fload 6
      // 28c: fconst_2
      // 28d: fmul
      // 28e: fsub
      // 28f: invokevirtual sixtwo/lC.ceI (Lsixtwo/lq;[IFFLsixtwo/mG;FFF)V
      // 292: return
   }

   public rk CS() {
      return this.CUqhT;
   }

   public void CO(double var1, double var3) {
      this.MPosk = new bh((float)var1, (float)var3, 6.0F, this.leLdq);
      aw.route(this.MPosk);
   }

   public gg CX() {
      return this.leLdq;
   }

   public bh CY() {
      return this.MPosk;
   }

   public boolean CZ() {
      return this.OfuUM;
   }

   public static int Dd() {
      return BIqnm;
   }

   public static int De() {
      int var0 = Dd();

      try {
         return var0 == 0 ? 76 : 0;
      } catch (MatchException var1) {
         throw Df(var1);
      }
   }

   public static void Dc(int var0) {
      BIqnm = var0;
   }

   private static CallSite Di(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Dh".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException Df(MatchException var0) {
      return var0;
   }

   public boolean Da() {
      return this.wAIFj;
   }

   public void CP() {
      this.CQ(null);
   }

   public void CQ(cB param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bg.CEakp J
      // 03: ldc2_w 112276050900256
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bg.Dd ()I
      // 0b: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 0e: invokevirtual sixtwo/bl.Ey ()Lsixtwo/lc;
      // 11: astore 5
      // 13: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 16: invokevirtual sixtwo/bl.manager ()Lsixtwo/g;
      // 19: ldc_w sixtwo/bd
      // 1c: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 1f: astore 6
      // 21: aload 5
      // 23: invokevirtual sixtwo/lc.bXF ()F
      // 26: aload 5
      // 28: invokevirtual sixtwo/lc.bXH ()F
      // 2b: fadd
      // 2c: ldc_w 10.0
      // 2f: fadd
      // 30: fstore 7
      // 32: istore 4
      // 34: aload 5
      // 36: invokevirtual sixtwo/lc.bXG ()F
      // 39: fstore 8
      // 3b: aload 6
      // 3d: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 42: astore 9
      // 44: aload 9
      // 46: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 4b: ifeq 94
      // 4e: aload 9
      // 50: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 55: checkcast sixtwo/bd
      // 58: astore 10
      // 5a: aload 10
      // 5c: invokevirtual sixtwo/bd.BS ()Lsixtwo/bg;
      // 5f: iload 4
      // 61: ifne df
      // 64: aload 0
      // 65: if_acmpne 8f
      // 68: goto 6f
      // 6b: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 1
      // 70: ifnull 87
      // 73: goto 7a
      // 76: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 10
      // 7c: aload 1
      // 7d: invokevirtual sixtwo/bd.BQ (Lsixtwo/cB;)V
      // 80: goto 87
      // 83: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: aload 10
      // 89: bipush 1
      // 8a: invokevirtual sixtwo/bd.Cg (Z)Lsixtwo/bd;
      // 8d: pop
      // 8e: return
      // 8f: iload 4
      // 91: ifeq 44
      // 94: aload 6
      // 96: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 9b: astore 9
      // 9d: aload 9
      // 9f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // a4: ifeq cb
      // a7: aload 9
      // a9: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // ae: checkcast sixtwo/bd
      // b1: astore 10
      // b3: aload 10
      // b5: bipush 0
      // b6: invokevirtual sixtwo/bd.Cg (Z)Lsixtwo/bd;
      // b9: pop
      // ba: iload 4
      // bc: ifne e5
      // bf: iload 4
      // c1: ifeq 9d
      // c4: goto cb
      // c7: invokestatic sixtwo/bg.Df (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ca: athrow
      // cb: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // ce: new sixtwo/bd
      // d1: dup
      // d2: aload 0
      // d3: fload 7
      // d5: fload 8
      // d7: aload 1
      // d8: invokespecial sixtwo/bd.<init> (Lsixtwo/bg;FFLsixtwo/cB;)V
      // db: invokevirtual sixtwo/bl.Eq (Lsixtwo/bd;)V
      // de: aload 0
      // df: getfield sixtwo/bg.yScCM Lsixtwo/rk;
      // e2: invokevirtual sixtwo/rk.dhg ()V
      // e5: return
   }

   private static int Dh(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Dg(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public rk CT() {
      return this.Mgsdz;
   }

   public rk CU() {
      return this.fSVRe;
   }

   public rk CV() {
      return this.DAnVX;
   }

   private static int Dg(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4146;
      if (figLz[var3] == null) {
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
         long var5 = tfkIz[var3];
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
         Object[] var9 = (Object[])aaqZK.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               aaqZK.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bg", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         figLz[var3] = var15;
      }

      return figLz[var3];
   }

   public ri CW() {
      return this.UjiHh;
   }
}
