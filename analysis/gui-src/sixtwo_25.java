/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mG;
import sixtwo.rh;
import sixtwo.rj;
import sixtwo.rk;

public class ri {
    private static final rj cNvhb;
    private final rk nYDZy;
    private final rk wmaJf;
    private final rk HTDiY;
    private final rk XLvDZ;
    private static final long foqYm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ri dfW(rj rj2) {
        this.nYDZy.dhs(rj2);
        this.wmaJf.dhs(rj2);
        this.HTDiY.dhs(rj2);
        this.XLvDZ.dhs(rj2);
        return this;
    }

    public ri(int n2, rj rj2) {
        long l2 = foqYm ^ 0x63AA23BCD34BL;
        int n3 = rh.dfQ();
        this.nYDZy = new rk(n2).dhs(rj2);
        this.wmaJf = new rk(n2).dhs(rj2);
        int n4 = n3;
        try {
            this.HTDiY = new rk(n2).dhs(rj2);
            this.XLvDZ = new rk(n2).dhs(rj2);
            if (iS.bwL() == null) {
                rh.dfP(++n4);
            }
        }
        catch (MatchException matchException) {
            throw ri.dfZ(matchException);
        }
    }

    public ri(int n2, mG mG2) {
        this(n2, mG2, cNvhb);
    }

    public ri(int n2) {
        this(n2, cNvhb);
    }

    public ri(int n2, mG mG2, rj rj2) {
        long l2 = foqYm ^ 0x2C109E6C1440L;
        this.nYDZy = new rk(n2, mG2.cor()).dhs(rj2);
        this.wmaJf = new rk(n2, mG2.cos()).dhs(rj2);
        int n3 = rh.dfQ();
        try {
            this.HTDiY = new rk(n2, mG2.cot()).dhs(rj2);
            this.XLvDZ = new rk(n2, mG2.cou()).dhs(rj2);
            if (n3 != 0) {
                iS.bwK("cmi1bc");
            }
        }
        catch (MatchException matchException) {
            throw ri.dfZ(matchException);
        }
    }

    static {
        foqYm = gb.aYR(2073536413879717892L, 4418601304020317291L, MethodHandles.lookup().lookupClass()).a(65960377467618L);
        cNvhb = rj.ZIApv;
    }

    public mG dfT(mG mG2) {
        this.nYDZy.dhd(mG2.cor());
        this.wmaJf.dhd(mG2.cos());
        this.HTDiY.dhd(mG2.cot());
        this.XLvDZ.dhd(mG2.cou());
        return this.dfU();
    }

    private static MatchException dfZ(MatchException matchException) {
        return matchException;
    }

    public mG dfU() {
        return mG.cnR(this.nYDZy.dhj(), this.wmaJf.dhj(), this.HTDiY.dhj(), this.XLvDZ.dhj());
    }

    public ri dfV(rj rj2) {
        this.nYDZy.dhs(rj2);
        this.wmaJf.dhs(rj2);
        this.HTDiY.dhs(rj2);
        this.XLvDZ.dhs(rj2);
        return this;
    }

    public ri dfX(int n2) {
        this.nYDZy.dhq(n2);
        this.wmaJf.dhq(n2);
        this.HTDiY.dhq(n2);
        this.XLvDZ.dhq(n2);
        return this;
    }

    public ri dfY(mG mG2) {
        this.nYDZy.dhe(mG2.cor());
        this.wmaJf.dhe(mG2.cos());
        this.HTDiY.dhe(mG2.cot());
        this.XLvDZ.dhe(mG2.cou());
        return this;
    }
}

