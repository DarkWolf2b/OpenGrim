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
import sixtwo.gd;
import sixtwo.gg;
import sixtwo.iS;
import sixtwo.ig;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class J
extends aj {
    private final ri WfQYT;
    private final ri BVWWc;
    private final ri wLrDR;
    private final rk DJXfP;
    private final rk ynopW;
    private final rk ePBBz;
    private final gg GLrDe;
    private int nbZRc;
    private static int[] ijbRx;
    private static long oGMgf;
    private static String[] FlSmk;
    private static String[] FalZQ;
    private static Map NLFhJ;
    private static long[] sNGZe;
    private static Integer[] XsKuU;
    private static Map IgGRb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public J(float f2, float f3, float f4, gg gg2) {
        float f5;
        CallSite callSite;
        rk rk2;
        rk rk3;
        boolean bl2;
        long l2 = oGMgf ^ 0x63F0FC237390L;
        super(f2, f3, 130.0f, 75.0f);
        this.IzFhM = f4;
        this.GLrDe = gg2;
        int[] nArray = J.gu();
        ig ig2 = rD.dlM().bjG();
        try {
            bl2 = gg2.baf().aZg() == gd.zlSAY;
        }
        catch (MatchException matchException) {
            throw J.gv(matchException);
        }
        boolean bl3 = bl2;
        mG mG2 = ig2.bio().cob(0.9f);
        mG mG3 = ig2.bio().cob(0.7f);
        try {
            rk rk4;
            J j2 = this;
            rk3 = rk4;
            rk2 = rk4;
            callSite = J.gC("s", (int)24601, (long)(0x68D9CCAFD93CA07DL ^ l2));
            f5 = bl3 ? 1.0f : 0.0f;
        }
        catch (MatchException matchException) {
            throw J.gv(matchException);
        }
        rk3((int)callSite, f5);
        j2.ePBBz = rk2.dhs(rj.UPXqT);
        this.DJXfP = new rk((int)J.gC("s", (int)14281, (long)(0x4696037C4DE477AEL ^ l2))).dhs(rj.UPXqT);
        this.ynopW = new rk((int)J.gC("s", (int)26935, (long)(0x171345BA6814A951L ^ l2)), 1.0f).dhs(rj.UPXqT);
        this.WfQYT = new ri((int)J.gC("s", (int)26935, (long)(0x171345BA6814A951L ^ l2)), ig2.bio().cob(0.5f)).dfW(rj.UPXqT);
        this.BVWWc = new ri((int)J.gC("s", (int)26935, (long)(0x171345BA6814A951L ^ l2)), bl3 ? mG3 : mG2).dfW(rj.UPXqT);
        this.wLrDR = new ri((int)J.gC("s", (int)26935, (long)(0x171345BA6814A951L ^ l2)), bl3 ? mG2 : mG3).dfW(rj.UPXqT);
        this.FHbTC = true;
        if (nArray != null) {
            iS.bwK("DeBmPb");
        }
    }

    static {
        Loader.doInit(J.class);
        J._1a6f26e3e4126fbd19826f02aaf7c123();
    }

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    public native ri gk();

    public native gg gp();

    public native rk gm();

    public native rk gn();

    public static native void gt(int[] var0);

    public native rk go();

    @Override
    protected native void bV(lC var1);

    public static native int[] gu();

    public native ri gl();

    private native /* synthetic */ void gs(lC var1);

    private static native void _1a6f26e3e4126fbd19826f02aaf7c123();

    private static native CallSite gC(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException gv(MatchException var0);

    public native ri gj();

    public native J gr(int var1);

    public native int gq();

    private static native String gx(int var0, long var1);

    private static native Object gy(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int gB(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite gz(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String gw(byte[] var0);

    private static native int gA(int var0, long var1);
}

