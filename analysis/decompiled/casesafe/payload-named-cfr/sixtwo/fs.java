/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.option.KeyBinding
 *  net.minecraft.entity.Entity
 *  net.minecraft.network.packet.Packet
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import native.Loader;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.Packet;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gZ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.mw;

public class fs
extends gg {
    private final ct IcLmm;
    private final cu oBzcq;
    private final cu YyudN;
    private final ct xtaAk;
    private final cu HIGji;
    private final cu FXNOb;
    private final ct wyZEk;
    private final cu lOgKN;
    private final cD LjfJW;
    private final cC hyauK;
    private final cu clxNa;
    private final cC jJzSe;
    private final cJ DtLvL;
    private float LypUB;
    private float PnWns;
    private Entity QOpIL;
    private int TvEdE;
    private boolean btLpD;
    private boolean VOVop;
    private double FFrtc;
    private boolean bYXHg;
    private boolean URrjv;
    private final Queue<Packet<?>> bapCK;
    private static long KMued;
    private static String aRvFo;
    private static long[] zEEgk;
    private static Integer[] RYkpV;
    private static Map ZmIgj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @hG(priority=mw.CRUCIAL)
    public native void aPg(gL.tj var1);

    @hG
    public native void aPh(gA var1);

    private native void aPl(float var1);

    private native boolean aPm(KeyBinding var1, KeyBinding var2);

    private native boolean aPn(Entity var1, double var2, boolean var4, int var5);

    private native void aPr();

    public native cu aPw();

    public native cC aPD();

    public native cu aPx();

    private static native MatchException aPP(MatchException var0);

    public native boolean aPi(Entity var1, float var2, boolean var3);

    public native ct aPs();

    public native boolean aPM();

    @hG
    public native void aPf(gH.th var1);

    public native boolean aPJ();

    public native float aPG();

    public native boolean aPK();

    private native void aPo(float var1);

    private native void aPq();

    public native cJ aPE();

    private static native int aPR(int var0, long var1);

    public native int aPI();

    private native boolean aPp(gL.tj var1);

    private static native String aPQ(byte[] var0);

    private native float aPj();

    public native cu aPu();

    private static native int aPS(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void aPk();

    @hG
    public native void aPd(gZ.tt var1);

    public native ct aPy();

    @hG
    public native void aPc(gM var1);

    private static native CallSite aPT(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cu aPt();

    public native cD aPA();

    public native float aPF();

    public native ct aPv();

    @hG
    public native void aPe(gv var1);

    public native cu aPC();

    public native double aPL();

    public native Queue<Packet<?>> aPO();

    public native cu aPz();

    public native Entity aPH();

    public native boolean aPN();

    public native cC aPB();

    public fs() {
        long l2 = KMued ^ 0x9D99682F79EL;
        super(gf.aZL((int)fs.aPT("s", (int)29698, (long)(0x77C4B706132309B8L ^ l2)), false, gh.xwjCw));
        this.IcLmm = new ct(this, mr.clS(new int[]{(int)fs.aPT("s", (int)23239, (long)(0x4F2C352DD19A774L ^ l2)), (int)fs.aPT("s", (int)13630, (long)(0x226535C90312C8B7L ^ l2)), (int)fs.aPT("s", (int)10090, (long)(0x2A10976AEEB85AF5L ^ l2)), (int)fs.aPT("s", (int)21264, (long)(0x2C852A23277E2EFCL ^ l2))}));
        int[] nArray = new int[fs.aPT("s", (int)19503, (long)(0x6733389E78DB319AL ^ l2))];
        nArray[0] = (int)fs.aPT("s", (int)27953, (long)(0x7F5B3B71A37710C9L ^ l2));
        nArray[1] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray[2] = (int)fs.aPT("s", (int)2652, (long)(0x54582BE5C1A5F7F9L ^ l2));
        nArray[3] = (int)fs.aPT("s", (int)20022, (long)(0x7CE9773A1DB8B3A1L ^ l2));
        nArray[4] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray[5] = (int)fs.aPT("s", (int)15940, (long)(0xAFA1900227243B2L ^ l2));
        nArray[fs.aPT("s", (int)1585, (long)(0x4C83111C02737BC6L ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray[fs.aPT("s", (int)17076, (long)(0x419236F9F94E3F29L ^ l2))] = (int)fs.aPT("s", (int)22237, (long)(0x559713BE0596AB7BL ^ l2));
        this.oBzcq = new cu(this.IcLmm, mr.clS(nArray));
        int[] nArray2 = new int[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))];
        nArray2[0] = (int)fs.aPT("s", (int)32466, (long)(0x2F1D777B9FCC836AL ^ l2));
        nArray2[1] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray2[2] = (int)fs.aPT("s", (int)25452, (long)(0x5764255603BA9E93L ^ l2));
        nArray2[3] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray2[4] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray2[5] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray2[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        this.YyudN = new cu(this.IcLmm, mr.clS(nArray2));
        int[] nArray3 = new int[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))];
        nArray3[0] = (int)fs.aPT("s", (int)15250, (long)(0x73C79215211B463FL ^ l2));
        nArray3[1] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray3[2] = (int)fs.aPT("s", (int)6878, (long)(0x299F7BA8AF186775L ^ l2));
        nArray3[3] = (int)fs.aPT("s", (int)14041, (long)(0x196A3E9EAB7B4B4BL ^ l2));
        nArray3[4] = (int)fs.aPT("s", (int)13523, (long)(0x1180F93ABD904965L ^ l2));
        nArray3[5] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray3[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)24075, (long)(0x29BFA0EF7BA2389L ^ l2));
        nArray3[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        this.xtaAk = new ct(this, mr.clS(nArray3));
        int[] nArray4 = new int[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))];
        nArray4[0] = (int)fs.aPT("s", (int)30110, (long)(0x7EB304EB294E083EL ^ l2));
        nArray4[1] = (int)fs.aPT("s", (int)9492, (long)(0x38BC335F6095D8EFL ^ l2));
        nArray4[2] = (int)fs.aPT("s", (int)11173, (long)(0x6AEB2D49C567D62DL ^ l2));
        nArray4[3] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray4[4] = (int)fs.aPT("s", (int)737, (long)(0x50C597E447EBFF1CL ^ l2));
        nArray4[5] = (int)fs.aPT("s", (int)6878, (long)(0x299F7BA8AF186775L ^ l2));
        this.HIGji = new cu(this.xtaAk, mr.clS(nArray4));
        int[] nArray5 = new int[fs.aPT("s", (int)10240, (long)(0x6310C181C61655B1L ^ l2))];
        nArray5[0] = (int)fs.aPT("s", (int)5352, (long)(0x78DF137C73D66964L ^ l2));
        nArray5[1] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray5[2] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray5[3] = (int)fs.aPT("s", (int)7820, (long)(0x15D4F37AAA326332L ^ l2));
        nArray5[4] = (int)fs.aPT("s", (int)32591, (long)(0x1E937E4393E302A2L ^ l2));
        nArray5[5] = (int)fs.aPT("s", (int)10624, (long)(0x78B82B5B6E0AD472L ^ l2));
        nArray5[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray5[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray5[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray5[fs.aPT("s", (int)32498, (long)(0x6C6DF436ED78830EL ^ l2))] = (int)fs.aPT("s", (int)7329, (long)(0x509E1B3307C86100L ^ l2));
        nArray5[fs.aPT("s", (int)10306, (long)(0x3D1B55A31B9DD5D8L ^ l2))] = (int)fs.aPT("s", (int)25770, (long)(0x5B09F055FBC71925L ^ l2));
        nArray5[fs.aPT("s", (int)17894, (long)(0x64E67122B91B81CL ^ l2))] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray5[fs.aPT("s", (int)11687, (long)(0x299C33AA79D5D01AL ^ l2))] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray5[fs.aPT("s", (int)15765, (long)(0x6AE5ECCA57474001L ^ l2))] = (int)fs.aPT("s", (int)29832, (long)(0x5750B3BCF9358906L ^ l2));
        nArray5[fs.aPT("s", (int)11603, (long)(0x586334EF11DBD0D8L ^ l2))] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray5[fs.aPT("s", (int)32466, (long)(0x3D4001B61CE70322L ^ l2))] = (int)fs.aPT("s", (int)6335, (long)(0x5004DC25B0FA652AL ^ l2));
        nArray5[fs.aPT("s", (int)26862, (long)(0x4FC1DD8CBC741569L ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray5[fs.aPT("s", (int)25287, (long)(0x228D0F0BBA991F68L ^ l2))] = (int)fs.aPT("s", (int)9492, (long)(0x38BC335F6095D8EFL ^ l2));
        nArray5[fs.aPT("s", (int)17485, (long)(0x31463FD85AEA39E5L ^ l2))] = (int)fs.aPT("s", (int)32579, (long)(0x595A6775C6D102BDL ^ l2));
        this.FXNOb = new cu(this.xtaAk, mr.clS(nArray5));
        int[] nArray6 = new int[fs.aPT("s", (int)18686, (long)(0x40D9E26CD81FB50BL ^ l2))];
        nArray6[0] = (int)fs.aPT("s", (int)14611, (long)(0x763EBE3D58A5448AL ^ l2));
        nArray6[1] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray6[2] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray6[3] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray6[4] = (int)fs.aPT("s", (int)29832, (long)(0x5750B3BCF9358906L ^ l2));
        nArray6[5] = (int)fs.aPT("s", (int)1281, (long)(0x24F775D63A33F880L ^ l2));
        nArray6[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray6[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray6[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)29832, (long)(0x5750B3BCF9358906L ^ l2));
        nArray6[fs.aPT("s", (int)17789, (long)(0x2A99F10DAE7FB892L ^ l2))] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray6[fs.aPT("s", (int)22754, (long)(0xF6E5421FF1DA559L ^ l2))] = (int)fs.aPT("s", (int)3950, (long)(0x27ACAE53A16772EAL ^ l2));
        nArray6[fs.aPT("s", (int)22005, (long)(0x5ECB5E28C530281FL ^ l2))] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray6[fs.aPT("s", (int)21980, (long)(0x4A42839D0F2B284AL ^ l2))] = (int)fs.aPT("s", (int)26660, (long)(0x2FC6E19F7EA95A4L ^ l2));
        nArray6[fs.aPT("s", (int)20306, (long)(0xA11A436E4432D7L ^ l2))] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray6[fs.aPT("s", (int)5821, (long)(0x480FA3B09D3BEB53L ^ l2))] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray6[fs.aPT("s", (int)24362, (long)(0x6C087A67BA2BA2DBL ^ l2))] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray6[fs.aPT("s", (int)2664, (long)(0x6AA16BCA928CF791L ^ l2))] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray6[fs.aPT("s", (int)24692, (long)(0x78965635847D1DCBL ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray6[fs.aPT("s", (int)28463, (long)(0x591B695482BB9285L ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        this.wyZEk = new ct(this, mr.clS(nArray6)).SO(0);
        int[] nArray7 = new int[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))];
        nArray7[0] = (int)fs.aPT("s", (int)3950, (long)(0x27ACAE53A16772EAL ^ l2));
        nArray7[1] = (int)fs.aPT("s", (int)32579, (long)(0x595A6775C6D102BDL ^ l2));
        nArray7[2] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray7[3] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray7[4] = (int)fs.aPT("s", (int)30354, (long)(0x4A598ECCA9E70B25L ^ l2));
        nArray7[5] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray7[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        this.lOgKN = new cu(this.wyZEk, mr.clS(nArray7));
        int[] nArray8 = new int[fs.aPT("s", (int)2664, (long)(0x6AA16BCA928CF791L ^ l2))];
        nArray8[0] = (int)fs.aPT("s", (int)10121, (long)(0x114AD6B14CDA18L ^ l2));
        nArray8[1] = (int)fs.aPT("s", (int)14044, (long)(0x3317BF53DA2CCB4FL ^ l2));
        nArray8[2] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray8[3] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray8[4] = (int)fs.aPT("s", (int)22265, (long)(0x246FB1D9D7FBAB62L ^ l2));
        nArray8[5] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray8[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray8[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)19080, (long)(0x1116A07A98A8B721L ^ l2));
        nArray8[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray8[fs.aPT("s", (int)17789, (long)(0x2A99F10DAE7FB892L ^ l2))] = (int)fs.aPT("s", (int)15885, (long)(0x51DFAF7C092A4395L ^ l2));
        nArray8[fs.aPT("s", (int)22754, (long)(0xF6E5421FF1DA559L ^ l2))] = (int)fs.aPT("s", (int)9492, (long)(0x38BC335F6095D8EFL ^ l2));
        nArray8[fs.aPT("s", (int)22005, (long)(0x5ECB5E28C530281FL ^ l2))] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray8[fs.aPT("s", (int)21980, (long)(0x4A42839D0F2B284AL ^ l2))] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray8[fs.aPT("s", (int)20306, (long)(0xA11A436E4432D7L ^ l2))] = (int)fs.aPT("s", (int)14611, (long)(0x763EBE3D58A5448AL ^ l2));
        nArray8[fs.aPT("s", (int)5821, (long)(0x480FA3B09D3BEB53L ^ l2))] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray8[fs.aPT("s", (int)24362, (long)(0x6C087A67BA2BA2DBL ^ l2))] = (int)fs.aPT("s", (int)32579, (long)(0x595A6775C6D102BDL ^ l2));
        this.LjfJW = new cD(this, mr.clS(nArray8)).VO((int)fs.aPT("s", (int)22488, (long)(0x7967F6A4CAB5AA7CL ^ l2)));
        int[] nArray9 = new int[fs.aPT("s", (int)22754, (long)(0xF6E5421FF1DA559L ^ l2))];
        nArray9[0] = (int)fs.aPT("s", (int)19080, (long)(0x1116A07A98A8B721L ^ l2));
        nArray9[1] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray9[2] = (int)fs.aPT("s", (int)15885, (long)(0x51DFAF7C092A4395L ^ l2));
        nArray9[3] = (int)fs.aPT("s", (int)9492, (long)(0x38BC335F6095D8EFL ^ l2));
        nArray9[4] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray9[5] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray9[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)16799, (long)(0x75E78562A9173C1CL ^ l2));
        nArray9[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray9[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray9[fs.aPT("s", (int)17789, (long)(0x2A99F10DAE7FB892L ^ l2))] = (int)fs.aPT("s", (int)12051, (long)(0x47B8357FCBFD5283L ^ l2));
        this.hyauK = new cC(this, mr.clS(nArray9)).Vy(1.0).VA(90.0).Vw(1.0).Vx(180.0);
        int[] nArray10 = new int[fs.aPT("s", (int)17789, (long)(0x2A99F10DAE7FB892L ^ l2))];
        nArray10[0] = (int)fs.aPT("s", (int)3950, (long)(0x27ACAE53A16772EAL ^ l2));
        nArray10[1] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray10[2] = (int)fs.aPT("s", (int)3145, (long)(0x12B0260A84EAF1F9L ^ l2));
        nArray10[3] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray10[4] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray10[5] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray10[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray10[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray10[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        this.clxNa = new cu(this.wyZEk, mr.clS(nArray10));
        int[] nArray11 = new int[fs.aPT("s", (int)24362, (long)(0x6C087A67BA2BA2DBL ^ l2))];
        nArray11[0] = (int)fs.aPT("s", (int)27780, (long)(0x74F5A8C2D2C49130L ^ l2));
        nArray11[1] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray11[2] = (int)fs.aPT("s", (int)18859, (long)(0x79B6EC6435BCB412L ^ l2));
        nArray11[3] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray11[4] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        nArray11[5] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray11[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)3950, (long)(0x27ACAE53A16772EAL ^ l2));
        nArray11[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray11[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)3145, (long)(0x12B0260A84EAF1F9L ^ l2));
        nArray11[fs.aPT("s", (int)17789, (long)(0x2A99F10DAE7FB892L ^ l2))] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray11[fs.aPT("s", (int)22754, (long)(0xF6E5421FF1DA559L ^ l2))] = (int)fs.aPT("s", (int)21260, (long)(0x40E644E586402EAEL ^ l2));
        nArray11[fs.aPT("s", (int)22005, (long)(0x5ECB5E28C530281FL ^ l2))] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray11[fs.aPT("s", (int)21980, (long)(0x4A42839D0F2B284AL ^ l2))] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray11[fs.aPT("s", (int)20306, (long)(0xA11A436E4432D7L ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray11[fs.aPT("s", (int)5821, (long)(0x480FA3B09D3BEB53L ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        this.jJzSe = new cC(this, mr.clS(nArray11)).Vy(1.0).Vw(-180.0).Vx(180.0).VA(180.0).Vz(aRvFo);
        int[] nArray12 = new int[fs.aPT("s", (int)20306, (long)(0xA11A436E4432D7L ^ l2))];
        nArray12[0] = (int)fs.aPT("s", (int)31559, (long)(0x4427C82A3F5F86C1L ^ l2));
        nArray12[1] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray12[2] = (int)fs.aPT("s", (int)23478, (long)(0x5A9BA246B404A63BL ^ l2));
        nArray12[3] = (int)fs.aPT("s", (int)15175, (long)(0x475982D7480B46E0L ^ l2));
        nArray12[4] = (int)fs.aPT("s", (int)8723, (long)(0x55CC7A261D3A5FE7L ^ l2));
        nArray12[5] = (int)fs.aPT("s", (int)19216, (long)(0x2D1AF0BE819E36B3L ^ l2));
        nArray12[fs.aPT("s", (int)28236, (long)(0x47D06644EE1E93BFL ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray12[fs.aPT("s", (int)92, (long)(0xBF80B8F18CEFDEEL ^ l2))] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray12[fs.aPT("s", (int)2369, (long)(0x1ACAF42D7F37F4EDL ^ l2))] = (int)fs.aPT("s", (int)17465, (long)(0x53EF18899748B997L ^ l2));
        nArray12[fs.aPT("s", (int)17789, (long)(0x2A99F10DAE7FB892L ^ l2))] = (int)fs.aPT("s", (int)30007, (long)(0x4482A386B13088ABL ^ l2));
        nArray12[fs.aPT("s", (int)22754, (long)(0xF6E5421FF1DA559L ^ l2))] = (int)fs.aPT("s", (int)29574, (long)(0x7C53881770968E18L ^ l2));
        nArray12[fs.aPT("s", (int)22005, (long)(0x5ECB5E28C530281FL ^ l2))] = (int)fs.aPT("s", (int)18485, (long)(0x7B8A7B216204B5BFL ^ l2));
        nArray12[fs.aPT("s", (int)21980, (long)(0x4A42839D0F2B284AL ^ l2))] = (int)fs.aPT("s", (int)18601, (long)(0x6C114239D4A53515L ^ l2));
        this.DtLvL = new cJ(this, mr.clS(nArray12));
        this.LypUB = 180.0f;
        this.bapCK = new ConcurrentLinkedQueue();
        this.LjfJW.Vf(this.lOgKN::SZ);
        this.hyauK.Vf(this.lOgKN::SZ);
        this.jJzSe.Vf(this.clxNa::SZ);
        this.DtLvL.Vf(this.oBzcq::SZ);
    }

    static {
        Loader.doInit(fs.class);
        fs._c0e223c9674381b1589f1c334bd979ed();
    }

    private static native void _c0e223c9674381b1589f1c334bd979ed();

    @Override
    public native void YO();
}

