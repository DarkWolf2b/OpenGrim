/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;
import sixtwo.P;
import sixtwo.S;
import sixtwo.ac$rM;
import sixtwo.ai;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.cB;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mG;

public class ap
extends aj {
    private final List<az> pdPyE = new ArrayList<az>();
    private Runnable mjUwZ = ap::qz;
    private boolean IwVym = true;
    private boolean DfYWQ;
    private boolean hVUFA = false;
    private float LnWsJ;
    private static long RwtlO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _5de6c00e5d605ce0b57385d96b626989();

    public native ap qe(int[] var1, String var2, ac$rM var3);

    public native ap qi(int[] var1, lf var2, ai var3);

    public ap() {
        this(0.0f, 0.0f, 90.0f);
    }

    public ap(float f2, float f3) {
        this(f2, f3, 90.0f);
    }

    public ap(float f2, float f3, float f4, float f5) {
        this.MCnYt = f2;
        this.pNyTQ = f3;
        this.BcpIo = f4;
        this.IzFhM = f5;
        this.FHbTC = true;
    }

    public ap(float f2, float f3, float f4) {
        this(f2, f3, f4, 2.0f);
    }

    static {
        Loader.doInit(ap.class);
        ap._5de6c00e5d605ce0b57385d96b626989();
    }

    @Override
    public native boolean hc(double var1, double var3);

    public native ap qk(String var1, lf var2, ai var3);

    @Override
    protected native void oa();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    private native /* synthetic */ void qs(ai var1, P var2);

    public native ap qc(int[] var1);

    private native /* synthetic */ void qt(ai var1, P var2);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    public native ap qb(String var1, String var2, lf var3, float var4, ac$rM var5);

    public native ap ql(String var1, lf var2, S var3, ai var4);

    public native ap qr(float var1);

    @Override
    protected native boolean oe();

    private native /* synthetic */ void qx(lC var1);

    private native /* synthetic */ void qy(lC var1);

    private native /* synthetic */ void qw(ai var1, P var2);

    private static native /* synthetic */ void qz();

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    @Override
    public native boolean eK(char var1);

    @Override
    protected native boolean od();

    @Override
    public native <T extends aj> T oj(boolean var1);

    public native ap pV(az var1);

    public native ap pU(cB var1);

    private native float pT(az var1, boolean var2);

    private native float pS(boolean var1);

    public native ap qo(Runnable var1);

    public native ap qa(String var1, String var2, lf var3, ac$rM var4);

    public native ap qh(int[] var1, String var2, lf var3, float var4, ac$rM var5);

    public native ap qn(String var1, lf var2, mG var3, mG var4, ai var5);

    public native ap qg(int[] var1, String var2, lf var3, ac$rM var4);

    public native ap qj(P var1);

    public native ap qp(boolean var1);

    public native ap pZ(String var1, String var2, lf var3);

    public native ap qq();

    private static native MatchException qA(MatchException var0);

    private native /* synthetic */ void qu(ai var1, P var2);

    public native ap qd(int[] var1, String var2);

    public native ap pW(String var1);

    public native ap qf(int[] var1, String var2, lf var3);

    public native ap pX(String var1, String var2);

    public native ap qm(String var1, lf var2, S var3, mG var4, ai var5);

    private native /* synthetic */ void qv(ai var1, P var2);

    public native ap pY(String var1, String var2, ac$rM var3);
}

