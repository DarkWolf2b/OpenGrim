/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1058
 *  net.minecraft.class_11659
 *  net.minecraft.class_11890
 *  net.minecraft.class_12249
 *  net.minecraft.class_1297
 *  net.minecraft.class_1921
 *  net.minecraft.class_2960
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_4587$class_4665
 *  net.minecraft.class_4588
 *  net.minecraft.class_4608
 *  net.minecraft.class_4722
 *  net.minecraft.class_4730
 *  net.minecraft.class_8646
 *  net.minecraft.class_898
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
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
import net.minecraft.class_1058;
import net.minecraft.class_11659;
import net.minecraft.class_11890;
import net.minecraft.class_12249;
import net.minecraft.class_1297;
import net.minecraft.class_1921;
import net.minecraft.class_2960;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_4608;
import net.minecraft.class_4722;
import net.minecraft.class_4730;
import net.minecraft.class_8646;
import net.minecraft.class_898;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rD;
import sixtwo.rm;
import sixtwo.rs$we;

public class rs {
    private static final long UcBWs;
    private static final long[] XaHfj;
    private static final Integer[] CUOgS;
    private static final Map rzSit;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                rs.UcBWs = gb.aYR(4525848171215596403L, 7196226992107520881L, MethodHandles.lookup().lookupClass()).a(186291806593148L);
                rs.rzSit = new HashMap<K, V>(13);
                var0 = rs.UcBWs ^ 23614337060186L;
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
                var8_3 = new long[5];
                var5_4 = 0;
                var6_5 = "\u0095\t\u001cK\u00df\u00df\u00b3p\u001e%\u0096\u008e)\u000b\u000ft\f\u00d8\u00ad\u00ce\u009eP\u0012\u00cf";
                var7_6 = "\u0095\t\u001cK\u00df\u00df\u00b3p\u001e%\u0096\u008e)\u000b\u000ft\f\u00d8\u00ad\u00ce\u009eP\u0012\u00cf".length();
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
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "]\u00a6\u00cdV\u00d7z\u007f\u00e9\u0004i>f\u00d4\u0003\u00c2+";
                    var7_6 = "]\u00a6\u00cdV\u00d7z\u007f\u00e9\u0004i>f\u00d4\u0003\u00c2+".length();
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
lbl39:
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
lbl52:
                // 1 sources

                ** continue;
            }
        }
        rs.XaHfj = var8_3;
        rs.CUOgS = new Integer[5];
    }

    public static void djl(class_4587 class_45872, class_11890 class_118902, class_898 class_8982, class_11659 class_116592, int n, boolean bl) {
        iS[] iSArray;
        block26: {
            int n2;
            float f;
            int n3;
            int n4;
            int n5;
            boolean bl2;
            rs$we rs$we;
            int n6;
            int n7;
            int n8;
            block27: {
                long l;
                block25: {
                    int n9;
                    block24: {
                        block22: {
                            block23: {
                                l = UcBWs ^ 0x718B2095ACL;
                                class_45872.method_22903();
                                iS[] iSArray2 = rm.div();
                                double d = class_8982.method_23168((class_1297)class_118902);
                                class_45872.method_46416(0.0f, class_118902.method_17682() + 0.5f, 0.0f);
                                iSArray = iSArray2;
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (iSArray == null) break block22;
                                                    if (!(d <= 4096.0)) break block23;
                                                }
                                                catch (MatchException matchException) {
                                                    throw rs.djq(matchException);
                                                }
                                                class_45872.method_22904(0.0, (double)0.25875f, 0.0);
                                                if (iSArray == null) break block22;
                                            }
                                            catch (MatchException matchException) {
                                                throw rs.djq(matchException);
                                            }
                                            if (!(d < 100.0)) break block23;
                                        }
                                        catch (MatchException matchException) {
                                            throw rs.djq(matchException);
                                        }
                                        if (class_118902.method_73183().method_8428().method_1189(class_8646.field_45158) == null) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw rs.djq(matchException);
                                    }
                                    class_45872.method_22904(0.0, (double)0.25875f, 0.0);
                                }
                                catch (MatchException matchException) {
                                    throw rs.djq(matchException);
                                }
                            }
                            class_45872.method_22907((Quaternionfc)rD.dlmvG.field_1773.method_19418().method_23767());
                            class_45872.method_22905(-1.0f, 1.0f, 1.0f);
                        }
                        float f2 = 0.025f;
                        class_45872.method_22905(f2, f2, f2);
                        n8 = class_3532.method_15386((float)class_118902.method_6032());
                        n7 = class_3532.method_15386((float)class_118902.method_6063());
                        n6 = class_3532.method_15386((float)class_118902.method_6067());
                        try {
                            n9 = n7;
                            if (iSArray == null) break block24;
                            if (n9 > 0) break block25;
                        }
                        catch (MatchException matchException) {
                            throw rs.djq(matchException);
                        }
                        n9 = n6;
                    }
                    try {
                        if (n9 <= 0) {
                            class_45872.method_22909();
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rs.djq(matchException);
                    }
                }
                rs$we = rs$we.dyK(class_118902);
                bl2 = class_118902.method_73183().method_8401().method_152();
                n5 = class_3532.method_15386((float)((float)n7 / 2.0f));
                int n10 = class_3532.method_15386((float)((float)n6 / 2.0f));
                n4 = n5 + n10;
                int n11 = (n4 + n - 1) / n;
                n3 = Math.max((int)(rs.djt("g", (int)5545, (long)(0x515898B92A8D4483L ^ l)) - (n11 - 2)), 3);
                int n12 = Math.min(n4, n) * rs.djt("g", (int)12796, (long)(0x3742FEDA9AA660D7L ^ l)) + 1;
                f = (float)n12 / 2.0f;
                n2 = class_8982.method_23839((class_1297)class_118902, rD.dlmvG.method_61966().method_60637(true));
                try {
                    try {
                        if (iSArray == null) break block26;
                        if (!bl) break block27;
                    }
                    catch (MatchException matchException) {
                        throw rs.djq(matchException);
                    }
                    rs.djm(class_116592, class_45872, class_12249.method_76028((class_2960)class_4722.field_61757), n, n4, n3, f, n5, n7, n6, n8, bl2, rs$we, n2);
                }
                catch (MatchException matchException) {
                    throw rs.djq(matchException);
                }
            }
            rs.djm(class_116592, class_45872, class_12249.method_76022((class_2960)class_4722.field_61757), n, n4, n3, f, n5, n7, n6, n8, bl2, rs$we, n2);
            class_45872.method_22909();
        }
        try {
            if (iSArray == null) {
                iS.bwK("J1ryAb");
            }
        }
        catch (MatchException matchException) {
            throw rs.djq(matchException);
        }
    }

    private static MatchException djq(MatchException matchException) {
        return matchException;
    }

    private static CallSite djt(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/rs" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int djr(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x63D;
        if (CUOgS[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = XaHfj[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])rzSit.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rzSit.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/rs", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            rs.CUOgS[n2] = n3;
        }
        return CUOgS[n2];
    }

    private static void djm(class_11659 class_116592, class_4587 class_45872, class_1921 class_19212, int n, int n2, int n3, float f, int n4, int n5, int n6, int n7, boolean bl, rs$we rs$we, int n8) {
        class_116592.method_73483(class_45872, class_19212, (class_46652, class_45882) -> {
            long l = UcBWs ^ 0xB61E78FFF06L;
            Matrix4f matrix4f = class_46652.method_23761();
            iS[] iSArray = rm.div();
            for (int i = n2 - 1; i >= 0; --i) {
                int n9;
                int n10;
                float f2;
                float f3;
                float f4;
                block28: {
                    int n11;
                    block27: {
                        int n12;
                        block21: {
                            block22: {
                                rs$we rs$we2;
                                boolean bl2;
                                block25: {
                                    block26: {
                                        boolean bl3;
                                        block23: {
                                            block24: {
                                                int n13 = i / n;
                                                int n14 = i % n;
                                                f4 = f - (float)(n14 * rs.djt("g", (int)18092, (long)(0x65D13E3AB6FD2EL ^ l)));
                                                f3 = n13 * n3;
                                                f2 = (float)n13 * 0.01f;
                                                rs.djn(class_46652, matrix4f, class_45882, f4, f3, f2, rs$we.vefaf.dyJ(bl, false), n8);
                                                n12 = i * 2;
                                                try {
                                                    int n11 = i;
                                                    n11 = n4;
                                                    if (iSArray == null) break block21;
                                                    if (n10 < n11) break block22;
                                                }
                                                catch (MatchException matchException) {
                                                    throw rs.djq(matchException);
                                                }
                                                n9 = n12 - n5;
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                int n11 = n9;
                                                                n11 = n6;
                                                                if (iSArray == null) break block21;
                                                                if (n10 >= n11) break block22;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw rs.djq(matchException);
                                                            }
                                                            bl3 = n9 + 1;
                                                            if (iSArray == null) break block23;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw rs.djq(matchException);
                                                        }
                                                        if (bl3 != n6) break block24;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw rs.djq(matchException);
                                                    }
                                                    bl3 = true;
                                                    break block23;
                                                }
                                                catch (MatchException matchException) {
                                                    throw rs.djq(matchException);
                                                }
                                            }
                                            bl3 = false;
                                        }
                                        bl2 = bl3;
                                        try {
                                            try {
                                                rs$we2 = rs$we;
                                                if (iSArray == null) break block25;
                                                if (rs$we2 != rs$we.hTsSe) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw rs.djq(matchException);
                                            }
                                            rs$we2 = rs$we.hTsSe;
                                            break block25;
                                        }
                                        catch (MatchException matchException) {
                                            throw rs.djq(matchException);
                                        }
                                    }
                                    rs$we2 = rs$we.SATwu;
                                }
                                rs$we rs$we3 = rs$we2;
                                rs.djn(class_46652, matrix4f, class_45882, f4, f3, f2, rs$we3.dyJ(bl, bl2), n8);
                            }
                            int n11 = n12;
                            n11 = n7;
                        }
                        try {
                            try {
                                try {
                                    if (iSArray == null) break block27;
                                    if (n10 >= n11) continue;
                                }
                                catch (MatchException matchException) {
                                    throw rs.djq(matchException);
                                }
                                n10 = n12 + 1;
                                if (iSArray == null) break block28;
                            }
                            catch (MatchException matchException) {
                                throw rs.djq(matchException);
                            }
                            n11 = n7;
                        }
                        catch (MatchException matchException) {
                            throw rs.djq(matchException);
                        }
                    }
                    n10 = n10 == n11 ? 1 : 0;
                }
                n9 = n10;
                rs.djn(class_46652, matrix4f, class_45882, f4, f3, f2, rs$we.dyJ(bl, n9 != 0), n8);
                if (iSArray != null) continue;
            }
        });
    }

    private static void djn(class_4587.class_4665 class_46652, Matrix4f matrix4f, class_4588 class_45882, float f, float f2, float f3, class_2960 class_29602, int n) {
        class_1058 class_10582 = rD.dlmvG.method_72703().method_73030(new class_4730(class_4722.field_61757, class_29602));
        float f4 = class_10582.method_4594();
        float f5 = class_10582.method_4577();
        float f6 = class_10582.method_4593();
        float f7 = class_10582.method_4575();
        float f8 = 9.0f;
        rs.djo(class_46652, matrix4f, class_45882, f, f2 - f8, f3, f4, f7, n);
        rs.djo(class_46652, matrix4f, class_45882, f - f8, f2 - f8, f3, f5, f7, n);
        rs.djo(class_46652, matrix4f, class_45882, f - f8, f2, f3, f5, f6, n);
        rs.djo(class_46652, matrix4f, class_45882, f, f2, f3, f4, f6, n);
    }

    private static void djo(class_4587.class_4665 class_46652, Matrix4f matrix4f, class_4588 class_45882, float f, float f2, float f3, float f4, float f5, int n) {
        long l = UcBWs ^ 0x684471D5B133L;
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_1336((int)rs.djt("g", (int)7510, (long)(0x3575329CFC6CE8E0L ^ l)), (int)rs.djt("g", (int)7425, (long)(0x6295CEBE15C6E8B3L ^ l)), (int)rs.djt("g", (int)7425, (long)(0x6295CEBE15C6E8B3L ^ l)), (int)rs.djt("g", (int)7425, (long)(0x6295CEBE15C6E8B3L ^ l))).method_22913(f4, f5).method_22922(class_4608.field_21444).method_60803(n).method_60831(class_46652, 0.0f, 0.0f, 1.0f);
    }

    private static int djs(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = rs.djr(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(rs.class, "djs", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
