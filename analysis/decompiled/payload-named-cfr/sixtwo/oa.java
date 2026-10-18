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
import sixtwo.mI;

public final class oa {
    private Map<String, mI> IIfLW;
    private static long Ctnta;
    private static String[] rBSUl;
    private static String[] oiNdO;
    private static Map zDmqS;
    private static long ghEZa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(oa.class);
        oa._cec2a77b2d4e3eb428021e32fd67b4fa();
    }

    private native CompletableFuture<Void> cBl(Throwable var1);

    private native CompletableFuture<Void> cBk();

    public native mI cBi(String var1);

    private static native Throwable cBq(Throwable var0);

    private native /* synthetic */ void cBo(Map var1);

    private native void cBm(Map<String, mI> var1);

    private static native Object cBt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void cBn(Map var1, Void var2, Throwable var3);

    public native CompletableFuture<Void> cBh();

    private static native String cBr(byte[] var0);

    private static native CallSite cBu(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ void cBp(Map var0, String var1, mI var2);

    public native void cBj();

    private static native String cBs(int var0, long var1);

    private static native void _cec2a77b2d4e3eb428021e32fd67b4fa();
}

