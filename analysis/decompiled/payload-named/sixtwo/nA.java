/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.gq;
import sixtwo.iS;
import sixtwo.iy;
import sixtwo.mT;
import sixtwo.nF;
import sixtwo.nJ;
import sixtwo.nK;

public class nA
extends nF {
    private final mT HIIQz = mT.cpz();
    private static iS[] wcTiP;
    private static long rGiNn;
    private static long hLoIO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _fb1e61fbf09ca05f3e051a5181d5fc80();

    public nA() {
        super(nA::cwr);
    }

    static {
        Loader.doInit(nA.class);
        nA._fb1e61fbf09ca05f3e051a5181d5fc80();
    }

    @Override
    public native nJ cwm(nK var1);

    @Override
    public native nJ cwp(nK var1, gq var2);

    @Override
    public native void cwq();

    private static native MatchException cwu(MatchException var0);

    public static native void cws(iS[] var0);

    public static native iS[] cwt();

    private static native /* synthetic */ long cwr(iy var0);
}

