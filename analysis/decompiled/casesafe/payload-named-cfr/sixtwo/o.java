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
import sixtwo.ak;
import sixtwo.az;
import sixtwo.cC;
import sixtwo.cy;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

/*
 * Illegal identifiers - consider using --renameillegalidents true
 */
public class o
extends ak<cC> {
    private boolean bukXl;
    private final rk rCPHm;
    private final rk ibThS;
    private static String ePmoh;
    private static long Cbosm;
    private static String[] HsJpN;
    private static String[] ihrIv;
    private static Map lsTbb;
    private static long[] tYXzh;
    private static Integer[] JUjbf;
    private static Map xRAUH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public o(cC cC2, az az2) {
        long l2 = Cbosm ^ 0x5EAC9E149CC4L;
        super(cC2, az2);
        this.rCPHm = new rk((int)o.dy("a", (int)12434, (long)(0x7966AF6DB47FC1F2L ^ l2))).dhs(rj.MBpuQ);
        this.ibThS = new rk((int)o.dy("a", (int)23154, (long)(0x706ECB24E97B2B1AL ^ l2))).dhs(rj.UPXqT);
    }

    static {
        Loader.doInit(o.class);
        o._061d8d509950ae59162f9813975ed3d5();
    }

    public static native void dp(String var0);

    @Override
    public native float dn();

    private static native int dw(int var0, long var1);

    private static native String dt(int var0, long var1);

    @Override
    public native void dl(double var1, double var3, mA var5);

    private static native CallSite dv(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String ds(byte[] var0);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native /* synthetic */ void do(cy var1, aj var2);

    @Override
    protected native void bV(lC var1);

    public static native String dq();

    private static native int dx(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite dy(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void dj();

    private static native Object du(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native NumberFormatException dr(NumberFormatException var0);

    private static native void _061d8d509950ae59162f9813975ed3d5();
}

