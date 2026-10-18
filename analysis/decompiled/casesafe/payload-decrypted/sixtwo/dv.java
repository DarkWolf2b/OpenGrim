/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gi;
import sixtwo.go;
import sixtwo.gp;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.jg$tJ;
import sixtwo.kj;
import sixtwo.kn;
import sixtwo.lH;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.ro;

public class dv
extends gg {
    private final cF jWIlg;
    private final cJ NPcDw;
    private final cJ ZXujq;
    private final ct cdTwb;
    private final cu XdqBo;
    private final cu zysSC;
    private final cu SpKOT;
    private final cu ezBRY;
    private final cC zXfLC;
    private final cC ASroa;
    private final cC ClbaS;
    private final cC uMtSN;
    private final cG EzLNk;
    private final cC xnzNS;
    private final cC iEdAT;
    private final cG AXVpM;
    private final cC UDqup;
    private final cG OYjhT;
    private final cC ZTvWj;
    private final cC tPrjL;
    private final cC EADmc;
    private final cC NBZEF;
    private final cC GJXHL;
    private final cC cyXLZ;
    private final cC JGyvQ;
    private final cG otjWl;
    private final cC FXkgM;
    private final cC FQkGY;
    private final cC EFJph;
    private final ct yZFow;
    private final cu XOcqL;
    private final cu ixTDC;
    private final cu UMvcY;
    private final cu LcpZq;
    private final cu EMNhW;
    private final cu xuMLa;
    private final cC FlNtk;
    private final cC rTzGW;
    private final cC MvQMm;
    private final cC yzDhD;
    private final cC XpTXH;
    private final cC kOSLY;
    private final cC wrOWy;
    private final cG EIoNG;
    private final cG OrbAE;
    private final cG EMRGt;
    private final cG YNhsQ;
    private final cC YsidR;
    private final cC MzFuh;
    private final cC KhwEu;
    private final cC wrqKr;
    private final cC rnTiy;
    private final cC lVRRm;
    private static final long IOGuL;
    private static final String CRjla;
    private static final long[] gttrI;
    private static final Integer[] VHyXc;
    private static final Map lzTMb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dv() {
        long l2 = IOGuL ^ 0x5C0DB1E02B36L;
        super(gf.aZL((int)101, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)69;
        nArray[1] = (int)110;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)116;
        nArray[5] = (int)105;
        nArray[6] = (int)101;
        nArray[7] = (int)115;
        this.jWIlg = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        int[] nArray2 = new int[13];
        nArray2[0] = (int)72;
        nArray2[1] = (int)105;
        nArray2[2] = (int)100;
        nArray2[3] = (int)101;
        nArray2[4] = (int)32;
        nArray2[5] = (int)79;
        nArray2[6] = (int)114;
        nArray2[7] = (int)105;
        nArray2[8] = (int)103;
        nArray2[9] = (int)105;
        nArray2[10] = (int)110;
        nArray2[11] = (int)97;
        nArray2[12] = (int)108;
        this.NPcDw = new cJ(this, mr.clS(nArray2)).WE(true);
        int[] nArray3 = new int[19];
        nArray3[0] = (int)65;
        nArray3[1] = (int)112;
        nArray3[2] = (int)112;
        nArray3[3] = (int)108;
        nArray3[4] = (int)121;
        nArray3[5] = (int)32;
        nArray3[6] = (int)84;
        nArray3[7] = (int)111;
        nArray3[8] = (int)32;
        nArray3[9] = (int)79;
        nArray3[10] = (int)119;
        nArray3[11] = (int)110;
        nArray3[12] = (int)32;
        nArray3[13] = (int)80;
        nArray3[14] = (int)108;
        nArray3[15] = (int)97;
        nArray3[16] = (int)121;
        nArray3[17] = (int)101;
        nArray3[18] = (int)114;
        this.ZXujq = new cJ(this, mr.clS(nArray3)).WE(false);
        int[] nArray4 = new int[6];
        nArray4[0] = (int)69;
        nArray4[1] = (int)102;
        nArray4[2] = (int)102;
        nArray4[3] = (int)101;
        nArray4[4] = (int)99;
        nArray4[5] = (int)116;
        this.cdTwb = new ct(this, mr.clS(nArray4));
        this.XdqBo = new cu(this.cdTwb, mr.clS(new int[]{(int)71, (int)108, (int)97, (int)115, (int)115})).SY();
        this.zysSC = new cu(this.cdTwb, mr.clS(new int[]{(int)87, (int)97, (int)116, (int)101, (int)114}));
        int[] nArray5 = new int[6];
        nArray5[0] = (int)67;
        nArray5[1] = (int)104;
        nArray5[2] = (int)114;
        nArray5[3] = (int)111;
        nArray5[4] = (int)109;
        nArray5[5] = (int)101;
        this.SpKOT = new cu(this.cdTwb, mr.clS(nArray5));
        int[] nArray6 = new int[12];
        nArray6[0] = (int)76;
        nArray6[1] = (int)105;
        nArray6[2] = (int)113;
        nArray6[3] = (int)117;
        nArray6[4] = (int)105;
        nArray6[5] = (int)100;
        nArray6[6] = (int)32;
        nArray6[7] = (int)77;
        nArray6[8] = (int)101;
        nArray6[9] = (int)116;
        nArray6[10] = (int)97;
        nArray6[11] = (int)108;
        this.ezBRY = new cu(this.cdTwb, mr.clS(nArray6));
        int[] nArray7 = new int[10];
        nArray7[0] = (int)82;
        nArray7[1] = (int)101;
        nArray7[2] = (int)102;
        nArray7[3] = (int)114;
        nArray7[4] = (int)97;
        nArray7[5] = (int)99;
        nArray7[6] = (int)116;
        nArray7[7] = (int)105;
        nArray7[8] = (int)111;
        nArray7[9] = (int)110;
        this.zXfLC = new cC(this, mr.clS(nArray7)).Vy(1.0).Vw(0.0).Vx(100.0).VA(50.0);
        this.ASroa = new cC(this, mr.clS(new int[]{(int)68, (int)101, (int)112, (int)116, (int)104})).Vy(1.0).Vw(1.0).Vx(100.0).VA(20.0);
        this.ClbaS = new cC(this, mr.clS(new int[]{(int)70, (int)114, (int)111, (int)115, (int)116})).Vy(1.0).Vw(0.0).Vx(100.0).VA(0.0);
        int[] nArray8 = new int[10];
        nArray8[0] = (int)68;
        nArray8[1] = (int)105;
        nArray8[2] = (int)115;
        nArray8[3] = (int)112;
        nArray8[4] = (int)101;
        nArray8[5] = (int)114;
        nArray8[6] = (int)115;
        nArray8[7] = (int)105;
        nArray8[8] = (int)111;
        nArray8[9] = (int)110;
        this.uMtSN = new cC(this, mr.clS(nArray8)).Vy(1.0).Vw(0.0).Vx(100.0).VA(0.0);
        int[] nArray9 = new int[10];
        nArray9[0] = (int)84;
        nArray9[1] = (int)105;
        nArray9[2] = (int)110;
        nArray9[3] = (int)116;
        nArray9[4] = (int)32;
        nArray9[5] = (int)67;
        nArray9[6] = (int)111;
        nArray9[7] = (int)108;
        nArray9[8] = (int)111;
        nArray9[9] = (int)114;
        this.EzLNk = new cG(this, mr.clS(nArray9)).Uf(mG.cnR(0.0f, 0.0f, 0.0f, 0.0f));
        int[] nArray10 = new int[11];
        nArray10[0] = (int)76;
        nArray10[1] = (int)105;
        nArray10[2] = (int)103;
        nArray10[3] = (int)104;
        nArray10[4] = (int)116;
        nArray10[5] = (int)32;
        nArray10[6] = (int)65;
        nArray10[7] = (int)110;
        nArray10[8] = (int)103;
        nArray10[9] = (int)108;
        nArray10[10] = (int)101;
        this.xnzNS = new cC(this, mr.clS(nArray10)).Vy(1.0).Vw(-180.0).Vx(180.0).VA(-45.0).Vz(CRjla);
        int[] nArray11 = new int[15];
        nArray11[0] = (int)76;
        nArray11[1] = (int)105;
        nArray11[2] = (int)103;
        nArray11[3] = (int)104;
        nArray11[4] = (int)116;
        nArray11[5] = (int)32;
        nArray11[6] = (int)73;
        nArray11[7] = (int)110;
        nArray11[8] = (int)116;
        nArray11[9] = (int)101;
        nArray11[10] = (int)110;
        nArray11[11] = (int)115;
        nArray11[12] = (int)105;
        nArray11[13] = (int)116;
        nArray11[14] = (int)121;
        this.iEdAT = new cC(this, mr.clS(nArray11)).Vy(1.0).Vw(0.0).Vx(100.0).VA(40.0);
        int[] nArray12 = new int[11];
        nArray12[0] = (int)66;
        nArray12[1] = (int)101;
        nArray12[2] = (int)118;
        nArray12[3] = (int)101;
        nArray12[4] = (int)108;
        nArray12[5] = (int)32;
        nArray12[6] = (int)67;
        nArray12[7] = (int)111;
        nArray12[8] = (int)108;
        nArray12[9] = (int)111;
        nArray12[10] = (int)114;
        this.AXVpM = new cG(this, mr.clS(nArray12)).Uf(mG.cnR(255.0f, 255.0f, 255.0f, 204.0f));
        iS[] iSArray = dh.afl();
        try {
            this.UDqup = new cC(this, mr.clS(new int[]{(int)83, (int)112, (int)108, (int)97, (int)121})).Vy(1.0).Vw(0.0).Vx(100.0).VA(30.0);
            int[] nArray13 = new int[11];
            nArray13[0] = (int)87;
            nArray13[1] = (int)97;
            nArray13[2] = (int)116;
            nArray13[3] = (int)101;
            nArray13[4] = (int)114;
            nArray13[5] = (int)32;
            nArray13[6] = (int)67;
            nArray13[7] = (int)111;
            nArray13[8] = (int)108;
            nArray13[9] = (int)111;
            nArray13[10] = (int)114;
            this.OYjhT = new cG(this, mr.clS(nArray13)).Uf(mG.cnR(25.0f, 76.0f, 178.0f, 255.0f));
            int[] nArray14 = new int[10];
            nArray14[0] = (int)70;
            nArray14[1] = (int)108;
            nArray14[2] = (int)111;
            nArray14[3] = (int)119;
            nArray14[4] = (int)32;
            nArray14[5] = (int)83;
            nArray14[6] = (int)112;
            nArray14[7] = (int)101;
            nArray14[8] = (int)101;
            nArray14[9] = (int)100;
            this.ZTvWj = new cC(this, mr.clS(nArray14)).Vy(0.1).Vw(0.1).Vx(5.0).VA(1.0);
            int[] nArray15 = new int[10];
            nArray15[0] = (int)70;
            nArray15[1] = (int)108;
            nArray15[2] = (int)111;
            nArray15[3] = (int)119;
            nArray15[4] = (int)32;
            nArray15[5] = (int)83;
            nArray15[6] = (int)99;
            nArray15[7] = (int)97;
            nArray15[8] = (int)108;
            nArray15[9] = (int)101;
            this.tPrjL = new cC(this, mr.clS(nArray15)).Vy(0.5).Vw(1.0).Vx(10.0).VA(3.0);
            int[] nArray16 = new int[11];
            nArray16[0] = (int)87;
            nArray16[1] = (int)97;
            nArray16[2] = (int)118;
            nArray16[3] = (int)101;
            nArray16[4] = (int)32;
            nArray16[5] = (int)72;
            nArray16[6] = (int)101;
            nArray16[7] = (int)105;
            nArray16[8] = (int)103;
            nArray16[9] = (int)104;
            nArray16[10] = (int)116;
            this.EADmc = new cC(this, mr.clS(nArray16)).Vy(0.05).Vw(0.1).Vx(1.5).VA(0.5);
            int[] nArray17 = new int[10];
            nArray17[0] = (int)67;
            nArray17[1] = (int)104;
            nArray17[2] = (int)111;
            nArray17[3] = (int)112;
            nArray17[4] = (int)112;
            nArray17[5] = (int)105;
            nArray17[6] = (int)110;
            nArray17[7] = (int)101;
            nArray17[8] = (int)115;
            nArray17[9] = (int)115;
            this.NBZEF = new cC(this, mr.clS(nArray17)).Vy(0.5).Vw(1.0).Vx(8.0).VA(3.0);
            int[] nArray18 = new int[9];
            nArray18[0] = (int)87;
            nArray18[1] = (int)97;
            nArray18[2] = (int)118;
            nArray18[3] = (int)101;
            nArray18[4] = (int)32;
            nArray18[5] = (int)70;
            nArray18[6] = (int)114;
            nArray18[7] = (int)101;
            nArray18[8] = (int)113;
            this.GJXHL = new cC(this, mr.clS(nArray18)).Vy(0.01).Vw(0.05).Vx(1.0).VA(0.24);
            int[] nArray19 = new int[16];
            nArray19[0] = (int)87;
            nArray19[1] = (int)97;
            nArray19[2] = (int)116;
            nArray19[3] = (int)101;
            nArray19[4] = (int)114;
            nArray19[5] = (int)32;
            nArray19[6] = (int)82;
            nArray19[7] = (int)101;
            nArray19[8] = (int)102;
            nArray19[9] = (int)114;
            nArray19[10] = (int)97;
            nArray19[11] = (int)99;
            nArray19[12] = (int)116;
            nArray19[13] = (int)105;
            nArray19[14] = (int)111;
            nArray19[15] = (int)110;
            this.cyXLZ = new cC(this, mr.clS(nArray19)).Vy(1.0).Vw(0.0).Vx(100.0).VA(30.0);
            int[] nArray20 = new int[14];
            nArray20[0] = (int)87;
            nArray20[1] = (int)97;
            nArray20[2] = (int)116;
            nArray20[3] = (int)101;
            nArray20[4] = (int)114;
            nArray20[5] = (int)32;
            nArray20[6] = (int)83;
            nArray20[7] = (int)112;
            nArray20[8] = (int)101;
            nArray20[9] = (int)99;
            nArray20[10] = (int)117;
            nArray20[11] = (int)108;
            nArray20[12] = (int)97;
            nArray20[13] = (int)114;
            this.JGyvQ = new cC(this, mr.clS(nArray20)).Vy(0.1).Vw(0.0).Vx(2.0).VA(0.6);
            int[] nArray21 = new int[11];
            nArray21[0] = (int)67;
            nArray21[1] = (int)104;
            nArray21[2] = (int)114;
            nArray21[3] = (int)111;
            nArray21[4] = (int)109;
            nArray21[5] = (int)101;
            nArray21[6] = (int)32;
            nArray21[7] = (int)84;
            nArray21[8] = (int)105;
            nArray21[9] = (int)110;
            nArray21[10] = (int)116;
            this.otjWl = new cG(this, mr.clS(nArray21)).Uf(mG.cnR(216.0f, 216.0f, 230.0f, 255.0f));
            int[] nArray22 = new int[20];
            nArray22[0] = (int)67;
            nArray22[1] = (int)104;
            nArray22[2] = (int)114;
            nArray22[3] = (int)111;
            nArray22[4] = (int)109;
            nArray22[5] = (int)101;
            nArray22[6] = (int)32;
            nArray22[7] = (int)82;
            nArray22[8] = (int)105;
            nArray22[9] = (int)109;
            nArray22[10] = (int)32;
            nArray22[11] = (int)83;
            nArray22[12] = (int)104;
            nArray22[13] = (int)97;
            nArray22[14] = (int)114;
            nArray22[15] = (int)112;
            nArray22[16] = (int)110;
            nArray22[17] = (int)101;
            nArray22[18] = (int)115;
            nArray22[19] = (int)115;
            this.FXkgM = new cC(this, mr.clS(nArray22)).Vy(0.5).Vw(1.0).Vx(10.0).VA(3.0);
            int[] nArray23 = new int[20];
            nArray23[0] = (int)67;
            nArray23[1] = (int)104;
            nArray23[2] = (int)114;
            nArray23[3] = (int)111;
            nArray23[4] = (int)109;
            nArray23[5] = (int)101;
            nArray23[6] = (int)32;
            nArray23[7] = (int)82;
            nArray23[8] = (int)105;
            nArray23[9] = (int)109;
            nArray23[10] = (int)32;
            nArray23[11] = (int)73;
            nArray23[12] = (int)110;
            nArray23[13] = (int)116;
            nArray23[14] = (int)101;
            nArray23[15] = (int)110;
            nArray23[16] = (int)115;
            nArray23[17] = (int)105;
            nArray23[18] = (int)116;
            nArray23[19] = (int)121;
            this.FQkGY = new cC(this, mr.clS(nArray23)).Vy(0.1).Vw(0.0).Vx(3.0).VA(2.0);
            int[] nArray24 = new int[12];
            nArray24[0] = (int)67;
            nArray24[1] = (int)104;
            nArray24[2] = (int)114;
            nArray24[3] = (int)111;
            nArray24[4] = (int)109;
            nArray24[5] = (int)101;
            nArray24[6] = (int)32;
            nArray24[7] = (int)83;
            nArray24[8] = (int)112;
            nArray24[9] = (int)101;
            nArray24[10] = (int)101;
            nArray24[11] = (int)100;
            this.EFJph = new cC(this, mr.clS(nArray24)).Vy(0.1).Vw(0.1).Vx(5.0).VA(1.0);
            int[] nArray25 = new int[6];
            nArray25[0] = (int)80;
            nArray25[1] = (int)114;
            nArray25[2] = (int)101;
            nArray25[3] = (int)115;
            nArray25[4] = (int)101;
            nArray25[5] = (int)116;
            this.yZFow = new ct(this, mr.clS(nArray25));
            int[] nArray26 = new int[7];
            nArray26[0] = (int)68;
            nArray26[1] = (int)101;
            nArray26[2] = (int)102;
            nArray26[3] = (int)97;
            nArray26[4] = (int)117;
            nArray26[5] = (int)108;
            nArray26[6] = (int)116;
            this.XOcqL = new cu(this.yZFow, mr.clS(nArray26)).SY();
            this.ixTDC = new cu(this.yZFow, mr.clS(new int[]{(int)78, (int)101, (int)111, (int)110}));
            int[] nArray27 = new int[6];
            nArray27[0] = (int)67;
            nArray27[1] = (int)104;
            nArray27[2] = (int)114;
            nArray27[3] = (int)111;
            nArray27[4] = (int)109;
            nArray27[5] = (int)101;
            this.UMvcY = new cu(this.yZFow, mr.clS(nArray27));
            this.LcpZq = new cu(this.yZFow, mr.clS(new int[]{(int)79, (int)99, (int)101, (int)97, (int)110}));
            this.EMNhW = new cu(this.yZFow, mr.clS(new int[]{(int)84, (int)111, (int)120, (int)105, (int)99}));
            this.xuMLa = new cu(this.yZFow, mr.clS(new int[]{(int)70, (int)105, (int)114, (int)101}));
            this.FlNtk = new cC(this, mr.clS(new int[]{(int)83, (int)99, (int)97, (int)108, (int)101})).Vy(0.1).Vw(0.5).Vx(20.0).VA(1.02);
            int[] nArray28 = new int[12];
            nArray28[0] = (int)78;
            nArray28[1] = (int)111;
            nArray28[2] = (int)105;
            nArray28[3] = (int)115;
            nArray28[4] = (int)101;
            nArray28[5] = (int)32;
            nArray28[6] = (int)70;
            nArray28[7] = (int)114;
            nArray28[8] = (int)101;
            nArray28[9] = (int)113;
            nArray28[10] = (int)32;
            nArray28[11] = (int)88;
            this.rTzGW = new cC(this, mr.clS(nArray28)).Vy(0.1).Vw(0.1).Vx(20.0).VA(1.7);
            int[] nArray29 = new int[12];
            nArray29[0] = (int)78;
            nArray29[1] = (int)111;
            nArray29[2] = (int)105;
            nArray29[3] = (int)115;
            nArray29[4] = (int)101;
            nArray29[5] = (int)32;
            nArray29[6] = (int)70;
            nArray29[7] = (int)114;
            nArray29[8] = (int)101;
            nArray29[9] = (int)113;
            nArray29[10] = (int)32;
            nArray29[11] = (int)89;
            this.MvQMm = new cC(this, mr.clS(nArray29)).Vy(0.1).Vw(0.1).Vx(20.0).VA(7.9);
            int[] nArray30 = new int[13];
            nArray30[0] = (int)78;
            nArray30[1] = (int)111;
            nArray30[2] = (int)105;
            nArray30[3] = (int)115;
            nArray30[4] = (int)101;
            nArray30[5] = (int)32;
            nArray30[6] = (int)70;
            nArray30[7] = (int)114;
            nArray30[8] = (int)101;
            nArray30[9] = (int)113;
            nArray30[10] = (int)32;
            nArray30[11] = (int)88;
            nArray30[12] = (int)50;
            this.yzDhD = new cC(this, mr.clS(nArray30)).Vy(0.1).Vw(0.1).Vx(20.0).VA(5.8);
            int[] nArray31 = new int[13];
            nArray31[0] = (int)78;
            nArray31[1] = (int)111;
            nArray31[2] = (int)105;
            nArray31[3] = (int)115;
            nArray31[4] = (int)101;
            nArray31[5] = (int)32;
            nArray31[6] = (int)70;
            nArray31[7] = (int)114;
            nArray31[8] = (int)101;
            nArray31[9] = (int)113;
            nArray31[10] = (int)32;
            nArray31[11] = (int)89;
            nArray31[12] = (int)50;
            this.XpTXH = new cC(this, mr.clS(nArray31)).Vy(0.1).Vw(0.1).Vx(20.0).VA(4.5);
            int[] nArray32 = new int[16];
            nArray32[0] = (int)87;
            nArray32[1] = (int)97;
            nArray32[2] = (int)114;
            nArray32[3] = (int)112;
            nArray32[4] = (int)32;
            nArray32[5] = (int)73;
            nArray32[6] = (int)110;
            nArray32[7] = (int)116;
            nArray32[8] = (int)101;
            nArray32[9] = (int)110;
            nArray32[10] = (int)115;
            nArray32[11] = (int)105;
            nArray32[12] = (int)116;
            nArray32[13] = (int)121;
            nArray32[14] = (int)32;
            nArray32[15] = (int)88;
            this.kOSLY = new cC(this, mr.clS(nArray32)).Vy(0.05).Vw(-5.0).Vx(5.0).VA(0.62);
            int[] nArray33 = new int[16];
            nArray33[0] = (int)87;
            nArray33[1] = (int)97;
            nArray33[2] = (int)114;
            nArray33[3] = (int)112;
            nArray33[4] = (int)32;
            nArray33[5] = (int)73;
            nArray33[6] = (int)110;
            nArray33[7] = (int)116;
            nArray33[8] = (int)101;
            nArray33[9] = (int)110;
            nArray33[10] = (int)115;
            nArray33[11] = (int)105;
            nArray33[12] = (int)116;
            nArray33[13] = (int)121;
            nArray33[14] = (int)32;
            nArray33[15] = (int)89;
            this.wrOWy = new cC(this, mr.clS(nArray33)).Vy(0.05).Vw(-5.0).Vx(5.0).VA(1.0);
            int[] nArray34 = new int[9];
            nArray34[0] = (int)67;
            nArray34[1] = (int)111;
            nArray34[2] = (int)108;
            nArray34[3] = (int)111;
            nArray34[4] = (int)114;
            nArray34[5] = (int)32;
            nArray34[6] = (int)79;
            nArray34[7] = (int)110;
            nArray34[8] = (int)101;
            this.EIoNG = new cG(this, mr.clS(nArray34)).Uf(mG.cnR(179.0f, 179.0f, 179.0f, 255.0f));
            int[] nArray35 = new int[9];
            nArray35[0] = (int)67;
            nArray35[1] = (int)111;
            nArray35[2] = (int)108;
            nArray35[3] = (int)111;
            nArray35[4] = (int)114;
            nArray35[5] = (int)32;
            nArray35[6] = (int)84;
            nArray35[7] = (int)119;
            nArray35[8] = (int)111;
            this.OrbAE = new cG(this, mr.clS(nArray35)).Uf(mG.cnR(32.0f, 32.0f, 32.0f, 255.0f));
            int[] nArray36 = new int[11];
            nArray36[0] = (int)67;
            nArray36[1] = (int)111;
            nArray36[2] = (int)108;
            nArray36[3] = (int)111;
            nArray36[4] = (int)114;
            nArray36[5] = (int)32;
            nArray36[6] = (int)84;
            nArray36[7] = (int)104;
            nArray36[8] = (int)114;
            nArray36[9] = (int)101;
            nArray36[10] = (int)101;
            this.EMRGt = new cG(this, mr.clS(nArray36)).Uf(mG.cnR(37.0f, 37.0f, 37.0f, 255.0f));
            int[] nArray37 = new int[10];
            nArray37[0] = (int)67;
            nArray37[1] = (int)111;
            nArray37[2] = (int)108;
            nArray37[3] = (int)111;
            nArray37[4] = (int)114;
            nArray37[5] = (int)32;
            nArray37[6] = (int)70;
            nArray37[7] = (int)111;
            nArray37[8] = (int)117;
            nArray37[9] = (int)114;
            this.YNhsQ = new cG(this, mr.clS(nArray37)).Uf(mG.cnR(49.0f, 49.0f, 49.0f, 255.0f));
            int[] nArray38 = new int[10];
            nArray38[0] = (int)66;
            nArray38[1] = (int)114;
            nArray38[2] = (int)105;
            nArray38[3] = (int)103;
            nArray38[4] = (int)104;
            nArray38[5] = (int)116;
            nArray38[6] = (int)110;
            nArray38[7] = (int)101;
            nArray38[8] = (int)115;
            nArray38[9] = (int)115;
            this.YsidR = new cC(this, mr.clS(nArray38)).Vy(0.1).Vw(0.1).Vx(10.0).VA(1.0);
            this.MzFuh = new cC(this, mr.clS(new int[]{(int)83, (int)112, (int)101, (int)101, (int)100})).Vy(0.1).Vw(0.0).Vx(5.0).VA(0.0);
            int[] nArray39 = new int[9];
            nArray39[0] = (int)82;
            nArray39[1] = (int)101;
            nArray39[2] = (int)100;
            nArray39[3] = (int)32;
            nArray39[4] = (int)83;
            nArray39[5] = (int)104;
            nArray39[6] = (int)105;
            nArray39[7] = (int)102;
            nArray39[8] = (int)116;
            this.KhwEu = new cC(this, mr.clS(nArray39)).Vy(0.05).Vw(-3.0).Vx(3.0).VA(0.0);
            int[] nArray40 = new int[10];
            nArray40[0] = (int)66;
            nArray40[1] = (int)108;
            nArray40[2] = (int)117;
            nArray40[3] = (int)101;
            nArray40[4] = (int)32;
            nArray40[5] = (int)83;
            nArray40[6] = (int)104;
            nArray40[7] = (int)105;
            nArray40[8] = (int)102;
            nArray40[9] = (int)116;
            this.wrqKr = new cC(this, mr.clS(nArray40)).Vy(0.05).Vw(-3.0).Vx(3.0).VA(0.0);
            int[] nArray41 = new int[7];
            nArray41[0] = (int)67;
            nArray41[1] = (int)111;
            nArray41[2] = (int)110;
            nArray41[3] = (int)116;
            nArray41[4] = (int)111;
            nArray41[5] = (int)117;
            nArray41[6] = (int)114;
            this.rnTiy = new cC(this, mr.clS(nArray41)).Vy(0.05).Vw(0.0).Vx(2.0).VA(0.0);
            int[] nArray42 = new int[8];
            nArray42[0] = (int)83;
            nArray42[1] = (int)111;
            nArray42[2] = (int)102;
            nArray42[3] = (int)116;
            nArray42[4] = (int)110;
            nArray42[5] = (int)101;
            nArray42[6] = (int)115;
            nArray42[7] = (int)115;
            this.lVRRm = new cC(this, mr.clS(nArray42)).Vy(0.05).Vw(0.1).Vx(4.0).VA(1.0);
            this.zXfLC.Vf(this.XdqBo::SZ);
            this.ASroa.Vf(this.XdqBo::SZ);
            this.ClbaS.Vf(this.XdqBo::SZ);
            this.uMtSN.Vf(this.XdqBo::SZ);
            this.EzLNk.Vf(this.XdqBo::SZ);
            this.xnzNS.Vf(this.XdqBo::SZ);
            this.iEdAT.Vf(this.XdqBo::SZ);
            this.AXVpM.Vf(this.XdqBo::SZ);
            this.UDqup.Vf(this.XdqBo::SZ);
            this.OYjhT.Vf(this.zysSC::SZ);
            this.ZTvWj.Vf(this.zysSC::SZ);
            this.tPrjL.Vf(this.zysSC::SZ);
            this.EADmc.Vf(this.zysSC::SZ);
            this.NBZEF.Vf(this.zysSC::SZ);
            this.GJXHL.Vf(this.zysSC::SZ);
            this.cyXLZ.Vf(this.zysSC::SZ);
            this.JGyvQ.Vf(this.zysSC::SZ);
            this.otjWl.Vf(this.SpKOT::SZ);
            this.FXkgM.Vf(this.SpKOT::SZ);
            this.FQkGY.Vf(this.SpKOT::SZ);
            this.EFJph.Vf(this.SpKOT::SZ);
            this.yZFow.Vf(this.ezBRY::SZ);
            this.FlNtk.Vf(this.ezBRY::SZ);
            this.rTzGW.Vf(this.ezBRY::SZ);
            this.MvQMm.Vf(this.ezBRY::SZ);
            this.yzDhD.Vf(this.ezBRY::SZ);
            this.XpTXH.Vf(this.ezBRY::SZ);
            this.kOSLY.Vf(this.ezBRY::SZ);
            this.wrOWy.Vf(this.ezBRY::SZ);
            this.EIoNG.Vf(this.ezBRY::SZ);
            this.OrbAE.Vf(this.ezBRY::SZ);
            this.EMRGt.Vf(this.ezBRY::SZ);
            this.YNhsQ.Vf(this.ezBRY::SZ);
            this.YsidR.Vf(this.ezBRY::SZ);
            this.MzFuh.Vf(this.ezBRY::SZ);
            this.KhwEu.Vf(this.ezBRY::SZ);
            this.wrqKr.Vf(this.ezBRY::SZ);
            this.rnTiy.Vf(this.ezBRY::SZ);
            this.lVRRm.Vf(this.ezBRY::SZ);
            this.yZFow.Ve(this::aiL);
            if (iS.bwL() == null) {
                dh.afk(new iS[2]);
            }
        }
        catch (MatchException matchException) {
            throw dv.aiO(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    dv.IOGuL = gb.aYR(-8065709992781591446L, -3296630780960089127L, MethodHandles.lookup().lookupClass()).a(221871810271974L);
                    var11 = dv.IOGuL ^ 46605361488946L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u0097\u00be\u00a5\u00c8\u00bfo\u00e6c".getBytes("ISO-8859-1"));
                ** while (true)
                dv.CRjla = dv.aiP(var15_3).intern();
                dv.lzTMb = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[116];
                var3_7 = 0;
                var4_8 = "G\u00a0\u00f0n\u0019\u00f6\u00a9J\u00878zv\u00e0\u00ea\u0005$;Nl:\u00ed\u00c2\u00c0\u009a\u00d7\u0018\u00e57\u00b7\u00e1\u00b6G\u00fd\u00c8}\u00f3\u00ff\u00db6\u00fd5%L\u0000\u00c4\u008f\u00b0\u0097\u0013)HI`\u00a2\u0082V\u00d6\u0094\u00a7D\u00a1\u0096\u008f\u00ae\u00be\u0000\u00ec\u00d3\u0010\u0005\u00c9\u000b\u00f29;*\u00a1\u00be\u001c\u009f\b \u0010\u00b6\u00f6\u009b;\u001a2\u007fu\u00d4\u0007\f\u00c9\u0082E#M\u0089\u0098\u00e2\u0000\u00b6\u00eb\u00e5\u00ac\u0092Ql\u008e\u00f9\u00ac9j\u008b3F\rH\u00adn;\u00dc\u001c^\u00b6\u0000\u00f6\r/\u0084C%\u001ft\u00eb\u00e6\u00bfm\u00f6H\u00d3\b\u0080\u0088\u001d\u00d3c\u00fd\u009a\u00ea\u001f\u00e2b\u00b0k\u0093\u00f7\u0007\u00b5\u00e6\u009a\u009a;,0#yt|\u00ba\u000f\u0016\u00d2T\u008c\u0013\u001d'\u00af\u00ca\u0016Z\u00ea2\u0006eeNWq\u00c7\u00beR\u00d3\\.<H\u00f4\u0003\\a\u00e4 \u00a2\u00bf\u009fM\u0086b\\\u00e1\u0081p\u00f6I\u00c7\u008aW\u0094\u00e0\u00c1\u00b0U\u00b6P8\u0093\u00b9\u000f\u0000\u0096\u00ea\u00e7VJ\u00fc\u0017%2\u00d5\u00c3Z\u0013\u0092ep\u009ct\u00dc\u0093\u00c9F\n_\u00e7\u00b7Q~\u0002\u0088\u00f18\u0004\u00a9\u00c4\"}\u00bb\u0005\u0092\u00a7\u00ef\u00f6\u001bM4^\u00d4b'\u00ab\u0005*6q\u00e6\u00ca\\\u0095fwk\u00c4\u00ec\u00b4\u0017\u00fa\u00ec\u000e\u009b\u00f0\u00f0\u00ff\u00de\u00c5\u00fc\u00e47\u009e\u00d4\u009f\"%\u00b1N`\u009cg\u00c8\u0086\u008b\u00df<8\u00b6YH\u00b6-z\u00f5\u00aa\u0010]]\u001e\u0014js\u00f2\u001b\u00cc\u00f5\u009a\u0093t\u00c7~\u008a-\u00ba\u00cd\u009c\u00bc\u007f\u00a6pD\u0082\u00e8\u00d5\u009aO?|O:\u00a6\u00d7\u00d1]\u00cd`>\u0095\u0017)\u008b<\u00e9\u00a6\b\u0001\u0094\u008a0~:\u0095\u009a1\u00bd\u000b\u00ad(t\u0016\u00a4\u00e2\u00a7P\u0007LO\u00ad\u0002\u0088\u00b2w\ne\u0007y%\u00b8\u008f\u00cb\u0093\u009b\u00eb\u0014\u009ak\u001d\u00ec\nA\\\u0017\u00e2Vg\u0099\u008f\u00e7\u00fe\u000fn\u00d0\u00d26\u009e\u00f0o\u0080\u0003\u00b5!\u00df\u001a\u00ef\u00ba\u00ddk\u00b8\u00a4\u00cbQ\u00c1P.\u0099\u00ba\u00a0G\u00d1;\u00ea\u0011\b\u00e8S\u00d2\u00d6\u00cd\u00ce\u00f3\u00a1_\u0099<\u00b2C'\u001ar\u00e9{\u00db\u00f8,\u0083\u00ba\u00f3_i\b\u00f8\u00ee\u0088\u0082\u00e3\u0098\u0080VVK\u0006W&\u0095$\u00ac%M\u00c31B3Y\u00d2\u00aasG\u00f9\u00a2y\u00d9\u00da\u00a5\u001a[\u00fc\u0081\u008d_w\u00b1e=f\u00e7[zjOU\u009d-M\u00de\u00fd\u0081hHS\u00b1@E_\u00c2\u0091#+\r\u00b1\u0093\u00b7N\u00ab\u00f5D\u009e\u009a\u00aaA\u0083\u00e5t \u00a9\u00b1\u0082\u00f6\u00dc$\u00ba\u0000\u008a\u00c5o.]\u00dc\u00faf\u00a3\u00a8\u00cc,\\\u008c\u00c3\u00fd\u0080\b\u001f<\u00a1\u007f\u0017\u000b\u00a0\u00f98\u00b9\u00f7Y\t2iZ\u0018\"\u00adw\u00c9\u00acH\u001b\u00d9\u00d2\u009a\u0004\u009b\r\u00fb\u0084\u00c5\u00e7+\u0089h\u00d3Z\u00e3\u00cee\u00ccq\u00a9~\u0018\u00faH2\u0087B\u00e8\u00b7w\u008f\u0001&\u00cf(p\u009b\u00da\u00dc\u00b7%\u009a\u00c7\u0091\u00a2O\u00a1L\u00f1\u00e5F\t\u008d\u0080\u00c4=\u00f0\u00bc\u00f2\u00f9\u00bf\u00a3q\u00b5\u00a7\u00a3\u00d3\u00eb\u00d2i\u00ac]\u00dc|\u00ea\u00ca\u008fo\u00b3\u009b\u00f8s\u00c7\u007f\u00afp\u00c7\u00c0pS\u009f\u00ae\u00bbH^\u00ae\u00b1\u007fW\u0005\\\u0084\u0089\u00f9\u0096q,\u00daY\u00e8\u008b\u00c4#*N\u00b8}\u00ba\u008d2V\rh\u00a5s\u00a9{\u00ec#:\u009ap\u000f0\u0000\u0016\u00f6\u00de5\u008b\u00a7\u00a7\u00f5A&\u0017?\u00e0h\u00b1-\u009d\u00edvw\u00aaq\u0018I\u00aa\u0098;\u00be\t\bo5\n\u008dj\u00db;\u009a\u00d4V>\u00faZ\u009dc<u\u0004\u00c1S\u0000\u001de_\u0096\u008cL\u00fe\u0083\u0081+\u0013\u00d5\u0083d\u00a3\u00926\f\u00d4{]\u00d09\u00c9\u00d57\u00e3\u00ee\u000f\u0017\u009b\u00c1\u00e5\u00ce_\u00d3\u00af\u00cf\u008b\u00da*]\t~+\u00e0l\u00da\u00d7\u00f8{\u0019\u00be\u00f8\u00c4\u001f\u00a1\u000b\u00a6\u00c5\u00b0\u0002L\u00e0\u00ed\u00fa\u0098\u00c0=z\u00a0#\u00b7\u0014\u0010\u00c1\u00e3\u00c2k\u009bj\u00edd\u0087\u0006&)\u00da\u000f\u008e\u00c3\u00a6";
                var5_9 = "G\u00a0\u00f0n\u0019\u00f6\u00a9J\u00878zv\u00e0\u00ea\u0005$;Nl:\u00ed\u00c2\u00c0\u009a\u00d7\u0018\u00e57\u00b7\u00e1\u00b6G\u00fd\u00c8}\u00f3\u00ff\u00db6\u00fd5%L\u0000\u00c4\u008f\u00b0\u0097\u0013)HI`\u00a2\u0082V\u00d6\u0094\u00a7D\u00a1\u0096\u008f\u00ae\u00be\u0000\u00ec\u00d3\u0010\u0005\u00c9\u000b\u00f29;*\u00a1\u00be\u001c\u009f\b \u0010\u00b6\u00f6\u009b;\u001a2\u007fu\u00d4\u0007\f\u00c9\u0082E#M\u0089\u0098\u00e2\u0000\u00b6\u00eb\u00e5\u00ac\u0092Ql\u008e\u00f9\u00ac9j\u008b3F\rH\u00adn;\u00dc\u001c^\u00b6\u0000\u00f6\r/\u0084C%\u001ft\u00eb\u00e6\u00bfm\u00f6H\u00d3\b\u0080\u0088\u001d\u00d3c\u00fd\u009a\u00ea\u001f\u00e2b\u00b0k\u0093\u00f7\u0007\u00b5\u00e6\u009a\u009a;,0#yt|\u00ba\u000f\u0016\u00d2T\u008c\u0013\u001d'\u00af\u00ca\u0016Z\u00ea2\u0006eeNWq\u00c7\u00beR\u00d3\\.<H\u00f4\u0003\\a\u00e4 \u00a2\u00bf\u009fM\u0086b\\\u00e1\u0081p\u00f6I\u00c7\u008aW\u0094\u00e0\u00c1\u00b0U\u00b6P8\u0093\u00b9\u000f\u0000\u0096\u00ea\u00e7VJ\u00fc\u0017%2\u00d5\u00c3Z\u0013\u0092ep\u009ct\u00dc\u0093\u00c9F\n_\u00e7\u00b7Q~\u0002\u0088\u00f18\u0004\u00a9\u00c4\"}\u00bb\u0005\u0092\u00a7\u00ef\u00f6\u001bM4^\u00d4b'\u00ab\u0005*6q\u00e6\u00ca\\\u0095fwk\u00c4\u00ec\u00b4\u0017\u00fa\u00ec\u000e\u009b\u00f0\u00f0\u00ff\u00de\u00c5\u00fc\u00e47\u009e\u00d4\u009f\"%\u00b1N`\u009cg\u00c8\u0086\u008b\u00df<8\u00b6YH\u00b6-z\u00f5\u00aa\u0010]]\u001e\u0014js\u00f2\u001b\u00cc\u00f5\u009a\u0093t\u00c7~\u008a-\u00ba\u00cd\u009c\u00bc\u007f\u00a6pD\u0082\u00e8\u00d5\u009aO?|O:\u00a6\u00d7\u00d1]\u00cd`>\u0095\u0017)\u008b<\u00e9\u00a6\b\u0001\u0094\u008a0~:\u0095\u009a1\u00bd\u000b\u00ad(t\u0016\u00a4\u00e2\u00a7P\u0007LO\u00ad\u0002\u0088\u00b2w\ne\u0007y%\u00b8\u008f\u00cb\u0093\u009b\u00eb\u0014\u009ak\u001d\u00ec\nA\\\u0017\u00e2Vg\u0099\u008f\u00e7\u00fe\u000fn\u00d0\u00d26\u009e\u00f0o\u0080\u0003\u00b5!\u00df\u001a\u00ef\u00ba\u00ddk\u00b8\u00a4\u00cbQ\u00c1P.\u0099\u00ba\u00a0G\u00d1;\u00ea\u0011\b\u00e8S\u00d2\u00d6\u00cd\u00ce\u00f3\u00a1_\u0099<\u00b2C'\u001ar\u00e9{\u00db\u00f8,\u0083\u00ba\u00f3_i\b\u00f8\u00ee\u0088\u0082\u00e3\u0098\u0080VVK\u0006W&\u0095$\u00ac%M\u00c31B3Y\u00d2\u00aasG\u00f9\u00a2y\u00d9\u00da\u00a5\u001a[\u00fc\u0081\u008d_w\u00b1e=f\u00e7[zjOU\u009d-M\u00de\u00fd\u0081hHS\u00b1@E_\u00c2\u0091#+\r\u00b1\u0093\u00b7N\u00ab\u00f5D\u009e\u009a\u00aaA\u0083\u00e5t \u00a9\u00b1\u0082\u00f6\u00dc$\u00ba\u0000\u008a\u00c5o.]\u00dc\u00faf\u00a3\u00a8\u00cc,\\\u008c\u00c3\u00fd\u0080\b\u001f<\u00a1\u007f\u0017\u000b\u00a0\u00f98\u00b9\u00f7Y\t2iZ\u0018\"\u00adw\u00c9\u00acH\u001b\u00d9\u00d2\u009a\u0004\u009b\r\u00fb\u0084\u00c5\u00e7+\u0089h\u00d3Z\u00e3\u00cee\u00ccq\u00a9~\u0018\u00faH2\u0087B\u00e8\u00b7w\u008f\u0001&\u00cf(p\u009b\u00da\u00dc\u00b7%\u009a\u00c7\u0091\u00a2O\u00a1L\u00f1\u00e5F\t\u008d\u0080\u00c4=\u00f0\u00bc\u00f2\u00f9\u00bf\u00a3q\u00b5\u00a7\u00a3\u00d3\u00eb\u00d2i\u00ac]\u00dc|\u00ea\u00ca\u008fo\u00b3\u009b\u00f8s\u00c7\u007f\u00afp\u00c7\u00c0pS\u009f\u00ae\u00bbH^\u00ae\u00b1\u007fW\u0005\\\u0084\u0089\u00f9\u0096q,\u00daY\u00e8\u008b\u00c4#*N\u00b8}\u00ba\u008d2V\rh\u00a5s\u00a9{\u00ec#:\u009ap\u000f0\u0000\u0016\u00f6\u00de5\u008b\u00a7\u00a7\u00f5A&\u0017?\u00e0h\u00b1-\u009d\u00edvw\u00aaq\u0018I\u00aa\u0098;\u00be\t\bo5\n\u008dj\u00db;\u009a\u00d4V>\u00faZ\u009dc<u\u0004\u00c1S\u0000\u001de_\u0096\u008cL\u00fe\u0083\u0081+\u0013\u00d5\u0083d\u00a3\u00926\f\u00d4{]\u00d09\u00c9\u00d57\u00e3\u00ee\u000f\u0017\u009b\u00c1\u00e5\u00ce_\u00d3\u00af\u00cf\u008b\u00da*]\t~+\u00e0l\u00da\u00d7\u00f8{\u0019\u00be\u00f8\u00c4\u001f\u00a1\u000b\u00a6\u00c5\u00b0\u0002L\u00e0\u00ed\u00fa\u0098\u00c0=z\u00a0#\u00b7\u0014\u0010\u00c1\u00e3\u00c2k\u009bj\u00edd\u0087\u0006&)\u00da\u000f\u008e\u00c3\u00a6".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u00db\u009f\u0005\u00b5\u00f6$Q\u000fj}\u00c7#\u00930j\u00dc";
                    var5_9 = "\u00db\u009f\u0005\u00b5\u00f6$Q\u000fj}\u00c7#\u00930j\u00dc".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        dv.gttrI = var6_6;
        dv.VHyXc = new Integer[116];
    }

    public static boolean aiM(Entity entity) {
        dv dv2;
        block26: {
            boolean bl2;
            block25: {
                iS[] iSArray;
                block23: {
                    boolean bl3;
                    block22: {
                        block21: {
                            dv dv3;
                            block20: {
                                long l2 = IOGuL ^ 0x637B087BD376L;
                                dv2 = rD.dlJ().aZx(dv.class);
                                iSArray = dh.afl();
                                try {
                                    dv3 = dv2;
                                    if (iSArray != null) break block20;
                                    if (dv3 == null) break block21;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                                dv3 = dv2;
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                bl3 = dv3.bag();
                                                if (iSArray != null) break block22;
                                                if (!bl3) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw dv.aiO(matchException);
                                            }
                                            bl3 = dv2.NPcDw.WF();
                                            if (iSArray != null) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw dv.aiO(matchException);
                                        }
                                        if (!bl3) break block21;
                                    }
                                    catch (MatchException matchException) {
                                        throw dv.aiO(matchException);
                                    }
                                    bl3 = kn.YNOIY;
                                    if (iSArray != null) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                                if (!bl3) break block23;
                            }
                            catch (MatchException matchException) {
                                throw dv.aiO(matchException);
                            }
                        }
                        bl3 = false;
                    }
                    return bl3;
                }
                try {
                    block24: {
                        try {
                            try {
                                try {
                                    if (entity == null) break block24;
                                    bl2 = dv2.bab();
                                    if (iSArray != null) break block25;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                                if (!bl2) break block24;
                            }
                            catch (MatchException matchException) {
                                throw dv.aiO(matchException);
                            }
                            if (entity != rD.dlmvG.player) break block26;
                        }
                        catch (MatchException matchException) {
                            throw dv.aiO(matchException);
                        }
                    }
                    bl2 = false;
                }
                catch (MatchException matchException) {
                    throw dv.aiO(matchException);
                }
            }
            return bl2;
        }
        return dv2.jWIlg.VX(entity);
    }

    @hG
    public void aiI(go.sX sX2) {
        block55: {
            boolean bl2;
            Runnable runnable;
            block58: {
                iS[] iSArray;
                block56: {
                    block53: {
                        ArrayList<Entity> arrayList;
                        float f2;
                        MatrixStack matrixStack;
                        block52: {
                            boolean bl3;
                            ArrayList<Entity> arrayList2;
                            block46: {
                                long l2 = IOGuL ^ 0x12A69F9A0889L;
                                iSArray = dh.afl();
                                try {
                                    if (!this.bab()) {
                                        return;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                                matrixStack = sX2.bbh();
                                f2 = sX2.bbi();
                                arrayList2 = new ArrayList<Entity>();
                                for (Entity entity : rD.dlmvG.world.getEntities()) {
                                    block51: {
                                        boolean bl4;
                                        block50: {
                                            ClientPlayerEntity clientPlayerEntity;
                                            Entity entity2;
                                            block48: {
                                                block49: {
                                                    boolean bl5;
                                                    block47: {
                                                        try {
                                                            try {
                                                                bl3 = jJ.bIB(entity);
                                                                if (iSArray != null) break block46;
                                                                if (iSArray != null) break block47;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dv.aiO(matchException);
                                                            }
                                                            if (!bl3) continue;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dv.aiO(matchException);
                                                        }
                                                        bl5 = this.jWIlg.VX(entity);
                                                    }
                                                    try {
                                                        if (!bl5 && iSArray == null) continue;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dv.aiO(matchException);
                                                    }
                                                    try {
                                                        try {
                                                            try {
                                                                entity2 = entity;
                                                                clientPlayerEntity = rD.dlmvG.player;
                                                                if (iSArray != null) break block48;
                                                                if (entity2 != clientPlayerEntity) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dv.aiO(matchException);
                                                            }
                                                            if (this.ZXujq.WF()) break block49;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dv.aiO(matchException);
                                                        }
                                                        if (iSArray == null) continue;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dv.aiO(matchException);
                                                    }
                                                }
                                                entity2 = entity;
                                                clientPlayerEntity = rD.dlmvG.player;
                                            }
                                            try {
                                                try {
                                                    try {
                                                        if (entity2 != clientPlayerEntity) break block50;
                                                        bl4 = rD.dlmvG.options.getPerspective().isFirstPerson();
                                                        if (iSArray != null) break block51;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dv.aiO(matchException);
                                                    }
                                                    if (!bl4) break block50;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dv.aiO(matchException);
                                                }
                                                if (iSArray == null) continue;
                                            }
                                            catch (MatchException matchException) {
                                                throw dv.aiO(matchException);
                                            }
                                        }
                                        bl4 = arrayList2.add(entity);
                                    }
                                    if (iSArray == null) continue;
                                }
                                try {
                                    arrayList = arrayList2;
                                    if (iSArray != null) break block52;
                                    bl3 = arrayList.isEmpty();
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                            }
                            if (bl3) {
                                return;
                            }
                            arrayList = arrayList2;
                        }
                        runnable = () -> {
                            block7: {
                                long l2 = IOGuL ^ 0x7D50A0AC31C2L;
                                kn.YNOIY = true;
                                iS[] iSArray = dh.afl();
                                try {
                                    lH lH2 = new lH();
                                    for (Entity entity : arrayList) {
                                        try {
                                            lH2.cgm(kn.bQt(entity, f2, matrixStack));
                                            if (iSArray == null) {
                                                if (iSArray == null) continue;
                                                break;
                                            }
                                            break block7;
                                        }
                                        catch (MatchException matchException) {
                                            throw dv.aiO(matchException);
                                        }
                                    }
                                    lH2.cgp();
                                }
                                finally {
                                    kn.YNOIY = false;
                                }
                            }
                        };
                        try {
                            block54: {
                                try {
                                    try {
                                        bl2 = this.XdqBo.SZ();
                                        if (iSArray != null) break block53;
                                        if (!bl2) break block54;
                                    }
                                    catch (MatchException matchException) {
                                        throw dv.aiO(matchException);
                                    }
                                    kj.bPr(runnable, this.zXfLC.VB(), this.ASroa.VB(), this.ClbaS.VB(), this.uMtSN.VB(), this.EzLNk.Wf().con(), this.xnzNS.VB(), this.iEdAT.VB(), this.AXVpM.Wf().con(), this.UDqup.VB());
                                    if (iSArray == null) break block55;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                            }
                            bl2 = this.zysSC.SZ();
                        }
                        catch (MatchException matchException) {
                            throw dv.aiO(matchException);
                        }
                    }
                    try {
                        block57: {
                            try {
                                try {
                                    if (iSArray != null) break block56;
                                    if (!bl2) break block57;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                                kj.bPs(runnable, this.OYjhT.Wf().con(), this.ZTvWj.VB(), this.tPrjL.VB(), this.cyXLZ.VB(), this.JGyvQ.VB(), this.EADmc.VB(), this.NBZEF.VB(), this.GJXHL.VB());
                                if (iSArray == null) break block55;
                            }
                            catch (MatchException matchException) {
                                throw dv.aiO(matchException);
                            }
                        }
                        bl2 = this.SpKOT.SZ();
                    }
                    catch (MatchException matchException) {
                        throw dv.aiO(matchException);
                    }
                }
                try {
                    block59: {
                        try {
                            try {
                                if (iSArray != null) break block58;
                                if (!bl2) break block59;
                            }
                            catch (MatchException matchException) {
                                throw dv.aiO(matchException);
                            }
                            kj.bPt(runnable, this.otjWl.Wf().con(), this.FXkgM.VB(), this.FQkGY.VB(), this.EFJph.VB());
                            if (iSArray == null) break block55;
                        }
                        catch (MatchException matchException) {
                            throw dv.aiO(matchException);
                        }
                    }
                    bl2 = this.ezBRY.SZ();
                }
                catch (MatchException matchException) {
                    throw dv.aiO(matchException);
                }
            }
            try {
                if (bl2) {
                    kj.bPu(runnable, this.FlNtk.VB(), this.rTzGW.VB(), this.MvQMm.VB(), this.yzDhD.VB(), this.XpTXH.VB(), this.kOSLY.VB(), this.wrOWy.VB(), this.EIoNG.Wf().con(), this.OrbAE.Wf().con(), this.EMRGt.Wf().con(), this.YNhsQ.Wf().con(), this.YsidR.VB(), this.MzFuh.VB(), this.KhwEu.VB(), this.wrqKr.VB(), this.rnTiy.VB(), this.lVRRm.VB());
                }
            }
            catch (MatchException matchException) {
                throw dv.aiO(matchException);
            }
        }
    }

    private void aiL() {
        ro.diF(this.yZFow.ST(), this.FlNtk, this.rTzGW, this.MvQMm, this.yzDhD, this.XpTXH, this.kOSLY, this.wrOWy, this.EIoNG, this.OrbAE, this.EMRGt, this.YNhsQ, this.YsidR, this.MzFuh, this.KhwEu, this.wrqKr, this.rnTiy, this.lVRRm);
    }

    @hG
    public void aiK(gi gi2) {
        long l2 = IOGuL ^ 0x167D3118DABBL;
        try {
            if (kn.YNOIY) {
                gi2.bdX(true);
            }
        }
        catch (MatchException matchException) {
            throw dv.aiO(matchException);
        }
    }

    private static CallSite aiS(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dv" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int aiQ(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5D0C;
        if (VHyXc[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = gttrI[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])lzTMb.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    lzTMb.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dv", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dv.VHyXc[n3] = n4;
        }
        return VHyXc[n3];
    }

    private static int aiR(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dv.aiQ(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String aiP(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    @hG
    public void aiJ(gp.sZ sZ2) {
        block36: {
            ClientPlayerEntity clientPlayerEntity;
            LivingEntity livingEntity;
            block34: {
                LivingEntity livingEntity2;
                block35: {
                    iS[] iSArray;
                    block32: {
                        block33: {
                            long l2;
                            block31: {
                                block37: {
                                    block29: {
                                        boolean bl2;
                                        block30: {
                                            block28: {
                                                l2 = IOGuL ^ 0x6469D596B4A5L;
                                                iSArray = dh.afl();
                                                try {
                                                    bl2 = this.NPcDw.WF();
                                                    if (iSArray != null) break block28;
                                                    if (!bl2) break block29;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dv.aiO(matchException);
                                                }
                                                bl2 = kn.YNOIY;
                                            }
                                            try {
                                                try {
                                                    if (iSArray != null) break block30;
                                                    if (bl2) break block29;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dv.aiO(matchException);
                                                }
                                                bl2 = this.bab();
                                            }
                                            catch (MatchException matchException) {
                                                throw dv.aiO(matchException);
                                            }
                                        }
                                        if (bl2) break block37;
                                    }
                                    return;
                                }
                                livingEntity2 = sZ2.bbl();
                                try {
                                    try {
                                        if (livingEntity2 != null && this.jWIlg.VX((Entity)livingEntity2)) break block31;
                                    }
                                    catch (MatchException matchException) {
                                        throw dv.aiO(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                            }
                            try {
                                try {
                                    try {
                                        livingEntity = livingEntity2;
                                        clientPlayerEntity = rD.dlmvG.player;
                                        if (iSArray != null) break block32;
                                        if (livingEntity != clientPlayerEntity) break block33;
                                    }
                                    catch (MatchException matchException) {
                                        throw dv.aiO(matchException);
                                    }
                                    if (sZ2.bbn() != dv.aiS("z", (int)13256, (long)(0x894106291CC4F1FL ^ l2))) break block33;
                                }
                                catch (MatchException matchException) {
                                    throw dv.aiO(matchException);
                                }
                                return;
                            }
                            catch (MatchException matchException) {
                                throw dv.aiO(matchException);
                            }
                        }
                        livingEntity = livingEntity2;
                        clientPlayerEntity = rD.dlmvG.player;
                    }
                    try {
                        try {
                            try {
                                if (iSArray != null) break block34;
                                if (livingEntity != clientPlayerEntity) break block35;
                            }
                            catch (MatchException matchException) {
                                throw dv.aiO(matchException);
                            }
                            if (this.ZXujq.WF()) break block35;
                        }
                        catch (MatchException matchException) {
                            throw dv.aiO(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw dv.aiO(matchException);
                    }
                }
                livingEntity = livingEntity2;
                clientPlayerEntity = rD.dlmvG.player;
            }
            try {
                try {
                    if (livingEntity != clientPlayerEntity || !rD.dlmvG.options.getPerspective().isFirstPerson()) break block36;
                }
                catch (MatchException matchException) {
                    throw dv.aiO(matchException);
                }
                return;
            }
            catch (MatchException matchException) {
                throw dv.aiO(matchException);
            }
        }
        sZ2.bbo().cancel();
    }

    private static MatchException aiO(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dv.class, "aiR", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

