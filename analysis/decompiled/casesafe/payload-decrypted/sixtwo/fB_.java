/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.mT;
import sixtwo.mW;
import sixtwo.mr;
import sixtwo.ol;

public class fB
extends gg {
    private final ct TUmhB;
    private final cu snORa;
    private final cu zlYES;
    private final ct BRjKS;
    private final cu RsARQ;
    private final cu YEDyf;
    private final cA vOaqN;
    private final cA itUea;
    private final ct SotCh;
    private final cu xenvw;
    private final cu QsGiD;
    private final cu tWbtJ;
    private final cC PEgLw;
    private final cA ftPwi;
    private final cJ HBnKR;
    private final cJ LDZVd;
    private final cA bApwx;
    private final cJ MeJvD;
    private final cJ qRPky;
    private final ct EFLIl;
    private final cu XlqCA;
    private final cu CeUWS;
    private final ol XVRCB;
    private final mT XUAcx;
    private boolean WFFVU;
    private final mW pKMKg;
    private static long UkpKz;
    private static String[] JTphg;
    private static String[] FOTTj;
    private static Map ZabSq;
    private static long[] YSeRv;
    private static Integer[] XNMmn;
    private static Map mldcd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fB() {
        long l2 = UkpKz ^ 0x2412C93DDF5DL;
        super(gf.aZL(3, false, gh.xwjCw));
        int[] nArray = new int[11];
        nArray[0] = (int)65;
        nArray[1] = (int)116;
        nArray[2] = (int)116;
        nArray[3] = (int)97;
        nArray[4] = (int)99;
        nArray[5] = (int)107;
        nArray[6] = (int)32;
        nArray[7] = (int)77;
        nArray[8] = (int)111;
        nArray[9] = (int)100;
        nArray[10] = (int)101;
        this.TUmhB = new ct(this, mr.clS(nArray));
        this.snORa = new cu(this.TUmhB, mr.clS(new int[]{(int)65, (int)117, (int)116, (int)111}));
        int[] nArray2 = new int[6];
        nArray2[0] = (int)77;
        nArray2[1] = (int)97;
        nArray2[2] = (int)110;
        nArray2[3] = (int)117;
        nArray2[4] = (int)97;
        nArray2[5] = (int)108;
        this.zlYES = new cu(this.TUmhB, mr.clS(nArray2));
        int[] nArray3 = new int[11];
        nArray3[0] = (int)83;
        nArray3[1] = (int)119;
        nArray3[2] = (int)105;
        nArray3[3] = (int)116;
        nArray3[4] = (int)99;
        nArray3[5] = (int)104;
        nArray3[6] = (int)32;
        nArray3[7] = (int)77;
        nArray3[8] = (int)111;
        nArray3[9] = (int)100;
        nArray3[10] = (int)101;
        this.BRjKS = new ct(this, mr.clS(nArray3));
        this.RsARQ = new cu(this.BRjKS, mr.clS(new int[]{(int)65, (int)117, (int)116, (int)111}));
        int[] nArray4 = new int[6];
        nArray4[0] = (int)77;
        nArray4[1] = (int)97;
        nArray4[2] = (int)110;
        nArray4[3] = (int)117;
        nArray4[4] = (int)97;
        nArray4[5] = (int)108;
        this.YEDyf = new cu(this.BRjKS, mr.clS(nArray4));
        int[] nArray5 = new int[17];
        nArray5[0] = (int)65;
        nArray5[1] = (int)117;
        nArray5[2] = (int)116;
        nArray5[3] = (int)111;
        nArray5[4] = (int)32;
        nArray5[5] = (int)83;
        nArray5[6] = (int)119;
        nArray5[7] = (int)105;
        nArray5[8] = (int)116;
        nArray5[9] = (int)99;
        nArray5[10] = (int)104;
        nArray5[11] = (int)32;
        nArray5[12] = (int)68;
        nArray5[13] = (int)101;
        nArray5[14] = (int)108;
        nArray5[15] = (int)97;
        nArray5[16] = (int)121;
        this.vOaqN = new cA(this, mr.clS(nArray5)).UG(1.0).UE(0.0).UF(10.0).UI(1.0, 2.0).UH((String)((Object)" ticks"));
        this.itUea = new cA(this, mr.clS(new int[]{(int)82, (int)97, (int)110, (int)103, (int)101})).UG(0.1).UE(1.0).UF(6.0).UI(2.5, 3.0).UH((String)((Object)" blocks"));
        int[] nArray6 = new int[12];
        nArray6[0] = (int)68;
        nArray6[1] = (int)105;
        nArray6[2] = (int)115;
        nArray6[3] = (int)97;
        nArray6[4] = (int)98;
        nArray6[5] = (int)108;
        nArray6[6] = (int)101;
        nArray6[7] = (int)32;
        nArray6[8] = (int)77;
        nArray6[9] = (int)111;
        nArray6[10] = (int)100;
        nArray6[11] = (int)101;
        this.SotCh = new ct(this, mr.clS(nArray6)).SO(1);
        int[] nArray7 = new int[6];
        nArray7[0] = (int)83;
        nArray7[1] = (int)105;
        nArray7[2] = (int)110;
        nArray7[3] = (int)103;
        nArray7[4] = (int)108;
        nArray7[5] = (int)101;
        this.xenvw = new cu(this.SotCh, mr.clS(nArray7));
        this.QsGiD = new cu(this.SotCh, mr.clS(new int[]{(int)83, (int)116, (int)117, (int)110}));
        this.tWbtJ = new cu(this.SotCh, mr.clS(new int[]{(int)83, (int)112, (int)97, (int)109}));
        int[] nArray8 = new int[11];
        nArray8[0] = (int)83;
        nArray8[1] = (int)116;
        nArray8[2] = (int)117;
        nArray8[3] = (int)110;
        nArray8[4] = (int)32;
        nArray8[5] = (int)67;
        nArray8[6] = (int)104;
        nArray8[7] = (int)97;
        nArray8[8] = (int)110;
        nArray8[9] = (int)99;
        nArray8[10] = (int)101;
        this.PEgLw = new cC(this, mr.clS(nArray8)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz((String)((Object)" %"));
        int[] nArray9 = new int[8];
        nArray9[0] = (int)83;
        nArray9[1] = (int)112;
        nArray9[2] = (int)97;
        nArray9[3] = (int)109;
        nArray9[4] = (int)32;
        nArray9[5] = (int)67;
        nArray9[6] = (int)80;
        nArray9[7] = (int)83;
        this.ftPwi = new cA(this, mr.clS(nArray9)).UG(1.0).UE(1.0).UF(20.0).UI(4.0, 6.0).UH((String)((Object)" cps"));
        int[] nArray10 = new int[12];
        nArray10[0] = (int)73;
        nArray10[1] = (int)103;
        nArray10[2] = (int)110;
        nArray10[3] = (int)111;
        nArray10[4] = (int)114;
        nArray10[5] = (int)101;
        nArray10[6] = (int)32;
        nArray10[7] = (int)87;
        nArray10[8] = (int)97;
        nArray10[9] = (int)108;
        nArray10[10] = (int)108;
        nArray10[11] = (int)115;
        this.HBnKR = new cJ(this, mr.clS(nArray10)).WE(false);
        int[] nArray11 = new int[9];
        nArray11[0] = (int)83;
        nArray11[1] = (int)112;
        nArray11[2] = (int)111;
        nArray11[3] = (int)111;
        nArray11[4] = (int)102;
        nArray11[5] = (int)32;
        nArray11[6] = (int)67;
        nArray11[7] = (int)80;
        nArray11[8] = (int)83;
        this.LDZVd = new cJ(this, mr.clS(nArray11)).WE(false);
        int[] nArray12 = new int[12];
        nArray12[0] = (int)82;
        nArray12[1] = (int)101;
        nArray12[2] = (int)116;
        nArray12[3] = (int)117;
        nArray12[4] = (int)114;
        nArray12[5] = (int)110;
        nArray12[6] = (int)32;
        nArray12[7] = (int)68;
        nArray12[8] = (int)101;
        nArray12[9] = (int)108;
        nArray12[10] = (int)97;
        nArray12[11] = (int)121;
        this.bApwx = new cA(this, mr.clS(nArray12)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH((String)((Object)" ms"));
        int[] nArray13 = new int[14];
        nArray13[0] = (int)73;
        nArray13[1] = (int)103;
        nArray13[2] = (int)110;
        nArray13[3] = (int)111;
        nArray13[4] = (int)114;
        nArray13[5] = (int)101;
        nArray13[6] = (int)32;
        nArray13[7] = (int)70;
        nArray13[8] = (int)114;
        nArray13[9] = (int)105;
        nArray13[10] = (int)101;
        nArray13[11] = (int)110;
        nArray13[12] = (int)100;
        nArray13[13] = (int)115;
        this.MeJvD = new cJ(this, mr.clS(nArray13)).WE(true);
        int[] nArray14 = new int[13];
        nArray14[0] = (int)67;
        nArray14[1] = (int)97;
        nArray14[2] = (int)110;
        nArray14[3] = (int)99;
        nArray14[4] = (int)101;
        nArray14[5] = (int)108;
        nArray14[6] = (int)32;
        nArray14[7] = (int)79;
        nArray14[8] = (int)110;
        nArray14[9] = (int)32;
        nArray14[10] = (int)85;
        nArray14[11] = (int)115;
        nArray14[12] = (int)101;
        this.qRPky = new cJ(this, mr.clS(nArray14)).WE(false);
        int[] nArray15 = new int[15];
        nArray15[0] = (int)67;
        nArray15[1] = (int)97;
        nArray15[2] = (int)110;
        nArray15[3] = (int)99;
        nArray15[4] = (int)101;
        nArray15[5] = (int)108;
        nArray15[6] = (int)32;
        nArray15[7] = (int)85;
        nArray15[8] = (int)115;
        nArray15[9] = (int)101;
        nArray15[10] = (int)32;
        nArray15[11] = (int)77;
        nArray15[12] = (int)111;
        nArray15[13] = (int)100;
        nArray15[14] = (int)101;
        this.EFLIl = new ct(this, mr.clS(nArray15));
        int[] nArray16 = new int[9];
        nArray16[0] = (int)65;
        nArray16[1] = (int)108;
        nArray16[2] = (int)108;
        nArray16[3] = (int)32;
        nArray16[4] = (int)73;
        nArray16[5] = (int)116;
        nArray16[6] = (int)101;
        nArray16[7] = (int)109;
        nArray16[8] = (int)115;
        this.XlqCA = new cu(this.EFLIl, mr.clS(nArray16));
        int[] nArray17 = new int[15];
        nArray17[0] = (int)65;
        nArray17[1] = (int)108;
        nArray17[2] = (int)108;
        nArray17[3] = (int)111;
        nArray17[4] = (int)119;
        nArray17[5] = (int)32;
        nArray17[6] = (int)83;
        nArray17[7] = (int)104;
        nArray17[8] = (int)105;
        nArray17[9] = (int)101;
        nArray17[10] = (int)108;
        nArray17[11] = (int)100;
        nArray17[12] = (int)105;
        nArray17[13] = (int)110;
        nArray17[14] = (int)103;
        this.CeUWS = new cu(this.EFLIl, mr.clS(nArray17));
        this.XVRCB = new ol(this);
        this.XUAcx = mT.cpz();
        this.pKMKg = new mW();
        this.PEgLw.Vf(this.QsGiD::SZ);
        this.ftPwi.Vf(this.tWbtJ::SZ);
        this.BRjKS.Vf(this.RsARQ::SZ);
        this.vOaqN.Vf(this::aSn);
    }

    static {
        Loader.doInit(fB.class);
        fB._c30a263bf7edc2a05a5c1c0ad3164cae();
    }

    private static native /* synthetic */ void aSm(boolean var0, Entity var1);

    private static native MatchException aSo(MatchException var0);

    private native /* synthetic */ Boolean aSn();

    private static native String aSq(int var0, long var1);

    @hG
    public native void aSg(hw.tv var1);

    private static native Object aSr(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aSt(int var0, long var1);

    private static native /* synthetic */ boolean aSl(PlayerEntity var0, PlayerEntity var1);

    private native void aSk();

    private native void aSj();

    private static native String aSp(byte[] var0);

    private static native CallSite aSs(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int aSu(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite aSv(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void aSi(Entity var1);

    @hG
    public native void aSh(gH.th var1);

    @Override
    public native void YO();

    private static native void _c30a263bf7edc2a05a5c1c0ad3164cae();
}

