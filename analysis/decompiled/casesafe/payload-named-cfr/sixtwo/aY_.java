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
import sixtwo.af;
import sixtwo.aj;
import sixtwo.am;
import sixtwo.bl;
import sixtwo.iM;
import sixtwo.ig;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mG;
import sixtwo.rD;

public abstract class aY
extends aj {
    int[] RigKG;
    iM SpjTW;
    am FaAqV;
    af BZqcU;
    af Uzust;
    af RCCrz;
    private static String[] KHdFB;
    private static long jbWwp;
    private static String[] dfpPk;
    private static String[] mcgFu;
    private static Map ZKveJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aY(float f2, int[] nArray, iM iM2) {
        long l2 = jbWwp ^ 0x7B0FEAE802FAL;
        this.BcpIo = 290.0f;
        this.WjISQ = 165.0f;
        lc lc2 = bl.Ex().Ey();
        float f3 = lc2.bXF() + jf.bAH(this.BcpIo, lc2.bXH());
        float f4 = lc2.bXG() + jf.bAH(this.WjISQ, lc2.bXI());
        this.MCnYt = f3;
        this.pNyTQ = f4;
        this.IzFhM = f2;
        this.FHbTC = true;
        this.RigKG = nArray;
        this.SpjTW = iM2;
        this.FaAqV = (am)new am(iM2.btw()).sX(65.0f, 110.0f);
        ig ig2 = rD.dlM().bjG();
        mG mG2 = ig2.biq().cob(0.3f);
        this.BZqcU = (af)new af().nj(ld.all(3.0f)).nb(String.valueOf(iM2.buh())).nd((String)((Object)aY.Ag("m", (int)20158, (long)(0x4DD340F3BD2DB99CL ^ l2)))).ni(mG2).sX(65.0f, 40.0f);
        this.Uzust = (af)new af().nj(ld.all(3.0f)).nb(jf.bAT(iM2.bul())).nd((String)((Object)aY.Ag("m", (int)25030, (long)(0x577C7A8F88BC16E5L ^ l2)))).ni(mG2).sX(65.0f, 40.0f);
        this.RCCrz = (af)new af().nj(ld.all(3.0f)).nb(String.valueOf(iM2.buj())).nd((String)((Object)aY.Ag("m", (int)27983, (long)(0x1FE70F065CD41A6EL ^ l2)))).ni(mG2).sX(65.0f, 40.0f);
    }

    static {
        Loader.doInit(aY.class);
        aY._4b4858161f15e00bdcc164d6c97f7d0d();
    }

    protected abstract void sv(lC var1);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private static native String Ae(int var0, long var1);

    public native iM zU();

    public native int[] zT();

    public native am zV();

    public native af zW();

    private static native CallSite Ag(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native af zX();

    public native af zY();

    private native /* synthetic */ void zZ(lC var1);

    public static native void Aa(String[] var0);

    public static native String[] Ab();

    private static native MatchException Ac(MatchException var0);

    private static native String Ad(byte[] var0);

    private static native Object Af(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _4b4858161f15e00bdcc164d6c97f7d0d();
}

