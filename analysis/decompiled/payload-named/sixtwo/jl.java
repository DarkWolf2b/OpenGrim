/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.Blocks
 *  net.minecraft.block.RespawnAnchorBlock
 *  net.minecraft.block.WallMountedBlock
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.world.ClientWorld
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.ExperienceOrbEntity
 *  net.minecraft.entity.ItemEntity
 *  net.minecraft.entity.decoration.EndCrystalEntity
 *  net.minecraft.entity.projectile.PersistentProjectileEntity
 *  net.minecraft.state.property.Property
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Iterator;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.block.RespawnAnchorBlock;
import net.minecraft.block.WallMountedBlock;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.entity.Entity;
import net.minecraft.entity.ExperienceOrbEntity;
import net.minecraft.entity.ItemEntity;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.state.property.Property;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.rD;

public class jl {
    private static final Set<Block> oVDJL;
    private static final long cuNqa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    public static BlockPos bDO(BlockPos var0, boolean var1_1) {
        block19: {
            block21: {
                block25: {
                    block26: {
                        block22: {
                            block23: {
                                block24: {
                                    block20: {
                                        block18: {
                                            var2_2 = jl.cuNqa ^ 31313747459656L;
                                            var5_3 = rD.dlmvG.player.getEyePos().subtract(var0.toCenterPos());
                                            var4_4 = jf.bBe();
                                            var6_5 = new Vec3d(var5_3.x, 0.0, var5_3.z);
                                            try {
                                                cfr_temp_0 = var6_5.lengthSquared() - 9.999999747378752E-6;
                                                v0 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 > 0.0 ? 1 : -1);
                                                if (var4_4 == null) break block18;
                                                if (v0 <= 0) break block19;
                                            }
                                            catch (MatchException v1) {
                                                throw jl.bDX(v1);
                                            }
                                            v0 = (double)var1_1;
                                        }
                                        try {
                                            if (var4_4 == null) break block20;
                                            if (v0 != false) {
                                            }
                                            ** GOTO lbl29
                                        }
                                        catch (MatchException v2) {
                                            throw jl.bDX(v2);
                                        }
                                        var9_6 = Math.atan2(var6_5.x, var6_5.z);
                                        var11_7 = 0.7853981633974483;
                                        var13_8 = (double)Math.round(var9_6 / var11_7) * var11_7;
                                        var7_9 = (int)Math.round(Math.sin(var13_8));
                                        var8_10 = (int)Math.round(Math.cos(var13_8));
                                        try {
                                            if (var4_4 != null) break block21;
lbl29:
                                            // 2 sources

                                            v0 = (cfr_temp_1 = Math.abs(var6_5.x) - Math.abs(var6_5.z)) == 0.0 ? 0 : (cfr_temp_1 > 0.0 ? 1 : -1);
                                        }
                                        catch (MatchException v3) {
                                            throw jl.bDX(v3);
                                        }
                                    }
                                    try {
                                        try {
                                            try {
                                                if (var4_4 == null) break block22;
                                                if (v0 > 0) {
                                                }
                                                ** GOTO lbl62
                                            }
                                            catch (MatchException v4) {
                                                throw jl.bDX(v4);
                                            }
                                            cfr_temp_2 = var6_5.x - 0.0;
                                            v5 = cfr_temp_2 == 0.0 ? 0 : (cfr_temp_2 > 0.0 ? 1 : -1);
                                            if (var4_4 == null) break block23;
                                        }
                                        catch (MatchException v6) {
                                            throw jl.bDX(v6);
                                        }
                                        if (v5 <= 0) break block24;
                                    }
                                    catch (MatchException v7) {
                                        throw jl.bDX(v7);
                                    }
                                    v5 = (double)true;
                                    break block23;
                                }
                                v5 = -1;
                            }
                            var7_9 = v5;
                            var8_10 = (double)false;
                            try {
                                if (var4_4 != null) break block21;
lbl62:
                                // 2 sources

                                v0 = (double)false;
                            }
                            catch (MatchException v8) {
                                throw jl.bDX(v8);
                            }
                        }
                        var7_9 = v0;
                        try {
                            cfr_temp_3 = var6_5.z - 0.0;
                            v9 = cfr_temp_3 == 0.0 ? 0 : (cfr_temp_3 > 0.0 ? 1 : -1);
                            if (var4_4 == null) break block25;
                            if (v9 <= 0) break block26;
                        }
                        catch (MatchException v10) {
                            throw jl.bDX(v10);
                        }
                        v9 = (double)true;
                        break block25;
                    }
                    v9 = -1;
                }
                var8_10 = v9;
            }
            return var0.add((int)var7_9, 0, (int)var8_10);
        }
        return var0.add(1, 0, 0);
    }

    public static BlockPos bDP(BlockPos blockPos) {
        block5: {
            BlockState blockState;
            block4: {
                long l2 = cuNqa ^ 0x157B4FF3D4BL;
                BlockState blockState2 = rD.dlmvG.world.getBlockState(blockPos);
                String[] stringArray = jf.bBe();
                try {
                    try {
                        blockState = blockState2;
                        if (stringArray == null) break block4;
                        if (!(blockState.getBlock() instanceof WallMountedBlock)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jl.bDX(matchException);
                    }
                    blockState = blockState2;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
            }
            Direction direction = jl.bDS(blockState).getOpposite();
            return blockPos.offset(direction);
        }
        return null;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                jl.cuNqa = gb.aYR(2255017921502474544L, 6876587141982224328L, MethodHandles.lookup().lookupClass()).a(261621804693976L);
                var11 = jl.cuNqa ^ 42122472388407L;
                var1_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var2_2 = 1; var2_2 < 8; ++var2_2) {
                    v2 = v2;
                    v2[var2_2] = (byte)(var11 << var2_2 * 8 >>> 56);
                }
                var1_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var0_3 = new long[53];
                var4_4 = 0;
                var5_5 = "\u009e@hGs\u00d7\u0091\u00c3\u00fb\u00b3\u00cf\b>49#k3$\u00d9\u00f9\u0086k\u00af\u00a7G\u0082\u0002\u00a62\u001c\u0017R\u001a\u0087\u0094\u00bfr+\u00e31\u00b6/B\u00bc~\u008e+\u00d4x\u00bb\u00d8k1eS*B=\u00cc\u00ad\u001c\u00eb\u0015\u00ef\u0010\u00fd\u0097\u00baF\u00b7\u001a\u00a6\u0083\u00ef\u00983>?\u00f7\u00ca\u0016\u00df%\u00a2C\u00df7\u0010QT\u00c7\u00d4wj\u0094\u000e\u00cf |\u000b\u00ff\u00c5x\u00dbL\u00023p)BR\u0098[\u00e3\u00fb@\u008b)\u00ab.\u009d&x\u008aS+g\u0097^\u009e{\u00b2\u008d9\u00e7G\u0087\u00eb\u00e2\u0019n~X>\u00ffg\u00d9\u0096\u009aN\u008dJ\u001e\u00c6\u0007\u00e5\u00cf'\u0081-\u00a5\u000e\u00e37\u00a4@\u00a3^\u001d?\u00e6\u00e3\u00fe\u0003'\u0085\u00ed\u00b4\u00ed=E\u00f3L\u00acr\u00ba\u00c7\u00a9#m\u00cb}\u00a8f\u00adwB\u0082\u001176\u00f6\u00bc\u00fc\u0096\u00dee\u00f5\u0016;\u008f\u00c9\u0090\u00c0\u00aa\t\u00a1\u00b5\u00f7\u00b5G\u009e&l>F\u0011Gk\u00e4hU\u0019\u009c\u009b\u00d3\u00b6OAc\u0091\u00b3=\u00f4\u00ac\"T]p\u0000\u001a\u00a7\u00a6\u0092\u008f\u0003\u0092\u00ab\u00a8\u00bfV\u0018\u00acuH\u00ae.2\u00a9\u0084\u00ba\u0011\u00fe\u0095\u00fbJ \u000f[{\u00a1]\u0092\u009e\u0096\u00b9\u00c2d\u0082\u0088\u00b1\u0088\u00dcfQ\u0095=\f\u00a8\u00f6\u0084L\u00db\u000el\u00d5s\u00b3\u000fuz\u00b8\u00c4\u00f1\u008em\u00b6\u00ea\u0080o\u0081\u007fR\u00b4\u00f1\u00e6\u009d\u0091s\u00f5\u008dx\u0087\u00a8\u009f\u00bd\u00f1\u0019D\u009eYu\u00ed\u00f7\u00f1\u0010\u0083i\u008d\u0001\u00f9\u00ae\u00e7:\u00ba\u009f\u00e3ZB]\u00ba&\u00e8\u00e0\u00ae\u0095N\u00b2\u00dd\u001b\u00e3\u001ep=\u00ba>x\u00cf\u008c^f\u001e\u00b7\u00c4t&Q\u000e\u00aa\u0092\u00b2\u00c6\u0087\u00fb\u00e6<+\u00feW\u00b7\u00a7\\x\u001bA>\u00f5";
                var6_6 = "\u009e@hGs\u00d7\u0091\u00c3\u00fb\u00b3\u00cf\b>49#k3$\u00d9\u00f9\u0086k\u00af\u00a7G\u0082\u0002\u00a62\u001c\u0017R\u001a\u0087\u0094\u00bfr+\u00e31\u00b6/B\u00bc~\u008e+\u00d4x\u00bb\u00d8k1eS*B=\u00cc\u00ad\u001c\u00eb\u0015\u00ef\u0010\u00fd\u0097\u00baF\u00b7\u001a\u00a6\u0083\u00ef\u00983>?\u00f7\u00ca\u0016\u00df%\u00a2C\u00df7\u0010QT\u00c7\u00d4wj\u0094\u000e\u00cf |\u000b\u00ff\u00c5x\u00dbL\u00023p)BR\u0098[\u00e3\u00fb@\u008b)\u00ab.\u009d&x\u008aS+g\u0097^\u009e{\u00b2\u008d9\u00e7G\u0087\u00eb\u00e2\u0019n~X>\u00ffg\u00d9\u0096\u009aN\u008dJ\u001e\u00c6\u0007\u00e5\u00cf'\u0081-\u00a5\u000e\u00e37\u00a4@\u00a3^\u001d?\u00e6\u00e3\u00fe\u0003'\u0085\u00ed\u00b4\u00ed=E\u00f3L\u00acr\u00ba\u00c7\u00a9#m\u00cb}\u00a8f\u00adwB\u0082\u001176\u00f6\u00bc\u00fc\u0096\u00dee\u00f5\u0016;\u008f\u00c9\u0090\u00c0\u00aa\t\u00a1\u00b5\u00f7\u00b5G\u009e&l>F\u0011Gk\u00e4hU\u0019\u009c\u009b\u00d3\u00b6OAc\u0091\u00b3=\u00f4\u00ac\"T]p\u0000\u001a\u00a7\u00a6\u0092\u008f\u0003\u0092\u00ab\u00a8\u00bfV\u0018\u00acuH\u00ae.2\u00a9\u0084\u00ba\u0011\u00fe\u0095\u00fbJ \u000f[{\u00a1]\u0092\u009e\u0096\u00b9\u00c2d\u0082\u0088\u00b1\u0088\u00dcfQ\u0095=\f\u00a8\u00f6\u0084L\u00db\u000el\u00d5s\u00b3\u000fuz\u00b8\u00c4\u00f1\u008em\u00b6\u00ea\u0080o\u0081\u007fR\u00b4\u00f1\u00e6\u009d\u0091s\u00f5\u008dx\u0087\u00a8\u009f\u00bd\u00f1\u0019D\u009eYu\u00ed\u00f7\u00f1\u0010\u0083i\u008d\u0001\u00f9\u00ae\u00e7:\u00ba\u009f\u00e3ZB]\u00ba&\u00e8\u00e0\u00ae\u0095N\u00b2\u00dd\u001b\u00e3\u001ep=\u00ba>x\u00cf\u008c^f\u001e\u00b7\u00c4t&Q\u000e\u00aa\u0092\u00b2\u00c6\u0087\u00fb\u00e6<+\u00feW\u00b7\u00a7\\x\u001bA>\u00f5".length();
                var3_7 = 0;
                while (true) {
                    var7_8 = var5_5.substring(var3_7, var3_7 += 8).getBytes("ISO-8859-1");
                    v3 = var0_3;
                    v4 = var4_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var3_7 < var6_6) ** continue;
                    var5_5 = "\u001d^\u00cf\u007f\u00e3U\u0099y\u001e\u0090\u00a9)m\u0003\u00a0\u00eb";
                    var6_6 = "\u001d^\u00cf\u007f\u00e3U\u0099y\u001e\u0090\u00a9)m\u0003\u00a0\u00eb".length();
                    var3_7 = 0;
                    while (true) {
                        var7_8 = var5_5.substring(var3_7, var3_7 += 8).getBytes("ISO-8859-1");
                        v3 = var0_3;
                        v4 = var4_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl38:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var3_7 < var6_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var1_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl51:
                // 1 sources

                ** continue;
            }
        }
        v8 = new Block[(int)var0_3[16]];
        v8[0] = Blocks.ENDER_CHEST;
        v8[1] = Blocks.CHEST;
        v8[2] = Blocks.TRAPPED_CHEST;
        v8[3] = Blocks.CRAFTING_TABLE;
        v8[4] = Blocks.BIRCH_TRAPDOOR;
        v8[5] = Blocks.BAMBOO_TRAPDOOR;
        v8[(int)var0_3[11]] = Blocks.DARK_OAK_TRAPDOOR;
        v8[(int)var0_3[4]] = Blocks.CHERRY_TRAPDOOR;
        v8[(int)var0_3[52]] = Blocks.ANVIL;
        v8[(int)var0_3[7]] = Blocks.BREWING_STAND;
        v8[(int)var0_3[49]] = Blocks.HOPPER;
        v8[(int)var0_3[8]] = Blocks.DROPPER;
        v8[(int)var0_3[25]] = Blocks.DISPENSER;
        v8[(int)var0_3[33]] = Blocks.ACACIA_TRAPDOOR;
        v8[(int)var0_3[22]] = Blocks.ENCHANTING_TABLE;
        v8[(int)var0_3[46]] = Blocks.WHITE_SHULKER_BOX;
        v8[(int)var0_3[29]] = Blocks.ORANGE_SHULKER_BOX;
        v8[(int)var0_3[18]] = Blocks.MAGENTA_SHULKER_BOX;
        v8[(int)var0_3[24]] = Blocks.LIGHT_BLUE_SHULKER_BOX;
        v8[(int)var0_3[32]] = Blocks.YELLOW_SHULKER_BOX;
        v8[(int)var0_3[1]] = Blocks.LIME_SHULKER_BOX;
        v8[(int)var0_3[30]] = Blocks.PINK_SHULKER_BOX;
        v8[(int)var0_3[41]] = Blocks.GRAY_SHULKER_BOX;
        v8[(int)var0_3[48]] = Blocks.CYAN_SHULKER_BOX;
        v8[(int)var0_3[31]] = Blocks.PURPLE_SHULKER_BOX;
        v8[(int)var0_3[19]] = Blocks.BLUE_SHULKER_BOX;
        v8[(int)var0_3[21]] = Blocks.BROWN_SHULKER_BOX;
        v8[(int)var0_3[13]] = Blocks.GREEN_SHULKER_BOX;
        v8[(int)var0_3[37]] = Blocks.RED_SHULKER_BOX;
        v8[(int)var0_3[36]] = Blocks.BLACK_SHULKER_BOX;
        v8[(int)var0_3[12]] = Blocks.CHIPPED_ANVIL;
        v8[(int)var0_3[20]] = Blocks.DAMAGED_ANVIL;
        v8[(int)var0_3[0]] = Blocks.ACACIA_BUTTON;
        v8[(int)var0_3[38]] = Blocks.BIRCH_BUTTON;
        v8[(int)var0_3[10]] = Blocks.BAMBOO_BUTTON;
        v8[(int)var0_3[43]] = Blocks.CHERRY_BUTTON;
        v8[(int)var0_3[28]] = Blocks.DARK_OAK_BUTTON;
        v8[(int)var0_3[26]] = Blocks.JUNGLE_BUTTON;
        v8[(int)var0_3[23]] = Blocks.OAK_BUTTON;
        v8[(int)var0_3[50]] = Blocks.SPRUCE_BUTTON;
        v8[(int)var0_3[9]] = Blocks.CRIMSON_BUTTON;
        v8[(int)var0_3[39]] = Blocks.WARPED_BUTTON;
        v8[(int)var0_3[40]] = Blocks.POLISHED_BLACKSTONE_BUTTON;
        v8[(int)var0_3[44]] = Blocks.POLISHED_BLACKSTONE_PRESSURE_PLATE;
        v8[(int)var0_3[15]] = Blocks.ACACIA_PRESSURE_PLATE;
        v8[(int)var0_3[47]] = Blocks.BIRCH_PRESSURE_PLATE;
        v8[(int)var0_3[27]] = Blocks.BAMBOO_PRESSURE_PLATE;
        v8[(int)var0_3[51]] = Blocks.CHERRY_PRESSURE_PLATE;
        v8[(int)var0_3[17]] = Blocks.DARK_OAK_PRESSURE_PLATE;
        v8[(int)var0_3[45]] = Blocks.JUNGLE_PRESSURE_PLATE;
        v8[(int)var0_3[5]] = Blocks.OAK_PRESSURE_PLATE;
        v8[(int)var0_3[2]] = Blocks.SPRUCE_PRESSURE_PLATE;
        v8[(int)var0_3[3]] = Blocks.CRIMSON_PRESSURE_PLATE;
        v8[(int)var0_3[6]] = Blocks.WARPED_PRESSURE_PLATE;
        v8[(int)var0_3[42]] = Blocks.LIGHT_WEIGHTED_PRESSURE_PLATE;
        v8[(int)var0_3[35]] = Blocks.HEAVY_WEIGHTED_PRESSURE_PLATE;
        v8[(int)var0_3[14]] = Blocks.STONE_BUTTON;
        v8[(int)var0_3[34]] = Blocks.STONE_PRESSURE_PLATE;
        jl.oVDJL = Set.of(v8);
    }

    /*
     * Exception decompiling
     */
    public static Direction bDS(BlockState var0) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
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

    public static boolean bDI(BlockPos blockPos) {
        boolean bl2;
        block9: {
            block10: {
                boolean bl3;
                block11: {
                    block12: {
                        long l2 = cuNqa ^ 0x9FC4979E834L;
                        String[] stringArray = jf.bBe();
                        try {
                            if (blockPos == null) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
                        try {
                            try {
                                try {
                                    bl2 = blockState.isOf(Blocks.RESPAWN_ANCHOR);
                                    if (stringArray == null) break block9;
                                    if (!bl2) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                                bl3 = ((Integer)blockState.get((Property)RespawnAnchorBlock.CHARGES)).intValue();
                                if (stringArray == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            if (!bl3) break block12;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        bl3 = true;
                        break block11;
                    }
                    bl3 = false;
                }
                return bl3;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static boolean bDU(Entity entity) {
        boolean bl2;
        block13: {
            block11: {
                String[] stringArray;
                block12: {
                    block10: {
                        long l2 = cuNqa ^ 0x54E8912C43A9L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                bl2 = entity instanceof ItemEntity;
                                if (stringArray == null) break block10;
                                if (bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            bl2 = entity instanceof ExperienceOrbEntity;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block12;
                            if (bl2) break block11;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        bl2 = entity instanceof PersistentProjectileEntity;
                    }
                    catch (MatchException matchException) {
                        throw jl.bDX(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block13;
                    if (bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static Block bDR(double d2, double d3, double d4) {
        BlockPos blockPos = BlockPos.ofFloored((Position)rD.dlmvG.player.getEntityPos().add(d2, d3, d4));
        return rD.dlmvG.world.getBlockState(blockPos).getBlock();
    }

    public static Direction bDQ(BlockPos blockPos, BlockPos blockPos2) {
        long l2 = cuNqa ^ 0x466E7ADD2CB2L;
        Direction[] directionArray = Direction.values();
        int n2 = directionArray.length;
        String[] stringArray = jf.bBe();
        int n3 = 0;
        while (n3 < n2) {
            block5: {
                block6: {
                    Direction direction = directionArray[n3];
                    try {
                        try {
                            if (stringArray == null) break block5;
                            if (!blockPos.offset(direction).equals((Object)blockPos2)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        return direction;
                    }
                    catch (MatchException matchException) {
                        throw jl.bDX(matchException);
                    }
                }
                ++n3;
            }
            if (stringArray != null) continue;
        }
        return null;
    }

    public static boolean bDT(BlockPos blockPos) {
        boolean bl2;
        block2: {
            block3: {
                long l2 = cuNqa ^ 0x70D5BAA6699BL;
                Box box = new Box(blockPos);
                String[] stringArray = jf.bBe();
                Iterator iterator = rD.dlmvG.world.getOtherEntities((Entity)rD.dlmvG.player, box, jl::bDU).iterator();
                try {
                    bl2 = iterator.hasNext();
                    if (stringArray == null) break block2;
                    if (!bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
                Entity entity = (Entity)iterator.next();
                return true;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static boolean bDK(BlockPos blockPos, int n2) {
        boolean bl2;
        block8: {
            block9: {
                int n3;
                block10: {
                    block11: {
                        long l2 = cuNqa ^ 0x4C67FAAF4023L;
                        BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
                        String[] stringArray = jf.bBe();
                        Block block = blockState.getBlock();
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = block.equals(Blocks.RESPAWN_ANCHOR);
                                        if (stringArray == null) break block8;
                                        if (!bl2) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw jl.bDX(matchException);
                                    }
                                    n3 = (Integer)blockState.get((Property)RespawnAnchorBlock.CHARGES);
                                    if (stringArray == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                                if (n3 < n2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            n3 = 1;
                            break block10;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                    }
                    n3 = 0;
                }
                return n3 != 0;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException bDX(MatchException matchException) {
        return matchException;
    }

    public static boolean bDJ(BlockPos blockPos) {
        boolean bl2;
        block9: {
            block10: {
                boolean bl3;
                block11: {
                    block12: {
                        long l2 = cuNqa ^ 0x6ADA99D75C12L;
                        String[] stringArray = jf.bBe();
                        try {
                            if (blockPos == null) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
                        try {
                            try {
                                try {
                                    bl2 = blockState.isOf(Blocks.RESPAWN_ANCHOR);
                                    if (stringArray == null) break block9;
                                    if (!bl2) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                                bl3 = ((Integer)blockState.get((Property)RespawnAnchorBlock.CHARGES)).intValue();
                                if (stringArray == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            if (bl3) break block12;
                        }
                        catch (MatchException matchException) {
                            throw jl.bDX(matchException);
                        }
                        bl3 = true;
                        break block11;
                    }
                    bl3 = false;
                }
                return bl3;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static boolean bDL(BlockState blockState) {
        return oVDJL.contains(blockState.getBlock());
    }

    public static boolean bDM(Block block) {
        return oVDJL.contains(block);
    }

    public static boolean bDN(BlockPos blockPos) {
        boolean bl2;
        block32: {
            block33: {
                BlockPos blockPos2;
                String[] stringArray;
                block34: {
                    boolean bl3;
                    block29: {
                        block30: {
                            Block block;
                            Block block2;
                            block31: {
                                block28: {
                                    Block block3;
                                    Block block4;
                                    block27: {
                                        ClientWorld clientWorld;
                                        block25: {
                                            block26: {
                                                long l2 = cuNqa ^ 0x3840BCEE0B2AL;
                                                stringArray = jf.bBe();
                                                try {
                                                    try {
                                                        clientWorld = rD.dlmvG.world;
                                                        if (stringArray == null) break block25;
                                                        if (clientWorld != null) break block26;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jl.bDX(matchException);
                                                    }
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jl.bDX(matchException);
                                                }
                                            }
                                            clientWorld = rD.dlmvG.world;
                                        }
                                        BlockState blockState = clientWorld.getBlockState(blockPos);
                                        try {
                                            try {
                                                block4 = blockState.getBlock();
                                                block3 = Blocks.OBSIDIAN;
                                                if (stringArray == null) break block27;
                                                if (block4 == block3) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw jl.bDX(matchException);
                                            }
                                            block4 = blockState.getBlock();
                                            block3 = Blocks.BEDROCK;
                                        }
                                        catch (MatchException matchException) {
                                            throw jl.bDX(matchException);
                                        }
                                    }
                                    try {
                                        if (block4 != block3) {
                                            return false;
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw jl.bDX(matchException);
                                    }
                                }
                                blockPos2 = blockPos.up();
                                BlockState blockState = rD.dlmvG.world.getBlockState(blockPos2);
                                try {
                                    try {
                                        try {
                                            try {
                                                bl3 = rD.dlmvG.world.isAir(blockPos2);
                                                if (stringArray == null) break block29;
                                                if (!bl3) break block30;
                                            }
                                            catch (MatchException matchException) {
                                                throw jl.bDX(matchException);
                                            }
                                            block2 = blockState.getBlock();
                                            block = Blocks.OBSIDIAN;
                                            if (stringArray == null) break block31;
                                        }
                                        catch (MatchException matchException) {
                                            throw jl.bDX(matchException);
                                        }
                                        if (block2 == block) break block30;
                                    }
                                    catch (MatchException matchException) {
                                        throw jl.bDX(matchException);
                                    }
                                    block2 = blockState.getBlock();
                                    block = Blocks.BEDROCK;
                                }
                                catch (MatchException matchException) {
                                    throw jl.bDX(matchException);
                                }
                            }
                            if (block2 != block) break block34;
                        }
                        bl3 = false;
                    }
                    return bl3;
                }
                Box box = new Box(blockPos2).offset(0.5, 0.0, 0.5).stretch(0.0, 2.0, 0.0);
                boolean bl4 = rD.dlmvG.world.getEntitiesByClass(Entity.class, box, entity -> {
                    boolean bl2;
                    block2: {
                        block3: {
                            long l2 = cuNqa ^ 0x7681BD97F5F3L;
                            String[] stringArray = jf.bBe();
                            try {
                                bl2 = entity instanceof ClientPlayerEntity;
                                if (stringArray == null) break block2;
                                if (bl2) break block3;
                            }
                            catch (MatchException matchException) {
                                throw jl.bDX(matchException);
                            }
                            bl2 = true;
                            break block2;
                        }
                        bl2 = false;
                    }
                    return bl2;
                }).stream().anyMatch(entity -> entity instanceof EndCrystalEntity);
                try {
                    bl2 = bl4;
                    if (stringArray == null) break block32;
                    if (bl2) break block33;
                }
                catch (MatchException matchException) {
                    throw jl.bDX(matchException);
                }
                bl2 = true;
                break block32;
            }
            bl2 = false;
        }
        return bl2;
    }
}

