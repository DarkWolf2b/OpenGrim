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
import sixtwo.qn;

public class fO
extends gg {
    static qn BkQJI;
    private static long RaFvq;
    private static String[] ofIip;
    private static String[] lEAyT;
    private static Map vWbJl;
    private static long JLbAF;
    private static long zATNU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fO() {
        long l2 = RaFvq ^ 0x472581678603L;
        super(gf.aZL((int)JLbAF, true, gh.KfAlY));
    }

    static {
        Loader.doInit(fO.class);
        fO._f119d8f6a1bb3ad0f1fb0c30292c429a();
    }

    @Override
    public native void aaj();

    private static native String aWm(int var0, long var1);

    private static native CallSite aWo(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException aWk(MatchException var0);

    private static native String aWl(byte[] var0);

    private native void aWj();

    private static native Object aWn(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _f119d8f6a1bb3ad0f1fb0c30292c429a();

    @Override
    public native void YO();
}

