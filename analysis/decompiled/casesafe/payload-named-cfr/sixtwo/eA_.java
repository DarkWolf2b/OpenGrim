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
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class eA
extends gg {
    private final cC uYjwj;
    private static long lClZL;
    private static long[] GMvGu;
    private static Integer[] oOQKe;
    private static Map ldHfb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eA() {
        long l2 = lClZL ^ 0x479EF8469BFAL;
        super(gf.aZL((int)eA.avq("b", (int)1330, (long)(0x179F5DBC3554EDC0L ^ l2)), false, gh.xgeEn));
        this.uYjwj = new cC(this, mr.clS(new int[]{(int)eA.avq("b", (int)11690, (long)(0x3AFE72D36EF9C55CL ^ l2)), (int)eA.avq("b", (int)1763, (long)(0x5D46F12898576E14L ^ l2)), (int)eA.avq("b", (int)21921, (long)(0x3B1DA2B7271D3D54L ^ l2)), (int)eA.avq("b", (int)24792, (long)(0x7CF2F0FC1176882BL ^ l2)), (int)eA.avq("b", (int)5475, (long)(0x2C3FB0B2C332FD97L ^ l2))})).Vy(0.05).Vw(0.25).Vx(2.0).VA(0.25);
    }

    static {
        Loader.doInit(eA.class);
        eA._5e7cb2aeed2a4e96452d61e493ee8585();
    }

    private static native void _5e7cb2aeed2a4e96452d61e493ee8585();

    @hG
    public native void avm(gH.th var1);

    private static native int avo(int var0, long var1);

    private static native MatchException avn(MatchException var0);

    private static native int avp(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite avq(MethodHandles.Lookup var0, String var1, MethodType var2);
}

