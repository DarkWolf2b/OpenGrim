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
        float f2;
        float f3;
        block12: {
            float f4;
            block10: {
                float f5;
                mG mG2;
                iS[] iSArray;
                block11: {
                    long l2 = pzAXQ ^ 0x3B656CA4AA40L;
                    iS[] iSArray2 = cr.SC();
                    this.LX(lC2);
                    iSArray = iSArray2;
                    float f6 = this.ormBS.dhj() * this.KgDVz.dhj();
                    try {
                        if (f6 == 0.0f) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw co.QW(matchException);
                    }
                    mG2 = mG.QHTxQ.cob(0.3f * this.gILqY.dhj());
                    jF.bHz(1.0f, 1.0f, 1.0f, Math.min(1.0f, f6));
                    float f7 = 0.5f + f6 * 0.5f - 0.05f * this.OsbYH.dhj();
                    f5 = this.RT();
                    try {
                        try {
                            jH.bId(lC2, this.toIeR + this.RU() / 2.0f, this.QWaAn + this.RV() / 2.0f, f7);
                            float f8 = f5 - 1.0f;
                            f4 = f8 == 0.0f ? 0 : (f8 > 0.0f ? 1 : -1);
                            if (iSArray == null) break block10;
                            if (f4 == false) break block11;
                        }
                        catch (MatchException matchException) {
                            throw co.QW(matchException);
                        }
                        jH.bId(lC2, this.toIeR, this.QWaAn, f5);
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
                    f3 = f5;
                    f2 = 1.0f;
                    if (iSArray == null) break block12;
                    float f9 = f3 - f2;
                    f4 = f9 == 0.0f ? 0 : (f9 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw co.QW(matchException);
                }
            }
            if (f4 != false) {
                jH.bIf();
            }
            jH.bIf();
            f3 = 1.0f;
            f2 = 1.0f;
        }
        jF.bHz(f3, f2, 1.0f, 1.0f);
    }

    @Override
    protected void NV(lC lC2) {
        lq lq2 = lE.WTzbi.bYM(7.0f);
        ii ii2 = rD.dlM();
        float f2 = this.ormBS.dhj();
        float f3 = this.gILqY.dhj();
        mG mG2 = ii2.bjb().coa(255.0f * f2);
        mG mG3 = ii2.bjc().coa(255.0f * f2);
        float f4 = 20.0f;
        float f5 = Math.max(f4, this.Xtjvx);
        lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, f5, f2, f3);
        float f6 = this.toIeR + 7.0f;
        float f7 = this.QWaAn + jf.bAH(lq2.cat(), f4);
        lC2.ceA(lq2, this.eqWHC, f6, f7, mG2);
        float f8 = 8.0f;
        float f9 = this.toIeR + this.jTsqG - f8 - 7.0f;
        float f10 = this.QWaAn + 6.0f;
        lC2.cem(this.jAncU, f9, f10, f8, mG3);
    }

    private static MatchException QW(MatchException matchException) {
        return matchException;
    }
}

