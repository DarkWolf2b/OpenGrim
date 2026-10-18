/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.gg;
import sixtwo.iS;
import sixtwo.mw;
import sixtwo.ol;

public class ok {
    private final int XUnwa;
    private final boolean RXCul;
    private final boolean rLJYZ;
    private final int UAbjj;
    private final mw eMwhY;
    private final gg oQUTp;
    private static long pykWe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ok(int n2, boolean bl2, boolean bl3, mw mw2, gg gg2) {
        long l2 = pykWe ^ 0x2A43E9BD8FA2L;
        this.XUnwa = n2;
        this.RXCul = bl2;
        this.rLJYZ = bl3;
        this.eMwhY = mw2;
        int n3 = ol.cEW();
        try {
            this.oQUTp = gg2;
            this.UAbjj = -1;
            if (n3 != 0) {
                iS.bwK("y0Cabc");
            }
        }
        catch (MatchException matchException) {
            throw ok.cEN(matchException);
        }
    }

    public ok(int n2, boolean bl2, boolean bl3, int n3, mw mw2, gg gg2) {
        this.XUnwa = n2;
        this.RXCul = bl2;
        this.rLJYZ = bl3;
        this.UAbjj = n3;
        this.eMwhY = mw2;
        this.oQUTp = gg2;
    }

    static {
        Loader.doInit(ok.class);
        ok._14a3a1d16b9a1102f2c641f2eb4ce5c2();
    }

    private static native MatchException cEN(MatchException var0);

    public native boolean cEJ();

    public native gg cEM();

    public native int cEH();

    public native mw cEL();

    public native boolean cEI();

    public native int cEK();

    private static native void _14a3a1d16b9a1102f2c641f2eb4ce5c2();
}

