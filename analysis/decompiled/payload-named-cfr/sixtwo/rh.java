/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.rj;
import sixtwo.rk;

public class rh {
    private float EiSey;
    private float Jspxf;
    private rj KQBBC = rj.Xmkbr;
    private final rk gyBUb = new rk(1);
    private static int leSyR;
    private static final long HwknU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        HwknU = gb.aYR(-3092870795174280153L, 319375823086773238L, MethodHandles.lookup().lookupClass()).a(103336697470254L);
        if (rh.dfQ() != 0) {
            rh.dfP(97);
        }
    }

    public static int dfQ() {
        return leSyR;
    }

    public static void dfP(int n2) {
        leSyR = n2;
    }

    public float dfF(float f2, int n2) {
        n2 = Math.max(1, n2);
        this.Jspxf = f2;
        this.gyBUb.dhq(n2);
        this.gyBUb.dhs(this.KQBBC);
        this.EiSey = this.gyBUb.dhd(this.Jspxf);
        return this.EiSey;
    }

    public rh dfK(rj rj2) {
        this.KQBBC = rj2;
        return this;
    }

    public float dfH() {
        this.EiSey = this.gyBUb.dhd(this.Jspxf);
        return this.EiSey;
    }

    public float dfL() {
        return this.EiSey;
    }

    public rj dfN() {
        return this.KQBBC;
    }

    public static int dfR() {
        int n2 = rh.dfQ();
        try {
            if (n2 == 0) {
                return 57;
            }
        }
        catch (MatchException matchException) {
            throw rh.dfS(matchException);
        }
        return 0;
    }

    public rh dfJ(float f2) {
        this.Jspxf = f2;
        return this;
    }

    private static MatchException dfS(MatchException matchException) {
        return matchException;
    }

    public rh dfI(float f2) {
        this.EiSey = f2;
        return this;
    }

    public float dfM() {
        return this.Jspxf;
    }

    public boolean dfG() {
        boolean bl2;
        block8: {
            block7: {
                int n2;
                block6: {
                    long l2 = HwknU ^ 0x3A170758F70BL;
                    n2 = rh.dfQ();
                    try {
                        try {
                            bl2 = this.gyBUb.dho();
                            if (n2 != 0) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw rh.dfS(matchException);
                        }
                        float f2 = this.EiSey - this.Jspxf;
                        bl2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw rh.dfS(matchException);
                    }
                }
                try {
                    if (n2 != 0) break block8;
                    if (bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw rh.dfS(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    public rk dfO() {
        return this.gyBUb;
    }
}

