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
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionStage;
import native.Loader;
import sixtwo.mI$uQ;
import sixtwo.mI$uR;
import sixtwo.rp;

public class mI
implements rp {
    private float xUKAz;
    private float kdYii;
    private int UwqUC;
    private List<mI$uR> xHzqI;
    private static long lQGin;
    private static String[] lIDtN;
    private static String[] ozGrz;
    private static Map rBSVo;
    private static long[] wSner;
    private static Integer[] PLqnK;
    private static Map ymrzo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(mI.class);
        mI._0ce722f39e175882870234e23f2c8fca();
    }

    private static native /* synthetic */ CompletionStage cpp(byte[] var0);

    private static native Throwable cpr(Throwable var0);

    public native mI cpn(int var1);

    @Override
    public native void fromJson(JsonObject var1);

    private static native void cpe(Map<String, byte[]> var0);

    private static native CallSite cpy(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int cpx(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native JsonObject toJson();

    private static native String cpt(int var0, long var1);

    public native mI cpl(float var1);

    public native mI cpm(float var1);

    public static native CompletableFuture<mI> cpb(String var0);

    public native mI cpo(List<mI$uR> var1);

    private static native CallSite cpv(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object cpu(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String cps(byte[] var0);

    private static native int cpw(int var0, long var1);

    private static native /* synthetic */ mI cpq(List var0, mI var1);

    private static native void _0ce722f39e175882870234e23f2c8fca();

    public native int cpg();

    public native float cph();

    public native float cpi();

    private static native String cpc(String var0);

    private static native void cpf(List<mI$uQ> var0);

    private static native CompletableFuture<mI> cpd(Map<String, byte[]> var0, List<mI$uQ> var1);

    public native List<mI$uR> cpk();

    public native int cpj();
}

