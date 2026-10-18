/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.P;
import sixtwo.S;
import sixtwo.ac;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.ap;
import sixtwo.az;
import sixtwo.bb;
import sixtwo.cB;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cy;
import sixtwo.id;
import sixtwo.ie;
import sixtwo.if;
import sixtwo.ig;
import sixtwo.ih;
import sixtwo.ij;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class aZ
extends aj {
    private static int Bntgy;
    private final List<az> IkudM;
    private final List<aj> ODKnU;
    private final ah GGNlF;
    private ac epPDf;
    private ac iBZhf;
    private ac chGPO;
    private final P MKuzJ;
    private final P zQIvK;
    private final P yiyEl;
    private final P YWarX;
    private static cG yAejq;
    private static cG ERseG;
    private static cG YtBwS;
    private static cG gipIr;
    private static cG klcWm;
    private static cC PqAQr;
    private static cC KKBtz;
    private static cC Wklho;
    private static cC hkeHc;
    private static cC jkJBT;
    private static cC waETu;
    private static cC QPFQS;
    private static cG cnpgV;
    private static cG hiZZI;
    private static boolean VeSmn;
    private int cMafA;
    private int vylxx;
    private int XDEoP;
    private int YYAes;
    private boolean GUOUm;
    private final List<ri> VKbkM;
    private final rk ltNwj;
    private final rk HgcQO;
    private final rk TkQJN;
    private static long lVKmB;
    private static String[] MhSRE;
    private static String[] qslyP;
    private static Map qhReV;
    private static long[] ClfhO;
    private static Integer[] waiDL;
    private static Map uNytp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aZ(float f2) {
        long l2 = lVKmB ^ 0x5CF0B18B9F20L;
        this.IkudM = new ArrayList<az>();
        this.ODKnU = new ArrayList<aj>();
        this.cMafA = 0;
        this.vylxx = 0;
        this.XDEoP = -1;
        this.YYAes = 1;
        this.GUOUm = false;
        this.VKbkM = new ArrayList<ri>();
        this.ltNwj = new rk((int)aZ.Bc("m", (int)7219, (long)(0x3CBA76E76E0C83A6L ^ l2))).dhs(rj.MBpuQ);
        this.HgcQO = new rk((int)aZ.Bc("m", (int)19427, (long)(0x2410B789C8B1540CL ^ l2))).dhs(rj.MBpuQ);
        this.TkQJN = new rk((int)aZ.Bc("m", (int)18025, (long)(0x191BFB83AC35D9C9L ^ l2))).dhs(rj.MBpuQ);
        this.BcpIo = 127.0f;
        this.WjISQ = 170.0f;
        this.IzFhM = f2;
        this.GGNlF = new ah();
        ig ig2 = rD.dlM().bjG();
        this.MKuzJ = ((P)new P(null, (String)((Object)aZ.AZ("f", (int)10033, (long)(0x31E19FF59F873DF7L ^ l2))), lf.NCCOy).ja(ig2.biw().bhF())).hO(S.CLgKH);
        this.zQIvK = ((P)((P)new P(null, (String)((Object)aZ.AZ("f", (int)31575, (long)(0x1853CE22CDFA6194L ^ l2))), lf.JHGge).ja(jk.mPXGi)).iY(jk.mPXGi)).hO(S.CLgKH);
        this.yiyEl = ((P)new P(null, (String)((Object)aZ.AZ("f", (int)14637, (long)(0xEEF92E24A90A3F1L ^ l2))), lf.ucWHb).ja(ig2.biw().bhF())).hO(S.CLgKH).jb(this::AU);
        this.YWarX = ((P)new P(null, (String)((Object)aZ.AZ("f", (int)13369, (long)(0x699351DE97E32EEEL ^ l2))), lf.blMVg).ja(ig2.biw().bhF())).hO(S.CLgKH).jb(this::AT);
        this.Az(ig2);
        this.AA(ig2);
        this.AB(ig2);
        this.FHbTC = true;
    }

    static {
        Loader.doInit(aZ.class);
        aZ._9e6362dc46ed1b1e0e02573f56dfb361();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    private static native /* synthetic */ void AM(ap var0, Boolean var1);

    private native ie AD();

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native /* synthetic */ void AH(cy var0, aj var1);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private native void AA(ig var1);

    private static native /* synthetic */ void AN(ap var0, ij var1, P var2);

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    private native if AE();

    private native void Ao(float var1);

    private native /* synthetic */ void AO(bb var1);

    private static native String AX(int var0, long var1);

    private static native CallSite AZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object AY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException AV(MatchException var0);

    @Override
    public native boolean eK(char var1);

    private static native /* synthetic */ void AL(ij var0, ap var1, P var2);

    private native void AB(ig var1);

    private native float Am();

    private native float An();

    private native int Ap(int var1);

    private static native CallSite Bc(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void AT(P var1);

    private native void Aj();

    private native void Ai(lC var1, List<bb<ig>> var2, int var3, float var4);

    private native void Ak();

    private native void Ah(lC var1, float var2, float var3);

    private native float Al();

    private native /* synthetic */ void AU(P var1);

    private native void Az(ig var1);

    private native void Aq();

    private native void Av(aj var1);

    private native /* synthetic */ void AG(ap var1);

    private native /* synthetic */ void AP(Boolean var1);

    private native void Aw(ap var1);

    private native /* synthetic */ void AK(bb var1, bb var2);

    private native boolean Ax(double var1, double var3);

    private static native int Bb(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void AR(lC var1);

    private native void Ay();

    private static native int Ba(int var0, long var1);

    private native boolean As(int var1);

    private native void AC(cB var1);

    private static native /* synthetic */ boolean AS(bb var0);

    private native void Au(aj var1);

    private native /* synthetic */ void AJ(cy var1, aj var2);

    private native void Ar();

    private static native String AW(byte[] var0);

    private static native /* synthetic */ void AI(aj var0, Boolean var1);

    private native id AF();

    private native /* synthetic */ void AQ(lC var1, ih var2);

    private static native void _9e6362dc46ed1b1e0e02573f56dfb361();

    @Override
    protected native boolean od();

    @Override
    public native <T extends aj> T oj(boolean var1);

    private native void At(bb<ig> var1);
}

