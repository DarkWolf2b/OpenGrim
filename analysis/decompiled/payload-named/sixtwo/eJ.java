/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.block.BlockState;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.math.BlockPos;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.eL;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jc;
import sixtwo.mr;
import sixtwo.oD;
import sixtwo.oI;
import sixtwo.oz;

public class eJ
extends eL {
    private final ct CuJCC;
    private final cu LcoZx;
    private final cu zRRku;
    private final cu dsMoQ;
    private final cK fBJse;
    private final cJ MIXlE;
    private final cK ogYnJ;
    private final cv fzDSC;
    private final cw TorvG;
    private final cw ifPTd;
    private final ct KtDjx;
    private final cu JNLoj;
    private final cu pAkkC;
    private final cC qBfOM;
    private final Predicate<BlockPos> Ajpit;
    private final Predicate<BlockState> kMQwW;
    private final Comparator<BlockPos> ldzYZ;
    private static long ofjNs;
    private static long[] soqHb;
    private static Integer[] CLJoU;
    private static Map lbCIz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eJ() {
        long l2 = ofjNs ^ 0x5553A58BD0C3L;
        int[] nArray = eL.aAP();
        super((int)eJ.azu("k", (int)25307, (long)(0x1AD4D67FFEEC121DL ^ l2)));
        int[] nArray2 = new int[eJ.azu("k", (int)26204, (long)(0x31083F7824A516A0L ^ l2))];
        nArray2[0] = (int)eJ.azu("k", (int)23335, (long)(0x6F161A7C6BC72BD8L ^ l2));
        nArray2[1] = (int)eJ.azu("k", (int)26070, (long)(0x6DCBFE5C94371503L ^ l2));
        nArray2[2] = (int)eJ.azu("k", (int)12026, (long)(0x28AE323778765E0BL ^ l2));
        nArray2[3] = (int)eJ.azu("k", (int)21716, (long)(0x11EA6B8328A2403L ^ l2));
        nArray2[4] = (int)eJ.azu("k", (int)20203, (long)(0x380852A489513E43L ^ l2));
        nArray2[5] = (int)eJ.azu("k", (int)11478, (long)(0x231AB358B5DBDC6DL ^ l2));
        nArray2[eJ.azu("k", (int)29275, (long)(0x2393D37C54D002F9L ^ l2))] = (int)eJ.azu("k", (int)15035, (long)(0x21EBB3A414A1CA51L ^ l2));
        nArray2[eJ.azu("k", (int)6471, (long)(0x4B1D3F8158CFE9E4L ^ l2))] = (int)eJ.azu("k", (int)12611, (long)(0x53E268EB28B44181L ^ l2));
        nArray2[eJ.azu("k", (int)5057, (long)(0x61A66F93E9C06378L ^ l2))] = (int)eJ.azu("k", (int)14104, (long)(0x2060EDD395D747FAL ^ l2));
        this.CuJCC = new ct(this, mr.clS(nArray2));
        this.LcoZx = new cu(this.CuJCC, mr.clS(new int[]{(int)eJ.azu("k", (int)27839, (long)(0x5DD1F119D6141C4BL ^ l2)), (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2)), (int)eJ.azu("k", (int)18843, (long)(0x77CDA5DE7BE5397EL ^ l2))}));
        this.zRRku = new cu(this.CuJCC, mr.clS(new int[]{(int)eJ.azu("k", (int)10594, (long)(0x1C62BA8EBE7159CCL ^ l2)), (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2)), (int)eJ.azu("k", (int)17693, (long)(0x7AB46208BDC635D6L ^ l2)), (int)eJ.azu("k", (int)808, (long)(0x26074E13D560F3C4L ^ l2))}));
        this.dsMoQ = new cu(this.CuJCC, mr.clS(new int[]{(int)eJ.azu("k", (int)19476, (long)(0x200884C4C3BFBCA8L ^ l2)), (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2)), (int)eJ.azu("k", (int)25458, (long)(0x3D1640D56C561393L ^ l2)), (int)eJ.azu("k", (int)31405, (long)(0x2D5375A743170A7EL ^ l2))}));
        int[] nArray3 = new int[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))];
        nArray3[0] = (int)eJ.azu("k", (int)15795, (long)(0x1401BAB73FF14D7FL ^ l2));
        nArray3[1] = (int)eJ.azu("k", (int)25653, (long)(0x1F64257D37DF94F1L ^ l2));
        nArray3[2] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
        nArray3[3] = (int)eJ.azu("k", (int)21989, (long)(0x594947E68D6AA556L ^ l2));
        nArray3[4] = (int)eJ.azu("k", (int)17206, (long)(0x47F935392448B3E0L ^ l2));
        nArray3[5] = (int)eJ.azu("k", (int)13783, (long)(0x5DE3CA3312534530L ^ l2));
        this.fBJse = new cK(this, mr.clS(nArray3)).WM(jc.GjreY).WN(Items.OBSIDIAN);
        int[] nArray4 = new int[eJ.azu("k", (int)1628, (long)(0x705B24FBC118F6ABL ^ l2))];
        nArray4[0] = (int)eJ.azu("k", (int)7999, (long)(0x28345CF0EBF5EFE0L ^ l2));
        nArray4[1] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray4[2] = (int)eJ.azu("k", (int)1188, (long)(0x21DE9D2FCD1F745FL ^ l2));
        nArray4[3] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        nArray4[4] = (int)eJ.azu("k", (int)5985, (long)(0x75EDCA29338BE7D5L ^ l2));
        nArray4[5] = (int)eJ.azu("k", (int)22841, (long)(0x79803D1206A9A9D4L ^ l2));
        nArray4[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))] = (int)eJ.azu("k", (int)17693, (long)(0x7AB46208BDC635D6L ^ l2));
        nArray4[eJ.azu("k", (int)24027, (long)(0x10B838F784F0AD06L ^ l2))] = (int)eJ.azu("k", (int)25769, (long)(0x67398602C419461L ^ l2));
        nArray4[eJ.azu("k", (int)30545, (long)(0x4E8EDA22D1687AFL ^ l2))] = (int)eJ.azu("k", (int)20179, (long)(0xAF06CF9C2BD3E2EL ^ l2));
        nArray4[eJ.azu("k", (int)28798, (long)(0x25E7C1591B8000B0L ^ l2))] = (int)eJ.azu("k", (int)4881, (long)(0x187E617C1BA263DBL ^ l2));
        nArray4[eJ.azu("k", (int)24749, (long)(0x152FE61EA65E100CL ^ l2))] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        nArray4[eJ.azu("k", (int)23562, (long)(0x74C30B88999E2CD1L ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
        nArray4[eJ.azu("k", (int)3988, (long)(0x5377E50BACF0FF34L ^ l2))] = (int)eJ.azu("k", (int)15795, (long)(0x1401BAB73FF14D7FL ^ l2));
        nArray4[eJ.azu("k", (int)10069, (long)(0x237BA2C454E457A3L ^ l2))] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray4[eJ.azu("k", (int)7850, (long)(0x5EADCCDE156C6E52L ^ l2))] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
        nArray4[eJ.azu("k", (int)15390, (long)(0x146AB2AFE818CCA1L ^ l2))] = (int)eJ.azu("k", (int)6750, (long)(0x4BE899576A1EABEL ^ l2));
        nArray4[eJ.azu("k", (int)26464, (long)(0x28EC193CF23978FL ^ l2))] = (int)eJ.azu("k", (int)21071, (long)(0x7B5F4D1526F7A282L ^ l2));
        nArray4[eJ.azu("k", (int)31699, (long)(0x1542827920820B69L ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
        nArray4[eJ.azu("k", (int)13248, (long)(0x473D9412AB10436DL ^ l2))] = (int)eJ.azu("k", (int)2912, (long)(0x1DA551A180947BBAL ^ l2));
        nArray4[eJ.azu("k", (int)30550, (long)(0x7EBF726DE93887B5L ^ l2))] = (int)eJ.azu("k", (int)31936, (long)(0x5575E47209D28C2BL ^ l2));
        nArray4[eJ.azu("k", (int)8438, (long)(0x55F54D8DC8B8D024L ^ l2))] = (int)eJ.azu("k", (int)5985, (long)(0x75EDCA29338BE7D5L ^ l2));
        nArray4[eJ.azu("k", (int)21151, (long)(0x518B5F45132222L ^ l2))] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
        nArray4[eJ.azu("k", (int)16984, (long)(0x28CC186DE34EB2E8L ^ l2))] = (int)eJ.azu("k", (int)24475, (long)(0x3CB56AD62DD02F4AL ^ l2));
        nArray4[eJ.azu("k", (int)6134, (long)(0x4319B2C7F510E706L ^ l2))] = (int)eJ.azu("k", (int)9484, (long)(0x79A3E184F81555E8L ^ l2));
        nArray4[eJ.azu("k", (int)23361, (long)(0x4F530DAA383CAB9FL ^ l2))] = (int)eJ.azu("k", (int)29907, (long)(0x4CAAD84A9CE70461L ^ l2));
        nArray4[eJ.azu("k", (int)31742, (long)(0x23CD788521548B26L ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
        nArray4[eJ.azu("k", (int)20133, (long)(0x593BCD522B8CBE75L ^ l2))] = (int)eJ.azu("k", (int)24210, (long)(0x42372CD575222E46L ^ l2));
        nArray4[eJ.azu("k", (int)16200, (long)(0xCE51B259AEBCFF0L ^ l2))] = (int)eJ.azu("k", (int)17693, (long)(0x7AB46208BDC635D6L ^ l2));
        nArray4[eJ.azu("k", (int)7315, (long)(0x7219B7E0B55C6C5CL ^ l2))] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray4[eJ.azu("k", (int)2922, (long)(0xD49DA3827B67BC5L ^ l2))] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray4[eJ.azu("k", (int)10103, (long)(0x5D99CD2C5F28578DL ^ l2))] = (int)eJ.azu("k", (int)13783, (long)(0x5DE3CA3312534530L ^ l2));
        this.MIXlE = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[eJ.azu("k", (int)1178, (long)(0x283E0BA67C80F45FL ^ l2))];
        nArray5[0] = (int)eJ.azu("k", (int)32127, (long)(0x47070CB57D5B0D91L ^ l2));
        nArray5[1] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray5[2] = (int)eJ.azu("k", (int)25769, (long)(0x67398602C419461L ^ l2));
        nArray5[3] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        nArray5[4] = (int)eJ.azu("k", (int)5985, (long)(0x75EDCA29338BE7D5L ^ l2));
        nArray5[5] = (int)eJ.azu("k", (int)11503, (long)(0x4675991EB36A5C36L ^ l2));
        nArray5[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))] = (int)eJ.azu("k", (int)17693, (long)(0x7AB46208BDC635D6L ^ l2));
        nArray5[eJ.azu("k", (int)24027, (long)(0x10B838F784F0AD06L ^ l2))] = (int)eJ.azu("k", (int)25769, (long)(0x67398602C419461L ^ l2));
        nArray5[eJ.azu("k", (int)30545, (long)(0x4E8EDA22D1687AFL ^ l2))] = (int)eJ.azu("k", (int)29120, (long)(0x1FDA327473500175L ^ l2));
        nArray5[eJ.azu("k", (int)28798, (long)(0x25E7C1591B8000B0L ^ l2))] = (int)eJ.azu("k", (int)1747, (long)(0x33E8C50F68C2F610L ^ l2));
        nArray5[eJ.azu("k", (int)9422, (long)(0x4176825950D55478L ^ l2))] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        nArray5[eJ.azu("k", (int)23562, (long)(0x74C30B88999E2CD1L ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
        nArray5[eJ.azu("k", (int)4733, (long)(0x39542CE49A42E294L ^ l2))] = (int)eJ.azu("k", (int)15795, (long)(0x1401BAB73FF14D7FL ^ l2));
        nArray5[eJ.azu("k", (int)27182, (long)(0x27A2AAC93BD11AD7L ^ l2))] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray5[eJ.azu("k", (int)5499, (long)(0x132138E30AB065C5L ^ l2))] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
        nArray5[eJ.azu("k", (int)22023, (long)(0x341DDBB9704FA6EFL ^ l2))] = (int)eJ.azu("k", (int)6750, (long)(0x4BE899576A1EABEL ^ l2));
        nArray5[eJ.azu("k", (int)4723, (long)(0x1F9F42B2CB4F62BAL ^ l2))] = (int)eJ.azu("k", (int)21071, (long)(0x7B5F4D1526F7A282L ^ l2));
        this.ogYnJ = new cK(this, mr.clS(nArray5)).WM(eJ.ayH()).WN(Items.CRYING_OBSIDIAN, Items.OAK_PLANKS).WT();
        int[] nArray6 = new int[eJ.azu("k", (int)4733, (long)(0x39542CE49A42E294L ^ l2))];
        nArray6[0] = (int)eJ.azu("k", (int)32571, (long)(0x1E7FB6853B1D8F97L ^ l2));
        nArray6[1] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
        nArray6[2] = (int)eJ.azu("k", (int)25933, (long)(0x31D3270B1FE1958DL ^ l2));
        nArray6[3] = (int)eJ.azu("k", (int)20992, (long)(0x4308A97D3A1CA2DCL ^ l2));
        nArray6[4] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray6[5] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        nArray6[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
        nArray6[eJ.azu("k", (int)24027, (long)(0x10B838F784F0AD06L ^ l2))] = (int)eJ.azu("k", (int)27199, (long)(0x3E425F1F4EFC1A96L ^ l2));
        nArray6[eJ.azu("k", (int)30545, (long)(0x4E8EDA22D1687AFL ^ l2))] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray6[eJ.azu("k", (int)28798, (long)(0x25E7C1591B8000B0L ^ l2))] = (int)eJ.azu("k", (int)17693, (long)(0x7AB46208BDC635D6L ^ l2));
        nArray6[eJ.azu("k", (int)9422, (long)(0x4176825950D55478L ^ l2))] = (int)eJ.azu("k", (int)6750, (long)(0x4BE899576A1EABEL ^ l2));
        nArray6[eJ.azu("k", (int)23562, (long)(0x74C30B88999E2CD1L ^ l2))] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        this.fzDSC = new cv(this, mr.clS(nArray6));
        this.TorvG = new cw(this.fzDSC, mr.clS(new int[]{(int)eJ.azu("k", (int)32127, (long)(0x47070CB57D5B0D91L ^ l2)), (int)eJ.azu("k", (int)29235, (long)(0x3034A1CCD51F02F2L ^ l2)), (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2)), (int)eJ.azu("k", (int)1747, (long)(0x33E8C50F68C2F610L ^ l2)), (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2))}));
        this.ifPTd = new cw(this.fzDSC, mr.clS(new int[]{(int)eJ.azu("k", (int)15795, (long)(0x1401BAB73FF14D7FL ^ l2)), (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2)), (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2)), (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2)), (int)eJ.azu("k", (int)15081, (long)(0x3AB64316CB994A2EL ^ l2))}));
        int[] nArray7 = new int[eJ.azu("k", (int)9422, (long)(0x4176825950D55478L ^ l2))];
        nArray7[0] = (int)eJ.azu("k", (int)1110, (long)(0x2668EA2E532A74B0L ^ l2));
        nArray7[1] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray7[2] = (int)eJ.azu("k", (int)17693, (long)(0x7AB46208BDC635D6L ^ l2));
        nArray7[3] = (int)eJ.azu("k", (int)6750, (long)(0x4BE899576A1EABEL ^ l2));
        nArray7[4] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        nArray7[5] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
        nArray7[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))] = (int)eJ.azu("k", (int)11496, (long)(0x3DE3567B52D7DC1AL ^ l2));
        nArray7[eJ.azu("k", (int)24027, (long)(0x10B838F784F0AD06L ^ l2))] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
        nArray7[eJ.azu("k", (int)30545, (long)(0x4E8EDA22D1687AFL ^ l2))] = (int)eJ.azu("k", (int)808, (long)(0x26074E13D560F3C4L ^ l2));
        nArray7[eJ.azu("k", (int)28798, (long)(0x25E7C1591B8000B0L ^ l2))] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        this.KtDjx = new ct(this, mr.clS(nArray7));
        int[] nArray8 = new int[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))];
        nArray8[0] = (int)eJ.azu("k", (int)9740, (long)(0x76A99CBC8D356FFL ^ l2));
        nArray8[1] = (int)eJ.azu("k", (int)29120, (long)(0x1FDA327473500175L ^ l2));
        nArray8[2] = (int)eJ.azu("k", (int)11503, (long)(0x4675991EB36A5C36L ^ l2));
        nArray8[3] = (int)eJ.azu("k", (int)9484, (long)(0x79A3E184F81555E8L ^ l2));
        nArray8[4] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
        nArray8[5] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
        this.JNLoj = new cu(this.KtDjx, mr.clS(nArray8));
        int[] nArray9 = nArray;
        try {
            this.pAkkC = new cu(this.KtDjx, mr.clS(new int[]{(int)eJ.azu("k", (int)11496, (long)(0x3DE3567B52D7DC1AL ^ l2)), (int)eJ.azu("k", (int)25933, (long)(0x31D3270B1FE1958DL ^ l2)), (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2)), (int)eJ.azu("k", (int)25769, (long)(0x67398602C419461L ^ l2)), (int)eJ.azu("k", (int)29120, (long)(0x1FDA327473500175L ^ l2))}));
            int[] nArray10 = new int[eJ.azu("k", (int)22023, (long)(0x341DDBB9704FA6EFL ^ l2))];
            nArray10[0] = (int)eJ.azu("k", (int)15795, (long)(0x1401BAB73FF14D7FL ^ l2));
            nArray10[1] = (int)eJ.azu("k", (int)13022, (long)(0x7E909AF9554F426FL ^ l2));
            nArray10[2] = (int)eJ.azu("k", (int)25689, (long)(0x6E745B36F84E94EEL ^ l2));
            nArray10[3] = (int)eJ.azu("k", (int)6750, (long)(0x4BE899576A1EABEL ^ l2));
            nArray10[4] = (int)eJ.azu("k", (int)21071, (long)(0x7B5F4D1526F7A282L ^ l2));
            nArray10[5] = (int)eJ.azu("k", (int)13783, (long)(0x5DE3CA3312534530L ^ l2));
            nArray10[eJ.azu("k", (int)14022, (long)(0x2849B17E074A466DL ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
            nArray10[eJ.azu("k", (int)24027, (long)(0x10B838F784F0AD06L ^ l2))] = (int)eJ.azu("k", (int)1110, (long)(0x2668EA2E532A74B0L ^ l2));
            nArray10[eJ.azu("k", (int)30545, (long)(0x4E8EDA22D1687AFL ^ l2))] = (int)eJ.azu("k", (int)3221, (long)(0x7624B2DEB739FC3FL ^ l2));
            nArray10[eJ.azu("k", (int)28798, (long)(0x25E7C1591B8000B0L ^ l2))] = (int)eJ.azu("k", (int)5985, (long)(0x75EDCA29338BE7D5L ^ l2));
            nArray10[eJ.azu("k", (int)9422, (long)(0x4176825950D55478L ^ l2))] = (int)eJ.azu("k", (int)1070, (long)(0x88D500DF427F4DBL ^ l2));
            nArray10[eJ.azu("k", (int)23562, (long)(0x74C30B88999E2CD1L ^ l2))] = (int)eJ.azu("k", (int)2912, (long)(0x1DA551A180947BBAL ^ l2));
            nArray10[eJ.azu("k", (int)4733, (long)(0x39542CE49A42E294L ^ l2))] = (int)eJ.azu("k", (int)29120, (long)(0x1FDA327473500175L ^ l2));
            nArray10[eJ.azu("k", (int)27182, (long)(0x27A2AAC93BD11AD7L ^ l2))] = (int)eJ.azu("k", (int)6750, (long)(0x4BE899576A1EABEL ^ l2));
            nArray10[eJ.azu("k", (int)5499, (long)(0x132138E30AB065C5L ^ l2))] = (int)eJ.azu("k", (int)21071, (long)(0x7B5F4D1526F7A282L ^ l2));
            this.qBfOM = new cC(this, mr.clS(nArray10)).Vy(1.0).VA(8.0).Vw(2.0).Vx(12.0);
            this.Ajpit = this::azq;
            this.kMQwW = this::azp;
            this.ldzYZ = Comparator.comparing(eJ::azo);
            this.MIXlE.Vf(this::ayE);
            this.ogYnJ.Vf(this::azn);
            this.qBfOM.Vf(this.pAkkC::SZ);
            if (iS.bwL() == null) {
                eL.aAO(new int[3]);
            }
        }
        catch (MatchException matchException) {
            throw eJ.azr(matchException);
        }
    }

    static {
        Loader.doInit(eJ.class);
        eJ._0f62af144daa7258b4d816e929c19089();
    }

    private static native /* synthetic */ BlockPos azd(int var0, BlockPos var1);

    @Override
    protected native void ayx(oD var1);

    public native Predicate<BlockPos> ayX();

    private native /* synthetic */ oz azm(oD var1, BlockPos var2);

    private static native int azt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ void azj(List var0, BlockPos var1);

    public native cv ayQ();

    public native Predicate<BlockState> ayY();

    private static native /* synthetic */ BlockPos azk(int var0, BlockPos var1);

    public native Comparator<BlockPos> ayZ();

    private static native /* synthetic */ void azf(List var0, BlockPos var1);

    private native /* synthetic */ boolean azl(oz var1);

    public native cJ ayO();

    public native ct ayT();

    public native cC ayW();

    private static native /* synthetic */ BlockPos azg(int var0, BlockPos var1);

    private static native /* synthetic */ BlockPos azc(BlockPos var0);

    private static native /* synthetic */ BlockPos azi(int var0, BlockPos var1);

    public native cu ayV();

    public native cK ayP();

    public native cw ayR();

    public native cw ayS();

    public native cu ayU();

    private static native /* synthetic */ boolean aza(BlockPos var0);

    private native /* synthetic */ boolean azb(BlockPos var1);

    private static native int azs(int var0, long var1);

    private static native /* synthetic */ void azh(List var0, int var1, BlockPos var2);

    private static native /* synthetic */ BlockPos aze(int var0, BlockPos var1);

    private native /* synthetic */ boolean azp(BlockState var1);

    private native boolean ayD();

    public native ct ayJ();

    private native boolean ayE();

    private native /* synthetic */ boolean azq(BlockPos var1);

    @hG
    public native void ayq(gv var1);

    private native List<BlockPos> ayC(PlayerEntity var1);

    private native boolean ayG(oz var1);

    public native cu ayK();

    private static native CallSite azu(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException azr(MatchException var0);

    private native /* synthetic */ Boolean azn();

    private native List<BlockPos> ayI(List<BlockPos> var1);

    public native cu ayL();

    private static native /* synthetic */ Double azo(BlockPos var0);

    private native boolean ayF(ItemStack var1);

    public native cu ayM();

    private static native Set<Item> ayH();

    public native cK ayN();

    @Override
    protected native boolean ayt();

    @Override
    protected native List<BlockPos> ayB();

    @Override
    protected native oz ayy(oD var1);

    @Override
    protected native boolean ays();

    @Override
    protected native boolean ayu();

    @Override
    protected native boolean ayv(ItemStack var1);

    @Override
    protected native oI ayw();

    @Override
    protected native boolean ayr();

    @Override
    protected native boolean ayz(oD var1);

    @Override
    protected native void ayA(oD var1);

    private static native void _0f62af144daa7258b4d816e929c19089();
}

