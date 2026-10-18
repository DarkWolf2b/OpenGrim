/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;
import sixtwo.oc;

public final class nZ {
    private Map<String, oc> jOmdj;
    private static long hbWNR;
    private static String[] uJgNV;
    private static String[] hgWid;
    private static Map waGXW;
    private static long FXDIE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(nZ.class);
        nZ._ab775f2d6f1e9c45637041e1df39cdf1();
    }

    private native CompletableFuture<Void> cAW();

    private native void cAY(Map<String, oc> var1);

    public native void cAV();

    private native CompletableFuture<Void> cAX(Throwable var1);

    private static native Throwable cBc(Throwable var0);

    private native /* synthetic */ void cBa(Map var1);

    private static native String cBd(byte[] var0);

    private static native Object cBf(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native CompletableFuture<Void> cAT();

    private native /* synthetic */ void cAZ(Map var1, Void var2, Throwable var3);

    private static native /* synthetic */ void cBb(Map var0, String var1, oc var2);

    private static native String cBe(int var0, long var1);

    public native oc cAU(String var1);

    private static native CallSite cBg(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _ab775f2d6f1e9c45637041e1df39cdf1();
}

