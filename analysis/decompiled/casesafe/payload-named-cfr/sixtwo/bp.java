/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.P;
import sixtwo.S;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.cJ;
import sixtwo.cy;
import sixtwo.ig;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.nd;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bp
extends az {
    private static float AMFXd = 12.0f;
    private static float WJzgl = 0.5f;
    private static float vNQUo = 4.0f;
    private static float lSqcN = 12.5f;
    private final List<nd> sKQDB;
    private final az IYJTL;
    private final rk LTCPm;
    private final rk kSenW;
    private final rk NMQry;
    private final P sIfhE;
    private final P hgCRo;
    private final ah keiTB;
    private final Map<nd, rk> DZPiP;
    private static long fGoeO;
    private static String[] FQbHd;
    private static String[] jzZEi;
    private static Map qDzlt;
    private static long[] eNOwA;
    private static Integer[] QiEfT;
    private static Map TrcZL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private native /* synthetic */ void FL(double var1, double var3, nd var5, P var6);

    private native void FF(double var1, double var3, nd var5);

    public bp(List<nd> list, az az2) {
        long l2 = fGoeO ^ 0x638512B828CEL;
        this.LTCPm = new rk((int)bp.FU("n", (int)190, (long)(0x1575444A8CDC3BACL ^ l2))).dhs(rj.UPXqT);
        this.kSenW = new rk((int)bp.FU("n", (int)190, (long)(0x1575444A8CDC3BACL ^ l2))).dhs(rj.NJlxm);
        this.NMQry = new rk((int)bp.FU("n", (int)190, (long)(0x1575444A8CDC3BACL ^ l2))).dhs(rj.UPXqT);
        this.keiTB = new ah();
        this.DZPiP = new IdentityHashMap<nd, rk>();
        this.sKQDB = list;
        this.IYJTL = az2;
        ig ig2 = rD.dlM().bjG();
        this.sIfhE = ((P)new P(null, (String)((Object)bp.FR("d", (int)29479, (long)(0x245B84E2EFE53169L ^ l2))), lf.cuxpa).ja(ig2.biw().bhF())).hO(S.CLgKH);
        this.hgCRo = ((P)((P)new P(null, (String)((Object)bp.FR("d", (int)19586, (long)(0x4DC7FAA61780EC9L ^ l2))), lf.JHGge).ja(jk.mPXGi)).iY(jk.mPXGi)).hO(S.CLgKH);
    }

    static {
        Loader.doInit(bp.class);
        bp._7dcd2c33d80d702490ca9fdc4ce2514e();
    }

    @Override
    public native float dn();

    private static native int FS(int var0, long var1);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native CallSite FR(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private static native void _7dcd2c33d80d702490ca9fdc4ce2514e();

    private native boolean FG(String var1, boolean var2, nd var3);

    private native rk FH(nd var1);

    private static native String FO(byte[] var0);

    private static native int FT(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void FM(cy var1, cJ var2, nd var3, boolean var4, aj var5);

    private static native Object FQ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException FN(MatchException var0);

    private static native String FP(int var0, long var1);

    private static native CallSite FU(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void FK(nd var1, P var2);

    private native void FI(double var1, double var3, nd var5);

    private native float FJ();
}

