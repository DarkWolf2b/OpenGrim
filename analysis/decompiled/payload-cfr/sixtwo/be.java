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
import sixtwo.P;
import sixtwo.ad;
import sixtwo.ag;
import sixtwo.ag$rR;
import sixtwo.aj;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mT;

public class be
extends aj {
    private final String dBkfw;
    private final ad whlUn;
    private final ag jSGrk;
    private String HWjtp;
    private String UbxXC;
    private final mT SGppE;
    private final P WqZWe;
    private static long ukNDG;
    private static String[] IRMpT;
    private static String[] ZbaeG;
    private static Map Cpuuq;
    private static long[] naAAL;
    private static Integer[] ibjaS;
    private static Map yDulb;
    private static long bIldw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public be(float f2, float f3, float f4, String string) {
        long l = ukNDG ^ 0x3FA7745E654EL;
        super(f2, f3, 110.0f, 155.0f);
        this.HWjtp = "";
        this.UbxXC = "";
        this.SGppE = mT.cpz();
        this.IzFhM = f4;
        this.dBkfw = string;
        this.whlUn = new ad(lE.joxgd.bYM(7.0f));
        this.whlUn.lZ((String)((Object)be.Cy("s", (int)8591, (long)(0x5F345ECD94291566L ^ l))));
        this.whlUn.me((int)be.CB("r", (int)22149, (long)(0x3B07F7D018F8633DL ^ l)));
        this.jSGrk = new ag("", ag$rR.VdGoA);
        this.jSGrk.sX(25.0f, 75.0f);
        this.jSGrk.dY();
        this.whlUn.mg(this::Cr);
        this.WqZWe = new P((aj)this, (String)((Object)be.Cy("s", (int)31028, (long)(0x2282D58697964DDBL ^ l))), lf.gamnD);
        this.WqZWe.jb(this::Ct);
        this.WqZWe.tn(this.BcpIo);
        this.FHbTC = true;
    }

    static {
        Loader.doInit(be.class);
        be._c58d6e7f14e64e674356b8505b28b354();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    private native /* synthetic */ void Cs(lC var1, float var2);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native int CA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    @Override
    public native boolean eK(char var1);

    private native void Cr();

    private static native void _c58d6e7f14e64e674356b8505b28b354();

    private static native CallSite Cy(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite CB(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String Cw(int var0, long var1);

    private static native Object Cx(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException Cu(MatchException var0);

    private static native String Cv(byte[] var0);

    private native /* synthetic */ void Ct(P var1);

    private static native int Cz(int var0, long var1);
}
