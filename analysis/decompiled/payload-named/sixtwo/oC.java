/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.FireBlock
 *  net.minecraft.block.ShortPlantBlock
 *  net.minecraft.block.SnowBlock
 *  net.minecraft.block.VineBlock
 *  net.minecraft.entity.Entity
 *  net.minecraft.fluid.FluidState
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.util.math.Vec3i
 *  net.minecraft.util.shape.VoxelShape
 *  net.minecraft.world.BlockView
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.FireBlock;
import net.minecraft.block.ShortPlantBlock;
import net.minecraft.block.SnowBlock;
import net.minecraft.block.VineBlock;
import net.minecraft.entity.Entity;
import net.minecraft.fluid.FluidState;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.math.Vec3i;
import net.minecraft.util.shape.VoxelShape;
import net.minecraft.world.BlockView;
import net.minecraft.world.RaycastContext;
import sixtwo.gb;
import sixtwo.ja;
import sixtwo.jg;
import sixtwo.jl;
import sixtwo.oB;
import sixtwo.oD;
import sixtwo.oE;
import sixtwo.oF;
import sixtwo.oU;
import sixtwo.ov;
import sixtwo.ox;
import sixtwo.oy;
import sixtwo.oz;
import sixtwo.rD;

public class oC {
    private static final int NNvjo;
    private static final double OFezW = 0.15;
    private static final double EoHES = 0.85;
    private static final Vec3i[] YuMVe;
    public static final Predicate<BlockState> djrGf;
    private static final long baTmf;
    private static final long[] dJuiY;
    private static final Integer[] cjEmj;
    private static final Map kGycZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                oC.baTmf = gb.aYR(-3941548029273195598L, -7304090693425401748L, MethodHandles.lookup().lookupClass()).a(150658425836150L);
                var11 = oC.baTmf ^ 81886890889163L;
                oC.kGycZ = new HashMap<K, V>(13);
                var0_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var1_2 = 1; var1_2 < 8; ++var1_2) {
                    v2 = v2;
                    v2[var1_2] = (byte)(var11 << var1_2 * 8 >>> 56);
                }
                var0_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var6_3 = new long[4];
                var3_4 = 0;
                var4_5 = "\u00d3\u00b2\u0096\u00dc\u0095\u009bet\u00c4z\u0083\u0092X\u0083\u00d4\u00d6";
                var5_6 = "\u00d3\u00b2\u0096\u00dc\u0095\u009bet\u00c4z\u0083\u0092X\u0083\u00d4\u00d6".length();
                var2_7 = 0;
                while (true) {
                    var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                    v3 = var6_3;
                    v4 = var3_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    var4_5 = "\u00ac\u0087\u0012c\u00a5\u00c7|>\u00b2r\u008cx\u00d0\u0097\u00df\u009f";
                    var5_6 = "\u00ac\u0087\u0012c\u00a5\u00c7|>\u00b2r\u008cx\u00d0\u0097\u00df\u009f".length();
                    var2_7 = 0;
                    while (true) {
                        var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                        v3 = var6_3;
                        v4 = var3_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var0_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        oC.dJuiY = var6_3;
        oC.cjEmj = new Integer[4];
        oC.NNvjo = (int)oC.cIl("j", (int)16917, (long)(var11 ^ 1500631190412593863L));
        v8 = new Vec3i[oC.cIl("j", (int)10251, (long)(3852772743206723803L ^ var11))];
        v8[0] = new Vec3i(0, -1, 0);
        v8[1] = new Vec3i(0, 1, 0);
        v8[2] = new Vec3i(-1, 0, 0);
        v8[3] = new Vec3i(1, 0, 0);
        v8[4] = new Vec3i(0, 0, 1);
        v8[5] = new Vec3i(0, 0, -1);
        oC.YuMVe = v8;
        oC.djrGf = (Predicate<BlockState>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, cHP(net.minecraft.block.BlockState ), (Lnet/minecraft/block/BlockState;)Z)();
    }

    public oz cHT(BlockPos blockPos, oD oD2, oB oB2, boolean bl2, Predicate<BlockState> predicate, List<oy> list, oz oz2) {
        oz oz3;
        block65: {
            ArrayList<oz> arrayList;
            block66: {
                boolean bl3;
                ArrayList<oz> arrayList2;
                block59: {
                    ArrayList<oz> arrayList3;
                    double d2;
                    Vec3d vec3d;
                    Vec3d vec3d2;
                    String[] stringArray;
                    block58: {
                        oz oz4;
                        block57: {
                            boolean bl4;
                            block55: {
                                block56: {
                                    boolean bl5;
                                    block53: {
                                        block54: {
                                            boolean bl6;
                                            block52: {
                                                block51: {
                                                    block50: {
                                                        long l2 = baTmf ^ 0x431CECAFA409L;
                                                        stringArray = oz.b();
                                                        try {
                                                            try {
                                                                bl6 = bl2;
                                                                if (stringArray != null) break block50;
                                                                if (bl6) break block51;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oC.cIi(matchException);
                                                            }
                                                            bl6 = jl.bDT(blockPos);
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oC.cIi(matchException);
                                                        }
                                                    }
                                                    try {
                                                        if (stringArray != null) break block52;
                                                        if (!bl6) break block51;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oC.cIi(matchException);
                                                    }
                                                    bl6 = true;
                                                    break block52;
                                                }
                                                bl6 = false;
                                            }
                                            boolean bl7 = bl6;
                                            try {
                                                try {
                                                    bl5 = bl7;
                                                    if (stringArray != null) break block53;
                                                    if (!bl5) break block54;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oC.cIi(matchException);
                                                }
                                                return null;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                        }
                                        bl5 = oU.Xrdom.containsKey(blockPos);
                                    }
                                    boolean bl8 = bl5;
                                    try {
                                        if (bl8) {
                                            return null;
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
                                    try {
                                        bl4 = predicate.test(blockState);
                                        if (stringArray != null) break block55;
                                        if (bl4) break block56;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    bl4 = true;
                                    break block55;
                                }
                                bl4 = false;
                            }
                            boolean bl9 = bl4;
                            try {
                                if (bl9) {
                                    return null;
                                }
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            if (oD2 == oD.xBObQ) {
                                BlockHitResult blockHitResult = ox.cHc(new RaycastContext(rD.dlmvG.player.getEyePos(), blockPos.toCenterPos(), RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player), blockPos);
                                return new oz(blockPos, blockHitResult);
                            }
                            vec3d2 = rD.dlmvG.player.getEyePos();
                            ov ov2 = rD.dlX().dbC();
                            vec3d = ov2.cGH();
                            d2 = rD.dlmvG.player.getBlockInteractionRange();
                            oz oz5 = this.cHU(blockPos, oz2, list, oD2, d2, vec3d2);
                            try {
                                oz4 = oz5;
                                if (stringArray != null) break block57;
                                if (oz4 == null) break block58;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            oz4 = oz5;
                        }
                        return oz4;
                    }
                    try {
                        arrayList3 = oB2 == oB.FXGPX ? new ArrayList<oz>() : null;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                    arrayList2 = arrayList3;
                    oz3 = null;
                    double d3 = Double.MAX_VALUE;
                    List<oF> list2 = this.cIe(blockPos);
                    for (oF oF2 : list2) {
                        block64: {
                            double d4;
                            Vec3d vec3d3;
                            block63: {
                                boolean bl10;
                                Direction direction;
                                BlockPos blockPos2;
                                Vec3d vec3d4;
                                oC oC2;
                                Vec3d vec3d5;
                                block61: {
                                    Vec3d vec3d6;
                                    block62: {
                                        block60: {
                                            try {
                                                try {
                                                    bl3 = this.cIb(oF2.blockPos(), oF2.direction(), vec3d2);
                                                    if (stringArray != null) break block59;
                                                    if (!bl3) break block60;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oC.cIi(matchException);
                                                }
                                                if (stringArray == null) continue;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                        }
                                        try {
                                            if (oB2 == oB.FXGPX) {
                                                this.cHW(blockPos, oF2, oD2, vec3d2, d2, list, arrayList2);
                                                if (stringArray == null) continue;
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw oC.cIi(matchException);
                                        }
                                        vec3d6 = this.cHV(oF2, oD2, vec3d2, vec3d, d2);
                                        try {
                                            try {
                                                vec3d5 = vec3d6;
                                                if (stringArray != null) break block61;
                                                if (vec3d5 != null) break block62;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                            if (stringArray == null) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw oC.cIi(matchException);
                                        }
                                    }
                                    vec3d5 = this.cHX(vec3d6, oF2.blockPos(), oF2.direction(), list);
                                }
                                vec3d3 = vec3d5;
                                try {
                                    oC2 = this;
                                    vec3d4 = vec3d3;
                                    blockPos2 = oF2.blockPos();
                                    direction = oF2.direction();
                                    bl10 = oD2 == oD.pxPhl;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                try {
                                    if (oC2.cHY(vec3d4, blockPos2, direction, bl10, d2) && stringArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                double d5 = this.cIa(vec3d3, vec3d2, vec3d);
                                try {
                                    try {
                                        d4 = d5;
                                        if (stringArray != null) break block63;
                                        if (!(d4 < d3)) break block64;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    d4 = d5;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            d3 = d4;
                            oz3 = new oz(blockPos, new BlockHitResult(vec3d3, oF2.direction(), oF2.blockPos(), false));
                        }
                        if (stringArray == null) continue;
                    }
                    try {
                        try {
                            if (oB2 != oB.FXGPX) break block65;
                            arrayList = arrayList2;
                            if (stringArray != null) break block66;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        bl3 = arrayList.isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                try {
                    if (bl3) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
                arrayList = arrayList2.get(ThreadLocalRandom.current().nextInt(arrayList2.size()));
            }
            return (oz)((Object)arrayList);
        }
        return oz3;
    }

    private double cIa(Vec3d vec3d, Vec3d vec3d2, Vec3d vec3d3) {
        double d2;
        double d3;
        block4: {
            Vec3d vec3d4;
            block5: {
                long l2 = baTmf ^ 0x111BCDFBAEF1L;
                vec3d4 = vec3d.subtract(vec3d2);
                d3 = vec3d4.lengthSquared();
                String[] stringArray = oz.b();
                try {
                    try {
                        d2 = d3;
                        if (stringArray != null) break block4;
                        if (!(d2 <= 1.0E-12)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                    return 0.0;
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
            }
            d2 = vec3d4.dotProduct(vec3d3);
        }
        double d4 = d2;
        return d3 - d4 * d4;
    }

    /*
     * Exception decompiling
     */
    private boolean cIc(Vec3d var1_1, BlockPos var2_2, Direction var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 13[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private boolean cId(double d2) {
        double d3;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = baTmf ^ 0x2909E621F4DDL;
                    stringArray = oz.b();
                    try {
                        try {
                            double d4 = d2 - 0.15;
                            d3 = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                            if (stringArray != null) break block6;
                            if (d3 < 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        double d5 = d2 - 0.85;
                        d3 = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                try {
                    if (stringArray != null) break block8;
                    if (d3 > 0) break block7;
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
                d3 = 1.0;
                break block8;
            }
            d3 = 0.0;
        }
        return (boolean)d3;
    }

    private boolean cIf(BlockPos blockPos) {
        boolean bl2;
        block6: {
            block8: {
                block7: {
                    long l2 = baTmf ^ 0x9312023E7A8L;
                    String[] stringArray = oz.b();
                    try {
                        try {
                            try {
                                bl2 = rD.dlmvG.world.getBlockState(blockPos).isSolid();
                                if (stringArray != null) break block6;
                                if (bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            bl2 = oU.Xrdom.containsKey(blockPos);
                            if (stringArray != null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        if (!bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                bl2 = true;
                break block6;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static CallSite cIl(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/oC" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private BlockHitResult cHZ(RaycastContext raycastContext2) {
        return (BlockHitResult)BlockView.raycast((Vec3d)raycastContext2.getStart(), (Vec3d)raycastContext2.getEnd(), (Object)raycastContext2, (raycastContext, blockPos) -> {
            BlockHitResult blockHitResult;
            double d2;
            double d3;
            long l2 = baTmf ^ 0x792EED95C164L;
            BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
            try {
                if (oC.cHP(blockState)) {
                    return null;
                }
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            FluidState fluidState = rD.dlmvG.world.getFluidState(blockPos);
            Vec3d vec3d = raycastContext.getStart();
            Vec3d vec3d2 = raycastContext.getEnd();
            VoxelShape voxelShape = raycastContext.getBlockShape(blockState, (BlockView)rD.dlmvG.world, blockPos);
            BlockHitResult blockHitResult2 = rD.dlmvG.world.raycastBlock(vec3d, vec3d2, blockPos, voxelShape, blockState);
            VoxelShape voxelShape2 = raycastContext.getFluidShape(fluidState, (BlockView)rD.dlmvG.world, blockPos);
            BlockHitResult blockHitResult3 = voxelShape2.raycast(vec3d, vec3d2, blockPos);
            try {
                d3 = blockHitResult2 == null ? Double.MAX_VALUE : vec3d.squaredDistanceTo(blockHitResult2.getPos());
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            double d4 = d3;
            try {
                d2 = blockHitResult3 == null ? Double.MAX_VALUE : vec3d.squaredDistanceTo(blockHitResult3.getPos());
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            double d5 = d2;
            try {
                blockHitResult = d4 <= d5 ? blockHitResult2 : blockHitResult3;
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            return blockHitResult;
        }, raycastContext -> {
            Vec3d vec3d = raycastContext.getStart().subtract(raycastContext.getEnd());
            return BlockHitResult.createMissed((Vec3d)raycastContext.getEnd(), (Direction)Direction.getFacing((double)vec3d.x, (double)vec3d.y, (double)vec3d.z), (BlockPos)BlockPos.ofFloored((Position)raycastContext.getEnd()));
        });
    }

    private static int cIj(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x50;
        if (cjEmj[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = dJuiY[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])kGycZ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kGycZ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/oC", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            oC.cjEmj[n3] = n4;
        }
        return cjEmj[n3];
    }

    private static int cIk(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = oC.cIj(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static boolean cHP(BlockState blockState) {
        boolean bl2;
        block23: {
            block25: {
                block24: {
                    boolean bl3;
                    String[] stringArray;
                    block20: {
                        block22: {
                            block21: {
                                long l2 = baTmf ^ 0x353D08D145D4L;
                                Block block = blockState.getBlock();
                                stringArray = oz.b();
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            bl3 = block instanceof FireBlock;
                                                            if (stringArray != null) break block20;
                                                            if (bl3) break block21;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oC.cIi(matchException);
                                                        }
                                                        bl3 = block instanceof ShortPlantBlock;
                                                        if (stringArray != null) break block20;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oC.cIi(matchException);
                                                    }
                                                    if (bl3) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oC.cIi(matchException);
                                                }
                                                bl3 = block instanceof SnowBlock;
                                                if (stringArray != null) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw oC.cIi(matchException);
                                            }
                                            if (bl3) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw oC.cIi(matchException);
                                        }
                                        bl3 = block instanceof VineBlock;
                                        if (stringArray != null) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    if (!bl3) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            bl3 = true;
                            break block20;
                        }
                        bl3 = false;
                    }
                    boolean bl4 = bl3;
                    try {
                        try {
                            try {
                                bl2 = blockState.isReplaceable();
                                if (stringArray != null) break block23;
                                if (bl2) break block24;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            bl2 = bl4;
                            if (stringArray != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        if (!bl2) break block25;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                bl2 = true;
                break block23;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException cIi(MatchException matchException) {
        return matchException;
    }

    public oz cHQ(BlockPos blockPos, oD oD2, boolean bl2, Predicate<BlockState> predicate) {
        return this.cHT(blockPos, oD2, oB.LwHxs, bl2, predicate, Collections.emptyList(), null);
    }

    public oz cHR(BlockPos blockPos, oD oD2, boolean bl2, Predicate<BlockState> predicate, List<oy> list) {
        return this.cHT(blockPos, oD2, oB.LwHxs, bl2, predicate, list, null);
    }

    public oz cHS(BlockPos blockPos, oD oD2, boolean bl2, Predicate<BlockState> predicate, List<oy> list, oz oz2) {
        return this.cHT(blockPos, oD2, oB.LwHxs, bl2, predicate, list, oz2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private oz cHU(BlockPos blockPos, oz oz2, List<oy> list, oD oD2, double d2, Vec3d vec3d) {
        boolean bl2;
        Direction direction;
        BlockPos blockPos2;
        Vec3d vec3d2;
        oC oC2;
        oC oC3;
        Direction direction2;
        BlockPos blockPos3;
        BlockHitResult blockHitResult;
        block24: {
            boolean bl3;
            block22: {
                String[] stringArray;
                block23: {
                    oz oz3;
                    block20: {
                        block21: {
                            block19: {
                                long l2 = baTmf ^ 0x336B9A97CC79L;
                                stringArray = oz.b();
                                try {
                                    oz3 = oz2;
                                    if (stringArray != null) break block19;
                                    if (oz3 == null) return null;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                oz3 = oz2;
                            }
                            try {
                                try {
                                    if (stringArray != null) break block20;
                                    if (oz3.blockPos().equals((Object)blockPos)) break block21;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                        }
                        oz3 = oz2;
                    }
                    blockHitResult = oz3.blockHitResult();
                    blockPos3 = blockHitResult.getBlockPos();
                    direction2 = blockHitResult.getSide();
                    try {
                        try {
                            bl3 = this.cIe(blockPos).contains(new oF(blockPos3, direction2));
                            if (stringArray != null) break block22;
                            if (bl3) break block23;
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                try {
                    oC3 = this;
                    if (stringArray != null) break block24;
                    bl3 = oC3.cIb(blockPos3, direction2, vec3d);
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
            }
            try {
                if (bl3) {
                    return null;
                }
            }
            catch (MatchException matchException) {
                throw oC.cIi(matchException);
            }
            oC3 = this;
        }
        Vec3d vec3d3 = oC3.cHX(blockHitResult.getPos(), blockPos3, direction2, list);
        try {
            oC2 = this;
            vec3d2 = vec3d3;
            blockPos2 = blockPos3;
            direction = direction2;
            bl2 = oD2 == oD.pxPhl;
        }
        catch (MatchException matchException) {
            throw oC.cIi(matchException);
        }
        try {
            if (!oC2.cHY(vec3d2, blockPos2, direction, bl2, d2)) return new oz(blockPos, new BlockHitResult(vec3d3, direction2, blockPos3, false));
            return null;
        }
        catch (MatchException matchException) {
            throw oC.cIi(matchException);
        }
    }

    private List<oF> cIe(BlockPos blockPos) {
        long l2 = baTmf ^ 0x7D894AFCDEC3L;
        ArrayList<oF> arrayList = new ArrayList<oF>();
        int n2 = 0;
        String[] stringArray = oz.b();
        while (n2 < YuMVe.length) {
            block5: {
                block6: {
                    BlockPos blockPos2 = blockPos.add(YuMVe[n2]);
                    try {
                        try {
                            if (stringArray != null) break block5;
                            if (!this.cIf(blockPos2)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        arrayList.add(new oF(blockPos2, ja.toQLU[n2]));
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                ++n2;
            }
            if (stringArray == null) continue;
        }
        return arrayList;
    }

    /*
     * Exception decompiling
     */
    private boolean cIb(BlockPos var1_1, Direction var2_2, Vec3d var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 2[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private void cHW(BlockPos blockPos, oF oF2, oD oD2, Vec3d vec3d, double d2, List<oy> list, List<oz> list2) {
        long l2 = baTmf ^ 0x300FCFC92D63L;
        Iterator<Vec3d> iterator = oE.cIq(oF2.blockPos(), oF2.direction(), (int)oC.cIl("j", (int)6501, (long)(0x53EEBC8E2F86F31EL ^ l2))).iterator();
        String[] stringArray = oz.b();
        while (iterator.hasNext()) {
            block13: {
                boolean bl2;
                Vec3d vec3d2;
                block14: {
                    boolean bl3;
                    Direction direction;
                    BlockPos blockPos2;
                    Vec3d vec3d3;
                    oC oC2;
                    Direction direction2;
                    BlockPos blockPos3;
                    Vec3d vec3d4;
                    oC oC3;
                    block11: {
                        Vec3d vec3d5;
                        block12: {
                            vec3d5 = iterator.next();
                            try {
                                try {
                                    oC3 = this;
                                    vec3d4 = vec3d5;
                                    blockPos3 = oF2.blockPos();
                                    direction2 = oF2.direction();
                                    if (stringArray != null) break block11;
                                    if (oC3.cIc(vec3d4, blockPos3, direction2)) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                if (stringArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                        }
                        oC3 = this;
                        vec3d4 = vec3d5;
                        blockPos3 = oF2.blockPos();
                        direction2 = oF2.direction();
                    }
                    vec3d2 = oC3.cHX(vec3d4, blockPos3, direction2, list);
                    try {
                        oC2 = this;
                        vec3d3 = vec3d2;
                        blockPos2 = oF2.blockPos();
                        direction = oF2.direction();
                        bl3 = oD2 == oD.pxPhl;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                    try {
                        try {
                            bl2 = oC2.cHY(vec3d3, blockPos2, direction, bl3, d2);
                            if (stringArray != null) break block13;
                            if (!bl2) break block14;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        if (stringArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw oC.cIi(matchException);
                    }
                }
                bl2 = list2.add(new oz(blockPos, new BlockHitResult(vec3d2, oF2.direction(), oF2.blockPos(), false)));
            }
            if (stringArray == null) continue;
        }
    }

    private Vec3d cHV(oF oF2, oD oD2, Vec3d vec3d, Vec3d vec3d2, double d2) {
        Vec3d vec3d3;
        block13: {
            long l2 = baTmf ^ 0x130353448961L;
            Vec3d vec3d4 = null;
            double d3 = Double.MAX_VALUE;
            Iterator<Vec3d> iterator = oE.cIq(oF2.blockPos(), oF2.direction(), (int)oC.cIl("j", (int)30560, (long)(0x48AF86E24AC9391BL ^ l2))).iterator();
            String[] stringArray = oz.b();
            while (iterator.hasNext()) {
                block17: {
                    double d4;
                    Vec3d vec3d5;
                    block16: {
                        boolean bl2;
                        Direction direction;
                        BlockPos blockPos;
                        Vec3d vec3d6;
                        oC oC2;
                        block14: {
                            block15: {
                                vec3d3 = iterator.next();
                                if (stringArray != null) break block13;
                                vec3d5 = vec3d3;
                                try {
                                    try {
                                        oC2 = this;
                                        vec3d6 = vec3d5;
                                        blockPos = oF2.blockPos();
                                        direction = oF2.direction();
                                        if (stringArray != null) break block14;
                                        if (oC2.cIc(vec3d6, blockPos, direction)) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    if (stringArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                            }
                            oC2 = this;
                            vec3d6 = vec3d5;
                            blockPos = oF2.blockPos();
                            direction = oF2.direction();
                        }
                        try {
                            bl2 = oD2 == oD.pxPhl;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        try {
                            if (oC2.cHY(vec3d6, blockPos, direction, bl2, d2) && stringArray == null) continue;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                        double d5 = this.cIa(vec3d5, vec3d, vec3d2);
                        try {
                            try {
                                d4 = d5;
                                if (stringArray != null) break block16;
                                if (!(d4 < d3)) break block17;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            d4 = d5;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                    }
                    d3 = d4;
                    vec3d4 = vec3d5;
                }
                if (stringArray == null) continue;
            }
            vec3d3 = vec3d4;
        }
        return vec3d3;
    }

    private Vec3d cHX(Vec3d vec3d, BlockPos blockPos, Direction direction, List<oy> list) {
        Vec3d vec3d2;
        block2: {
            long l2 = baTmf ^ 0x1681E8D36BL;
            Vec3d vec3d3 = vec3d;
            Iterator<oy> iterator = list.iterator();
            String[] stringArray = oz.b();
            while (iterator.hasNext()) {
                oy oy2 = iterator.next();
                vec3d2 = oy2.process(vec3d3, blockPos, direction);
                if (stringArray == null) {
                    vec3d3 = vec3d2;
                    if (stringArray == null) continue;
                }
                break block2;
            }
            vec3d2 = vec3d3;
        }
        return vec3d2;
    }

    private boolean cHY(Vec3d vec3d, BlockPos blockPos, Direction direction, boolean bl2, double d2) {
        boolean bl3;
        block17: {
            block18: {
                String[] stringArray;
                block16: {
                    block15: {
                        BlockHitResult blockHitResult;
                        block14: {
                            block13: {
                                double d3;
                                block12: {
                                    long l2 = baTmf ^ 0x617D3CA293DCL;
                                    double d4 = jg.bBH(rD.dlmvG.player.getEyePos(), vec3d);
                                    stringArray = oz.b();
                                    try {
                                        d3 = d4 == d2 ? 0 : (d4 > d2 ? 1 : -1);
                                        if (stringArray != null) break block12;
                                        if (d3 <= 0) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw oC.cIi(matchException);
                                    }
                                    d3 = 1.0;
                                }
                                return (boolean)d3;
                            }
                            Vec3d vec3d2 = vec3d.subtract((double)direction.getOffsetX() * 0.001, (double)direction.getOffsetY() * 0.001, (double)direction.getOffsetZ() * 0.001);
                            RaycastContext raycastContext = new RaycastContext(rD.dlmvG.player.getEyePos(), vec3d2, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player);
                            BlockHitResult blockHitResult2 = this.cHZ(raycastContext);
                            try {
                                try {
                                    blockHitResult = blockHitResult2;
                                    if (stringArray != null) break block14;
                                    if (blockHitResult.getType() != HitResult.Type.BLOCK) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw oC.cIi(matchException);
                                }
                                blockHitResult = blockHitResult2;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                        }
                        try {
                            try {
                                bl3 = blockHitResult.getBlockPos().equals((Object)blockPos);
                                if (stringArray != null) break block16;
                                if (!bl3) break block15;
                            }
                            catch (MatchException matchException) {
                                throw oC.cIi(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw oC.cIi(matchException);
                        }
                    }
                    bl3 = bl2;
                }
                try {
                    if (stringArray != null) break block17;
                    if (bl3) break block18;
                }
                catch (MatchException matchException) {
                    throw oC.cIi(matchException);
                }
                bl3 = true;
                break block17;
            }
            bl3 = false;
        }
        return bl3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(oC.class, "cIk", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

