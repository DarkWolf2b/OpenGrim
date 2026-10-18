/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aG;
import sixtwo.aI;
import sixtwo.aJ;
import sixtwo.az;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.ly;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

public class aH
extends az {
    private aJ EUggH;
    private aI mLpVD;
    private aG VQXjm;
    private ly KGwHJ;
    private rk fvYpk;
    private boolean WZTtS;
    private static final long VPJAH = gb.aYR(-3229573293973007931L, -8764105840300668402L, MethodHandles.lookup().lookupClass()).a(102772226970044L);
    private static final long YuHPh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aH(aJ aJ2, aI aI2) {
        long l2 = VPJAH ^ 0x670B1987C2C5L;
        this.fvYpk = new rk((int)YuHPh).dhs(rj.XzDkv);
        this.EUggH = aJ2;
        this.mLpVD = aI2;
        this.KGwHJ = new ly(aI2.vY());
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = VPJAH ^ 0x2D5BA197088CL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 585617301487581928L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                YuHPh = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    @Override
    public boolean dk(double d2, double d3, mA mA2) {
        boolean bl2;
        block16: {
            block17: {
                boolean bl3;
                block23: {
                    block24: {
                        aH aH2;
                        String[] stringArray;
                        block18: {
                            block19: {
                                block22: {
                                    aG aG2;
                                    block20: {
                                        long l2 = VPJAH ^ 0x3A6454603567L;
                                        stringArray = aJ.wv();
                                        try {
                                            bl2 = this.th(d2, d3, this.EUggH.tr() + this.MCnYt, this.EUggH.ts() + this.pNyTQ, this.BcpIo, this.WjISQ);
                                            if (stringArray != null) break block16;
                                            if (!bl2) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw aH.vX(matchException);
                                        }
                                        aJ aJ2 = bl.Ex().EB();
                                        try {
                                            block21: {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                aH2 = aJ2.wq();
                                                                if (stringArray != null) break block18;
                                                                if (aH2 == this) break block19;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw aH.vX(matchException);
                                                            }
                                                            aG2 = this.VQXjm;
                                                            if (stringArray != null) break block20;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw aH.vX(matchException);
                                                        }
                                                        if (aG2 != null) break block21;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw aH.vX(matchException);
                                                    }
                                                    aJ2.wf(this);
                                                    if (stringArray == null) break block22;
                                                }
                                                catch (MatchException matchException) {
                                                    throw aH.vX(matchException);
                                                }
                                            }
                                            aJ2.wg(this);
                                            aG2 = this.VQXjm;
                                        }
                                        catch (MatchException matchException) {
                                            throw aH.vX(matchException);
                                        }
                                    }
                                    aG2.run(this);
                                }
                                this.KGwHJ.ccz();
                            }
                            aH2 = this;
                        }
                        try {
                            try {
                                bl3 = aH2.KGwHJ.ccp();
                                if (stringArray != null) break block23;
                                if (!bl3) break block24;
                            }
                            catch (MatchException matchException) {
                                throw aH.vX(matchException);
                            }
                            this.KGwHJ.cco();
                        }
                        catch (MatchException matchException) {
                            throw aH.vX(matchException);
                        }
                    }
                    bl3 = true;
                }
                return bl3;
            }
            bl2 = super.dk(d2, d3, mA2);
        }
        return bl2;
    }

    @Override
    protected void bV(lC lC2) {
        boolean bl2;
        long l2 = VPJAH ^ 0x67F19CC9E1A3L;
        lq lq2 = lE.WTzbi.bYM(7.0f);
        try {
            bl2 = bl.Ex().EB().wq() == this;
        }
        catch (MatchException matchException) {
            throw aH.vX(matchException);
        }
        boolean bl3 = bl2;
        this.fvYpk.dhc(bl3);
        float f2 = Math.min(1.0f, bl.Ex().sj().dhj());
        mG mG2 = this.CtPwV.bjf().coa(255.0f * this.fvYpk.dhj()).cob(f2);
        mG mG3 = this.CtPwV.bjb().coa(255.0f * f2);
        lC2.cdm(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, 10.0f, ld.all(4.0f), mG2);
        float f3 = this.MCnYt + 5.0f;
        float f4 = this.pNyTQ + jf.bAH(this.KGwHJ.dn(), this.WjISQ);
        this.KGwHJ.sW(f3, f4);
        this.KGwHJ.su(lC2);
        float f5 = this.KGwHJ.tc() + 5.0f;
        float f6 = this.KGwHJ.ts() + jf.bAH(lq2.cat(), this.KGwHJ.dn());
        lC2.cez(lq2, jf.bAL(this.mLpVD.name()), f5, f6, mG3);
    }

    public aH vU(ly ly2) {
        this.KGwHJ = ly2;
        return this;
    }

    public aG vN() {
        return this.VQXjm;
    }

    public aH vV(rk rk2) {
        this.fvYpk = rk2;
        return this;
    }

    public aH vT(aG aG2) {
        this.VQXjm = aG2;
        return this;
    }

    public aI vM() {
        return this.mLpVD;
    }

    public rk vP() {
        return this.fvYpk;
    }

    public aH vW(boolean bl2) {
        this.WZTtS = bl2;
        return this;
    }

    private static MatchException vX(MatchException matchException) {
        return matchException;
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

    public aH vR(aJ aJ2) {
        this.EUggH = aJ2;
        return this;
    }

    public aH vS(aI aI2) {
        this.mLpVD = aI2;
        return this;
    }
}

