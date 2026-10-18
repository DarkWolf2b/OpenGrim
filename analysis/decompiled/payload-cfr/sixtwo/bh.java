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
import sixtwo.J;
import sixtwo.ab;
import sixtwo.aj;
import sixtwo.bg;
import sixtwo.gc;
import sixtwo.gg;
import sixtwo.jb;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class bh
extends aj {
    private J uWBQz;
    private final ab aYcjN;
    private final ab GluTT;
    private final rk qNHZV;
    private final rk ENqLr;
    private final gg puHqY;
    private static long iyHFM;
    private static String[] VhSun;
    private static String[] GKLQn;
    private static Map YBvpH;
    private static long[] lTlRr;
    private static Integer[] dpRyX;
    private static Map DUMCq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bh(float f2, float f3, float f4, gg gg2) {
        Object object;
        lq lq2;
        long l;
        block6: {
            int n;
            block4: {
                gc gc2;
                block5: {
                    l = iyHFM ^ 0x4E3EAD020B78L;
                    super(f2, f3, 110.0f, 80.0f);
                    this.IzFhM = f4;
                    this.puHqY = gg2;
                    this.GluTT = new ab(gg2.bai()).li(arg_0 -> bh.Dm(gg2, arg_0));
                    this.aYcjN = new ab(gg2.baj()).li(arg_0 -> bh.Dl(gg2, arg_0));
                    this.ENqLr = new rk((int)bh.Du("s", (int)26729, (long)(0x776D151C40F0590DL ^ l)), this.BcpIo).dhs(rj.NJlxm);
                    int n2 = bg.Dd();
                    lq2 = lE.WTzbi.bYM(7.0f);
                    gc2 = gg2.baf();
                    try {
                        try {
                            n = gc2.aZf();
                            if (n2 != 0) break block4;
                            if (n == 0) break block5;
                        }
                        catch (MatchException matchException) {
                            throw bh.Dn(matchException);
                        }
                        object = bh.Dr("y", (int)21931, (long)(0x60B2B913D1E85213L ^ l));
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw bh.Dn(matchException);
                    }
                }
                n = gc2.aZh();
            }
            object = jb.byM(n);
        }
        String string = object;
        float f5 = lq2.cao(string) + 7.0f;
        this.qNHZV = new rk((int)bh.Du("s", (int)11925, (long)(0x7060D01806E01FF0L ^ l)), f5).dhs(rj.UPXqT);
        this.BcpIo = Math.max(110.0f, this.bQoPs + lq2.cao((String)((Object)bh.Dr("y", (int)16278, (long)(0x254CDC4423A6B829L ^ l)))) + this.bQoPs + f5 + this.bQoPs);
        this.FHbTC = true;
    }

    static {
        Loader.doInit(bh.class);
        bh._e08a76d36db0a6ffacf3e754f4e33af5();
    }

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native void _e08a76d36db0a6ffacf3e754f4e33af5();

    private static native int Dt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String Dp(int var0, long var1);

    private static native Object Dq(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void Dj(double var1, double var3);

    private static native MatchException Dn(MatchException var0);

    private static native String Do(byte[] var0);

    private native /* synthetic */ void Dk(lC var1);

    private static native CallSite Dr(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int Ds(int var0, long var1);

    private static native CallSite Du(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ void Dl(gg var0, ab var1);

    private static native /* synthetic */ void Dm(gg var0, ab var1);
}
