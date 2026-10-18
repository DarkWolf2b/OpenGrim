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

public class hS {
    private static long xSYcx;
    private static String[] JQxiM;
    private static String[] BVpcG;
    private static Map pGvFx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(hS.class);
        hS._295c28c4cfe2461aeff9e32735025125();
    }

    private static native MatchException bfa(MatchException var0);

    private static native String bfb(byte[] var0);

    private static native String bfc(int var0, long var1);

    public native hZ beX();

    private static native /* synthetic */ void beY(hX var0);

    private static native /* synthetic */ void beZ(hL var0);

    private static native Object bfd(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite bfe(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _295c28c4cfe2461aeff9e32735025125();
}

