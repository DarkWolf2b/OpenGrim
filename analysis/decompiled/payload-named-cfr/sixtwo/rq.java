/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.Gson
 */
package sixtwo;

import com.google.gson.Gson;
import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;

public final class rq {
    private static Gson OwIJg;
    private static long rAzqi;
    private static String[] ppZYw;
    private static String[] waeqN;
    private static Map AYxse;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(rq.class);
        rq._e93d97f2c820357cae872af208b60b76();
    }

    private static native Object diQ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native Exception diN(Exception var0);

    private static native String diP(int var0, long var1);

    private static native CallSite diR(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String diO(byte[] var0);

    private static native void _e93d97f2c820357cae872af208b60b76();

    public static native <T> T diJ(byte[] var0, Class<T> var1);

    public static native <T> T diH(String var0, Class<T> var1);

    public static native <T> T diI(InputStream var0, Class<T> var1);

    public static native String diK(byte[] var0, String var1);

    public static native String diL(byte[] var0);

    private static native <T> T diM(String var0, Class<T> var1);
}

