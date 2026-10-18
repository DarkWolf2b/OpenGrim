package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class bR extends bS {
   private String tMmUB = "";
   private String MtpnS = "";
   private int FaxAk = -1;
   private int[] soyDT;
   private boolean sxniw = false;
   private int gCSoD = -1;
   private mG Bewjf;
   protected Z QbCNz;
   private static final long WvFup = gb.aYR(613445611563642980L, -4291922670228144719L, MethodHandles.lookup().lookupClass()).a(227490622051490L);
   private static final long YyRSM;

   public bR(cv var1, mr var2) {
      super(var1, var2);
   }

   static {
      long var0 = WvFup ^ 96318935065614L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 1842902776971313975L;
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
      YyRSM = var7;
   }

   @Override
   public boolean MH() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bR.WvFup J
      // 03: ldc2_w 32993024166670
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bS.NS ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/bR.FaxAk I
      // 10: iload 3
      // 11: ifne 27
      // 14: bipush -1
      // 15: if_icmpeq 2a
      // 18: goto 1f
      // 1b: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: bipush 1
      // 20: goto 27
      // 23: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: goto 2b
      // 2a: bipush 0
      // 2b: ireturn
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
      // 000: getstatic sixtwo/bR.WvFup J
      // 003: ldc2_w 18699774226881
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/bS.NR ()I
      // 00b: istore 5
      // 00d: aload 0
      // 00e: iload 5
      // 010: ifeq 028
      // 013: getfield sixtwo/bR.Bewjf Lsixtwo/mG;
      // 016: ifnull 02e
      // 019: goto 020
      // 01c: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: goto 028
      // 024: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 027: athrow
      // 028: getfield sixtwo/bR.soyDT [I
      // 02b: ifnonnull 033
      // 02e: return
      // 02f: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
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
      // 053: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 056: ldc 6.0
      // 058: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 05b: astore 10
      // 05d: aload 0
      // 05e: iload 5
      // 060: ifeq 078
      // 063: getfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 066: ifnonnull 08d
      // 069: goto 070
      // 06c: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06f: athrow
      // 070: aload 0
      // 071: goto 078
      // 074: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 077: athrow
      // 078: new sixtwo/Z
      // 07b: dup
      // 07c: aload 10
      // 07e: ldc 5.0
      // 080: getstatic sixtwo/bR.YyRSM J
      // 083: l2i
      // 084: getstatic sixtwo/rj.Zotpp Lsixtwo/rj;
      // 087: invokespecial sixtwo/Z.<init> (Lsixtwo/lq;FILsixtwo/rj;)V
      // 08a: putfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 08d: ldc 255.0
      // 08f: aload 0
      // 090: getfield sixtwo/bR.dExGi Lsixtwo/rk;
      // 093: invokevirtual sixtwo/rk.dhj ()F
      // 096: fmul
      // 097: fstore 11
      // 099: ldc 20.0
      // 09b: aload 0
      // 09c: getfield sixtwo/bR.dExGi Lsixtwo/rk;
      // 09f: invokevirtual sixtwo/rk.dhj ()F
      // 0a2: fmul
      // 0a3: fstore 12
      // 0a5: aload 0
      // 0a6: iload 5
      // 0a8: ifeq 0d1
      // 0ab: getfield sixtwo/bR.sxniw Z
      // 0ae: ifeq 0db
      // 0b1: goto 0b8
      // 0b4: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: aload 0
      // 0b9: getfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 0bc: bipush 0
      // 0bd: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0c0: fload 11
      // 0c2: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0c5: invokevirtual sixtwo/Z.kS (ZLsixtwo/mG;)Lsixtwo/Z;
      // 0c8: pop
      // 0c9: aload 0
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: getfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 0d4: aload 0
      // 0d5: getfield sixtwo/bR.FaxAk I
      // 0d8: invokevirtual sixtwo/Z.kO (I)V
      // 0db: aload 9
      // 0dd: aload 0
      // 0de: getfield sixtwo/bR.soyDT [I
      // 0e1: invokevirtual sixtwo/lq.cap ([I)F
      // 0e4: fstore 13
      // 0e6: aload 10
      // 0e8: aload 0
      // 0e9: getfield sixtwo/bR.tMmUB Ljava/lang/String;
      // 0ec: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0ef: fstore 14
      // 0f1: aload 10
      // 0f3: aload 0
      // 0f4: getfield sixtwo/bR.MtpnS Ljava/lang/String;
      // 0f7: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0fa: fstore 15
      // 0fc: aload 0
      // 0fd: getfield sixtwo/bR.FaxAk I
      // 100: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 103: astore 16
      // 105: aload 0
      // 106: iload 5
      // 108: ifeq 120
      // 10b: getfield sixtwo/bR.sxniw Z
      // 10e: ifeq 129
      // 111: goto 118
      // 114: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 117: athrow
      // 118: aload 0
      // 119: goto 120
      // 11c: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11f: athrow
      // 120: getfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 123: invokevirtual sixtwo/Z.kN ()F
      // 126: goto 130
      // 129: aload 10
      // 12b: aload 16
      // 12d: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 130: fstore 17
      // 132: aload 0
      // 133: getfield sixtwo/bR.gCSoD I
      // 136: ifle 14e
      // 139: aload 10
      // 13b: ldc "0"
      // 13d: aload 0
      // 13e: getfield sixtwo/bR.gCSoD I
      // 141: invokevirtual java/lang/String.repeat (I)Ljava/lang/String;
      // 144: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 147: goto 150
      // 14a: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14d: athrow
      // 14e: fload 17
      // 150: fstore 18
      // 152: fload 14
      // 154: fload 15
      // 156: fadd
      // 157: fload 18
      // 159: fadd
      // 15a: fstore 19
      // 15c: ldc 3.5
      // 15e: fstore 20
      // 160: fload 7
      // 162: ldc 16.0
      // 164: fsub
      // 165: fload 12
      // 167: fadd
      // 168: fstore 21
      // 16a: fload 8
      // 16c: ldc 3.5
      // 16e: fadd
      // 16f: fstore 22
      // 171: fconst_2
      // 172: fload 20
      // 174: fmul
      // 175: fload 19
      // 177: fadd
      // 178: fstore 23
      // 17a: ldc 8.0
      // 17c: fstore 24
      // 17e: aload 0
      // 17f: getfield sixtwo/bR.fGWTH Lsixtwo/bT;
      // 182: fload 23
      // 184: ldc 8.0
      // 186: fadd
      // 187: fload 13
      // 189: fadd
      // 18a: ldc 5.0
      // 18c: fadd
      // 18d: ldc 15.0
      // 18f: invokevirtual sixtwo/bT.NU (FF)V
      // 192: aload 1
      // 193: fload 21
      // 195: fload 22
      // 197: fload 23
      // 199: fload 24
      // 19b: ldc 3.0
      // 19d: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 1a0: aload 0
      // 1a1: getfield sixtwo/bR.Bewjf Lsixtwo/mG;
      // 1a4: fload 11
      // 1a6: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 1a9: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 1ac: fload 8
      // 1ae: ldc 5.5
      // 1b0: fadd
      // 1b1: fstore 25
      // 1b3: fload 14
      // 1b5: fload 17
      // 1b7: fadd
      // 1b8: fload 15
      // 1ba: fadd
      // 1bb: fstore 26
      // 1bd: fload 21
      // 1bf: fload 23
      // 1c1: fload 26
      // 1c3: fsub
      // 1c4: ldc 0.5
      // 1c6: fmul
      // 1c7: fadd
      // 1c8: fstore 27
      // 1ca: fload 27
      // 1cc: fstore 28
      // 1ce: aload 1
      // 1cf: aload 10
      // 1d1: aload 0
      // 1d2: getfield sixtwo/bR.tMmUB Ljava/lang/String;
      // 1d5: fload 28
      // 1d7: fload 25
      // 1d9: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 1dc: fload 11
      // 1de: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 1e1: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 1e4: fload 28
      // 1e6: fload 14
      // 1e8: fadd
      // 1e9: fstore 29
      // 1eb: aload 0
      // 1ec: iload 5
      // 1ee: ifeq 212
      // 1f1: getfield sixtwo/bR.sxniw Z
      // 1f4: ifeq 21e
      // 1f7: goto 1fe
      // 1fa: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1fd: athrow
      // 1fe: aload 0
      // 1ff: getfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 202: fload 29
      // 204: fload 25
      // 206: invokevirtual sixtwo/Z.sW (FF)Lsixtwo/az;
      // 209: pop
      // 20a: aload 0
      // 20b: goto 212
      // 20e: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 211: athrow
      // 212: getfield sixtwo/bR.QbCNz Lsixtwo/Z;
      // 215: aload 1
      // 216: invokevirtual sixtwo/Z.su (Lsixtwo/lC;)V
      // 219: iload 5
      // 21b: ifne 239
      // 21e: aload 1
      // 21f: aload 10
      // 221: aload 16
      // 223: fload 29
      // 225: fload 25
      // 227: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 22a: fload 11
      // 22c: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 22f: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 232: goto 239
      // 235: invokestatic sixtwo/bR.NM (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 238: athrow
      // 239: fload 29
      // 23b: fload 17
      // 23d: fadd
      // 23e: fstore 30
      // 240: aload 1
      // 241: aload 10
      // 243: aload 0
      // 244: getfield sixtwo/bR.MtpnS Ljava/lang/String;
      // 247: fload 30
      // 249: fload 25
      // 24b: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 24e: fload 11
      // 250: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 253: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 256: aload 2
      // 257: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 25a: ldc 255.0
      // 25c: aload 0
      // 25d: getfield sixtwo/bR.dExGi Lsixtwo/rk;
      // 260: invokevirtual sixtwo/rk.dhj ()F
      // 263: fmul
      // 264: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 267: astore 31
      // 269: fload 7
      // 26b: ldc 25.0
      // 26d: fadd
      // 26e: ldc 10.0
      // 270: aload 0
      // 271: getfield sixtwo/bR.dExGi Lsixtwo/rk;
      // 274: invokevirtual sixtwo/rk.dhj ()F
      // 277: fmul
      // 278: fsub
      // 279: fload 19
      // 27b: fadd
      // 27c: fstore 32
      // 27e: aload 1
      // 27f: aload 9
      // 281: aload 0
      // 282: getfield sixtwo/bR.soyDT [I
      // 285: fload 32
      // 287: fload 8
      // 289: ldc 5.0
      // 28b: fadd
      // 28c: aload 31
      // 28e: invokevirtual sixtwo/lC.ceA (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 291: return
   }

   public void NL(String var1, String var2, int var3, int[] var4, mG var5, boolean var6, int var7) {
      this.tMmUB = var1;
      this.MtpnS = var2;
      this.FaxAk = var3;
      this.soyDT = var4;
      this.Bewjf = var5;
      this.sxniw = var6;
      this.gCSoD = var7;
   }

   public void NK(String var1, int var2, int[] var3, mG var4, boolean var5) {
      this.NL("", var1, var2, var3, var4, var5, this.gCSoD);
   }

   private static MatchException NM(MatchException var0) {
      return var0;
   }

   public void NJ(String var1, int var2, int[] var3, mG var4, boolean var5, int var6) {
      this.NL("", var1, var2, var3, var4, var5, var6);
   }
}
