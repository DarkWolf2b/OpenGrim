/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gN;
import sixtwo.gg;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.mT;
import sixtwo.mt;
import sixtwo.mw;
import sixtwo.ok;
import sixtwo.ol;

public class om {
    private final mt<ok> NtKMw;
    private boolean wTBTb;
    private boolean TFQuF;
    private int vkRAe;
    private int MLVTd;
    private Integer lrxKy;
    private int UxnsR;
    private final mT fSPsR;
    private static long xDPVR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public om() {
        long l2 = xDPVR ^ 0x6B0DE13CF613L;
        this.NtKMw = new mt(false);
        this.TFQuF = false;
        this.lrxKy = null;
        this.fSPsR = mT.cpz();
        int n2 = ol.cEW();
        hF.bdI(this);
        int n3 = n2;
        try {
            if (iS.bwL() == null) {
                ol.cEV(++n3);
            }
        }
        catch (MatchException matchException) {
            throw om.cFr(matchException);
        }
    }

    static {
        Loader.doInit(om.class);
        om._32bf260dcec5a5bb486129418a0658a0();
    }

    private native void cFi();

    public native int cFe();

    public native mT cFq();

    public native boolean cFd(ok var1, gg var2);

    public native int cFn();

    public native int cFm();

    public native int cFp();

    private native void cFh(ok var1);

    @hG
    public native void cFc(gL.tk var1);

    public native boolean cFf();

    private static native MatchException cFr(MatchException var0);

    @hG
    public native void cFb(gL.tj var1);

    @hG(priority=mw.LOWEST)
    public native void cEZ(gH.th var1);

    public native boolean cFk();

    @hG
    public native void cFa(gN var1);

    public native boolean cFl();

    public native void cFg();

    public native mt<ok> cFj();

    public native Integer cFo();

    private static native void _32bf260dcec5a5bb486129418a0658a0();
}

