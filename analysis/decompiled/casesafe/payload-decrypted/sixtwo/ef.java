/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.ibm.icu.impl.Pair
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.Hand
 */
package sixtwo;

import com.ibm.icu.impl.Pair;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.Optional;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;

public class ef
extends gg {
    private final cD lKUBn;
    private final ct FVOfM;
    private final cu edpdA;
    private final cu UVlxx;
    private final ct mgssu;
    private final cu GyyLJ;
    private final cu uilnT;
    private final cJ RXyTe;
    private final cC KsVgs;
    private final cJ LeMPS;
    private final cJ vclgk;
    private final cJ AVoOt;
    private final cJ jiBcq;
    private final mT VgPzz;
    private boolean DBoNw;
    private int RYmzC;
    private int kyTFX;
    private boolean IrgCI;
    private boolean qIawY;
    private Pair<Integer, Integer> hGtSw;
    private static long cprxo;
    private static String QXbWi;
    private static long[] FJiSt;
    private static Integer[] afFxe;
    private static Map mIhkf;
    private static long YpNvF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _ab5b13232da8c30a9ed743640ca00bd7();

    public ef() {
        long l2 = cprxo ^ 0x2FD14BA87439L;
        super(gf.aZL((int)67, false, gh.qBzlZ));
        int[] nArray = new int[14];
        nArray[0] = (int)65;
        nArray[1] = (int)99;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)118;
        nArray[5] = (int)97;
        nArray[6] = (int)116;
        nArray[7] = (int)105;
        nArray[8] = (int)111;
        nArray[9] = (int)110;
        nArray[10] = (int)32;
        nArray[11] = (int)75;
        nArray[12] = (int)101;
        nArray[13] = (int)121;
        this.lKUBn = new cD(this, mr.clS(nArray)).VO((int)-999);
        this.FVOfM = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        this.edpdA = new cu(this.FVOfM, mr.clS(new int[]{(int)76, (int)101, (int)103, (int)105, (int)116}));
        int[] nArray2 = new int[6];
        nArray2[0] = (int)78;
        nArray2[1] = (int)111;
        nArray2[2] = (int)114;
        nArray2[3] = (int)109;
        nArray2[4] = (int)97;
        nArray2[5] = (int)108;
        this.UVlxx = new cu(this.FVOfM, mr.clS(nArray2));
        int[] nArray3 = new int[14];
        nArray3[0] = (int)73;
        nArray3[1] = (int)110;
        nArray3[2] = (int)118;
        nArray3[3] = (int)101;
        nArray3[4] = (int)110;
        nArray3[5] = (int)116;
        nArray3[6] = (int)111;
        nArray3[7] = (int)114;
        nArray3[8] = (int)121;
        nArray3[9] = (int)32;
        nArray3[10] = (int)77;
        nArray3[11] = (int)111;
        nArray3[12] = (int)100;
        nArray3[13] = (int)101;
        this.mgssu = new ct(this, mr.clS(nArray3));
        int[] nArray4 = new int[6];
        nArray4[0] = (int)67;
        nArray4[1] = (int)108;
        nArray4[2] = (int)105;
        nArray4[3] = (int)101;
        nArray4[4] = (int)110;
        nArray4[5] = (int)116;
        this.GyyLJ = new cu(this.mgssu, mr.clS(nArray4));
        int[] nArray5 = new int[6];
        nArray5[0] = (int)83;
        nArray5[1] = (int)105;
        nArray5[2] = (int)108;
        nArray5[3] = (int)101;
        nArray5[4] = (int)110;
        nArray5[5] = (int)116;
        this.uilnT = new cu(this.mgssu, mr.clS(nArray5));
        int[] nArray6 = new int[19];
        nArray6[0] = (int)65;
        nArray6[1] = (int)117;
        nArray6[2] = (int)116;
        nArray6[3] = (int)111;
        nArray6[4] = (int)32;
        nArray6[5] = (int)79;
        nArray6[6] = (int)112;
        nArray6[7] = (int)101;
        nArray6[8] = (int)110;
        nArray6[9] = (int)32;
        nArray6[10] = (int)73;
        nArray6[11] = (int)110;
        nArray6[12] = (int)118;
        nArray6[13] = (int)101;
        nArray6[14] = (int)110;
        nArray6[15] = (int)116;
        nArray6[16] = (int)111;
        nArray6[17] = (int)114;
        nArray6[18] = (int)121;
        this.RXyTe = new cJ(this, mr.clS(nArray6)).WE(true);
        int[] nArray7 = new int[10];
        nArray7[0] = (int)83;
        nArray7[1] = (int)119;
        nArray7[2] = (int)97;
        nArray7[3] = (int)112;
        nArray7[4] = (int)32;
        nArray7[5] = (int)68;
        nArray7[6] = (int)101;
        nArray7[7] = (int)108;
        nArray7[8] = (int)97;
        nArray7[9] = (int)121;
        this.KsVgs = new cC(this, mr.clS(nArray7)).Vy(5.0).Vw(0.0).Vx(500.0).VA(50.0).Vz(QXbWi);
        int[] nArray8 = new int[8];
        nArray8[0] = (int)65;
        nArray8[1] = (int)117;
        nArray8[2] = (int)116;
        nArray8[3] = (int)111;
        nArray8[4] = (int)32;
        nArray8[5] = (int)70;
        nArray8[6] = (int)108;
        nArray8[7] = (int)121;
        this.LeMPS = new cJ(this, mr.clS(nArray8)).WE(false);
        int[] nArray9 = new int[23];
        nArray9[0] = (int)83;
        nArray9[1] = (int)119;
        nArray9[2] = (int)97;
        nArray9[3] = (int)112;
        nArray9[4] = (int)32;
        nArray9[5] = (int)66;
        nArray9[6] = (int)97;
        nArray9[7] = (int)99;
        nArray9[8] = (int)107;
        nArray9[9] = (int)32;
        nArray9[10] = (int)65;
        nArray9[11] = (int)102;
        nArray9[12] = (int)116;
        nArray9[13] = (int)101;
        nArray9[14] = (int)114;
        nArray9[15] = (int)32;
        nArray9[16] = (int)76;
        nArray9[17] = (int)97;
        nArray9[18] = (int)110;
        nArray9[19] = (int)100;
        nArray9[20] = (int)105;
        nArray9[21] = (int)110;
        nArray9[22] = (int)103;
        this.vclgk = new cJ(this, mr.clS(nArray9)).WE(false);
        int[] nArray10 = new int[13];
        nArray10[0] = (int)83;
        nArray10[1] = (int)119;
        nArray10[2] = (int)97;
        nArray10[3] = (int)112;
        nArray10[4] = (int)32;
        nArray10[5] = (int)70;
        nArray10[6] = (int)105;
        nArray10[7] = (int)114;
        nArray10[8] = (int)101;
        nArray10[9] = (int)119;
        nArray10[10] = (int)111;
        nArray10[11] = (int)114;
        nArray10[12] = (int)107;
        this.AVoOt = new cJ(this, mr.clS(nArray10)).WE(false);
        int[] nArray11 = new int[17];
        nArray11[0] = (int)65;
        nArray11[1] = (int)99;
        nArray11[2] = (int)116;
        nArray11[3] = (int)105;
        nArray11[4] = (int)118;
        nArray11[5] = (int)97;
        nArray11[6] = (int)116;
        nArray11[7] = (int)101;
        nArray11[8] = (int)32;
        nArray11[9] = (int)70;
        nArray11[10] = (int)105;
        nArray11[11] = (int)114;
        nArray11[12] = (int)101;
        nArray11[13] = (int)119;
        nArray11[14] = (int)111;
        nArray11[15] = (int)114;
        nArray11[16] = (int)107;
        this.jiBcq = new cJ(this, mr.clS(nArray11)).WE(false);
        this.VgPzz = mT.cpz();
        this.FVOfM.Vd(this::asn);
        this.mgssu.Vd(this::asm);
        this.vclgk.Vf(this.LeMPS::WF);
        this.jiBcq.Vf(this.AVoOt::WF);
    }

    static {
        Loader.doInit(ef.class);
        ef._ab5b13232da8c30a9ed743640ca00bd7();
    }

    private native Optional<Hand> asb(ItemStack var1, int var2);

    private native void asd();

    private native void ase();

    private native /* synthetic */ void asn();

    private native int ash(Item var1);

    private native void asa();

    private static native MatchException aso(MatchException var0);

    private static native String asp(byte[] var0);

    private native void asg();

    private native /* synthetic */ void ask();

    @hG
    public native void arY(gH.th var1);

    private native void asc(Hand var1);

    private static native /* synthetic */ void asj();

    private native void arZ(ItemStack var1);

    private static native /* synthetic */ void asl();

    @hG
    public native void arX(gA var1);

    private static native int asq(int var0, long var1);

    private native void asf();

    private static native CallSite ass(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void asi(int var1, int var2);

    private static native int asr(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void asm();

    @Override
    public native void YO();
}

