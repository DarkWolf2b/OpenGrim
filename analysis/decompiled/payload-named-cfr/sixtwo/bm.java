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
import sixtwo.az;
import sixtwo.cJ;
import sixtwo.cy;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.nc;
import sixtwo.rj;
import sixtwo.rk;

public class bm
extends az {
    private final nc lBVqw;
    private final az XOmFR;
    private final rk rYqmq;
    private static boolean mddAz;
    private static long ILQMi;
    private static String[] GaHJp;
    private static String[] TyKLp;
    private static Map KTJbD;
    private static long[] kVLgE;
    private static Integer[] ONeTB;
    private static Map bLkZb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bm(nc nc2, az az2) {
        long l2 = ILQMi ^ 0x753F7CC823CFL;
        this.rYqmq = new rk((int)bm.Fi("u", (int)28095, (long)(0x6EF95CEB0B24B3A0L ^ l2))).dhs(rj.UPXqT);
        this.lBVqw = nc2;
        this.XOmFR = az2;
    }

    static {
        Loader.doInit(bm.class);
        bm._620c6a3cba54f7577c9dfae4624e2c56();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native void dY();

    private native void ET(double var1, double var3);

    private static native void _620c6a3cba54f7577c9dfae4624e2c56();

    public native nc EU();

    private static native Object Fe(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException Fb(MatchException var0);

    private native /* synthetic */ void EX(cy var1, cJ var2, cJ var3, aj var4);

    private static native CallSite Fi(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native void EY(boolean var0);

    public static native boolean EZ();

    private static native String Fd(int var0, long var1);

    public native rk EW();

    private static native String Fc(byte[] var0);

    public static native boolean Fa();

    private static native CallSite Ff(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int Fg(int var0, long var1);

    private static native int Fh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native az EV();
}

