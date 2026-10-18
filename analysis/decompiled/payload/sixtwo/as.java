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

public class as extends az {
   private lf IMYwx;
   private float roFDy;
   private String eUwLB;
   private lq Dbxwi;
   private ld hXIIw;
   private mG bqrOL;
   private mG ZNkPs;
   private mG zaHDb;
   private mG RUvmV;
   private mG SVUiL;
   private mG TgwOQ;
   private boolean OcHac;
   private final ri PDMmP;
   private final ri nWGSH;
   private final ri tTyYq;
   private static final long vmyiF = gb.aYR(-2646341689623667932L, -9019365439646895507L, MethodHandles.lookup().lookupClass()).a(233193405348572L);
   private static final long[] rxBGn;
   private static final Integer[] HTRFc;
   private static final Map sYRBY = new HashMap(13);

   public as() {
      long var1 = vmyiF ^ 95973750031686L;
      super();
      this.hXIIw = ld.all(2.0F);
      this.bqrOL = mG.hoGuU;
      this.ZNkPs = mG.hoGuU;
      this.zaHDb = mG.hoGuU;
      this.RUvmV = null;
      this.SVUiL = null;
      this.TgwOQ = null;
      this.OcHac = false;
      this.PDMmP = new ri(rT<"w">(1907, 7184047519691165733L ^ var1));
      this.nWGSH = new ri(rT<"w">(22994, 7540639015538953861L ^ var1));
      this.tTyYq = new ri(rT<"w">(22994, 7540639015538953861L ^ var1));
   }

   static {
      long var0 = vmyiF ^ 61063692878959L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "ì][M\u0017É¥azÑmyæ ¹\u0003";
      int var7 = "ì][M\u0017É¥azÑmyæ ¹\u0003".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
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
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      rxBGn = var8;
      HTRFc = new Integer[2];
   }

   @Override
   public float dn() {
      this.rp();
      return this.WjISQ;
   }

   public mG rv() {
      return this.bqrOL;
   }

   public String rs() {
      return this.eUwLB;
   }

   private void rp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/as.vmyiF J
      // 03: ldc2_w 102748456605598
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: ldc 10.0
      // 0d: fstore 4
      // 0f: astore 3
      // 10: aload 0
      // 11: getfield sixtwo/as.eUwLB Ljava/lang/String;
      // 14: aload 3
      // 15: ifnull 38
      // 18: ifnull 54
      // 1b: goto 22
      // 1e: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: aload 3
      // 24: ifnull 46
      // 27: goto 2e
      // 2a: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: getfield sixtwo/as.eUwLB Ljava/lang/String;
      // 31: goto 38
      // 34: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: invokevirtual java/lang/String.isBlank ()Z
      // 3b: ifne 54
      // 3e: aload 0
      // 3f: goto 46
      // 42: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: getfield sixtwo/as.Dbxwi Lsixtwo/lq;
      // 49: ifnull 54
      // 4c: bipush 1
      // 4d: goto 55
      // 50: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: bipush 0
      // 55: istore 5
      // 57: aload 3
      // 58: ifnull 82
      // 5b: aload 0
      // 5c: getfield sixtwo/as.IMYwx Lsixtwo/lf;
      // 5f: ifnull 99
      // 62: goto 69
      // 65: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: fload 4
      // 6b: getstatic sixtwo/lE.WxpHL Lsixtwo/lj;
      // 6e: aload 0
      // 6f: getfield sixtwo/as.roFDy F
      // 72: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 75: aload 0
      // 76: getfield sixtwo/as.IMYwx Lsixtwo/lf;
      // 79: invokevirtual sixtwo/lf.bXR ()C
      // 7c: invokevirtual sixtwo/lq.caq (I)F
      // 7f: fadd
      // 80: fstore 4
      // 82: iload 5
      // 84: aload 3
      // 85: ifnull 9b
      // 88: ifeq 99
      // 8b: goto 92
      // 8e: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: fload 4
      // 94: ldc 3.0
      // 96: fadd
      // 97: fstore 4
      // 99: iload 5
      // 9b: ifeq ae
      // 9e: fload 4
      // a0: aload 0
      // a1: getfield sixtwo/as.Dbxwi Lsixtwo/lq;
      // a4: aload 0
      // a5: getfield sixtwo/as.eUwLB Ljava/lang/String;
      // a8: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // ab: fadd
      // ac: fstore 4
      // ae: aload 0
      // af: fload 4
      // b1: putfield sixtwo/as.BcpIo F
      // b4: return
   }

   public ld ru() {
      return this.hXIIw;
   }

   public mG rw() {
      return this.ZNkPs;
   }

   public lq rt() {
      return this.Dbxwi;
   }

   public mG rx() {
      return this.zaHDb;
   }

   public as ro(lq var1) {
      this.Dbxwi = var1;
      this.rp();
      return this;
   }

   public lf rq() {
      return this.IMYwx;
   }

   public float rr() {
      return this.roFDy;
   }

   public mG ry() {
      return this.RUvmV;
   }

   public mG rz() {
      return this.SVUiL;
   }

   public ri rD() {
      return this.nWGSH;
   }

   private static int rR(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 23040;
      if (HTRFc[var3] == null) {
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
         long var5 = rxBGn[var3];
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
         Object[] var9 = (Object[])sYRBY.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               sYRBY.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/as", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         HTRFc[var3] = var15;
      }

      return HTRFc[var3];
   }

   public as rI(ld var1) {
      this.hXIIw = var1;
      return this;
   }

   public boolean rB() {
      return this.OcHac;
   }

   public ri rC() {
      return this.PDMmP;
   }

   public as rK(mG var1) {
      this.ZNkPs = var1;
      return this;
   }

   public as rM(mG var1) {
      this.RUvmV = var1;
      return this;
   }

   public ri rE() {
      return this.tTyYq;
   }

   private static CallSite rT(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("rS".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/as" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public as rN(mG var1) {
      this.SVUiL = var1;
      return this;
   }

   public as rP(boolean var1) {
      this.OcHac = var1;
      return this;
   }

   private static int rS(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = rR(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException rQ(MatchException var0) {
      return var0;
   }

   public mG rA() {
      return this.TgwOQ;
   }

   public as rJ(mG var1) {
      this.bqrOL = var1;
      return this;
   }

   public as rL(mG var1) {
      this.zaHDb = var1;
      return this;
   }

   public as rO(mG var1) {
      this.TgwOQ = var1;
      return this;
   }

   @Override
   public float kN() {
      this.rp();
      return this.BcpIo;
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
      // 000: getstatic sixtwo/as.vmyiF J
      // 003: ldc2_w 121342260116013
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 00b: aload 0
      // 00c: invokevirtual sixtwo/as.rp ()V
      // 00f: aload 0
      // 010: aload 1
      // 011: invokevirtual sixtwo/as.ti (Lsixtwo/lC;)Z
      // 014: istore 5
      // 016: astore 4
      // 018: aload 0
      // 019: getfield sixtwo/as.RUvmV Lsixtwo/mG;
      // 01c: aload 4
      // 01e: ifnull 058
      // 021: ifnull 04d
      // 024: goto 02b
      // 027: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02a: athrow
      // 02b: iload 5
      // 02d: ifeq 042
      // 030: goto 037
      // 033: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: aload 0
      // 038: getfield sixtwo/as.RUvmV Lsixtwo/mG;
      // 03b: goto 046
      // 03e: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 041: athrow
      // 042: aload 0
      // 043: getfield sixtwo/as.bqrOL Lsixtwo/mG;
      // 046: astore 6
      // 048: aload 4
      // 04a: ifnonnull 05a
      // 04d: aload 0
      // 04e: getfield sixtwo/as.bqrOL Lsixtwo/mG;
      // 051: goto 058
      // 054: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: astore 6
      // 05a: aload 0
      // 05b: getfield sixtwo/as.SVUiL Lsixtwo/mG;
      // 05e: aload 4
      // 060: ifnull 09a
      // 063: ifnull 08f
      // 066: goto 06d
      // 069: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: iload 5
      // 06f: ifeq 084
      // 072: goto 079
      // 075: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 0
      // 07a: getfield sixtwo/as.SVUiL Lsixtwo/mG;
      // 07d: goto 088
      // 080: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 083: athrow
      // 084: aload 0
      // 085: getfield sixtwo/as.ZNkPs Lsixtwo/mG;
      // 088: astore 7
      // 08a: aload 4
      // 08c: ifnonnull 09c
      // 08f: aload 0
      // 090: getfield sixtwo/as.ZNkPs Lsixtwo/mG;
      // 093: goto 09a
      // 096: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: astore 7
      // 09c: aload 0
      // 09d: getfield sixtwo/as.TgwOQ Lsixtwo/mG;
      // 0a0: aload 4
      // 0a2: ifnull 0dc
      // 0a5: ifnull 0d1
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: iload 5
      // 0b1: ifeq 0c6
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: aload 0
      // 0bc: getfield sixtwo/as.TgwOQ Lsixtwo/mG;
      // 0bf: goto 0ca
      // 0c2: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: aload 0
      // 0c7: getfield sixtwo/as.zaHDb Lsixtwo/mG;
      // 0ca: astore 8
      // 0cc: aload 4
      // 0ce: ifnonnull 0de
      // 0d1: aload 0
      // 0d2: getfield sixtwo/as.zaHDb Lsixtwo/mG;
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: astore 8
      // 0de: aload 0
      // 0df: getfield sixtwo/as.PDMmP Lsixtwo/ri;
      // 0e2: aload 6
      // 0e4: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 0e7: pop
      // 0e8: aload 0
      // 0e9: getfield sixtwo/as.nWGSH Lsixtwo/ri;
      // 0ec: aload 7
      // 0ee: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 0f1: pop
      // 0f2: aload 0
      // 0f3: getfield sixtwo/as.tTyYq Lsixtwo/ri;
      // 0f6: aload 8
      // 0f8: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 0fb: pop
      // 0fc: aload 1
      // 0fd: aload 0
      // 0fe: getfield sixtwo/as.MCnYt F
      // 101: aload 0
      // 102: getfield sixtwo/as.pNyTQ F
      // 105: aload 0
      // 106: getfield sixtwo/as.BcpIo F
      // 109: aload 0
      // 10a: getfield sixtwo/as.WjISQ F
      // 10d: aload 0
      // 10e: getfield sixtwo/as.hXIIw Lsixtwo/ld;
      // 111: aload 0
      // 112: getfield sixtwo/as.tTyYq Lsixtwo/ri;
      // 115: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 118: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 11b: aload 0
      // 11c: getfield sixtwo/as.MCnYt F
      // 11f: ldc 5.0
      // 121: fadd
      // 122: fstore 9
      // 124: aload 0
      // 125: aload 4
      // 127: ifnull 176
      // 12a: getfield sixtwo/as.IMYwx Lsixtwo/lf;
      // 12d: ifnull 175
      // 130: goto 137
      // 133: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 136: athrow
      // 137: aload 0
      // 138: getfield sixtwo/as.MCnYt F
      // 13b: ldc 5.0
      // 13d: fadd
      // 13e: fstore 10
      // 140: aload 0
      // 141: getfield sixtwo/as.pNyTQ F
      // 144: aload 0
      // 145: getfield sixtwo/as.roFDy F
      // 148: aload 0
      // 149: getfield sixtwo/as.WjISQ F
      // 14c: invokestatic sixtwo/jf.bAH (FF)F
      // 14f: fadd
      // 150: fstore 11
      // 152: aload 1
      // 153: aload 0
      // 154: getfield sixtwo/as.IMYwx Lsixtwo/lf;
      // 157: fload 10
      // 159: fload 11
      // 15b: aload 0
      // 15c: getfield sixtwo/as.roFDy F
      // 15f: aload 0
      // 160: getfield sixtwo/as.PDMmP Lsixtwo/ri;
      // 163: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 166: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 169: fload 10
      // 16b: aload 0
      // 16c: getfield sixtwo/as.roFDy F
      // 16f: fadd
      // 170: ldc 3.0
      // 172: fadd
      // 173: fstore 9
      // 175: aload 0
      // 176: aload 4
      // 178: ifnull 190
      // 17b: getfield sixtwo/as.Dbxwi Lsixtwo/lq;
      // 17e: ifnull 1f2
      // 181: goto 188
      // 184: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 187: athrow
      // 188: aload 0
      // 189: goto 190
      // 18c: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18f: athrow
      // 190: getfield sixtwo/as.eUwLB Ljava/lang/String;
      // 193: aload 4
      // 195: ifnull 1b9
      // 198: ifnull 1f2
      // 19b: goto 1a2
      // 19e: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a1: athrow
      // 1a2: aload 0
      // 1a3: aload 4
      // 1a5: ifnull 1c7
      // 1a8: goto 1af
      // 1ab: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ae: athrow
      // 1af: getfield sixtwo/as.eUwLB Ljava/lang/String;
      // 1b2: goto 1b9
      // 1b5: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b8: athrow
      // 1b9: invokevirtual java/lang/String.isBlank ()Z
      // 1bc: ifne 1f2
      // 1bf: aload 0
      // 1c0: goto 1c7
      // 1c3: invokestatic sixtwo/as.rQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c6: athrow
      // 1c7: getfield sixtwo/as.pNyTQ F
      // 1ca: aload 0
      // 1cb: getfield sixtwo/as.Dbxwi Lsixtwo/lq;
      // 1ce: invokevirtual sixtwo/lq.cat ()F
      // 1d1: aload 0
      // 1d2: getfield sixtwo/as.WjISQ F
      // 1d5: invokestatic sixtwo/jf.bAH (FF)F
      // 1d8: fadd
      // 1d9: fstore 10
      // 1db: aload 1
      // 1dc: aload 0
      // 1dd: getfield sixtwo/as.Dbxwi Lsixtwo/lq;
      // 1e0: aload 0
      // 1e1: getfield sixtwo/as.eUwLB Ljava/lang/String;
      // 1e4: fload 9
      // 1e6: fload 10
      // 1e8: aload 0
      // 1e9: getfield sixtwo/as.nWGSH Lsixtwo/ri;
      // 1ec: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 1ef: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 1f2: return
   }

   public as rG(float var1) {
      this.roFDy = var1;
      return this;
   }

   public as rH(String var1) {
      this.eUwLB = var1;
      return this;
   }

   public as rF(lf var1) {
      this.IMYwx = var1;
      return this;
   }
}
