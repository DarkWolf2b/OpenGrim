/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import native.Loader;
import sixtwo.hJ;
import sixtwo.hK;

class hL$tA
implements hK {
    final List PfxnI;
    final String nlvqT;
    private static long fLZhy;
    private static String vIVbz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * WARNING - Possible parameter corruption
     * WARNING - void declaration
     */
    hL$tA() {
        void var3_-1;
        void var2_-1;
        this.PfxnI = var2_-1;
        this.nlvqT = var3_-1;
    }

    static {
        Loader.doInit(hL$tA.class);
        hL$tA._b7f2afaf3d867f5f84c292d44cd543bc();
    }

    @Override
    public native hJ validate(String var1);

    @Override
    public native List<String> suggestions(String var1);

    private static native void _b7f2afaf3d867f5f84c292d44cd543bc();

    private static native String dpx(byte[] var0);

    private static native boolean dpv(String var0, String var1);

    private static native MatchException dpw(MatchException var0);
}

