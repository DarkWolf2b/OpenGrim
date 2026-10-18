/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import native.Loader;
import sixtwo.py;

class pI$vA {
    private final List<py> kJJrH;
    private float QVsEO;
    private boolean UaqaR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private pI$vA(List<py> list, float f2, boolean bl2) {
        this.kJJrH = list;
        this.QVsEO = f2;
        this.UaqaR = bl2;
    }

    static {
        Loader.doInit(pI$vA.class);
    }

    public native List<py> dxx();

    private native void dxv(float var1);

    public native float dxy();

    private native void dxw(boolean var1);

    public native boolean dxz();
}

