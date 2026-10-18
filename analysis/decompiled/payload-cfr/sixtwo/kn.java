/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  mixin.accessors.LevelRendererAccessor
 *  net.minecraft.class_10017
 *  net.minecraft.class_11658
 *  net.minecraft.class_11659
 *  net.minecraft.class_1297
 *  net.minecraft.class_243
 *  net.minecraft.class_276
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_4587
 *  net.minecraft.class_9799
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.MethodHandles;
import java.util.function.Consumer;
import mixin.accessors.LevelRendererAccessor;
import net.minecraft.class_10017;
import net.minecraft.class_11658;
import net.minecraft.class_11659;
import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_276;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_4587;
import net.minecraft.class_9799;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jC;
import sixtwo.kn$uh;
import sixtwo.ko;
import sixtwo.lF;
import sixtwo.lI;
import sixtwo.rD;
import sixtwo.rm;

public class kn {
    public static boolean YNOIY;
    private static int pzGvS;
    private static final class_11659 Ejyed;
    private static jC nAplu;
    private static String[] UvnjA;
    private static final long JOztZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    public static void bQq(RenderPipeline var0, class_276 var1_1, Consumer<RenderPass> var2_2) {
        block38: {
            var3_3 = kn.JOztZ ^ 127839791378549L;
            var6_4 = new class_9799(class_290.field_1585.getVertexSize() * 4);
            var5_5 = kn.bQy();
            try {
                block37: {
                    block35: {
                        block34: {
                            block32: {
                                block33: {
                                    block31: {
                                        block29: {
                                            block30: {
                                                var7_6 = new class_287(var6_4, VertexFormat.class_5596.field_27382, class_290.field_1585);
                                                var8_8 = rm.dip();
                                                cfr_temp_0 = var8_8.field_1343 - 0.0f;
                                                v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                if (var5_5 == null) break block29;
                                                try {
                                                    block40: {
                                                        if (v0 <= 0) break block30;
                                                        break block40;
                                                        catch (Throwable v1) {
                                                            throw kn.bQz(v1);
                                                        }
                                                    }
                                                    v2 = var8_8.field_1343;
                                                    break block31;
                                                }
                                                catch (Throwable v3) {
                                                    throw kn.bQz(v3);
                                                }
                                            }
                                            v0 = var1_1.field_1482;
                                        }
                                        v2 = v0;
                                    }
                                    var9_10 = v2;
                                    cfr_temp_1 = var8_8.field_1342 - 0.0f;
                                    v4 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                    if (var5_5 == null) break block32;
                                    try {
                                        block41: {
                                            if (v4 <= 0) break block33;
                                            break block41;
                                            catch (Throwable v5) {
                                                throw kn.bQz(v5);
                                            }
                                        }
                                        v6 = var8_8.field_1342;
                                        break block34;
                                    }
                                    catch (Throwable v7) {
                                        throw kn.bQz(v7);
                                    }
                                }
                                v4 = var1_1.field_1481;
                            }
                            v6 = v4;
                        }
                        var10_11 = v6;
                        var7_6.method_22912(0.0f, 0.0f, 0.0f).method_22913(0.0f, 1.0f);
                        var7_6.method_22912(0.0f, var10_11, 0.0f).method_22913(0.0f, 0.0f);
                        var7_6.method_22912(var9_10, var10_11, 0.0f).method_22913(1.0f, 0.0f);
                        var7_6.method_22912(var9_10, 0.0f, 0.0f).method_22913(1.0f, 1.0f);
                        var11_12 = var7_6.method_60794();
                        try {
                            block36: {
                                v8 = var11_12;
                                if (var5_5 == null) break block35;
                                try {
                                    block42: {
                                        if (v8 == null) break block36;
                                        break block42;
                                        catch (Throwable v9) {
                                            throw kn.bQz(v9);
                                        }
                                    }
                                    lF.cfJ(var1_1, var0, var11_12, var2_2);
                                }
                                catch (Throwable v10) {
                                    throw kn.bQz(v10);
                                }
                            }
                            v8 = var11_12;
                        }
                        catch (Throwable var12_13) {
                            block39: {
                                try {
                                    v11 = var11_12;
                                    if (var5_5 != null) {
                                        if (v11 == null) break block39;
                                    }
                                    ** GOTO lbl83
                                }
                                catch (Throwable v12) {
                                    throw kn.bQz(v12);
                                }
                                try {
                                    v11 = var11_12;
lbl83:
                                    // 2 sources

                                    v11.close();
                                }
                                catch (Throwable var13_14) {
                                    var12_13.addSuppressed(var13_14);
                                }
                            }
                            throw var12_13;
                        }
                    }
                    try {
                        if (var5_5 == null) break block37;
                        if (v8 == null) break block38;
                    }
                    catch (Throwable v13) {
                        throw kn.bQz(v13);
                    }
                    v8 = var11_12;
                }
                v8.close();
            }
            finally {
                var6_4.close();
            }
        }
        try {
            if (var5_5 == null) {
                iS.bwK("TzJsIb");
            }
        }
        catch (Throwable v14) {
            throw kn.bQz(v14);
        }
    }

    public static boolean bQp() {
        boolean bl;
        block2: {
            block3: {
                long l = JOztZ ^ 0x5F99FD518E3CL;
                String[] stringArray = kn.bQy();
                try {
                    bl = pzGvS;
                    if (stringArray == null) break block2;
                    if (bl <= false) break block3;
                }
                catch (MatchException matchException) {
                    throw kn.bQz(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    static void bQu(class_1297 class_12972, float f, class_4587 class_45872) {
        class_11658 class_116582 = ((LevelRendererAccessor)rD.dlmvG.field_1769).getLevelRenderState();
        try {
            class_10017 class_100172 = rD.dlmvG.method_1561().method_72977(class_12972, f);
            class_243 class_2432 = class_116582.field_63082.field_63078;
            rD.dlmvG.method_1561().method_72976(class_100172, class_116582.field_63082, class_100172.field_53325 - class_2432.field_1352, class_100172.field_53326 - class_2432.field_1351, class_100172.field_53327 - class_2432.field_1350, class_45872, Ejyed);
        }
        catch (Throwable throwable) {
            // empty catch block
        }
    }

    public static void bQv() {
        kn.bQw().bGY();
    }

    public static String[] bQy() {
        return UvnjA;
    }

    /*
     * Unable to fully structure code
     */
    public static void bQr(RenderPipeline var0, class_276 var1_1, Consumer<RenderPass> var2_2) {
        block24: {
            var3_3 = kn.JOztZ ^ 62590962326875L;
            var6_4 = new class_9799(class_290.field_1592.getVertexSize() * 4);
            var5_5 = kn.bQy();
            try {
                block23: {
                    block21: {
                        var7_6 = new class_287(var6_4, VertexFormat.class_5596.field_27382, class_290.field_1592);
                        var7_6.method_22912(-1.0f, -1.0f, 0.0f);
                        var7_6.method_22912(1.0f, -1.0f, 0.0f);
                        var7_6.method_22912(1.0f, 1.0f, 0.0f);
                        var7_6.method_22912(-1.0f, 1.0f, 0.0f);
                        var8_8 = var7_6.method_60794();
                        try {
                            block22: {
                                v0 = var8_8;
                                if (var5_5 == null) break block21;
                                try {
                                    block26: {
                                        if (v0 == null) break block22;
                                        break block26;
                                        catch (Throwable v1) {
                                            throw kn.bQz(v1);
                                        }
                                    }
                                    lF.cfJ(var1_1, var0, var8_8, var2_2);
                                }
                                catch (Throwable v2) {
                                    throw kn.bQz(v2);
                                }
                            }
                            v0 = var8_8;
                        }
                        catch (Throwable var9_10) {
                            block25: {
                                try {
                                    v3 = var8_8;
                                    if (var5_5 != null) {
                                        if (v3 == null) break block25;
                                    }
                                    ** GOTO lbl42
                                }
                                catch (Throwable v4) {
                                    throw kn.bQz(v4);
                                }
                                try {
                                    v3 = var8_8;
lbl42:
                                    // 2 sources

                                    v3.close();
                                }
                                catch (Throwable var10_11) {
                                    var9_10.addSuppressed(var10_11);
                                }
                            }
                            throw var9_10;
                        }
                    }
                    try {
                        if (var5_5 == null) break block23;
                        if (v0 == null) break block24;
                    }
                    catch (Throwable v5) {
                        throw kn.bQz(v5);
                    }
                    v0 = var8_8;
                }
                v0.close();
            }
            finally {
                var6_4.close();
            }
        }
        try {
            if (iS.bwL() == null) {
                kn.bQx(new String[4]);
            }
        }
        catch (Throwable v6) {
            throw kn.bQz(v6);
        }
    }

    private static Throwable bQz(Throwable throwable) {
        return throwable;
    }

    public static void bQo(Runnable runnable) {
        ++pzGvS;
        try {
            runnable.run();
        }
        finally {
            --pzGvS;
        }
    }

    public static void bQs(class_1297 class_12972, float f, class_4587 class_45872) {
        lF.cfA(kn.bQt(class_12972, f, class_45872));
    }

    public static void bQx(String[] stringArray) {
        UvnjA = stringArray;
    }

    private static jC bQw() {
        jC jC2;
        block4: {
            block5: {
                long l = JOztZ ^ 0x44D269E7688BL;
                String[] stringArray = kn.bQy();
                try {
                    try {
                        jC2 = nAplu;
                        if (stringArray == null) break block4;
                        if (jC2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kn.bQz(matchException);
                    }
                    nAplu = new jC();
                }
                catch (MatchException matchException) {
                    throw kn.bQz(matchException);
                }
            }
            jC2 = nAplu;
        }
        return jC2;
    }

    static {
        JOztZ = gb.aYR(-731789322928536930L, -5995118959463714035L, MethodHandles.lookup().lookupClass()).a(167346395562571L);
        YNOIY = false;
        pzGvS = 0;
        kn.bQx(new String[3]);
        Ejyed = new kn$uh();
    }

    public static lI bQt(class_1297 class_12972, float f, class_4587 class_45872) {
        return new ko(class_12972, f, class_45872);
    }
}
