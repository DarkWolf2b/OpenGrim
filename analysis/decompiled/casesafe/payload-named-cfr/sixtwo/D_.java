/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.util.math.Vec2f;
import sixtwo.ak;
import sixtwo.az;
import sixtwo.cL;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class D
extends ak<cL> {
    private static float wROpY = 14.0f;
    private final rk eRMSo;
    private final rk CpJYd;
    private final rk WlUSf;
    private final rk gOcCu;
    private final rk doXNy;
    private final rk iYaup;
    private boolean QNUBB;
    private boolean kIOqP;
    private static long VGdtl;
    private static long[] WiuaB;
    private static Integer[] fyVLy;
    private static Map IzEFY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public D(cL cL2, az az2) {
        long l2 = VGdtl ^ 0x6A18AACCB97CL;
        super(cL2, az2);
        this.eRMSo = new rk((int)D.fA("e", (int)18108, (long)(0x1F2DBD1A2D9C6C91L ^ l2))).dhs(rj.MBpuQ);
        this.CpJYd = new rk((int)D.fA("e", (int)3137, (long)(0x3F0E25AA0BCF266DL ^ l2))).dhs(rj.MBpuQ);
        this.WlUSf = new rk((int)D.fA("e", (int)3137, (long)(0x3F0E25AA0BCF266DL ^ l2))).dhs(rj.MBpuQ);
        this.gOcCu = new rk((int)D.fA("e", (int)3137, (long)(0x3F0E25AA0BCF266DL ^ l2))).dhs(rj.MBpuQ);
        this.doXNy = new rk((int)D.fA("e", (int)27623, (long)(0x2365CC8BE22DC1C8L ^ l2))).dhs(rj.UPXqT);
        this.iYaup = new rk((int)D.fA("e", (int)5202, (long)(0x19AC0329A62BE7CL ^ l2))).dhs(rj.UPXqT);
        this.eRMSo.dhe(cL2.Xt().x);
        this.CpJYd.dhe(cL2.Xt().y);
        this.WlUSf.dhe(cL2.Xu().x);
        this.gOcCu.dhe(cL2.Xu().y);
    }

    static {
        Loader.doInit(D.class);
        D._9cd2f71414855ceb2d07a0f8decaf2e6();
    }

    private native void fp(lC var1, float var2, float var3, float var4);

    @Override
    public native float dn();

    private native float fw(rk var1, float var2, boolean var3);

    private native float ft(float var1, float var2, float var3, float var4, float var5);

    private native float fv(float var1, float var2, float var3, float var4);

    @Override
    public native void dl(double var1, double var3, mA var5);

    private native Vec2f fs(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native Vec2f fr(lC var1, float var2, float var3, float var4, float var5, float var6, float var7);

    @Override
    protected native void bV(lC var1);

    private static native CallSite fA(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int fz(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    private native void fq(lC var1, float var2, float var3, float var4, float var5, float var6, float var7);

    private static native int fy(int var0, long var1);

    private native float fu(float var1, float var2, float var3, float var4, float var5);

    private static native MatchException fx(MatchException var0);

    private static native void _9cd2f71414855ceb2d07a0f8decaf2e6();
}

