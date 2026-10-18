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
import sixtwo.M;
import sixtwo.ak;
import sixtwo.az;
import sixtwo.cx;
import sixtwo.ig;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class u
extends ak<cx> {
    private static float JRfwq = 8.0f;
    private static float WWzqj = 15.0f;
    private static float qfiMB = 8.0f;
    private static float SqTZx = 6.0f;
    private static float IvdWr = 1.0f;
    private static float ZMUmJ = 8.0f;
    protected M iXBoo;
    private final rk OaOzh;
    private final rk KZHEU;
    private final ri LSdxq;
    private static String[] TVFTE;
    private static long YkUzi;
    private static long[] pJsjz;
    private static Integer[] xMYqg;
    private static Map tBsRS;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public u(cx cx2, az az2) {
        long l2 = YkUzi ^ 0x64DC8A976168L;
        super(cx2, az2);
        this.OaOzh = new rk((int)u.eF("q", (int)6058, (long)(0x4B6100F17C6EE382L ^ l2))).dhs(rj.XzDkv);
        this.KZHEU = new rk((int)u.eF("q", (int)21179, (long)(0x969D58EB154A692L ^ l2))).dhs(rj.XzDkv);
        ig ig2 = rD.dlM().bjG();
        this.LSdxq = new ri((int)u.eF("q", (int)21179, (long)(0x969D58EB154A692L ^ l2)), ig2.bir()).dfW(rj.UPXqT);
    }

    static {
        Loader.doInit(u.class);
        u._d36965ea9a8c2162459a6f556658d0f0();
    }

    protected native void ex(double var1, double var3);

    @Override
    public native float dn();

    protected native void ev(lC var1, float var2, float var3, float var4);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native void dY();

    private static native CallSite eF(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int eE(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException eC(MatchException var0);

    private static native int eD(int var0, long var1);

    public static native String[] eB();

    public static native void eA(String[] var0);

    protected native void eu();

    private native void ew(lC var1, float var2, float var3, boolean var4);

    private native boolean ey(double var1, double var3);

    private native boolean ez(double var1, double var3);

    private static native void _d36965ea9a8c2162459a6f556658d0f0();
}

