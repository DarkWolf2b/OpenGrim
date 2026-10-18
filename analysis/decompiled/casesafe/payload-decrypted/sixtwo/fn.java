/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 *  net.minecraft.screen.slot.Slot
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.screen.slot.Slot;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.re;
import sixtwo.rf;

public class fn
extends gg {
    private static rf[] kySvO;
    private final cv WeTaM;
    private final cw MVcap;
    private final cw zUyjt;
    private final ct bunVK;
    private final cC OHuMF;
    private final cC uuTCc;
    private final cJ YfhNn;
    private final cJ ybxcg;
    private final cJ akhNQ;
    private final cJ sxweB;
    private final cJ aVMzs;
    private final cv ipOaN;
    private final cw SWful;
    private final cw LbAPM;
    private final re guvrN;
    private final re UjADv;
    private final int[] AYQUN;
    private final int[] OIxOu;
    private rf wznPK;
    private int bcgit;
    private double HzZRg;
    private static long TgvNw;
    private static String[] hQNGE;
    private static String[] RazEo;
    private static Map EsjGg;
    private static long[] sQAhp;
    private static Integer[] tamEM;
    private static Map dTOmd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fn() {
        block4: {
            long l2 = TgvNw ^ 0x708EC0E7E996L;
            super(gf.aZL((int)161, false, gh.xwjCw));
            int[] nArray = new int[13];
            nArray[0] = (int)77;
            nArray[1] = (int)111;
            nArray[2] = (int)117;
            nArray[3] = (int)115;
            nArray[4] = (int)101;
            nArray[5] = (int)32;
            nArray[6] = (int)66;
            nArray[7] = (int)117;
            nArray[8] = (int)116;
            nArray[9] = (int)116;
            nArray[10] = (int)111;
            nArray[11] = (int)110;
            nArray[12] = (int)115;
            this.WeTaM = new cv(this, mr.clS(nArray)).Tm(1);
            int[] nArray2 = new int[10];
            nArray2[0] = (int)76;
            nArray2[1] = (int)101;
            nArray2[2] = (int)102;
            nArray2[3] = (int)116;
            nArray2[4] = (int)32;
            nArray2[5] = (int)67;
            nArray2[6] = (int)108;
            nArray2[7] = (int)105;
            nArray2[8] = (int)99;
            nArray2[9] = (int)107;
            this.MVcap = new cw(this.WeTaM, mr.clS(nArray2)).Tz();
            int[] nArray3 = new int[11];
            nArray3[0] = (int)82;
            nArray3[1] = (int)105;
            nArray3[2] = (int)103;
            nArray3[3] = (int)104;
            nArray3[4] = (int)116;
            nArray3[5] = (int)32;
            nArray3[6] = (int)67;
            nArray3[7] = (int)108;
            nArray3[8] = (int)105;
            nArray3[9] = (int)99;
            nArray3[10] = (int)107;
            this.zUyjt = new cw(this.WeTaM, mr.clS(nArray3)).Tz();
            int[] nArray4 = new int[13];
            nArray4[0] = (int)67;
            nArray4[1] = (int)108;
            nArray4[2] = (int)105;
            nArray4[3] = (int)99;
            nArray4[4] = (int)107;
            nArray4[5] = (int)32;
            nArray4[6] = (int)80;
            nArray4[7] = (int)97;
            nArray4[8] = (int)116;
            nArray4[9] = (int)116;
            nArray4[10] = (int)101;
            nArray4[11] = (int)114;
            nArray4[12] = (int)110;
            this.bunVK = new ct(this, mr.clS(nArray4));
            int[] nArray5 = new int[8];
            nArray5[0] = (int)76;
            nArray5[1] = (int)101;
            nArray5[2] = (int)102;
            nArray5[3] = (int)116;
            nArray5[4] = (int)32;
            nArray5[5] = (int)67;
            nArray5[6] = (int)80;
            nArray5[7] = (int)83;
            this.OHuMF = new cC(this, mr.clS(nArray5)).Vy(1.0).Vw(1.0).Vx(20.0).VA(12.0).Vz((String)((Object)" CPS"));
            int[] nArray6 = new int[9];
            nArray6[0] = (int)82;
            nArray6[1] = (int)105;
            nArray6[2] = (int)103;
            nArray6[3] = (int)104;
            nArray6[4] = (int)116;
            nArray6[5] = (int)32;
            nArray6[6] = (int)67;
            nArray6[7] = (int)80;
            nArray6[8] = (int)83;
            this.uuTCc = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(1.0).Vx(20.0).VA(12.0).Vz((String)((Object)" CPS"));
            int[] nArray7 = new int[9];
            nArray7[0] = (int)82;
            nArray7[1] = (int)97;
            nArray7[2] = (int)110;
            nArray7[3] = (int)100;
            nArray7[4] = (int)111;
            nArray7[5] = (int)109;
            nArray7[6] = (int)105;
            nArray7[7] = (int)122;
            nArray7[8] = (int)101;
            this.YfhNn = new cJ(this, mr.clS(nArray7)).WE(true);
            int[] nArray8 = new int[16];
            nArray8[0] = (int)83;
            nArray8[1] = (int)105;
            nArray8[2] = (int)109;
            nArray8[3] = (int)117;
            nArray8[4] = (int)108;
            nArray8[5] = (int)97;
            nArray8[6] = (int)116;
            nArray8[7] = (int)101;
            nArray8[8] = (int)32;
            nArray8[9] = (int)69;
            nArray8[10] = (int)120;
            nArray8[11] = (int)104;
            nArray8[12] = (int)97;
            nArray8[13] = (int)117;
            nArray8[14] = (int)115;
            nArray8[15] = (int)116;
            this.ybxcg = new cJ(this, mr.clS(nArray8)).WE(false);
            int[] nArray9 = new int[21];
            nArray9[0] = (int)65;
            nArray9[1] = (int)108;
            nArray9[2] = (int)108;
            nArray9[3] = (int)111;
            nArray9[4] = (int)119;
            nArray9[5] = (int)32;
            nArray9[6] = (int)66;
            nArray9[7] = (int)114;
            nArray9[8] = (int)101;
            nArray9[9] = (int)97;
            nArray9[10] = (int)107;
            nArray9[11] = (int)105;
            nArray9[12] = (int)110;
            nArray9[13] = (int)103;
            nArray9[14] = (int)32;
            nArray9[15] = (int)66;
            nArray9[16] = (int)108;
            nArray9[17] = (int)111;
            nArray9[18] = (int)99;
            nArray9[19] = (int)107;
            nArray9[20] = (int)115;
            this.akhNQ = new cJ(this, mr.clS(nArray9)).WE(true);
            int[] nArray10 = fg.aIW();
            int[] nArray11 = new int[9];
            nArray11[0] = (int)73;
            nArray11[1] = (int)110;
            nArray11[2] = (int)118;
            nArray11[3] = (int)101;
            nArray11[4] = (int)110;
            nArray11[5] = (int)116;
            nArray11[6] = (int)111;
            nArray11[7] = (int)114;
            nArray11[8] = (int)121;
            this.sxweB = new cJ(this, mr.clS(nArray11)).WE(false);
            int[] nArray12 = new int[15];
            nArray12[0] = (int)82;
            nArray12[1] = (int)97;
            nArray12[2] = (int)110;
            nArray12[3] = (int)100;
            nArray12[4] = (int)111;
            nArray12[5] = (int)109;
            nArray12[6] = (int)105;
            nArray12[7] = (int)122;
            nArray12[8] = (int)101;
            nArray12[9] = (int)32;
            nArray12[10] = (int)83;
            nArray12[11] = (int)112;
            nArray12[12] = (int)101;
            nArray12[13] = (int)101;
            nArray12[14] = (int)100;
            this.aVMzs = new cJ(this, mr.clS(nArray12)).WE(true);
            int[] nArray13 = new int[10];
            nArray13[0] = (int)67;
            nArray13[1] = (int)111;
            nArray13[2] = (int)110;
            nArray13[3] = (int)100;
            nArray13[4] = (int)105;
            nArray13[5] = (int)116;
            nArray13[6] = (int)105;
            nArray13[7] = (int)111;
            nArray13[8] = (int)110;
            nArray13[9] = (int)115;
            this.ipOaN = new cv(this, mr.clS(nArray13));
            int[] nArray14 = new int[14];
            nArray14[0] = (int)72;
            nArray14[1] = (int)111;
            nArray14[2] = (int)108;
            nArray14[3] = (int)100;
            nArray14[4] = (int)105;
            nArray14[5] = (int)110;
            nArray14[6] = (int)103;
            nArray14[7] = (int)32;
            nArray14[8] = (int)87;
            nArray14[9] = (int)101;
            nArray14[10] = (int)97;
            nArray14[11] = (int)112;
            nArray14[12] = (int)111;
            nArray14[13] = (int)110;
            this.SWful = new cw(this.ipOaN, mr.clS(nArray14));
            int[] nArray15 = new int[14];
            nArray15[0] = (int)78;
            nArray15[1] = (int)111;
            nArray15[2] = (int)116;
            nArray15[3] = (int)32;
            nArray15[4] = (int)85;
            nArray15[5] = (int)115;
            nArray15[6] = (int)105;
            nArray15[7] = (int)110;
            nArray15[8] = (int)103;
            nArray15[9] = (int)32;
            nArray15[10] = (int)73;
            nArray15[11] = (int)116;
            nArray15[12] = (int)101;
            nArray15[13] = (int)109;
            this.LbAPM = new cw(this.ipOaN, mr.clS(nArray15));
            this.guvrN = new re((int)12, (int)12, rf.ElhZz, null, fn::aLc, false);
            this.UjADv = new re((int)12, (int)12, rf.ElhZz, null, fn::aLb, false);
            this.AYQUN = new int[]{-1, -1};
            this.OIxOu = new int[]{-1, -1};
            this.HzZRg = 1.0;
            for (rf rf2 : kySvO) {
                try {
                    new cu(this.bunVK, mr.clQ(rf2.dft()));
                    if (nArray10 == null) {
                        if (nArray10 == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw fn.aLd(matchException);
                }
            }
            this.aVMzs.Vf(this.sxweB::WF);
            this.OHuMF.Vf(this.MVcap::TC);
            this.uuTCc.Vf(this.zUyjt::TC);
        }
    }

    static {
        Loader.doInit(fn.class);
        fn._37c593e92cb34b419abdcec04633d1c8();
    }

    private static native void _37c593e92cb34b419abdcec04633d1c8();

    @Override
    public native void YO();

    private static native Object aLg(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ boolean aLc();

    private static native String aLe(byte[] var0);

    private static native int aLi(int var0, long var1);

    private static native CallSite aLk(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void aKN();

    private static native int aLj(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void aKR();

    private native /* synthetic */ boolean aKY(HandledScreen var1, Slot var2);

    private static native String aLf(int var0, long var1);

    private native void aKQ(re var1, cC var2, int var3);

    private static native CallSite aLh(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void aKP();

    private static native /* synthetic */ boolean aLa();

    private static native MatchException aLd(MatchException var0);

    private native rf aKT();

    private native void aKO();

    private native int aKS(int var1);

    private native void aKW(HandledScreen<?> var1);

    private static native /* synthetic */ boolean aKZ();

    private native boolean aKV();

    @hG
    public native void aKM(gH.th var1);

    private static native /* synthetic */ boolean aLb();

    private native boolean aKU();

    private native boolean aKX(HandledScreen<?> var1, Slot var2);
}

