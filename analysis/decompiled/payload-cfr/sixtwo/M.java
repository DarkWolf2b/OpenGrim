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
import sixtwo.ar;
import sixtwo.cG;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

public class M
extends aj {
    private final ar JtlXd;
    private boolean NHqfS;
    private final rk FzcKH;
    private static long zuYmc;
    private static String[] VuZjG;
    private static String[] fudtl;
    private static Map esSom;
    private static long DONRl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public M(float f2, float f3, float f4, cG cG2) {
        long l = zuYmc ^ 0x7188E88A9FA9L;
        super(f2, f3, 110.0f, 35.0f + ar.qF(!cG2.Wl(), true));
        this.FzcKH = new rk((int)DONRl).dhs(rj.NJlxm);
        this.IzFhM = f4;
        this.JtlXd = (ar)new ar(!cG2.Wl(), true).qH(() -> M.hh(cG2)).tn(this.BcpIo - 15.0f);
        this.hd(cG2.Wf());
        this.FHbTC = true;
    }

    static {
        Loader.doInit(M.class);
        M._b03c241b4e70435f6729a09a8681b768();
    }

    @Override
    public native boolean hc(double var1, double var3);

    public native void hd(mG var1);

    private static native MatchException hi(MatchException var0);

    @Override
    public native void dl(double var1, double var3, mA var5);

    private native void hb(lC var1, mG var2);

    private native lc ha();

    private static native /* synthetic */ void hh(cG var0);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native CallSite hm(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native mG he();

    @Override
    protected native void bV(lC var1);

    private native float hf();

    private static native void _b03c241b4e70435f6729a09a8681b768();

    private native /* synthetic */ void hg(lC var1, mG var2);

    private static native String hj(byte[] var0);

    private static native Object hl(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String hk(int var0, long var1);
}
