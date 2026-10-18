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
import sixtwo.iS;
import sixtwo.j;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.m;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

public abstract class k
extends az {
    protected final az FmeTj;
    protected final boolean IrXIR;
    protected Object ezaOY;
    protected m wBqMs;
    protected j Ngfhl;
    protected ld cSEXm;
    protected mG xetOQ;
    protected mG aFoRu;
    protected float mOGYZ;
    protected float dUPLX;
    protected float qbars;
    private final int jbaJU;
    private int VaPJD;
    protected final rk oxWkM;
    private static int[] luVPb;
    private static long QcyNt;
    private static long[] CXETa;
    private static Integer[] KYVtu;
    private static Map fXlqx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _11afa03fa5b7215e4f7fccd03514f06f();

    protected k(az az2) {
        this(az2, false);
    }

    protected k(az az2, boolean bl2) {
        long l2 = QcyNt ^ 0x7F2898A6FF7CL;
        this.wBqMs = m.rxuUu;
        this.Ngfhl = j.LjCBS;
        this.cSEXm = ld.all(5.0f);
        this.mOGYZ = 5.0f;
        int[] nArray = k.cJ();
        this.dUPLX = 10.0f;
        this.qbars = 63.75f;
        this.VaPJD = (int)k.cN("p", (int)27149, (long)(0x4342516BD7A199BFL ^ l2));
        this.oxWkM = new rk(this.VaPJD).dhs(rj.MBpuQ);
        this.FmeTj = az2;
        this.IrXIR = bl2;
        this.jbaJU = (int)k.cN("p", (int)25351, (long)(0x48855E446B90B4L ^ l2));
        this.sS(true);
        int[] nArray2 = nArray;
        try {
            if (iS.bwL() == null) {
                k.cI(new int[1]);
            }
        }
        catch (MatchException matchException) {
            throw k.cK(matchException);
        }
    }

    static {
        Loader.doInit(k.class);
        k._11afa03fa5b7215e4f7fccd03514f06f();
    }

    public native ld cs();

    public native k ca(int var1);

    protected abstract void cd(lC var1, float var2, float var3);

    public native j cr();

    protected native mG ce(float var1);

    protected abstract float cb();

    private native boolean ch(lC var1);

    private native void cl(lC var1, float var2);

    public native az cn();

    public native mG ct();

    protected native mG cf(float var1);

    private native void cj(lC var1, float var2, float var3, mG var4);

    public native Object cp();

    public native float cv();

    private native void ck(lC var1, float var2, mG var3);

    protected abstract float cc();

    public native float cw();

    private native void ci(float var1, float var2, float var3, float var4, float var5);

    public native mG cu();

    public native float cx();

    public native boolean co();

    private static native CallSite cN(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException cK(MatchException var0);

    public static native int[] cJ();

    public native int cy();

    public native k cD(j var1);

    public native rk cA();

    public native k cC(m var1);

    public native k cF(float var1);

    private static native int cL(int var0, long var1);

    public native int cz();

    public native k cE(float var1);

    private native /* synthetic */ void cH(boolean[] var1, lC var2);

    private static native int cM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native k cB(Object var1);

    public static native void cI(int[] var0);

    public native k cG(float var1);

    public native k bY(mG var1);

    public native k bX(mG var1);

    private native void cg(lC var1, float var2);

    public native k bZ(ld var1);

    @Override
    protected final native void bV(lC var1);

    public native boolean bW(lC var1);

    private native float cm();

    public native m cq();
}

