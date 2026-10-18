/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.effect.StatusEffect
 *  net.minecraft.entity.effect.StatusEffects
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.entry.RegistryEntry
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.HashMap;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.effect.StatusEffect;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.entry.RegistryEntry;
import sixtwo.cC;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.fg;
import sixtwo.fl$sP;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.mz;

public class fl
extends gg {
    private final ct dDKQL;
    private final cu rVExA;
    private final cu GGmyQ;
    private final cu MEzpo;
    private final ct yCMVU;
    private final cu NMaDj;
    private final cu vqHqt;
    private final ct GrPLO;
    private final cu tyFzT;
    private final cu jvMbr;
    private final cv SOdOD;
    private final cw cimiv;
    private final cw eLmhr;
    private final cw dnrRK;
    private final cv oMlyx;
    private final cw rfngy;
    private final cw YdqGo;
    private final ct DDOas;
    private final cu TTfND;
    private final cu qXCVd;
    private final cC BrVSe;
    private final cC WlEOU;
    private final ct rKSxQ;
    private final cu PEysr;
    private final cC oaKvu;
    private final cu PfBXr;
    private final cC VGOXA;
    private final cC kduLk;
    private final Map<RegistryEntry<StatusEffect>, cw> AujWt;
    private final Map<RegistryEntry<StatusEffect>, Long> LKcpH;
    private final mT VKJkY;
    private static long OIIeM;
    private static String[] ruNqF;
    private static String[] ZVwSV;
    private static Map VWFIx;
    private static long[] OUXFV;
    private static Integer[] HmfOk;
    private static Map ZeDtJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native int aKm(int var0, long var1);

    private static native CallSite aKl(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ Boolean aKd();

    private static native CallSite aKo(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int aKn(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean aJR();

    private native mz<RegistryEntry<StatusEffect>, fl$sP> aJU();

    private native boolean aJX(RegistryEntry<StatusEffect> var1, fl$sP var2);

    private native fl$sP aJY(RegistryEntry<StatusEffect> var1);

    private native /* synthetic */ Boolean aKf();

    private static native Object aKk(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String aKj(int var0, long var1);

    private native boolean aJT();

    private native boolean aJV();

    private native /* synthetic */ Boolean aKe();

    private native /* synthetic */ Boolean aKc();

    private static native MatchException aKh(MatchException var0);

    private static native /* synthetic */ boolean aKa(int var0, Map.Entry var1);

    private static native String aKi(byte[] var0);

    private native /* synthetic */ Boolean aKb();

    private native boolean aJS();

    private native void aJW();

    @hG
    public native void aJP(gH.th var1);

    @hG
    public native void aJO(gv var1);

    private native /* synthetic */ Boolean aKg();

    private static native /* synthetic */ boolean aJZ(RegistryEntry var0, ItemStack var1);

    public fl() {
        long l2 = OIIeM ^ 0x2E0EE2DFDB1DL;
        super(gf.aZL((int)127, false, gh.xwjCw));
        this.dDKQL = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        this.rVExA = new cu(this.dDKQL, mr.clS(new int[]{(int)72, (int)101, (int)97, (int)108}));
        this.GGmyQ = new cu(this.dDKQL, mr.clS(new int[]{(int)66, (int)117, (int)102, (int)102}));
        this.MEzpo = new cu(this.dDKQL, mr.clS(new int[]{(int)66, (int)111, (int)116, (int)104}));
        int[] nArray = new int[10];
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
        this.yCMVU = new ct(this, mr.clS(nArray));
        this.NMaDj = new cu(this.yCMVU, mr.clS(new int[]{(int)65, (int)117, (int)116, (int)111}));
        this.vqHqt = new cu(this.yCMVU, mr.clS(new int[]{(int)76, (int)111, (int)111, (int)107}));
        int[] nArray2 = new int[11];
        nArray2[0] = (int)84;
        nArray2[1] = (int)104;
        nArray2[2] = (int)114;
        nArray2[3] = (int)111;
        nArray2[4] = (int)119;
        nArray2[5] = (int)32;
        nArray2[6] = (int)65;
        nArray2[7] = (int)110;
        nArray2[8] = (int)103;
        nArray2[9] = (int)108;
        nArray2[10] = (int)101;
        this.GrPLO = new ct(this, mr.clS(nArray2));
        this.tyFzT = new cu(this.GrPLO, mr.clS(new int[]{(int)85, (int)112}));
        this.jvMbr = new cu(this.GrPLO, mr.clS(new int[]{(int)68, (int)111, (int)119, (int)110})).SY();
        this.SOdOD = new cv(this, mr.clS(new int[]{(int)66, (int)117, (int)102, (int)102, (int)115}));
        int[] nArray3 = new int[8];
        nArray3[0] = (int)83;
        nArray3[1] = (int)116;
        nArray3[2] = (int)114;
        nArray3[3] = (int)101;
        nArray3[4] = (int)110;
        nArray3[5] = (int)103;
        nArray3[6] = (int)116;
        nArray3[7] = (int)104;
        this.cimiv = new cw(this.SOdOD, mr.clS(nArray3)).Tz();
        this.eLmhr = new cw(this.SOdOD, mr.clS(new int[]{(int)83, (int)112, (int)101, (int)101, (int)100})).Tz();
        int[] nArray4 = new int[15];
        nArray4[0] = (int)70;
        nArray4[1] = (int)105;
        nArray4[2] = (int)114;
        nArray4[3] = (int)101;
        nArray4[4] = (int)32;
        nArray4[5] = (int)82;
        nArray4[6] = (int)101;
        nArray4[7] = (int)115;
        nArray4[8] = (int)105;
        nArray4[9] = (int)115;
        nArray4[10] = (int)116;
        nArray4[11] = (int)97;
        nArray4[12] = (int)110;
        nArray4[13] = (int)99;
        nArray4[14] = (int)101;
        this.dnrRK = new cw(this.SOdOD, mr.clS(nArray4)).Tz();
        int[] nArray5 = new int[8];
        nArray5[0] = (int)72;
        nArray5[1] = (int)101;
        nArray5[2] = (int)97;
        nArray5[3] = (int)108;
        nArray5[4] = (int)105;
        nArray5[5] = (int)110;
        nArray5[6] = (int)103;
        nArray5[7] = (int)115;
        this.oMlyx = new cv(this, mr.clS(nArray5));
        int[] nArray6 = new int[15];
        nArray6[0] = (int)73;
        nArray6[1] = (int)110;
        nArray6[2] = (int)115;
        nArray6[3] = (int)116;
        nArray6[4] = (int)97;
        nArray6[5] = (int)110;
        nArray6[6] = (int)116;
        nArray6[7] = (int)32;
        nArray6[8] = (int)72;
        nArray6[9] = (int)101;
        nArray6[10] = (int)97;
        nArray6[11] = (int)108;
        nArray6[12] = (int)105;
        nArray6[13] = (int)110;
        nArray6[14] = (int)103;
        this.rfngy = new cw(this.oMlyx, mr.clS(nArray6)).Tz();
        int[] nArray7 = new int[12];
        nArray7[0] = (int)82;
        nArray7[1] = (int)101;
        nArray7[2] = (int)103;
        nArray7[3] = (int)101;
        nArray7[4] = (int)110;
        nArray7[5] = (int)101;
        nArray7[6] = (int)114;
        nArray7[7] = (int)97;
        nArray7[8] = (int)116;
        nArray7[9] = (int)105;
        nArray7[10] = (int)111;
        nArray7[11] = (int)110;
        this.YdqGo = new cw(this.oMlyx, mr.clS(nArray7)).Tz();
        int[] nArray8 = new int[20];
        nArray8[0] = (int)82;
        nArray8[1] = (int)101;
        nArray8[2] = (int)103;
        nArray8[3] = (int)101;
        nArray8[4] = (int)110;
        nArray8[5] = (int)101;
        nArray8[6] = (int)114;
        nArray8[7] = (int)97;
        nArray8[8] = (int)116;
        nArray8[9] = (int)105;
        nArray8[10] = (int)111;
        nArray8[11] = (int)110;
        nArray8[12] = (int)32;
        nArray8[13] = (int)84;
        nArray8[14] = (int)114;
        nArray8[15] = (int)105;
        nArray8[16] = (int)103;
        nArray8[17] = (int)103;
        nArray8[18] = (int)101;
        nArray8[19] = (int)114;
        this.DDOas = new ct(this, mr.clS(nArray8));
        int[] nArray9 = new int[9];
        nArray9[0] = (int)78;
        nArray9[1] = (int)111;
        nArray9[2] = (int)32;
        nArray9[3] = (int)69;
        nArray9[4] = (int)102;
        nArray9[5] = (int)102;
        nArray9[6] = (int)101;
        nArray9[7] = (int)99;
        nArray9[8] = (int)116;
        this.TTfND = new cu(this.DDOas, mr.clS(nArray9));
        int[] nArray10 = new int[9];
        nArray10[0] = (int)84;
        nArray10[1] = (int)104;
        nArray10[2] = (int)114;
        nArray10[3] = (int)101;
        nArray10[4] = (int)115;
        nArray10[5] = (int)104;
        nArray10[6] = (int)111;
        nArray10[7] = (int)108;
        nArray10[8] = (int)100;
        this.qXCVd = new cu(this.DDOas, mr.clS(nArray10));
        int[] nArray11 = new int[22];
        nArray11[0] = (int)82;
        nArray11[1] = (int)101;
        nArray11[2] = (int)103;
        nArray11[3] = (int)101;
        nArray11[4] = (int)110;
        nArray11[5] = (int)101;
        nArray11[6] = (int)114;
        nArray11[7] = (int)97;
        nArray11[8] = (int)116;
        nArray11[9] = (int)105;
        nArray11[10] = (int)111;
        nArray11[11] = (int)110;
        nArray11[12] = (int)32;
        nArray11[13] = (int)84;
        nArray11[14] = (int)104;
        nArray11[15] = (int)114;
        nArray11[16] = (int)101;
        nArray11[17] = (int)115;
        nArray11[18] = (int)104;
        nArray11[19] = (int)111;
        nArray11[20] = (int)108;
        nArray11[21] = (int)100;
        this.BrVSe = new cC(this, mr.clS(nArray11)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
        int[] nArray12 = new int[14];
        nArray12[0] = (int)82;
        nArray12[1] = (int)101;
        nArray12[2] = (int)113;
        nArray12[3] = (int)117;
        nArray12[4] = (int)105;
        nArray12[5] = (int)114;
        nArray12[6] = (int)101;
        nArray12[7] = (int)100;
        nArray12[8] = (int)32;
        nArray12[9] = (int)65;
        nArray12[10] = (int)110;
        nArray12[11] = (int)103;
        nArray12[12] = (int)108;
        nArray12[13] = (int)101;
        this.WlEOU = new cC(this, mr.clS(nArray12)).Vy(0.1).Vw(1.0).Vx(45.0).VA(25.0).Vz((String)((Object)" deg"));
        int[] nArray13 = new int[10];
        nArray13[0] = (int)72;
        nArray13[1] = (int)101;
        nArray13[2] = (int)97;
        nArray13[3] = (int)108;
        nArray13[4] = (int)32;
        nArray13[5] = (int)85;
        nArray13[6] = (int)110;
        nArray13[7] = (int)116;
        nArray13[8] = (int)105;
        nArray13[9] = (int)108;
        this.rKSxQ = new ct(this, mr.clS(nArray13));
        int[] nArray14 = new int[17];
        nArray14[0] = (int)82;
        nArray14[1] = (int)101;
        nArray14[2] = (int)97;
        nArray14[3] = (int)99;
        nArray14[4] = (int)104;
        nArray14[5] = (int)101;
        nArray14[6] = (int)115;
        nArray14[7] = (int)32;
        nArray14[8] = (int)84;
        nArray14[9] = (int)104;
        nArray14[10] = (int)114;
        nArray14[11] = (int)101;
        nArray14[12] = (int)115;
        nArray14[13] = (int)104;
        nArray14[14] = (int)111;
        nArray14[15] = (int)108;
        nArray14[16] = (int)100;
        this.PEysr = new cu(this.rKSxQ, mr.clS(nArray14));
        int[] nArray15 = new int[14];
        nArray15[0] = (int)72;
        nArray15[1] = (int)101;
        nArray15[2] = (int)97;
        nArray15[3] = (int)108;
        nArray15[4] = (int)32;
        nArray15[5] = (int)84;
        nArray15[6] = (int)104;
        nArray15[7] = (int)114;
        nArray15[8] = (int)101;
        nArray15[9] = (int)115;
        nArray15[10] = (int)104;
        nArray15[11] = (int)111;
        nArray15[12] = (int)108;
        nArray15[13] = (int)100;
        this.oaKvu = new cC(this, mr.clS(nArray15)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
        int[] nArray16 = new int[11];
        nArray16[0] = (int)70;
        nArray16[1] = (int)117;
        nArray16[2] = (int)108;
        nArray16[3] = (int)108;
        nArray16[4] = (int)32;
        nArray16[5] = (int)72;
        nArray16[6] = (int)101;
        nArray16[7] = (int)97;
        nArray16[8] = (int)108;
        nArray16[9] = (int)116;
        nArray16[10] = (int)104;
        this.PfBXr = new cu(this.rKSxQ, mr.clS(nArray16)).SY();
        int[] nArray17 = new int[17];
        nArray17[0] = (int)80;
        nArray17[1] = (int)111;
        nArray17[2] = (int)116;
        nArray17[3] = (int)105;
        nArray17[4] = (int)111;
        nArray17[5] = (int)110;
        nArray17[6] = (int)32;
        nArray17[7] = (int)84;
        nArray17[8] = (int)121;
        nArray17[9] = (int)112;
        nArray17[10] = (int)101;
        nArray17[11] = (int)32;
        nArray17[12] = (int)68;
        nArray17[13] = (int)101;
        nArray17[14] = (int)108;
        nArray17[15] = (int)97;
        nArray17[16] = (int)121;
        this.VGOXA = new cC(this, mr.clS(nArray17)).Vy(10.0).Vw(200.0).Vx(500.0).VA(250.0).Vz((String)((Object)" ms"));
        int[] nArray18 = new int[16];
        nArray18[0] = (int)80;
        nArray18[1] = (int)101;
        nArray18[2] = (int)114;
        nArray18[3] = (int)32;
        nArray18[4] = (int)80;
        nArray18[5] = (int)111;
        nArray18[6] = (int)116;
        nArray18[7] = (int)105;
        nArray18[8] = (int)111;
        nArray18[9] = (int)110;
        nArray18[10] = (int)32;
        nArray18[11] = (int)68;
        nArray18[12] = (int)101;
        nArray18[13] = (int)108;
        nArray18[14] = (int)97;
        nArray18[15] = (int)121;
        this.kduLk = new cC(this, mr.clS(nArray18)).Vy(10.0).Vw(0.0).Vx(1500.0).VA(100.0).Vz((String)((Object)" ms"));
        this.AujWt = Map.of(StatusEffects.STRENGTH, this.cimiv, StatusEffects.SPEED, this.eLmhr, StatusEffects.FIRE_RESISTANCE, this.dnrRK);
        this.LKcpH = new HashMap<RegistryEntry<StatusEffect>, Long>();
        this.VKJkY = mT.cpA();
        this.oMlyx.Vf(this::aJS);
        this.SOdOD.Vf(this::aJT);
        this.WlEOU.Vf(this::aKg);
        this.rKSxQ.Vf(this::aKf);
        this.oaKvu.Vf(this::aKe);
        this.BrVSe.Vf(this::aKd);
        this.DDOas.Vf(this::aKc);
        this.VGOXA.Vf(this::aKb);
    }

    static {
        Loader.doInit(fl.class);
        fl._1c83e6a4562c3f0af764d393c794ca89();
    }

    public boolean aJQ() {
        boolean bl2;
        block12: {
            block10: {
                fl fl2;
                block11: {
                    boolean bl3;
                    block9: {
                        long l2 = OIIeM ^ 0x27DE6A2F186DL;
                        int[] nArray = fg.aIW();
                        try {
                            try {
                                try {
                                    bl3 = this.NMaDj.SZ();
                                    if (nArray != null) break block9;
                                    if (!bl3) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw fl.aKh(matchException);
                                }
                                fl2 = this;
                                if (nArray != null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw fl.aKh(matchException);
                            }
                            bl3 = fl2.VKJkY.cpC(this.kduLk.VC());
                        }
                        catch (MatchException matchException) {
                            throw fl.aKh(matchException);
                        }
                    }
                    if (!bl3) break block10;
                    fl2 = this;
                }
                try {
                    if (fl2.aJU() == null) break block10;
                    bl2 = true;
                    break block12;
                }
                catch (MatchException matchException) {
                    throw fl.aKh(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static native void _1c83e6a4562c3f0af764d393c794ca89();

    @Override
    public native void YO();
}

