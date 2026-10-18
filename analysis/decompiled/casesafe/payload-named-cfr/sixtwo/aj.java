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
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public abstract class aj
extends az {
    public static float BxXRB = 7.5f;
    protected final rk nXrOu;
    protected final rk Rpjei;
    protected boolean FHbTC;
    protected float IzFhM;
    protected boolean fWqrr;
    protected boolean rjDwh;
    protected float dWFbt;
    protected float DHgsI;
    protected float bQoPs;
    protected static float TRsBX = 5.0f;
    protected boolean ImWAC;
    private static String[] XrosG;
    private static long xPnXy;
    private static long[] mJOOd;
    private static Integer[] PlKvG;
    private static Map Nupxb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _bb4768691cd64636a3a9c49f7274580e();

    public native float ow();

    protected aj(float f2, float f3, float f4, float f5) {
        long l2 = xPnXy ^ 0x73D0EEA6FE5CL;
        super(f2, f3, f4, f5);
        this.nXrOu = new rk((int)aj.oE("b", (int)13266, (long)(0x7E70EA3448AF52D3L ^ l2))).dhs(rj.NJlxm);
        this.Rpjei = new rk((int)aj.oE("b", (int)4740, (long)(0x717D3902F5237384L ^ l2))).dhs(rj.UPXqT);
        this.IzFhM = 2.0f;
        this.fWqrr = true;
        this.bQoPs = 7.5f;
        this.ImWAC = false;
    }

    protected aj() {
        this(0.0f, 0.0f, 0.0f, 0.0f);
    }

    static {
        Loader.doInit(aj.class);
        aj._bb4768691cd64636a3a9c49f7274580e();
    }

    public native void of(double var1, double var3);

    public native float ov();

    protected native float gc();

    public native rk op();

    public native <T extends aj> T on(float var1);

    public native boolean os();

    public native <T extends aj> T om(boolean var1);

    @Override
    public native boolean hc(double var1, double var3);

    protected native void oa();

    public native <T extends aj> T ob(boolean var1);

    @Override
    public native void dl(double var1, double var3, mA var5);

    public native <T extends aj> T ok(float var1);

    public native float or();

    protected native void oc(lC var1, Runnable var2, Runnable var3);

    public native boolean ox();

    protected native void gd(lC var1, Runnable var2);

    @Override
    protected native void bV(lC var1);

    protected native boolean oe();

    private native /* synthetic */ void oy(lC var1);

    public static native void oz(String[] var0);

    protected native rj ga();

    protected native float gb();

    public native void og(lC var1);

    public native boolean oh(double var1, double var3);

    protected native int fY();

    @Override
    public native void fX(lC var1);

    protected native rj fZ();

    @Override
    public native boolean oi();

    public static native String[] oA();

    @Override
    protected native boolean nZ();

    protected native boolean od();

    public native <T extends aj> T oj(boolean var1);

    public native rk oo();

    private static native int oC(int var0, long var1);

    private static native int oD(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native <T extends aj> T ol(boolean var1);

    public native boolean oq();

    private static native MatchException oB(MatchException var0);

    private static native CallSite oE(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native float ou();

    public native boolean ot();
}

