/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_10055
 *  net.minecraft.class_11659
 *  net.minecraft.class_12249
 *  net.minecraft.class_1297
 *  net.minecraft.class_1304
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_1921
 *  net.minecraft.class_2960
 *  net.minecraft.class_3532
 *  net.minecraft.class_3883
 *  net.minecraft.class_3887
 *  net.minecraft.class_4587
 *  net.minecraft.class_4587$class_4665
 *  net.minecraft.class_4588
 *  net.minecraft.class_4608
 *  net.minecraft.class_591
 *  net.minecraft.class_742
 *  net.minecraft.class_7833
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10055;
import net.minecraft.class_11659;
import net.minecraft.class_12249;
import net.minecraft.class_1297;
import net.minecraft.class_1304;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_1921;
import net.minecraft.class_2960;
import net.minecraft.class_3532;
import net.minecraft.class_3883;
import net.minecraft.class_3887;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_4608;
import net.minecraft.class_591;
import net.minecraft.class_742;
import net.minecraft.class_7833;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.qu;
import sixtwo.rD;

public class qC
extends class_3887<class_10055, class_591> {
    private static boolean ajGhE;
    private static final long PftoW;
    private static final long[] uJLFk;
    private static final Integer[] lcjyD;
    private static final Map KgUBe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qC(class_3883<class_10055, class_591> class_38832) {
        super(class_38832);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                qC.PftoW = gb.aYR(-4265989503287534394L, 7359482773001144905L, MethodHandles.lookup().lookupClass()).a(212318759050670L);
                qC.KgUBe = new HashMap<K, V>(13);
                qC.cZx(true);
                var0 = qC.PftoW ^ 120307984891374L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[4];
                var5_4 = 0;
                var6_5 = "6\u00b5\u00af\u00cc.=\u0096\u00ad\u008c\u00d2\u0080\u00f2_\u009a\u00b2\u00bf";
                var7_6 = "6\u00b5\u00af\u00cc.=\u0096\u00ad\u008c\u00d2\u0080\u00f2_\u009a\u00b2\u00bf".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "n\u00c3\u00cdo\u001d\u00f7\u0095C\u00f6\u0010\u000b_\u001a\u00dc\u00a0\u008c";
                    var7_6 = "n\u00c3\u00cdo\u001d\u00f7\u0095C\u00f6\u0010\u000b_\u001a\u00dc\u00a0\u008c".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl53:
                // 1 sources

                ** continue;
            }
        }
        qC.uJLFk = var8_3;
        qC.lcjyD = new Integer[4];
    }

    public static void cZx(boolean bl) {
        ajGhE = bl;
    }

    private static int cZC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = qC.cZB(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static boolean cZy() {
        return ajGhE;
    }

    private static MatchException cZA(MatchException matchException) {
        return matchException;
    }

    private static void cZu(class_4587 class_45872, class_4588 class_45882, int n) {
        block14: {
            float f;
            float f2;
            int n2;
            boolean bl;
            Matrix4f matrix4f;
            long l;
            block13: {
                block12: {
                    l = PftoW ^ 0x1DFE375155ABL;
                    class_45872.method_22903();
                    class_45872.method_22904(1.0, -0.10000001, 0.1);
                    class_45872.method_22905(1.875f, 1.875f, 1.0f);
                    class_45872.method_46416(-0.9375f, -0.0625f, 0.0f);
                    class_45872.method_22905(1.0f, 1.0f, 0.7f);
                    class_4587.class_4665 class_46652 = class_45872.method_23760();
                    matrix4f = class_46652.method_23761();
                    class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, 0.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25439, (long)(0x5EBC8EB67E363979L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, 1.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, 0.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, 1.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, 1.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, 1.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, 1.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, 1.0f);
                    boolean bl2 = qC.cZy();
                    class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, 1.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, -1.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, 1.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, -1.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, 0.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, -1.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, 0.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 0.0f, -1.0f);
                    bl = bl2;
                    for (n2 = 0; n2 < qC.cZD("a", (int)12780, (long)(0x433FA1EC06B26BC9L ^ l)); ++n2) {
                        f2 = (float)n2 / 32.0f;
                        f = 1.0f - f2 - 0.015625f;
                        class_45882.method_22918((Matrix4fc)matrix4f, f2, 0.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), -1.0f, 0.0f, 0.0f);
                        class_45882.method_22918((Matrix4fc)matrix4f, f2, 0.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), -1.0f, 0.0f, 0.0f);
                        class_45882.method_22918((Matrix4fc)matrix4f, f2, 1.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), -1.0f, 0.0f, 0.0f);
                        class_45882.method_22918((Matrix4fc)matrix4f, f2, 1.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), -1.0f, 0.0f, 0.0f);
                        float f3 = f2 + 0.03125f;
                        try {
                            class_45882.method_22918((Matrix4fc)matrix4f, f3, 1.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 1.0f, 0.0f, 0.0f);
                            class_45882.method_22918((Matrix4fc)matrix4f, f3, 1.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 0.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 1.0f, 0.0f, 0.0f);
                            class_45882.method_22918((Matrix4fc)matrix4f, f3, 0.0f, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 1.0f, 0.0f, 0.0f);
                            class_45882.method_22918((Matrix4fc)matrix4f, f3, 0.0f, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(f, 1.0f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 1.0f, 0.0f, 0.0f);
                            if (bl) {
                                if (bl) continue;
                                break;
                            }
                            break block12;
                        }
                        catch (MatchException matchException) {
                            throw qC.cZA(matchException);
                        }
                    }
                    n2 = 0;
                }
                while (n2 < qC.cZD("a", (int)3484, (long)(0x3E7E1C5B402A57BBL ^ l))) {
                    f2 = (float)n2 / 32.0f + 0.03125f;
                    f = 1.0f - (float)n2 / 32.0f - 0.015625f;
                    try {
                        class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, f2, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 1.0f, 0.0f);
                        class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, f2, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 1.0f, 0.0f);
                        class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, f2, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 1.0f, 0.0f);
                        class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, f2, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, 1.0f, 0.0f);
                        ++n2;
                        if (bl) {
                            if (bl) continue;
                            break;
                        }
                        break block13;
                    }
                    catch (MatchException matchException) {
                        throw qC.cZA(matchException);
                    }
                }
                n2 = 0;
            }
            while (n2 < qC.cZD("a", (int)3484, (long)(0x3E7E1C5B402A57BBL ^ l))) {
                f2 = (float)n2 / 32.0f;
                f = 1.0f - f2 - 0.015625f;
                try {
                    class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, f2, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, -1.0f, 0.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, f2, 0.0f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, -1.0f, 0.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 0.0f, f2, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(1.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, -1.0f, 0.0f);
                    class_45882.method_22918((Matrix4fc)matrix4f, 1.0f, f2, -0.078125f).method_1336((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l))).method_22913(0.0f, f).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_45872.method_23760(), 0.0f, -1.0f, 0.0f);
                    ++n2;
                    if (bl) {
                        if (bl) continue;
                        break;
                    }
                    break block14;
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
            }
            class_45872.method_22909();
        }
    }

    private static int cZB(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5353;
        if (lcjyD[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = uJLFk[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KgUBe.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KgUBe.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/qC", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            qC.lcjyD[n2] = n3;
        }
        return lcjyD[n2];
    }

    public static boolean cZz() {
        boolean bl = qC.cZy();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        return false;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cZt(class_4587 class_45872, class_11659 class_116592, int n, class_10055 class_100552, float f, float f2) {
        float f3;
        class_1297 class_12972;
        boolean bl;
        block28: {
            boolean bl2;
            block27: {
                long l = PftoW ^ 0x4D2800796F00L;
                bl = qC.cZy();
                try {
                    if (rD.dlmvG.field_1687 == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
                try {
                    bl2 = qu.cmARD.get();
                    if (!bl) break block27;
                    if (bl2) return;
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
                bl2 = hF.BQuMu;
            }
            if (!bl2) {
                return;
            }
            class_1297 class_12973 = rD.dlmvG.field_1687.method_8469(class_100552.field_53528);
            try {
                try {
                    class_12972 = class_12973;
                    if (!bl) break block28;
                    if (!(class_12972 instanceof class_742)) return;
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
                class_12972 = class_12973;
            }
            catch (MatchException matchException) {
                throw qC.cZA(matchException);
            }
        }
        class_742 class_7422 = (class_742)class_12972;
        try {
            if (!bl) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        try {
            if (class_7422.method_5767()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        ee ee2 = rD.dlJ().aZx(ee.class);
        try {
            if (ee2.arM().WF()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        class_1799 class_17992 = class_7422.method_6118(class_1304.field_6174);
        try {
            if (class_17992.method_31574(class_1802.field_8833)) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        class_2960 class_29602 = rD.dlR().cZL(class_7422);
        try {
            if (class_29602 == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        boolean bl3 = class_7422.method_18276();
        try {
            f3 = bl3 ? 1.0f : 0.0f;
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        float f4 = f3;
        float f5 = class_3532.method_16439((float)f4, (float)0.2f, (float)0.185f);
        float f6 = class_3532.method_16439((float)f4, (float)0.125f, (float)0.175f);
        float f7 = class_3532.method_16439((float)f4, (float)24.0f, (float)33.0f);
        Vector3f vector3f = new Vector3f(class_3532.method_16439((float)f4, (float)0.0f, (float)1.5f), 0.0f, class_3532.method_16439((float)f4, (float)1.0f, (float)2.5f));
        vector3f.normalize();
        Vector3f vector3f2 = new Vector3f(class_3532.method_16439((float)f4, (float)0.0f, (float)1.5f), 0.0f, class_3532.method_16439((float)f4, (float)-1.0f, (float)-2.5f));
        vector3f2.normalize();
        float f8 = f7 + class_3532.method_15374((double)(f / 4.0f)) * 20.0f;
        class_1921 class_19212 = class_12249.method_75990((class_2960)class_29602);
        class_45872.method_22903();
        class_45872.method_22905(1.1f, 1.1f, 1.1f);
        class_45872.method_46416(0.0f, f5, f6);
        class_45872.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(90.0f));
        class_45872.method_22903();
        class_45872.method_22907((Quaternionfc)class_7833.method_46356((Vector3f)vector3f).rotationDegrees(f8));
        class_45872.method_46416(-0.125f, 0.125f, 0.18f);
        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(100.0f));
        class_116592.method_73483(class_45872, class_19212, (class_46652, class_45882) -> qC.cZu(class_45872, class_45882, n));
        class_45872.method_22909();
        class_45872.method_22903();
        class_45872.method_22907((Quaternionfc)class_7833.method_46356((Vector3f)vector3f2).rotationDegrees(f8));
        class_45872.method_46416(0.0f, 0.125f, 0.18f);
        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(80.0f));
        class_116592.method_73483(class_45872, class_19212, (class_46652, class_45882) -> qC.cZu(class_45872, class_45882, n));
        class_45872.method_22909();
        class_45872.method_22909();
    }

    private static CallSite cZD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/qC" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(qC.class, "cZC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
