/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.common.collect.Queues
 *  net.minecraft.entity.TrackedPosition
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.entity.TrackedPosition;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.util.math.Vec3d;
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
    private final ConcurrentLinkedQueue<Packet> cDqQL;
    private final mT QSdNA;
    private final mT qDZPi;
    private final mT zLsnh;
    private final fp$sQ YWHjQ;
    private PlayerEntity UBMuW;
    private TrackedPosition wKloG;
    private Vec3d wdMfF;
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

    private native PlayerEntity aLK();

    private native void aLM(PlayerEntity var1);

    private native /* synthetic */ boolean aMt(boolean var1, fp$sR var2);

    private native int aLO(Packet<?> var1);

    private void aLN(boolean bl2) {
        this.UlcPe.removeIf(arg_0 -> this.aMt(bl2, arg_0));
    }

    private void aLP(boolean bl2, boolean bl3, boolean bl4) {
        block22: {
            fp fp2;
            block23: {
                int[] nArray;
                block21: {
                    boolean bl5;
                    block19: {
                        long l2 = QsrXh ^ 0x61E2F2193DL;
                        nArray = fg.aIW();
                        try {
                            block20: {
                                try {
                                    try {
                                        try {
                                            try {
                                                bl5 = bl2;
                                                if (nArray != null) break block19;
                                                if (!bl5) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw fp.aMv(matchException);
                                            }
                                            bl5 = bl3;
                                            if (nArray != null) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw fp.aMv(matchException);
                                        }
                                        if (bl5) break block20;
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
                            bl5 = bl3;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                    }
                    try {
                        if (bl5) {
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
                        if (!bl4) break block23;
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

    private native boolean aLQ(PlayerEntity var1);

    public native boolean aLL();

    private native boolean aLR();

    public native ct aMb();

    public native Vec3d aMp();

    private static native String aMw(byte[] var0);

    public native int aMq();

    private static native int aMB(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cA aLU();

    public native cu aMd();

    public native TrackedPosition aMo();

    public native kx aMg();

    public native cu aMc();

    public native PlayerEntity aMn();

    private static native Object aMy(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private boolean aLS() {
        boolean bl2;
        block13: {
            block11: {
                int[] nArray;
                block12: {
                    PlayerEntity playerEntity;
                    block10: {
                        long l2 = QsrXh ^ 0x186B1DBD9EE4L;
                        nArray = fg.aIW();
                        try {
                            try {
                                playerEntity = this.UBMuW;
                                if (nArray != null) break block10;
                                if (playerEntity == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw fp.aMv(matchException);
                            }
                            playerEntity = this.UBMuW;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                    }
                    try {
                        try {
                            bl2 = playerEntity.isAlive();
                            if (nArray != null) break block12;
                            if (!bl2) break block11;
                        }
                        catch (MatchException matchException) {
                            throw fp.aMv(matchException);
                        }
                        bl2 = this.aLQ(this.UBMuW);
                    }
                    catch (MatchException matchException) {
                        throw fp.aMv(matchException);
                    }
                }
                try {
                    if (nArray != null) break block13;
                    if (!bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw fp.aMv(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    public native cJ aLX();

    public native cC aMa();

    public native mT aMj();

    private static native String aMx(int var0, long var1);

    private static native int aMA(int var0, long var1);

    public native ConcurrentLinkedQueue<fp$sR> aMh();

    public native ConcurrentLinkedQueue<Packet> aMi();

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
        long l2 = QsrXh ^ 0x69D156E089FCL;
        super(gf.aZL((int)fp.aMC("v", (int)6440, (long)(0x63102CAFA4905F28L ^ l2)), false, gh.xwjCw).aZS(false));
        int[] nArray = new int[fp.aMC("v", (int)19556, (long)(0x2CDFAC4C72EF0A0BL ^ l2))];
        nArray[0] = (int)fp.aMC("v", (int)2001, (long)(0xDBDC320901AC1ACL ^ l2));
        nArray[1] = (int)fp.aMC("v", (int)9154, (long)(0x207C3B2ED29659CL ^ l2));
        nArray[2] = (int)fp.aMC("v", (int)32332, (long)(0x19A3C1ED9348B806L ^ l2));
        nArray[3] = (int)fp.aMC("v", (int)29716, (long)(0x78F9B7FBB96D3274L ^ l2));
        nArray[4] = (int)fp.aMC("v", (int)3346, (long)(0x6B103362A69DCB74L ^ l2));
        nArray[5] = (int)fp.aMC("v", (int)21316, (long)(0x6D1EAFE6CD0F9536L ^ l2));
        nArray[fp.aMC("v", (int)5105, (long)(0x5900E3951FC1D5A8L ^ l2))] = (int)fp.aMC("v", (int)20318, (long)(0x201D339DA7D78911L ^ l2));
        nArray[fp.aMC("v", (int)2538, (long)(0x44D134E949394F96L ^ l2))] = (int)fp.aMC("v", (int)17544, (long)(0x2AE16503AA8702E1L ^ l2));
        nArray[fp.aMC("v", (int)11784, (long)(0x1504C38136376850L ^ l2))] = (int)fp.aMC("v", (int)13869, (long)(0x6F26675ECCBDF068L ^ l2));
        nArray[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l2));
        nArray[fp.aMC("v", (int)11412, (long)(0x795950BACA7A6A96L ^ l2))] = (int)fp.aMC("v", (int)2391, (long)(0x2085AEAC46C74F29L ^ l2));
        nArray[fp.aMC("v", (int)30262, (long)(0x55A3C0C8BC16306AL ^ l2))] = (int)fp.aMC("v", (int)976, (long)(0xCAC642ECC8CC59EL ^ l2));
        nArray[fp.aMC("v", (int)25180, (long)(0x488292C7E850A45BL ^ l2))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray[fp.aMC("v", (int)15568, (long)(0x19D12FFCDDC7A85L ^ l2))] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray[fp.aMC("v", (int)9737, (long)(0x376BB496A3CE605DL ^ l2))] = (int)fp.aMC("v", (int)22323, (long)(0x651B0F71B3191174L ^ l2));
        nArray[fp.aMC("v", (int)19976, (long)(0x52BDB3A4AE9A085AL ^ l2))] = (int)fp.aMC("v", (int)25805, (long)(0x7A8FAA2A38B4A290L ^ l2));
        this.huobG = new cA(this, mr.clS(nArray)).UG(0.1).UE(0.0).UF(10.0).UI(2.0, 3.5).UH((String)((Object)fp.aMz("h", (int)10886, (long)(0x105DB9BD23B9BD21L ^ l2))));
        int[] nArray2 = new int[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))];
        nArray2[0] = (int)fp.aMC("v", (int)19030, (long)(0x15072DE2A2580C5FL ^ l2));
        nArray2[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray2[2] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray2[3] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray2[4] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray2[5] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray2[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)23408, (long)(0x5AC79A866DC31D06L ^ l2));
        this.yNflG = new cA(this, mr.clS(nArray2)).UG(10.0).UE(0.0).UF(2500.0).UI(100.0, 500.0).UH((String)((Object)fp.aMz("h", (int)12672, (long)(0x8D2A4FA9550A620L ^ l2))));
        int[] nArray3 = new int[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))];
        nArray3[0] = (int)fp.aMC("v", (int)30602, (long)(0x4F8BBCD794F4B1C6L ^ l2));
        nArray3[1] = (int)fp.aMC("v", (int)5980, (long)(0x2BB60DD7B12AD10AL ^ l2));
        nArray3[2] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray3[3] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray3[4] = (int)fp.aMC("v", (int)23610, (long)(0x5731FE2481671A42L ^ l2));
        nArray3[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray3[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l2));
        nArray3[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray3[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)29049, (long)(0x2F84E5E05D53731L ^ l2));
        nArray3[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray3[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l2));
        this.RnQWk = new cA(this, mr.clS(nArray3)).UG(10.0).UE(0.0).UF(2000.0).UI(500.0, 500.0).UH((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l2))));
        int[] nArray4 = new int[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))];
        nArray4[0] = (int)fp.aMC("v", (int)578, (long)(0x2C8BF3CE712CC444L ^ l2));
        nArray4[1] = (int)fp.aMC("v", (int)14342, (long)(0x714EA1BF58CA7E47L ^ l2));
        nArray4[2] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray4[3] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray4[4] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray4[5] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        this.EWyLd = new cC(this, mr.clS(nArray4)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz((String)((Object)fp.aMz("h", (int)29095, (long)(0x6A4432D389FC6601L ^ l2))));
        int[] nArray5 = new int[fp.aMC("v", (int)21095, (long)(0x63690A225DC8941CL ^ l2))];
        nArray5[0] = (int)fp.aMC("v", (int)7137, (long)(0x36C01DB3BC4EDDB1L ^ l2));
        nArray5[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray5[2] = (int)fp.aMC("v", (int)27058, (long)(0x39E8DECC60D7AFC8L ^ l2));
        nArray5[3] = (int)fp.aMC("v", (int)20415, (long)(0xAA9ED5E5C1289F4L ^ l2));
        nArray5[4] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray5[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray5[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)31280, (long)(0x77564A3E4C83C7DL ^ l2));
        nArray5[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray5[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray5[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)16191, (long)(0x489917CF2D44793CL ^ l2));
        nArray5[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)18688, (long)(0x4829873811020F79L ^ l2));
        nArray5[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l2));
        nArray5[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l2))] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray5[fp.aMC("v", (int)15000, (long)(0x24637E75155B7CFBL ^ l2))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray5[fp.aMC("v", (int)12941, (long)(0x722C27D8CCC9F4ECL ^ l2))] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l2));
        nArray5[fp.aMC("v", (int)3226, (long)(0x21660AAAF8D94AF2L ^ l2))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l2));
        nArray5[fp.aMC("v", (int)25710, (long)(0x784093A5051F2260L ^ l2))] = (int)fp.aMC("v", (int)17443, (long)(0xF40028811010250L ^ l2));
        nArray5[fp.aMC("v", (int)995, (long)(0x45D2D1E75B6945A7L ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        this.ntstt = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))];
        nArray6[0] = (int)fp.aMC("v", (int)12090, (long)(0x503778979C1B696BL ^ l2));
        nArray6[1] = (int)fp.aMC("v", (int)18688, (long)(0x4829873811020F79L ^ l2));
        nArray6[2] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l2));
        nArray6[3] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray6[4] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray6[5] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l2));
        nArray6[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l2));
        nArray6[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)30106, (long)(0x3C70AF6585AAB3F4L ^ l2));
        nArray6[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        this.rdFoG = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(0.0).Vx(10.0).VA(3.0).Vz((String)((Object)fp.aMz("h", (int)7185, (long)(0x26F7CC0342D90BB5L ^ l2))));
        int[] nArray7 = new int[fp.aMC("v", (int)25710, (long)(0x784093A5051F2260L ^ l2))];
        nArray7[0] = (int)fp.aMC("v", (int)25894, (long)(0x5F5BFA7BA3142353L ^ l2));
        nArray7[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray7[2] = (int)fp.aMC("v", (int)20415, (long)(0xAA9ED5E5C1289F4L ^ l2));
        nArray7[3] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray7[4] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray7[5] = (int)fp.aMC("v", (int)21479, (long)(0x146F4DE8AAAE958CL ^ l2));
        nArray7[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray7[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray7[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray7[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray7[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l2));
        nArray7[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray7[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l2))] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l2));
        nArray7[fp.aMC("v", (int)15000, (long)(0x24637E75155B7CFBL ^ l2))] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l2));
        nArray7[fp.aMC("v", (int)12941, (long)(0x722C27D8CCC9F4ECL ^ l2))] = (int)fp.aMC("v", (int)30106, (long)(0x3C70AF6585AAB3F4L ^ l2));
        nArray7[fp.aMC("v", (int)3226, (long)(0x21660AAAF8D94AF2L ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        this.gpLin = new cC(this, mr.clS(nArray7)).Vy(10.0).Vw(0.0).Vx(5000.0).VA(1000.0).Vz((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l2))));
        int[] nArray8 = new int[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l2))];
        nArray8[0] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l2));
        nArray8[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray8[2] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l2));
        nArray8[3] = (int)fp.aMC("v", (int)22557, (long)(0x54BE77041A659E62L ^ l2));
        nArray8[4] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray8[5] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray8[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray8[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l2));
        nArray8[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray8[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)26035, (long)(0x6B0009A5BAD4A3F3L ^ l2));
        nArray8[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray8[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l2));
        this.FOTEE = new cC(this, mr.clS(nArray8)).Vy(10.0).Vw(0.0).Vx(2000.0).VA(150.0).Vz((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l2))));
        int[] nArray9 = new int[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))];
        nArray9[0] = (int)fp.aMC("v", (int)28065, (long)(0x5DC1987798462BA5L ^ l2));
        nArray9[1] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray9[2] = (int)fp.aMC("v", (int)10718, (long)(0x2402C18E7B50EFBCL ^ l2));
        nArray9[3] = (int)fp.aMC("v", (int)3125, (long)(0x6823CF1DFE6B4A77L ^ l2));
        nArray9[4] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray9[5] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray9[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray9[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)3346, (long)(0x6B103362A69DCB74L ^ l2));
        nArray9[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)25174, (long)(0x7B0F7905BEDEA459L ^ l2));
        nArray9[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)6792, (long)(0x2C43F1D79E755CCBL ^ l2));
        nArray9[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        this.YicAd = new ct(this, mr.clS(nArray9));
        this.sCGqe = new cu(this.YicAd, mr.clS(new int[]{(int)fp.aMC("v", (int)12090, (long)(0x503778979C1B696BL ^ l2)), (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l2)), (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2))}));
        int[] nArray10 = new int[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))];
        nArray10[0] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l2));
        nArray10[1] = (int)fp.aMC("v", (int)13269, (long)(0x194C209B3D8D7582L ^ l2));
        nArray10[2] = (int)fp.aMC("v", (int)20415, (long)(0xAA9ED5E5C1289F4L ^ l2));
        nArray10[3] = (int)fp.aMC("v", (int)1730, (long)(0x7685ED9AEE63C084L ^ l2));
        nArray10[4] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray10[5] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray10[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray10[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        this.srhrA = new cu(this.YicAd, mr.clS(nArray10));
        int[] nArray11 = new int[fp.aMC("v", (int)3226, (long)(0x21660AAAF8D94AF2L ^ l2))];
        nArray11[0] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l2));
        nArray11[1] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray11[2] = (int)fp.aMC("v", (int)26035, (long)(0x6B0009A5BAD4A3F3L ^ l2));
        nArray11[3] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray11[4] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l2));
        nArray11[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray11[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)7909, (long)(0x291189BDA7D5880L ^ l2));
        nArray11[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray11[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)11806, (long)(0x768BBEC2509E684DL ^ l2));
        nArray11[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray11[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l2));
        nArray11[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))] = (int)fp.aMC("v", (int)23390, (long)(0x450C06BB2B271D3AL ^ l2));
        nArray11[fp.aMC("v", (int)505, (long)(0x375067D8BE5347FCL ^ l2))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray11[fp.aMC("v", (int)15000, (long)(0x24637E75155B7CFBL ^ l2))] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray11[fp.aMC("v", (int)12941, (long)(0x722C27D8CCC9F4ECL ^ l2))] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l2));
        this.qpbJT = new cJ(this, mr.clS(nArray11)).WE(false);
        int[] nArray12 = new int[fp.aMC("v", (int)4485, (long)(0x3F325E6C5C23D7E2L ^ l2))];
        nArray12[0] = (int)fp.aMC("v", (int)17580, (long)(0x5F54E572847E82F3L ^ l2));
        nArray12[1] = (int)fp.aMC("v", (int)1831, (long)(0x14837298D30CC14AL ^ l2));
        nArray12[2] = (int)fp.aMC("v", (int)11806, (long)(0x768BBEC2509E684DL ^ l2));
        nArray12[3] = (int)fp.aMC("v", (int)10378, (long)(0x213331AA341EEEC3L ^ l2));
        nArray12[4] = (int)fp.aMC("v", (int)23598, (long)(0x24842F964991A75L ^ l2));
        nArray12[5] = (int)fp.aMC("v", (int)18984, (long)(0x412756D992A88C58L ^ l2));
        nArray12[fp.aMC("v", (int)30641, (long)(0x313BAD0AACC3B1C0L ^ l2))] = (int)fp.aMC("v", (int)31495, (long)(0x5DBBC3E1CE2ABD6BL ^ l2));
        nArray12[fp.aMC("v", (int)24505, (long)(0x49477AB7AA9219E3L ^ l2))] = (int)fp.aMC("v", (int)26205, (long)(0x1E6CC0A264C2037L ^ l2));
        nArray12[fp.aMC("v", (int)18472, (long)(0x38BDAFAFE54F8E5FL ^ l2))] = (int)fp.aMC("v", (int)26035, (long)(0x6B0009A5BAD4A3F3L ^ l2));
        nArray12[fp.aMC("v", (int)19505, (long)(0x5C2EC1FE75100A30L ^ l2))] = (int)fp.aMC("v", (int)30223, (long)(0x78799B0DE1A3004L ^ l2));
        nArray12[fp.aMC("v", (int)24397, (long)(0x589F4F9944281939L ^ l2))] = (int)fp.aMC("v", (int)1664, (long)(0x3A0F9F01FF21C08AL ^ l2));
        this.AJNZt = new cA(this, mr.clS(nArray12)).UG(25.0).UE(0.0).UF(9000.0).UI(2500.0, 2500.0).UH((String)((Object)fp.aMz("h", (int)5468, (long)(0x21452AAEECD882F9L ^ l2))));
        this.KAgcx = new kx(this, ku.BEOyU);
        this.UlcPe = Queues.newConcurrentLinkedQueue();
        this.cDqQL = Queues.newConcurrentLinkedQueue();
        this.QSdNA = mT.cpA();
        this.qDZPi = mT.cpA();
        this.zLsnh = mT.cpA();
        this.heFtE = (int)fp.aMC("v", (int)10543, (long)(0x7913BBF7F0BE6F27L ^ l2));
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

