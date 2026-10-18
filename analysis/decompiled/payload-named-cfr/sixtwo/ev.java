/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hq;

public class ev
extends gg {
    private static long zMDWT;
    private static long PkbYQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _bc8c023ff57a02def6819dda3daabfc3();

    public ev() {
        long l2 = zMDWT ^ 0x541040549769L;
        super(gf.aZL((int)PkbYQ, false, gh.xgeEn).aZS(false));
    }

    static {
        Loader.doInit(ev.class);
        ev._bc8c023ff57a02def6819dda3daabfc3();
    }

    @Override
    public native void aaj();

    @hG
    public native void auR(hq var1);

    private static native MatchException auS(MatchException var0);
}

