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
import sixtwo.Q;
import sixtwo.R;
import sixtwo.aY;
import sixtwo.iM;
import sixtwo.ig;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mI$uP;
import sixtwo.od;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class aX
extends aY {
    Q hFPQK;
    Q zUhaJ;
    R HShKv;
    rk iSNKO;
    rk azWgX;
    private static long GzpjW;
    private static String[] Jditj;
    private static String[] jUEck;
    private static Map cIalU;
    private static long[] pXBsX;
    private static Integer[] oqkKa;
    private static Map HaYXc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aX(float f2, int[] nArray, iM iM2) {
        long l = GzpjW ^ 0x3DEBC44FE98CL;
        super(f2, nArray, iM2);
        this.iSNKO = new rk((int)aX.zS("q", (int)10509, (long)(0x2632ECDF01B64F8CL ^ l))).dhs(rj.UPXqT);
        this.azWgX = new rk((int)aX.zS("q", (int)1405, (long)(0x36526396703BE3D2L ^ l))).dhs(rj.UPXqT);
        ig ig2 = rD.dlM().bjG();
        this.hFPQK = (Q)new Q().io(lf.zNsnc).jb(this::zK).jh(iM2.btX()).ji((int)aX.zS("q", (int)506, (long)(0x311246B677F1674BL ^ l))).jk(ig2.bio()).jm(jk.jEkxo).sX(10.0f, 10.0f);
        this.zUhaJ = (Q)new Q().io(lf.EQqYg).jb(this::zJ).jh(iM2.btY()).ji((int)aX.zS("q", (int)6696, (long)(0x2CD4AF2F59F37C9CL ^ l))).jk(ig2.bio()).jm(jk.mPXGi).sX(10.0f, 10.0f);
        this.HShKv = (R)new R(od.cBP((String)((Object)aX.zP("h", (int)10050, (long)(0x7388E5AF5255AB41L ^ l))), mI$uP.drPFI)).jb(this::zI).sX(12.0f, 12.0f);
    }

    static {
        Loader.doInit(aX.class);
        aX._051ffc366d146155f9f57f4c960f671f();
    }

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void sv(lC var1);

    private native void zy();

    private native void zx();

    public native Q zz();

    private native void zw();

    private native /* synthetic */ void zF(iM var1);

    private static native int zR(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void zI(R var1);

    private static native CallSite zS(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native Q zA();

    private static native int zQ(int var0, long var1);

    private native /* synthetic */ void zJ(Q var1);

    public native R zB();

    private native /* synthetic */ Void zE(boolean var1, boolean var2, Throwable var3);

    private static native String zM(byte[] var0);

    private static native Object zO(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String zN(int var0, long var1);

    private static native CallSite zP(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native rk zC();

    private native /* synthetic */ void zK(Q var1);

    public native rk zD();

    private native /* synthetic */ Void zG(boolean var1, boolean var2, Throwable var3);

    private static native MatchException zL(MatchException var0);

    private native /* synthetic */ void zH(iM var1);

    private static native void _051ffc366d146155f9f57f4c960f671f();
}
