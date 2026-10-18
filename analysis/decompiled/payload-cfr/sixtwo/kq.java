/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_10055
 *  net.minecraft.class_1007
 *  net.minecraft.class_11890
 *  net.minecraft.class_243
 *  net.minecraft.class_287
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_591
 *  net.minecraft.class_630
 *  net.minecraft.class_742
 *  net.minecraft.class_7833
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_10055;
import net.minecraft.class_1007;
import net.minecraft.class_11890;
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_591;
import net.minecraft.class_630;
import net.minecraft.class_742;
import net.minecraft.class_7833;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.rD;

public final class kq {
    private static int hmhqw;
    private static final long WdBQQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        WdBQQ = gb.aYR(845915686675419384L, 5212466952231506870L, MethodHandles.lookup().lookupClass()).a(161708862246564L);
        if (kq.bQM() == 0) {
            kq.bQK(22);
        }
    }

    private static MatchException bQN(MatchException matchException) {
        return matchException;
    }

    public static int bQM() {
        int n = kq.bQL();
        try {
            if (n == 0) {
                return 84;
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        return 0;
    }

    private static void bQJ(class_4587 class_45872, class_630 class_6302) {
        float f;
        block13: {
            float f2;
            block14: {
                int n;
                block11: {
                    float f3;
                    block12: {
                        long l = WdBQQ ^ 0x185811671102L;
                        n = kq.bQM();
                        try {
                            try {
                                float f4 = class_6302.field_3674 - 0.0f;
                                f = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                if (n == 0) break block11;
                                if (f == false) break block12;
                            }
                            catch (MatchException matchException) {
                                throw kq.bQN(matchException);
                            }
                            class_45872.method_22907((Quaternionfc)class_7833.field_40718.rotation(class_6302.field_3674));
                        }
                        catch (MatchException matchException) {
                            throw kq.bQN(matchException);
                        }
                    }
                    f = (f3 = class_6302.field_3675 - 0.0f) == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                }
                try {
                    try {
                        if (n == 0) break block13;
                        if (f == false) break block14;
                    }
                    catch (MatchException matchException) {
                        throw kq.bQN(matchException);
                    }
                    class_45872.method_22907((Quaternionfc)class_7833.field_40715.rotation(class_6302.field_3675));
                }
                catch (MatchException matchException) {
                    throw kq.bQN(matchException);
                }
            }
            f = (f2 = class_6302.field_3654 - 0.0f) == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
        }
        try {
            if (f != false) {
                class_45872.method_22907((Quaternionfc)class_7833.field_40713.rotation(class_6302.field_3654));
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
    }

    public static void bQK(int n) {
        hmhqw = n;
    }

    private static void bQH(class_287 class_2872, class_4587 class_45872, float f, float f2, float f3, float f4, float f5, float f6, int n, float f7) {
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        Vector3f vector3f = kq.bQI(f, f2, f3, f4, f5, f6);
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n).method_60831(class_45872.method_23760(), vector3f.x(), vector3f.y(), vector3f.z()).method_75298(f7);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_39415(n).method_60831(class_45872.method_23760(), vector3f.x(), vector3f.y(), vector3f.z()).method_75298(f7);
    }

    public static int bQL() {
        return hmhqw;
    }

    private static Vector3f bQI(float f, float f2, float f3, float f4, float f5, float f6) {
        float f7 = f4 - f;
        float f8 = f5 - f2;
        float f9 = f6 - f3;
        float f10 = class_3532.method_15355((float)(f7 * f7 + f8 * f8 + f9 * f9));
        return new Vector3f(f7 / f10, f8 / f10, f9 / f10);
    }

    public static void bQG(class_4587 class_45872, class_287 class_2872, float f, class_742 class_7422, int n, float f2) {
        float f3;
        float f4;
        class_4587 class_45873;
        float f5;
        float f6;
        class_4587 class_45874;
        float f7;
        float f8;
        float f9;
        class_4587 class_45875;
        float f10;
        float f11;
        float f12;
        class_4587 class_45876;
        float f13;
        float f14;
        class_4587 class_45877;
        float f15;
        float f16;
        float f17;
        float f18;
        float f19;
        float f20;
        class_4587 class_45878;
        class_287 class_2873;
        float f21;
        float f22;
        float f23;
        float f24;
        float f25;
        class_4587 class_45879;
        class_287 class_2874;
        float f26;
        float f27;
        float f28;
        float f29;
        float f30;
        class_4587 class_458710;
        class_287 class_2875;
        boolean bl;
        int n2;
        class_630 class_6302;
        class_630 class_6303;
        class_630 class_6304;
        class_630 class_6305;
        class_630 class_6306;
        boolean bl2;
        block54: {
            boolean bl3;
            block55: {
                Quaternionf quaternionf;
                class_4587 class_458711;
                block52: {
                    boolean bl4;
                    boolean bl5;
                    float f31;
                    block50: {
                        float f32;
                        block51: {
                            long l = WdBQQ ^ 0x54F2C7539A16L;
                            class_1007 class_10072 = rD.dlmvG.method_1561().method_74405(class_7422);
                            class_591 class_5912 = (class_591)class_10072.method_4038();
                            f32 = class_3532.method_17821((float)f, (float)class_7422.field_6220, (float)class_7422.field_6283);
                            f31 = class_7422.method_5695(f);
                            bl3 = class_7422.method_20232();
                            int n3 = kq.bQM();
                            bl2 = class_7422.method_18276();
                            bl5 = class_7422.method_6128();
                            class_6306 = class_5912.field_3398;
                            class_6305 = class_5912.field_27433;
                            class_6304 = class_5912.field_3401;
                            class_6303 = class_5912.field_3397;
                            class_6302 = class_5912.field_3392;
                            class_45872.method_22903();
                            n2 = n3;
                            class_10055 class_100552 = new class_10055();
                            class_10072.method_62604((class_11890)class_7422, class_100552, f);
                            class_5912.method_62110(class_100552);
                            class_243 class_2432 = class_7422.method_30950(f);
                            try {
                                try {
                                    jI.bIs(class_45872, class_2432);
                                    bl4 = bl3;
                                    if (n2 == 0) break block50;
                                    if (!bl4) break block51;
                                }
                                catch (MatchException matchException) {
                                    throw kq.bQN(matchException);
                                }
                                class_45872.method_46416(0.0f, 0.35f, 0.0f);
                            }
                            catch (MatchException matchException) {
                                throw kq.bQN(matchException);
                            }
                        }
                        try {
                            class_458711 = class_45872;
                            quaternionf = new Quaternionf().rotationAxis((float)((double)(f32 + 180.0f) * Math.PI / 180.0), 0.0f, -1.0f, 0.0f);
                            if (n2 == 0) break block52;
                            class_458711.method_22907((Quaternionfc)quaternionf);
                            bl4 = bl3;
                        }
                        catch (MatchException matchException) {
                            throw kq.bQN(matchException);
                        }
                    }
                    try {
                        block53: {
                            try {
                                try {
                                    if (bl4) break block53;
                                    bl = bl5;
                                    if (n2 == 0) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw kq.bQN(matchException);
                                }
                                if (!bl) break block55;
                            }
                            catch (MatchException matchException) {
                                throw kq.bQN(matchException);
                            }
                        }
                        class_458711 = class_45872;
                        quaternionf = new Quaternionf().rotationAxis((float)((double)(90.0f + f31) * Math.PI / 180.0), -1.0f, 0.0f, 0.0f);
                    }
                    catch (MatchException matchException) {
                        throw kq.bQN(matchException);
                    }
                }
                class_458711.method_22907((Quaternionfc)quaternionf);
            }
            bl = bl3;
        }
        try {
            if (bl) {
                class_45872.method_46416(0.0f, -0.95f, 0.0f);
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            class_2875 = class_2872;
            class_458710 = class_45872;
            f30 = 0.0f;
            f29 = bl2 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f28 = bl2 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f27 = 0.0f;
            f26 = bl2 ? 1.05f : 1.4f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            kq.bQH(class_2875, class_458710, f30, f29, f28, f27, f26, 0.0f, n, f2);
            class_2874 = class_2872;
            class_45879 = class_45872;
            f25 = -0.37f;
            f24 = bl2 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f23 = 0.0f;
            f22 = 0.37f;
            f21 = bl2 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            kq.bQH(class_2874, class_45879, f25, f24, f23, f22, f21, 0.0f, n, f2);
            class_2873 = class_2872;
            class_45878 = class_45872;
            f20 = -0.15f;
            f19 = bl2 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f18 = bl2 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f17 = 0.15f;
            f16 = bl2 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f15 = bl2 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            kq.bQH(class_2873, class_45878, f20, f19, f18, f17, f16, f15, n, f2);
            class_45872.method_22903();
            class_45877 = class_45872;
            f14 = 0.0f;
            f13 = bl2 ? 1.05f : 1.4f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            class_45877.method_46416(f14, f13, 0.0f);
            kq.bQJ(class_45872, class_6306);
            kq.bQH(class_2872, class_45872, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f, 0.0f, n, f2);
            class_45872.method_22909();
            class_45872.method_22903();
            class_45876 = class_45872;
            f12 = 0.15f;
            f11 = bl2 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f10 = bl2 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            class_45876.method_46416(f12, f11, f10);
            kq.bQJ(class_45872, class_6302);
            kq.bQH(class_2872, class_45872, 0.0f, 0.0f, 0.0f, 0.0f, -0.6f, 0.0f, n, f2);
            class_45872.method_22909();
            class_45872.method_22903();
            class_45875 = class_45872;
            f9 = -0.15f;
            f8 = bl2 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f7 = bl2 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            class_45875.method_46416(f9, f8, f7);
            kq.bQJ(class_45872, class_6303);
            kq.bQH(class_2872, class_45872, 0.0f, 0.0f, 0.0f, 0.0f, -0.6f, 0.0f, n, f2);
            class_45872.method_22909();
            class_45872.method_22903();
            class_45874 = class_45872;
            f6 = 0.37f;
            f5 = bl2 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            class_45874.method_46416(f6, f5, 0.0f);
            kq.bQJ(class_45872, class_6304);
            kq.bQH(class_2872, class_45872, 0.0f, 0.0f, 0.0f, 0.0f, -0.55f, 0.0f, n, f2);
            class_45872.method_22909();
            class_45872.method_22903();
            class_45873 = class_45872;
            f4 = -0.37f;
            f3 = bl2 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            class_45873.method_46416(f4, f3, 0.0f);
            kq.bQJ(class_45872, class_6305);
            kq.bQH(class_2872, class_45872, 0.0f, 0.0f, 0.0f, 0.0f, -0.55f, 0.0f, n, f2);
            class_45872.method_22909();
            class_45872.method_22909();
            if (n2 == 0) {
                iS.bwK("QLmeX");
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
    }
}
