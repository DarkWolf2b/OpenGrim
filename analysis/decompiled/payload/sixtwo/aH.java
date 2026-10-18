package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class aH extends az {
   private aJ EUggH;
   private aI mLpVD;
   private aG VQXjm;
   private ly KGwHJ;
   private rk fvYpk;
   private boolean WZTtS;
   private static final long VPJAH = gb.aYR(-3229573293973007931L, -8764105840300668402L, MethodHandles.lookup().lookupClass()).a(102772226970044L);
   private static final long YuHPh;

   public aH(aJ var1, aI var2) {
      long var3 = VPJAH ^ 113297370628805L;
      super();
      this.fvYpk = new rk((int)YuHPh).dhs(rj.XzDkv);
      this.EUggH = var1;
      this.mLpVD = var2;
      this.KGwHJ = new ly(var2.vY());
   }

   static {
      long var0 = VPJAH ^ 49871576303756L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 585617301487581928L;
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
      YuHPh = var7;
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
      // 00: getstatic sixtwo/aH.VPJAH J
      // 03: ldc2_w 64202586731879
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/aJ.wv ()[Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 0
      // 0f: dload 1
      // 10: dload 3
      // 11: aload 0
      // 12: getfield sixtwo/aH.EUggH Lsixtwo/aJ;
      // 15: invokevirtual sixtwo/aJ.tr ()F
      // 18: aload 0
      // 19: getfield sixtwo/aH.MCnYt F
      // 1c: fadd
      // 1d: f2d
      // 1e: aload 0
      // 1f: getfield sixtwo/aH.EUggH Lsixtwo/aJ;
      // 22: invokevirtual sixtwo/aJ.ts ()F
      // 25: aload 0
      // 26: getfield sixtwo/aH.pNyTQ F
      // 29: fadd
      // 2a: f2d
      // 2b: aload 0
      // 2c: getfield sixtwo/aH.BcpIo F
      // 2f: f2d
      // 30: aload 0
      // 31: getfield sixtwo/aH.WjISQ F
      // 34: f2d
      // 35: invokevirtual sixtwo/aH.th (DDDDDD)Z
      // 38: aload 8
      // 3a: ifnonnull dc
      // 3d: ifeq d4
      // 40: goto 47
      // 43: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 4a: invokevirtual sixtwo/bl.EB ()Lsixtwo/aJ;
      // 4d: astore 9
      // 4f: aload 9
      // 51: invokevirtual sixtwo/aJ.wq ()Lsixtwo/aH;
      // 54: aload 8
      // 56: ifnonnull af
      // 59: aload 0
      // 5a: if_acmpeq ae
      // 5d: goto 64
      // 60: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: aload 0
      // 65: getfield sixtwo/aH.VQXjm Lsixtwo/aG;
      // 68: aload 8
      // 6a: ifnonnull a1
      // 6d: goto 74
      // 70: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: ifnonnull 90
      // 77: goto 7e
      // 7a: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: aload 9
      // 80: aload 0
      // 81: invokevirtual sixtwo/aJ.wf (Lsixtwo/aH;)V
      // 84: aload 8
      // 86: ifnull a7
      // 89: goto 90
      // 8c: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8f: athrow
      // 90: aload 9
      // 92: aload 0
      // 93: invokevirtual sixtwo/aJ.wg (Lsixtwo/aH;)V
      // 96: aload 0
      // 97: getfield sixtwo/aH.VQXjm Lsixtwo/aG;
      // 9a: goto a1
      // 9d: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a0: athrow
      // a1: aload 0
      // a2: invokeinterface sixtwo/aG.run (Lsixtwo/aH;)V 2
      // a7: aload 0
      // a8: getfield sixtwo/aH.KGwHJ Lsixtwo/ly;
      // ab: invokevirtual sixtwo/ly.ccz ()V
      // ae: aload 0
      // af: getfield sixtwo/aH.KGwHJ Lsixtwo/ly;
      // b2: invokevirtual sixtwo/ly.ccp ()Z
      // b5: aload 8
      // b7: ifnonnull d3
      // ba: ifeq d2
      // bd: goto c4
      // c0: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: aload 0
      // c5: getfield sixtwo/aH.KGwHJ Lsixtwo/ly;
      // c8: invokevirtual sixtwo/ly.cco ()V
      // cb: goto d2
      // ce: invokestatic sixtwo/aH.vX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d1: athrow
      // d2: bipush 1
      // d3: ireturn
      // d4: aload 0
      // d5: dload 1
      // d6: dload 3
      // d7: aload 5
      // d9: invokespecial sixtwo/az.dk (DDLsixtwo/mA;)Z
      // dc: ireturn
   }

   @Override
   protected void bV(lC var1) {
      long var2 = VPJAH ^ 114287415255459L;
      lq var4 = lE.WTzbi.bYM(7.0F);

      boolean var10000;
      label17: {
         try {
            if (bl.Ex().EB().wq() == this) {
               var10000 = true;
               break label17;
            }
         } catch (MatchException var13) {
            throw vX(var13);
         }

         var10000 = false;
      }

      boolean var5 = var10000;
      this.fvYpk.dhc(var5);
      float var6 = Math.min(1.0F, bl.Ex().sj().dhj());
      mG var7 = this.CtPwV.bjf().coa(255.0F * this.fvYpk.dhj()).cob(var6);
      mG var8 = this.CtPwV.bjb().coa(255.0F * var6);
      var1.cdm(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, 10.0F, ld.all(4.0F), var7);
      float var9 = this.MCnYt + 5.0F;
      float var10 = this.pNyTQ + jf.bAH(this.KGwHJ.dn(), this.WjISQ);
      this.KGwHJ.sW(var9, var10);
      this.KGwHJ.su(var1);
      float var11 = this.KGwHJ.tc() + 5.0F;
      float var12 = this.KGwHJ.ts() + jf.bAH(var4.cat(), this.KGwHJ.dn());
      var1.cez(var4, jf.bAL(this.mLpVD.name()), var11, var12, var8);
   }

   public aH vU(ly var1) {
      this.KGwHJ = var1;
      return this;
   }

   public aG vN() {
      return this.VQXjm;
   }

   public aH vV(rk var1) {
      this.fvYpk = var1;
      return this;
   }

   public aH vT(aG var1) {
      this.VQXjm = var1;
      return this;
   }

   public aI vM() {
      return this.mLpVD;
   }

   public rk vP() {
      return this.fvYpk;
   }

   public aH vW(boolean var1) {
      this.WZTtS = var1;
      return this;
   }

   private static MatchException vX(MatchException var0) {
      return var0;
   }

   public ly vO() {
      return this.KGwHJ;
   }

   public aJ vL() {
      return this.EUggH;
   }

   public boolean vQ() {
      return this.WZTtS;
   }

   public aH vR(aJ var1) {
      this.EUggH = var1;
      return this;
   }

   public aH vS(aI var1) {
      this.mLpVD = var1;
      return this;
   }
}
