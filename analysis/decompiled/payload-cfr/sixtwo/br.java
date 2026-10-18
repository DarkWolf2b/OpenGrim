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
import java.util.Optional;
import native.Loader;
import sixtwo.O;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.bm;
import sixtwo.bn;
import sixtwo.bo;
import sixtwo.bp;
import sixtwo.bq;
import sixtwo.bz;
import sixtwo.cy;
import sixtwo.ig;
import sixtwo.iy;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mA;
import sixtwo.nc;
import sixtwo.nd;
import sixtwo.ne;
import sixtwo.nf;
import sixtwo.ng;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class br
extends aj {
    private final rk jUBZP;
    private final List<az> HCkpb;
    private final ah pVdHS;
    private nf hQySR;
    private boolean dgquq;
    private bo ndiLl;
    private bm GNISa;
    private cy LYYTu;
    private cy pxwWX;
    private cy FHLen;
    private bn FRxyo;
    private bp DihOV;
    private bq ToVbN;
    private final O pWDHg;
    private float FObrV;
    private static long hDPVr;
    private static String[] MRsWc;
    private static String[] MeRqB;
    private static Map kzoMe;
    private static long[] fWbAC;
    private static Integer[] AYJyS;
    private static Map MQBha;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _cec499d427fc658d5969d7b4553e7195();

    private native float GE();

    public br(nf nf2) {
        long l = hDPVr ^ 0x6CCB55681B3EL;
        this.jUBZP = new rk((int)br.Hl("u", (int)25511, (long)(0x9FF5A9C73A1A1EFL ^ l))).dhs(rj.MBpuQ);
        this.HCkpb = new ArrayList<az>();
        this.pVdHS = new ah();
        bz bz2 = bz.KH();
        lc lc2 = bz2.KI();
        this.FObrV = lc2.bXz() + 10.0f;
        this.MCnYt = this.FObrV + 24.0f;
        this.pNyTQ = lc2.bXG();
        this.BcpIo = 140.0f;
        this.WjISQ = lc2.bXI() + 10.0f + bz2.KJ().bXI();
        this.jUBZP.dhe(this.MCnYt);
        this.IzFhM = 2.0f;
        ig ig2 = rD.dlM().bjG();
        this.pWDHg = O.hE((String)((Object)br.Hi("h", (int)3032, (long)(0x273056FAA345227DL ^ l)))).je(true).jf(ld.M).jk(ig2.bio().coe(0.9f)).jq(ig2.bis()).jr(ig2.bis().cog(0.85f)).jb(this::Hd);
        this.GC(nf2);
        this.FHbTC = true;
    }

    public br() {
        this(null);
    }

    static {
        Loader.doInit(br.class);
        br._cec499d427fc658d5969d7b4553e7195();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    public native bp GT();

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native List<ng> GB(List<ng> var1);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private native float GG();

    private static native CallSite Hi(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    protected native float gb();

    private native /* synthetic */ void GZ(iy var1);

    @Override
    public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

    @Override
    public native boolean eK(char var1);

    public native ah GL();

    private native float GD();

    @Override
    protected native boolean od();

    public native void Gn(float var1, float var2, float var3);

    public native br Go(nf var1);

    private static native CallSite Hl(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native List<az> GK();

    public native bm GO();

    public native float GW();

    private native /* synthetic */ boolean GX(ng var1);

    private static native String Hf(byte[] var0);

    private native ne Gz(ne var1);

    private native /* synthetic */ void Hc(lC var1);

    private native /* synthetic */ boolean GY(nd var1);

    private static native NumberFormatException He(NumberFormatException var0);

    public native cy GR();

    private native void GC(nf var1);

    private native float GI(az var1);

    public native bo GN();

    private native /* synthetic */ void Ha(iy var1);

    private native Optional<iy> Gs();

    public native bn GS();

    private native /* synthetic */ void Hb(lC var1, float var2);

    private static native Object Hh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void Hd(O var1);

    private static native int Hk(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native rk GJ();

    private native List<nd> GA(List<nd> var1);

    private native nd Gy(nd var1);

    public native nf GM();

    public native cy GP();

    public native cy GQ();

    private native void GH(float var1);

    private static native int Hj(int var0, long var1);

    private native long Gu(String var1) throws NumberFormatException;

    private native void Gp();

    private static native String Hg(int var0, long var1);

    private native float GF();

    private native nc Gx(nc var1);

    public native bq GU();

    private native boolean Gr();

    private native ne Gw(String var1) throws NumberFormatException;

    public native O GV();

    private native String Gv(String var1);

    private native void Gq();

    private native long Gt(String var1) throws NumberFormatException;
}
