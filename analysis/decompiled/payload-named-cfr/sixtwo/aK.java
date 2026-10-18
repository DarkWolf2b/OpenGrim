/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.function.BiConsumer;
import java.util.function.Consumer;
import java.util.function.Supplier;
import native.Loader;
import sixtwo.Q;
import sixtwo.aL;
import sixtwo.aQ;
import sixtwo.az;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.pF;
import sixtwo.rj;
import sixtwo.rk;

public class aK
extends az {
    private static float dWavN = 5.0f;
    private static float tdaYU = 5.0f;
    private final Q qNUBO;
    private final Q whyjC;
    private final aQ qfhpW;
    private final BiConsumer<Double, Double> Ghcea;
    private final Supplier<Boolean> dTQSz;
    private final Supplier<Boolean> annmg;
    private final rk EocAk;
    private final rk PTlYD;
    private static long EMUUd;
    private static String[] lNnKh;
    private static String[] XoVOd;
    private static Map hPqfH;
    private static long[] ehHHq;
    private static Integer[] AUHtk;
    private static Map ojyYD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aK(Supplier<pF> supplier, Consumer<pF> consumer, Supplier<Boolean> supplier2, Supplier<Boolean> supplier3, Consumer<Boolean> consumer2, BiConsumer<Double, Double> biConsumer) {
        long l2 = EMUUd ^ 0x3BC35C6EA17FL;
        this.qNUBO = (Q)new Q().io(lf.XANQE).je(true).jf(ld.all(5.0f));
        this.whyjC = (Q)new Q().io(lf.ZEjXc).je(true).jf(ld.all(5.0f)).jd((String)((Object)aK.wL("y", (int)12071, (long)(0x599D30A1E0AA519DL ^ l2))), new String[]{aK.wL("y", (int)16897, (long)(0x54B2BB141D13BCBAL ^ l2))});
        String string = aL.wV();
        try {
            this.EocAk = new rk((int)aK.wO("t", (int)31459, (long)(0x1C8DB996380604C3L ^ l2))).dhs(rj.MBpuQ);
            this.PTlYD = new rk((int)aK.wO("t", (int)11154, (long)(0x23E9B3BC8F8655B3L ^ l2))).dhs(rj.MBpuQ);
            this.qfhpW = new aQ(supplier, consumer);
            this.dTQSz = supplier2;
            this.annmg = supplier3;
            this.Ghcea = biConsumer;
            this.whyjC.jb(arg_0 -> aK.wG(consumer2, supplier3, arg_0));
            if (iS.bwL() == null) {
                aL.wU("g2Opsb");
            }
        }
        catch (MatchException matchException) {
            throw aK.wH(matchException);
        }
    }

    static {
        Loader.doInit(aK.class);
        aK._a6ae06a24283e9a410a2f355a06a8809();
    }

    @Override
    public native float dn();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native void _a6ae06a24283e9a410a2f355a06a8809();

    private static native CallSite wL(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ void wG(Consumer var0, Supplier var1, Q var2);

    private static native CallSite wO(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException wH(MatchException var0);

    private static native String wI(byte[] var0);

    private static native String wJ(int var0, long var1);

    private static native Object wK(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int wM(int var0, long var1);

    private native void wF(lC var1, float var2, float var3, float var4, rk var5, boolean var6);

    private native void wE();

    private static native int wN(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

