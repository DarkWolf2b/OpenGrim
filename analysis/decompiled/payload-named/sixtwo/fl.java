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
        super(gf.aZL((int)fl.aKo("v", (int)8801, (long)(0x2BFEE9C354B41C88L ^ l2)), false, gh.xwjCw));
        this.dDKQL = new ct(this, mr.clS(new int[]{(int)fl.aKo("v", (int)2273, (long)(0x4C7C432A3B77B607L ^ l2)), (int)fl.aKo("v", (int)3688, (long)(0x6F84B82D0E9A30BEL ^ l2)), (int)fl.aKo("v", (int)3846, (long)(0x69CB853B621B31C8L ^ l2)), (int)fl.aKo("v", (int)15538, (long)(0x30D1EEC6D76A822CL ^ l2))}));
        this.rVExA = new cu(this.dDKQL, mr.clS(new int[]{(int)fl.aKo("v", (int)8432, (long)(0x63E4BD0518031E5BL ^ l2)), (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2)), (int)fl.aKo("v", (int)5970, (long)(0x2762E9EF121A980L ^ l2)), (int)fl.aKo("v", (int)25055, (long)(0x3F9426D576B55F46L ^ l2))}));
        this.GGmyQ = new cu(this.dDKQL, mr.clS(new int[]{(int)fl.aKo("v", (int)17464, (long)(0x4123FF118F1EFAE6L ^ l2)), (int)fl.aKo("v", (int)18232, (long)(0x28DD2F25650A79AEL ^ l2)), (int)fl.aKo("v", (int)11182, (long)(0x54B01B96AF7D957EL ^ l2)), (int)fl.aKo("v", (int)25942, (long)(0x23ECE7D10BA35BFCL ^ l2))}));
        this.MEzpo = new cu(this.dDKQL, mr.clS(new int[]{(int)fl.aKo("v", (int)4987, (long)(0x3D68016F36672DEAL ^ l2)), (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2)), (int)fl.aKo("v", (int)16496, (long)(0x5AD4FEDE63177E8DL ^ l2)), (int)fl.aKo("v", (int)24117, (long)(0x466059B437EEE0A1L ^ l2))}));
        int[] nArray = new int[fl.aKo("v", (int)3277, (long)(0x41EBE85F998DB206L ^ l2))];
        nArray[0] = (int)fl.aKo("v", (int)7203, (long)(0x49A1FEBDAD7722D9L ^ l2));
        nArray[1] = (int)fl.aKo("v", (int)31622, (long)(0x69B94472370DC542L ^ l2));
        nArray[2] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray[3] = (int)fl.aKo("v", (int)17538, (long)(0xBA2542DFFE3FA7EL ^ l2));
        nArray[4] = (int)fl.aKo("v", (int)15611, (long)(0x612AD9E172538272L ^ l2));
        nArray[5] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray[fl.aKo("v", (int)19150, (long)(0x79B443FDBAE7F466L ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray[fl.aKo("v", (int)7559, (long)(0x2A1570AB70882366L ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray[fl.aKo("v", (int)21922, (long)(0x1CC6501622AE6B2AL ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray[fl.aKo("v", (int)19049, (long)(0x483834A3BC7D74E7L ^ l2))] = (int)fl.aKo("v", (int)845, (long)(0x727737E8C5B73DAAL ^ l2));
        this.yCMVU = new ct(this, mr.clS(nArray));
        this.NMaDj = new cu(this.yCMVU, mr.clS(new int[]{(int)fl.aKo("v", (int)19636, (long)(0x669844504BE3F243L ^ l2)), (int)fl.aKo("v", (int)19510, (long)(0x414E2C8000B4F2B1L ^ l2)), (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2)), (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2))}));
        this.vqHqt = new cu(this.yCMVU, mr.clS(new int[]{(int)fl.aKo("v", (int)7347, (long)(0x25F0F4AC10CB2264L ^ l2)), (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2)), (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2)), (int)fl.aKo("v", (int)6294, (long)(0x78812DB224D32675L ^ l2))}));
        int[] nArray2 = new int[fl.aKo("v", (int)13364, (long)(0x6369F6F294548AA9L ^ l2))];
        nArray2[0] = (int)fl.aKo("v", (int)31254, (long)(0x434D4F02779D44DBL ^ l2));
        nArray2[1] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray2[2] = (int)fl.aKo("v", (int)23350, (long)(0x48981908DF1CE5C5L ^ l2));
        nArray2[3] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray2[4] = (int)fl.aKo("v", (int)9078, (long)(0x1A62219011C79DE6L ^ l2));
        nArray2[5] = (int)fl.aKo("v", (int)22185, (long)(0x679E9D80BBDE6856L ^ l2));
        nArray2[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)19636, (long)(0x669844504BE3F243L ^ l2));
        nArray2[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray2[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)18280, (long)(0x6CC24E278116F9E7L ^ l2));
        nArray2[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray2[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        this.GrPLO = new ct(this, mr.clS(nArray2));
        this.tyFzT = new cu(this.GrPLO, mr.clS(new int[]{(int)fl.aKo("v", (int)18330, (long)(0x70F8935037B5F916L ^ l2)), (int)fl.aKo("v", (int)3315, (long)(0x3EE8807D223B323BL ^ l2))}));
        this.jvMbr = new cu(this.GrPLO, mr.clS(new int[]{(int)fl.aKo("v", (int)6216, (long)(0x64CD8C46640E26A7L ^ l2)), (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2)), (int)fl.aKo("v", (int)1581, (long)(0x5B9B10120AAA38ECL ^ l2)), (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2))})).SY();
        this.SOdOD = new cv(this, mr.clS(new int[]{(int)fl.aKo("v", (int)4987, (long)(0x3D68016F36672DEAL ^ l2)), (int)fl.aKo("v", (int)19510, (long)(0x414E2C8000B4F2B1L ^ l2)), (int)fl.aKo("v", (int)25942, (long)(0x23ECE7D10BA35BFCL ^ l2)), (int)fl.aKo("v", (int)25942, (long)(0x23ECE7D10BA35BFCL ^ l2)), (int)fl.aKo("v", (int)31481, (long)(0x32CD231BBD49C46EL ^ l2))}));
        int[] nArray3 = new int[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))];
        nArray3[0] = (int)fl.aKo("v", (int)2718, (long)(0x2D9405C6AF01347CL ^ l2));
        nArray3[1] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray3[2] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray3[3] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray3[4] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray3[5] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray3[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray3[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        this.cimiv = new cw(this.SOdOD, mr.clS(nArray3)).Tz();
        this.eLmhr = new cw(this.SOdOD, mr.clS(new int[]{(int)fl.aKo("v", (int)10050, (long)(0x7BBF7A8B1FEC19CFL ^ l2)), (int)fl.aKo("v", (int)7161, (long)(0x63155F54805A2578L ^ l2)), (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2)), (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2)), (int)fl.aKo("v", (int)7588, (long)(0x74F0E5D552D52379L ^ l2))})).Tz();
        int[] nArray4 = new int[fl.aKo("v", (int)8260, (long)(0x395275E1BA089EBFL ^ l2))];
        nArray4[0] = (int)fl.aKo("v", (int)16115, (long)(0x3F60526C72D10006L ^ l2));
        nArray4[1] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray4[2] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray4[3] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray4[4] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray4[5] = (int)fl.aKo("v", (int)12615, (long)(0x476509C214300FA9L ^ l2));
        nArray4[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray4[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray4[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray4[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray4[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray4[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray4[fl.aKo("v", (int)3109, (long)(0x4A234BDE0ADE32F0L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray4[fl.aKo("v", (int)2929, (long)(0xE7595872A0235E9L ^ l2))] = (int)fl.aKo("v", (int)1940, (long)(0x5583A9828A6C397CL ^ l2));
        nArray4[fl.aKo("v", (int)22732, (long)(0x52CCDBE0E7E7E656L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        this.dnrRK = new cw(this.SOdOD, mr.clS(nArray4)).Tz();
        int[] nArray5 = new int[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))];
        nArray5[0] = (int)fl.aKo("v", (int)24718, (long)(0x317B375191F3DE05L ^ l2));
        nArray5[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray5[2] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray5[3] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray5[4] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray5[5] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray5[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray5[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        this.oMlyx = new cv(this, mr.clS(nArray5));
        int[] nArray6 = new int[fl.aKo("v", (int)29728, (long)(0x627CEEBB6745CAC5L ^ l2))];
        nArray6[0] = (int)fl.aKo("v", (int)25208, (long)(0x40D3BE4CA0535C94L ^ l2));
        nArray6[1] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray6[2] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray6[3] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray6[4] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray6[5] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray6[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray6[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray6[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)24718, (long)(0x317B375191F3DE05L ^ l2));
        nArray6[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray6[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray6[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray6[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray6[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray6[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        this.rfngy = new cw(this.oMlyx, mr.clS(nArray6)).Tz();
        int[] nArray7 = new int[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))];
        nArray7[0] = (int)fl.aKo("v", (int)23072, (long)(0x3DC4C82FDF9864D6L ^ l2));
        nArray7[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray7[2] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray7[3] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray7[4] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray7[5] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray7[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray7[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray7[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray7[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray7[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray7[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        this.YdqGo = new cw(this.oMlyx, mr.clS(nArray7)).Tz();
        int[] nArray8 = new int[fl.aKo("v", (int)21608, (long)(0x15AC8D8399A0EAA8L ^ l2))];
        nArray8[0] = (int)fl.aKo("v", (int)23072, (long)(0x3DC4C82FDF9864D6L ^ l2));
        nArray8[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray8[2] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray8[3] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray8[4] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray8[5] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray8[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray8[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray8[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray8[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray8[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray8[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray8[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray8[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)17152, (long)(0x5355E5ABBCC9FDDBL ^ l2));
        nArray8[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray8[fl.aKo("v", (int)29728, (long)(0x627CEEBB6745CAC5L ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray8[fl.aKo("v", (int)2234, (long)(0x1E221A03DEA13669L ^ l2))] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray8[fl.aKo("v", (int)1415, (long)(0x37336D30BFFABB76L ^ l2))] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray8[fl.aKo("v", (int)18236, (long)(0x4F2CDD0524B6F9AEL ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray8[fl.aKo("v", (int)18175, (long)(0x59E1E9845F7AF81FL ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        this.DDOas = new ct(this, mr.clS(nArray8));
        int[] nArray9 = new int[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))];
        nArray9[0] = (int)fl.aKo("v", (int)18786, (long)(0x78ECDF3CC23777BBL ^ l2));
        nArray9[1] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray9[2] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray9[3] = (int)fl.aKo("v", (int)14383, (long)(0x13ADE225DA6106E9L ^ l2));
        nArray9[4] = (int)fl.aKo("v", (int)25942, (long)(0x23ECE7D10BA35BFCL ^ l2));
        nArray9[5] = (int)fl.aKo("v", (int)25942, (long)(0x23ECE7D10BA35BFCL ^ l2));
        nArray9[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray9[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)1940, (long)(0x5583A9828A6C397CL ^ l2));
        nArray9[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        this.TTfND = new cu(this.DDOas, mr.clS(nArray9));
        int[] nArray10 = new int[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))];
        nArray10[0] = (int)fl.aKo("v", (int)17152, (long)(0x5355E5ABBCC9FDDBL ^ l2));
        nArray10[1] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray10[2] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray10[3] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray10[4] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray10[5] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray10[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray10[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray10[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)7588, (long)(0x74F0E5D552D52379L ^ l2));
        this.qXCVd = new cu(this.DDOas, mr.clS(nArray10));
        int[] nArray11 = new int[fl.aKo("v", (int)11337, (long)(0x1F502500B55C92CBL ^ l2))];
        nArray11[0] = (int)fl.aKo("v", (int)23072, (long)(0x3DC4C82FDF9864D6L ^ l2));
        nArray11[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray11[2] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray11[3] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray11[4] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray11[5] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray11[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray11[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray11[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray11[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray11[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray11[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray11[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray11[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)17152, (long)(0x5355E5ABBCC9FDDBL ^ l2));
        nArray11[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray11[fl.aKo("v", (int)29728, (long)(0x627CEEBB6745CAC5L ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray11[fl.aKo("v", (int)7890, (long)(0x2F8FBFB3D74B2038L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray11[fl.aKo("v", (int)2102, (long)(0x4705ED3B33C5B6C6L ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray11[fl.aKo("v", (int)17472, (long)(0xECF4E896DA7FAD3L ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray11[fl.aKo("v", (int)23191, (long)(0x55B935B347DBE40BL ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray11[fl.aKo("v", (int)27660, (long)(0x5C9A380C35AC5297L ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray11[fl.aKo("v", (int)23827, (long)(0x6D40B1E0AD02E3CFL ^ l2))] = (int)fl.aKo("v", (int)7588, (long)(0x74F0E5D552D52379L ^ l2));
        this.BrVSe = new cC(this, mr.clS(nArray11)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
        int[] nArray12 = new int[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))];
        nArray12[0] = (int)fl.aKo("v", (int)23072, (long)(0x3DC4C82FDF9864D6L ^ l2));
        nArray12[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray12[2] = (int)fl.aKo("v", (int)868, (long)(0x5AD10414DBCFBDB0L ^ l2));
        nArray12[3] = (int)fl.aKo("v", (int)19510, (long)(0x414E2C8000B4F2B1L ^ l2));
        nArray12[4] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray12[5] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray12[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray12[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)7588, (long)(0x74F0E5D552D52379L ^ l2));
        nArray12[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray12[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)19636, (long)(0x669844504BE3F243L ^ l2));
        nArray12[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray12[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)2910, (long)(0x5812AFC74E2035ACL ^ l2));
        nArray12[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray12[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        this.WlEOU = new cC(this, mr.clS(nArray12)).Vy(0.1).Vw(1.0).Vx(45.0).VA(25.0).Vz((String)((Object)fl.aKl("e", (int)14934, (long)(0x3C6EFFD38A79F7C3L ^ l2))));
        int[] nArray13 = new int[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))];
        nArray13[0] = (int)fl.aKo("v", (int)24718, (long)(0x317B375191F3DE05L ^ l2));
        nArray13[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray13[2] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray13[3] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray13[4] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray13[5] = (int)fl.aKo("v", (int)26423, (long)(0x786974C581F959BDL ^ l2));
        nArray13[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray13[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray13[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray13[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        this.rKSxQ = new ct(this, mr.clS(nArray13));
        int[] nArray14 = new int[fl.aKo("v", (int)2102, (long)(0x4705ED3B33C5B6C6L ^ l2))];
        nArray14[0] = (int)fl.aKo("v", (int)23072, (long)(0x3DC4C82FDF9864D6L ^ l2));
        nArray14[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray14[2] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray14[3] = (int)fl.aKo("v", (int)1940, (long)(0x5583A9828A6C397CL ^ l2));
        nArray14[4] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray14[5] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray14[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray14[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray14[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)17152, (long)(0x5355E5ABBCC9FDDBL ^ l2));
        nArray14[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray14[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray14[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray14[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray14[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray14[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray14[fl.aKo("v", (int)29728, (long)(0x627CEEBB6745CAC5L ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray14[fl.aKo("v", (int)7890, (long)(0x2F8FBFB3D74B2038L ^ l2))] = (int)fl.aKo("v", (int)7588, (long)(0x74F0E5D552D52379L ^ l2));
        this.PEysr = new cu(this.rKSxQ, mr.clS(nArray14));
        int[] nArray15 = new int[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))];
        nArray15[0] = (int)fl.aKo("v", (int)24718, (long)(0x317B375191F3DE05L ^ l2));
        nArray15[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray15[2] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray15[3] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray15[4] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray15[5] = (int)fl.aKo("v", (int)17152, (long)(0x5355E5ABBCC9FDDBL ^ l2));
        nArray15[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray15[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray15[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray15[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)30225, (long)(0x3333935A96FD4884L ^ l2));
        nArray15[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        nArray15[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray15[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray15[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)7588, (long)(0x74F0E5D552D52379L ^ l2));
        this.oaKvu = new cC(this, mr.clS(nArray15)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
        int[] nArray16 = new int[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))];
        nArray16[0] = (int)fl.aKo("v", (int)957, (long)(0x2F8D7CDC48383D72L ^ l2));
        nArray16[1] = (int)fl.aKo("v", (int)19510, (long)(0x414E2C8000B4F2B1L ^ l2));
        nArray16[2] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray16[3] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray16[4] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray16[5] = (int)fl.aKo("v", (int)24718, (long)(0x317B375191F3DE05L ^ l2));
        nArray16[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray16[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray16[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray16[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray16[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)11603, (long)(0x4A1F3716FCA093D3L ^ l2));
        this.PfBXr = new cu(this.rKSxQ, mr.clS(nArray16)).SY();
        int[] nArray17 = new int[fl.aKo("v", (int)2102, (long)(0x4705ED3B33C5B6C6L ^ l2))];
        nArray17[0] = (int)fl.aKo("v", (int)3388, (long)(0x24C3059E52AFB3A3L ^ l2));
        nArray17[1] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray17[2] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray17[3] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray17[4] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray17[5] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray17[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray17[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)17152, (long)(0x5355E5ABBCC9FDDBL ^ l2));
        nArray17[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)3540, (long)(0x2EB417051DB9330CL ^ l2));
        nArray17[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)7161, (long)(0x63155F54805A2578L ^ l2));
        nArray17[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray17[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray17[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)30293, (long)(0x7DADE98195C9C89FL ^ l2));
        nArray17[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray17[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray17[fl.aKo("v", (int)29728, (long)(0x627CEEBB6745CAC5L ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray17[fl.aKo("v", (int)7890, (long)(0x2F8FBFB3D74B2038L ^ l2))] = (int)fl.aKo("v", (int)21752, (long)(0x53F678E051ADEA7EL ^ l2));
        this.VGOXA = new cC(this, mr.clS(nArray17)).Vy(10.0).Vw(200.0).Vx(500.0).VA(250.0).Vz((String)((Object)fl.aKl("e", (int)16466, (long)(0x69DDC1B158428DC5L ^ l2))));
        int[] nArray18 = new int[fl.aKo("v", (int)7890, (long)(0x2F8FBFB3D74B2038L ^ l2))];
        nArray18[0] = (int)fl.aKo("v", (int)3388, (long)(0x24C3059E52AFB3A3L ^ l2));
        nArray18[1] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray18[2] = (int)fl.aKo("v", (int)1955, (long)(0x6BA0D28E936AB94EL ^ l2));
        nArray18[3] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray18[4] = (int)fl.aKo("v", (int)3388, (long)(0x24C3059E52AFB3A3L ^ l2));
        nArray18[5] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray18[fl.aKo("v", (int)1142, (long)(0x532D91C13703AB3L ^ l2))] = (int)fl.aKo("v", (int)2048, (long)(0xFD4E081598236D1L ^ l2));
        nArray18[fl.aKo("v", (int)20415, (long)(0x202420926DBF17CL ^ l2))] = (int)fl.aKo("v", (int)9573, (long)(0x168BE2508FC01BACL ^ l2));
        nArray18[fl.aKo("v", (int)30954, (long)(0x6AC7501EBF4F461EL ^ l2))] = (int)fl.aKo("v", (int)19776, (long)(0x5E9F7BD4E9AE73ABL ^ l2));
        nArray18[fl.aKo("v", (int)19866, (long)(0x263DFCE253D57340L ^ l2))] = (int)fl.aKo("v", (int)17547, (long)(0x5C80A20061AB7A4CL ^ l2));
        nArray18[fl.aKo("v", (int)27686, (long)(0x304A744536DED2A5L ^ l2))] = (int)fl.aKo("v", (int)5122, (long)(0x2C650FB9409D2AFCL ^ l2));
        nArray18[fl.aKo("v", (int)17529, (long)(0xAE3D4F32C867AB5L ^ l2))] = (int)fl.aKo("v", (int)30293, (long)(0x7DADE98195C9C89FL ^ l2));
        nArray18[fl.aKo("v", (int)3255, (long)(0x11740CA2CD6FB21EL ^ l2))] = (int)fl.aKo("v", (int)835, (long)(0x97BD349E1FB3D9CL ^ l2));
        nArray18[fl.aKo("v", (int)1706, (long)(0x62A66EEF3A20B868L ^ l2))] = (int)fl.aKo("v", (int)7845, (long)(0x36EBE6AB5449205DL ^ l2));
        nArray18[fl.aKo("v", (int)30846, (long)(0x51241CFAE40C469AL ^ l2))] = (int)fl.aKo("v", (int)4886, (long)(0x252B4A3B9D9DAD93L ^ l2));
        nArray18[fl.aKo("v", (int)29728, (long)(0x627CEEBB6745CAC5L ^ l2))] = (int)fl.aKo("v", (int)21752, (long)(0x53F678E051ADEA7EL ^ l2));
        this.kduLk = new cC(this, mr.clS(nArray18)).Vy(10.0).Vw(0.0).Vx(1500.0).VA(100.0).Vz((String)((Object)fl.aKl("e", (int)20688, (long)(0x20E3DB9228201D46L ^ l2))));
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

