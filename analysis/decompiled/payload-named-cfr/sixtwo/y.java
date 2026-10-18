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
import sixtwo.cD;
import sixtwo.ig;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class y
extends ak<cD> {
    private final ri JtQii;
    private final rk BGcCS;
    private rk jtBbb;
    private int bBkRV;
    private static long FIUJu;
    private static long[] gwmJQ;
    private static Integer[] FsLFL;
    private static Map rdASZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public y(cD cD2, az az2) {
        long l2 = FIUJu ^ 0x4B413AF12FF6L;
        super(cD2, az2);
        this.BGcCS = new rk((int)y.eX("i", (int)11942, (long)(0x300A1603508F9734L ^ l2))).dhs(rj.UPXqT);
        this.jtBbb = new rk((int)y.eX("i", (int)30026, (long)(0x7D760A034E1F4CDAL ^ l2)), 1.0f).dhs(rj.UPXqT);
        ig ig2 = rD.dlM().bjG();
        this.JtQii = new ri((int)y.eX("i", (int)16966, (long)(0x3A4A2395F499FBD7L ^ l2)), ig2.bio().cob(0.75f)).dfW(rj.UPXqT);
    }

    static {
        Loader.doInit(y.class);
        y._0eea007e4caf408f20df803bce2cdfc4();
    }

    @Override
    public native float dn();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    public native rk eQ();

    public native y eS(rk var1);

    public native y eT(int var1);

    private static native int eV(int var0, long var1);

    public native int eR();

    public native ri eO();

    private static native MatchException eU(MatchException var0);

    private static native int eW(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite eX(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void eN(lC var1);

    public native rk eP();

    private static native void _0eea007e4caf408f20df803bce2cdfc4();
}

