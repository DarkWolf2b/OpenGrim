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
import sixtwo.hL;
import sixtwo.hX;
import sixtwo.hZ;

public class hT {
    private static long MgoIE;
    private static String[] tAJxG;
    private static String[] SREhy;
    private static Map KThVk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(hT.class);
        hT._b3f0ce18369101911bee73aa880aaa6f();
    }

    private static native /* synthetic */ void bfi(hL var0);

    private static native void _b3f0ce18369101911bee73aa880aaa6f();

    private static native CallSite bfn(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String bfl(int var0, long var1);

    public native hZ bff();

    private static native MatchException bfj(MatchException var0);

    private static native Object bfm(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String bfk(byte[] var0);

    private static native /* synthetic */ void bfh(hL var0);

    private static native /* synthetic */ void bfg(hX var0);
}

