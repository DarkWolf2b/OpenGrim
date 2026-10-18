/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.WalkAnimationStateAccessor
 *  net.minecraft.class_1068
 *  net.minecraft.class_12079$class_12081
 *  net.minecraft.class_1268
 *  net.minecraft.class_1304
 *  net.minecraft.class_1799
 *  net.minecraft.class_243
 *  net.minecraft.class_2960
 *  net.minecraft.class_4050
 *  net.minecraft.class_742
 *  net.minecraft.class_7920
 *  net.minecraft.class_8685
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WalkAnimationStateAccessor;
import net.minecraft.class_1068;
import net.minecraft.class_12079;
import net.minecraft.class_1268;
import net.minecraft.class_1304;
import net.minecraft.class_1799;
import net.minecraft.class_243;
import net.minecraft.class_2960;
import net.minecraft.class_4050;
import net.minecraft.class_742;
import net.minecraft.class_7920;
import net.minecraft.class_8685;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kt;
import sixtwo.qG;
import sixtwo.rD;

public record ks(class_8685 skin, class_2960 texture, class_2960 capeTexture, class_2960 elytraTexture, class_7920 modelType, float yRot, float xRot, float yRotO, float xRotO, float yBodyRot, float yBodyRotO, float yHeadRot, float yHeadRotO, int hurtTime, int deathTime, class_4050 pose, boolean shiftDown, boolean sprinting, boolean onGround, class_243 deltaMovement, class_1799 mainHand, class_1799 offHand, class_1799 chestEquipment, float walkAnimationSpeed, float walkAnimationPos, boolean fallFlying, boolean usingItem, class_1268 usedItemHand) {
    private static final class_2960 DEFAULT_ELYTRA_TEXTURE;
    private static final long a;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        a = gb.aYR(7382530991093434877L, 5271008029939073395L, MethodHandles.lookup().lookupClass()).a(79907227809167L);
        long l = a ^ 0x1E973CC1ADAFL;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0084\u0012$:\u00ee>\u0007(\u00b2\u00ba\u00cc-6\u00f1\u00ab\u00ce\u00e6\u001c\u00e1\u00a1\u0094\u00cb\u00bf?\u0099m\u00a6\u00ba\u00afC^\u0000+lA\u000b\u00b8[\u00a5y\u0010K\u0012\u00b72\u0099\\\u00ea".getBytes("ISO-8859-1"));
                String string = ks.a(byArray3).intern();
                DEFAULT_ELYTRA_TEXTURE = class_2960.method_60656((String)string);
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    private static String a(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    public static ks capture(class_742 class_7422) {
        class_1268 class_12682;
        boolean bl;
        boolean bl2;
        float f;
        float f2;
        class_1799 class_17992;
        class_1799 class_17993;
        class_1799 class_17994;
        class_243 class_2432;
        boolean bl3;
        boolean bl4;
        boolean bl5;
        class_4050 class_40502;
        int n;
        int n2;
        float f3;
        float f4;
        float f5;
        float f6;
        float f7;
        float f8;
        float f9;
        float f10;
        class_7920 class_79202;
        class_2960 class_29602;
        class_2960 class_29603;
        class_2960 class_29604;
        class_8685 class_86852;
        ks ks2;
        ks ks3;
        long l = a ^ 0x6F09AE656AB4L;
        class_8685 class_86853 = ks.resolveSkin(class_7422);
        WalkAnimationStateAccessor walkAnimationStateAccessor = (WalkAnimationStateAccessor)class_7422.field_42108;
        float f11 = class_7422.method_36454();
        float f12 = class_7422.method_36455();
        float f13 = class_7422.field_6283;
        float f14 = class_7422.field_6241;
        boolean bl6 = kt.bRx();
        try {
            ks ks4;
            ks3 = ks4;
            ks2 = ks4;
            class_86852 = class_86853;
            class_29604 = class_86853.comp_1626().comp_3627();
            class_29603 = ks.resolveCapeTexture(class_7422);
            class_29602 = ks.resolveElytraTexture(class_7422);
            class_79202 = class_86853.comp_1629();
            f10 = f11;
            f9 = f12;
            f8 = f11;
            f7 = f12;
            f6 = f13;
            f5 = f13;
            f4 = f14;
            f3 = f14;
            n2 = class_7422.field_6235;
            n = class_7422.field_6213;
            class_40502 = class_7422.method_18376();
            bl5 = class_7422.method_5715();
            bl4 = class_7422.method_5624();
            bl3 = class_7422.method_24828();
            class_2432 = class_7422.method_18798();
            class_17994 = class_7422.method_6047().method_7972();
            class_17993 = class_7422.method_6079().method_7972();
            class_17992 = class_7422.method_6118(class_1304.field_6174).method_7972();
            f2 = class_7422.field_42108.method_48566();
            f = walkAnimationStateAccessor.getPosition();
            bl2 = class_7422.method_6128();
            bl = class_7422.method_6115();
            class_12682 = class_7422.method_6115() ? class_7422.method_6058() : class_1268.field_5808;
        }
        catch (MatchException matchException) {
            throw ks.a(matchException);
        }
        ks3(class_86852, class_29604, class_29603, class_29602, class_79202, f10, f9, f8, f7, f6, f5, f4, f3, n2, n, class_40502, bl5, bl4, bl3, class_2432, class_17994, class_17993, class_17992, f2, f, bl2, bl, class_12682);
        if (iS.bwL() == null) {
            boolean bl7;
            try {
                bl7 = !bl6;
            }
            catch (MatchException matchException) {
                throw ks.a(matchException);
            }
            kt.bRv(bl7);
        }
        return ks2;
    }

    private static class_2960 resolveElytraTexture(class_742 class_7422) {
        block3: {
            class_12079.class_12081 class_120812;
            block2: {
                long l = a ^ 0x1694B0A347C6L;
                class_12079.class_12081 class_120813 = ks.resolveSkin(class_7422).comp_1628();
                boolean bl = kt.bRx();
                try {
                    class_120812 = class_120813;
                    if (!bl) break block2;
                    if (class_120812 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw ks.a(matchException);
                }
                class_120812 = class_120813;
            }
            return class_120812.comp_3627();
        }
        return DEFAULT_ELYTRA_TEXTURE;
    }

    private static class_2960 resolveCapeTexture(class_742 class_7422) {
        class_2960 class_29602;
        block13: {
            block12: {
                class_12079.class_12081 class_120812;
                block11: {
                    boolean bl;
                    block9: {
                        qG qG2;
                        block10: {
                            ee ee2;
                            block8: {
                                long l = a ^ 0x21F42FC0A10L;
                                ee ee3 = rD.dlJ().aZx(ee.class);
                                bl = kt.bRw();
                                try {
                                    ee2 = ee3;
                                    if (bl) break block8;
                                    if (ee2 == null) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw ks.a(matchException);
                                }
                                ee2 = ee3;
                            }
                            try {
                                try {
                                    if (!ee2.bag()) break block9;
                                    qG2 = rD.dlT();
                                    if (bl) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw ks.a(matchException);
                                }
                                if (qG2 == null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw ks.a(matchException);
                            }
                            qG2 = rD.dlT();
                        }
                        return qG2.daj(class_7422);
                    }
                    class_12079.class_12081 class_120813 = ks.resolveSkin(class_7422).comp_1627();
                    try {
                        class_120812 = class_120813;
                        if (bl) break block11;
                        if (class_120812 == null) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ks.a(matchException);
                    }
                    class_120812 = class_120813;
                }
                class_29602 = class_120812.comp_3627();
                break block13;
            }
            class_29602 = null;
        }
        return class_29602;
    }

    private static class_8685 resolveSkin(class_742 class_7422) {
        class_8685 class_86852;
        block2: {
            block3: {
                long l = a ^ 0x6629A78A7D27L;
                class_8685 class_86853 = class_7422.method_52814();
                boolean bl = kt.bRx();
                try {
                    class_86852 = class_86853;
                    if (!bl) break block2;
                    if (class_86852 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw ks.a(matchException);
                }
                class_86852 = class_86853;
                break block2;
            }
            class_86852 = class_1068.method_62620();
        }
        return class_86852;
    }
}
