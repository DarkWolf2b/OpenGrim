/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_12075
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_4184
 *  net.minecraft.class_4587
 *  net.minecraft.class_7833
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
 *  org.joml.Vector4f
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_12075;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_4184;
import net.minecraft.class_4587;
import net.minecraft.class_7833;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import org.joml.Vector4f;
import org.jspecify.annotations.Nullable;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jK;
import sixtwo.rD;
import sixtwo.rm;

public class jI {
    private static Matrix4f BfOvs;
    private static Matrix4f GDhOW;
    private static Matrix4f ruTXP;
    private static final long PXtDs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static MatchException bIz(MatchException matchException) {
        return matchException;
    }

    public static void bIt(class_4587 class_45872, double d) {
        class_45872.method_22904(d, d, d);
    }

    public static class_4587 bIm(Matrix3x2fc matrix3x2fc) {
        class_4587 class_45872 = new class_4587();
        class_45872.method_34425((Matrix4fc)jI.bIl(matrix3x2fc));
        return class_45872;
    }

    public static class_4587 bIp(double d, double d2, double d3) {
        return jI.bIo(new class_243(d, d2, d3));
    }

    public static float bIy() {
        return Math.max((float)rD.dlmvG.field_1690.method_38521() * 4.0f, 4.0f);
    }

    public static Matrix3x2fStack bIn(@Nullable Matrix3x2fc matrix3x2fc) {
        long l = PXtDs ^ 0x6071A34E4586L;
        Matrix3x2fStack matrix3x2fStack = new Matrix3x2fStack();
        try {
            if (matrix3x2fc != null) {
                matrix3x2fStack.set(matrix3x2fc);
            }
        }
        catch (MatchException matchException) {
            throw jI.bIz(matchException);
        }
        return matrix3x2fStack;
    }

    public static void bIv(class_4587 class_45872, float f, float f2, float f3, float f4) {
        class_45872.method_46416(f, f2, f3);
        class_45872.method_22907((Quaternionfc)class_7833.field_40718.rotationDegrees(f4));
        class_45872.method_46416(-f, -f2, f3);
    }

    public static Matrix4f bIx(class_12075 class_120752, float f) {
        return jK.bIF(((Integer)rD.dlmvG.field_1690.method_41808().method_41753()).floatValue(), f, jI.bIy());
    }

    static {
        PXtDs = gb.aYR(704151637779864399L, -6002197135173590387L, MethodHandles.lookup().lookupClass()).a(135865284138013L);
        BfOvs = new Matrix4f();
        GDhOW = new Matrix4f();
        ruTXP = new Matrix4f();
    }

    public static void bIr(class_4587 class_45872) {
        class_4184 class_41842 = rD.dlmvG.field_1773.method_19418();
        class_243 class_2432 = class_41842.method_71156().method_22882();
        class_45872.method_22904(class_2432.field_1352, class_2432.field_1351, class_2432.field_1350);
    }

    public static void bIs(class_4587 class_45872, class_243 class_2432) {
        class_4184 class_41842 = rD.dlmvG.field_1773.method_19418();
        class_243 class_2433 = class_41842.method_71156();
        class_243 class_2434 = class_2432.method_1020(class_2433);
        class_45872.method_22904(class_2434.field_1352, class_2434.field_1351, class_2434.field_1350);
    }

    public static void bIj(Matrix4f matrix4f, Matrix4f matrix4f2, Matrix4f matrix4f3) {
        BfOvs = new Matrix4f((Matrix4fc)matrix4f);
        GDhOW = new Matrix4f((Matrix4fc)matrix4f2);
        ruTXP = new Matrix4f((Matrix4fc)matrix4f3);
    }

    public static Matrix4f bIl(Matrix3x2fc matrix3x2fc) {
        return new Matrix4f(matrix3x2fc.m00(), matrix3x2fc.m01(), 0.0f, 0.0f, matrix3x2fc.m10(), matrix3x2fc.m11(), 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, matrix3x2fc.m20(), matrix3x2fc.m21(), 0.0f, 1.0f);
    }

    public static class_4587 bIo(class_243 class_2432) {
        class_4587 class_45872;
        long l = PXtDs ^ 0x29772E792A2FL;
        class_4587 class_45873 = new class_4587();
        String[] stringArray = jH.bIh();
        class_4184 class_41842 = rD.dlmvG.field_1773.method_19418();
        class_45873.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(class_41842.method_19329()));
        class_45873.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(class_41842.method_19330() + 180.0f));
        class_243 class_2433 = class_2432.method_1020(class_41842.method_71156());
        class_45873.method_22904(class_2433.field_1352, class_2433.field_1351, class_2433.field_1350);
        String[] stringArray2 = stringArray;
        try {
            class_45872 = class_45873;
            if (iS.bwL() == null) {
                jH.bIg(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw jI.bIz(matchException);
        }
        return class_45872;
    }

    public static void bIu(class_4587 class_45872) {
        class_4184 class_41842 = rD.dlmvG.field_1773.method_19418();
        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(-class_41842.method_19330()));
        class_45872.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(class_41842.method_19329()));
    }

    public static void bIq(class_4587 class_45872) {
        class_4184 class_41842 = rD.dlmvG.field_1773.method_19418();
        class_45872.method_22907((Quaternionfc)class_41842.method_23767());
    }

    public static class_241 bIw(class_243 class_2432) {
        class_241 class_2412;
        Vector4f vector4f;
        String[] stringArray;
        block7: {
            Vector4f vector4f2;
            block8: {
                long l = PXtDs ^ 0x49BDF9D1599DL;
                class_4184 class_41842 = rD.dlmvG.field_1773.method_19418();
                stringArray = jH.bIh();
                class_243 class_2433 = class_41842.method_71156();
                float f = (float)(class_2432.field_1352 - class_2433.field_1352);
                float f2 = (float)(class_2432.field_1351 - class_2433.field_1351);
                float f3 = (float)(class_2432.field_1350 - class_2433.field_1350);
                vector4f2 = new Vector4f(f, f2, f3, 1.0f);
                try {
                    try {
                        vector4f2.mul((Matrix4fc)ruTXP).mul((Matrix4fc)BfOvs).mul((Matrix4fc)GDhOW);
                        vector4f = vector4f2;
                        if (stringArray != null) break block7;
                        if (!(vector4f.w <= 0.0f)) break block8;
                    }
                    catch (MatchException matchException) {
                        throw jI.bIz(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw jI.bIz(matchException);
                }
            }
            vector4f = vector4f2.div(vector4f2.w);
        }
        Vector4f vector4f3 = vector4f;
        class_241 class_2413 = rm.dip();
        float f = (vector4f3.x + 1.0f) / 2.0f * class_2413.field_1343;
        float f4 = (1.0f - vector4f3.y) / 2.0f * class_2413.field_1342;
        try {
            class_2412 = new class_241(f, f4);
            if (stringArray != null) {
                iS.bwK("TXQKec");
            }
        }
        catch (MatchException matchException) {
            throw jI.bIz(matchException);
        }
        return class_2412;
    }

    public static Matrix4f bIk() {
        return new Matrix4f((Matrix4fc)GDhOW);
    }
}
