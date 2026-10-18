package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class Y extends az {
   private lq OawPZ;
   private mG jMzEc;
   private float MEMoC;
   private int NSsRm;
   private rj FWYUc;
   private rk BzHpb;
   private int[] iLekN;
   private int[] TdnAc;
   private boolean AraoH;
   private boolean Eesjh;
   private float vAPzH;
   private float BRUln;
   private float fLmaN;
   private static final long cpTwv = gb.aYR(4271288058253778518L, -3304817961004227428L, MethodHandles.lookup().lookupClass()).a(36615433833147L);
   private static final long jYVjA;

   public Y kf(lq var1) {
      this.OawPZ = var1;
      return this;
   }

   public Y() {
      long var1 = cpTwv ^ 126051640874858L;
      super();
      this.OawPZ = lE.joxgd.bYM(7.0F);
      this.jMzEc = mG.hoGuU;
      this.MEMoC = 5.0F;
      this.NSsRm = (int)jYVjA;
      this.FWYUc = rj.UPXqT;
      this.iLekN = new int[0];
      this.TdnAc = new int[0];
      this.vAPzH = 0.8F;
      this.BRUln = 1.0F;
      this.fLmaN = Float.MAX_VALUE;
      this.ke();
   }

   static {
      long var0 = cpTwv ^ 74999747500611L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 4530242266499119944L;
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
      jYVjA = var7;
   }

   public Y ks(float var1) {
      this.fLmaN = var1;
      return this;
   }

   public Y km() {
      this.AraoH = true;
      return this;
   }

   public Y ko(mG var1) {
      this.jMzEc = var1;
      return this;
   }

   @Override
   public void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/Y.cpTwv J
      // 003: ldc2_w 48818397375290
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/Z.kU ()[I
      // 00b: aload 0
      // 00c: getfield sixtwo/Y.BzHpb Lsixtwo/rk;
      // 00f: fconst_1
      // 010: invokevirtual sixtwo/rk.dhd (F)F
      // 013: pop
      // 014: astore 4
      // 016: aload 0
      // 017: getfield sixtwo/Y.MCnYt F
      // 01a: aload 0
      // 01b: aload 4
      // 01d: ifnull 035
      // 020: getfield sixtwo/Y.AraoH Z
      // 023: ifeq 044
      // 026: goto 02d
      // 029: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: aload 0
      // 02e: goto 035
      // 031: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 034: athrow
      // 035: getfield sixtwo/Y.OawPZ Lsixtwo/lq;
      // 038: aload 0
      // 039: getfield sixtwo/Y.iLekN [I
      // 03c: invokevirtual sixtwo/lq.cap ([I)F
      // 03f: fconst_2
      // 040: fdiv
      // 041: goto 045
      // 044: fconst_0
      // 045: fsub
      // 046: fstore 5
      // 048: aload 0
      // 049: getfield sixtwo/Y.MCnYt F
      // 04c: aload 0
      // 04d: aload 4
      // 04f: ifnull 067
      // 052: getfield sixtwo/Y.AraoH Z
      // 055: ifeq 076
      // 058: goto 05f
      // 05b: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: aload 0
      // 060: goto 067
      // 063: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 066: athrow
      // 067: getfield sixtwo/Y.OawPZ Lsixtwo/lq;
      // 06a: aload 0
      // 06b: getfield sixtwo/Y.TdnAc [I
      // 06e: invokevirtual sixtwo/lq.cap ([I)F
      // 071: fconst_2
      // 072: fdiv
      // 073: goto 077
      // 076: fconst_0
      // 077: fsub
      // 078: fstore 6
      // 07a: aload 0
      // 07b: aload 4
      // 07d: ifnull 0c2
      // 080: getfield sixtwo/Y.iLekN [I
      // 083: arraylength
      // 084: ifeq 0c1
      // 087: goto 08e
      // 08a: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08d: athrow
      // 08e: aload 0
      // 08f: aload 1
      // 090: aload 0
      // 091: getfield sixtwo/Y.iLekN [I
      // 094: fload 5
      // 096: aload 0
      // 097: getfield sixtwo/Y.pNyTQ F
      // 09a: aload 0
      // 09b: getfield sixtwo/Y.MEMoC F
      // 09e: aload 0
      // 09f: getfield sixtwo/Y.BzHpb Lsixtwo/rk;
      // 0a2: invokevirtual sixtwo/rk.dhj ()F
      // 0a5: fmul
      // 0a6: fadd
      // 0a7: aload 0
      // 0a8: getfield sixtwo/Y.jMzEc Lsixtwo/mG;
      // 0ab: fconst_1
      // 0ac: aload 0
      // 0ad: getfield sixtwo/Y.BzHpb Lsixtwo/rk;
      // 0b0: invokevirtual sixtwo/rk.dhj ()F
      // 0b3: fsub
      // 0b4: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0b7: invokevirtual sixtwo/Y.kl (Lsixtwo/lC;[IFFLsixtwo/mG;)V
      // 0ba: goto 0c1
      // 0bd: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: aload 0
      // 0c2: aload 1
      // 0c3: aload 0
      // 0c4: getfield sixtwo/Y.TdnAc [I
      // 0c7: fload 6
      // 0c9: aload 0
      // 0ca: getfield sixtwo/Y.pNyTQ F
      // 0cd: aload 0
      // 0ce: getfield sixtwo/Y.MEMoC F
      // 0d1: fsub
      // 0d2: aload 0
      // 0d3: getfield sixtwo/Y.MEMoC F
      // 0d6: aload 0
      // 0d7: getfield sixtwo/Y.BzHpb Lsixtwo/rk;
      // 0da: invokevirtual sixtwo/rk.dhj ()F
      // 0dd: fmul
      // 0de: fadd
      // 0df: aload 0
      // 0e0: getfield sixtwo/Y.jMzEc Lsixtwo/mG;
      // 0e3: aload 0
      // 0e4: getfield sixtwo/Y.BzHpb Lsixtwo/rk;
      // 0e7: invokevirtual sixtwo/rk.dhj ()F
      // 0ea: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0ed: invokevirtual sixtwo/Y.kl (Lsixtwo/lC;[IFFLsixtwo/mG;)V
      // 0f0: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 0f3: ifnonnull 103
      // 0f6: bipush 2
      // 0f7: newarray 10
      // 0f9: invokestatic sixtwo/Z.kT ([I)V
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: return
   }

   public Y ki(float var1) {
      this.MEMoC = var1;
      return this;
   }

   private void ke() {
      this.BzHpb = new rk(this.NSsRm).dhs(this.FWYUc);
   }

   public lq kv() {
      return this.OawPZ;
   }

   public Y kr() {
      this.Eesjh = false;
      return this;
   }

   public Y kp(float var1, float var2) {
      this.Eesjh = true;
      this.vAPzH = var1;
      this.BRUln = var2;
      return this;
   }

   public Y kg(int[] var1) {
      this.TdnAc = var1;
      return this;
   }

   public Y kk(rj var1) {
      this.FWYUc = var1;
      this.ke();
      return this;
   }

   public void kt(String var1) {
      this.ku(mZ.csh(var1));
   }

   public Y kn() {
      this.AraoH = false;
      return this;
   }

   public int ky() {
      return this.NSsRm;
   }

   public void ku(int[] param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/Y.cpTwv J
      // 03: ldc2_w 54734950949509
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/Z.kU ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnull 37
      // 13: getfield sixtwo/Y.TdnAc [I
      // 16: aload 1
      // 17: invokestatic java/util/Arrays.equals ([I[I)Z
      // 1a: ifeq 29
      // 1d: goto 24
      // 20: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: return
      // 25: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 0
      // 2a: aload 0
      // 2b: getfield sixtwo/Y.TdnAc [I
      // 2e: putfield sixtwo/Y.iLekN [I
      // 31: aload 0
      // 32: aload 1
      // 33: putfield sixtwo/Y.TdnAc [I
      // 36: aload 0
      // 37: getfield sixtwo/Y.BzHpb Lsixtwo/rk;
      // 3a: invokevirtual sixtwo/rk.dhg ()V
      // 3d: return
   }

   public Y kq(float var1, float var2, float var3) {
      return this.kp(var1, var2).ks(var3);
   }

   public Y kh(String var1) {
      this.TdnAc = mZ.csh(var1);
      return this;
   }

   private static MatchException kH(MatchException var0) {
      return var0;
   }

   public int[] kB() {
      return this.iLekN;
   }

   public int[] kC() {
      return this.TdnAc;
   }

   public rk kA() {
      return this.BzHpb;
   }

   public mG kw() {
      return this.jMzEc;
   }

   public float kx() {
      return this.MEMoC;
   }

   public float kG() {
      return this.fLmaN;
   }

   public float kE() {
      return this.vAPzH;
   }

   public rj kz() {
      return this.FWYUc;
   }

   private void kl(lC param1, int[] param2, float param3, float param4, mG param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/Y.cpTwv J
      // 03: ldc2_w 140561091737829
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/Z.kU ()[I
      // 0c: astore 8
      // 0e: aload 8
      // 10: ifnull 4e
      // 13: aload 0
      // 14: getfield sixtwo/Y.Eesjh Z
      // 17: ifeq 40
      // 1a: goto 21
      // 1d: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 1
      // 22: aload 0
      // 23: getfield sixtwo/Y.OawPZ Lsixtwo/lq;
      // 26: aload 2
      // 27: fload 3
      // 28: fload 4
      // 2a: aload 5
      // 2c: aload 0
      // 2d: getfield sixtwo/Y.vAPzH F
      // 30: aload 0
      // 31: getfield sixtwo/Y.BRUln F
      // 34: aload 0
      // 35: getfield sixtwo/Y.fLmaN F
      // 38: invokevirtual sixtwo/lC.ceI (Lsixtwo/lq;[IFFLsixtwo/mG;FFF)V
      // 3b: return
      // 3c: invokestatic sixtwo/Y.kH (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: aload 1
      // 41: aload 0
      // 42: getfield sixtwo/Y.OawPZ Lsixtwo/lq;
      // 45: aload 2
      // 46: fload 3
      // 47: fload 4
      // 49: aload 5
      // 4b: invokevirtual sixtwo/lC.ceA (Lsixtwo/lq;[IFFLsixtwo/mG;)V
      // 4e: return
   }

   public boolean kD() {
      return this.Eesjh;
   }

   public float kF() {
      return this.BRUln;
   }

   public Y kj(int var1) {
      this.NSsRm = var1;
      this.ke();
      return this;
   }
}
