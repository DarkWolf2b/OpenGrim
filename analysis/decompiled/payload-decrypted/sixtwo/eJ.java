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
        super((int)11);
        int[] nArray2 = new int[9];
        nArray2[0] = (int)84;
        nArray2[1] = (int)114;
        nArray2[2] = (int)97;
        nArray2[3] = (int)112;
        nArray2[4] = (int)32;
        nArray2[5] = (int)77;
        nArray2[6] = (int)111;
        nArray2[7] = (int)100;
        nArray2[8] = (int)101;
        this.CuJCC = new ct(this, mr.clS(nArray2));
        this.LcoZx = new cu(this.CuJCC, mr.clS(new int[]{(int)66, (int)111, (int)120}));
        this.zRRku = new cu(this.CuJCC, mr.clS(new int[]{(int)72, (int)101, (int)97, (int)100}));
        this.dsMoQ = new cu(this.CuJCC, mr.clS(new int[]{(int)76, (int)101, (int)103, (int)115}));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)66;
        nArray3[1] = (int)108;
        nArray3[2] = (int)111;
        nArray3[3] = (int)99;
        nArray3[4] = (int)107;
        nArray3[5] = (int)115;
        this.fBJse = new cK(this, mr.clS(nArray3)).WM(jc.GjreY).WN(Items.OBSIDIAN);
        int[] nArray4 = new int[31];
        nArray4[0] = (int)65;
        nArray4[1] = (int)108;
        nArray4[2] = (int)116;
        nArray4[3] = (int)101;
        nArray4[4] = (int)114;
        nArray4[5] = (int)110;
        nArray4[6] = (int)97;
        nArray4[7] = (int)116;
        nArray4[8] = (int)105;
        nArray4[9] = (int)118;
        nArray4[10] = (int)101;
        nArray4[11] = (int)32;
        nArray4[12] = (int)66;
        nArray4[13] = (int)108;
        nArray4[14] = (int)111;
        nArray4[15] = (int)99;
        nArray4[16] = (int)107;
        nArray4[17] = (int)32;
        nArray4[18] = (int)84;
        nArray4[19] = (int)104;
        nArray4[20] = (int)114;
        nArray4[21] = (int)111;
        nArray4[22] = (int)117;
        nArray4[23] = (int)103;
        nArray4[24] = (int)104;
        nArray4[25] = (int)32;
        nArray4[26] = (int)87;
        nArray4[27] = (int)97;
        nArray4[28] = (int)108;
        nArray4[29] = (int)108;
        nArray4[30] = (int)115;
        this.MIXlE = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[17];
        nArray5[0] = (int)65;
        nArray5[1] = (int)108;
        nArray5[2] = (int)116;
        nArray5[3] = (int)101;
        nArray5[4] = (int)114;
        nArray5[5] = (int)110;
        nArray5[6] = (int)97;
        nArray5[7] = (int)116;
        nArray5[8] = (int)105;
        nArray5[9] = (int)118;
        nArray5[10] = (int)101;
        nArray5[11] = (int)32;
        nArray5[12] = (int)66;
        nArray5[13] = (int)108;
        nArray5[14] = (int)111;
        nArray5[15] = (int)99;
        nArray5[16] = (int)107;
        this.ogYnJ = new cK(this, mr.clS(nArray5)).WM(eJ.ayH()).WN(Items.CRYING_OBSIDIAN, Items.OAK_PLANKS).WT();
        int[] nArray6 = new int[12];
        nArray6[0] = (int)68;
        nArray6[1] = (int)111;
        nArray6[2] = (int)117;
        nArray6[3] = (int)98;
        nArray6[4] = (int)108;
        nArray6[5] = (int)101;
        nArray6[6] = (int)32;
        nArray6[7] = (int)80;
        nArray6[8] = (int)108;
        nArray6[9] = (int)97;
        nArray6[10] = (int)99;
        nArray6[11] = (int)101;
        this.fzDSC = new cv(this, mr.clS(nArray6));
        this.TorvG = new cw(this.fzDSC, mr.clS(new int[]{(int)65, (int)98, (int)111, (int)118, (int)101}));
        this.ifPTd = new cw(this.fzDSC, mr.clS(new int[]{(int)66, (int)101, (int)108, (int)111, (int)119}));
        int[] nArray7 = new int[10];
        nArray7[0] = (int)80;
        nArray7[1] = (int)108;
        nArray7[2] = (int)97;
        nArray7[3] = (int)99;
        nArray7[4] = (int)101;
        nArray7[5] = (int)32;
        nArray7[6] = (int)77;
        nArray7[7] = (int)111;
        nArray7[8] = (int)100;
        nArray7[9] = (int)101;
        this.KtDjx = new ct(this, mr.clS(nArray7));
        int[] nArray8 = new int[6];
        nArray8[0] = (int)83;
        nArray8[1] = (int)105;
        nArray8[2] = (int)110;
        nArray8[3] = (int)103;
        nArray8[4] = (int)108;
        nArray8[5] = (int)101;
        this.JNLoj = new cu(this.KtDjx, mr.clS(nArray8));
        int[] nArray9 = nArray;
        try {
            this.pAkkC = new cu(this.KtDjx, mr.clS(new int[]{(int)77, (int)117, (int)108, (int)116, (int)105}));
            int[] nArray10 = new int[15];
            nArray10[0] = (int)66;
            nArray10[1] = (int)108;
            nArray10[2] = (int)111;
            nArray10[3] = (int)99;
            nArray10[4] = (int)107;
            nArray10[5] = (int)115;
            nArray10[6] = (int)32;
            nArray10[7] = (int)80;
            nArray10[8] = (int)101;
            nArray10[9] = (int)114;
            nArray10[10] = (int)32;
            nArray10[11] = (int)84;
            nArray10[12] = (int)105;
            nArray10[13] = (int)99;
            nArray10[14] = (int)107;
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

