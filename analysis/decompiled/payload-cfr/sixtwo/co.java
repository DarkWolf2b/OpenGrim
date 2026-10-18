/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.cr;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.jG;
import sixtwo.jH;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.rD;

public abstract class co
extends cr {
    private static final long pzAXQ = gb.aYR(-3922662000648132649L, -4878582657813872057L, MethodHandles.lookup().lookupClass()).a(154218339454509L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public co(int[] nArray, lf lf2) {
        super(nArray, lf2);
    }

    @Override
    public void Ph(lC lC2) {
        float f;
        float f2;
        block12: {
            float f3;
            block10: {
                float f4;
                mG mG2;
                iS[] iSArray;
                block11: {
                    long l = pzAXQ ^ 0x3B656CA4AA40L;
                    iS[] iSArray2 = cr.SC();
                    this.LX(lC2);
                    iSArray = iSArray2;
                    float f5 = this.ormBS.dhj() * this.KgDVz.dhj();
                    try {
                        if (f5 == 0.0f) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw co.QW(matchException);
                    }
                    mG2 = mG.QHTxQ.cob(0.3f * this.gILqY.dhj());
                    jF.bHz(1.0f, 1.0f, 1.0f, Math.min(1.0f, f5));
                    float f6 = 0.5f + f5 * 0.5f - 0.05f * this.OsbYH.dhj();
                    f4 = this.RT();
                    try {
                        try {
                            jH.bId(lC2, this.toIeR + this.RU() / 2.0f, this.QWaAn + this.RV() / 2.0f, f6);
                            float f7 = f4 - 1.0f;
                            f3 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
                            if (iSArray == null) break block10;
                            if (f3 == false) break block11;
                        }
                        catch (MatchException matchException) {
                            throw co.QW(matchException);
                        }
                        jH.bId(lC2, this.toIeR, this.QWaAn, f4);
                    }
                    catch (MatchException matchException) {
                        throw co.QW(matchException);
                    }
                }
                try {
                    lC2.ccY(this.toIeR - 5.0f, this.QWaAn - 5.0f, this.jTsqG + 10.0f, this.Xtjvx + 10.0f, 15.0f, ld.all(6.0f), mG2);
                    jG.bHK(lC2, this.toIeR, this.QWaAn, this.jTsqG, Math.max(20.0f, this.Xtjvx));
                    this.NV(lC2);
                    jG.bHN();
                    f2 = f4;
                    f = 1.0f;
                    if (iSArray == null) break block12;
                    float f8 = f2 - f;
                    f3 = f8 == 0.0f ? 0 : (f8 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw co.QW(matchException);
                }
            }
            if (f3 != false) {
                jH.bIf();
            }
            jH.bIf();
            f2 = 1.0f;
            f = 1.0f;
        }
        jF.bHz(f2, f, 1.0f, 1.0f);
    }

    @Override
    protected void NV(lC lC2) {
        lq lq2 = lE.WTzbi.bYM(7.0f);
        ii ii2 = rD.dlM();
        float f = this.ormBS.dhj();
        float f2 = this.gILqY.dhj();
        mG mG2 = ii2.bjb().coa(255.0f * f);
        mG mG3 = ii2.bjc().coa(255.0f * f);
        float f3 = 20.0f;
        float f4 = Math.max(f3, this.Xtjvx);
        lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, f4, f, f2);
        float f5 = this.toIeR + 7.0f;
        float f6 = this.QWaAn + jf.bAH(lq2.cat(), f3);
        lC2.ceA(lq2, this.eqWHC, f5, f6, mG2);
        float f7 = 8.0f;
        float f8 = this.toIeR + this.jTsqG - f7 - 7.0f;
        float f9 = this.QWaAn + 6.0f;
        lC2.cem(this.jAncU, f8, f9, f7, mG3);
    }

    private static MatchException QW(MatchException matchException) {
        return matchException;
    }
}
