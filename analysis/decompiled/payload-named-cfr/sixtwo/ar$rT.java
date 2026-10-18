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
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

class ar$rT {
    private final rk djTyU;
    private final rk WfbkF;
    private final rk PYnOc;
    private final rk AtkkH;
    private final mG sBzpH;
    private final int RshAW;
    private boolean HEngx;
    private static long hCewy;
    private static long[] cXHaj;
    private static Integer[] tlgoG;
    private static Map OsgTH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private ar$rT(mG mG2) {
        long l2 = hCewy ^ 0x551842701B7BL;
        this.djTyU = new rk((int)ar$rT.dnc("l", (int)4833, (long)(0x6A37947008BEFA43L ^ l2))).dhs(rj.UPXqT);
        this.WfbkF = new rk((int)ar$rT.dnc("l", (int)31529, (long)(0x188F294D2079388L ^ l2))).dhs(rj.UPXqT);
        this.PYnOc = new rk((int)ar$rT.dnc("l", (int)22178, (long)(0x1180D31074333E01L ^ l2))).dhs(rj.MBpuQ);
        this.AtkkH = new rk((int)ar$rT.dnc("l", (int)14751, (long)(0x4BC4D69AAC84513FL ^ l2))).dhs(rj.MBpuQ);
        this.HEngx = true;
        this.sBzpH = mG2;
        this.RshAW = mG2.coh();
    }

    static {
        Loader.doInit(ar$rT.class);
        ar$rT._41499fd393f6cea041c30dfbc357fbb5();
    }

    private native rk dmT();

    private native mG dmW();

    private native rk dmU();

    private native rk dmV();

    private native int dmX();

    private native boolean dmY();

    private native void dmZ(boolean var1);

    private static native int dna(int var0, long var1);

    private static native int dnb(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _41499fd393f6cea041c30dfbc357fbb5();

    private native rk dmS();

    private static native CallSite dnc(MethodHandles.Lookup var0, String var1, MethodType var2);
}

