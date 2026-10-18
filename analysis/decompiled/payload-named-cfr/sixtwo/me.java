/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.registry.tag.FluidTags
 *  net.minecraft.util.hit.HitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.RaycastContext
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import net.minecraft.registry.tag.FluidTags;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;
import sixtwo.gb;
import sixtwo.mc;
import sixtwo.mf;
import sixtwo.mg;
import sixtwo.mh;
import sixtwo.mk;

public final class me {
    private static final long eLaCs = gb.aYR(-4707476126198934159L, 4648386002153854882L, MethodHandles.lookup().lookupClass()).a(156915905447029L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static Vec3d cka(mh mh2) {
        return me.cjZ(mh2).finalPosition();
    }

    private static MatchException ckc(MatchException matchException) {
        return matchException;
    }

    public static List<Vec3d> ckb(mh mh2) {
        return me.cjZ(mh2).positions();
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static mg cjZ(mh var0) {
        var1_1 = me.eLaCs ^ 45491461718018L;
        var4_2 = var0.ckj();
        var5_3 = var0.ckk();
        var6_4 = new ArrayList<Vec3d>();
        var3_5 = mk.cle();
        var6_4.add(var4_2);
        var7_6 = null;
        var8_7 = mf.ZkAFI;
        for (var9_8 = 0; var9_8 < var0.ckl(); ++var9_8) {
            block37: {
                block44: {
                    block40: {
                        block41: {
                            block42: {
                                block43: {
                                    block38: {
                                        block39: {
                                            block30: {
                                                block36: {
                                                    block35: {
                                                        block31: {
                                                            block32: {
                                                                block33: {
                                                                    block34: {
                                                                        var10_9 = var4_2;
                                                                        try {
                                                                            v0 = var0.ckr();
                                                                            if (var3_5 != null) break block30;
                                                                            if (v0) {
                                                                            }
                                                                            ** GOTO lbl82
                                                                        }
                                                                        catch (MatchException v1) {
                                                                            throw me.ckc(v1);
                                                                        }
                                                                        var4_2 = var4_2.add(var5_3);
                                                                        var11_10 /* !! */  = var0.ckh().raycast(new RaycastContext(var10_9, var4_2, var0.cks(), var0.ckt(), var0.cki()));
                                                                        try {
                                                                            if (var3_5 != null) break block31;
                                                                            if (var11_10 /* !! */ .getType() != HitResult.Type.BLOCK) break block32;
                                                                        }
                                                                        catch (MatchException v2) {
                                                                            throw me.ckc(v2);
                                                                        }
                                                                        var7_6 = var11_10 /* !! */ ;
                                                                        try {
                                                                            v3 = var0.cku();
                                                                            if (var3_5 != null) break block33;
                                                                            if (!v3) break block34;
                                                                        }
                                                                        catch (MatchException v4) {
                                                                            throw me.ckc(v4);
                                                                        }
                                                                        var4_2 = var11_10 /* !! */ .getPos();
                                                                    }
                                                                    v3 = var6_4.add(var4_2);
                                                                }
                                                                var8_7 = mf.juSGK;
                                                                break;
                                                            }
                                                            var6_4.add(var4_2);
                                                        }
                                                        try {
                                                            cfr_temp_0 = var4_2.y - var0.ckm();
                                                            v5 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 < 0.0 ? -1 : 1);
                                                            if (var3_5 != null) break block35;
                                                            if (v5 <= 0) {
                                                            }
                                                            ** GOTO lbl58
                                                        }
                                                        catch (MatchException v6) {
                                                            throw me.ckc(v6);
                                                        }
                                                        var8_7 = mf.RlLKW;
                                                        try {
                                                            if (var3_5 == null) break;
lbl58:
                                                            // 2 sources

                                                            v5 = (double)var0.ckh().getBlockState(BlockPos.ofFloored((Position)var4_2)).getFluidState().isIn(FluidTags.WATER);
                                                        }
                                                        catch (MatchException v7) {
                                                            throw me.ckc(v7);
                                                        }
                                                    }
                                                    var12_12 = v5;
                                                    try {
                                                        v8 = var5_3;
                                                        v9 = var12_12 != false ? var0.cko() : var0.ckn();
                                                    }
                                                    catch (MatchException v10) {
                                                        throw me.ckc(v10);
                                                    }
                                                    v11 = v8.multiply(v9);
                                                    if (var3_5 == null) {
                                                        var5_3 = v11;
                                                        try {
                                                            if (var0.ckq()) break block36;
                                                            v11 = var5_3.add(0.0, -var0.ckp(), 0.0);
                                                        }
                                                        catch (MatchException v12) {
                                                            throw me.ckc(v12);
                                                        }
                                                    }
                                                    var5_3 = v11;
                                                }
                                                try {
                                                    if (var3_5 == null) break block37;
lbl82:
                                                    // 2 sources

                                                    v0 = var0.ckq();
                                                }
                                                catch (MatchException v13) {
                                                    throw me.ckc(v13);
                                                }
                                            }
                                            try {
                                                if (var3_5 != null) break block38;
                                                if (v0) break block39;
                                            }
                                            catch (MatchException v14) {
                                                throw me.ckc(v14);
                                            }
                                            var5_3 = var5_3.add(0.0, -var0.ckp(), 0.0);
                                        }
                                        v0 = var0.ckh().getBlockState(BlockPos.ofFloored((Position)var4_2)).getFluidState().isIn(FluidTags.WATER);
                                    }
                                    var11_11 = v0;
                                    try {
                                        v15 = var5_3;
                                        v16 = var11_11 != false ? var0.cko() : var0.ckn();
                                    }
                                    catch (MatchException v17) {
                                        throw me.ckc(v17);
                                    }
                                    var5_3 = v15.multiply(v16);
                                    var4_2 = var4_2.add(var5_3);
                                    var12_13 = var0.ckh().raycast(new RaycastContext(var10_9, var4_2, var0.cks(), var0.ckt(), var0.cki()));
                                    try {
                                        if (var3_5 != null) break block40;
                                        if (var12_13.getType() != HitResult.Type.BLOCK) break block41;
                                    }
                                    catch (MatchException v18) {
                                        throw me.ckc(v18);
                                    }
                                    var7_6 = var12_13;
                                    try {
                                        v19 = var0.cku();
                                        if (var3_5 != null) break block42;
                                        if (!v19) break block43;
                                    }
                                    catch (MatchException v20) {
                                        throw me.ckc(v20);
                                    }
                                    var4_2 = var12_13.getPos();
                                }
                                v19 = var6_4.add(var4_2);
                            }
                            var8_7 = mf.juSGK;
                            break;
                        }
                        var6_4.add(var4_2);
                    }
                    try {
                        if (var3_5 != null) break block44;
                        if (!(var4_2.y <= var0.ckm())) break block37;
                    }
                    catch (MatchException v21) {
                        throw me.ckc(v21);
                    }
                    var8_7 = mf.RlLKW;
                }
                if (var3_5 == null) break;
            }
            var11_10 /* !! */  = new mc(var0.ckh(), var0.cki(), var9_8, var10_9, var4_2, var5_3, var0.ckh().getBlockState(BlockPos.ofFloored((Position)var4_2)).getFluidState().isIn(FluidTags.WATER));
            var5_3 = var0.ckv().modify((mc)var11_10 /* !! */ , var5_3);
        }
        return new mg((List<Vec3d>)var6_4, var4_2, (HitResult)var7_6, var8_7);
    }
}

