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
import sixtwo.aj;
import sixtwo.ak;
import sixtwo.az;
import sixtwo.cA;
import sixtwo.cy;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class p
extends ak<cA> {
    private boolean VeJrH;
    private boolean PysNf;
    private boolean cHwmi;
    private double lJkuw;
    private final rk LmPiG;
    private final rk mcCyI;
    private final rk jDhzO;
    private final rk zNxSk;
    private static long xGtcx;
    private static String[] kDxWL;
    private static String[] LqULr;
    private static Map HDBwv;
    private static long[] Jujsa;
    private static Integer[] rEndQ;
    private static Map CCCPZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public p(cA cA2, az az2) {
        long l2 = xGtcx ^ 0x6594E244DDDBL;
        super(cA2, az2);
        this.LmPiG = new rk((int)p.dK("m", (int)14557, (long)(0x3F2B55122662DF79L ^ l2))).dhs(rj.MBpuQ);
        this.mcCyI = new rk((int)p.dK("m", (int)5977, (long)(0x1AF6C46CE42770F7L ^ l2))).dhs(rj.MBpuQ);
        this.jDhzO = new rk((int)p.dK("m", (int)28803, (long)(0x5F4F86AE76309720L ^ l2))).dhs(rj.UPXqT);
        this.zNxSk = new rk((int)p.dK("m", (int)18873, (long)(0x3AD7DEE95C82AE1EL ^ l2))).dhs(rj.UPXqT);
    }

    static {
        Loader.doInit(p.class);
        p._abb327e371537caac251ee182a598689();
    }

    @Override
    public native float dn();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native void dz(lC var1, float var2, float var3, float var4);

    @Override
    protected native void bV(lC var1);

    private static native CallSite dK(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native NumberFormatException dD(NumberFormatException var0);

    private static native CallSite dH(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String dE(byte[] var0);

    private static native int dJ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native Object dG(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void dC(cy var1, boolean var2, aj var3);

    private static native int dI(int var0, long var1);

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    private static native String dF(int var0, long var1);

    private native void dA(boolean var1);

    private static native void _abb327e371537caac251ee182a598689();
}

