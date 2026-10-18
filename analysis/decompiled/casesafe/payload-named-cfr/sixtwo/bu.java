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
import sixtwo.P;
import sixtwo.aA;
import sixtwo.aj;
import sixtwo.iy;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class bu
extends aA {
    private iy gGApI;
    boolean EdPWB;
    private final rk KsVLK;
    private static long CRMjj;
    private static String[] GXAvt;
    private static String[] JWvHj;
    private static Map vzzuz;
    private static long epSLH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bu(iy iy2) {
        long l2 = CRMjj ^ 0x109414448D31L;
        this.EdPWB = false;
        this.KsVLK = new rk((int)epSLH).dhs(rj.UPXqT);
        this.gGApI = iy2;
        this.BcpIo = 20.0f;
        this.WjISQ = 20.0f;
        this.tI(false);
    }

    static {
        Loader.doInit(bu.class);
        bu._a07a3316d0a56375ce22c208f90d8aba();
    }

    private static native /* synthetic */ void In(iy var0, P var1);

    private static native CallSite Is(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native P Id(aj var1, iy var2);

    @Override
    public native boolean oi();

    @Override
    protected native void bV(lC var1);

    private static native void _a07a3316d0a56375ce22c208f90d8aba();

    public native boolean Ii();

    public native rk Ij();

    private static native /* synthetic */ void Im(iy var0, P var1);

    private native P Ic(aj var1, iy var2);

    private native P Ie(aj var1, iy var2);

    private static native String Ip(byte[] var0);

    private static native /* synthetic */ void Il(P var0, Boolean var1);

    public native bu Ig(boolean var1);

    private native void Ia();

    private static native /* synthetic */ void Ik(iy var0, P var1);

    public native bu If(iy var1);

    private static native String Iq(int var0, long var1);

    public native iy Ih();

    private static native Object Ir(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException Io(MatchException var0);

    private native void Ib();
}

