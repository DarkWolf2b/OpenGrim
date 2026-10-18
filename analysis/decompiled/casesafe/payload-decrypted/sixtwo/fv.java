/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.equipment.EquipmentType
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.ItemStack;
import net.minecraft.item.equipment.EquipmentType;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fv$sS;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;

public class fv
extends gg {
    private final ct YeKOG;
    private final cu Ibyhc;
    private final cu SgsTt;
    private final ct PAzfu;
    private final cu KWINT;
    private final cu jVFDV;
    private final cJ ftGho;
    private final cJ uFkOC;
    private final cC LHgKa;
    private final cC Ocrqg;
    private final cC RteRC;
    private final cC ZmNIx;
    private final cJ vrDDR;
    private final mT keyzc;
    private final mT SOlCc;
    private final mT gbLQO;
    private boolean AiGiJ;
    private static long PnkFl;
    private static String[] etUrB;
    private static String[] FLlXG;
    private static Map qhqRX;
    private static long[] elceJ;
    private static Integer[] oKGOX;
    private static Map hghbx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fv() {
        long l2 = PnkFl ^ 0x637F2CE33EE5L;
        super(gf.aZL((int)16, false, gh.xwjCw));
        this.YeKOG = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        this.Ibyhc = new cu(this.YeKOG, mr.clS(new int[]{(int)76, (int)101, (int)103, (int)105, (int)116}));
        int[] nArray = new int[6];
        nArray[0] = (int)78;
        nArray[1] = (int)111;
        nArray[2] = (int)114;
        nArray[3] = (int)109;
        nArray[4] = (int)97;
        nArray[5] = (int)108;
        this.SgsTt = new cu(this.YeKOG, mr.clS(nArray));
        int[] nArray2 = new int[14];
        nArray2[0] = (int)73;
        nArray2[1] = (int)110;
        nArray2[2] = (int)118;
        nArray2[3] = (int)101;
        nArray2[4] = (int)110;
        nArray2[5] = (int)116;
        nArray2[6] = (int)111;
        nArray2[7] = (int)114;
        nArray2[8] = (int)121;
        nArray2[9] = (int)32;
        nArray2[10] = (int)77;
        nArray2[11] = (int)111;
        nArray2[12] = (int)100;
        nArray2[13] = (int)101;
        this.PAzfu = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)67;
        nArray3[1] = (int)108;
        nArray3[2] = (int)105;
        nArray3[3] = (int)101;
        nArray3[4] = (int)110;
        nArray3[5] = (int)116;
        this.KWINT = new cu(this.PAzfu, mr.clS(nArray3));
        int[] nArray4 = new int[6];
        nArray4[0] = (int)83;
        nArray4[1] = (int)105;
        nArray4[2] = (int)108;
        nArray4[3] = (int)101;
        nArray4[4] = (int)110;
        nArray4[5] = (int)116;
        this.jVFDV = new cu(this.PAzfu, mr.clS(nArray4));
        int[] nArray5 = new int[19];
        nArray5[0] = (int)65;
        nArray5[1] = (int)117;
        nArray5[2] = (int)116;
        nArray5[3] = (int)111;
        nArray5[4] = (int)32;
        nArray5[5] = (int)79;
        nArray5[6] = (int)112;
        nArray5[7] = (int)101;
        nArray5[8] = (int)110;
        nArray5[9] = (int)32;
        nArray5[10] = (int)73;
        nArray5[11] = (int)110;
        nArray5[12] = (int)118;
        nArray5[13] = (int)101;
        nArray5[14] = (int)110;
        nArray5[15] = (int)116;
        nArray5[16] = (int)111;
        nArray5[17] = (int)114;
        nArray5[18] = (int)121;
        this.ftGho = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[16];
        nArray6[0] = (int)67;
        nArray6[1] = (int)108;
        nArray6[2] = (int)111;
        nArray6[3] = (int)115;
        nArray6[4] = (int)101;
        nArray6[5] = (int)32;
        nArray6[6] = (int)65;
        nArray6[7] = (int)102;
        nArray6[8] = (int)116;
        nArray6[9] = (int)101;
        nArray6[10] = (int)114;
        nArray6[11] = (int)32;
        nArray6[12] = (int)83;
        nArray6[13] = (int)119;
        nArray6[14] = (int)97;
        nArray6[15] = (int)112;
        this.uFkOC = new cJ(this, mr.clS(nArray6)).WE(true);
        int[] nArray7 = new int[13];
        nArray7[0] = (int)83;
        nArray7[1] = (int)119;
        nArray7[2] = (int)97;
        nArray7[3] = (int)112;
        nArray7[4] = (int)32;
        nArray7[5] = (int)67;
        nArray7[6] = (int)111;
        nArray7[7] = (int)111;
        nArray7[8] = (int)108;
        nArray7[9] = (int)100;
        nArray7[10] = (int)111;
        nArray7[11] = (int)119;
        nArray7[12] = (int)110;
        this.LHgKa = new cC(this, mr.clS(nArray7)).Vy(50.0).Vw(0.0).Vx(5000.0).VA(0.0).Vz((String)((Object)" ms"));
        int[] nArray8 = new int[10];
        nArray8[0] = (int)79;
        nArray8[1] = (int)112;
        nArray8[2] = (int)101;
        nArray8[3] = (int)110;
        nArray8[4] = (int)32;
        nArray8[5] = (int)68;
        nArray8[6] = (int)101;
        nArray8[7] = (int)108;
        nArray8[8] = (int)97;
        nArray8[9] = (int)121;
        this.Ocrqg = new cC(this, mr.clS(nArray8)).Vy(10.0).Vw(0.0).Vx(1000.0).VA(0.0).Vz((String)((Object)" ms"));
        int[] nArray9 = new int[11];
        nArray9[0] = (int)67;
        nArray9[1] = (int)108;
        nArray9[2] = (int)111;
        nArray9[3] = (int)115;
        nArray9[4] = (int)101;
        nArray9[5] = (int)32;
        nArray9[6] = (int)68;
        nArray9[7] = (int)101;
        nArray9[8] = (int)108;
        nArray9[9] = (int)97;
        nArray9[10] = (int)121;
        this.RteRC = new cC(this, mr.clS(nArray9)).Vy(10.0).Vw(0.0).Vx(1000.0).VA(0.0).Vz((String)((Object)" ms"));
        int[] nArray10 = new int[18];
        nArray10[0] = (int)77;
        nArray10[1] = (int)105;
        nArray10[2] = (int)110;
        nArray10[3] = (int)105;
        nArray10[4] = (int)109;
        nArray10[5] = (int)117;
        nArray10[6] = (int)109;
        nArray10[7] = (int)32;
        nArray10[8] = (int)68;
        nArray10[9] = (int)117;
        nArray10[10] = (int)114;
        nArray10[11] = (int)97;
        nArray10[12] = (int)98;
        nArray10[13] = (int)105;
        nArray10[14] = (int)108;
        nArray10[15] = (int)105;
        nArray10[16] = (int)116;
        nArray10[17] = (int)121;
        this.ZmNIx = new cC(this, mr.clS(nArray10)).Vy(1.0).Vw(0.0).Vx(50.0).VA(15.0).Vz((String)((Object)" %"));
        int[] nArray11 = new int[13];
        nArray11[0] = (int)73;
        nArray11[1] = (int)103;
        nArray11[2] = (int)110;
        nArray11[3] = (int)111;
        nArray11[4] = (int)114;
        nArray11[5] = (int)101;
        nArray11[6] = (int)32;
        nArray11[7] = (int)69;
        nArray11[8] = (int)108;
        nArray11[9] = (int)121;
        nArray11[10] = (int)116;
        nArray11[11] = (int)114;
        nArray11[12] = (int)97;
        this.vrDDR = new cJ(this, mr.clS(nArray11)).WE(false);
        this.keyzc = mT.cpA();
        this.SOlCc = mT.cpA();
        this.gbLQO = mT.cpA();
        this.YeKOG.Vd(this::aQO);
        this.PAzfu.Vd(this::aQN);
        this.uFkOC.Vf(this::aQM);
        this.Ocrqg.Vf(this.KWINT::SZ);
        this.RteRC.Vf(this.KWINT::SZ);
    }

    static {
        Loader.doInit(fv.class);
        fv._010dcddc5ae532c6d7a5020cc90bba46();
    }

    private static native void _010dcddc5ae532c6d7a5020cc90bba46();

    @Override
    public native void YO();

    private native void aQJ();

    private native boolean aQE(ItemStack var1);

    private static native int aQV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite aQW(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object aQS(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean aQB();

    private native void aQC();

    private native void aQI(fv$sS var1);

    private static native String aQQ(byte[] var0);

    private native /* synthetic */ void aQN();

    private native fv$sS aQD();

    private native /* synthetic */ Boolean aQM();

    @hG
    public native void aQA(gH.th var1);

    private static native MatchException aQP(MatchException var0);

    private static native String aQR(int var0, long var1);

    private native EquipmentType aQL(int var1);

    private native void aQH(fv$sS var1);

    private native int aQF(EquipmentType var1, boolean var2);

    private static native int aQU(int var0, long var1);

    private native /* synthetic */ void aQO();

    private native void aQG(fv$sS var1);

    private native int aQK(fv$sS var1);

    private static native CallSite aQT(MethodHandles.Lookup var0, String var1, MethodType var2);
}

