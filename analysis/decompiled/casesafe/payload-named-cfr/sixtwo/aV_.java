/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  sixtwo.aS
 */
package sixtwo;

import java.util.ArrayList;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.aS;
import sixtwo.aU;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.py;
import sixtwo.rj;
import sixtwo.rk;

public class aV
extends az {
    private static float oDtke = 6.0f;
    private final List<aS> TBGre;
    private final Map<py, aS> cxvQr;
    private final rk fwoMR;
    private aU jFVar;
    private static long dTZIw;
    private static long OgGNH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aV() {
        long l2 = dTZIw ^ 0x2F1A39F87F28L;
        this.TBGre = new ArrayList<aS>();
        this.cxvQr = new IdentityHashMap<py, aS>();
        this.fwoMR = new rk((int)OgGNH).dhs(rj.MBpuQ);
    }

    static {
        Loader.doInit(aV.class);
        aV._974846e1551efaed4a484217fd409839();
    }

    @Override
    public native float dn();

    private static native /* synthetic */ boolean ze(List var0, Map.Entry var1);

    public native aV zc(aU var1);

    private static native MatchException zf(MatchException var0);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private native void zd(List<py> var1);

    private static native void _974846e1551efaed4a484217fd409839();

    public native aV zb(List<py> var1);
}

