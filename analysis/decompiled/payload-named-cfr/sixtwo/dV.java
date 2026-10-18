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
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class dV
extends gg {
    private final cC iNKRn;
    private int gShhH;
    private static long pPdLC;
    private static String HnRzm;
    private static long[] iuIKj;
    private static Integer[] zwVyv;
    private static Map NlXtA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _f41f24ca18273d66e52f46718dd5f912();

    public dV() {
        long l2 = pPdLC ^ 0x619A2EBCD3D6L;
        super(gf.aZL((int)dV.aqj("g", (int)6809, (long)(0x2A2936841AC00EEDL ^ l2)), false, gh.qBzlZ));
        this.iNKRn = new cC(this, mr.clS(new int[]{(int)dV.aqj("g", (int)25009, (long)(0x146F40E06FC475C4L ^ l2)), (int)dV.aqj("g", (int)27746, (long)(0x8E6A65A34227811L ^ l2)), (int)dV.aqj("g", (int)12819, (long)(0xBCD70CF7E68A665L ^ l2))})).Vy(1.0).Vw(30.0).Vx(150.0).VA(90.0).Vz(HnRzm);
        this.gShhH = (int)dV.aqj("g", (int)18355, (long)(0x4765DEAA46C653C4L ^ l2));
    }

    static {
        Loader.doInit(dV.class);
        dV._f41f24ca18273d66e52f46718dd5f912();
    }

    public native cC aqd();

    @Override
    public native void aaj();

    public native int aqe();

    private static native String aqg(byte[] var0);

    private static native MatchException aqf(MatchException var0);

    private static native int aqi(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aqh(int var0, long var1);

    private static native CallSite aqj(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    public native void YO();
}

