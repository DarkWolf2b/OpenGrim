/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Blocks
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.BlockView
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Random;
import native.Loader;
import net.minecraft.block.Blocks;
import net.minecraft.entity.Entity;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.BlockView;
import net.minecraft.world.RaycastContext;
import sixtwo.cA;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gW;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.oj;
import sixtwo.rD;

public class fw
extends gg {
    private final ct sGDWO;
    private final cu aRvvg;
    private final cu Qksff;
    private final ct YBVgI;
    private final cu pJxNC;
    private final cu wbUnO;
    private final cA KzsPl;
    private final ct tYcBL;
    private final cu ZtDkv;
    private final cu UFdMN;
    private final cu NnigP;
    private final cu vyhuq;
    private final cu KuKPX;
    private final ct cuIXt;
    private final cu SzYmi;
    private final cu qzZfU;
    private final cJ FbvPk;
    private final mT AOeRT;
    private final oj WJJbs;
    private final List<BlockPos> NrVzh;
    private static long QmxeW;
    private static String zAhcx;
    private static long[] YezLm;
    private static Integer[] lSNgg;
    private static Map SVJts;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fw() {
        long l2 = QmxeW ^ 0x33442C7C60BBL;
        super(gf.aZL((int)14, false, gh.xwjCw));
        this.sGDWO = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        int[] nArray = new int[7];
        nArray[0] = (int)66;
        nArray[1] = (int)108;
        nArray[2] = (int)97;
        nArray[3] = (int)116;
        nArray[4] = (int)97;
        nArray[5] = (int)110;
        nArray[6] = (int)116;
        this.aRvvg = new cu(this.sGDWO, mr.clS(nArray));
        this.Qksff = new cu(this.sGDWO, mr.clS(new int[]{(int)76, (int)101, (int)103, (int)105, (int)116}));
        int[] nArray2 = new int[11];
        nArray2[0] = (int)83;
        nArray2[1] = (int)119;
        nArray2[2] = (int)105;
        nArray2[3] = (int)116;
        nArray2[4] = (int)99;
        nArray2[5] = (int)104;
        nArray2[6] = (int)32;
        nArray2[7] = (int)77;
        nArray2[8] = (int)111;
        nArray2[9] = (int)100;
        nArray2[10] = (int)101;
        this.YBVgI = new ct(this, mr.clS(nArray2));
        this.pJxNC = new cu(this.YBVgI, mr.clS(new int[]{(int)65, (int)117, (int)116, (int)111}));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)77;
        nArray3[1] = (int)97;
        nArray3[2] = (int)110;
        nArray3[3] = (int)117;
        nArray3[4] = (int)97;
        nArray3[5] = (int)108;
        this.wbUnO = new cu(this.YBVgI, mr.clS(nArray3));
        int[] nArray4 = new int[17];
        nArray4[0] = (int)65;
        nArray4[1] = (int)117;
        nArray4[2] = (int)116;
        nArray4[3] = (int)111;
        nArray4[4] = (int)32;
        nArray4[5] = (int)83;
        nArray4[6] = (int)119;
        nArray4[7] = (int)105;
        nArray4[8] = (int)116;
        nArray4[9] = (int)99;
        nArray4[10] = (int)104;
        nArray4[11] = (int)32;
        nArray4[12] = (int)68;
        nArray4[13] = (int)101;
        nArray4[14] = (int)108;
        nArray4[15] = (int)97;
        nArray4[16] = (int)121;
        this.KzsPl = new cA(this, mr.clS(nArray4)).UG(1.0).UE(0.0).UF(20.0).UI(1.0, 1.0).UH(zAhcx);
        int[] nArray5 = new int[10];
        nArray5[0] = (int)83;
        nArray5[1] = (int)116;
        nArray5[2] = (int)101;
        nArray5[3] = (int)97;
        nArray5[4] = (int)108;
        nArray5[5] = (int)32;
        nArray5[6] = (int)77;
        nArray5[7] = (int)111;
        nArray5[8] = (int)100;
        nArray5[9] = (int)101;
        this.tYcBL = new ct(this, mr.clS(nArray5));
        int[] nArray6 = new int[12];
        nArray6[0] = (int)87;
        nArray6[1] = (int)97;
        nArray6[2] = (int)116;
        nArray6[3] = (int)101;
        nArray6[4] = (int)114;
        nArray6[5] = (int)32;
        nArray6[6] = (int)67;
        nArray6[7] = (int)111;
        nArray6[8] = (int)98;
        nArray6[9] = (int)119;
        nArray6[10] = (int)101;
        nArray6[11] = (int)98;
        this.ZtDkv = new cu(this.tYcBL, mr.clS(nArray6));
        int[] nArray7 = new int[11];
        nArray7[0] = (int)76;
        nArray7[1] = (int)97;
        nArray7[2] = (int)118;
        nArray7[3] = (int)97;
        nArray7[4] = (int)32;
        nArray7[5] = (int)67;
        nArray7[6] = (int)111;
        nArray7[7] = (int)98;
        nArray7[8] = (int)119;
        nArray7[9] = (int)101;
        nArray7[10] = (int)98;
        this.UFdMN = new cu(this.tYcBL, mr.clS(nArray7));
        this.NnigP = new cu(this.tYcBL, mr.clS(new int[]{(int)87, (int)97, (int)116, (int)101, (int)114}));
        this.vyhuq = new cu(this.tYcBL, mr.clS(new int[]{(int)76, (int)97, (int)118, (int)97}));
        this.KuKPX = new cu(this.tYcBL, mr.clS(new int[]{(int)65, (int)108, (int)108}));
        int[] nArray8 = new int[10];
        nArray8[0] = (int)67;
        nArray8[1] = (int)97;
        nArray8[2] = (int)110;
        nArray8[3] = (int)99;
        nArray8[4] = (int)101;
        nArray8[5] = (int)108;
        nArray8[6] = (int)32;
        nArray8[7] = (int)70;
        nArray8[8] = (int)111;
        nArray8[9] = (int)114;
        this.cuIXt = new ct(this, mr.clS(nArray8));
        this.SzYmi = new cu(this.cuIXt, mr.clS(new int[]{(int)79, (int)119, (int)110}));
        int[] nArray9 = new int[7];
        nArray9[0] = (int)70;
        nArray9[1] = (int)114;
        nArray9[2] = (int)105;
        nArray9[3] = (int)101;
        nArray9[4] = (int)110;
        nArray9[5] = (int)100;
        nArray9[6] = (int)115;
        this.qzZfU = new cu(this.cuIXt, mr.clS(nArray9));
        int[] nArray10 = new int[17];
        nArray10[0] = (int)67;
        nArray10[1] = (int)97;
        nArray10[2] = (int)110;
        nArray10[3] = (int)99;
        nArray10[4] = (int)101;
        nArray10[5] = (int)108;
        nArray10[6] = (int)32;
        nArray10[7] = (int)73;
        nArray10[8] = (int)110;
        nArray10[9] = (int)32;
        nArray10[10] = (int)83;
        nArray10[11] = (int)99;
        nArray10[12] = (int)114;
        nArray10[13] = (int)101;
        nArray10[14] = (int)101;
        nArray10[15] = (int)110;
        nArray10[16] = (int)115;
        this.FbvPk = new cJ(this, mr.clS(nArray10)).WE(false);
        this.AOeRT = mT.cpz();
        this.NrVzh = new ArrayList<BlockPos>();
        this.WJJbs = new oj();
    }

    static {
        Loader.doInit(fw.class);
        fw._961434ad71bdf72b01d088a497663a38();
    }

    private static native void _961434ad71bdf72b01d088a497663a38();

    @hG
    public native void aQZ(gW.tq var1);

    @hG
    public native void aQX(gv var1);

    @hG
    public native void aQY(gH.th var1);

    private static native int aRh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void aRa();

    private static native String aRf(byte[] var0);

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private BlockHitResult aRb() {
        var1_1 = fw.QmxeW ^ 83789467979757L;
        var4_2 = (int)rD.dlmvG.player.getBlockInteractionRange();
        var3_3 = fg.aIW();
        var5_4 = BlockPos.iterateOutwards((BlockPos)BlockPos.ofFloored((Position)rD.dlmvG.player.getEntityPos()).up(), (int)var4_2, (int)var4_2, (int)var4_2);
        var6_5 = var5_4.iterator();
        block84: while (true) {
            v0 = var6_5.hasNext();
            block85: while (v0) {
                v1 /* !! */  = var6_5.next();
                block86: while (true) {
                    block97: {
                        if (this.NrVzh.contains(var7_6 = (BlockPos)v1 /* !! */ ) && var3_3 == null) continue block84;
                        var8_7 = rD.dlmvG.world.getFluidState(var7_6);
                        try {
                            if (!var8_7.isStill() && var3_3 == null) continue block84;
                        }
                        catch (MatchException v2) {
                            throw fw.aRe(v2);
                        }
                        var9_8 = rD.dlmvG.world.getBlockState(var7_6).getBlock();
                        var10_9 = rD.dlmvG.world.getBlockState(var7_6.down()).getBlock();
                        try {
                            v3 = var9_8 == Blocks.WATER;
                        }
                        catch (MatchException v4) {
                            throw fw.aRe(v4);
                        }
                        var11_10 = v3;
                        try {
                            v5 = var9_8 == Blocks.LAVA;
                        }
                        catch (MatchException v6) {
                            throw fw.aRe(v6);
                        }
                        var12_11 = v5;
                        try {
                            v7 = var10_9 == Blocks.COBWEB;
                        }
                        catch (MatchException v8) {
                            throw fw.aRe(v8);
                        }
                        var13_12 = v7;
                        try {
                            if (!this.aRc(var11_10, var12_11, var13_12) && var3_3 == null) continue block84;
                        }
                        catch (MatchException v9) {
                            throw fw.aRe(v9);
                        }
                        var14_13 = var8_7.getShape((BlockView)rD.dlmvG.world, var7_6);
                        try {
                            if (var14_13.isEmpty() && var3_3 == null) continue block84;
                        }
                        catch (MatchException v10) {
                            throw fw.aRe(v10);
                        }
                        var15_14 = rD.dlmvG.player.getEyePos();
                        var16_15 = var7_6.toCenterPos();
                        var17_16 = var15_14.subtract(var16_15).normalize();
                        var18_17 = new ArrayList<Vec3d>();
                        var19_18 = 4;
                        var20_20 = var14_13.getBoundingBoxes().iterator();
                        block87: while (true) {
                            v11 = var20_20.hasNext();
                            block88: while (v11 != 0) {
                                var21_21 = (Box)var20_20.next();
                                var22_23 = var21_21.minX + (double)var7_6.getX();
                                var24_26 = var21_21.maxX + (double)var7_6.getX();
                                var26_31 = var21_21.minY + (double)var7_6.getY();
                                var28_33 = var21_21.maxY + (double)var7_6.getY();
                                var30_34 = var21_21.minZ + (double)var7_6.getZ();
                                var32_35 = var21_21.maxZ + (double)var7_6.getZ();
                                v12 = new Vec3d[fw.aRi("v", (int)23221, (long)(1786539916993995113L ^ var1_1))];
                                v12[0] = new Vec3d(1.0, 0.0, 0.0);
                                v12[1] = new Vec3d(-1.0, 0.0, 0.0);
                                v12[2] = new Vec3d(0.0, 1.0, 0.0);
                                v12[3] = new Vec3d(0.0, -1.0, 0.0);
                                v12[4] = new Vec3d(0.0, 0.0, 1.0);
                                v12[5] = new Vec3d(0.0, 0.0, -1.0);
                                var35_37 = var34_36 = v12;
                                var36_38 = var35_37.length;
                                v13 /* !! */  = (CallSite)false;
                                if (var3_3 != null) break block97;
                                var37_39 = v13 /* !! */ ;
                                block89: while (true) {
                                    v14 /* !! */  = var37_39;
                                    block90: while (v14 /* !! */  < var36_38) {
                                        block100: {
                                            block109: {
                                                block107: {
                                                    block108: {
                                                        block106: {
                                                            block104: {
                                                                block105: {
                                                                    block103: {
                                                                        block101: {
                                                                            block102: {
                                                                                block98: {
                                                                                    var38_40 = var35_37[var37_39];
                                                                                    cfr_temp_0 = var38_40.dotProduct(var17_16) - 0.0;
                                                                                    v11 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 < 0.0 ? -1 : 1);
                                                                                    if (var3_3 != null) continue block88;
                                                                                    try {
                                                                                        block99: {
                                                                                            try {
                                                                                                try {
                                                                                                    if (var3_3 != null) break block98;
                                                                                                    if (v11 > 0) break block99;
                                                                                                }
                                                                                                catch (MatchException v15) {
                                                                                                    throw fw.aRe(v15);
                                                                                                }
                                                                                                if (var3_3 == null) break block100;
                                                                                            }
                                                                                            catch (MatchException v16) {
                                                                                                throw fw.aRe(v16);
                                                                                            }
                                                                                        }
                                                                                        v17 = (cfr_temp_1 = var38_40.x - 0.0) == 0.0 ? 0 : (cfr_temp_1 > 0.0 ? 1 : -1);
                                                                                    }
                                                                                    catch (MatchException v18) {
                                                                                        throw fw.aRe(v18);
                                                                                    }
                                                                                }
                                                                                try {
                                                                                    try {
                                                                                        if (var3_3 != null) break block101;
                                                                                        if (v17 <= 0) break block102;
                                                                                    }
                                                                                    catch (MatchException v19) {
                                                                                        throw fw.aRe(v19);
                                                                                    }
                                                                                    v20 = var24_26;
                                                                                    break block103;
                                                                                }
                                                                                catch (MatchException v21) {
                                                                                    throw fw.aRe(v21);
                                                                                }
                                                                            }
                                                                            try {
                                                                                v20 = var38_40.x;
                                                                                if (var3_3 != null) break block103;
                                                                                cfr_temp_2 = v20 - 0.0;
                                                                                v17 = cfr_temp_2 == 0.0 ? 0 : (cfr_temp_2 < 0.0 ? -1 : 1);
                                                                            }
                                                                            catch (MatchException v22) {
                                                                                throw fw.aRe(v22);
                                                                            }
                                                                        }
                                                                        v20 = v17 < 0 ? var22_23 : NaN;
                                                                    }
                                                                    var39_41 = v20;
                                                                    try {
                                                                        try {
                                                                            cfr_temp_3 = var38_40.y - 0.0;
                                                                            v23 = cfr_temp_3 == 0.0 ? 0 : (cfr_temp_3 > 0.0 ? 1 : -1);
                                                                            if (var3_3 != null) break block104;
                                                                            if (v23 <= 0) break block105;
                                                                        }
                                                                        catch (MatchException v24) {
                                                                            throw fw.aRe(v24);
                                                                        }
                                                                        v25 = var28_33;
                                                                        break block106;
                                                                    }
                                                                    catch (MatchException v26) {
                                                                        throw fw.aRe(v26);
                                                                    }
                                                                }
                                                                try {
                                                                    v25 = var38_40.y;
                                                                    if (var3_3 != null) break block106;
                                                                    cfr_temp_4 = v25 - 0.0;
                                                                    v23 = cfr_temp_4 == 0.0 ? 0 : (cfr_temp_4 < 0.0 ? -1 : 1);
                                                                }
                                                                catch (MatchException v27) {
                                                                    throw fw.aRe(v27);
                                                                }
                                                            }
                                                            v25 = v23 < 0 ? var26_31 : NaN;
                                                        }
                                                        var41_42 = v25;
                                                        try {
                                                            try {
                                                                cfr_temp_5 = var38_40.z - 0.0;
                                                                v28 = cfr_temp_5 == 0.0 ? 0 : (cfr_temp_5 > 0.0 ? 1 : -1);
                                                                if (var3_3 != null) break block107;
                                                                if (v28 <= 0) break block108;
                                                            }
                                                            catch (MatchException v29) {
                                                                throw fw.aRe(v29);
                                                            }
                                                            v30 = var32_35;
                                                            break block109;
                                                        }
                                                        catch (MatchException v31) {
                                                            throw fw.aRe(v31);
                                                        }
                                                    }
                                                    try {
                                                        v30 = var38_40.z;
                                                        if (var3_3 != null) break block109;
                                                        cfr_temp_6 = v30 - 0.0;
                                                        v28 = cfr_temp_6 == 0.0 ? 0 : (cfr_temp_6 < 0.0 ? -1 : 1);
                                                    }
                                                    catch (MatchException v32) {
                                                        throw fw.aRe(v32);
                                                    }
                                                }
                                                v30 = v28 < 0 ? var30_34 : NaN;
                                            }
                                            var43_43 = v30;
                                            var45_44 = 0;
                                            block91: while (true) {
                                                v33 = var45_44;
                                                block92: while (v33 < 4) {
                                                    block110: {
                                                        try {
                                                            v34 = var39_41;
                                                            if (var3_3 != null) break block110;
                                                            v14 /* !! */  = (CallSite)Double.isNaN(v34);
                                                            if (var3_3 != null) continue block90;
                                                        }
                                                        catch (MatchException v35) {
                                                            throw fw.aRe(v35);
                                                        }
                                                        try {
                                                            v34 = v14 /* !! */  != false ? var22_23 + (var24_26 - var22_23) * ((double)var45_44 / 3.0) : var39_41;
                                                        }
                                                        catch (MatchException v36) {
                                                            throw fw.aRe(v36);
                                                        }
                                                    }
                                                    var46_45 = v34;
                                                    for (var48_46 = 0; var48_46 < 4; ++var48_46) {
                                                        block113: {
                                                            block114: {
                                                                block112: {
                                                                    block111: {
                                                                        try {
                                                                            v37 = var41_42;
                                                                            if (var3_3 != null) break block111;
                                                                            v33 = (int)Double.isNaN(v37);
                                                                            if (var3_3 != null) continue block92;
                                                                        }
                                                                        catch (MatchException v38) {
                                                                            throw fw.aRe(v38);
                                                                        }
                                                                        try {
                                                                            v37 = v33 != 0 ? var26_31 + (var28_33 - var26_31) * ((double)var48_46 / 3.0) : var41_42;
                                                                        }
                                                                        catch (MatchException v39) {
                                                                            throw fw.aRe(v39);
                                                                        }
                                                                    }
                                                                    var49_47 = v37;
                                                                    try {
                                                                        v40 = Double.isNaN(var43_43);
                                                                        if (var3_3 != null) break block112;
                                                                        if (!v40) {
                                                                        }
                                                                        ** GOTO lbl220
                                                                    }
                                                                    catch (MatchException v41) {
                                                                        throw fw.aRe(v41);
                                                                    }
                                                                    var51_48 = var43_43;
                                                                    try {
                                                                        try {
                                                                            if (var3_3 == null) break block113;
lbl220:
                                                                            // 2 sources

                                                                            v42 = var41_42;
                                                                            if (var3_3 != null) break block114;
                                                                        }
                                                                        catch (MatchException v43) {
                                                                            throw fw.aRe(v43);
                                                                        }
                                                                        v40 = Double.isNaN(v42);
                                                                    }
                                                                    catch (MatchException v44) {
                                                                        throw fw.aRe(v44);
                                                                    }
                                                                }
                                                                if (!v40) ** GOTO lbl234
                                                                var51_48 = var30_34 + (var32_35 - var30_34) * ((double)var48_46 / 3.0);
                                                                try {
                                                                    if (var3_3 == null) break block113;
lbl234:
                                                                    // 2 sources

                                                                    v42 = var30_34 + (var32_35 - var30_34) * ((double)var45_44 / 3.0);
                                                                }
                                                                catch (MatchException v45) {
                                                                    throw fw.aRe(v45);
                                                                }
                                                            }
                                                            var51_48 = v42;
                                                        }
                                                        var18_17.add(new Vec3d(var46_45, var49_47, var51_48));
                                                        if (var3_3 == null) continue;
                                                    }
                                                    ++var45_44;
                                                    if (var3_3 == null) continue block91;
                                                }
                                                break;
                                            }
                                        }
                                        ++var37_39;
                                        if (var3_3 == null) continue block89;
                                    }
                                    break;
                                }
                                if (var3_3 == null) continue block87;
                            }
                            break;
                        }
                        v13 /* !! */  = fw.aRi("v", (int)20403, (long)(7606990662980219969L ^ var1_1));
                    }
                    var20_19 = v13 /* !! */ ;
                    var21_21 = new Random(var7_6.hashCode());
                    var22_22 = var14_13.getBoundingBoxes();
                    for (var23_24 = 0; var23_24 < fw.aRi("v", (int)5843, (long)(3469466251136560424L ^ var1_1)); ++var23_24) {
                        block131: {
                            block128: {
                                block132: {
                                    block129: {
                                        block130: {
                                            block127: {
                                                block125: {
                                                    block122: {
                                                        block126: {
                                                            block123: {
                                                                block124: {
                                                                    block121: {
                                                                        block119: {
                                                                            block116: {
                                                                                block120: {
                                                                                    block117: {
                                                                                        block118: {
                                                                                            block115: {
                                                                                                var24_27 = (Box)var22_22.get(var21_21.nextInt(var22_22.size()));
                                                                                                var25_29 = var21_21.nextInt((int)fw.aRi("v", (int)23221, (long)(1786539916993995113L ^ var1_1)));
                                                                                                v0 = var21_21.nextBoolean();
                                                                                                if (var3_3 != null) continue block85;
                                                                                                try {
                                                                                                    if (var3_3 != null) break block115;
                                                                                                    if (!v0) break block116;
                                                                                                }
                                                                                                catch (MatchException v46) {
                                                                                                    throw fw.aRe(v46);
                                                                                                }
                                                                                                v47 = var25_29;
                                                                                            }
                                                                                            try {
                                                                                                try {
                                                                                                    if (var3_3 != null) break block117;
                                                                                                    if (v47 != 0) break block118;
                                                                                                }
                                                                                                catch (MatchException v48) {
                                                                                                    throw fw.aRe(v48);
                                                                                                }
                                                                                                v49 = var24_27.minX;
                                                                                                break block119;
                                                                                            }
                                                                                            catch (MatchException v50) {
                                                                                                throw fw.aRe(v50);
                                                                                            }
                                                                                        }
                                                                                        v47 = var25_29;
                                                                                    }
                                                                                    try {
                                                                                        if (v47 != 1) break block120;
                                                                                        v49 = var24_27.maxX;
                                                                                        break block119;
                                                                                    }
                                                                                    catch (MatchException v51) {
                                                                                        throw fw.aRe(v51);
                                                                                    }
                                                                                }
                                                                                v49 = var24_27.minX + var21_21.nextDouble() * (var24_27.maxX - var24_27.minX);
                                                                                break block119;
                                                                            }
                                                                            v49 = var24_27.minX + var21_21.nextDouble() * (var24_27.maxX - var24_27.minX);
                                                                        }
                                                                        var26_31 = v49;
                                                                        try {
                                                                            v52 = var21_21.nextBoolean();
                                                                            if (var3_3 != null) break block121;
                                                                            if (v52 == 0) break block122;
                                                                        }
                                                                        catch (MatchException v53) {
                                                                            throw fw.aRe(v53);
                                                                        }
                                                                        v52 = var25_29;
                                                                    }
                                                                    try {
                                                                        try {
                                                                            v54 = 2;
                                                                            if (var3_3 != null) break block123;
                                                                            if (v52 != v54) break block124;
                                                                        }
                                                                        catch (MatchException v55) {
                                                                            throw fw.aRe(v55);
                                                                        }
                                                                        v56 = var24_27.minY;
                                                                        break block125;
                                                                    }
                                                                    catch (MatchException v57) {
                                                                        throw fw.aRe(v57);
                                                                    }
                                                                }
                                                                v52 = var25_29;
                                                                v54 = 3;
                                                            }
                                                            try {
                                                                if (v52 != v54) break block126;
                                                                v56 = var24_27.maxY;
                                                                break block125;
                                                            }
                                                            catch (MatchException v58) {
                                                                throw fw.aRe(v58);
                                                            }
                                                        }
                                                        v56 = var24_27.minY + var21_21.nextDouble() * (var24_27.maxY - var24_27.minY);
                                                        break block125;
                                                    }
                                                    v56 = var24_27.minY + var21_21.nextDouble() * (var24_27.maxY - var24_27.minY);
                                                }
                                                var28_33 = v56;
                                                try {
                                                    v59 = var21_21.nextBoolean();
                                                    if (var3_3 != null) break block127;
                                                    if (v59 == 0) break block128;
                                                }
                                                catch (MatchException v60) {
                                                    throw fw.aRe(v60);
                                                }
                                                v59 = var25_29;
                                            }
                                            try {
                                                try {
                                                    v61 = 4;
                                                    if (var3_3 != null) break block129;
                                                    if (v59 != v61) break block130;
                                                }
                                                catch (MatchException v62) {
                                                    throw fw.aRe(v62);
                                                }
                                                v63 = var24_27.minZ;
                                                break block131;
                                            }
                                            catch (MatchException v64) {
                                                throw fw.aRe(v64);
                                            }
                                        }
                                        v59 = var25_29;
                                        v61 = 5;
                                    }
                                    try {
                                        if (v59 != v61) break block132;
                                        v63 = var24_27.maxZ;
                                        break block131;
                                    }
                                    catch (MatchException v65) {
                                        throw fw.aRe(v65);
                                    }
                                }
                                v63 = var24_27.minZ + var21_21.nextDouble() * (var24_27.maxZ - var24_27.minZ);
                                break block131;
                            }
                            v63 = var24_27.minZ + var21_21.nextDouble() * (var24_27.maxZ - var24_27.minZ);
                        }
                        var30_34 = v63;
                        var18_17.add(new Vec3d(var26_31 + (double)var7_6.getX(), var28_33 + (double)var7_6.getY(), var30_34 + (double)var7_6.getZ()));
                        if (var3_3 == null) continue;
                    }
                    for (Vec3d var24_28 : var18_17) {
                        block134: {
                            block135: {
                                block133: {
                                    var25_30 = new RaycastContext(var15_14, var24_28, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.SOURCE_ONLY, (Entity)rD.dlmvG.player);
                                    var26_32 = rD.dlmvG.world.raycast(var25_30);
                                    try {
                                        v66 = var26_32;
                                        if (var3_3 != null) break block133;
                                        v1 /* !! */  = v66.getType();
                                        if (var3_3 != null) continue block86;
                                    }
                                    catch (MatchException v67) {
                                        throw fw.aRe(v67);
                                    }
                                    try {
                                        if (v1 /* !! */  != HitResult.Type.BLOCK) break block134;
                                        v66 = var26_32;
                                    }
                                    catch (MatchException v68) {
                                        throw fw.aRe(v68);
                                    }
                                }
                                try {
                                    try {
                                        if (var3_3 != null) break block135;
                                        if (!v66.getBlockPos().equals((Object)var7_6)) break block134;
                                    }
                                    catch (MatchException v69) {
                                        throw fw.aRe(v69);
                                    }
                                    v66 = var26_32;
                                }
                                catch (MatchException v70) {
                                    throw fw.aRe(v70);
                                }
                            }
                            return v66;
                        }
                        if (var3_3 == null) continue;
                    }
                    break;
                }
                if (var3_3 != null) break block84;
                continue block84;
            }
            break;
        }
        return null;
    }

    private static native MatchException aRe(MatchException var0);

    private native boolean aRc(boolean var1, boolean var2, boolean var3);

    private static native CallSite aRi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int aRg(int var0, long var1);

    private static native /* synthetic */ boolean aRd(BlockPos var0);
}

