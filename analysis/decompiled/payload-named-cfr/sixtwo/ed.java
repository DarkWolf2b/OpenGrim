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
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class ed
extends gg {
    private final cC BpiUS;
    private final cJ HfVsU;
    private static long PQbtp;
    private static String XgLBB;
    private static long[] fokqH;
    private static Integer[] RqWGM;
    private static Map TVqrW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ed() {
        long l2 = PQbtp ^ 0x167A689017C2L;
        super(gf.aZL((int)ed.arH("o", (int)4470, (long)(0x6B0DB5299D77E42FL ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[ed.arH("o", (int)3315, (long)(0x3114FC3AC69679FFL ^ l2))];
        nArray[0] = (int)ed.arH("o", (int)19133, (long)(0x2DD09D30E66ABFF1L ^ l2));
        nArray[1] = (int)ed.arH("o", (int)25337, (long)(0x6BF8C27C210F1781L ^ l2));
        nArray[2] = (int)ed.arH("o", (int)20366, (long)(0x424046B7F0BEBAB4L ^ l2));
        nArray[3] = (int)ed.arH("o", (int)30813, (long)(0x11B3B2C4C4790D40L ^ l2));
        nArray[4] = (int)ed.arH("o", (int)7567, (long)(0x4B9D55A5F07868F8L ^ l2));
        nArray[5] = (int)ed.arH("o", (int)20015, (long)(0x205B94C0F3A3B54L ^ l2));
        nArray[ed.arH("o", (int)11227, (long)(0x3252048114F45EBEL ^ l2))] = (int)ed.arH("o", (int)27922, (long)(0x8490512C209181CL ^ l2));
        nArray[ed.arH("o", (int)4279, (long)(0x53C90F4F42A865CBL ^ l2))] = (int)ed.arH("o", (int)17326, (long)(0x5E7C3CD5309136FCL ^ l2));
        this.BpiUS = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(4.0).Vx(100.0).VA(4.0).Vz(XgLBB);
        int[] nArray2 = new int[ed.arH("o", (int)4279, (long)(0x53C90F4F42A865CBL ^ l2))];
        nArray2[0] = (int)ed.arH("o", (int)16812, (long)(0x6461E42C3305B499L ^ l2));
        nArray2[1] = (int)ed.arH("o", (int)20874, (long)(0x3CFA779875824F7L ^ l2));
        nArray2[2] = (int)ed.arH("o", (int)16459, (long)(0x7E8789FBDF61351BL ^ l2));
        nArray2[3] = (int)ed.arH("o", (int)17837, (long)(0x6B2EFFA716CB0DBL ^ l2));
        nArray2[4] = (int)ed.arH("o", (int)301, (long)(0x5DCA9AAFEBDAF470L ^ l2));
        nArray2[5] = (int)ed.arH("o", (int)25337, (long)(0x6BF8C27C210F1781L ^ l2));
        nArray2[ed.arH("o", (int)11227, (long)(0x3252048114F45EBEL ^ l2))] = (int)ed.arH("o", (int)32135, (long)(0x7D1685384F9C08A0L ^ l2));
        this.HfVsU = new cJ(this, mr.clS(nArray2)).WE(false);
    }

    static {
        Loader.doInit(ed.class);
        ed._a79940e05944d2ef07f1382edf83c8fc();
    }

    @Override
    public native void aaj();

    public native cJ arC();

    public native cC arB();

    private static native void _a79940e05944d2ef07f1382edf83c8fc();

    private static native CallSite arH(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException arD(MatchException var0);

    private static native int arF(int var0, long var1);

    private static native int arG(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String arE(byte[] var0);
}

