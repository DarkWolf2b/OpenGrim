/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.ibm.icu.impl.Pair
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import com.ibm.icu.impl.Pair;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.Map;
import java.util.Random;
import native.Loader;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.cz;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.lA;
import sixtwo.mA;
import sixtwo.mV;
import sixtwo.mV$uX;
import sixtwo.mr;
import sixtwo.og;
import sixtwo.pe;
import sixtwo.rD;

public class fH
extends gg
implements lA {
    private final cF Rscmj;
    private final cC ZIaqt;
    private final cC gywhN;
    private final cC PBZrn;
    private final cJ MTMNI;
    private final cC sZDRi;
    private final cJ mcave;
    private final cC OYFtx;
    private final ct objof;
    private final cu iznEa;
    private final cu loMXv;
    private final cJ NURBy;
    private final cJ xZaeo;
    private final cC RpKwK;
    private final cJ maPUy;
    private final cG SGIKe;
    private final cv uOqTy;
    private final cw ZuWds;
    private final cw AcJyQ;
    private final cw jdxNC;
    private final ct pNnvx;
    private final cu ClWRz;
    private final cu MEfRH;
    private final cz hjLsk;
    private final ct mMTcv;
    private final cu KLTHe;
    private final cu rglYd;
    private final ct uqpih;
    private final cu BtIDI;
    private final cu rSkxN;
    private final cJ sYBzd;
    private final cJ AwNUJ;
    private final cG UxVgK;
    private final cJ BkSML;
    private final cD gMClj;
    private final og JdqkJ;
    private final pe rWorD;
    private final mV iywBD;
    private LivingEntity JXduj;
    private Pair<ClientPlayerEntity, ArrayList<Vec3d>> CBxhI;
    private float KIJQr;
    private float oURtD;
    private static long gKjqs;
    private static String[] ZxCgN;
    private static String[] UHjXn;
    private static Map VEcSt;
    private static long[] fPCKo;
    private static Integer[] YaVXm;
    private static Map BtGgs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native cC aTE();

    private static native CallSite aUA(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cu aTZ();

    public native cG aTO();

    public native cu aTY();

    public native cu aUb();

    private static native CallSite aUx(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cC aTA();

    public native cu aTV();

    public native ct aTX();

    public native cJ aUd();

    public native cJ aUe();

    public native cG aUf();

    public native cw aTS();

    public native cv aTP();

    public native cu aTI();

    public native cz aTW();

    public native cJ aUg();

    @hG
    public native void aTw(go.sX var1);

    public native ct aTT();

    private static native MatchException aUt(MatchException var0);

    private native /* synthetic */ Boolean aUr();

    public native cD aUh();

    public native cC aTC();

    public native cC aTM();

    public native cC aTB();

    public native cJ aTN();

    public native cw aTR();

    public native cu aTU();

    public native cF aTz();

    public native cJ aTD();

    public native cJ aTF();

    public native cC aTG();

    public native cu aTJ();

    public native cJ aTL();

    public native cu aUc();

    public native ct aTH();

    @hG
    public native void aTv(gH.th var1);

    public native cJ aTK();

    @hG
    public native void aTy(gk var1);

    public native cw aTQ();

    private native /* synthetic */ Boolean aUs();

    private native LivingEntity aTx();

    public native ct aUa();

    private static native String aUv(int var0, long var1);

    public native float aUo();

    public native Pair<ClientPlayerEntity, ArrayList<Vec3d>> aUm();

    public native LivingEntity aUl();

    private static native int aUy(int var0, long var1);

    private static native int aUz(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ boolean aUp(Entity var1);

    public native og aUi();

    private native /* synthetic */ Boolean aUq(ClientPlayerEntity var1);

    public native float aUn();

    private static native String aUu(byte[] var0);

    public native mV aUk();

    public native pe aUj();

    private static native Object aUw(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public fH() {
        long l2 = gKjqs ^ 0xEF0928E2225L;
        super(gf.aZL((int)8, false, gh.xwjCw));
        int[] nArray = new int[6];
        nArray[0] = (int)84;
        nArray[1] = (int)97;
        nArray[2] = (int)114;
        nArray[3] = (int)103;
        nArray[4] = (int)101;
        nArray[5] = (int)116;
        this.Rscmj = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        this.ZIaqt = new cC(this, mr.clS(new int[]{(int)82, (int)97, (int)110, (int)103, (int)101})).Vy(0.1).Vw(3.0).Vx(10.0).VA(6.0).Vz((String)((Object)" blocks"));
        this.gywhN = new cC(this, mr.clS(new int[]{(int)70, (int)79, (int)86})).Vy(1.0).Vw(10.0).Vx(360.0).VA(180.0).Vz((String)((Object)" deg"));
        int[] nArray2 = new int[13];
        nArray2[0] = (int)82;
        nArray2[1] = (int)97;
        nArray2[2] = (int)110;
        nArray2[3] = (int)100;
        nArray2[4] = (int)111;
        nArray2[5] = (int)109;
        nArray2[6] = (int)105;
        nArray2[7] = (int)122;
        nArray2[8] = (int)97;
        nArray2[9] = (int)116;
        nArray2[10] = (int)105;
        nArray2[11] = (int)111;
        nArray2[12] = (int)110;
        this.PBZrn = new cC(this, mr.clS(nArray2)).Vy(1.0).Vw(0.0).Vx(100.0).VA(5.0).Vz((String)((Object)" %"));
        int[] nArray3 = new int[10];
        nArray3[0] = (int)72;
        nArray3[1] = (int)111;
        nArray3[2] = (int)114;
        nArray3[3] = (int)105;
        nArray3[4] = (int)122;
        nArray3[5] = (int)111;
        nArray3[6] = (int)110;
        nArray3[7] = (int)116;
        nArray3[8] = (int)97;
        nArray3[9] = (int)108;
        this.MTMNI = new cJ(this, mr.clS(nArray3)).WE(true);
        int[] nArray4 = new int[16];
        nArray4[0] = (int)72;
        nArray4[1] = (int)111;
        nArray4[2] = (int)114;
        nArray4[3] = (int)105;
        nArray4[4] = (int)122;
        nArray4[5] = (int)111;
        nArray4[6] = (int)110;
        nArray4[7] = (int)116;
        nArray4[8] = (int)97;
        nArray4[9] = (int)108;
        nArray4[10] = (int)32;
        nArray4[11] = (int)83;
        nArray4[12] = (int)112;
        nArray4[13] = (int)101;
        nArray4[14] = (int)101;
        nArray4[15] = (int)100;
        this.sZDRi = new cC(this, mr.clS(nArray4)).Vy(0.1).Vw(0.1).Vx(20.0).VA(1.0);
        int[] nArray5 = new int[8];
        nArray5[0] = (int)86;
        nArray5[1] = (int)101;
        nArray5[2] = (int)114;
        nArray5[3] = (int)116;
        nArray5[4] = (int)105;
        nArray5[5] = (int)99;
        nArray5[6] = (int)97;
        nArray5[7] = (int)108;
        this.mcave = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[14];
        nArray6[0] = (int)86;
        nArray6[1] = (int)101;
        nArray6[2] = (int)114;
        nArray6[3] = (int)116;
        nArray6[4] = (int)105;
        nArray6[5] = (int)99;
        nArray6[6] = (int)97;
        nArray6[7] = (int)108;
        nArray6[8] = (int)32;
        nArray6[9] = (int)83;
        nArray6[10] = (int)112;
        nArray6[11] = (int)101;
        nArray6[12] = (int)101;
        nArray6[13] = (int)100;
        this.OYFtx = new cC(this, mr.clS(nArray6)).Vy(0.1).Vw(0.1).Vx(20.0).VA(1.0);
        int[] nArray7 = new int[9];
        nArray7[0] = (int)65;
        nArray7[1] = (int)105;
        nArray7[2] = (int)109;
        nArray7[3] = (int)32;
        nArray7[4] = (int)80;
        nArray7[5] = (int)111;
        nArray7[6] = (int)105;
        nArray7[7] = (int)110;
        nArray7[8] = (int)116;
        this.objof = new ct(this, mr.clS(nArray7));
        int[] nArray8 = new int[11];
        nArray8[0] = (int)66;
        nArray8[1] = (int)101;
        nArray8[2] = (int)115;
        nArray8[3] = (int)116;
        nArray8[4] = (int)32;
        nArray8[5] = (int)86;
        nArray8[6] = (int)101;
        nArray8[7] = (int)99;
        nArray8[8] = (int)116;
        nArray8[9] = (int)111;
        nArray8[10] = (int)114;
        this.iznEa = new cu(this.objof, mr.clS(nArray8));
        int[] nArray9 = new int[14];
        nArray9[0] = (int)78;
        nArray9[1] = (int)101;
        nArray9[2] = (int)97;
        nArray9[3] = (int)114;
        nArray9[4] = (int)101;
        nArray9[5] = (int)115;
        nArray9[6] = (int)116;
        nArray9[7] = (int)32;
        nArray9[8] = (int)86;
        nArray9[9] = (int)101;
        nArray9[10] = (int)99;
        nArray9[11] = (int)116;
        nArray9[12] = (int)111;
        nArray9[13] = (int)114;
        this.loMXv = new cu(this.objof, mr.clS(nArray9)).SY();
        int[] nArray10 = new int[19];
        nArray10[0] = (int)65;
        nArray10[1] = (int)105;
        nArray10[2] = (int)109;
        nArray10[3] = (int)32;
        nArray10[4] = (int)87;
        nArray10[5] = (int)104;
        nArray10[6] = (int)105;
        nArray10[7] = (int)108;
        nArray10[8] = (int)101;
        nArray10[9] = (int)32;
        nArray10[10] = (int)79;
        nArray10[11] = (int)110;
        nArray10[12] = (int)32;
        nArray10[13] = (int)84;
        nArray10[14] = (int)97;
        nArray10[15] = (int)114;
        nArray10[16] = (int)103;
        nArray10[17] = (int)101;
        nArray10[18] = (int)116;
        this.NURBy = new cJ(this, mr.clS(nArray10)).WE(true);
        int[] nArray11 = new int[16];
        nArray11[0] = (int)80;
        nArray11[1] = (int)114;
        nArray11[2] = (int)101;
        nArray11[3] = (int)100;
        nArray11[4] = (int)105;
        nArray11[5] = (int)99;
        nArray11[6] = (int)116;
        nArray11[7] = (int)32;
        nArray11[8] = (int)80;
        nArray11[9] = (int)111;
        nArray11[10] = (int)115;
        nArray11[11] = (int)105;
        nArray11[12] = (int)116;
        nArray11[13] = (int)105;
        nArray11[14] = (int)111;
        nArray11[15] = (int)110;
        this.xZaeo = new cJ(this, mr.clS(nArray11)).WE(false);
        int[] nArray12 = new int[16];
        nArray12[0] = (int)80;
        nArray12[1] = (int)114;
        nArray12[2] = (int)101;
        nArray12[3] = (int)100;
        nArray12[4] = (int)105;
        nArray12[5] = (int)99;
        nArray12[6] = (int)116;
        nArray12[7] = (int)105;
        nArray12[8] = (int)111;
        nArray12[9] = (int)110;
        nArray12[10] = (int)32;
        nArray12[11] = (int)84;
        nArray12[12] = (int)105;
        nArray12[13] = (int)99;
        nArray12[14] = (int)107;
        nArray12[15] = (int)115;
        this.RpKwK = new cC(this, mr.clS(nArray12)).Vy(1.0).Vw(1.0).Vx(5.0).VA(2.0).Vz((String)((Object)" ticks"));
        int[] nArray13 = new int[17];
        nArray13[0] = (int)82;
        nArray13[1] = (int)101;
        nArray13[2] = (int)110;
        nArray13[3] = (int)100;
        nArray13[4] = (int)101;
        nArray13[5] = (int)114;
        nArray13[6] = (int)32;
        nArray13[7] = (int)80;
        nArray13[8] = (int)114;
        nArray13[9] = (int)101;
        nArray13[10] = (int)100;
        nArray13[11] = (int)105;
        nArray13[12] = (int)99;
        nArray13[13] = (int)116;
        nArray13[14] = (int)105;
        nArray13[15] = (int)111;
        nArray13[16] = (int)110;
        this.maPUy = new cJ(this, mr.clS(nArray13)).WE(false);
        int[] nArray14 = new int[16];
        nArray14[0] = (int)80;
        nArray14[1] = (int)114;
        nArray14[2] = (int)101;
        nArray14[3] = (int)100;
        nArray14[4] = (int)105;
        nArray14[5] = (int)99;
        nArray14[6] = (int)116;
        nArray14[7] = (int)105;
        nArray14[8] = (int)111;
        nArray14[9] = (int)110;
        nArray14[10] = (int)32;
        nArray14[11] = (int)67;
        nArray14[12] = (int)111;
        nArray14[13] = (int)108;
        nArray14[14] = (int)111;
        nArray14[15] = (int)114;
        this.SGIKe = new cG(this, mr.clS(nArray14)).Uf(rD.dlM().bjG().bis());
        int[] nArray15 = new int[14];
        nArray15[0] = (int)84;
        nArray15[1] = (int)97;
        nArray15[2] = (int)114;
        nArray15[3] = (int)103;
        nArray15[4] = (int)101;
        nArray15[5] = (int)116;
        nArray15[6] = (int)32;
        nArray15[7] = (int)79;
        nArray15[8] = (int)112;
        nArray15[9] = (int)116;
        nArray15[10] = (int)105;
        nArray15[11] = (int)111;
        nArray15[12] = (int)110;
        nArray15[13] = (int)115;
        this.uOqTy = new cv(this, mr.clS(nArray15));
        int[] nArray16 = new int[12];
        nArray16[0] = (int)73;
        nArray16[1] = (int)103;
        nArray16[2] = (int)110;
        nArray16[3] = (int)111;
        nArray16[4] = (int)114;
        nArray16[5] = (int)101;
        nArray16[6] = (int)32;
        nArray16[7] = (int)87;
        nArray16[8] = (int)97;
        nArray16[9] = (int)108;
        nArray16[10] = (int)108;
        nArray16[11] = (int)115;
        this.ZuWds = new cw(this.uOqTy, mr.clS(nArray16));
        int[] nArray17 = new int[14];
        nArray17[0] = (int)73;
        nArray17[1] = (int)103;
        nArray17[2] = (int)110;
        nArray17[3] = (int)111;
        nArray17[4] = (int)114;
        nArray17[5] = (int)101;
        nArray17[6] = (int)32;
        nArray17[7] = (int)70;
        nArray17[8] = (int)114;
        nArray17[9] = (int)105;
        nArray17[10] = (int)101;
        nArray17[11] = (int)110;
        nArray17[12] = (int)100;
        nArray17[13] = (int)115;
        this.AcJyQ = new cw(this.uOqTy, mr.clS(nArray17));
        int[] nArray18 = new int[12];
        nArray18[0] = (int)73;
        nArray18[1] = (int)103;
        nArray18[2] = (int)110;
        nArray18[3] = (int)111;
        nArray18[4] = (int)114;
        nArray18[5] = (int)101;
        nArray18[6] = (int)32;
        nArray18[7] = (int)78;
        nArray18[8] = (int)97;
        nArray18[9] = (int)107;
        nArray18[10] = (int)101;
        nArray18[11] = (int)100;
        this.jdxNC = new cw(this.uOqTy, mr.clS(nArray18));
        int[] nArray19 = new int[12];
        nArray19[0] = (int)73;
        nArray19[1] = (int)116;
        nArray19[2] = (int)101;
        nArray19[3] = (int)109;
        nArray19[4] = (int)115;
        nArray19[5] = (int)32;
        nArray19[6] = (int)84;
        nArray19[7] = (int)111;
        nArray19[8] = (int)32;
        nArray19[9] = (int)85;
        nArray19[10] = (int)115;
        nArray19[11] = (int)101;
        this.pNnvx = new ct(this, mr.clS(nArray19));
        int[] nArray20 = new int[11];
        nArray20[0] = (int)87;
        nArray20[1] = (int)101;
        nArray20[2] = (int)97;
        nArray20[3] = (int)112;
        nArray20[4] = (int)111;
        nArray20[5] = (int)110;
        nArray20[6] = (int)32;
        nArray20[7] = (int)79;
        nArray20[8] = (int)110;
        nArray20[9] = (int)108;
        nArray20[10] = (int)121;
        this.ClWRz = new cu(this.pNnvx, mr.clS(nArray20));
        int[] nArray21 = new int[12];
        nArray21[0] = (int)67;
        nArray21[1] = (int)117;
        nArray21[2] = (int)115;
        nArray21[3] = (int)116;
        nArray21[4] = (int)111;
        nArray21[5] = (int)109;
        nArray21[6] = (int)32;
        nArray21[7] = (int)83;
        nArray21[8] = (int)108;
        nArray21[9] = (int)111;
        nArray21[10] = (int)116;
        nArray21[11] = (int)115;
        this.MEfRH = new cu(this.pNnvx, mr.clS(nArray21));
        this.hjLsk = new cz(this, mr.clS(new int[]{(int)83, (int)108, (int)111, (int)116, (int)115}));
        int[] nArray22 = new int[15];
        nArray22[0] = (int)84;
        nArray22[1] = (int)97;
        nArray22[2] = (int)114;
        nArray22[3] = (int)103;
        nArray22[4] = (int)101;
        nArray22[5] = (int)116;
        nArray22[6] = (int)32;
        nArray22[7] = (int)80;
        nArray22[8] = (int)114;
        nArray22[9] = (int)105;
        nArray22[10] = (int)111;
        nArray22[11] = (int)114;
        nArray22[12] = (int)105;
        nArray22[13] = (int)116;
        nArray22[14] = (int)121;
        this.mMTcv = new ct(this, mr.clS(nArray22));
        int[] nArray23 = new int[8];
        nArray23[0] = (int)68;
        nArray23[1] = (int)105;
        nArray23[2] = (int)115;
        nArray23[3] = (int)116;
        nArray23[4] = (int)97;
        nArray23[5] = (int)110;
        nArray23[6] = (int)99;
        nArray23[7] = (int)101;
        this.KLTHe = new cu(this.mMTcv, mr.clS(nArray23));
        int[] nArray24 = new int[6];
        nArray24[0] = (int)72;
        nArray24[1] = (int)101;
        nArray24[2] = (int)97;
        nArray24[3] = (int)108;
        nArray24[4] = (int)116;
        nArray24[5] = (int)104;
        this.rglYd = new cu(this.mMTcv, mr.clS(nArray24));
        int[] nArray25 = new int[11];
        nArray25[0] = (int)84;
        nArray25[1] = (int)97;
        nArray25[2] = (int)114;
        nArray25[3] = (int)103;
        nArray25[4] = (int)101;
        nArray25[5] = (int)116;
        nArray25[6] = (int)32;
        nArray25[7] = (int)77;
        nArray25[8] = (int)111;
        nArray25[9] = (int)100;
        nArray25[10] = (int)101;
        this.uqpih = new ct(this, mr.clS(nArray25));
        int[] nArray26 = new int[6];
        nArray26[0] = (int)83;
        nArray26[1] = (int)119;
        nArray26[2] = (int)105;
        nArray26[3] = (int)116;
        nArray26[4] = (int)99;
        nArray26[5] = (int)104;
        this.BtIDI = new cu(this.uqpih, mr.clS(nArray26));
        int[] nArray27 = new int[6];
        nArray27[0] = (int)76;
        nArray27[1] = (int)111;
        nArray27[2] = (int)99;
        nArray27[3] = (int)107;
        nArray27[4] = (int)101;
        nArray27[5] = (int)100;
        this.rSkxN = new cu(this.uqpih, mr.clS(nArray27));
        int[] nArray28 = new int[17];
        nArray28[0] = (int)67;
        nArray28[1] = (int)97;
        nArray28[2] = (int)110;
        nArray28[3] = (int)99;
        nArray28[4] = (int)101;
        nArray28[5] = (int)108;
        nArray28[6] = (int)32;
        nArray28[7] = (int)73;
        nArray28[8] = (int)110;
        nArray28[9] = (int)32;
        nArray28[10] = (int)83;
        nArray28[11] = (int)99;
        nArray28[12] = (int)114;
        nArray28[13] = (int)101;
        nArray28[14] = (int)101;
        nArray28[15] = (int)110;
        nArray28[16] = (int)115;
        this.sYBzd = new cJ(this, mr.clS(nArray28)).WE(true);
        int[] nArray29 = new int[8];
        nArray29[0] = (int)68;
        nArray29[1] = (int)114;
        nArray29[2] = (int)97;
        nArray29[3] = (int)119;
        nArray29[4] = (int)32;
        nArray29[5] = (int)70;
        nArray29[6] = (int)111;
        nArray29[7] = (int)118;
        this.AwNUJ = new cJ(this, mr.clS(nArray29)).WE(false);
        int[] nArray30 = new int[9];
        nArray30[0] = (int)70;
        nArray30[1] = (int)111;
        nArray30[2] = (int)118;
        nArray30[3] = (int)32;
        nArray30[4] = (int)67;
        nArray30[5] = (int)111;
        nArray30[6] = (int)108;
        nArray30[7] = (int)111;
        nArray30[8] = (int)114;
        this.UxVgK = new cG(this, mr.clS(nArray30)).Uf(rD.dlM().bjG().bis());
        int[] nArray31 = new int[12];
        nArray31[0] = (int)87;
        nArray31[1] = (int)104;
        nArray31[2] = (int)101;
        nArray31[3] = (int)110;
        nArray31[4] = (int)32;
        nArray31[5] = (int)72;
        nArray31[6] = (int)111;
        nArray31[7] = (int)108;
        nArray31[8] = (int)100;
        nArray31[9] = (int)105;
        nArray31[10] = (int)110;
        nArray31[11] = (int)103;
        this.BkSML = new cJ(this, mr.clS(nArray31)).WE(false);
        int[] nArray32 = new int[8];
        nArray32[0] = (int)72;
        nArray32[1] = (int)111;
        nArray32[2] = (int)108;
        nArray32[3] = (int)100;
        nArray32[4] = (int)32;
        nArray32[5] = (int)75;
        nArray32[6] = (int)101;
        nArray32[7] = (int)121;
        this.gMClj = new cD(this, mr.clS(nArray32)).VO(mA.sCBUa.cmO());
        this.KIJQr = 0.0f;
        int[] nArray33 = fg.aIW();
        try {
            this.oURtD = 1000.0f;
            this.JdqkJ = new og();
            this.rWorD = new pe();
            this.iywBD = new mV();
            this.iywBD.cqr(new Random().nextInt());
            this.iywBD.cqs(0.05f);
            this.iywBD.cqv(mV$uX.AjjgB);
            this.iywBD.cqw(3);
            this.sZDRi.Vf(this.MTMNI::WF);
            this.OYFtx.Vf(this.mcave::WF);
            this.RpKwK.Vf(this.xZaeo::WF);
            this.maPUy.Vf(this.xZaeo::WF);
            this.SGIKe.Vf(this::aUs);
            this.hjLsk.Vf(this::aUr);
            this.UxVgK.Vf(this.AwNUJ::WF);
            if (iS.bwL() == null) {
                fg.aIV(new int[3]);
            }
        }
        catch (MatchException matchException) {
            throw fH.aUt(matchException);
        }
    }

    static {
        Loader.doInit(fH.class);
        fH._f35fd70486682bf72c3c3fd96d3f755f();
    }

    private static native void _f35fd70486682bf72c3c3fd96d3f755f();
}

