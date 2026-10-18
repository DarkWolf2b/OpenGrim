/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.world.dimension.DimensionType
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.world.dimension.DimensionType;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.mT;
import sixtwo.mr;

public class eV
extends gg {
    private final cJ NdPsx;
    private final cD EbZHv;
    private final cJ UVCdF;
    private final cA nAtgG;
    private final cA SYXBX;
    private final cJ LtwQn;
    private final cJ APBzk;
    private final cJ IXgwi;
    private final cC HYxjn;
    private final cJ XtwRQ;
    private final cJ iexlJ;
    private final mT tOCyA;
    private final mT BjiFk;
    private final mT qpZMv;
    private DimensionType DcPJe;
    private int MuaJV;
    private static boolean Swkzn;
    private static long REuKF;
    private static String[] Zznaj;
    private static String[] LyZTD;
    private static Map IMfWo;
    private static long[] oMAUs;
    private static Integer[] fCNWh;
    private static Map XacZe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _074e36ec2dda231f1c0ea02d763eb3cf();

    public eV() {
        block4: {
            boolean bl2;
            block6: {
                block5: {
                    long l2 = REuKF ^ 0x2E936CD62CC3L;
                    super(gf.aZL((int)28, false, gh.xwjCw));
                    int[] nArray = new int[15];
                    nArray[0] = (int)65;
                    nArray[1] = (int)99;
                    nArray[2] = (int)116;
                    nArray[3] = (int)105;
                    nArray[4] = (int)118;
                    nArray[5] = (int)97;
                    nArray[6] = (int)116;
                    nArray[7] = (int)101;
                    nArray[8] = (int)32;
                    nArray[9] = (int)79;
                    nArray[10] = (int)110;
                    nArray[11] = (int)32;
                    nArray[12] = (int)75;
                    nArray[13] = (int)101;
                    nArray[14] = (int)121;
                    this.NdPsx = new cJ(this, mr.clS(nArray)).WE(false);
                    boolean bl3 = eV.aEp();
                    try {
                        try {
                            int[] nArray2 = new int[14];
                            nArray2[0] = (int)65;
                            nArray2[1] = (int)99;
                            nArray2[2] = (int)116;
                            nArray2[3] = (int)105;
                            nArray2[4] = (int)118;
                            nArray2[5] = (int)97;
                            nArray2[6] = (int)116;
                            nArray2[7] = (int)105;
                            nArray2[8] = (int)111;
                            nArray2[9] = (int)110;
                            nArray2[10] = (int)32;
                            nArray2[11] = (int)75;
                            nArray2[12] = (int)101;
                            nArray2[13] = (int)121;
                            this.EbZHv = new cD(this, mr.clS(nArray2)).VO((int)-999);
                            int[] nArray3 = new int[9];
                            nArray3[0] = (int)83;
                            nArray3[1] = (int)112;
                            nArray3[2] = (int)111;
                            nArray3[3] = (int)111;
                            nArray3[4] = (int)102;
                            nArray3[5] = (int)32;
                            nArray3[6] = (int)67;
                            nArray3[7] = (int)80;
                            nArray3[8] = (int)83;
                            this.UVCdF = new cJ(this, mr.clS(nArray3)).WE(false);
                            int[] nArray4 = new int[11];
                            nArray4[0] = (int)80;
                            nArray4[1] = (int)108;
                            nArray4[2] = (int)97;
                            nArray4[3] = (int)99;
                            nArray4[4] = (int)101;
                            nArray4[5] = (int)32;
                            nArray4[6] = (int)68;
                            nArray4[7] = (int)101;
                            nArray4[8] = (int)108;
                            nArray4[9] = (int)97;
                            nArray4[10] = (int)121;
                            this.nAtgG = new cA(this, mr.clS(nArray4)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)" ticks"));
                            int[] nArray5 = new int[11];
                            nArray5[0] = (int)66;
                            nArray5[1] = (int)114;
                            nArray5[2] = (int)101;
                            nArray5[3] = (int)97;
                            nArray5[4] = (int)107;
                            nArray5[5] = (int)32;
                            nArray5[6] = (int)68;
                            nArray5[7] = (int)101;
                            nArray5[8] = (int)108;
                            nArray5[9] = (int)97;
                            nArray5[10] = (int)121;
                            this.SYXBX = new cA(this, mr.clS(nArray5)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)" ticks"));
                            int[] nArray6 = new int[15];
                            nArray6[0] = (int)78;
                            nArray6[1] = (int)111;
                            nArray6[2] = (int)32;
                            nArray6[3] = (int)67;
                            nArray6[4] = (int)111;
                            nArray6[5] = (int)117;
                            nArray6[6] = (int)110;
                            nArray6[7] = (int)116;
                            nArray6[8] = (int)32;
                            nArray6[9] = (int)71;
                            nArray6[10] = (int)108;
                            nArray6[11] = (int)105;
                            nArray6[12] = (int)116;
                            nArray6[13] = (int)99;
                            nArray6[14] = (int)104;
                            this.LtwQn = new cJ(this, mr.clS(nArray6)).WE(false);
                            int[] nArray7 = new int[9];
                            nArray7[0] = (int)78;
                            nArray7[1] = (int)111;
                            nArray7[2] = (int)32;
                            nArray7[3] = (int)66;
                            nArray7[4] = (int)111;
                            nArray7[5] = (int)117;
                            nArray7[6] = (int)110;
                            nArray7[7] = (int)99;
                            nArray7[8] = (int)101;
                            this.APBzk = new cJ(this, mr.clS(nArray7)).WE(false);
                            int[] nArray8 = new int[12];
                            nArray8[0] = (int)83;
                            nArray8[1] = (int)116;
                            nArray8[2] = (int)111;
                            nArray8[3] = (int)112;
                            nArray8[4] = (int)32;
                            nArray8[5] = (int)111;
                            nArray8[6] = (int)110;
                            nArray8[7] = (int)32;
                            nArray8[8] = (int)75;
                            nArray8[9] = (int)105;
                            nArray8[10] = (int)108;
                            nArray8[11] = (int)108;
                            this.IXgwi = new cJ(this, mr.clS(nArray8)).WE(false);
                            int[] nArray9 = new int[9];
                            nArray9[0] = (int)83;
                            nArray9[1] = (int)116;
                            nArray9[2] = (int)111;
                            nArray9[3] = (int)112;
                            nArray9[4] = (int)32;
                            nArray9[5] = (int)84;
                            nArray9[6] = (int)105;
                            nArray9[7] = (int)109;
                            nArray9[8] = (int)101;
                            this.HYxjn = new cC(this, mr.clS(nArray9)).Vy(25.0).Vw(0.0).Vx(8000.0).VA(1000.0).Vz((String)((Object)" ticks"));
                            int[] nArray10 = new int[11];
                            nArray10[0] = (int)68;
                            nArray10[1] = (int)97;
                            nArray10[2] = (int)109;
                            nArray10[3] = (int)97;
                            nArray10[4] = (int)103;
                            nArray10[5] = (int)101;
                            nArray10[6] = (int)32;
                            nArray10[7] = (int)84;
                            nArray10[8] = (int)105;
                            nArray10[9] = (int)99;
                            nArray10[10] = (int)107;
                            this.XtwRQ = new cJ(this, mr.clS(nArray10)).WE(false);
                            int[] nArray11 = new int[10];
                            nArray11[0] = (int)80;
                            nArray11[1] = (int)114;
                            nArray11[2] = (int)101;
                            nArray11[3] = (int)100;
                            nArray11[4] = (int)105;
                            nArray11[5] = (int)99;
                            nArray11[6] = (int)116;
                            nArray11[7] = (int)32;
                            nArray11[8] = (int)73;
                            nArray11[9] = (int)100;
                            this.iexlJ = new cJ(this, mr.clS(nArray11)).WE(false);
                            this.tOCyA = mT.cpA();
                            this.BjiFk = mT.cpz();
                            this.qpZMv = mT.cpz();
                            this.DcPJe = null;
                            this.EbZHv.Vf(this.NdPsx::WF);
                            this.HYxjn.Vf(this.IXgwi::WF);
                            if (iS.bwL() != null) break block4;
                            if (!bl3) break block5;
                        }
                        catch (MatchException matchException) {
                            throw eV.aEr(matchException);
                        }
                        bl2 = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw eV.aEr(matchException);
                    }
                }
                bl2 = true;
            }
            eV.aEo(bl2);
        }
    }

    static {
        Loader.doInit(eV.class);
        eV._074e36ec2dda231f1c0ea02d763eb3cf();
    }

    private static native CallSite aEv(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException aEr(MatchException var0);

    @hG
    public native void aDP(gH.ti var1);

    private native void aDR();

    private native boolean aDT();

    public native cJ aDU();

    public static native boolean aEp();

    private static native CallSite aEy(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aDO(gH.th var1);

    private native boolean aDQ();

    private native void aDS();

    public static native void aEo(boolean var0);

    private static native Object aEu(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native mT aEf();

    public native cJ aEb();

    public native mT aEg();

    private static native /* synthetic */ boolean aEl(AbstractClientPlayerEntity var0);

    private static native int aEx(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cJ aDW();

    public native cD aDV();

    public native DimensionType aEh();

    private static native /* synthetic */ boolean aEm(AbstractClientPlayerEntity var0);

    private static native /* synthetic */ boolean aEk(AbstractClientPlayerEntity var0);

    private static native String aEt(int var0, long var1);

    public native cA aDY();

    public native cA aDX();

    public native cJ aEd();

    private static native int aEw(int var0, long var1);

    private static native /* synthetic */ boolean aEj(AbstractClientPlayerEntity var0);

    public native cC aEc();

    public native mT aEe();

    private static native String aEs(byte[] var0);

    private static native /* synthetic */ boolean aEn(AbstractClientPlayerEntity var0);

    public native int aEi();

    public native cJ aEa();

    public static native boolean aEq();

    public native cJ aDZ();
}

