/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.mT;
import sixtwo.mw;

public class eM
extends gg {
    boolean XOnBS;
    mT Zrjec;
    private static long oIeWA;
    private static long Nsfxs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eM() {
        long l2 = oIeWA ^ 0x709ADE070C86L;
        super(gf.aZL((int)Nsfxs, false, gh.xwjCw));
        this.Zrjec = mT.cpz();
    }

    static {
        Loader.doInit(eM.class);
        eM._00a84fada65ad00e7d3bea41bbe99f6a();
    }

    private static native void _00a84fada65ad00e7d3bea41bbe99f6a();

    @hG(priority=mw.HIGH)
    public native void aAY(hw.tv var1);

    @hG
    public native void aAZ(gH.th var1);

    private static native MatchException aBa(MatchException var0);
}

