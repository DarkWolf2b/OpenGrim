/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import native.Loader;
import sixtwo.mD;
import sixtwo.qm;
import sixtwo.qn;
import sixtwo.qo;

public class qq {
    private static qm HicYU;
    private static Runnable krWnA;
    private static boolean zYeYA;
    private static JsonObject aBiEo;
    private static mD ldXrr;
    private static long jfYZz;
    private static String[] uhLsW;
    private static String[] cjMrV;
    private static Map FDJGs;
    private static long YbvyA;
    private static long sILNX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(qq.class);
        qq._f02bf6c5c732987c060bbb1b9985b1ad();
    }

    public static native boolean cXH(long var0, Runnable var2) throws InterruptedException;

    public static native void cXJ(qn var0);

    private static native void cXL();

    public static native mD cXO();

    public static native boolean cXG(long var0, Runnable var2);

    public static native boolean cXI();

    public static native void cXK();

    private static native void cXM(qo var0);

    private static native int cXN();

    private static native /* synthetic */ void cXP(Runnable var0, CountDownLatch var1);

    private static native CallSite cXU(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object cXT(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String cXR(byte[] var0);

    private static native String cXS(int var0, long var1);

    private static native Exception cXQ(Exception var0);

    private static native void _f02bf6c5c732987c060bbb1b9985b1ad();
}

