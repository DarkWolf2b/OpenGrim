/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Vector4f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayDeque;
import java.util.Deque;
import org.joml.Vector4f;
import sixtwo.gb;
import sixtwo.iS;

public final class jF {
    private static final float[] jJgKH;
    private static final Deque<float[]> WjVUd;
    private static boolean gfICi;
    private static final long uKzlv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        uKzlv = gb.aYR(-5824617674824207052L, -5855478531357891036L, MethodHandles.lookup().lookupClass()).a(25331677279744L);
        jJgKH = new float[]{1.0f, 1.0f, 1.0f, 1.0f};
        jF.bHE(false);
        WjVUd = new ArrayDeque<float[]>();
    }

    public static float bHy() {
        return jJgKH[3];
    }

    public static Vector4f bHx() {
        return new Vector4f(jJgKH[0], jJgKH[1], jJgKH[2], jJgKH[3]);
    }

    public static void bHz(float f2, float f3, float f4, float f5) {
        jF.jJgKH[0] = f2;
        jF.jJgKH[1] = f3;
        jF.jJgKH[2] = f4;
        jF.jJgKH[3] = f5;
    }

    public static float[] bHw() {
        return jJgKH;
    }

    public static boolean bHG() {
        boolean bl2 = jF.bHF();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw jF.bHH(matchException);
        }
        return false;
    }

    public static boolean bHF() {
        return gfICi;
    }

    public static void bHB(float f2) {
        jF.bHA(1.0f, 1.0f, 1.0f, f2);
    }

    public static void bHA(float f2, float f3, float f4, float f5) {
        long l2 = uKzlv ^ 0x2D3F8E0E3682L;
        boolean bl2 = jF.bHG();
        WjVUd.push(new float[]{jJgKH[0], jJgKH[1], jJgKH[2], jJgKH[3]});
        boolean bl3 = bl2;
        try {
            jF.bHz(f2, f3, f4, f5);
            if (!bl3) {
                iS.bwK("CVusTc");
            }
        }
        catch (MatchException matchException) {
            throw jF.bHH(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    public static void bHC() {
        block14: {
            block16: {
                block15: {
                    block13: {
                        block12: {
                            var0 = jF.uKzlv ^ 138077199412369L;
                            var2_1 = jF.bHF();
                            try {
                                try {
                                    v0 = jF.WjVUd;
                                    if (var2_1) break block12;
                                    if (!v0.isEmpty()) {
                                    }
                                    ** GOTO lbl24
                                }
                                catch (MatchException v1) {
                                    throw jF.bHH(v1);
                                }
                                v0 = jF.WjVUd.pop();
                            }
                            catch (MatchException v2) {
                                throw jF.bHH(v2);
                            }
                        }
                        var3_2 = (float[])v0;
                        try {
                            jF.jJgKH[0] = var3_2[0];
                            jF.jJgKH[1] = var3_2[1];
                            jF.jJgKH[2] = var3_2[2];
                            jF.jJgKH[3] = var3_2[3];
                            if (!var2_1) break block13;
lbl24:
                            // 2 sources

                            jF.jJgKH[0] = 1.0f;
                            jF.jJgKH[1] = 1.0f;
                            jF.jJgKH[2] = 1.0f;
                            jF.jJgKH[3] = 1.0f;
                        }
                        catch (MatchException v3) {
                            throw jF.bHH(v3);
                        }
                    }
                    try {
                        try {
                            if (iS.bwL() != null) break block14;
                            if (!var2_1) break block15;
                        }
                        catch (MatchException v4) {
                            throw jF.bHH(v4);
                        }
                        v5 = false;
                        break block16;
                    }
                    catch (MatchException v6) {
                        throw jF.bHH(v6);
                    }
                }
                v5 = true;
            }
            jF.bHE(v5);
        }
    }

    private static MatchException bHH(MatchException matchException) {
        return matchException;
    }

    public static void bHE(boolean bl2) {
        gfICi = bl2;
    }

    public static void bHD() {
        WjVUd.clear();
        jF.jJgKH[0] = 1.0f;
        jF.jJgKH[1] = 1.0f;
        jF.jJgKH[2] = 1.0f;
        jF.jJgKH[3] = 1.0f;
    }
}

