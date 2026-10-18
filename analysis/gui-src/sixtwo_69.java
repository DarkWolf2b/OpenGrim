/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.systems.RenderSystem
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.util.ArrayDeque;
import java.util.Deque;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jG$tW;
import sixtwo.lC;
import sixtwo.lT;
import sixtwo.lc;
import sixtwo.rD;
import sixtwo.rm;

public final class jG {
    private static final Deque<lc> tyoKy;
    private static final long AJNGy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static boolean bHY(az az2) {
        return jG.bHX(az2.tr(), az2.ts(), az2.kN(), az2.dn());
    }

    public static boolean bHZ(lC lC2) {
        return jG.bIa(lC2.cff(), lC2.cfg());
    }

    static {
        AJNGy = gb.aYR(-1063796139203356576L, -8906039374498815337L, MethodHandles.lookup().lookupClass()).a(172161209956373L);
        tyoKy = new ArrayDeque<lc>();
    }

    public static void bHP() {
        tyoKy.clear();
        jG.bHT();
    }

    public static void bHS(RenderPass renderPass) {
        block4: {
            jG$tW jG$tW;
            block5: {
                long l2 = AJNGy ^ 0x7DDAADEBDDA3L;
                jG$tW = jG.bHV();
                boolean bl2 = jF.bHG();
                try {
                    try {
                        if (!bl2) break block4;
                        if (jG$tW != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jG.bIc(matchException);
                    }
                    renderPass.disableScissor();
                    return;
                }
                catch (MatchException matchException) {
                    throw jG.bIc(matchException);
                }
            }
            renderPass.enableScissor(jG$tW.x(), jG$tW.y(), jG$tW.width(), jG$tW.height());
        }
    }

    public static void bHI(lC lC2, lc lc2) {
        lc lc3 = new lc(lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI()).bXB(lC2.cfd());
        jG.bHQ(lc3);
    }

    /*
     * Unable to fully structure code
     */
    public static void bHN() {
        block15: {
            block14: {
                block12: {
                    block13: {
                        var0 = jG.AJNGy ^ 31300209943209L;
                        var2_1 = jF.bHG();
                        try {
                            try {
                                v0 = jG.tyoKy.isEmpty();
                                if (!var2_1) break block12;
                                if (v0) break block13;
                            }
                            catch (MatchException v1) {
                                throw jG.bIc(v1);
                            }
                            jG.tyoKy.pop();
                        }
                        catch (MatchException v2) {
                            throw jG.bIc(v2);
                        }
                    }
                    try {
                        v3 = jG.tyoKy;
                        if (!var2_1) break block14;
                        v0 = v3.isEmpty();
                    }
                    catch (MatchException v4) {
                        throw jG.bIc(v4);
                    }
                }
                try {
                    if (!v0) {
                        v3 = jG.tyoKy.peek();
                    }
                    ** GOTO lbl36
                }
                catch (MatchException v5) {
                    throw jG.bIc(v5);
                }
            }
            try {
                jG.bHR((lc)v3);
                if (var2_1) break block15;
lbl36:
                // 2 sources

                jG.bHT();
            }
            catch (MatchException v6) {
                throw jG.bIc(v6);
            }
        }
    }

    public static boolean bHX(float f2, float f3, float f4, float f5) {
        float f6;
        block22: {
            block19: {
                boolean bl2;
                block21: {
                    lc lc2;
                    block20: {
                        float f7;
                        block18: {
                            block17: {
                                boolean bl3;
                                block16: {
                                    long l2 = AJNGy ^ 0x1C92D5F47066L;
                                    bl2 = jF.bHF();
                                    try {
                                        bl3 = tyoKy.isEmpty();
                                        if (bl2) break block16;
                                        if (!bl3) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw jG.bIc(matchException);
                                    }
                                    bl3 = true;
                                }
                                return bl3;
                            }
                            float f8 = f2 + f4;
                            f7 = f3 + f5;
                            lc2 = tyoKy.peek();
                            try {
                                try {
                                    float f9 = f8 - lc2.bXF();
                                    f6 = f9 == 0.0f ? 0 : (f9 > 0.0f ? 1 : -1);
                                    if (bl2) break block18;
                                    if (f6 <= 0) break block19;
                                }
                                catch (MatchException matchException) {
                                    throw jG.bIc(matchException);
                                }
                                float f10 = f2 - lc2.bXz();
                                f6 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jG.bIc(matchException);
                            }
                        }
                        try {
                            try {
                                if (bl2) break block20;
                                if (f6 >= 0) break block19;
                            }
                            catch (MatchException matchException) {
                                throw jG.bIc(matchException);
                            }
                            float f11 = f7 - lc2.bXG();
                            f6 = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jG.bIc(matchException);
                        }
                    }
                    try {
                        try {
                            if (bl2) break block21;
                            if (f6 <= 0) break block19;
                        }
                        catch (MatchException matchException) {
                            throw jG.bIc(matchException);
                        }
                        float f12 = f3 - lc2.bXA();
                        f6 = f12 == 0.0f ? 0 : (f12 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jG.bIc(matchException);
                    }
                }
                try {
                    if (bl2) break block22;
                    if (f6 >= 0) break block19;
                }
                catch (MatchException matchException) {
                    throw jG.bIc(matchException);
                }
                f6 = 1.0f;
                break block22;
            }
            f6 = 0.0f;
        }
        return (boolean)f6;
    }

    public static void bHK(lC lC2, float f2, float f3, float f4, float f5) {
        lc lc2 = new lc(f2, f3, f4, f5).bXB(lC2.cfd());
        jG.bHQ(lc2);
    }

    private static void bHQ(lc lc2) {
        Deque<lc> deque;
        block2: {
            block3: {
                long l2 = AJNGy ^ 0x63FD0722AFL;
                boolean bl2 = jF.bHG();
                try {
                    deque = tyoKy;
                    if (!bl2) break block2;
                    if (deque.isEmpty()) break block3;
                }
                catch (MatchException matchException) {
                    throw jG.bIc(matchException);
                }
                lc2 = jG.bHW(tyoKy.peek(), lc2);
            }
            deque = tyoKy;
        }
        deque.push(lc2);
        jG.bHR(lc2);
    }

    public static void bHJ(float f2, float f3, float f4, float f5) {
        lc lc2 = new lc(f2, f3, f4, f5);
        jG.bHQ(lc2);
    }

    public static boolean bIa(double d2, double d3) {
        Object object;
        block4: {
            block5: {
                long l2 = AJNGy ^ 0x754B9B2D9D5DL;
                boolean bl2 = jF.bHG();
                try {
                    try {
                        object = tyoKy;
                        if (!bl2) break block4;
                        if (!object.isEmpty()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jG.bIc(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw jG.bIc(matchException);
                }
            }
            object = tyoKy.peek();
        }
        lc lc2 = (lc)object;
        return lc2.bXD(d2, d3);
    }

    public static void bHL(Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5) {
        lc lc2 = new lc(f2, f3, f4, f5).bXC((Matrix3x2fc)matrix3x2fStack);
        jG.bHQ(lc2);
    }

    public static void bHM(Matrix3x2fc matrix3x2fc, float f2, float f3, float f4, float f5) {
        lc lc2 = new lc(f2, f3, f4, f5).bXC(matrix3x2fc);
        jG.bHQ(lc2);
    }

    public static int bIb() {
        return tyoKy.size();
    }

    private static void bHT() {
        tyoKy.clear();
        RenderSystem.disableScissorForRenderTypeDraws();
        lT.ciQ().disableScissor();
    }

    public static boolean bHO() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = AJNGy ^ 0x745B7D5EECC1L;
                boolean bl3 = jF.bHG();
                try {
                    bl2 = tyoKy.isEmpty();
                    if (!bl3) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw jG.bIc(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException bIc(MatchException matchException) {
        return matchException;
    }

    private static lc bHW(lc lc2, lc lc3) {
        float f2 = Math.max(lc2.bXF(), lc3.bXF());
        float f3 = Math.max(lc2.bXG(), lc3.bXG());
        float f4 = Math.min(lc2.bXz(), lc3.bXz());
        float f5 = Math.min(lc2.bXA(), lc3.bXA());
        float f6 = Math.max(0.0f, f4 - f2);
        float f7 = Math.max(0.0f, f5 - f3);
        return new lc(f2, f3, f6, f7);
    }

    private static jG$tW bHV() {
        Object object;
        block4: {
            block5: {
                long l2 = AJNGy ^ 0x6D363759EA31L;
                boolean bl2 = jF.bHG();
                try {
                    try {
                        object = tyoKy;
                        if (!bl2) break block4;
                        if (!object.isEmpty()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jG.bIc(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw jG.bIc(matchException);
                }
            }
            object = tyoKy.peek();
        }
        return jG.bHU((lc)object);
    }

    private static jG$tW bHU(lc lc2) {
        int n2 = rD.dlmvG.getWindow().getFramebufferHeight();
        double d2 = rm.dio().doubleValue();
        float f2 = lc2.bXF() * (float)d2;
        float f3 = lc2.bXG() * (float)d2;
        float f4 = (lc2.bXF() + lc2.bXH()) * (float)d2;
        float f5 = (lc2.bXG() + lc2.bXI()) * (float)d2;
        int n3 = (int)Math.floor(f2);
        int n4 = (int)Math.floor((double)n2 - Math.ceil(f5) + 0.5);
        int n5 = Math.max(0, (int)Math.ceil(f4) - n3);
        int n6 = Math.max(0, (int)Math.ceil(f5) - (int)Math.floor(f3) - 1);
        return new jG$tW(n3, n4, n5, n6);
    }

    private static void bHR(lc lc2) {
        jG$tW jG$tW = jG.bHU(lc2);
        RenderSystem.enableScissorForRenderTypeDraws((int)jG$tW.x(), (int)jG$tW.y(), (int)jG$tW.width(), (int)jG$tW.height());
    }
}

