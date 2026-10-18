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
import sixtwo.Z;
import sixtwo.aA;
import sixtwo.ab;
import sixtwo.as;
import sixtwo.az;
import sixtwo.bw;
import sixtwo.by$sf;
import sixtwo.by$sg;
import sixtwo.iS;
import sixtwo.ig;
import sixtwo.iy;
import sixtwo.jk;
import sixtwo.l;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.nd;
import sixtwo.nf;
import sixtwo.ng;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class by
extends aA {
    private static mG KCPRy;
    private iy cyJzR;
    private nf MPHDO;
    private final ab Vldqu;
    private final lq AUvqD;
    private final as oZmkb;
    private final as OMsnK;
    private final as xwVXG;
    private final as QTCKH;
    private final l jGHQn;
    private final l xUJUF;
    private final l fHSrA;
    private mG QKlpg;
    private mG LwbUH;
    private mG EEeXl;
    private mG iUDgS;
    private List<as> nZzYS;
    private List<as> eiayC;
    private List<l> QAVAK;
    private final P cJZCT;
    private final P YwyKS;
    private final Z LoViH;
    private boolean KXDuV;
    private boolean cMiHK;
    private final rk Qgzvc;
    private final rk XnthW;
    private final rk afExC;
    private final rk AmKbT;
    private static long ziXVK;
    private static String[] cdfzx;
    private static String[] ZekGs;
    private static Map nWZwm;
    private static long[] nnWKW;
    private static Integer[] lqWIa;
    private static Map DSvvZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public by(iy iy2, nf nf2) {
        long l2 = ziXVK ^ 0x3D2F9DF592BBL;
        this.QKlpg = mG.hoGuU;
        this.LwbUH = mG.hoGuU;
        int[] nArray = bw.IJ();
        this.EEeXl = mG.hoGuU;
        this.iUDgS = mG.hoGuU;
        this.nZzYS = new ArrayList<as>();
        this.eiayC = new ArrayList<as>();
        this.QAVAK = new ArrayList<l>();
        this.cMiHK = false;
        this.Qgzvc = new rk((int)by.Km("u", (int)2270, (long)(0x5CAB8D430AE8288DL ^ l2))).dhs(rj.NJlxm);
        this.XnthW = new rk((int)by.Km("u", (int)28098, (long)(0x490D4C744E834D92L ^ l2))).dhs(rj.UPXqT);
        this.afExC = new rk((int)by.Km("u", (int)28098, (long)(0x490D4C744E834D92L ^ l2))).dhs(rj.UPXqT);
        this.AmKbT = new rk((int)by.Km("u", (int)28098, (long)(0x490D4C744E834D92L ^ l2))).dhs(rj.UPXqT);
        this.cyJzR = iy2;
        this.MPHDO = nf2;
        this.tJ(true);
        ig ig2 = rD.dlM().bjG();
        this.AUvqD = lE.WTzbi.bYM(6.0f);
        this.oZmkb = (as)new as().ro(this.AUvqD).rH((String)((Object)by.Kj("e", (int)29678, (long)(0x246ECC6FE6FC6E7AL ^ l2)))).rF(lf.kRmbJ).rG(7.0f).to(10.0f);
        this.jGHQn = new l((az)this.oZmkb, true).cP((String)((Object)by.Kj("e", (int)10539, (long)(0x21AA16980634B4A2L ^ l2)))).cQ(lE.WTzbi.bYM(6.0f)).cT(ld.all(3.0f));
        this.OMsnK = (as)new as().ro(this.AUvqD).rH((String)((Object)by.Kj("e", (int)29394, (long)(0x5BCB6B10B484EF5AL ^ l2)))).rF(lf.EqCfG).rG(7.0f).to(10.0f);
        this.xUJUF = new l((az)this.OMsnK, true).cP((String)((Object)by.Kj("e", (int)18447, (long)(0x5A8B3890E983D582L ^ l2)))).cQ(lE.WTzbi.bYM(6.0f)).cT(ld.all(3.0f));
        int[] nArray2 = nArray;
        try {
            this.xwVXG = (as)new as().ro(this.AUvqD).rH((String)((Object)by.Kj("e", (int)12565, (long)(0x67EA6D8F22EA2CA4L ^ l2)))).rF(lf.EqCfG).rG(7.0f).to(10.0f);
            this.fHSrA = new l((az)this.xwVXG, true).cP((String)((Object)by.Kj("e", (int)8580, (long)(0x6A9F03501D9FBC1EL ^ l2)))).cQ(lE.WTzbi.bYM(6.0f)).cT(ld.all(3.0f));
            this.QTCKH = (as)new as().ro(this.AUvqD).to(15.0f);
            this.cJZCT = ((P)new P(null, (String)((Object)by.Kj("e", (int)17822, (long)(0x19B69FF9746CD807L ^ l2))), lf.cuxpa).ja(ig2.biw().bhF())).hO(S.CLgKH);
            this.YwyKS = ((P)((P)new P(null, (String)((Object)by.Kj("e", (int)14237, (long)(0x519EAA2BCCDA2A1AL ^ l2))), lf.JHGge).ja(jk.mPXGi)).iY(jk.mPXGi)).hO(S.CLgKH);
            this.Vldqu = new ab(nf2.ctS()).lg(ig2.biq()).li(this::Ke);
            this.LoViH = new Z().kJ(lE.WTzbi.bYM(6.0f)).kK(3.0f).kL((int)by.Km("u", (int)31340, (long)(0x36516539635ADA38L ^ l2))).kM(rj.MBpuQ).kP((String)((Object)by.Kj("e", (int)25212, (long)(0x6BA25A20C603FFCCL ^ l2))));
            this.LoViH.kO(this.Jb());
            if (nArray2 != null) {
                iS.bwK("KuC8Mb");
            }
        }
        catch (MatchException matchException) {
            throw by.Kf(matchException);
        }
    }

    static {
        Loader.doInit(by.class);
        by._97df465657bfe5f2e6c05dff9ae6d725();
    }

    @Override
    public native float dn();

    public native rk JP();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native /* synthetic */ void Ke(ab var1);

    private native /* synthetic */ void Kd(P var1);

    private native void IV(lC var1);

    @Override
    protected native void bV(lC var1);

    public native by JS(iy var1);

    public native by IU(nf var1);

    public native nf Js();

    public native boolean JN();

    public native iy Jr();

    private static native void _97df465657bfe5f2e6c05dff9ae6d725();

    private native l Ja(int var1, ng var2, as var3);

    private native float Jg();

    private native float Jh(List<ng> var1, float var2, float var3);

    private native float Ji(nd var1, List<nd> var2, float var3, float var4);

    private static native MatchException Kf(MatchException var0);

    private static native CallSite Km(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite Kj(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native as IX(int var1, ng var2);

    private native float IY(lC var1, List<nd> var2, float var3, float var4, float var5, float var6, int[] var7);

    private native as IZ(int var1, nd var2);

    private native void Jc(mG var1, mG var2);

    private native float IW(lC var1, List<ng> var2, boolean var3, float var4, float var5, float var6, float var7, int[] var8);

    private native lc Jd(float var1);

    private native int Jb();

    private native lc Je(float var1);

    private native void Jf(double var1, double var3);

    public native l JB();

    public native mG JF();

    public native rk JQ();

    public native List<l> JI();

    private native String Jp(long var1);

    public native rk JR();

    public native mG JD();

    public native P JJ();

    public native by JT(mG var1);

    public native by JV(mG var1);

    public native l JA();

    public native by JW(mG var1);

    public native by JY(List<as> var1);

    private native sf Jo(List<nd> var1, float var2, float var3);

    public native by JX(List<as> var1);

    private static native String Kh(int var0, long var1);

    private native boolean Jk(nd var1);

    public native mG JC();

    public native as Jw();

    public native boolean JM();

    public native rk JO();

    public native mG JE();

    public native P JK();

    public native by JZ(List<l> var1);

    public native by Ka(boolean var1);

    public native by Kb(boolean var1);

    private static native Object Ki(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int Kk(int var0, long var1);

    private native boolean Jl(nd var1);

    private static native int Kl(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native List<nd> Jq();

    public native ab Jt();

    private native /* synthetic */ void Kc(P var1);

    public native lq Ju();

    public native as Jx();

    public native Z JL();

    public native by JU(mG var1);

    public native List<as> JG();

    public native List<as> JH();

    public native as Jy();

    private native sg Jn(List<ng> var1, boolean var2, float var3, float var4);

    public native l Jz();

    private static native String Kg(byte[] var0);

    public native as Jv();

    private native as Jj(nd var1);

    private native float Jm(sg var1, float var2);
}
