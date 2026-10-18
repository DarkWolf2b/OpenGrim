/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import net.minecraft.util.math.MathHelper;

public final class kA {
    private static float oYWsU;
    private static float BBpyW;
    private static String wtYmY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        if (kA.bSv() == null) {
            kA.bSu("DFjU2b");
        }
    }

    public static float bSt(float f2) {
        return MathHelper.lerp((float)f2, (float)oYWsU, (float)BBpyW);
    }

    public static void bSu(String string) {
        wtYmY = string;
    }

    public static String bSv() {
        return wtYmY;
    }

    public static void bSs(float f2) {
        oYWsU = BBpyW;
        BBpyW += f2;
    }
}

