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
        super(gf.aZL((int)9, false, gh.xwjCw).aZS(false));
        int[] nArray = new int[16];
        nArray[0] = (int)77;
        nArray[1] = (int)105;
        nArray[2] = (int)110;
        nArray[3] = (int)45;
        nArray[4] = (int)77;
        nArray[5] = (int)97;
        nArray[6] = (int)120;
        nArray[7] = (int)32;
        nArray[8] = (int)68;
        nArray[9] = (int)105;
        nArray[10] = (int)115;
        nArray[11] = (int)116;
        nArray[12] = (int)97;
        nArray[13] = (int)110;
        nArray[14] = (int)99;
        nArray[15] = (int)101;
        this.huobG = new cA(this, mr.clS(nArray)).UG(0.1).UE(0.0).UF(10.0).UI(2.0, 3.5).UH((String)((Object)" blocks"));
        int[] nArray2 = new int[7];
        nArray2[0] = (int)76;
        nArray2[1] = (int)97;
        nArray2[2] = (int)116;
        nArray2[3] = (int)101;
        nArray2[4] = (int)110;
        nArray2[5] = (int)99;
        nArray2[6] = (int)121;
        this.yNflG = new cA(this, mr.clS(nArray2)).UG(10.0).UE(0.0).UF(2500.0).UI(100.0, 500.0).UH((String)((Object)" ms"));
        int[] nArray3 = new int[11];
        nArray3[0] = (int)84;
        nArray3[1] = (int)114;
        nArray3[2] = (int)97;
        nArray3[3] = (int)99;
        nArray3[4] = (int)107;
        nArray3[5] = (int)32;
        nArray3[6] = (int)68;
        nArray3[7] = (int)101;
        nArray3[8] = (int)108;
        nArray3[9] = (int)97;
        nArray3[10] = (int)121;
        this.RnQWk = new cA(this, mr.clS(nArray3)).UG(10.0).UE(0.0).UF(2000.0).UI(500.0, 500.0).UH((String)((Object)" ms"));
        int[] nArray4 = new int[6];
        nArray4[0] = (int)67;
        nArray4[1] = (int)104;
        nArray4[2] = (int)97;
        nArray4[3] = (int)110;
        nArray4[4] = (int)99;
        nArray4[5] = (int)101;
        this.EWyLd = new cC(this, mr.clS(nArray4)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz((String)((Object)" %"));
        int[] nArray5 = new int[18];
        nArray5[0] = (int)80;
        nArray5[1] = (int)97;
        nArray5[2] = (int)117;
        nArray5[3] = (int)115;
        nArray5[4] = (int)101;
        nArray5[5] = (int)32;
        nArray5[6] = (int)79;
        nArray5[7] = (int)110;
        nArray5[8] = (int)32;
        nArray5[9] = (int)72;
        nArray5[10] = (int)117;
        nArray5[11] = (int)114;
        nArray5[12] = (int)116;
        nArray5[13] = (int)32;
        nArray5[14] = (int)84;
        nArray5[15] = (int)105;
        nArray5[16] = (int)109;
        nArray5[17] = (int)101;
        this.ntstt = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[9];
        nArray6[0] = (int)72;
        nArray6[1] = (int)117;
        nArray6[2] = (int)114;
        nArray6[3] = (int)116;
        nArray6[4] = (int)32;
        nArray6[5] = (int)84;
        nArray6[6] = (int)105;
        nArray6[7] = (int)109;
        nArray6[8] = (int)101;
        this.rdFoG = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(0.0).Vx(10.0).VA(3.0).Vz((String)((Object)" ticks"));
        int[] nArray7 = new int[16];
        nArray7[0] = (int)76;
        nArray7[1] = (int)97;
        nArray7[2] = (int)115;
        nArray7[3] = (int)116;
        nArray7[4] = (int)32;
        nArray7[5] = (int)65;
        nArray7[6] = (int)116;
        nArray7[7] = (int)116;
        nArray7[8] = (int)97;
        nArray7[9] = (int)99;
        nArray7[10] = (int)107;
        nArray7[11] = (int)32;
        nArray7[12] = (int)84;
        nArray7[13] = (int)105;
        nArray7[14] = (int)109;
        nArray7[15] = (int)101;
        this.gpLin = new cC(this, mr.clS(nArray7)).Vy(10.0).Vw(0.0).Vx(5000.0).VA(1000.0).Vz((String)((Object)" ms"));
        int[] nArray8 = new int[12];
        nArray8[0] = (int)84;
        nArray8[1] = (int)97;
        nArray8[2] = (int)114;
        nArray8[3] = (int)103;
        nArray8[4] = (int)101;
        nArray8[5] = (int)116;
        nArray8[6] = (int)32;
        nArray8[7] = (int)68;
        nArray8[8] = (int)101;
        nArray8[9] = (int)108;
        nArray8[10] = (int)97;
        nArray8[11] = (int)121;
        this.FOTEE = new cC(this, mr.clS(nArray8)).Vy(10.0).Vw(0.0).Vx(2000.0).VA(150.0).Vz((String)((Object)" ms"));
        int[] nArray9 = new int[11];
        nArray9[0] = (int)84;
        nArray9[1] = (int)97;
        nArray9[2] = (int)114;
        nArray9[3] = (int)103;
        nArray9[4] = (int)101;
        nArray9[5] = (int)116;
        nArray9[6] = (int)32;
        nArray9[7] = (int)77;
        nArray9[8] = (int)111;
        nArray9[9] = (int)100;
        nArray9[10] = (int)101;
        this.YicAd = new ct(this, mr.clS(nArray9));
        this.sCGqe = new cu(this.YicAd, mr.clS(new int[]{(int)72, (int)105, (int)116}));
        int[] nArray10 = new int[8];
        nArray10[0] = (int)68;
        nArray10[1] = (int)105;
        nArray10[2] = (int)115;
        nArray10[3] = (int)116;
        nArray10[4] = (int)97;
        nArray10[5] = (int)110;
        nArray10[6] = (int)99;
        nArray10[7] = (int)101;
        this.srhrA = new cu(this.YicAd, mr.clS(nArray10));
        int[] nArray11 = new int[15];
        nArray11[0] = (int)68;
        nArray11[1] = (int)101;
        nArray11[2] = (int)108;
        nArray11[3] = (int)97;
        nArray11[4] = (int)121;
        nArray11[5] = (int)32;
        nArray11[6] = (int)75;
        nArray11[7] = (int)110;
        nArray11[8] = (int)111;
        nArray11[9] = (int)99;
        nArray11[10] = (int)107;
        nArray11[11] = (int)98;
        nArray11[12] = (int)97;
        nArray11[13] = (int)99;
        nArray11[14] = (int)107;
        this.qpbJT = new cJ(this, mr.clS(nArray11)).WE(false);
        int[] nArray12 = new int[11];
        nArray12[0] = (int)75;
        nArray12[1] = (int)110;
        nArray12[2] = (int)111;
        nArray12[3] = (int)99;
        nArray12[4] = (int)107;
        nArray12[5] = (int)32;
        nArray12[6] = (int)68;
        nArray12[7] = (int)101;
        nArray12[8] = (int)108;
        nArray12[9] = (int)97;
        nArray12[10] = (int)121;
        this.AJNZt = new cA(this, mr.clS(nArray12)).UG(25.0).UE(0.0).UF(9000.0).UI(2500.0, 2500.0).UH((String)((Object)" ms"));
        this.KAgcx = new kx(this, ku.BEOyU);
        this.UlcPe = Queues.newConcurrentLinkedQueue();
        this.cDqQL = Queues.newConcurrentLinkedQueue();
        this.QSdNA = mT.cpA();
        this.qDZPi = mT.cpA();
        this.zLsnh = mT.cpA();
        this.heFtE = (int)100;
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

