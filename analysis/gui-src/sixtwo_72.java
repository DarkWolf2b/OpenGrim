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
import sixtwo.ad;
import sixtwo.aj;
import sixtwo.bc$sa;
import sixtwo.bc$sb;
import sixtwo.bl;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mZ;
import sixtwo.rj;
import sixtwo.rk;

public class bc
extends aj {
    private final int[] fZkgb;
    private final int[] jEyGM;
    private final int[] rHkCQ;
    private final ad UfSoS;
    private final bc$sb[] HukvJ;
    private final rk wGCjB;
    private int gXowZ;
    private static long UIUKy;
    private static String[] CKdwN;
    private static String[] foWfj;
    private static Map egBGR;
    private static long[] ZCGIw;
    private static Integer[] HkqAD;
    private static Map CcEgB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static native /* synthetic */ float BD(bc var0);

    public bc() {
        long l2 = UIUKy ^ 0x1B1440D561A9L;
        this.fZkgb = mZ.csh((String)((Object)bc.BK("f", (int)14155, (long)(0x6EA5391802432842L ^ l2))));
        this.jEyGM = mZ.csh((String)((Object)bc.BK("f", (int)5930, (long)(0x2CFA42ACD5C40820L ^ l2))));
        this.rHkCQ = mZ.csh((String)((Object)bc.BK("f", (int)2664, (long)(0x2130278349869563L ^ l2))));
        this.HukvJ = new bc$sb[bc.BN("k", (int)25163, (long)(0x20A3CB2A80991D29L ^ l2))];
        this.gXowZ = -1;
        lc lc2 = bl.Ex().Ey();
        lq lq2 = lE.WTzbi.bYM(9.0f);
        this.bQoPs = 5.0f;
        this.BcpIo = lc2.bXH() / 2.25f;
        this.WjISQ = lq2.caw() * 2.0f + this.bQoPs * 2.0f;
        float f2 = lc2.bXF() + jf.bAH(this.BcpIo, lc2.bXH());
        float f3 = lc2.bXG() - this.bQoPs * 2.0f;
        this.MCnYt = f2;
        this.pNyTQ = f3;
        this.UfSoS = new ad(lE.WTzbi.bYM(9.0f));
        this.UfSoS.lZ((String)((Object)bc.BK("f", (int)27198, (long)(0x72D2A946419D7536L ^ l2))));
        this.UfSoS.me((int)bc.BN("k", (int)5575, (long)(0xE5EB661F9C0EAA6L ^ l2)));
        this.UfSoS.mg(this::Br);
        this.wGCjB = new rk((int)bc.BN("k", (int)13217, (long)(0x13CAEEA2C0D3CCC2L ^ l2)), this.WjISQ).dhs(rj.NJlxm);
    }

    static {
        Loader.doInit(bc.class);
        bc._c3587351bd7b3f25ef6a6c2432b254b1();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    static native /* synthetic */ float BE(bc var0);

    static native /* synthetic */ rk BC(bc var0);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native void _c3587351bd7b3f25ef6a6c2432b254b1();

    private static native CallSite BN(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    public native boolean eK(char var1);

    private native /* synthetic */ void BB(lC var1);

    public native ad Bv();

    public native rk Bx();

    public native int By();

    private static native int BL(int var0, long var1);

    private static native String BH(byte[] var0);

    private static native CallSite BK(MethodHandles.Lookup var0, String var1, MethodType var2);

    static native /* synthetic */ float BF(bc var0);

    private static native /* synthetic */ boolean Bz(Vec2f var0, bc$sb var1);

    private static native MatchException BG(MatchException var0);

    public native int[] Bt();

    private static native /* synthetic */ int BA(bc$sa var0, bc$sa var1);

    public native int[] Bu();

    private static native String BI(int var0, long var1);

    private static native Object BJ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native bc$sb[] Bw();

    public native int[] Bs();

    private static native int BM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void Br();
}

