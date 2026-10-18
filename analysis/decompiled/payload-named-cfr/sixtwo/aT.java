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
import sixtwo.az;
import sixtwo.kW;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.ri;
import sixtwo.rk;

public class aT
extends az {
    private static float neTon = 10.0f;
    private static float xNvRr = 8.0f;
    private final rk dETbP;
    private final ri hbCCQ;
    private final kW zGBCZ;
    private boolean tzvyR;
    private boolean ecHlG;
    private static long HjqKT;
    private static String kgKhi;
    private static long[] iFifw;
    private static Integer[] qtMBd;
    private static Map ukivL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aT() {
        long l2 = HjqKT ^ 0x33B2770C546BL;
        this.dETbP = new rk((int)aT.za("v", (int)4127, (long)(0x1E5B304FE844AB08L ^ l2)));
        this.hbCCQ = new ri((int)aT.za("v", (int)24135, (long)(0x60FC7EF5AB586551L ^ l2)));
        this.zGBCZ = new kW(mG.UhgnI, mG.UhgnI);
    }

    static {
        Loader.doInit(aT.class);
        aT._292906081032bf46121a3a79a384cbfd();
    }

    private static native CallSite za(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _292906081032bf46121a3a79a384cbfd();

    @Override
    protected native void bV(lC var1);

    public native aT yV(boolean var1, boolean var2);

    private static native MatchException yW(MatchException var0);

    private static native int yY(int var0, long var1);

    private static native String yX(byte[] var0);

    private static native int yZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

