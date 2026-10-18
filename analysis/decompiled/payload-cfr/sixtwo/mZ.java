/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_243
 *  net.minecraft.class_3532
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
import net.minecraft.class_243;
import net.minecraft.class_3532;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mT;
import sixtwo.rD;
import sixtwo.ry;

public class mZ {
    private static final double[] qApXy;
    private static final float[] pEYVS;
    public static int[] FPcHT;
    private static int[] OCHuI;
    private static final long MaViA;
    private static final String BeopE;
    private static final long[] xHioO;
    private static final Integer[] ENfKA;
    private static final Map QFlXv;
    private static final long IrWKJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block22: {
            block20: {
                block19: {
                    block21: {
                        mZ.MaViA = gb.aYR(-6673238518622702799L, 1208759698212216367L, MethodHandles.lookup().lookupClass()).a(228894526947183L);
                        var19 = mZ.MaViA ^ 94881272248261L;
                        if (mZ.csy() != null) {
                            mZ.csx(new int[4]);
                        }
                        var16_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var19 >>> 56);
                        for (var17_2 = 1; var17_2 < 8; ++var17_2) {
                            v2 = v2;
                            v2[var17_2] = (byte)(var19 << var17_2 * 8 >>> 56);
                        }
                        break block21;
lbl15:
                        // 1 sources

                        while (true) {
                            continue;
                            break;
                        }
                    }
                    var16_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var18_3 = var16_1.doFinal("\u00b3\u00db\u00ea\u00a9\u0087#\u000b:".getBytes("ISO-8859-1"));
                    ** while (true)
                    mZ.BeopE = mZ.csA(var18_3).intern();
                    mZ.QFlXv = new HashMap<K, V>(13);
                    var5_4 = Cipher.getInstance("DES/CBC/NoPadding");
                    v3 = SecretKeyFactory.getInstance("DES");
                    v4 = new byte[8];
                    v5 = v4;
                    v4[0] = (byte)(var19 >>> 56);
                    for (var6_5 = 1; var6_5 < 8; ++var6_5) {
                        v5 = v5;
                        v5[var6_5] = (byte)(var19 << var6_5 * 8 >>> 56);
                    }
                    var5_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                    var11_6 = new long[11];
                    var8_7 = 0;
                    var9_8 = "\u00d3T\u00d7\u0006W\u0005~\u00df>,\u00195\u00ef\u001e\u009b\u00dfb\u00af\u0011-\u00a1x^\u00ed\u00b9\u00d1\u0096\u00e3\u00a9\u00fa\u0012\u00b7\u0087\u0017\u0086=\f\u00c6}\u0006\u008d\u00fe\u00cb@\u00cb4\u00b4.\u0095\u00cb\u0081\u0002\u00c6{\u0016\u0001\u0093\u00b8\t\u00f0}\u00cdc\u00fb\u00f1\u00c7p'B$\u00c7\u009a";
                    var10_9 = "\u00d3T\u00d7\u0006W\u0005~\u00df>,\u00195\u00ef\u001e\u009b\u00dfb\u00af\u0011-\u00a1x^\u00ed\u00b9\u00d1\u0096\u00e3\u00a9\u00fa\u0012\u00b7\u0087\u0017\u0086=\f\u00c6}\u0006\u008d\u00fe\u00cb@\u00cb4\u00b4.\u0095\u00cb\u0081\u0002\u00c6{\u0016\u0001\u0093\u00b8\t\u00f0}\u00cdc\u00fb\u00f1\u00c7p'B$\u00c7\u009a".length();
                    var7_10 = 0;
                    while (true) {
                        var12_11 = var9_8.substring(var7_10, var7_10 += 8).getBytes("ISO-8859-1");
                        v6 = var11_6;
                        v7 = var8_7++;
                        v8 = ((long)var12_11[0] & 255L) << 56 | ((long)var12_11[1] & 255L) << 48 | ((long)var12_11[2] & 255L) << 40 | ((long)var12_11[3] & 255L) << 32 | ((long)var12_11[4] & 255L) << 24 | ((long)var12_11[5] & 255L) << 16 | ((long)var12_11[6] & 255L) << 8 | (long)var12_11[7] & 255L;
                        v9 = -1;
                        break block19;
                        break;
                    }
lbl46:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        var9_8 = "kOC\u009f?\u00f4\u00e9\u0084J\u00c0}\u00b9<{\u0014\u00a3";
                        var10_9 = "kOC\u009f?\u00f4\u00e9\u0084J\u00c0}\u00b9<{\u0014\u00a3".length();
                        var7_10 = 0;
                        while (true) {
                            var12_11 = var9_8.substring(var7_10, var7_10 += 8).getBytes("ISO-8859-1");
                            v6 = var11_6;
                            v7 = var8_7++;
                            v8 = ((long)var12_11[0] & 255L) << 56 | ((long)var12_11[1] & 255L) << 48 | ((long)var12_11[2] & 255L) << 40 | ((long)var12_11[3] & 255L) << 32 | ((long)var12_11[4] & 255L) << 24 | ((long)var12_11[5] & 255L) << 16 | ((long)var12_11[6] & 255L) << 8 | (long)var12_11[7] & 255L;
                            v9 = 0;
                            break block19;
                            break;
                        }
                        break;
                    }
lbl59:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        break block20;
                        break;
                    }
                }
                var13_12 = v8;
                var15_13 = var5_4.doFinal(new byte[]{(byte)(var13_12 >>> 56), (byte)(var13_12 >>> 48), (byte)(var13_12 >>> 40), (byte)(var13_12 >>> 32), (byte)(var13_12 >>> 24), (byte)(var13_12 >>> 16), (byte)(var13_12 >>> 8), (byte)var13_12});
                v10 = ((long)var15_13[0] & 255L) << 56 | ((long)var15_13[1] & 255L) << 48 | ((long)var15_13[2] & 255L) << 40 | ((long)var15_13[3] & 255L) << 32 | ((long)var15_13[4] & 255L) << 24 | ((long)var15_13[5] & 255L) << 16 | ((long)var15_13[6] & 255L) << 8 | (long)var15_13[7] & 255L;
                switch (v9) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl72:
                    // 1 sources

                    ** continue;
                }
            }
            mZ.xHioO = var11_6;
            mZ.ENfKA = new Integer[11];
            var0_14 = Cipher.getInstance("DES/CBC/NoPadding");
            v11 = SecretKeyFactory.getInstance("DES");
            v12 = new byte[8];
            v13 = v12;
            v12[0] = (byte)(var19 >>> 56);
            for (var1_15 = 1; var1_15 < 8; ++var1_15) {
                v13 = v13;
                v13[var1_15] = (byte)(var19 << var1_15 * 8 >>> 56);
            }
            break block22;
lbl86:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_14.init(2, (Key)v11.generateSecret(new DESKeySpec(v13)), new IvParameterSpec(new byte[8]));
        var2_16 = 664771319359349991L;
        var4_17 = var0_14.doFinal(new byte[]{(byte)(var2_16 >>> 56), (byte)(var2_16 >>> 48), (byte)(var2_16 >>> 40), (byte)(var2_16 >>> 32), (byte)(var2_16 >>> 24), (byte)(var2_16 >>> 16), (byte)(var2_16 >>> 8), (byte)var2_16});
        ** while (true)
        mZ.IrWKJ = ((long)var4_17[0] & 255L) << 56 | ((long)var4_17[1] & 255L) << 48 | ((long)var4_17[2] & 255L) << 40 | ((long)var4_17[3] & 255L) << 32 | ((long)var4_17[4] & 255L) << 24 | ((long)var4_17[5] & 255L) << 16 | ((long)var4_17[6] & 255L) << 8 | (long)var4_17[7] & 255L;
        mZ.qApXy = new double[mZ.csD("z", (int)30590, (long)(7921595943361779118L ^ var19))];
        mZ.pEYVS = new float[mZ.csD("z", (int)20488, (long)(3049313968009425627L ^ var19))];
        mZ.FPcHT = new int[]{(int)mZ.csD("z", (int)23257, (long)(3015726467192535046L ^ var19)), (int)mZ.csD("z", (int)6136, (long)(774821477800637741L ^ var19)), (int)mZ.csD("z", (int)17021, (long)(2614290680667218083L ^ var19))};
        try {
            for (var21_18 = 0; var21_18 < mZ.qApXy.length; ++var21_18) {
                mZ.qApXy[var21_18] = Math.pow(10.0, var21_18);
            }
        }
        catch (MatchException v14) {
            throw mZ.csz(v14);
        }
        try {
            for (var21_18 = 0; var21_18 < mZ.pEYVS.length; ++var21_18) {
                mZ.pEYVS[var21_18] = (float)Math.pow(10.0, var21_18);
            }
        }
        catch (MatchException v15) {
            throw mZ.csz(v15);
        }
    }

    public static float csn(float f, float f2, float f3) {
        return (float)Math.floor(f2 + (f - f2) * class_3532.method_15363((float)f3, (float)0.0f, (float)1.0f));
    }

    public static float csq(float f, float f2, float f3, float f4) {
        return Math.max(Math.max(f, f2), Math.max(f3, f4));
    }

    public static long cst(long l, mT mT2) {
        return mZ.csv(l, mT2.cpF());
    }

    public static double csu(double d) {
        double d2;
        block2: {
            block3: {
                long l = MaViA ^ 0x606081571F87L;
                d %= 360.0;
                int[] nArray = mZ.csy();
                try {
                    d2 = d;
                    if (nArray != null) break block2;
                    if (!(d2 < 0.0)) break block3;
                }
                catch (MatchException matchException) {
                    throw mZ.csz(matchException);
                }
                d += 360.0;
            }
            d2 = d;
        }
        return d2;
    }

    public static byte[] csg(byte[] ... byArray) {
        byte[] byArray2;
        block8: {
            int n;
            int[] nArray;
            block7: {
                long l = MaViA ^ 0x10E75FC22FF7L;
                int n2 = 0;
                byte[][] object2 = byArray;
                nArray = mZ.csy();
                for (byte[] n4 : object2) {
                    n = n2 + n4.length;
                    if (nArray == null) {
                        n2 = n;
                        if (nArray == null) continue;
                        iS.bwK("EIqNt");
                        break;
                    }
                    break block7;
                }
                n = n2;
            }
            byte[] byArray3 = new byte[n];
            int n2 = 0;
            byte[][] byArray4 = byArray;
            int n3 = byArray4.length;
            int n4 = 0;
            while (n4 < n3) {
                block9: {
                    byte[] byArray5;
                    byte[] byArray6 = byArray5 = byArray4[n4];
                    byArray2 = byArray6;
                    if (nArray != null) break block8;
                    int n5 = byArray2.length;
                    for (int i = 0; i < n5; ++i) {
                        byte by = byArray6[i];
                        try {
                            byArray3[n2] = by;
                            ++n2;
                            if (nArray == null) {
                                if (nArray == null) continue;
                                break;
                            }
                            break block9;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                    }
                    ++n4;
                }
                if (nArray == null) continue;
            }
            byArray2 = byArray3;
        }
        return byArray2;
    }

    public static long csv(long l, long l2) {
        long l3 = MaViA ^ 0x1D95AF69C1CCL;
        return (l - l2) / IrWKJ;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean css() {
        String string;
        int[] nArray;
        block13: {
            block14: {
                block12: {
                    long l = MaViA ^ 0x1C81C3DF63F2L;
                    nArray = mZ.csy();
                    try {
                        try {
                            string = ry.dkB().dkJ();
                            if (nArray != null) break block12;
                            if (string == null) return false;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        string = ry.dkB().dkJ();
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                try {
                    try {
                        if (nArray != null) break block13;
                        if (!string.isBlank()) break block14;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw mZ.csz(matchException);
                }
            }
            string = ry.dkB().dkJ();
        }
        String[] stringArray = string.split(BeopE);
        try {
            try {
                boolean bl = stringArray.length;
                if (nArray != null) return bl;
                if (!bl) return false;
                return true;
            }
            catch (MatchException matchException) {
                throw mZ.csz(matchException);
            }
        }
        catch (MatchException matchException) {
            throw mZ.csz(matchException);
        }
    }

    public static class_243 csk(class_243 class_2432, class_243 class_2433, float f) {
        double d = class_3532.method_16436((double)f, (double)class_2432.field_1352, (double)class_2433.field_1352);
        double d2 = class_3532.method_16436((double)f, (double)class_2432.field_1351, (double)class_2433.field_1351);
        double d3 = class_3532.method_16436((double)f, (double)class_2432.field_1350, (double)class_2433.field_1350);
        return new class_243(d, d2, d3);
    }

    private static CallSite csD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mZ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static int[] csi(int n) {
        return mZ.csh(String.valueOf(n));
    }

    public static String csd(byte[] byArray) {
        String string;
        block8: {
            long l = MaViA ^ 0x2362E9612D9DL;
            StringBuilder stringBuilder = new StringBuilder(2 * byArray.length);
            byte[] byArray2 = byArray;
            int n = byArray2.length;
            int n2 = 0;
            int[] nArray = mZ.csy();
            while (n2 < n) {
                block7: {
                    String string2;
                    block9: {
                        byte by = byArray2[n2];
                        string2 = Integer.toHexString(mZ.csD("z", (int)29103, (long)(0x3C6421B98AC18921L ^ l)) & by);
                        try {
                            try {
                                try {
                                    if (nArray != null) break block7;
                                    string = string2;
                                    if (nArray != null) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                if (string.length() != 1) break block9;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                            stringBuilder.append((char)mZ.csD("z", (int)4620, (long)(0x2DE1996F6703EA88L ^ l)));
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                    }
                    stringBuilder.append(string2);
                    ++n2;
                }
                if (nArray == null) continue;
            }
            string = stringBuilder.toString();
        }
        return string;
    }

    public static String cse(int[] nArray) {
        long l = MaViA ^ 0x27A5D18E3575L;
        StringBuilder stringBuilder = new StringBuilder();
        for (int n : nArray) {
            stringBuilder.append((char)n);
        }
        return stringBuilder.toString();
    }

    public static double cso(double d, double d2, double d3, double d4, double d5, double d6) {
        double d7 = d4 - d;
        double d8 = d5 - d2;
        double d9 = d6 - d3;
        return Math.sqrt(d7 * d7 + d8 * d8 + d9 * d9);
    }

    public static double csb(double d, int n) {
        double d2;
        double d3;
        block14: {
            double d4;
            double d5;
            block12: {
                double d6;
                block13: {
                    double d7;
                    int n2;
                    int[] nArray;
                    block10: {
                        block11: {
                            long l = MaViA ^ 0x3F2DAFCDE9BBL;
                            nArray = mZ.csy();
                            try {
                                try {
                                    n2 = n;
                                    if (nArray != null) break block10;
                                    if (n2 >= 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                return d;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                        }
                        n2 = n;
                    }
                    try {
                        d7 = n2 < qApXy.length ? qApXy[n] : Math.pow(10.0, n);
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                    d3 = d7;
                    d6 = d * d3;
                    try {
                        try {
                            d5 = d6;
                            d4 = 0.0;
                            if (nArray != null) break block12;
                            if (!(d5 >= d4)) break block13;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        d2 = Math.floor(d6 + 0.5);
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                d5 = d6;
                d4 = 0.5;
            }
            d2 = Math.ceil(d5 - d4);
        }
        double d8 = d2;
        return d8 / d3;
    }

    public static float csc(float f, int n) {
        float f2;
        float f3;
        block14: {
            float f4;
            float f5;
            block12: {
                float f6;
                block13: {
                    float f7;
                    int n2;
                    int[] nArray;
                    block10: {
                        block11: {
                            long l = MaViA ^ 0x75DF2D7199EAL;
                            nArray = mZ.csy();
                            try {
                                try {
                                    n2 = n;
                                    if (nArray != null) break block10;
                                    if (n2 >= 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                return f;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                        }
                        n2 = n;
                    }
                    try {
                        f7 = n2 < pEYVS.length ? pEYVS[n] : (float)Math.pow(10.0, n);
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                    f3 = f7;
                    f6 = f * f3;
                    try {
                        try {
                            f5 = f6;
                            f4 = 0.0f;
                            if (nArray != null) break block12;
                            if (!(f5 >= f4)) break block13;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        f2 = (float)Math.floor(f6 + 0.5f);
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                f5 = f6;
                f4 = 0.5f;
            }
            f2 = (float)Math.ceil(f5 - f4);
        }
        float f8 = f2;
        return f8 / f3;
    }

    public static int[] csj(long l) {
        return mZ.csh(String.valueOf(l));
    }

    public static void csx(int[] nArray) {
        OCHuI = nArray;
    }

    public static int[] csy() {
        return OCHuI;
    }

    public static int[] csh(String string) {
        int[] nArray;
        block4: {
            long l = MaViA ^ 0x1D7B47171784L;
            int[] nArray2 = new int[string.length()];
            int[] nArray3 = mZ.csy();
            for (int i = 0; i < string.length(); ++i) {
                try {
                    nArray = nArray2;
                    if (nArray3 == null) {
                        nArray[i] = string.charAt(i);
                        if (nArray3 == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw mZ.csz(matchException);
                }
            }
            nArray = nArray2;
        }
        return nArray;
    }

    public static float csl(double d, double d2, double d3) {
        return (float)(d + (d2 - d) * d3);
    }

    public static int[] csf(int[] ... nArray) {
        Object object;
        block11: {
            int n;
            int[] nArray2;
            int n2;
            Object object2;
            block10: {
                long l = MaViA ^ 0x519724B7170EL;
                int n3 = 0;
                object2 = nArray;
                n2 = ((int[][])object2).length;
                nArray2 = mZ.csy();
                for (int i = 0; i < n2; ++i) {
                    int[] nArray3 = object2[i];
                    n = n3 + nArray3.length;
                    if (nArray2 == null) {
                        n3 = n;
                        if (nArray2 == null) continue;
                    }
                    break block10;
                }
                n = n3;
            }
            object2 = new int[n];
            n2 = 0;
            int[][] nArray4 = nArray;
            int n4 = nArray4.length;
            int n5 = 0;
            while (n5 < n4) {
                block12: {
                    int[] nArray5;
                    int[] nArray6 = nArray5 = nArray4[n5];
                    object = nArray6;
                    if (nArray2 != null) break block11;
                    int n6 = ((int[][])object).length;
                    for (int i = 0; i < n6; ++i) {
                        int n7 = nArray6[i];
                        try {
                            object2[n2] = (int[])n7;
                            ++n2;
                            if (nArray2 == null) {
                                if (nArray2 == null) continue;
                                break;
                            }
                            break block12;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                    }
                    ++n5;
                }
                if (nArray2 == null) continue;
            }
            object = object2;
        }
        try {
            if (iS.bwL() == null) {
                mZ.csx(new int[2]);
            }
        }
        catch (MatchException matchException) {
            throw mZ.csz(matchException);
        }
        return object;
    }

    private static MatchException csz(MatchException matchException) {
        return matchException;
    }

    public static float csp(float f, float f2, float f3, float f4) {
        return Math.min(Math.min(f, f2), Math.min(f3, f4));
    }

    private static int csC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = mZ.csB(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int csB(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3C7F;
        if (ENfKA[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = xHioO[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])QFlXv.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    QFlXv.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mZ", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mZ.ENfKA[n2] = n3;
        }
        return ENfKA[n2];
    }

    public static int csw(int[] nArray, int[] nArray2) {
        Object object;
        int n;
        block19: {
            long l = MaViA ^ 0x20757E7A6DC1L;
            int n2 = Math.min(nArray.length, nArray2.length);
            int[] nArray3 = mZ.csy();
            for (int i = 0; i < n2; ++i) {
                Object object2;
                int n3;
                block24: {
                    int n4;
                    int n5;
                    block22: {
                        block23: {
                            block20: {
                                block21: {
                                    n5 = nArray[i];
                                    n4 = nArray2[i];
                                    try {
                                        try {
                                            try {
                                                try {
                                                    n = n5;
                                                    object = mZ.csD("z", (int)16229, (long)(0x1AA29B4BAA2807B5L ^ l));
                                                    if (nArray3 != null) break block19;
                                                    if (nArray3 != null) break block20;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mZ.csz(matchException);
                                                }
                                                if (n < object) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw mZ.csz(matchException);
                                            }
                                            n3 = n5;
                                            object2 = mZ.csD("z", (int)8099, (long)(0x5A0D865EEB872770L ^ l));
                                            if (nArray3 != null) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw mZ.csz(matchException);
                                        }
                                        if (n3 > object2) break block21;
                                    }
                                    catch (MatchException matchException) {
                                        throw mZ.csz(matchException);
                                    }
                                    n5 += 32;
                                }
                                n3 = n4;
                                object2 = mZ.csD("z", (int)11981, (long)(0x2B4332B76A039618L ^ l));
                            }
                            try {
                                try {
                                    try {
                                        if (nArray3 != null) break block22;
                                        if (n3 < object2) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw mZ.csz(matchException);
                                    }
                                    n3 = n4;
                                    object2 = mZ.csD("z", (int)29813, (long)(0x5076BE94FFC04CA3L ^ l));
                                    if (nArray3 != null) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                if (n3 > object2) break block23;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                            n4 += 32;
                        }
                        n3 = n5;
                        object2 = n4;
                    }
                    try {
                        try {
                            if (nArray3 != null) break block24;
                            if (n3 == object2) continue;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        n3 = n5;
                        object2 = n4;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                return Integer.compare(n3, (int)object2);
            }
            n = nArray.length;
            object = nArray2.length;
        }
        return Integer.compare(n, object);
    }

    private static String csA(byte[] byArray) {
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

    public static double csr() {
        double d = (Double)rD.dlmvG.field_1690.method_42495().method_41753() * 0.6 + 0.2;
        return d * d * d * 8.0 * 0.15;
    }

    public static int csm(float f, float f2, double d) {
        return (int)Math.floor((double)f2 + (double)(f - f2) * class_3532.method_15350((double)d, (double)0.0, (double)1.0));
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mZ.class, "csC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
