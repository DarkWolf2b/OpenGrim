/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
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

    public static float csn(float f2, float f3, float f4) {
        return (float)Math.floor(f3 + (f2 - f3) * MathHelper.clamp((float)f4, (float)0.0f, (float)1.0f));
    }

    public static float csq(float f2, float f3, float f4, float f5) {
        return Math.max(Math.max(f2, f3), Math.max(f4, f5));
    }

    public static long cst(long l2, mT mT2) {
        return mZ.csv(l2, mT2.cpF());
    }

    public static double csu(double d2) {
        double d3;
        block2: {
            block3: {
                long l2 = MaViA ^ 0x606081571F87L;
                d2 %= 360.0;
                int[] nArray = mZ.csy();
                try {
                    d3 = d2;
                    if (nArray != null) break block2;
                    if (!(d3 < 0.0)) break block3;
                }
                catch (MatchException matchException) {
                    throw mZ.csz(matchException);
                }
                d2 += 360.0;
            }
            d3 = d2;
        }
        return d3;
    }

    public static byte[] csg(byte[] ... byArray) {
        byte[] byArray2;
        block8: {
            int n2;
            int[] nArray;
            block7: {
                long l2 = MaViA ^ 0x10E75FC22FF7L;
                int n3 = 0;
                byte[][] object2 = byArray;
                nArray = mZ.csy();
                for (byte[] n5 : object2) {
                    n2 = n3 + n5.length;
                    if (nArray == null) {
                        n3 = n2;
                        if (nArray == null) continue;
                        iS.bwK("EIqNt");
                        break;
                    }
                    break block7;
                }
                n2 = n3;
            }
            byte[] byArray3 = new byte[n2];
            int n3 = 0;
            byte[][] byArray4 = byArray;
            int n4 = byArray4.length;
            int n5 = 0;
            while (n5 < n4) {
                block9: {
                    byte[] byArray5;
                    byte[] byArray6 = byArray5 = byArray4[n5];
                    byArray2 = byArray6;
                    if (nArray != null) break block8;
                    int n6 = byArray2.length;
                    for (int i2 = 0; i2 < n6; ++i2) {
                        byte by2 = byArray6[i2];
                        try {
                            byArray3[n3] = by2;
                            ++n3;
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
                    ++n5;
                }
                if (nArray == null) continue;
            }
            byArray2 = byArray3;
        }
        return byArray2;
    }

    public static long csv(long l2, long l3) {
        long l4 = MaViA ^ 0x1D95AF69C1CCL;
        return (l2 - l3) / IrWKJ;
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
                    long l2 = MaViA ^ 0x1C81C3DF63F2L;
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
                boolean bl2 = stringArray.length;
                if (nArray != null) return bl2;
                if (!bl2) return false;
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

    public static Vec3d csk(Vec3d vec3d, Vec3d vec3d2, float f2) {
        double d2 = MathHelper.lerp((double)f2, (double)vec3d.x, (double)vec3d2.x);
        double d3 = MathHelper.lerp((double)f2, (double)vec3d.y, (double)vec3d2.y);
        double d4 = MathHelper.lerp((double)f2, (double)vec3d.z, (double)vec3d2.z);
        return new Vec3d(d2, d3, d4);
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

    public static int[] csi(int n2) {
        return mZ.csh(String.valueOf(n2));
    }

    public static String csd(byte[] byArray) {
        String string;
        block8: {
            long l2 = MaViA ^ 0x2362E9612D9DL;
            StringBuilder stringBuilder = new StringBuilder(2 * byArray.length);
            byte[] byArray2 = byArray;
            int n2 = byArray2.length;
            int n3 = 0;
            int[] nArray = mZ.csy();
            while (n3 < n2) {
                block7: {
                    String string2;
                    block9: {
                        byte by2 = byArray2[n3];
                        string2 = Integer.toHexString(mZ.csD("z", (int)29103, (long)(0x3C6421B98AC18921L ^ l2)) & by2);
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
                            stringBuilder.append((char)mZ.csD("z", (int)4620, (long)(0x2DE1996F6703EA88L ^ l2)));
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                    }
                    stringBuilder.append(string2);
                    ++n3;
                }
                if (nArray == null) continue;
            }
            string = stringBuilder.toString();
        }
        return string;
    }

    public static String cse(int[] nArray) {
        long l2 = MaViA ^ 0x27A5D18E3575L;
        StringBuilder stringBuilder = new StringBuilder();
        for (int n2 : nArray) {
            stringBuilder.append((char)n2);
        }
        return stringBuilder.toString();
    }

    public static double cso(double d2, double d3, double d4, double d5, double d6, double d7) {
        double d8 = d5 - d2;
        double d9 = d6 - d3;
        double d10 = d7 - d4;
        return Math.sqrt(d8 * d8 + d9 * d9 + d10 * d10);
    }

    public static double csb(double d2, int n2) {
        double d3;
        double d4;
        block14: {
            double d5;
            double d6;
            block12: {
                double d7;
                block13: {
                    double d8;
                    int n3;
                    int[] nArray;
                    block10: {
                        block11: {
                            long l2 = MaViA ^ 0x3F2DAFCDE9BBL;
                            nArray = mZ.csy();
                            try {
                                try {
                                    n3 = n2;
                                    if (nArray != null) break block10;
                                    if (n3 >= 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                return d2;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                        }
                        n3 = n2;
                    }
                    try {
                        d8 = n3 < qApXy.length ? qApXy[n2] : Math.pow(10.0, n2);
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                    d4 = d8;
                    d7 = d2 * d4;
                    try {
                        try {
                            d6 = d7;
                            d5 = 0.0;
                            if (nArray != null) break block12;
                            if (!(d6 >= d5)) break block13;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        d3 = Math.floor(d7 + 0.5);
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                d6 = d7;
                d5 = 0.5;
            }
            d3 = Math.ceil(d6 - d5);
        }
        double d9 = d3;
        return d9 / d4;
    }

    public static float csc(float f2, int n2) {
        float f3;
        float f4;
        block14: {
            float f5;
            float f6;
            block12: {
                float f7;
                block13: {
                    float f8;
                    int n3;
                    int[] nArray;
                    block10: {
                        block11: {
                            long l2 = MaViA ^ 0x75DF2D7199EAL;
                            nArray = mZ.csy();
                            try {
                                try {
                                    n3 = n2;
                                    if (nArray != null) break block10;
                                    if (n3 >= 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                return f2;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                        }
                        n3 = n2;
                    }
                    try {
                        f8 = n3 < pEYVS.length ? pEYVS[n2] : (float)Math.pow(10.0, n2);
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                    f4 = f8;
                    f7 = f2 * f4;
                    try {
                        try {
                            f6 = f7;
                            f5 = 0.0f;
                            if (nArray != null) break block12;
                            if (!(f6 >= f5)) break block13;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        f3 = (float)Math.floor(f7 + 0.5f);
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                f6 = f7;
                f5 = 0.5f;
            }
            f3 = (float)Math.ceil(f6 - f5);
        }
        float f9 = f3;
        return f9 / f4;
    }

    public static int[] csj(long l2) {
        return mZ.csh(String.valueOf(l2));
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
            long l2 = MaViA ^ 0x1D7B47171784L;
            int[] nArray2 = new int[string.length()];
            int[] nArray3 = mZ.csy();
            for (int i2 = 0; i2 < string.length(); ++i2) {
                try {
                    nArray = nArray2;
                    if (nArray3 == null) {
                        nArray[i2] = string.charAt(i2);
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

    public static float csl(double d2, double d3, double d4) {
        return (float)(d2 + (d3 - d2) * d4);
    }

    public static int[] csf(int[] ... nArray) {
        Object object;
        block11: {
            int n2;
            int[] nArray2;
            int n3;
            Object object2;
            block10: {
                long l2 = MaViA ^ 0x519724B7170EL;
                int n4 = 0;
                object2 = nArray;
                n3 = ((int[][])object2).length;
                nArray2 = mZ.csy();
                for (int i2 = 0; i2 < n3; ++i2) {
                    int[] nArray3 = object2[i2];
                    n2 = n4 + nArray3.length;
                    if (nArray2 == null) {
                        n4 = n2;
                        if (nArray2 == null) continue;
                    }
                    break block10;
                }
                n2 = n4;
            }
            object2 = new int[n2];
            n3 = 0;
            int[][] nArray4 = nArray;
            int n5 = nArray4.length;
            int n6 = 0;
            while (n6 < n5) {
                block12: {
                    int[] nArray5;
                    int[] nArray6 = nArray5 = nArray4[n6];
                    object = nArray6;
                    if (nArray2 != null) break block11;
                    int n7 = ((int[][])object).length;
                    for (int i3 = 0; i3 < n7; ++i3) {
                        int n8 = nArray6[i3];
                        try {
                            object2[n3] = (int[])n8;
                            ++n3;
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
                    ++n6;
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

    public static float csp(float f2, float f3, float f4, float f5) {
        return Math.min(Math.min(f2, f3), Math.min(f4, f5));
    }

    private static int csC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mZ.csB(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int csB(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3C7F;
        if (ENfKA[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = xHioO[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])QFlXv.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    QFlXv.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mZ.ENfKA[n3] = n4;
        }
        return ENfKA[n3];
    }

    public static int csw(int[] nArray, int[] nArray2) {
        Object object;
        int n2;
        block19: {
            long l2 = MaViA ^ 0x20757E7A6DC1L;
            int n3 = Math.min(nArray.length, nArray2.length);
            int[] nArray3 = mZ.csy();
            for (int i2 = 0; i2 < n3; ++i2) {
                Object object2;
                int n4;
                block24: {
                    int n5;
                    int n6;
                    block22: {
                        block23: {
                            block20: {
                                block21: {
                                    n6 = nArray[i2];
                                    n5 = nArray2[i2];
                                    try {
                                        try {
                                            try {
                                                try {
                                                    n2 = n6;
                                                    object = mZ.csD("z", (int)16229, (long)(0x1AA29B4BAA2807B5L ^ l2));
                                                    if (nArray3 != null) break block19;
                                                    if (nArray3 != null) break block20;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mZ.csz(matchException);
                                                }
                                                if (n2 < object) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw mZ.csz(matchException);
                                            }
                                            n4 = n6;
                                            object2 = mZ.csD("z", (int)8099, (long)(0x5A0D865EEB872770L ^ l2));
                                            if (nArray3 != null) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw mZ.csz(matchException);
                                        }
                                        if (n4 > object2) break block21;
                                    }
                                    catch (MatchException matchException) {
                                        throw mZ.csz(matchException);
                                    }
                                    n6 += 32;
                                }
                                n4 = n5;
                                object2 = mZ.csD("z", (int)11981, (long)(0x2B4332B76A039618L ^ l2));
                            }
                            try {
                                try {
                                    try {
                                        if (nArray3 != null) break block22;
                                        if (n4 < object2) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw mZ.csz(matchException);
                                    }
                                    n4 = n5;
                                    object2 = mZ.csD("z", (int)29813, (long)(0x5076BE94FFC04CA3L ^ l2));
                                    if (nArray3 != null) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw mZ.csz(matchException);
                                }
                                if (n4 > object2) break block23;
                            }
                            catch (MatchException matchException) {
                                throw mZ.csz(matchException);
                            }
                            n5 += 32;
                        }
                        n4 = n6;
                        object2 = n5;
                    }
                    try {
                        try {
                            if (nArray3 != null) break block24;
                            if (n4 == object2) continue;
                        }
                        catch (MatchException matchException) {
                            throw mZ.csz(matchException);
                        }
                        n4 = n6;
                        object2 = n5;
                    }
                    catch (MatchException matchException) {
                        throw mZ.csz(matchException);
                    }
                }
                return Integer.compare(n4, (int)object2);
            }
            n2 = nArray.length;
            object = nArray2.length;
        }
        return Integer.compare(n2, object);
    }

    private static String csA(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    public static double csr() {
        double d2 = (Double)rD.dlmvG.options.getMouseSensitivity().getValue() * 0.6 + 0.2;
        return d2 * d2 * d2 * 8.0 * 0.15;
    }

    public static int csm(float f2, float f3, double d2) {
        return (int)Math.floor((double)f3 + (double)(f2 - f3) * MathHelper.clamp((double)d2, (double)0.0, (double)1.0));
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

