/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.LevelRendererAccessor
 *  net.minecraft.class_1297
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_2586
 *  net.minecraft.class_4604
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import mixin.accessors.LevelRendererAccessor;
import net.minecraft.class_1297;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2586;
import net.minecraft.class_4604;
import sixtwo.gb;
import sixtwo.jH;
import sixtwo.mN;
import sixtwo.rD;

public class jJ {
    private static final long lrkPY = gb.aYR(-2468805518013952715L, 5312314740014689892L, MethodHandles.lookup().lookupClass()).a(43666576135917L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static MatchException bIE(MatchException matchException) {
        return matchException;
    }

    private static class_4604 bID() {
        class_4604 class_46042;
        block2: {
            block3: {
                long l = lrkPY ^ 0x176C9052849BL;
                LevelRendererAccessor levelRendererAccessor = (LevelRendererAccessor)rD.dlmvG.field_1769;
                class_4604 class_46043 = levelRendererAccessor.getCapturedFrustum();
                String[] stringArray = jH.bIh();
                try {
                    class_46042 = class_46043;
                    if (stringArray != null) break block2;
                    if (class_46042 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw jJ.bIE(matchException);
                }
                class_243 class_2432 = ((mN)rD.dlmvG.field_1769).getFrustumPos();
                class_46043.method_23088(class_2432.field_1352, class_2432.field_1351, class_2432.field_1350);
                return class_46043;
            }
            class_46042 = ((mN)rD.dlmvG.field_1769).getCullingFrustum();
        }
        return class_46042;
    }

    public static boolean bIB(class_1297 class_12972) {
        class_4604 class_46042;
        block4: {
            class_4604 class_46043;
            block5: {
                long l = lrkPY ^ 0x49EC6EDD4B87L;
                class_46043 = jJ.bID();
                String[] stringArray = jH.bIh();
                try {
                    try {
                        class_46042 = class_46043;
                        if (stringArray != null) break block4;
                        if (class_46042 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jJ.bIE(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw jJ.bIE(matchException);
                }
            }
            class_46042 = class_46043;
        }
        return class_46042.method_23093(class_12972.method_5829());
    }

    public static boolean bIC(class_2586 class_25862) {
        return jJ.bIA(class_25862.method_11016().method_46558());
    }

    public static boolean bIA(class_243 class_2432) {
        class_4604 class_46042;
        block4: {
            class_4604 class_46043;
            block5: {
                long l = lrkPY ^ 0x11DDBA0263D2L;
                class_46043 = jJ.bID();
                String[] stringArray = jH.bIh();
                try {
                    try {
                        class_46042 = class_46043;
                        if (stringArray != null) break block4;
                        if (class_46042 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jJ.bIE(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw jJ.bIE(matchException);
                }
            }
            class_46042 = class_46043;
        }
        return class_46042.method_23093(new class_238(class_2432.field_1352 - 0.5, class_2432.field_1351 - 0.5, class_2432.field_1350 - 0.5, class_2432.field_1352 + 0.5, class_2432.field_1351 + 0.5, class_2432.field_1350 + 0.5));
    }
}
