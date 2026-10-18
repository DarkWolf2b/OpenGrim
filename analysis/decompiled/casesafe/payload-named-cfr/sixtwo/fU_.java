/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gy;
import sixtwo.hG;

public class fU
extends gg {
    private static long bVEnw;
    private static String[] KrrAc;
    private static String[] qvWvL;
    private static Map YJICs;
    private static long pmRzS;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fU() {
        long l2 = bVEnw ^ 0x6E3C4CB4167AL;
        super(gf.aZL((int)pmRzS, false, gh.KfAlY));
    }

    static {
        Loader.doInit(fU.class);
        fU._9ca8788c776fc65a0475168085a13724();
    }

    private static native Object aXT(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException aXQ(MatchException var0);

    private static native CallSite aXU(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aXP(gy var1);

    private static native String aXS(int var0, long var1);

    private static native String aXR(byte[] var0);

    private static native void _9ca8788c776fc65a0475168085a13724();
}

