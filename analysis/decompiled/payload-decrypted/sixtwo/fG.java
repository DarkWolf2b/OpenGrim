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
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.eD;
import sixtwo.gA;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.mr;

public class fG
extends gg {
    private final ct xHSEs;
    private final cu rLoJa;
    private final cu qPyIG;
    private final cu WOHue;
    private final cJ XOUKT;
    private final cA XUvTV;
    private final cA PWSXA;
    private final cC AqVee;
    private boolean HrnPx;
    private boolean QYvrB;
    private long deLoo;
    private final Runnable RJFVs;
    private final Runnable abWbk;
    private final Runnable YNgob;
    private final Runnable VqvZM;
    private final Runnable DyNeX;
    private static long UXeQf;
    private static String[] dPMvB;
    private static String[] SjiqK;
    private static Map FpKBj;
    private static long[] NDFbm;
    private static Integer[] KEbwq;
    private static Map MdrLn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fG() {
        long l2 = UXeQf ^ 0x6086707507E1L;
        super(gf.aZL((int)13, false, gh.xwjCw));
        this.xHSEs = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        this.rLoJa = new cu(this.xHSEs, mr.clS(new int[]{(int)87, (int)84, (int)97, (int)112}));
        this.qPyIG = new cu(this.xHSEs, mr.clS(new int[]{(int)83, (int)84, (int)97, (int)112}));
        int[] nArray = new int[8];
        nArray[0] = (int)83;
        nArray[1] = (int)110;
        nArray[2] = (int)101;
        nArray[3] = (int)97;
        nArray[4] = (int)107;
        nArray[5] = (int)84;
        nArray[6] = (int)97;
        nArray[7] = (int)112;
        this.WOHue = new cu(this.xHSEs, mr.clS(nArray));
        int[] nArray2 = new int[14];
        nArray2[0] = (int)79;
        nArray2[1] = (int)110;
        nArray2[2] = (int)108;
        nArray2[3] = (int)121;
        nArray2[4] = (int)32;
        nArray2[5] = (int)79;
        nArray2[6] = (int)110;
        nArray2[7] = (int)32;
        nArray2[8] = (int)71;
        nArray2[9] = (int)114;
        nArray2[10] = (int)111;
        nArray2[11] = (int)117;
        nArray2[12] = (int)110;
        nArray2[13] = (int)100;
        this.XOUKT = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[9];
        nArray3[0] = (int)84;
        nArray3[1] = (int)97;
        nArray3[2] = (int)112;
        nArray3[3] = (int)32;
        nArray3[4] = (int)83;
        nArray3[5] = (int)116;
        nArray3[6] = (int)97;
        nArray3[7] = (int)114;
        nArray3[8] = (int)116;
        this.XUvTV = new cA(this, mr.clS(nArray3)).UG(5.0).UE(0.0).UF(1000.0).UI(120.0, 120.0).UH((String)((Object)" ms"));
        int[] nArray4 = new int[8];
        nArray4[0] = (int)84;
        nArray4[1] = (int)97;
        nArray4[2] = (int)112;
        nArray4[3] = (int)32;
        nArray4[4] = (int)83;
        nArray4[5] = (int)116;
        nArray4[6] = (int)111;
        nArray4[7] = (int)112;
        this.PWSXA = new cA(this, mr.clS(nArray4)).UG(5.0).UE(1.0).UF(1000.0).UI(450.0, 450.0).UH((String)((Object)" ms"));
        int[] nArray5 = new int[9];
        nArray5[0] = (int)84;
        nArray5[1] = (int)97;
        nArray5[2] = (int)112;
        nArray5[3] = (int)32;
        nArray5[4] = (int)68;
        nArray5[5] = (int)101;
        nArray5[6] = (int)108;
        nArray5[7] = (int)97;
        nArray5[8] = (int)121;
        this.AqVee = new cC(this, mr.clS(nArray5)).Vy(10.0).Vw(0.0).Vx(2500.0).VA(0.0).Vz((String)((Object)" ms"));
        this.RJFVs = this::aTm;
        this.abWbk = this::aTl;
        this.YNgob = this::aTk;
        this.VqvZM = this::aTj;
        this.DyNeX = this::aTi;
    }

    static {
        Loader.doInit(fG.class);
        fG._2b9caf2d2a8e73d89bb28f3dd29947fe();
    }

    @Override
    public native void aaj();

    private static native void _2b9caf2d2a8e73d89bb28f3dd29947fe();

    private static native CallSite aTu(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite aTr(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void aTm();

    private native /* synthetic */ void aTl();

    private native /* synthetic */ void aTk();

    private native /* synthetic */ void aTj();

    private native /* synthetic */ void aTi();

    @hG
    public native void aTf(hw.tv var1);

    @hG
    public native void aTg(gA var1);

    private static native /* synthetic */ void aTh(boolean var0, eD var1);

    private static native MatchException aTn(MatchException var0);

    private static native String aTo(byte[] var0);

    private static native String aTp(int var0, long var1);

    private static native Object aTq(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aTs(int var0, long var1);

    private static native int aTt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

