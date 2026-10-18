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
import sixtwo.az;
import sixtwo.cJ;
import sixtwo.ig;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class v
extends ak<cJ> {
    private final rk nJwUL;
    private final rk qUvbd;
    private final ri PJdEn;
    private static long GNbqf;
    private static long[] jHfmI;
    private static Integer[] sTOPP;
    private static Map mIorq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public v(cJ cJ2, az az2) {
        long l2 = GNbqf ^ 0x216B30455316L;
        super(cJ2, az2);
        this.nJwUL = new rk((int)v.eJ("x", (int)25122, (long)(0x1FE1899BA68C4A31L ^ l2))).dhs(rj.XzDkv);
        this.qUvbd = new rk((int)v.eJ("x", (int)11831, (long)(0x1060F08A7BE28625L ^ l2))).dhs(rj.XzDkv);
        ig ig2 = rD.dlM().bjG();
        this.PJdEn = new ri((int)v.eJ("x", (int)11831, (long)(0x1060F08A7BE28625L ^ l2)), ig2.bir()).dfW(rj.UPXqT);
    }

    static {
        Loader.doInit(v.class);
        v._61adedb93467316401c89223941063a6();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native void dY();

    private static native int eI(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int eH(int var0, long var1);

    private static native CallSite eJ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException eG(MatchException var0);

    private static native void _61adedb93467316401c89223941063a6();
}

