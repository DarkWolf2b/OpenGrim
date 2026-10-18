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
import sixtwo.gA;
import sixtwo.hF;

public class qS {
    private boolean DlNLK;
    private Object kRANN;
    private static long OZOrx;
    private static long[] ltwvq;
    private static Integer[] wHukO;
    private static Map hbHFv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qS() {
        hF.bdI(this);
    }

    static {
        Loader.doInit(qS.class);
        qS._8aec6533b83505bfd128c5a306bee26a();
    }

    private static native int dec(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native boolean ddT(gA var1);

    public native boolean ddY();

    private static native void _8aec6533b83505bfd128c5a306bee26a();

    private static native MatchException dea(MatchException var0);

    private static native CallSite ded(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native boolean ddX(Object var1);

    public native void ddV();

    private static native int deb(int var0, long var1);

    public native void ddW(int var1, int var2);

    public native Object ddZ();

    public native void ddU(Object var1);
}

