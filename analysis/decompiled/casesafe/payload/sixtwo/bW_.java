package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class bW extends bS {
   private float ukVVb;
   private int[] hTEif;
   private mG VoZgJ;
   private final rk leDSE;
   private static final long xRlZx = gb.aYR(704933532158531826L, -7429875036314705378L, MethodHandles.lookup().lookupClass()).a(212489494341447L);
   private static final long qkDkP;

   public bW(cv var1, mr var2) {
      long var3 = xRlZx ^ 52646778373343L;
      super(var1, var2);
      this.ukVVb = Float.NaN;
      this.leDSE = new rk((int)qkDkP).dhs(rj.NJlxm);
   }

   static {
      long var0 = xRlZx ^ 31365474329250L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -562286198288578174L;
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
      qkDkP = var7;
   }

   @Override
   public boolean MH() {
      long var1 = xRlZx ^ 123979956543930L;
      int var3 = bS.NS();

      try {
         boolean var10000 = Float.isNaN(this.ukVVb);
         if (var3 != 0) {
            return var10000;
         }

         if (!var10000) {
            return true;
         }
      } catch (MatchException var4) {
         throw Ok(var4);
      }

      return false;
   }

   @Override
   public void MG(lC param1, ii param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bW.xRlZx J
      // 003: ldc2_w 140473303751541
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/bS.NS ()I
      // 00b: istore 5
      // 00d: aload 0
      // 00e: iload 5
      // 010: ifne 028
      // 013: getfield sixtwo/bW.VoZgJ Lsixtwo/mG;
      // 016: ifnull 02e
      // 019: goto 020
      // 01c: invokestatic sixtwo/bW.Ok (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: goto 028
      // 024: invokestatic sixtwo/bW.Ok (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 027: athrow
      // 028: getfield sixtwo/bW.hTEif [I
      // 02b: ifnonnull 033
      // 02e: return
      // 02f: invokestatic sixtwo/bW.Ok (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 032: athrow
      // 033: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 036: invokevirtual sixtwo/cq.RC ()Lsixtwo/bU;
      // 039: astore 6
      // 03b: aload 6
      // 03d: invokevirtual sixtwo/bU.RW ()F
      // 040: fstore 7
      // 042: aload 6
      // 044: invokevirtual sixtwo/bU.RX ()F
      // 047: fstore 8
      // 049: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 04c: ldc 7.0
      // 04e: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 051: astore 9
      // 053: ldc 255.0
      // 055: aload 0
      // 056: getfield sixtwo/bW.dExGi Lsixtwo/rk;
      // 059: invokevirtual sixtwo/rk.dhj ()F
      // 05c: fmul
      // 05d: fstore 10
      // 05f: ldc 20.0
      // 061: aload 0
      // 062: getfield sixtwo/bW.dExGi Lsixtwo/rk;
      // 065: invokevirtual sixtwo/rk.dhj ()F
      // 068: fmul
      // 069: fstore 11
      // 06b: aload 9
      // 06d: aload 0
      // 06e: getfield sixtwo/bW.hTEif [I
      // 071: invokevirtual sixtwo/lq.cap ([I)F
      // 074: fstore 12
      // 076: ldc 3.5
      // 078: fstore 13
      // 07a: fload 7
      // 07c: ldc 16.0
      // 07e: fsub
      // 07f: fload 11
      // 081: fadd
      // 082: fstore 14
      // 084: fload 8
      // 086: ldc 3.5
      // 088: fadd
      // 089: fstore 15
      // 08b: fconst_2
      // 08c: fload 13
      // 08e: fmul
      // 08f: ldc 6.0
      // 091: fadd
      // 092: fstore 16
      // 094: ldc 8.0
      // 096: fstore 17
      // 098: aload 0
      // 099: getfield sixtwo/bW.fGWTH Lsixtwo/bT;
      // 09c: fload 16
      // 09e: ldc 8.0
      // 0a0: fadd
      // 0a1: fload 12
      // 0a3: fadd
      // 0a4: ldc 5.0
      // 0a6: fadd
      // 0a7: ldc 15.0
      // 0a9: invokevirtual sixtwo/bT.NU (FF)V
      // 0ac: aload 1
      // 0ad: fload 14
      // 0af: fload 15
      // 0b1: fload 16
      // 0b3: fload 17
      // 0b5: ldc 3.0
      // 0b7: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 0ba: aload 0
      // 0bb: getfield sixtwo/bW.VoZgJ Lsixtwo/mG;
      // 0be: fload 10
      // 0c0: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0c3: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 0c6: ldc 6.0
      // 0c8: fstore 18
      // 0ca: fload 14
      // 0cc: fload 16
      // 0ce: ldc 0.5
      // 0d0: fmul
      // 0d1: fadd
      // 0d2: fstore 19
      // 0d4: fload 15
      // 0d6: fload 17
      // 0d8: ldc 0.5
      // 0da: fmul
      // 0db: fadd
      // 0dc: fstore 20
      // 0de: aload 1
      // 0df: invokevirtual sixtwo/lC.ceV ()V
      // 0e2: aload 1
      // 0e3: fload 19
      // 0e5: fload 20
      // 0e7: aload 0
      // 0e8: getfield sixtwo/bW.leDSE Lsixtwo/rk;
      // 0eb: invokevirtual sixtwo/rk.dhj ()F
      // 0ee: invokevirtual sixtwo/lC.cfb (FFF)V
      // 0f1: aload 1
      // 0f2: getstatic sixtwo/lf.hzyQG Lsixtwo/lf;
      // 0f5: fload 19
      // 0f7: fload 18
      // 0f9: ldc 0.5
      // 0fb: fmul
      // 0fc: fsub
      // 0fd: fload 20
      // 0ff: fload 18
      // 101: ldc 0.5
      // 103: fmul
      // 104: fsub
      // 105: fload 18
      // 107: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 10a: fload 10
      // 10c: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 10f: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 112: aload 1
      // 113: invokevirtual sixtwo/lC.ceW ()V
      // 116: aload 2
      // 117: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 11a: ldc 255.0
      // 11c: aload 0
      // 11d: getfield sixtwo/bW.dExGi Lsixtwo/rk;
      // 120: invokevirtual sixtwo/rk.dhj ()F
      // 123: fmul
      // 124: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 127: astore 21
      // 129: fload 7
      // 12b: ldc 31.0
      // 12d: fadd
      // 12e: ldc 10.0
      // 130: aload 0
      // 131: getfield sixtwo/bW.dExGi Lsixtwo/rk;
      // 134: invokevirtual sixtwo/rk.dhj ()F
      // 137: fmul
      // 138: fsub
      // 139: fstore 22
      // 13b: aload 1
      // 13c: aload 9
      // 13e: aload 0
      // 13f: getfield sixtwo/bW.hTEif [I
      // 142: fload 22
      // 144: fload 8
      // 146: ldc 5.0
      // 148: fadd
      // 149: aload 21
      // 14b: invokevirtual sixtwo/lC.ceA (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 14e: return
   }

   public void Oj(float param1, int[] param2, mG param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bW.xRlZx J
      // 03: ldc2_w 27351726822802
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/bS.NS ()I
      // 0c: istore 6
      // 0e: aload 0
      // 0f: getfield sixtwo/bW.ukVVb F
      // 12: iload 6
      // 14: ifne 46
      // 17: invokestatic java/lang/Float.isNaN (F)Z
      // 1a: ifeq 38
      // 1d: goto 24
      // 20: invokestatic sixtwo/bW.Ok (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: getfield sixtwo/bW.leDSE Lsixtwo/rk;
      // 28: fload 1
      // 29: invokevirtual sixtwo/rk.dhf (F)V
      // 2c: iload 6
      // 2e: ifeq 67
      // 31: goto 38
      // 34: invokestatic sixtwo/bW.Ok (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 0
      // 39: getfield sixtwo/bW.leDSE Lsixtwo/rk;
      // 3c: invokevirtual sixtwo/rk.dhj ()F
      // 3f: goto 46
      // 42: invokestatic sixtwo/bW.Ok (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: fstore 7
      // 48: fload 1
      // 49: fload 7
      // 4b: fsub
      // 4c: ldc 360.0
      // 4e: frem
      // 4f: ldc 540.0
      // 51: fadd
      // 52: ldc 360.0
      // 54: frem
      // 55: ldc 180.0
      // 57: fsub
      // 58: fstore 8
      // 5a: aload 0
      // 5b: getfield sixtwo/bW.leDSE Lsixtwo/rk;
      // 5e: fload 7
      // 60: fload 8
      // 62: fadd
      // 63: invokevirtual sixtwo/rk.dhd (F)F
      // 66: pop
      // 67: aload 0
      // 68: fload 1
      // 69: putfield sixtwo/bW.ukVVb F
      // 6c: aload 0
      // 6d: aload 2
      // 6e: putfield sixtwo/bW.hTEif [I
      // 71: aload 0
      // 72: aload 3
      // 73: putfield sixtwo/bW.VoZgJ Lsixtwo/mG;
      // 76: return
   }

   private static MatchException Ok(MatchException var0) {
      return var0;
   }
}
