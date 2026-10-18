/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.iS;
import sixtwo.iy;
import sixtwo.mT;
import sixtwo.nH;
import sixtwo.nI;

public abstract class nF
extends nH {
    protected final mT VbFMT;
    private final nI Kgyve;
    private static long CyNRa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _6f9294b9bddda6f7488d0a2402f2fd99();

    public nF(nI nI2) {
        long l2 = CyNRa ^ 0x750AB7625CC1L;
        this.VbFMT = mT.cpz();
        this.Kgyve = nI2;
        String string = nH.cxy();
        try {
            if (string == null) {
                iS.bwK("yoc5R");
            }
        }
        catch (MatchException matchException) {
            throw nF.cxu(matchException);
        }
    }

    static {
        Loader.doInit(nF.class);
        nF._6f9294b9bddda6f7488d0a2402f2fd99();
    }

    public native mT cxs();

    @Override
    public native void cwq();

    public native boolean cxr(iy var1);

    private static native MatchException cxu(MatchException var0);

    public native nI cxt();
}

