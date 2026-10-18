/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.j;
import sixtwo.lC;
import sixtwo.mT;
import sixtwo.n;
import sixtwo.pN;
import sixtwo.py;

public final class aL {
    private final Map<py, n> KvEqV = new IdentityHashMap<py, n>();
    private py ZmBFy;
    private mT QpDhe = mT.cpA();
    private boolean uXZpz;
    private static String OQJvI;
    private static long nlySR;
    private static String[] lRcQp;
    private static String[] wkmMg;
    private static Map EKgco;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(aL.class);
        aL._fa2347ff9659be2de33590027733141e();
    }

    private static native CallSite xa(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _fa2347ff9659be2de33590027733141e();

    private static native /* synthetic */ n wT(py var0);

    public static native void wU(String var0);

    public static native String wV();

    public native void wQ();

    public native void wP(lC var1, List<pN> var2, py var3, boolean var4, boolean var5, float var6);

    private native j wS(py var1);

    private native n wR(py var1);

    private static native String wX(byte[] var0);

    private static native Object wZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String wY(int var0, long var1);

    private static native MatchException wW(MatchException var0);
}

