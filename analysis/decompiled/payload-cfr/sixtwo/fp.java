/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.common.collect.Queues
 *  net.minecraft.class_1657
 *  net.minecraft.class_243
 *  net.minecraft.class_2596
 *  net.minecraft.class_7422
 */
package sixtwo;

import com.google.common.collect.Queues;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.ConcurrentLinkedQueue;
import native.Loader;
import net.minecraft.class_1657;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_7422;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fg;
import sixtwo.fp$sQ;
import sixtwo.fp$sR;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.ku;
import sixtwo.kx;
import sixtwo.mT;
import sixtwo.mW;
import sixtwo.mr;

public class fp
extends gg {
    private final cA huobG;
    private final cA yNflG;
    private final cA RnQWk;
    private final cC EWyLd;
    private final cJ ntstt;
    private final cC rdFoG;
    private final cC gpLin;
    private final cC FOTEE;
    private final ct YicAd;
    private final cu sCGqe;
    private final cu srhrA;
    private final cJ qpbJT;
    private final cA AJNZt;
    private final kx KAgcx;
    private final ConcurrentLinkedQueue<fp$sR> UlcPe;
    private final ConcurrentLinkedQueue<class_2596> cDqQL;
    private final mT QSdNA;
    private final mT qDZPi;
    private final mT zLsnh;
    private final fp$sQ YWHjQ;
    private class_1657 UBMuW;
    private class_7422 wKloG;
    private class_243 wdMfF;
    private int heFtE;
    private int fNonW;
    private boolean DcASC;
    private final mW iOmXC;
    private static long QsrXh;
    private static String[] GRfzK;
    private static String[] bQlst;
    private static Map LilGp;
    private static long[] vdRSU;
    private static Integer[] WFDNL;
    private static Map ObqJr;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native CallSite aMC(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite aMz(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aLF(gM var1);

    @hG
    public native void aLH(go.sX var1);

    @hG
    public native void aLI(hw.tv var1);

    @hG
    public native void aLJ(gH.th var1);

    private native class_1657 aLK();

    private native void aLM(class_1657 var1);

    private native /* synthetic */ boolean aMt(boolean var1, fp$sR var2);

    private native int aLO(class_2596<?> var1);

    private void aLN(boolean bl) {
        this.UlcPe.removeIf(arg_0 -> this.aMt(bl, arg_0));
    }

    private void aLP(boolean bl, boolean bl2, boolean bl3) {
        block22: {
            fp fp2;
            block23: {
                int[] nArray;
                block21: {
                    boolean bl4;
                    block19: {
                        long l = QsrXh ^ 0x61E2F2193DL;
                        nArray = fg.aIW();
                        try {
                            block20: {
                                try {
                                    try {
                                        try {
                                            try {
                                                bl4 = bl;
                                                if (nArray != null) break block19;
                                                if (!bl4) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw fp.aMv(matchException);
                                            }
                                            bl4 = bl2;
                                            if (nArray != null) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw fp.aMv(matchException);
                                        }
                                        if (bl4) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw fp.aMv(matchException);
                                    }
                                    this.aLN(true);
                                    if (nArray == null) break block21;
                                }
                                catch (MatchException matchException) {
                                    throw fp.aMv(matchException);
                                }
                            }
                            bl4 = bl2;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                    }
                    try {
                        if (bl4) {
                            this.UlcPe.clear();
                        }
                    }
                    catch (MatchException matchException) {
                        throw fp.aMv(matchException);
                    }
                }
                try {
                    try {
                        try {
                            fp2 = this;
                            if (nArray != null) break block22;
                            if (fp2.UBMuW == null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                        if (!bl3) break block23;
                    }
                    catch (MatchException matchException) {
                        throw fp.aMv(matchException);
                    }
                    this.QSdNA.cpB();
                }
                catch (MatchException matchException) {
                    throw fp.aMv(matchException);
                }
            }
            this.UBMuW = null;
            this.wKloG = null;
            fp2 = this;
        }
        fp2.wdMfF = null;
    }

    private static native MatchException aMv(MatchException var0);

    @hG
    public native void aLG(gL.tk var1);

    private native boolean aLQ(class_1657 var1);

    public native boolean aLL();

    private native boolean aLR();

    public native ct aMb();

    public native class_243 aMp();

    private static native String aMw(byte[] var0);

    public native int aMq();

    private static native int aMB(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cA aLU();

    public native cu aMd();

    public native class_7422 aMo();

    public native kx aMg();

    public native cu aMc();

    public native class_1657 aMn();

    private static native Object aMy(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private boolean aLS() {
        boolean bl;
        block13: {
            block11: {
                int[] nArray;
                block12: {
                    class_1657 class_16572;
                    block10: {
                        long l = QsrXh ^ 0x186B1DBD9EE4L;
                        nArray = fg.aIW();
                        try {
                            try {
                                class_16572 = this.UBMuW;
                                if (nArray != null) break block10;
                                if (class_16572 == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw fp.aMv(matchException);
                            }
                            class_16572 = this.UBMuW;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                    }
                    try {
                        try {
                            bl = class_16572.method_5805();
                            if (nArray != null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                        bl = this.aLQ(this.UBMuW);
                    }
                    catch (MatchException matchException) {
                        throw fp.aMv(matchException);
                    }
                }
                try {
                    if (nArray != null) break block13;
                    if (!bl) break block11;
                }
                catch (MatchException matchException) {
                    throw fp.aMv(matchException);
                }
                bl = true;
                break block13;
            }
            bl = false;
        }
        return bl;
    }

    public native cJ aLX();

    public native cC aMa();

    public native mT aMj();

    private static native String aMx(int var0, long var1);

    private static native int aMA(int var0, long var1);

    public native ConcurrentLinkedQueue<fp$sR> aMh();

    public native ConcurrentLinkedQueue<class_2596> aMi();

    public native fp$sQ aMm();

    public native mW aMs();

    public native cC aLZ();

    public native mT aMl();

    public native cA aLT();

    public native cA aLV();

    public native cA aMf();

    public native cC aLW();

    public native cC aLY();

    public native int aMr();

    static native /* synthetic */ boolean aMu(fp var0);

    public native mT aMk();

    public native cJ aMe();

    public fp() {
        long l = QsrXh ^ 0x69D156E089FCL;
        super(gf.aZL((int)fp.aMC("v", (int)6440, (long)(0x63102CAFA4905F28L ^ l)), false, gh.xwjCw).aZS(false));
        int[] nArray = new int[fp.aMC("v", (int)19556, (long)(0x2CDFAC4C72EF0A0BL ^ l))];
        nArray[0] = (int)fp.aMC("v", (int)2001, (long)(0xDBDC320901AC1ACL ^ l));
        nArray[1] = (int)fp.aMC("v", (int)9154, (long)(0x207C3B2ED29659CL ^ l));
        nArray[2] = (int)fp.aMC("v", (int)32332, (long)(0x19A3C1ED9348B806L ^ l));
        nArray[3] = (int)fp.aMC("v", (int)29716, (long)(0x78F9B7FBB96D3274L ^ l));
        nArray[4] = (int)fp.aMC("v", (int)3346, (long)(0x6B103362A69DCB74L ^ l));
        nArray[5] = (int)fp.aMC("v", (int)21316, (long)(0x6D1EAFE6CD0F9536L ^ l));
        nArray[fp.aMC("v", (int)5105, (long)(0x5900E3951FC1D5A8L ^ l))] = (int)fp.aMC("v", (int)20318, (long)(0x201D339DA7D78911L ^ l));
        nArray[fp.aMC("v", (int)2538, (long)(0x44D134E949394F96L ^ l))] = (int)fp.aMC("v", (int)17544, (long)(0x2AE16503AA8702E1L ^ l));
        nArray[fp.aMC("v", (int)11784, (long)(0x1504C38136376850L ^ l))] = (int)fp.aMC("v", (int)13869, (long)(0x6F26675ECCBDF068L ^ l));
        nArray[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l));
        nArray[fp.aMC("v", (int)11412, (long)(0x795950BACA7A6A96L ^ l))] = (int)fp.aMC("v", (int)2391, (long)(0x2085AEAC46C74F29L ^ l));
        nArray[fp.aMC("v", (int)30262, (long)(0x55A3C0C8BC16306AL ^ l))] = (int)fp.aMC("v", (int)976, (long)(0xCAC642ECC8CC59EL ^ l));
        nArray[fp.aMC("v", (int)25180, (long)(0x488292C7E850A45BL ^ l))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray[fp.aMC("v", (int)15568, (long)(0x19D12FFCDDC7A85L ^ l))] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray[fp.aMC("v", (int)9737, (long)(0x376BB496A3CE605DL ^ l))] = (int)fp.aMC("v", (int)22323, (long)(0x651B0F71B3191174L ^ l));
        nArray[fp.aMC("v", (int)19976, (long)(0x52BDB3A4AE9A085AL ^ l))] = (int)fp.aMC("v", (int)25805, (long)(0x7A8FAA2A38B4A290L ^ l));
        this.huobG = new cA(this, mr.clS(nArray)).UG(0.1).UE(0.0).UF(10.0).UI(2.0, 3.5).UH((String)((Object)fp.aMz("h", (int)10886, (long)(0x105DB9BD23B9BD21L ^ l))));
        int[] nArray2 = new int[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))];
        nArray2[0] = (int)fp.aMC("v", (int)19030, (long)(0x15072DE2A2580C5FL ^ l));
        nArray2[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray2[2] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray2[3] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray2[4] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray2[5] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray2[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)23408, (long)(0x5AC79A866DC31D06L ^ l));
        this.yNflG = new cA(this, mr.clS(nArray2)).UG(10.0).UE(0.0).UF(2500.0).UI(100.0, 500.0).UH((String)((Object)fp.aMz("h", (int)12672, (long)(0x8D2A4FA9550A620L ^ l))));
        int[] nArray3 = new int[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))];
        nArray3[0] = (int)fp.aMC("v", (int)30602, (long)(0x4F8BBCD794F4B1C6L ^ l));
        nArray3[1] = (int)fp.aMC("v", (int)5980, (long)(0x2BB60DD7B12AD10AL ^ l));
        nArray3[2] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray3[3] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray3[4] = (int)fp.aMC("v", (int)23610, (long)(0x5731FE2481671A42L ^ l));
        nArray3[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray3[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l));
        nArray3[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray3[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)29049, (long)(0x2F84E5E05D53731L ^ l));
        nArray3[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray3[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l));
        this.RnQWk = new cA(this, mr.clS(nArray3)).UG(10.0).UE(0.0).UF(2000.0).UI(500.0, 500.0).UH((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l))));
        int[] nArray4 = new int[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))];
        nArray4[0] = (int)fp.aMC("v", (int)578, (long)(0x2C8BF3CE712CC444L ^ l));
        nArray4[1] = (int)fp.aMC("v", (int)14342, (long)(0x714EA1BF58CA7E47L ^ l));
        nArray4[2] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray4[3] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray4[4] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray4[5] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        this.EWyLd = new cC(this, mr.clS(nArray4)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz((String)((Object)fp.aMz("h", (int)29095, (long)(0x6A4432D389FC6601L ^ l))));
        int[] nArray5 = new int[fp.aMC("v", (int)21095, (long)(0x63690A225DC8941CL ^ l))];
        nArray5[0] = (int)fp.aMC("v", (int)7137, (long)(0x36C01DB3BC4EDDB1L ^ l));
        nArray5[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray5[2] = (int)fp.aMC("v", (int)27058, (long)(0x39E8DECC60D7AFC8L ^ l));
        nArray5[3] = (int)fp.aMC("v", (int)20415, (long)(0xAA9ED5E5C1289F4L ^ l));
        nArray5[4] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray5[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray5[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)31280, (long)(0x77564A3E4C83C7DL ^ l));
        nArray5[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray5[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray5[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)16191, (long)(0x489917CF2D44793CL ^ l));
        nArray5[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)18688, (long)(0x4829873811020F79L ^ l));
        nArray5[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l));
        nArray5[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l))] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray5[fp.aMC("v", (int)15000, (long)(0x24637E75155B7CFBL ^ l))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray5[fp.aMC("v", (int)12941, (long)(0x722C27D8CCC9F4ECL ^ l))] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l));
        nArray5[fp.aMC("v", (int)3226, (long)(0x21660AAAF8D94AF2L ^ l))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l));
        nArray5[fp.aMC("v", (int)25710, (long)(0x784093A5051F2260L ^ l))] = (int)fp.aMC("v", (int)17443, (long)(0xF40028811010250L ^ l));
        nArray5[fp.aMC("v", (int)995, (long)(0x45D2D1E75B6945A7L ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        this.ntstt = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))];
        nArray6[0] = (int)fp.aMC("v", (int)12090, (long)(0x503778979C1B696BL ^ l));
        nArray6[1] = (int)fp.aMC("v", (int)18688, (long)(0x4829873811020F79L ^ l));
        nArray6[2] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l));
        nArray6[3] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray6[4] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray6[5] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l));
        nArray6[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l));
        nArray6[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)30106, (long)(0x3C70AF6585AAB3F4L ^ l));
        nArray6[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        this.rdFoG = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(0.0).Vx(10.0).VA(3.0).Vz((String)((Object)fp.aMz("h", (int)7185, (long)(0x26F7CC0342D90BB5L ^ l))));
        int[] nArray7 = new int[fp.aMC("v", (int)25710, (long)(0x784093A5051F2260L ^ l))];
        nArray7[0] = (int)fp.aMC("v", (int)25894, (long)(0x5F5BFA7BA3142353L ^ l));
        nArray7[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray7[2] = (int)fp.aMC("v", (int)20415, (long)(0xAA9ED5E5C1289F4L ^ l));
        nArray7[3] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray7[4] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray7[5] = (int)fp.aMC("v", (int)21479, (long)(0x146F4DE8AAAE958CL ^ l));
        nArray7[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray7[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray7[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray7[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray7[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l));
        nArray7[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray7[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l))] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l));
        nArray7[fp.aMC("v", (int)15000, (long)(0x24637E75155B7CFBL ^ l))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l));
        nArray7[fp.aMC("v", (int)12941, (long)(0x722C27D8CCC9F4ECL ^ l))] = (int)fp.aMC("v", (int)30106, (long)(0x3C70AF6585AAB3F4L ^ l));
        nArray7[fp.aMC("v", (int)3226, (long)(0x21660AAAF8D94AF2L ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        this.gpLin = new cC(this, mr.clS(nArray7)).Vy(10.0).Vw(0.0).Vx(5000.0).VA(1000.0).Vz((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l))));
        int[] nArray8 = new int[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l))];
        nArray8[0] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l));
        nArray8[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray8[2] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l));
        nArray8[3] = (int)fp.aMC("v", (int)22557, (long)(0x54BE77041A659E62L ^ l));
        nArray8[4] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray8[5] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray8[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray8[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l));
        nArray8[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray8[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)26035, (long)(0x6B0009A5BAD4A3F3L ^ l));
        nArray8[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray8[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l));
        this.FOTEE = new cC(this, mr.clS(nArray8)).Vy(10.0).Vw(0.0).Vx(2000.0).VA(150.0).Vz((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l))));
        int[] nArray9 = new int[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))];
        nArray9[0] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l));
        nArray9[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray9[2] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l));
        nArray9[3] = (int)fp.aMC("v", (int)3125, (long)(0x6823CF1DFE6B4A77L ^ l));
        nArray9[4] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray9[5] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray9[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray9[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)3346, (long)(0x6B103362A69DCB74L ^ l));
        nArray9[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)25174, (long)(0x7B0F7905BEDEA459L ^ l));
        nArray9[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)6792, (long)(0x2C43F1D79E755CCBL ^ l));
        nArray9[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        this.YicAd = new ct(this, mr.clS(nArray9));
        this.sCGqe = new cu(this.YicAd, mr.clS(new int[]{(int)fp.aMC("v", (int)12090, (long)(0x503778979C1B696BL ^ l)), (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l)), (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l))}));
        int[] nArray10 = new int[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))];
        nArray10[0] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l));
        nArray10[1] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l));
        nArray10[2] = (int)fp.aMC("v", (int)20415, (long)(0xAA9ED5E5C1289F4L ^ l));
        nArray10[3] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l));
        nArray10[4] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray10[5] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray10[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray10[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        this.srhrA = new cu(this.YicAd, mr.clS(nArray10));
        int[] nArray11 = new int[fp.aMC("v", (int)3226, (long)(0x21660AAAF8D94AF2L ^ l))];
        nArray11[0] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l));
        nArray11[1] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray11[2] = (int)fp.aMC("v", (int)26035, (long)(0x6B0009A5BAD4A3F3L ^ l));
        nArray11[3] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray11[4] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l));
        nArray11[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray11[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)7909, (long)(0x291189BDA7D5880L ^ l));
        nArray11[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray11[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)11806, (long)(0x768BBEC2509E684DL ^ l));
        nArray11[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray11[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l));
        nArray11[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))] = (int)fp.aMC("v", (int)23390, (long)(0x450C06BB2B271D3AL ^ l));
        nArray11[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray11[fp.aMC("v", (int)15000, (long)(0x24637E75155B7CFBL ^ l))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray11[fp.aMC("v", (int)12941, (long)(0x722C27D8CCC9F4ECL ^ l))] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l));
        this.qpbJT = new cJ(this, mr.clS(nArray11)).WE(false);
        int[] nArray12 = new int[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l))];
        nArray12[0] = (int)fp.aMC("v", (int)17580, (long)(0x5F54E572847E82F3L ^ l));
        nArray12[1] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l));
        nArray12[2] = (int)fp.aMC("v", (int)11806, (long)(0x768BBEC2509E684DL ^ l));
        nArray12[3] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l));
        nArray12[4] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l));
        nArray12[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l));
        nArray12[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l))] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l));
        nArray12[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l));
        nArray12[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l))] = (int)fp.aMC("v", (int)26035, (long)(0x6B0009A5BAD4A3F3L ^ l));
        nArray12[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l));
        nArray12[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l))] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l));
        this.AJNZt = new cA(this, mr.clS(nArray12)).UG(25.0).UE(0.0).UF(9000.0).UI(2500.0, 2500.0).UH((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l))));
        this.KAgcx = new kx(this, ku.BEOyU);
        this.UlcPe = Queues.newConcurrentLinkedQueue();
        this.cDqQL = Queues.newConcurrentLinkedQueue();
        this.QSdNA = mT.cpA();
        this.qDZPi = mT.cpA();
        this.zLsnh = mT.cpA();
        this.heFtE = (int)fp.aMC("v", (int)10543, (long)(0x7913BBF7F0BE6F27L ^ l));
        this.iOmXC = new mW();
        this.YWHjQ = new fp$sQ(this);
        this.rdFoG.Vf(this.ntstt::WF);
        this.AJNZt.Vf(this.qpbJT::WF);
    }

    static {
        Loader.doInit(fp.class);
        fp._c8f2c988338e235deec38f96a636d182();
    }

    @Override
    public native void aaj();

    private static native void _c8f2c988338e235deec38f96a636d182();

    @Override
    public native void YO();
}
