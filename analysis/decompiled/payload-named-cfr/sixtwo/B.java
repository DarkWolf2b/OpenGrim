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
import sixtwo.ak;
import sixtwo.ap;
import sixtwo.az;
import sixtwo.cH;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public class B
extends ak<cH> {
    private boolean ysrqV;
    private ap DhMoP;
    private final rk gcCYq;
    private static long tjVao;
    private static String[] QiwoD;
    private static String[] gWNPB;
    private static Map kqufA;
    private static long GlDJF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native String fl(int var0, long var1);

    public B(cH cH2, az az2) {
        long l2 = tjVao ^ 0x4C5063F7C93AL;
        super(cH2, az2);
        this.gcCYq = new rk((int)GlDJF).dhs(rj.UPXqT);
    }

    static {
        Loader.doInit(B.class);
        B._584b1d00d1b697f771c40bf5c46eca61();
    }

    @Override
    public native float dn();

    private static native String fk(byte[] var0);

    private static native CallSite fn(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private native /* synthetic */ void fi();

    private static native Object fm(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native void dY();

    private static native MatchException fj(MatchException var0);

    private static native void _584b1d00d1b697f771c40bf5c46eca61();
}

