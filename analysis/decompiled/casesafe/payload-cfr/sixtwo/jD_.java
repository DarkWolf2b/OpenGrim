/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  net.minecraft.class_11659
 *  net.minecraft.class_12249
 *  net.minecraft.class_1657
 *  net.minecraft.class_2960
 *  net.minecraft.class_4587
 *  net.minecraft.class_4588
 *  net.minecraft.class_4597$class_4598
 *  net.minecraft.class_600
 *  net.minecraft.class_811
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11659;
import net.minecraft.class_12249;
import net.minecraft.class_1657;
import net.minecraft.class_2960;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_4597;
import net.minecraft.class_600;
import net.minecraft.class_811;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.jspecify.annotations.Nullable;
import sixtwo.cY;
import sixtwo.gb;
import sixtwo.jC;
import sixtwo.jD$tV;
import sixtwo.ki;
import sixtwo.kn;
import sixtwo.mG;
import sixtwo.rD;

public final class jD {
    private static final class_2960 rPixL;
    private static final List<jD$tV> zbxcJ;
    private static @Nullable class_1657 KGTBV;
    private static @Nullable class_811 euveQ;
    private static @Nullable jC OHnhj;
    private static final long BioyZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        BioyZ = gb.aYR(5961469359657005583L, -2655715135983645903L, MethodHandles.lookup().lookupClass()).a(145425912808576L);
        long l = BioyZ ^ 0x2B4736FE3E37L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0088\u00a13\u0010\u0000\u008b\u0013\u00a9\u00beZ!\u008c8\u00a77\u00f6e\u00eb\u00d5Z*\\L>\u0013\u00d8\u00b1\u00ceY\u00f4t\u00bb\u00a7\u008d\u00a5\u00f5h\u00c2)~;\u007fQ\u00e1\u00aaz\u0085\u00d8'g[\u001d3Ba\u008f".getBytes("ISO-8859-1"));
                String string = jD.bHt(byArray3).intern();
                rPixL = class_2960.method_60656((String)string);
                zbxcJ = new ArrayList<jD$tV>();
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    private static MatchException bHs(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private static @Nullable class_1657 bHn() {
        class_811 class_8112;
        block15: {
            class_811 class_8113;
            int n;
            block13: {
                block14: {
                    long l = BioyZ ^ 0x132400CA4300L;
                    n = jC.bHb();
                    try {
                        if (rD.dlmvG.field_1724 == null) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                    class_8113 = euveQ;
                    try {
                        try {
                            class_8112 = class_8113;
                            if (n == 0) break block13;
                            if (class_8112 != null) break block14;
                            return KGTBV;
                        }
                        catch (MatchException matchException) {
                            throw jD.bHs(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                }
                class_8112 = class_8113;
            }
            try {
                try {
                    if (n == 0) break block15;
                    if (class_8112.method_29998()) return rD.dlmvG.field_1724;
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
                class_8112 = class_8113;
            }
            catch (MatchException matchException) {
                throw jD.bHs(matchException);
            }
        }
        try {
            if (class_8112 != class_811.field_4317) return KGTBV;
            return rD.dlmvG.field_1724;
        }
        catch (MatchException matchException) {
            throw jD.bHs(matchException);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    private static void bHo(class_600 class_6002, class_4587 class_45872, Matrix4f matrix4f, int n, int n2) {
        jC jC2 = jD.bHp();
        class_4597.class_4598 class_45982 = jC2.bGU();
        RenderSystem.getModelViewStack().pushMatrix().identity().mul((Matrix4fc)matrix4f);
        class_45872.method_22903();
        try {
            class_4588 class_45882 = class_45982.method_73477(class_12249.method_76000((class_2960)rPixL));
            class_6002.method_62100(class_45872, class_45882, n, n2, mG.hoGuU.coh());
        }
        finally {
            try {
                jC2.bGY();
            }
            finally {
                class_45872.method_22909();
                RenderSystem.getModelViewStack().popMatrix();
            }
        }
    }

    private static String bHt(byte[] byArray) {
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

    private static jC bHp() {
        jC jC2;
        block4: {
            block5: {
                long l = BioyZ ^ 0x773041F689B1L;
                int n = jC.bHb();
                try {
                    try {
                        jC2 = OHnhj;
                        if (n == 0) break block4;
                        if (jC2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                    OHnhj = new jC();
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
            }
            jC2 = OHnhj;
        }
        return jC2;
    }

    public static void bHh(@Nullable class_1657 class_16572) {
        KGTBV = class_16572;
    }

    public static void bHl() {
        long l = BioyZ ^ 0x79036C82CBC2L;
        int n = jC.bHc();
        try {
            if (zbxcJ.isEmpty()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw jD.bHs(matchException);
        }
        ArrayList<jD$tV> arrayList = new ArrayList<jD$tV>(zbxcJ);
        zbxcJ.clear();
        for (jD$tV jD$tV : arrayList) {
            ki.bPj(() -> jD.bHo(jD$tV.model(), jD$tV.poseStack(), jD$tV.modelViewMatrix(), jD$tV.lightCoords(), jD$tV.overlayCoords()), jD$tV.color(), jD$tV.color(), 0, 4, 2.5f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f);
            if (n == 0) continue;
        }
    }

    public static void bHm() {
        zbxcJ.clear();
    }

    public static void bHj() {
        euveQ = null;
    }

    public static void bHi(@Nullable class_811 class_8112) {
        euveQ = class_8112;
    }

    public static void bHk(class_600 class_6002, class_4587 class_45872, class_11659 class_116592, int n, int n2, cY cY2) {
        block7: {
            mG mG2;
            block8: {
                long l = BioyZ ^ 0x6B7061D76D42L;
                int n3 = jC.bHc();
                try {
                    if (kn.bQp()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
                class_1657 class_16572 = jD.bHn();
                mG2 = cY2.aaK(class_16572);
                try {
                    try {
                        if (n3 != 0) break block7;
                        if (!mG2.cnW()) break block8;
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
            }
            class_116592.method_73483(class_45872, class_12249.method_76000((class_2960)rPixL), (class_46652, class_45882) -> {
                class_4587 class_45872 = new class_4587();
                class_45872.method_23760().method_66521(class_46652);
                Matrix4f matrix4f = new Matrix4f((Matrix4fc)RenderSystem.getModelViewMatrix());
                zbxcJ.add(new jD$tV(class_6002, class_45872, matrix4f, n, n2, mG2));
            });
        }
    }
}
