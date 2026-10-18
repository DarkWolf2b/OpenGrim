/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.ar$rT;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class ar
extends az {
    public static float PlhLL = 95.0f;
    public static float XUVbp = 65.0f;
    public static float UUhbc = 10.0f;
    private static float rKrUJ = 72.5f;
    private static float hDMsk = 30.0f;
    private static float FEKcs = 5.0f;
    private static float Zdkyt = 25.0f;
    private static float jpflI = 9.0f;
    private static float pABir = 14.0f;
    private static float WBuuz = 15.0f;
    private static float mbaYO = 8.0f;
    private static float xiWEV = 1.0f;
    private final boolean klgAN;
    private final boolean bvQbu;
    private final Map<Integer, ar$rT> BWfDJ;
    private final ri cHtGL;
    private final ri TZUuw;
    private final rk wWScb;
    private final rk RnGbo;
    private final rk yfvEk;
    private final rk iSnTn;
    private final rk uVLZj;
    private final rk KhklX;
    private boolean wRdLT;
    private boolean YZuVT;
    private boolean jOVQz;
    private float imcLz;
    private float ulqwb;
    private float JLHJd;
    private float mFvOG;
    private boolean ItrsY;
    private mG JvOAZ;
    private Runnable nEQMA;
    private static long UwIwA;
    private static String[] uBvLb;
    private static String[] ZbVBN;
    private static Map ERPUB;
    private static long[] YbRaZ;
    private static Integer[] Qpluh;
    private static Map qwVjG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native String ri(int var0, long var1);

    public ar(boolean bl2, boolean bl3) {
        long l2 = UwIwA ^ 0x1C47EF57659AL;
        super(0.0f, 0.0f, 95.0f, ar.rc(bl2, bl3));
        this.BWfDJ = new LinkedHashMap<Integer, ar$rT>();
        this.cHtGL = new ri((int)ar.rn("c", (int)19406, (long)(0x611C3664876AEC29L ^ l2)));
        this.TZUuw = new ri((int)ar.rn("c", (int)20914, (long)(0x16331214BD537652L ^ l2)));
        this.wWScb = new rk((int)ar.rn("c", (int)11441, (long)(0x474F2E5BE5820B55L ^ l2))).dhs(rj.MBpuQ);
        this.RnGbo = new rk((int)ar.rn("c", (int)25706, (long)(0x66E6476C9429C38BL ^ l2))).dhs(rj.MBpuQ);
        this.yfvEk = new rk((int)ar.rn("c", (int)25706, (long)(0x66E6476C9429C38BL ^ l2))).dhs(rj.MBpuQ);
        this.iSnTn = new rk((int)ar.rn("c", (int)25706, (long)(0x66E6476C9429C38BL ^ l2))).dhs(rj.MBpuQ);
        this.uVLZj = new rk((int)ar.rn("c", (int)13044, (long)(0x5B463A81761D1511L ^ l2))).dhs(rj.MBpuQ);
        this.KhklX = new rk((int)ar.rn("c", (int)7341, (long)(0x1C145B0477AF3B4BL ^ l2))).dhs(rj.MBpuQ);
        this.JvOAZ = mG.hoGuU;
        this.nEQMA = ar::rf;
        this.klgAN = bl2;
        this.bvQbu = bl3;
    }

    static {
        Loader.doInit(ar.class);
        ar._b444f5f277c0077159632a5e6f930aee();
    }

    private static native /* synthetic */ boolean rd(ar$rT var0);

    private static native lq rb();

    private static native CallSite rn(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ void rf();

    private static native int rl(int var0, long var1);

    @Override
    public native void dl(double var1, double var3, mA var5);

    private static native int rm(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException rg(MatchException var0);

    private static native float rc(boolean var0, boolean var1);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native String rh(byte[] var0);

    private static native /* synthetic */ void re();

    private static native void _b444f5f277c0077159632a5e6f930aee();

    @Override
    protected native void bV(lC var1);

    private native float ra();

    public native ar qH(Runnable var1);

    public static native float qF(boolean var0, boolean var1);

    private native boolean qQ(double var1, double var3, mA var5);

    public native void qI(mG var1);

    private native mG qK();

    public native void qG(lC var1, mG var2);

    public native boolean qM(mG var1, float var2);

    public native mG qL();

    public native float qN();

    public native mG qJ();

    private native void qP(lC var1, List<ar$rT> var2);

    public native float qO();

    private native List<ar$rT> qR();

    private native lc qS();

    private native lc qT();

    private native lc qU();

    private native void qV(lC var1, float var2, float var3);

    private native float qW();

    private native float qX();

    private native float qY();

    private native float qZ();

    private static native CallSite rk(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object rj(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

