/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.function.Consumer;
import java.util.function.Supplier;
import native.Loader;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.pF;
import sixtwo.rj;
import sixtwo.rk;

public class aQ
extends az {
    private static float hreJU = 16.0f;
    private static float eHeVG = 10.0f;
    private static float RdBvg = 6.0f;
    private static float XLRfk = 3.0f;
    private static float OSudz = 4.0f;
    private final rk dBTyX;
    private final rk ydHvt;
    private final rk GRHtk;
    private final rk uEFtu;
    private final Supplier<pF> EisLc;
    private final Consumer<pF> GVlEe;
    private final lc lGyOR;
    private final lc GDfoc;
    private static long vagoX;
    private static long[] CTEUW;
    private static Integer[] XGqWO;
    private static Map oONiw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aQ(Supplier<pF> supplier, Consumer<pF> consumer) {
        long l2 = vagoX ^ 0x13BF4B45FE11L;
        this.dBTyX = new rk((int)aQ.xU("g", (int)15972, (long)(0x28561C84DB91A55DL ^ l2))).dhs(rj.UPXqT);
        this.ydHvt = new rk((int)aQ.xU("g", (int)13342, (long)(0x61DA88A642EDAF26L ^ l2))).dhs(rj.UPXqT);
        this.GRHtk = new rk((int)aQ.xU("g", (int)13342, (long)(0x61DA88A642EDAF26L ^ l2))).dhs(rj.UPXqT);
        this.uEFtu = new rk((int)aQ.xU("g", (int)13342, (long)(0x61DA88A642EDAF26L ^ l2))).dhs(rj.UPXqT);
        this.lGyOR = new lc(0.0f, 0.0f, 0.0f, 0.0f);
        this.GDfoc = new lc(0.0f, 0.0f, 0.0f, 0.0f);
        this.EisLc = supplier;
        this.GVlEe = consumer;
    }

    static {
        Loader.doInit(aQ.class);
        aQ._1c050f99bf3b127a20c32d9ec8cc6a4b();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native void _1c050f99bf3b127a20c32d9ec8cc6a4b();

    @Override
    protected native void bV(lC var1);

    public native float xO();

    private static native MatchException xR(MatchException var0);

    private static native int xT(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native float xQ(lq var1, String var2, float var3);

    private static native int xS(int var0, long var1);

    private native void xP(lC var1, lq var2, lc var3, pF var4, lf var5, float var6, float var7);

    private static native CallSite xU(MethodHandles.Lookup var0, String var1, MethodType var2);
}

