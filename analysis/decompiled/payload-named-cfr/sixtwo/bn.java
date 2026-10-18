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
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.cy;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.nd;
import sixtwo.rj;
import sixtwo.rk;

public class bn
extends az {
    private final nd oUrRP;
    private final az CRIaI;
    private final rk ThKyW;
    private static long WKWqD;
    private static String[] ZGPGj;
    private static String[] ojBkx;
    private static Map ubJdR;
    private static long[] jzoAa;
    private static Integer[] kwnpJ;
    private static Map uHZms;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bn(nd nd2, az az2) {
        long l2 = WKWqD ^ 0x2F68C2C6DD9L;
        this.ThKyW = new rk((int)bn.Fv("r", (int)5152, (long)(0x53FFB23390A66F06L ^ l2))).dhs(rj.UPXqT);
        this.oUrRP = nd2;
        this.CRIaI = az2;
    }

    static {
        Loader.doInit(bn.class);
        bn._ae95296b69fb76f64e5f8e3764d2f6be();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native void dY();

    private static native void _ae95296b69fb76f64e5f8e3764d2f6be();

    private native void Fj(double var1, double var3);

    private static native int Ft(int var0, long var1);

    private static native int Fu(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native nd Fk();

    private native /* synthetic */ void Fn(cy var1, cJ var2, cC var3, aj var4);

    private static native MatchException Fo(MatchException var0);

    private static native String Fp(byte[] var0);

    private static native CallSite Fs(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite Fv(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native az Fl();

    public native rk Fm();

    private static native String Fq(int var0, long var1);

    private static native Object Fr(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

