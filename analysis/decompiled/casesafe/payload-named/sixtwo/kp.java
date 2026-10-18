/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4fc
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.MethodHandles;
import java.util.List;
import java.util.function.BiFunction;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.mG;

public class kp {
    private static int WPTmC;
    private static final long TZtGn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        TZtGn = gb.aYR(-8757875304823275970L, 3887249105142213068L, MethodHandles.lookup().lookupClass()).a(235240955982368L);
        if (kp.bQE() == 0) {
            kp.bQC(8);
        }
    }

    public static int bQE() {
        int n2 = kp.bQD();
        try {
            if (n2 == 0) {
                return 30;
            }
        }
        catch (MatchException matchException) {
            throw kp.bQF(matchException);
        }
        return 0;
    }

    public static void bQC(int n2) {
        WPTmC = n2;
    }

    private static Throwable bQF(Throwable throwable) {
        return throwable;
    }

    public static int bQD() {
        return WPTmC;
    }

    /*
     * Unable to fully structure code
     */
    public static void bQB(MatrixStack var0, List<Vec3d> var1_1, int var2_2, int var3_3, int var4_4, boolean var5_5, float var6_6, BiFunction<Integer, Integer, mG> var7_7) {
        block27: {
            var8_8 = kp.TZtGn ^ 93592290272581L;
            var11_9 = var0.peek().getPositionMatrix();
            var12_10 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * (var4_4 - var3_3 + 1));
            var10_11 = kp.bQD();
            try {
                block26: {
                    block24: {
                        var13_12 = new BufferBuilder(var12_10, VertexFormat.DrawMode.DEBUG_LINE_STRIP, VertexFormats.POSITION_COLOR);
                        var14_14 = 0;
                        var15_17 = var3_3;
                        while (var15_17 <= var4_4) {
                            var16_19 = var7_7.apply(var14_14, var2_2);
                            var17_21 = var1_1.get(var15_17);
                            try {
                                v0 = var5_5 != false ? var17_21.y : var17_21.y + (double)var6_6;
                            }
                            catch (Throwable v1) {
                                throw kp.bQF(v1);
                            }
                            var18_22 = v0;
                            var13_12.vertex((Matrix4fc)var11_9, (float)var17_21.x, (float)var18_22, (float)var17_21.z).color(var16_19.coh());
                            ++var15_17;
                            ++var14_14;
                            if (var10_11 == 0) continue;
                        }
                        var14_15 = var13_12.endNullable();
                        try {
                            block25: {
                                v2 = var14_15;
                                if (var10_11 != 0) break block24;
                                try {
                                    block29: {
                                        if (v2 == null) break block25;
                                        break block29;
                                        catch (Throwable v3) {
                                            throw kp.bQF(v3);
                                        }
                                    }
                                    lF.cfW(kR.gNqqy, var14_15);
                                }
                                catch (Throwable v4) {
                                    throw kp.bQF(v4);
                                }
                            }
                            v2 = var14_15;
                        }
                        catch (Throwable var15_18) {
                            block28: {
                                try {
                                    v5 = var14_15;
                                    if (var10_11 == 0) {
                                        if (v5 == null) break block28;
                                    }
                                    ** GOTO lbl50
                                }
                                catch (Throwable v6) {
                                    throw kp.bQF(v6);
                                }
                                try {
                                    v5 = var14_15;
lbl50:
                                    // 2 sources

                                    v5.close();
                                }
                                catch (Throwable var16_20) {
                                    var15_18.addSuppressed(var16_20);
                                }
                            }
                            throw var15_18;
                        }
                    }
                    try {
                        if (var10_11 != 0) break block26;
                        if (v2 == null) break block27;
                    }
                    catch (Throwable v7) {
                        throw kp.bQF(v7);
                    }
                    v2 = var14_15;
                }
                v2.close();
            }
            finally {
                var12_10.close();
            }
        }
        try {
            if (iS.bwL() == null) {
                kp.bQC(++var10_11);
            }
        }
        catch (Throwable v8) {
            throw kp.bQF(v8);
        }
    }

    /*
     * Unable to fully structure code
     */
    public static void bQA(MatrixStack var0, List<Vec3d> var1_1, int var2_2, int var3_3, int var4_4, float var5_5, BiFunction<Integer, Integer, mG> var6_6) {
        block25: {
            var7_7 = kp.TZtGn ^ 69287183197300L;
            var10_8 = var0.peek().getPositionMatrix();
            var9_9 = kp.bQE();
            var11_10 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * (var4_4 - var3_3 + 1) * 2);
            try {
                block24: {
                    block22: {
                        block21: {
                            var12_11 = new BufferBuilder(var11_10, VertexFormat.DrawMode.TRIANGLE_STRIP, VertexFormats.POSITION_COLOR);
                            var13_13 = 0;
                            var14_16 = var3_3;
                            while (var14_16 <= var4_4) {
                                var15_18 = var6_6.apply(var13_13, var2_2);
                                var16_20 = var1_1.get(var14_16);
                                try {
                                    var12_11.vertex((Matrix4fc)var10_8, (float)var16_20.x, (float)(var16_20.y + (double)var5_5), (float)var16_20.z).color(var15_18.coh());
                                    v0 = var12_11;
                                    if (var9_9 == 0) break block21;
                                    v0.vertex((Matrix4fc)var10_8, (float)var16_20.x, (float)var16_20.y, (float)var16_20.z).color(var15_18.coh());
                                    ++var14_16;
                                    ++var13_13;
                                    if (var9_9 != 0) continue;
                                }
                                catch (Throwable v1) {
                                    throw kp.bQF(v1);
                                }
                                iS.bwK("w9VZfb");
                                break;
                            }
                            v0 = var12_11;
                        }
                        var13_14 = v0.endNullable();
                        try {
                            block23: {
                                v2 = var13_14;
                                if (var9_9 == 0) break block22;
                                try {
                                    block27: {
                                        if (v2 == null) break block23;
                                        break block27;
                                        catch (Throwable v3) {
                                            throw kp.bQF(v3);
                                        }
                                    }
                                    lF.cfW(kR.agqAS, var13_14);
                                }
                                catch (Throwable v4) {
                                    throw kp.bQF(v4);
                                }
                            }
                            v2 = var13_14;
                        }
                        catch (Throwable var14_17) {
                            block26: {
                                try {
                                    v5 = var13_14;
                                    if (var9_9 != 0) {
                                        if (v5 == null) break block26;
                                    }
                                    ** GOTO lbl57
                                }
                                catch (Throwable v6) {
                                    throw kp.bQF(v6);
                                }
                                try {
                                    v5 = var13_14;
lbl57:
                                    // 2 sources

                                    v5.close();
                                }
                                catch (Throwable var15_19) {
                                    var14_17.addSuppressed(var15_19);
                                }
                            }
                            throw var14_17;
                        }
                    }
                    try {
                        if (var9_9 == 0) break block24;
                        if (v2 == null) break block25;
                    }
                    catch (Throwable v7) {
                        throw kp.bQF(v7);
                    }
                    v2 = var13_14;
                }
                v2.close();
            }
            finally {
                var11_10.close();
            }
        }
    }
}

