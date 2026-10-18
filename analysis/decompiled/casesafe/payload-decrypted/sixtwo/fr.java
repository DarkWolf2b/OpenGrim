/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.cz;
import sixtwo.dI;
import sixtwo.eJ;
import sixtwo.eK;
import sixtwo.eL;
import sixtwo.fg;
import sixtwo.fl;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.mr;
import sixtwo.mw;
import sixtwo.og;
import sixtwo.os;
import sixtwo.ou;
import sixtwo.ov;
import sixtwo.pc;
import sixtwo.pd;
import sixtwo.pe;
import sixtwo.qL;
import sixtwo.rD;

public class fr
extends gg {
    private final cC uuiVA;
    private final ct XPsdZ;
    private final cu gFhjZ;
    private final cu qAqUI;
    private final ct loPKM;
    private final cu vnYZx;
    private final cu xCupG;
    private final ct zZDPB;
    private final cu QnRHK;
    private final cu hJKeY;
    private final cJ esnRH;
    private final ct kOSut;
    private final cu lDjkh;
    private final cu vlCiC;
    private final ct kmSAT;
    private final cu ZacKI;
    private final cu EsIxA;
    private final cu znCAf;
    private final ct rJhwq;
    private final cu TSzIa;
    private final cu nuObX;
    private final cA drPlk;
    private final cA TwxgO;
    private final cv bjunC;
    private final cw xYDCY;
    private final cw ufARj;
    private final cw bWNtd;
    private final cv JmYqQ;
    private final cw aZsiY;
    private final cw CswPu;
    private final cw xIZYV;
    private final cw waYha;
    private final cw kGRXw;
    private final cF wDjqt;
    private final ct nMsgI;
    private final cu JAwIX;
    private final cu JWNzq;
    private final cz lEEKm;
    private final cJ AaZvh;
    private final cG hBHZf;
    private final ct UuMRr;
    private final cu NRHKu;
    private final cu HTLEq;
    private final cu GAmVW;
    private final cu CiqUj;
    private final cC tBpfA;
    private final ct RAhFv;
    private final cu bqKDj;
    private final cu AotRw;
    private final ct WEzOU;
    private final cu zgYYt;
    private final cu FWguf;
    private final cJ Zywer;
    private final cJ vdmvy;
    private final ct dlzgV;
    private final cu MYpIA;
    private final cu jtUDD;
    private final cJ pboNi;
    private final ct vUmBx;
    private final cu tKSmQ;
    private final cu TRsxw;
    private final cJ KNaqi;
    private final cJ ePFjw;
    private final cC duWkt;
    private final pe RsWQP;
    private final og FEiPq;
    private LivingEntity cslIX;
    private static long OTHes;
    private static String[] PYAVO;
    private static String[] OxsWw;
    private static Map PieGJ;
    private static long[] jxlIg;
    private static Integer[] nUNYg;
    private static Map XdhDb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fr() {
        long l2 = OTHes ^ 0x7B6F749BEC1CL;
        super(gf.aZL(5, false, gh.xwjCw));
        int[] nArray = new int[15];
        nArray[0] = (int)83;
        nArray[1] = (int)101;
        nArray[2] = (int)97;
        nArray[3] = (int)114;
        nArray[4] = (int)99;
        nArray[5] = (int)104;
        nArray[6] = (int)32;
        nArray[7] = (int)68;
        nArray[8] = (int)105;
        nArray[9] = (int)115;
        nArray[10] = (int)116;
        nArray[11] = (int)97;
        nArray[12] = (int)110;
        nArray[13] = (int)99;
        nArray[14] = (int)101;
        this.uuiVA = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(2.5).Vx(50.0).VA(6.0).Vz((String)((Object)" blocks"));
        int[] nArray2 = new int[8];
        nArray2[0] = (int)65;
        nArray2[1] = (int)105;
        nArray2[2] = (int)109;
        nArray2[3] = (int)32;
        nArray2[4] = (int)77;
        nArray2[5] = (int)111;
        nArray2[6] = (int)100;
        nArray2[7] = (int)101;
        this.XPsdZ = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)78;
        nArray3[1] = (int)111;
        nArray3[2] = (int)114;
        nArray3[3] = (int)109;
        nArray3[4] = (int)97;
        nArray3[5] = (int)108;
        this.gFhjZ = new cu(this.XPsdZ, mr.clS(nArray3));
        this.qAqUI = new cu(this.XPsdZ, mr.clS(new int[]{(int)83, (int)110, (int)97, (int)112}));
        int[] nArray4 = new int[18];
        nArray4[0] = (int)65;
        nArray4[1] = (int)105;
        nArray4[2] = (int)109;
        nArray4[3] = (int)32;
        nArray4[4] = (int)83;
        nArray4[5] = (int)109;
        nArray4[6] = (int)111;
        nArray4[7] = (int)111;
        nArray4[8] = (int)116;
        nArray4[9] = (int)104;
        nArray4[10] = (int)105;
        nArray4[11] = (int)110;
        nArray4[12] = (int)103;
        nArray4[13] = (int)32;
        nArray4[14] = (int)77;
        nArray4[15] = (int)111;
        nArray4[16] = (int)100;
        nArray4[17] = (int)101;
        this.loPKM = new ct(this, mr.clS(nArray4));
        int[] nArray5 = new int[12];
        nArray5[0] = (int)85;
        nArray5[1] = (int)110;
        nArray5[2] = (int)114;
        nArray5[3] = (int)101;
        nArray5[4] = (int)115;
        nArray5[5] = (int)116;
        nArray5[6] = (int)114;
        nArray5[7] = (int)105;
        nArray5[8] = (int)99;
        nArray5[9] = (int)116;
        nArray5[10] = (int)101;
        nArray5[11] = (int)100;
        this.vnYZx = new cu(this.loPKM, mr.clS(nArray5));
        int[] nArray6 = new int[8];
        nArray6[0] = (int)65;
        nArray6[1] = (int)100;
        nArray6[2] = (int)97;
        nArray6[3] = (int)112;
        nArray6[4] = (int)116;
        nArray6[5] = (int)105;
        nArray6[6] = (int)118;
        nArray6[7] = (int)101;
        this.xCupG = new cu(this.loPKM, mr.clS(nArray6));
        int[] nArray7 = new int[11];
        nArray7[0] = (int)83;
        nArray7[1] = (int)112;
        nArray7[2] = (int)114;
        nArray7[3] = (int)105;
        nArray7[4] = (int)110;
        nArray7[5] = (int)116;
        nArray7[6] = (int)32;
        nArray7[7] = (int)77;
        nArray7[8] = (int)111;
        nArray7[9] = (int)100;
        nArray7[10] = (int)101;
        this.zZDPB = new ct(this, mr.clS(nArray7));
        this.QnRHK = new cu(this.zZDPB, mr.clS(new int[]{(int)78, (int)111, (int)110, (int)101}));
        int[] nArray8 = new int[7];
        nArray8[0] = (int)68;
        nArray8[1] = (int)101;
        nArray8[2] = (int)102;
        nArray8[3] = (int)97;
        nArray8[4] = (int)117;
        nArray8[5] = (int)108;
        nArray8[6] = (int)116;
        this.hJKeY = new cu(this.zZDPB, mr.clS(nArray8));
        int[] nArray9 = new int[15];
        nArray9[0] = (int)77;
        nArray9[1] = (int)111;
        nArray9[2] = (int)118;
        nArray9[3] = (int)101;
        nArray9[4] = (int)32;
        nArray9[5] = (int)67;
        nArray9[6] = (int)111;
        nArray9[7] = (int)114;
        nArray9[8] = (int)114;
        nArray9[9] = (int)101;
        nArray9[10] = (int)99;
        nArray9[11] = (int)116;
        nArray9[12] = (int)105;
        nArray9[13] = (int)111;
        nArray9[14] = (int)110;
        this.esnRH = new cJ(this, mr.clS(nArray9)).WE(true);
        int[] nArray10 = new int[15];
        nArray10[0] = (int)67;
        nArray10[1] = (int)111;
        nArray10[2] = (int)114;
        nArray10[3] = (int)114;
        nArray10[4] = (int)101;
        nArray10[5] = (int)99;
        nArray10[6] = (int)116;
        nArray10[7] = (int)105;
        nArray10[8] = (int)111;
        nArray10[9] = (int)110;
        nArray10[10] = (int)32;
        nArray10[11] = (int)84;
        nArray10[12] = (int)121;
        nArray10[13] = (int)112;
        nArray10[14] = (int)101;
        this.kOSut = new ct(this, mr.clS(nArray10)).SO(1);
        int[] nArray11 = new int[6];
        nArray11[0] = (int)83;
        nArray11[1] = (int)105;
        nArray11[2] = (int)108;
        nArray11[3] = (int)101;
        nArray11[4] = (int)110;
        nArray11[5] = (int)116;
        this.lDjkh = new cu(this.kOSut, mr.clS(nArray11));
        int[] nArray12 = new int[7];
        nArray12[0] = (int)70;
        nArray12[1] = (int)111;
        nArray12[2] = (int)99;
        nArray12[3] = (int)117;
        nArray12[4] = (int)115;
        nArray12[5] = (int)101;
        nArray12[6] = (int)100;
        this.vlCiC = new cu(this.kOSut, mr.clS(nArray12));
        int[] nArray13 = new int[13];
        nArray13[0] = (int)67;
        nArray13[1] = (int)114;
        nArray13[2] = (int)105;
        nArray13[3] = (int)116;
        nArray13[4] = (int)105;
        nArray13[5] = (int)99;
        nArray13[6] = (int)97;
        nArray13[7] = (int)108;
        nArray13[8] = (int)32;
        nArray13[9] = (int)77;
        nArray13[10] = (int)111;
        nArray13[11] = (int)100;
        nArray13[12] = (int)101;
        this.kmSAT = new ct(this, mr.clS(nArray13)).SO(1);
        this.ZacKI = new cu(this.kmSAT, mr.clS(new int[]{(int)78, (int)111, (int)110, (int)101}));
        int[] nArray14 = new int[16];
        nArray14[0] = (int)80;
        nArray14[1] = (int)114;
        nArray14[2] = (int)105;
        nArray14[3] = (int)111;
        nArray14[4] = (int)114;
        nArray14[5] = (int)105;
        nArray14[6] = (int)116;
        nArray14[7] = (int)105;
        nArray14[8] = (int)122;
        nArray14[9] = (int)101;
        nArray14[10] = (int)32;
        nArray14[11] = (int)67;
        nArray14[12] = (int)114;
        nArray14[13] = (int)105;
        nArray14[14] = (int)116;
        nArray14[15] = (int)115;
        this.EsIxA = new cu(this.kmSAT, mr.clS(nArray14));
        int[] nArray15 = new int[10];
        nArray15[0] = (int)79;
        nArray15[1] = (int)110;
        nArray15[2] = (int)108;
        nArray15[3] = (int)121;
        nArray15[4] = (int)32;
        nArray15[5] = (int)67;
        nArray15[6] = (int)114;
        nArray15[7] = (int)105;
        nArray15[8] = (int)116;
        nArray15[9] = (int)115;
        this.znCAf = new cu(this.kmSAT, mr.clS(nArray15));
        int[] nArray16 = new int[14];
        nArray16[0] = (int)72;
        nArray16[1] = (int)105;
        nArray16[2] = (int)116;
        nArray16[3] = (int)32;
        nArray16[4] = (int)68;
        nArray16[5] = (int)101;
        nArray16[6] = (int)108;
        nArray16[7] = (int)97;
        nArray16[8] = (int)121;
        nArray16[9] = (int)32;
        nArray16[10] = (int)77;
        nArray16[11] = (int)111;
        nArray16[12] = (int)100;
        nArray16[13] = (int)101;
        this.rJhwq = new ct(this, mr.clS(nArray16));
        int[] nArray17 = new int[13];
        nArray17[0] = (int)73;
        nArray17[1] = (int)116;
        nArray17[2] = (int)101;
        nArray17[3] = (int)109;
        nArray17[4] = (int)32;
        nArray17[5] = (int)67;
        nArray17[6] = (int)111;
        nArray17[7] = (int)111;
        nArray17[8] = (int)108;
        nArray17[9] = (int)100;
        nArray17[10] = (int)111;
        nArray17[11] = (int)119;
        nArray17[12] = (int)110;
        this.TSzIa = new cu(this.rJhwq, mr.clS(nArray17));
        this.nuObX = new cu(this.rJhwq, mr.clS(new int[]{(int)84, (int)105, (int)109, (int)101, (int)114}));
        int[] nArray18 = new int[8];
        nArray18[0] = (int)67;
        nArray18[1] = (int)111;
        nArray18[2] = (int)111;
        nArray18[3] = (int)108;
        nArray18[4] = (int)100;
        nArray18[5] = (int)111;
        nArray18[6] = (int)119;
        nArray18[7] = (int)110;
        this.drPlk = new cA(this, mr.clS(nArray18)).UG(0.01).UE(0.0).UF(1.0).UI(0.9, 0.9);
        this.TwxgO = new cA(this, mr.clS(new int[]{(int)84, (int)105, (int)109, (int)101, (int)114})).UG(1.0).UE(0.0).UF(1000.0).UI(600.0, 600.0).UH((String)((Object)" ms"));
        int[] nArray19 = new int[14];
        nArray19[0] = (int)65;
        nArray19[1] = (int)116;
        nArray19[2] = (int)116;
        nArray19[3] = (int)97;
        nArray19[4] = (int)99;
        nArray19[5] = (int)107;
        nArray19[6] = (int)32;
        nArray19[7] = (int)79;
        nArray19[8] = (int)112;
        nArray19[9] = (int)116;
        nArray19[10] = (int)105;
        nArray19[11] = (int)111;
        nArray19[12] = (int)110;
        nArray19[13] = (int)115;
        this.bjunC = new cv(this, mr.clS(nArray19));
        int[] nArray20 = new int[12];
        nArray20[0] = (int)66;
        nArray20[1] = (int)114;
        nArray20[2] = (int)101;
        nArray20[3] = (int)97;
        nArray20[4] = (int)107;
        nArray20[5] = (int)32;
        nArray20[6] = (int)83;
        nArray20[7] = (int)104;
        nArray20[8] = (int)105;
        nArray20[9] = (int)101;
        nArray20[10] = (int)108;
        nArray20[11] = (int)100;
        this.xYDCY = new cw(this.bjunC, mr.clS(nArray20));
        int[] nArray21 = new int[15];
        nArray21[0] = (int)85;
        nArray21[1] = (int)110;
        nArray21[2] = (int)32;
        nArray21[3] = (int)80;
        nArray21[4] = (int)114;
        nArray21[5] = (int)101;
        nArray21[6] = (int)115;
        nArray21[7] = (int)115;
        nArray21[8] = (int)32;
        nArray21[9] = (int)83;
        nArray21[10] = (int)104;
        nArray21[11] = (int)105;
        nArray21[12] = (int)101;
        nArray21[13] = (int)108;
        nArray21[14] = (int)100;
        this.ufARj = new cw(this.bjunC, mr.clS(nArray21));
        int[] nArray22 = new int[15];
        nArray22[0] = (int)83;
        nArray22[1] = (int)105;
        nArray22[2] = (int)109;
        nArray22[3] = (int)117;
        nArray22[4] = (int)108;
        nArray22[5] = (int)97;
        nArray22[6] = (int)116;
        nArray22[7] = (int)101;
        nArray22[8] = (int)32;
        nArray22[9] = (int)67;
        nArray22[10] = (int)108;
        nArray22[11] = (int)105;
        nArray22[12] = (int)99;
        nArray22[13] = (int)107;
        nArray22[14] = (int)115;
        this.bWNtd = new cw(this.bjunC, mr.clS(nArray22));
        int[] nArray23 = new int[14];
        nArray23[0] = (int)84;
        nArray23[1] = (int)97;
        nArray23[2] = (int)114;
        nArray23[3] = (int)103;
        nArray23[4] = (int)101;
        nArray23[5] = (int)116;
        nArray23[6] = (int)32;
        nArray23[7] = (int)79;
        nArray23[8] = (int)112;
        nArray23[9] = (int)116;
        nArray23[10] = (int)105;
        nArray23[11] = (int)111;
        nArray23[12] = (int)110;
        nArray23[13] = (int)115;
        this.JmYqQ = new cv(this, mr.clS(nArray23));
        int[] nArray24 = new int[12];
        nArray24[0] = (int)73;
        nArray24[1] = (int)103;
        nArray24[2] = (int)110;
        nArray24[3] = (int)111;
        nArray24[4] = (int)114;
        nArray24[5] = (int)101;
        nArray24[6] = (int)32;
        nArray24[7] = (int)87;
        nArray24[8] = (int)97;
        nArray24[9] = (int)108;
        nArray24[10] = (int)108;
        nArray24[11] = (int)115;
        this.aZsiY = new cw(this.JmYqQ, mr.clS(nArray24));
        int[] nArray25 = new int[14];
        nArray25[0] = (int)73;
        nArray25[1] = (int)103;
        nArray25[2] = (int)110;
        nArray25[3] = (int)111;
        nArray25[4] = (int)114;
        nArray25[5] = (int)101;
        nArray25[6] = (int)32;
        nArray25[7] = (int)70;
        nArray25[8] = (int)114;
        nArray25[9] = (int)105;
        nArray25[10] = (int)101;
        nArray25[11] = (int)110;
        nArray25[12] = (int)100;
        nArray25[13] = (int)115;
        this.CswPu = new cw(this.JmYqQ, mr.clS(nArray25));
        int[] nArray26 = new int[12];
        nArray26[0] = (int)73;
        nArray26[1] = (int)103;
        nArray26[2] = (int)110;
        nArray26[3] = (int)111;
        nArray26[4] = (int)114;
        nArray26[5] = (int)101;
        nArray26[6] = (int)32;
        nArray26[7] = (int)78;
        nArray26[8] = (int)97;
        nArray26[9] = (int)107;
        nArray26[10] = (int)101;
        nArray26[11] = (int)100;
        this.xIZYV = new cw(this.JmYqQ, mr.clS(nArray26));
        int[] nArray27 = new int[21];
        nArray27[0] = (int)73;
        nArray27[1] = (int)103;
        nArray27[2] = (int)110;
        nArray27[3] = (int)111;
        nArray27[4] = (int)114;
        nArray27[5] = (int)101;
        nArray27[6] = (int)32;
        nArray27[7] = (int)73;
        nArray27[8] = (int)110;
        nArray27[9] = (int)32;
        nArray27[10] = (int)68;
        nArray27[11] = (int)97;
        nArray27[12] = (int)109;
        nArray27[13] = (int)97;
        nArray27[14] = (int)103;
        nArray27[15] = (int)101;
        nArray27[16] = (int)32;
        nArray27[17] = (int)84;
        nArray27[18] = (int)105;
        nArray27[19] = (int)99;
        nArray27[20] = (int)107;
        this.waYha = new cw(this.JmYqQ, mr.clS(nArray27));
        int[] nArray28 = new int[21];
        nArray28[0] = (int)73;
        nArray28[1] = (int)103;
        nArray28[2] = (int)110;
        nArray28[3] = (int)111;
        nArray28[4] = (int)114;
        nArray28[5] = (int)101;
        nArray28[6] = (int)32;
        nArray28[7] = (int)87;
        nArray28[8] = (int)104;
        nArray28[9] = (int)101;
        nArray28[10] = (int)110;
        nArray28[11] = (int)32;
        nArray28[12] = (int)83;
        nArray28[13] = (int)104;
        nArray28[14] = (int)105;
        nArray28[15] = (int)101;
        nArray28[16] = (int)108;
        nArray28[17] = (int)100;
        nArray28[18] = (int)105;
        nArray28[19] = (int)110;
        nArray28[20] = (int)103;
        this.kGRXw = new cw(this.JmYqQ, mr.clS(nArray28));
        int[] nArray29 = new int[7];
        nArray29[0] = (int)84;
        nArray29[1] = (int)97;
        nArray29[2] = (int)114;
        nArray29[3] = (int)103;
        nArray29[4] = (int)101;
        nArray29[5] = (int)116;
        nArray29[6] = (int)115;
        this.wDjqt = new cF(this, mr.clS(nArray29)).VS(jg$tJ.OCdZM);
        int[] nArray30 = new int[12];
        nArray30[0] = (int)73;
        nArray30[1] = (int)116;
        nArray30[2] = (int)101;
        nArray30[3] = (int)109;
        nArray30[4] = (int)115;
        nArray30[5] = (int)32;
        nArray30[6] = (int)84;
        nArray30[7] = (int)111;
        nArray30[8] = (int)32;
        nArray30[9] = (int)85;
        nArray30[10] = (int)115;
        nArray30[11] = (int)101;
        this.nMsgI = new ct(this, mr.clS(nArray30));
        int[] nArray31 = new int[11];
        nArray31[0] = (int)87;
        nArray31[1] = (int)101;
        nArray31[2] = (int)97;
        nArray31[3] = (int)112;
        nArray31[4] = (int)111;
        nArray31[5] = (int)110;
        nArray31[6] = (int)32;
        nArray31[7] = (int)79;
        nArray31[8] = (int)110;
        nArray31[9] = (int)108;
        nArray31[10] = (int)121;
        this.JAwIX = new cu(this.nMsgI, mr.clS(nArray31));
        int[] nArray32 = new int[12];
        nArray32[0] = (int)67;
        nArray32[1] = (int)117;
        nArray32[2] = (int)115;
        nArray32[3] = (int)116;
        nArray32[4] = (int)111;
        nArray32[5] = (int)109;
        nArray32[6] = (int)32;
        nArray32[7] = (int)83;
        nArray32[8] = (int)108;
        nArray32[9] = (int)111;
        nArray32[10] = (int)116;
        nArray32[11] = (int)115;
        this.JWNzq = new cu(this.nMsgI, mr.clS(nArray32));
        this.lEEKm = new cz(this, mr.clS(new int[]{(int)83, (int)108, (int)111, (int)116, (int)115}));
        int[] nArray33 = new int[13];
        nArray33[0] = (int)84;
        nArray33[1] = (int)97;
        nArray33[2] = (int)114;
        nArray33[3] = (int)103;
        nArray33[4] = (int)101;
        nArray33[5] = (int)116;
        nArray33[6] = (int)32;
        nArray33[7] = (int)82;
        nArray33[8] = (int)101;
        nArray33[9] = (int)110;
        nArray33[10] = (int)100;
        nArray33[11] = (int)101;
        nArray33[12] = (int)114;
        this.AaZvh = new cJ(this, mr.clS(nArray33)).WE(false);
        int[] nArray34 = new int[19];
        nArray34[0] = (int)84;
        nArray34[1] = (int)97;
        nArray34[2] = (int)114;
        nArray34[3] = (int)103;
        nArray34[4] = (int)101;
        nArray34[5] = (int)116;
        nArray34[6] = (int)32;
        nArray34[7] = (int)82;
        nArray34[8] = (int)101;
        nArray34[9] = (int)110;
        nArray34[10] = (int)100;
        nArray34[11] = (int)101;
        nArray34[12] = (int)114;
        nArray34[13] = (int)32;
        nArray34[14] = (int)67;
        nArray34[15] = (int)111;
        nArray34[16] = (int)108;
        nArray34[17] = (int)111;
        nArray34[18] = (int)114;
        this.hBHZf = new cG(this, mr.clS(nArray34)).Uf(rD.dlM().bjG().bis());
        int[] nArray35 = fg.aIW();
        try {
            int[] nArray36 = new int[11];
            nArray36[0] = (int)82;
            nArray36[1] = (int)101;
            nArray36[2] = (int)110;
            nArray36[3] = (int)100;
            nArray36[4] = (int)101;
            nArray36[5] = (int)114;
            nArray36[6] = (int)32;
            nArray36[7] = (int)77;
            nArray36[8] = (int)111;
            nArray36[9] = (int)100;
            nArray36[10] = (int)101;
            this.UuMRr = new ct(this, mr.clS(nArray36)).SO(1);
            int[] nArray37 = new int[12];
            nArray37[0] = (int)67;
            nArray37[1] = (int)97;
            nArray37[2] = (int)112;
            nArray37[3] = (int)116;
            nArray37[4] = (int)117;
            nArray37[5] = (int)114;
            nArray37[6] = (int)101;
            nArray37[7] = (int)32;
            nArray37[8] = (int)77;
            nArray37[9] = (int)97;
            nArray37[10] = (int)114;
            nArray37[11] = (int)107;
            this.NRHKu = new cu(this.UuMRr, mr.clS(nArray37));
            int[] nArray38 = new int[15];
            nArray38[0] = (int)67;
            nArray38[1] = (int)97;
            nArray38[2] = (int)112;
            nArray38[3] = (int)116;
            nArray38[4] = (int)117;
            nArray38[5] = (int)114;
            nArray38[6] = (int)101;
            nArray38[7] = (int)32;
            nArray38[8] = (int)82;
            nArray38[9] = (int)111;
            nArray38[10] = (int)117;
            nArray38[11] = (int)110;
            nArray38[12] = (int)100;
            nArray38[13] = (int)101;
            nArray38[14] = (int)100;
            this.HTLEq = new cu(this.UuMRr, mr.clS(nArray38));
            int[] nArray39 = new int[16];
            nArray39[0] = (int)67;
            nArray39[1] = (int)97;
            nArray39[2] = (int)112;
            nArray39[3] = (int)116;
            nArray39[4] = (int)117;
            nArray39[5] = (int)114;
            nArray39[6] = (int)101;
            nArray39[7] = (int)32;
            nArray39[8] = (int)84;
            nArray39[9] = (int)114;
            nArray39[10] = (int)105;
            nArray39[11] = (int)97;
            nArray39[12] = (int)110;
            nArray39[13] = (int)103;
            nArray39[14] = (int)108;
            nArray39[15] = (int)101;
            this.GAmVW = new cu(this.UuMRr, mr.clS(nArray39));
            int[] nArray40 = new int[15];
            nArray40[0] = (int)68;
            nArray40[1] = (int)97;
            nArray40[2] = (int)115;
            nArray40[3] = (int)104;
            nArray40[4] = (int)101;
            nArray40[5] = (int)100;
            nArray40[6] = (int)32;
            nArray40[7] = (int)84;
            nArray40[8] = (int)114;
            nArray40[9] = (int)105;
            nArray40[10] = (int)97;
            nArray40[11] = (int)110;
            nArray40[12] = (int)103;
            nArray40[13] = (int)108;
            nArray40[14] = (int)101;
            this.CiqUj = new cu(this.UuMRr, mr.clS(nArray40));
            int[] nArray41 = new int[15];
            nArray41[0] = (int)65;
            nArray41[1] = (int)116;
            nArray41[2] = (int)116;
            nArray41[3] = (int)97;
            nArray41[4] = (int)99;
            nArray41[5] = (int)107;
            nArray41[6] = (int)32;
            nArray41[7] = (int)68;
            nArray41[8] = (int)105;
            nArray41[9] = (int)115;
            nArray41[10] = (int)116;
            nArray41[11] = (int)97;
            nArray41[12] = (int)110;
            nArray41[13] = (int)99;
            nArray41[14] = (int)101;
            this.tBpfA = new cC(this, mr.clS(nArray41)).Vy(0.01).Vw(2.5).Vx(5.0).VA(3.0).Vz((String)((Object)" blocks"));
            int[] nArray42 = new int[15];
            nArray42[0] = (int)84;
            nArray42[1] = (int)97;
            nArray42[2] = (int)114;
            nArray42[3] = (int)103;
            nArray42[4] = (int)101;
            nArray42[5] = (int)116;
            nArray42[6] = (int)32;
            nArray42[7] = (int)80;
            nArray42[8] = (int)114;
            nArray42[9] = (int)105;
            nArray42[10] = (int)111;
            nArray42[11] = (int)114;
            nArray42[12] = (int)105;
            nArray42[13] = (int)116;
            nArray42[14] = (int)121;
            this.RAhFv = new ct(this, mr.clS(nArray42));
            int[] nArray43 = new int[8];
            nArray43[0] = (int)68;
            nArray43[1] = (int)105;
            nArray43[2] = (int)115;
            nArray43[3] = (int)116;
            nArray43[4] = (int)97;
            nArray43[5] = (int)110;
            nArray43[6] = (int)99;
            nArray43[7] = (int)101;
            this.bqKDj = new cu(this.RAhFv, mr.clS(nArray43));
            int[] nArray44 = new int[6];
            nArray44[0] = (int)72;
            nArray44[1] = (int)101;
            nArray44[2] = (int)97;
            nArray44[3] = (int)108;
            nArray44[4] = (int)116;
            nArray44[5] = (int)104;
            this.AotRw = new cu(this.RAhFv, mr.clS(nArray44));
            int[] nArray45 = new int[12];
            nArray45[0] = (int)65;
            nArray45[1] = (int)116;
            nArray45[2] = (int)116;
            nArray45[3] = (int)97;
            nArray45[4] = (int)99;
            nArray45[5] = (int)107;
            nArray45[6] = (int)32;
            nArray45[7] = (int)80;
            nArray45[8] = (int)111;
            nArray45[9] = (int)105;
            nArray45[10] = (int)110;
            nArray45[11] = (int)116;
            this.WEzOU = new ct(this, mr.clS(nArray45));
            int[] nArray46 = new int[11];
            nArray46[0] = (int)66;
            nArray46[1] = (int)101;
            nArray46[2] = (int)115;
            nArray46[3] = (int)116;
            nArray46[4] = (int)32;
            nArray46[5] = (int)86;
            nArray46[6] = (int)101;
            nArray46[7] = (int)99;
            nArray46[8] = (int)116;
            nArray46[9] = (int)111;
            nArray46[10] = (int)114;
            this.zgYYt = new cu(this.WEzOU, mr.clS(nArray46));
            int[] nArray47 = new int[14];
            nArray47[0] = (int)78;
            nArray47[1] = (int)101;
            nArray47[2] = (int)97;
            nArray47[3] = (int)114;
            nArray47[4] = (int)101;
            nArray47[5] = (int)115;
            nArray47[6] = (int)116;
            nArray47[7] = (int)32;
            nArray47[8] = (int)86;
            nArray47[9] = (int)101;
            nArray47[10] = (int)99;
            nArray47[11] = (int)116;
            nArray47[12] = (int)111;
            nArray47[13] = (int)114;
            this.FWguf = new cu(this.WEzOU, mr.clS(nArray47));
            int[] nArray48 = new int[17];
            nArray48[0] = (int)67;
            nArray48[1] = (int)97;
            nArray48[2] = (int)110;
            nArray48[3] = (int)99;
            nArray48[4] = (int)101;
            nArray48[5] = (int)108;
            nArray48[6] = (int)32;
            nArray48[7] = (int)73;
            nArray48[8] = (int)110;
            nArray48[9] = (int)32;
            nArray48[10] = (int)83;
            nArray48[11] = (int)99;
            nArray48[12] = (int)114;
            nArray48[13] = (int)101;
            nArray48[14] = (int)101;
            nArray48[15] = (int)110;
            nArray48[16] = (int)115;
            this.Zywer = new cJ(this, mr.clS(nArray48)).WE(false);
            int[] nArray49 = new int[13];
            nArray49[0] = (int)67;
            nArray49[1] = (int)97;
            nArray49[2] = (int)110;
            nArray49[3] = (int)99;
            nArray49[4] = (int)101;
            nArray49[5] = (int)108;
            nArray49[6] = (int)32;
            nArray49[7] = (int)79;
            nArray49[8] = (int)110;
            nArray49[9] = (int)32;
            nArray49[10] = (int)85;
            nArray49[11] = (int)115;
            nArray49[12] = (int)101;
            this.vdmvy = new cJ(this, mr.clS(nArray49)).WE(false);
            int[] nArray50 = new int[15];
            nArray50[0] = (int)67;
            nArray50[1] = (int)97;
            nArray50[2] = (int)110;
            nArray50[3] = (int)99;
            nArray50[4] = (int)101;
            nArray50[5] = (int)108;
            nArray50[6] = (int)32;
            nArray50[7] = (int)85;
            nArray50[8] = (int)115;
            nArray50[9] = (int)101;
            nArray50[10] = (int)32;
            nArray50[11] = (int)77;
            nArray50[12] = (int)111;
            nArray50[13] = (int)100;
            nArray50[14] = (int)101;
            this.dlzgV = new ct(this, mr.clS(nArray50));
            int[] nArray51 = new int[9];
            nArray51[0] = (int)65;
            nArray51[1] = (int)108;
            nArray51[2] = (int)108;
            nArray51[3] = (int)32;
            nArray51[4] = (int)73;
            nArray51[5] = (int)116;
            nArray51[6] = (int)101;
            nArray51[7] = (int)109;
            nArray51[8] = (int)115;
            this.MYpIA = new cu(this.dlzgV, mr.clS(nArray51));
            int[] nArray52 = new int[15];
            nArray52[0] = (int)65;
            nArray52[1] = (int)108;
            nArray52[2] = (int)108;
            nArray52[3] = (int)111;
            nArray52[4] = (int)119;
            nArray52[5] = (int)32;
            nArray52[6] = (int)83;
            nArray52[7] = (int)104;
            nArray52[8] = (int)105;
            nArray52[9] = (int)101;
            nArray52[10] = (int)108;
            nArray52[11] = (int)100;
            nArray52[12] = (int)105;
            nArray52[13] = (int)110;
            nArray52[14] = (int)103;
            this.jtUDD = new cu(this.dlzgV, mr.clS(nArray52));
            int[] nArray53 = new int[11];
            nArray53[0] = (int)67;
            nArray53[1] = (int)104;
            nArray53[2] = (int)97;
            nArray53[3] = (int)110;
            nArray53[4] = (int)103;
            nArray53[5] = (int)101;
            nArray53[6] = (int)32;
            nArray53[7] = (int)86;
            nArray53[8] = (int)105;
            nArray53[9] = (int)101;
            nArray53[10] = (int)119;
            this.pboNi = new cJ(this, mr.clS(nArray53)).WE(false);
            int[] nArray54 = new int[11];
            nArray54[0] = (int)84;
            nArray54[1] = (int)97;
            nArray54[2] = (int)114;
            nArray54[3] = (int)103;
            nArray54[4] = (int)101;
            nArray54[5] = (int)116;
            nArray54[6] = (int)32;
            nArray54[7] = (int)77;
            nArray54[8] = (int)111;
            nArray54[9] = (int)100;
            nArray54[10] = (int)101;
            this.vUmBx = new ct(this, mr.clS(nArray54)).SO(1);
            int[] nArray55 = new int[6];
            nArray55[0] = (int)83;
            nArray55[1] = (int)119;
            nArray55[2] = (int)105;
            nArray55[3] = (int)116;
            nArray55[4] = (int)99;
            nArray55[5] = (int)104;
            this.tKSmQ = new cu(this.vUmBx, mr.clS(nArray55));
            int[] nArray56 = new int[6];
            nArray56[0] = (int)76;
            nArray56[1] = (int)111;
            nArray56[2] = (int)99;
            nArray56[3] = (int)107;
            nArray56[4] = (int)101;
            nArray56[5] = (int)100;
            this.TRsxw = new cu(this.vUmBx, mr.clS(nArray56));
            int[] nArray57 = new int[18];
            nArray57[0] = (int)86;
            nArray57[1] = (int)105;
            nArray57[2] = (int)115;
            nArray57[3] = (int)117;
            nArray57[4] = (int)97;
            nArray57[5] = (int)108;
            nArray57[6] = (int)105;
            nArray57[7] = (int)115;
            nArray57[8] = (int)101;
            nArray57[9] = (int)32;
            nArray57[10] = (int)82;
            nArray57[11] = (int)111;
            nArray57[12] = (int)116;
            nArray57[13] = (int)97;
            nArray57[14] = (int)116;
            nArray57[15] = (int)105;
            nArray57[16] = (int)111;
            nArray57[17] = (int)110;
            this.KNaqi = new cJ(this, mr.clS(nArray57)).WE(true);
            int[] nArray58 = new int[9];
            nArray58[0] = (int)76;
            nArray58[1] = (int)105;
            nArray58[2] = (int)109;
            nArray58[3] = (int)105;
            nArray58[4] = (int)116;
            nArray58[5] = (int)32;
            nArray58[6] = (int)70;
            nArray58[7] = (int)79;
            nArray58[8] = (int)86;
            this.ePFjw = new cJ(this, mr.clS(nArray58)).WE(false);
            this.duWkt = new cC(this, mr.clS(new int[]{(int)70, (int)79, (int)86})).Vy(1.0).Vw(10.0).Vx(360.0).VA(180.0).Vz((String)((Object)" deg"));
            this.FEiPq = new og();
            this.RsWQP = new pe();
            this.RsWQP.cMY(new pc(0.15));
            this.RsWQP.cMY(new pd(0.15, 0.15, 0.15, 0.05));
            this.kOSut.Vf(this.esnRH::WF);
            this.duWkt.Vf(this.ePFjw::WF);
            this.lEEKm.Vf(this::aOT);
            this.hBHZf.Vf(this.AaZvh::WF);
            this.UuMRr.Vf(this.AaZvh::WF);
            this.drPlk.Vf(this::aOS);
            this.TwxgO.Vf(this::aOR);
            this.dlzgV.Vf(this.vdmvy::WF);
            if (nArray35 != null) {
                iS.bwK("tq1KUc");
            }
        }
        catch (MatchException matchException) {
            throw fr.aOU(matchException);
        }
    }

    static {
        Loader.doInit(fr.class);
        fr._2dea20652189bec6f4b636fe0416c5c5();
    }

    public native cw aOf();

    public native cu aNP();

    private static native CallSite aOY(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cu aNL();

    public native cJ aNM();

    public native cu aNO();

    private boolean aNB() {
        boolean bl2;
        block32: {
            block33: {
                int[] nArray;
                block30: {
                    block31: {
                        gg gg2;
                        block28: {
                            block29: {
                                eL eL2;
                                block26: {
                                    block27: {
                                        gg gg3;
                                        block24: {
                                            block25: {
                                                long l2 = OTHes ^ 0x48EB478E13A7L;
                                                dI dI2 = rD.dlJ().aZx(dI.class);
                                                nArray = fg.aIW();
                                                try {
                                                    try {
                                                        gg3 = dI2;
                                                        if (nArray != null) break block24;
                                                        if (gg3.amm() == null) break block25;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw fr.aOU(matchException);
                                                    }
                                                    return true;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fr.aOU(matchException);
                                                }
                                            }
                                            gg3 = rD.dlJ().aZx(eK.class);
                                        }
                                        eK eK2 = (eK)gg3;
                                        try {
                                            try {
                                                eL2 = eK2;
                                                if (nArray != null) break block26;
                                                if (!eL2.aAa()) break block27;
                                            }
                                            catch (MatchException matchException) {
                                                throw fr.aOU(matchException);
                                            }
                                            return true;
                                        }
                                        catch (MatchException matchException) {
                                            throw fr.aOU(matchException);
                                        }
                                    }
                                    eL2 = rD.dlJ().aZx(eJ.class);
                                }
                                eJ eJ2 = (eJ)eL2;
                                try {
                                    try {
                                        gg2 = eJ2;
                                        if (nArray != null) break block28;
                                        if (!gg2.aAa()) break block29;
                                    }
                                    catch (MatchException matchException) {
                                        throw fr.aOU(matchException);
                                    }
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw fr.aOU(matchException);
                                }
                            }
                            gg2 = rD.dlJ().aZx(fl.class);
                        }
                        fl fl2 = (fl)gg2;
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = fl2.bag();
                                        if (nArray != null) break block30;
                                        if (!bl2) break block31;
                                    }
                                    catch (MatchException matchException) {
                                        throw fr.aOU(matchException);
                                    }
                                    bl2 = fl2.aJQ();
                                    if (nArray != null) break block30;
                                }
                                catch (MatchException matchException) {
                                    throw fr.aOU(matchException);
                                }
                                if (!bl2) break block31;
                            }
                            catch (MatchException matchException) {
                                throw fr.aOU(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw fr.aOU(matchException);
                        }
                    }
                    bl2 = rD.dlZ().dbt();
                }
                try {
                    try {
                        if (nArray != null) break block32;
                        if (!bl2) break block33;
                    }
                    catch (MatchException matchException) {
                        throw fr.aOU(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw fr.aOU(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    public native cu aNT();

    public native cv aNZ();

    public native cw aOa();

    private native /* synthetic */ Boolean aOS();

    private native float aNy();

    public native cu aNH();

    public native cw aOg();

    private native /* synthetic */ Boolean aOT();

    public native cw aOh();

    private static native CallSite aPb(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aNr(gv var1);

    private native void aNw(LivingEntity var1, ov var2, qL var3);

    public native os aNA();

    private native /* synthetic */ Boolean aOR();

    private static native MatchException aOU(MatchException var0);

    public native cC aNC();

    public native cu aNV();

    private native void aNv(LivingEntity var1);

    public native ct aNJ();

    public native ct aNN();

    private native float aNx();

    public native cu aNI();

    public native cu aNE();

    public native cu aNF();

    public native cu aNK();

    public native cu aNS();

    public native ct aND();

    public native ct aNU();

    public native cA aNX();

    @hG
    public native void aNt(go.sX var1);

    public native ct aNQ();

    private native LivingEntity aNu();

    public native cu aNR();

    public native cu aNW();

    public native ct aNG();

    public native cA aNY();

    public native cw aOb();

    public native ou aNz();

    public native cw aOc();

    @hG(priority=mw.HIGH)
    public native void aNs(gH.th var1);

    public native cv aOd();

    public native cw aOe();

    public native cu aOy();

    public native ct aOI();

    public LivingEntity aOQ() {
        return this.cslIX;
    }

    public native cu aOt();

    public native cu aOr();

    public native cJ aOM();

    public native cu aOJ();

    public native cJ aOC();

    public native cu aOs();

    public native og aOP();

    public native cC aON();

    public native cu aOm();

    public native cF aOj();

    public native ct aOw();

    public native cJ aOH();

    public native cu aOG();

    private static native int aPa(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cu aOl();

    public native cC aOv();

    public native pe aOO();

    private static native Object aOX(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cJ aOL();

    public native ct aOq();

    public native cJ aOD();

    public native cu aOx();

    public native cz aOn();

    public native ct aOz();

    public native cu aOA();

    public native cu aOF();

    public native cu aOu();

    public native cw aOi();

    public native cJ aOo();

    public native cu aOB();

    public native cu aOK();

    private static native String aOV(byte[] var0);

    public native cG aOp();

    public native ct aOE();

    private static native String aOW(int var0, long var1);

    private static native int aOZ(int var0, long var1);

    public native ct aOk();

    private static native void _2dea20652189bec6f4b636fe0416c5c5();

    @Override
    public native void YO();
}

