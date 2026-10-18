/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class eB
extends gg {
    private final cJ xPGtf;
    private final cJ hojzx;
    private final cC VCxLS;
    private final cC fjDMc;
    private final cC wBCaT;
    private final ct Kqwum;
    private final cu YqWYM;
    private final cu wKOWY;
    private final ct MoNPF;
    private final cu PgiSy;
    private final cu TJdZl;
    private final cu fklcz;
    private boolean LSmOj;
    private int EKwun;
    private int raYeS;
    private float xVfhc;
    private double dHwGI;
    private static String[] eDmGk;
    private static long XiPDK;
    private static String[] vIQhT;
    private static String[] qgidc;
    private static Map xsTyw;
    private static long[] APZUd;
    private static Integer[] NtVBJ;
    private static Map rueqY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eB() {
        long l2 = XiPDK ^ 0x6A995AF50376L;
        super(gf.aZL((int)eB.awa("y", (int)21999, (long)(0x5D526F0AE4A68353L ^ l2)), false, gh.xgeEn).aZS(false));
        int[] nArray = new int[eB.awa("y", (int)22877, (long)(0x67C6B77E204F0FA2L ^ l2))];
        nArray[0] = (int)eB.awa("y", (int)15187, (long)(0x169958BAF54AEDDCL ^ l2));
        nArray[1] = (int)eB.awa("y", (int)8330, (long)(0x170A41EAB65DF60EL ^ l2));
        nArray[2] = (int)eB.awa("y", (int)26434, (long)(0x1660D9E6BFC31DBL ^ l2));
        nArray[3] = (int)eB.awa("y", (int)25797, (long)(0x8E15C9EAE3323FL ^ l2));
        nArray[4] = (int)eB.awa("y", (int)13624, (long)(0x3E2A0D1C0082E3C9L ^ l2));
        nArray[5] = (int)eB.awa("y", (int)1334, (long)(0x24622EF377B7D3A8L ^ l2));
        nArray[eB.awa("y", (int)15376, (long)(0x3882CE3213C5EAA3L ^ l2))] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray[eB.awa("y", (int)9989, (long)(0x3F4DDDE4207E7184L ^ l2))] = (int)eB.awa("y", (int)7885, (long)(0x390A7FA55810483EL ^ l2));
        nArray[eB.awa("y", (int)32718, (long)(0x1970169384C0295FL ^ l2))] = (int)eB.awa("y", (int)16846, (long)(0x7BCEAF36384B175EL ^ l2));
        this.xPGtf = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[eB.awa("y", (int)9471, (long)(0x2C9E9BBE2695F271L ^ l2))];
        nArray2[0] = (int)eB.awa("y", (int)18370, (long)(0x24AB29FA1489114EL ^ l2));
        nArray2[1] = (int)eB.awa("y", (int)31243, (long)(0x69ABA2E45C882C89L ^ l2));
        nArray2[2] = (int)eB.awa("y", (int)28971, (long)(0x61EFE6B12FE8A796L ^ l2));
        nArray2[3] = (int)eB.awa("y", (int)13365, (long)(0xFB4D5CE86E3E29DL ^ l2));
        nArray2[4] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray2[5] = (int)eB.awa("y", (int)23395, (long)(0x71DB250B40398DC1L ^ l2));
        nArray2[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))] = (int)eB.awa("y", (int)12703, (long)(0x2A58F4A8AD34673CL ^ l2));
        nArray2[eB.awa("y", (int)31627, (long)(0x4C20AF1FFBD5AD3DL ^ l2))] = (int)eB.awa("y", (int)10039, (long)(0x6EC17A93A8A71A1L ^ l2));
        nArray2[eB.awa("y", (int)3286, (long)(0x4CD6BBE4C8B9DA5DL ^ l2))] = (int)eB.awa("y", (int)9899, (long)(0x4324ED76638F700FL ^ l2));
        nArray2[eB.awa("y", (int)8423, (long)(0x1F6CBAEA7F27F650L ^ l2))] = (int)eB.awa("y", (int)2343, (long)(0x397AD4DFEA4E5FBBL ^ l2));
        nArray2[eB.awa("y", (int)31486, (long)(0x1B5F17B76C26AC0CL ^ l2))] = (int)eB.awa("y", (int)14394, (long)(0x6196E7418AC8EE95L ^ l2));
        nArray2[eB.awa("y", (int)30456, (long)(0x6B5EAA518B9DA042L ^ l2))] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        nArray2[eB.awa("y", (int)16052, (long)(0x263578FED7AA6801L ^ l2))] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        nArray2[eB.awa("y", (int)14556, (long)(0x29DA812BE33CEE48L ^ l2))] = (int)eB.awa("y", (int)26659, (long)(0x6F0FD3E1404EBE9AL ^ l2));
        nArray2[eB.awa("y", (int)31752, (long)(0x28251C52A4412A90L ^ l2))] = (int)eB.awa("y", (int)9899, (long)(0x4324ED76638F700FL ^ l2));
        nArray2[eB.awa("y", (int)20286, (long)(0x2A32C460729B9995L ^ l2))] = (int)eB.awa("y", (int)22833, (long)(0x18AE79CD83390FC1L ^ l2));
        nArray2[eB.awa("y", (int)31640, (long)(0xCC1EFFABD08AD34L ^ l2))] = (int)eB.awa("y", (int)16401, (long)(0x1E0ACD9DDEB716E6L ^ l2));
        nArray2[eB.awa("y", (int)30584, (long)(0x67434DDC019A21D1L ^ l2))] = (int)eB.awa("y", (int)13365, (long)(0xFB4D5CE86E3E29DL ^ l2));
        nArray2[eB.awa("y", (int)12424, (long)(0x5E4D61BFDB8CE60EL ^ l2))] = (int)eB.awa("y", (int)23395, (long)(0x71DB250B40398DC1L ^ l2));
        nArray2[eB.awa("y", (int)15728, (long)(0x2BA3333761326B8BL ^ l2))] = (int)eB.awa("y", (int)22075, (long)(0x7136B0C9997900B1L ^ l2));
        this.hojzx = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[eB.awa("y", (int)3286, (long)(0x4CD6BBE4C8B9DA5DL ^ l2))];
        nArray3[0] = (int)eB.awa("y", (int)5673, (long)(0x33C265EE1841C097L ^ l2));
        nArray3[1] = (int)eB.awa("y", (int)6585, (long)(0x2A55A2C6E4A5CF1FL ^ l2));
        nArray3[2] = (int)eB.awa("y", (int)14416, (long)(0x3E145A3F0F436ED9L ^ l2));
        nArray3[3] = (int)eB.awa("y", (int)9899, (long)(0x4324ED76638F700FL ^ l2));
        nArray3[4] = (int)eB.awa("y", (int)17363, (long)(0x8717B6A8A1D957DL ^ l2));
        nArray3[5] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray3[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))] = (int)eB.awa("y", (int)9799, (long)(0x544BDC1407D70B1L ^ l2));
        nArray3[eB.awa("y", (int)31627, (long)(0x4C20AF1FFBD5AD3DL ^ l2))] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        this.VCxLS = new cC(this, mr.clS(nArray3)).Vy(1.0).Vw(1.0).Vx(20.0).VA(1.0).Vz((String)((Object)eB.avX("b", (int)9465, (long)(0x1A27558C28736E02L ^ l2))));
        this.fjDMc = new cC(this, mr.clS(new int[]{(int)eB.awa("y", (int)63, (long)(0x7928CADEC676D68DL ^ l2)), (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2)), (int)eB.awa("y", (int)5123, (long)(0x4D12CDEEC128C2FAL ^ l2)), (int)eB.awa("y", (int)16401, (long)(0x1E0ACD9DDEB716E6L ^ l2)), (int)eB.awa("y", (int)306, (long)(0x5681316CA7BD57A7L ^ l2))})).Vy(1.0).Vw(1.0).Vx(200.0).VA(20.0).Vz((String)((Object)eB.avX("b", (int)19980, (long)(0x723EB72A5B7B84F6L ^ l2))));
        this.wBCaT = new cC(this, mr.clS(new int[]{(int)eB.awa("y", (int)25243, (long)(0x283B281F3660343EL ^ l2)), (int)eB.awa("y", (int)13331, (long)(0x37EEE0C394F0628EL ^ l2)), (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2)), (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2)), (int)eB.awa("y", (int)7967, (long)(0x23520752951B49A0L ^ l2))})).Vy(0.01).Vw(0.01).Vx(3.0).VA(0.05);
        this.Kqwum = new ct(this, mr.clS(new int[]{(int)eB.awa("y", (int)6314, (long)(0x701A4FD48F994E00L ^ l2)), (int)eB.awa("y", (int)14495, (long)(0x7AB82043DD1DEE0DL ^ l2)), (int)eB.awa("y", (int)7967, (long)(0x23520752951B49A0L ^ l2)), (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2))}));
        int[] nArray4 = new int[eB.awa("y", (int)8423, (long)(0x1F6CBAEA7F27F650L ^ l2))];
        nArray4[0] = (int)eB.awa("y", (int)29853, (long)(0x9A0236ED5BEA23AL ^ l2));
        nArray4[1] = (int)eB.awa("y", (int)28198, (long)(0x5CDBC57B9324B8B5L ^ l2));
        nArray4[2] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray4[3] = (int)eB.awa("y", (int)5123, (long)(0x4D12CDEEC128C2FAL ^ l2));
        nArray4[4] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray4[5] = (int)eB.awa("y", (int)13365, (long)(0xFB4D5CE86E3E29DL ^ l2));
        nArray4[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray4[eB.awa("y", (int)31627, (long)(0x4C20AF1FFBD5AD3DL ^ l2))] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        nArray4[eB.awa("y", (int)3286, (long)(0x4CD6BBE4C8B9DA5DL ^ l2))] = (int)eB.awa("y", (int)14938, (long)(0x6D7C9C35A5EAECD9L ^ l2));
        this.YqWYM = new cu(this.Kqwum, mr.clS(nArray4));
        int[] nArray5 = new int[eB.awa("y", (int)3286, (long)(0x4CD6BBE4C8B9DA5DL ^ l2))];
        nArray5[0] = (int)eB.awa("y", (int)17854, (long)(0x39B5C180D86933BL ^ l2));
        nArray5[1] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        nArray5[2] = (int)eB.awa("y", (int)5123, (long)(0x4D12CDEEC128C2FAL ^ l2));
        nArray5[3] = (int)eB.awa("y", (int)13461, (long)(0x6C51D6127C82626DL ^ l2));
        nArray5[4] = (int)eB.awa("y", (int)23395, (long)(0x71DB250B40398DC1L ^ l2));
        nArray5[5] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray5[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))] = (int)eB.awa("y", (int)13365, (long)(0xFB4D5CE86E3E29DL ^ l2));
        nArray5[eB.awa("y", (int)31627, (long)(0x4C20AF1FFBD5AD3DL ^ l2))] = (int)eB.awa("y", (int)11525, (long)(0x503AB13348F87BA4L ^ l2));
        this.wKOWY = new cu(this.Kqwum, mr.clS(nArray5));
        int[] nArray6 = new int[eB.awa("y", (int)12452, (long)(0x6E585A1EDA556615L ^ l2))];
        nArray6[0] = (int)eB.awa("y", (int)29853, (long)(0x9A0236ED5BEA23AL ^ l2));
        nArray6[1] = (int)eB.awa("y", (int)26093, (long)(0x4BED004A206DB319L ^ l2));
        nArray6[2] = (int)eB.awa("y", (int)13365, (long)(0xFB4D5CE86E3E29DL ^ l2));
        nArray6[3] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray6[4] = (int)eB.awa("y", (int)9899, (long)(0x4324ED76638F700FL ^ l2));
        nArray6[5] = (int)eB.awa("y", (int)19245, (long)(0x781069EB76F41D99L ^ l2));
        nArray6[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))] = (int)eB.awa("y", (int)5396, (long)(0x6F13DDF487854393L ^ l2));
        nArray6[eB.awa("y", (int)31627, (long)(0x4C20AF1FFBD5AD3DL ^ l2))] = (int)eB.awa("y", (int)23395, (long)(0x71DB250B40398DC1L ^ l2));
        nArray6[eB.awa("y", (int)3286, (long)(0x4CD6BBE4C8B9DA5DL ^ l2))] = (int)eB.awa("y", (int)1587, (long)(0x2372622385C1D0C6L ^ l2));
        nArray6[eB.awa("y", (int)8423, (long)(0x1F6CBAEA7F27F650L ^ l2))] = (int)eB.awa("y", (int)9899, (long)(0x4324ED76638F700FL ^ l2));
        nArray6[eB.awa("y", (int)16699, (long)(0xEBB8128195C9796L ^ l2))] = (int)eB.awa("y", (int)6314, (long)(0x701A4FD48F994E00L ^ l2));
        nArray6[eB.awa("y", (int)3488, (long)(0x72694E067FA5B3BL ^ l2))] = (int)eB.awa("y", (int)13461, (long)(0x6C51D6127C82626DL ^ l2));
        nArray6[eB.awa("y", (int)19502, (long)(0x6B82442B52941AAEL ^ l2))] = (int)eB.awa("y", (int)7967, (long)(0x23520752951B49A0L ^ l2));
        nArray6[eB.awa("y", (int)26255, (long)(0x42B75AFD3500B007L ^ l2))] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        this.MoNPF = new ct(this, mr.clS(nArray6));
        int[] nArray7 = new int[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))];
        nArray7[0] = (int)eB.awa("y", (int)3134, (long)(0xCA226B3F4FE5A85L ^ l2));
        nArray7[1] = (int)eB.awa("y", (int)13461, (long)(0x6C51D6127C82626DL ^ l2));
        nArray7[2] = (int)eB.awa("y", (int)1867, (long)(0x757A8C793E10D1D1L ^ l2));
        nArray7[3] = (int)eB.awa("y", (int)19701, (long)(0x692FABA4328B1A45L ^ l2));
        nArray7[4] = (int)eB.awa("y", (int)16401, (long)(0x1E0ACD9DDEB716E6L ^ l2));
        nArray7[5] = (int)eB.awa("y", (int)5123, (long)(0x4D12CDEEC128C2FAL ^ l2));
        this.PgiSy = new cu(this.MoNPF, mr.clS(nArray7));
        int[] nArray8 = new int[eB.awa("y", (int)2293, (long)(0x5FBB51D8A28D5E62L ^ l2))];
        nArray8[0] = (int)eB.awa("y", (int)6974, (long)(0x1E2E6C1DA7C7CDA1L ^ l2));
        nArray8[1] = (int)eB.awa("y", (int)16401, (long)(0x1E0ACD9DDEB716E6L ^ l2));
        nArray8[2] = (int)eB.awa("y", (int)23395, (long)(0x71DB250B40398DC1L ^ l2));
        nArray8[3] = (int)eB.awa("y", (int)1587, (long)(0x2372622385C1D0C6L ^ l2));
        nArray8[4] = (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2));
        nArray8[5] = (int)eB.awa("y", (int)13365, (long)(0xFB4D5CE86E3E29DL ^ l2));
        this.TJdZl = new cu(this.MoNPF, mr.clS(nArray8));
        this.fklcz = new cu(this.MoNPF, mr.clS(new int[]{(int)eB.awa("y", (int)22717, (long)(0x2DB0F7C32B900E05L ^ l2)), (int)eB.awa("y", (int)13461, (long)(0x6C51D6127C82626DL ^ l2)), (int)eB.awa("y", (int)26093, (long)(0x4BED004A206DB319L ^ l2)), (int)eB.awa("y", (int)17607, (long)(0x3D07082D75F19267L ^ l2))}));
        this.dHwGI = Double.MAX_VALUE;
    }

    static {
        Loader.doInit(eB.class);
        eB._de0ae3af65923086fea10ac7aa83e497();
    }

    @Override
    public native void aaj();

    private static native void _de0ae3af65923086fea10ac7aa83e497();

    public native float avz();

    public static native String[] avS();

    private native void avx();

    public native cC avC();

    public native cC avD();

    public native cu avH();

    private native boolean avy(Entity var1);

    public native cJ avB();

    public native cu avG();

    public native ct avI();

    public native cC avE();

    public native cu avJ();

    public native boolean avM();

    private static native CallSite awa(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite avX(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cu avL();

    public native int avN();

    @hG
    public native void avr(gH.th var1);

    @hG
    public native void avu(gL.tj var1);

    public native ct avF();

    public native cu avK();

    private native boolean avv(double var1, double var3);

    public native cJ avA();

    private native void avt(PlayerMoveC2SPacket var1, double var2);

    private native void avw();

    @hG
    public native void avs(gH.ti var1);

    public native double avQ();

    public static native void avR(String[] var0);

    private static native MatchException avT(MatchException var0);

    public native float avP();

    private static native String avV(int var0, long var1);

    private static native String avU(byte[] var0);

    private static native int avZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int avY(int var0, long var1);

    private static native Object avW(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native int avO();

    @Override
    public native void YO();
}

