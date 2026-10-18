/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.az;
import sixtwo.bz;
import sixtwo.f;
import sixtwo.lC;
import sixtwo.mA;

class bz$sh
extends az {
    final bz nIiHX;
    private static long lEAqJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _64228e79e0c8f9e7d25bb01595af0630();

    bz$sh(bz bz2) {
        this.nIiHX = bz2;
    }

    static {
        Loader.doInit(bz$sh.class);
        bz$sh._64228e79e0c8f9e7d25bb01595af0630();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    @Override
    public native void sA(f var1);

    @Override
    protected native boolean nZ();

    private static native MatchException dnv(MatchException var0);
}

