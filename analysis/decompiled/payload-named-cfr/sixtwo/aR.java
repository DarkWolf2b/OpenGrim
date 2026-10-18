/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.aK;
import sixtwo.aP;
import sixtwo.aR$rY;
import sixtwo.aV;
import sixtwo.aj;
import sixtwo.ap;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mA;
import sixtwo.mu;
import sixtwo.pF;
import sixtwo.py;
import sixtwo.rj;
import sixtwo.rk;

public class aR
extends az {
    private static float hzbfp = 4.0f;
    private static float Mmoww = 10.0f;
    private static float SKUcd = 7.5f;
    private final rk Dtfzy;
    private final mu<aj> ApoXb;
    private final aP xhIWB;
    private final az znWUp;
    private final aV LlOkR;
    private final aK IctAz;
    private ap BWexP;
    private pF cPSPd;
    private float CHJJM;
    private boolean AnANT;
    private boolean wpCQg;
    private float LqCSm;
    private float XpSnM;
    private boolean GxspQ;
    private static boolean pSyCD;
    private static long qFOrL;
    private static String FssQU;
    private static long[] nJxdY;
    private static Integer[] oOUFn;
    private static Map lLSaC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aR(float f2, float f3) {
        long l2 = qFOrL ^ 0x1BDB60078D1CL;
        this.Dtfzy = new rk((int)aR.yL("a", (int)5865, (long)(0x455B7E03099C9296L ^ l2))).dhs(rj.NJlxm);
        this.ApoXb = new mu();
        this.cPSPd = pF.JMCCO;
        this.BcpIo = 175.0f;
        this.WjISQ = f3;
        this.CHJJM = f2;
        this.xhIWB = new aP();
        this.znWUp = new aR$rY(this).sP((int)aR.yL("a", (int)30249, (long)(0x16C4553E6C7DF257L ^ l2))).sS(true).sQ(false);
        this.LlOkR = new aV().zc(this::yb);
        this.IctAz = new aK(this::yj, this::yn, this::yl, this::yk, this::ym, this::ya);
        this.xhIWB.xt(this.cPSPd);
        this.xhIWB.dY();
        this.AnANT = true;
    }

    static {
        Loader.doInit(aR.class);
        aR._b932e47186be4624228d4ae33ae42086();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    private native boolean yl();

    private native void yh();

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native List<py> yi();

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    public native aV ys();

    public native boolean yx();

    public native float yz();

    public native float yy();

    public native boolean yw();

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    private native void yb(py var1, double var2, double var4);

    @Override
    public native boolean eK(char var1);

    @Override
    public native boolean oi();

    @Override
    protected native boolean nZ();

    private static native void _b932e47186be4624228d4ae33ae42086();

    private native void xV(lC var1, Runnable var2, Runnable var3);

    private native void xZ(double var1, double var3);

    private native void ye(aj var1);

    public native aR yg(boolean var1);

    public native aP yq();

    private native pF yj();

    private native void ya(double var1, double var3);

    private native boolean xY(double var1, double var3);

    private native float xW();

    private native boolean yf();

    private native boolean yk();

    private native float xX();

    private static native void yd(aR var0, lc var1);

    public native rk yo();

    public native mu<aj> yp();

    private native void ym(boolean var1);

    public native az yr();

    public native aK yt();

    public native ap yu();

    private static native CallSite yL(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native float yv();

    public static native void yc();

    private native void yn(pF var1);

    private static native MatchException yH(MatchException var0);

    public native boolean yA();

    public static native boolean yF();

    public static native boolean yG();

    private native /* synthetic */ void yD(lC var1);

    private static native String yI(byte[] var0);

    private static native int yJ(int var0, long var1);

    private static native int yK(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void yB(ap var1);

    public static native void yE(boolean var0);

    private native /* synthetic */ void yC(lC var1, float var2, float var3);
}

