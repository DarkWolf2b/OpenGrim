/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1294
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_304
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
import net.minecraft.class_1294;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_304;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.jg;
import sixtwo.mF;
import sixtwo.rD;

public class iX {
    private static mF jomCs;
    public static final class_304[] Ergzg;
    public static final class_304[] HpSlL;
    private static final long UWCYb;
    private static final long[] uATfM;
    private static final Integer[] arYfW;
    private static final Map gTDLH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                iX.UWCYb = gb.aYR(6647284026903975892L, -9119464849414617501L, MethodHandles.lookup().lookupClass()).a(244743953533058L);
                var11 = iX.UWCYb ^ 5648240925718L;
                iX.gTDLH = new HashMap<K, V>(13);
                var0_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var1_2 = 1; var1_2 < 8; ++var1_2) {
                    v2 = v2;
                    v2[var1_2] = (byte)(var11 << var1_2 * 8 >>> 56);
                }
                var0_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var6_3 = new long[6];
                var3_4 = 0;
                var4_5 = "\u009b\u00c3jq\u00b5\u00b4\u00c6\u00ba\u00e8\u00dd\u00f7\u0091Z\u00e2^w\u0011\u00bd\u0091w&\r\u0089>\u00fa\u0003\u00da\u00c2@g\u00e2\u00cf";
                var5_6 = "\u009b\u00c3jq\u00b5\u00b4\u00c6\u00ba\u00e8\u00dd\u00f7\u0091Z\u00e2^w\u0011\u00bd\u0091w&\r\u0089>\u00fa\u0003\u00da\u00c2@g\u00e2\u00cf".length();
                var2_7 = 0;
                while (true) {
                    var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                    v3 = var6_3;
                    v4 = var3_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    var4_5 = "!\u00ea\u00a2\u0000<+G\u00b5\u0011\u00e9\u00c8\u0004\u00a0\fV\u00a3";
                    var5_6 = "!\u00ea\u00a2\u0000<+G\u00b5\u0011\u00e9\u00c8\u0004\u00a0\fV\u00a3".length();
                    var2_7 = 0;
                    while (true) {
                        var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                        v3 = var6_3;
                        v4 = var3_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
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
                    if (var2_7 < var5_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var0_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
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
        iX.uATfM = var6_3;
        iX.arYfW = new Integer[6];
        iX.jomCs = new mF(false, false, false, false);
        iX.Ergzg = new class_304[]{rD.dlmvG.field_1690.field_1894, rD.dlmvG.field_1690.field_1881, rD.dlmvG.field_1690.field_1849, rD.dlmvG.field_1690.field_1913};
        v8 = new class_304[iX.bxW("f", (int)28084, (long)(756953401922601219L ^ var11))];
        v8[0] = rD.dlmvG.field_1690.field_1894;
        v8[1] = rD.dlmvG.field_1690.field_1881;
        v8[2] = rD.dlmvG.field_1690.field_1913;
        v8[3] = rD.dlmvG.field_1690.field_1849;
        v8[4] = rD.dlmvG.field_1690.field_1903;
        v8[5] = rD.dlmvG.field_1690.field_1832;
        v8[iX.bxW("f", (int)9070, (long)(2424658367421812698L ^ var11))] = rD.dlmvG.field_1690.field_1867;
        iX.HpSlL = v8;
    }

    public static void bxF(mF mF2) {
        mF mF3;
        block4: {
            block5: {
                long l = UWCYb ^ 0x1598EE66F839L;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        mF3 = mF2;
                        if (stringArray == null) break block4;
                        if (mF3 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                    mF3 = new mF(false, false, false, false);
                    break block4;
                }
                catch (MatchException matchException) {
                    throw iX.bxT(matchException);
                }
            }
            mF3 = mF2;
        }
        jomCs = mF3;
    }

    public static double bxE() {
        class_243 class_2432 = rD.dlmvG.field_1724.method_18798();
        return Math.hypot(class_2432.field_1352, class_2432.field_1350);
    }

    public static boolean bxD(class_1297 class_12972) {
        double d;
        block2: {
            block3: {
                long l = UWCYb ^ 0x41248C605FF7L;
                String[] stringArray = jf.bBe();
                try {
                    double d2 = class_12972.method_18798().method_1027() - 0.08;
                    d = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                    if (stringArray == null) break block2;
                    if (d < 0) break block3;
                }
                catch (MatchException matchException) {
                    throw iX.bxT(matchException);
                }
                d = 1.0;
                break block2;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    public static boolean bxC() {
        float f;
        block6: {
            block8: {
                block7: {
                    long l = UWCYb ^ 0x2C295F495065L;
                    class_241 class_2412 = rD.dlmvG.field_1724.field_3913.method_3128();
                    String[] stringArray = jf.bBe();
                    try {
                        try {
                            try {
                                float f2 = class_2412.field_1343 - 0.0f;
                                f = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                                if (stringArray == null) break block6;
                                if (f != false) break block7;
                            }
                            catch (MatchException matchException) {
                                throw iX.bxT(matchException);
                            }
                            float f3 = class_2412.field_1342 - 0.0f;
                            f = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (stringArray == null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        if (f == false) break block8;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                }
                f = 1.0f;
                break block6;
            }
            f = 0.0f;
        }
        return (boolean)f;
    }

    private static MatchException bxT(MatchException matchException) {
        return matchException;
    }

    public static mF bxG() {
        return jomCs;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static class_241 bxO(double var0) {
        block27: {
            block28: {
                block36: {
                    block33: {
                        block32: {
                            block34: {
                                block35: {
                                    block29: {
                                        block30: {
                                            block31: {
                                                var2_1 = iX.UWCYb ^ 122557391465579L;
                                                var5_2 = rD.dlmvG.field_1724.field_3913.method_3128();
                                                var6_3 = var5_2.field_1342;
                                                var8_4 = var5_2.field_1343;
                                                var10_5 = rD.dlX().dbC().cGI();
                                                var4_6 = jf.bBe();
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    v0 = var6_3;
                                                                    if (var4_6 == null) break block27;
                                                                    if (v0 == 0.0) break block28;
                                                                }
                                                                catch (MatchException v1) {
                                                                    throw iX.bxT(v1);
                                                                }
                                                                cfr_temp_0 = var8_4 - 0.0;
                                                                v2 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 > 0.0 ? 1 : -1);
                                                                if (var4_6 == null) break block29;
                                                            }
                                                            catch (MatchException v3) {
                                                                throw iX.bxT(v3);
                                                            }
                                                            if (v2 > 0) {
                                                            }
                                                            ** GOTO lbl48
                                                        }
                                                        catch (MatchException v4) {
                                                            throw iX.bxT(v4);
                                                        }
                                                        v5 = var10_5;
                                                        cfr_temp_1 = var6_3 - 0.0;
                                                        v6 /* !! */  = cfr_temp_1 == 0.0 ? 0 : (cfr_temp_1 > 0.0 ? 1 : -1);
                                                        if (var4_6 == null) break block30;
                                                    }
                                                    catch (MatchException v7) {
                                                        throw iX.bxT(v7);
                                                    }
                                                    if (v6 /* !! */  <= 0) break block31;
                                                }
                                                catch (MatchException v8) {
                                                    throw iX.bxT(v8);
                                                }
                                                v6 /* !! */  = (double)iX.bxW("f", (int)26366, (long)(5290507197931747894L ^ var2_1));
                                                break block30;
                                            }
                                            v6 /* !! */  = (double)iX.bxW("f", (int)3313, (long)(3844900860821475388L ^ var2_1));
                                        }
                                        var10_5 = v5 + (float)v6 /* !! */ ;
                                        try {
                                            if (var4_6 != null) break block32;
lbl48:
                                            // 2 sources

                                            v2 = (cfr_temp_2 = var8_4 - 0.0) == 0.0 ? 0 : (cfr_temp_2 < 0.0 ? -1 : 1);
                                        }
                                        catch (MatchException v9) {
                                            throw iX.bxT(v9);
                                        }
                                    }
                                    try {
                                        try {
                                            try {
                                                if (var4_6 == null) break block33;
                                                if (v2 >= 0) break block32;
                                            }
                                            catch (MatchException v10) {
                                                throw iX.bxT(v10);
                                            }
                                            v11 = var10_5;
                                            cfr_temp_3 = var6_3 - 0.0;
                                            v12 /* !! */  = cfr_temp_3 == 0.0 ? 0 : (cfr_temp_3 > 0.0 ? 1 : -1);
                                            if (var4_6 == null) break block34;
                                        }
                                        catch (MatchException v13) {
                                            throw iX.bxT(v13);
                                        }
                                        if (v12 /* !! */  <= 0) break block35;
                                    }
                                    catch (MatchException v14) {
                                        throw iX.bxT(v14);
                                    }
                                    v12 /* !! */  = (double)iX.bxW("f", (int)14791, (long)(2611731505434764556L ^ var2_1));
                                    break block34;
                                }
                                v12 /* !! */  = (double)iX.bxW("f", (int)21932, (long)(920338925348800864L ^ var2_1));
                            }
                            var10_5 = v11 + (float)v12 /* !! */ ;
                        }
                        var8_4 = 0.0;
                        cfr_temp_4 = var6_3 - 0.0;
                        v2 = cfr_temp_4 == 0.0 ? 0 : (cfr_temp_4 > 0.0 ? 1 : -1);
                    }
                    try {
                        if (var4_6 == null) break block36;
                        if (v2 > 0) {
                        }
                        ** GOTO lbl94
                    }
                    catch (MatchException v15) {
                        throw iX.bxT(v15);
                    }
                    var6_3 = 1.0;
                    try {
                        try {
                            if (var4_6 != null) break block28;
lbl94:
                            // 2 sources

                            v0 = var6_3;
                            if (var4_6 == null) break block27;
                        }
                        catch (MatchException v16) {
                            throw iX.bxT(v16);
                        }
                        cfr_temp_5 = v0 - 0.0;
                        v2 = cfr_temp_5 == 0.0 ? 0 : (cfr_temp_5 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException v17) {
                        throw iX.bxT(v17);
                    }
                }
                if (v2 < 0) {
                    var6_3 = -1.0;
                }
            }
            v0 = Math.sin(Math.toRadians(var10_5 + 90.0f));
        }
        var11_7 = v0;
        var13_8 = Math.cos(Math.toRadians(var10_5 + 90.0f));
        var15_9 = var6_3 * var0 * var13_8 + var8_4 * var0 * var11_7;
        var17_10 = var6_3 * var0 * var11_7 - var8_4 * var0 * var13_8;
        return new class_241((float)var15_9, (float)var17_10);
    }

    public static boolean bxH(mF mF2) {
        boolean bl;
        block10: {
            block9: {
                block11: {
                    mF mF3;
                    String[] stringArray;
                    block8: {
                        long l = UWCYb ^ 0x334443BB31EFL;
                        stringArray = jf.bBe();
                        try {
                            mF3 = mF2;
                            if (stringArray == null) break block8;
                            if (mF3 == null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        mF3 = mF2;
                    }
                    try {
                        try {
                            try {
                                bl = mF3.cnH() ^ mF2.cnI();
                                if (stringArray == null) break block10;
                                if (bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw iX.bxT(matchException);
                            }
                            bl = mF2.cnJ() ^ mF2.cnK();
                            if (stringArray == null) break block10;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        if (!bl) break block9;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                }
                bl = true;
                break block10;
            }
            bl = false;
        }
        return bl;
    }

    public static float bxS() {
        double d = Math.sqrt(Math.pow(rD.dlmvG.field_1724.method_23317() - rD.dlmvG.field_1724.field_6038, 2.0) + Math.pow(rD.dlmvG.field_1724.method_23318() - rD.dlmvG.field_1724.field_5971, 2.0) + Math.pow(rD.dlmvG.field_1724.method_23321() - rD.dlmvG.field_1724.field_5989, 2.0));
        float f = (float)(d * 20.0);
        return (float)Math.round(f * 10.0f) / 10.0f;
    }

    public static class_243 bxJ(class_243 class_2432, double d) {
        return iX.bxK(class_2432, d, 1.0);
    }

    public static class_243 bxI(class_243 class_2432) {
        return iX.bxJ(class_2432, Math.hypot(class_2432.field_1352, class_2432.field_1350));
    }

    private static int bxV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = iX.bxU(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite bxW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean bxM(class_1657 class_16572) {
        boolean bl;
        block26: {
            block28: {
                block27: {
                    long l = UWCYb ^ 0x1FF81C8E96B0L;
                    String[] stringArray = jf.bBe();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        bl = class_16572.method_6059(class_1294.field_5919);
                                                                        if (stringArray == null) break block26;
                                                                        if (bl) break block27;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw iX.bxT(matchException);
                                                                    }
                                                                    bl = class_16572.method_6059(class_1294.field_5902);
                                                                    if (stringArray == null) break block26;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw iX.bxT(matchException);
                                                                }
                                                                if (bl) break block27;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw iX.bxT(matchException);
                                                            }
                                                            bl = jg.bBs((class_1309)class_16572);
                                                            if (stringArray == null) break block26;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw iX.bxT(matchException);
                                                        }
                                                        if (bl) break block27;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw iX.bxT(matchException);
                                                    }
                                                    bl = class_16572.method_5869();
                                                    if (stringArray == null) break block26;
                                                }
                                                catch (MatchException matchException) {
                                                    throw iX.bxT(matchException);
                                                }
                                                if (bl) break block27;
                                            }
                                            catch (MatchException matchException) {
                                                throw iX.bxT(matchException);
                                            }
                                            bl = class_16572.method_5771();
                                            if (stringArray == null) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw iX.bxT(matchException);
                                        }
                                        if (bl) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw iX.bxT(matchException);
                                    }
                                    bl = class_16572.method_6101();
                                    if (stringArray == null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw iX.bxT(matchException);
                                }
                                if (bl) break block27;
                            }
                            catch (MatchException matchException) {
                                throw iX.bxT(matchException);
                            }
                            bl = class_16572.method_31549().field_7479;
                            if (stringArray == null) break block26;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        if (!bl) break block28;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                }
                bl = true;
                break block26;
            }
            bl = false;
        }
        return bl;
    }

    public static float bxQ() {
        return iX.bxR(jomCs);
    }

    public static class_243 bxL(class_243 class_2432, double d, double d2, mF mF2) {
        long l = UWCYb ^ 0x7A0F7F57740EL;
        try {
            if (!iX.bxH(mF2)) {
                return new class_243(0.0, class_2432.field_1351, 0.0);
            }
        }
        catch (MatchException matchException) {
            throw iX.bxT(matchException);
        }
        double d3 = 1.0 - d2;
        double d4 = class_2432.field_1352 * d3;
        double d5 = class_2432.field_1350 * d3;
        double d6 = d * d2;
        double d7 = Math.toRadians(iX.bxR(mF2));
        double d8 = d4 - Math.sin(d7) * d6;
        double d9 = d5 + Math.cos(d7) * d6;
        return new class_243(d8, class_2432.field_1351, d9);
    }

    /*
     * Unable to fully structure code
     */
    public static float bxR(mF var0) {
        block37: {
            block36: {
                block34: {
                    block35: {
                        block31: {
                            block33: {
                                block32: {
                                    block30: {
                                        var1_1 = iX.UWCYb ^ 30406572095719L;
                                        var4_2 = rD.dlmvG.field_1724.method_36454();
                                        var3_3 = jf.bBe();
                                        try {
                                            try {
                                                try {
                                                    v0 = var0.cnI();
                                                    if (var3_3 == null) break block30;
                                                    if (v0) {
                                                    }
                                                    ** GOTO lbl28
                                                }
                                                catch (MatchException v1) {
                                                    throw iX.bxT(v1);
                                                }
                                                v0 = var0.cnH();
                                                if (var3_3 == null) break block30;
                                            }
                                            catch (MatchException v2) {
                                                throw iX.bxT(v2);
                                            }
                                            if (!v0) {
                                            }
                                            ** GOTO lbl28
                                        }
                                        catch (MatchException v3) {
                                            throw iX.bxT(v3);
                                        }
                                        var4_2 += 180.0f;
                                        var5_4 = -0.5f;
                                        try {
                                            if (var3_3 != null) break block31;
lbl28:
                                            // 3 sources

                                            v0 = var0.cnH();
                                        }
                                        catch (MatchException v4) {
                                            throw iX.bxT(v4);
                                        }
                                    }
                                    try {
                                        try {
                                            if (var3_3 == null) break block32;
                                            if (!v0) break block33;
                                        }
                                        catch (MatchException v5) {
                                            throw iX.bxT(v5);
                                        }
                                        v0 = var0.cnI();
                                    }
                                    catch (MatchException v6) {
                                        throw iX.bxT(v6);
                                    }
                                }
                                if (v0) break block33;
                                var5_4 = 0.5f;
                                if (var3_3 != null) break block31;
                            }
                            var5_4 = 1.0f;
                        }
                        try {
                            try {
                                try {
                                    v7 = var0.cnJ();
                                    if (var3_3 == null) break block34;
                                    if (!v7) break block35;
                                }
                                catch (MatchException v8) {
                                    throw iX.bxT(v8);
                                }
                                v7 = var0.cnK();
                                if (var3_3 == null) break block34;
                            }
                            catch (MatchException v9) {
                                throw iX.bxT(v9);
                            }
                            if (v7) break block35;
                        }
                        catch (MatchException v10) {
                            throw iX.bxT(v10);
                        }
                        var4_2 -= 90.0f * var5_4;
                    }
                    v7 = var0.cnK();
                }
                try {
                    try {
                        if (var3_3 == null) break block36;
                        if (!v7) break block37;
                    }
                    catch (MatchException v11) {
                        throw iX.bxT(v11);
                    }
                    v7 = var0.cnJ();
                }
                catch (MatchException v12) {
                    throw iX.bxT(v12);
                }
            }
            if (!v7) {
                var4_2 += 90.0f * var5_4;
            }
        }
        return var4_2;
    }

    public static class_243 bxK(class_243 class_2432, double d, double d2) {
        return iX.bxL(class_2432, d, d2, jomCs);
    }

    /*
     * Unable to fully structure code
     */
    public static double bxP(boolean var0) {
        block22: {
            block23: {
                block20: {
                    block21: {
                        block19: {
                            block18: {
                                block17: {
                                    block15: {
                                        block16: {
                                            var1_1 = iX.UWCYb ^ 7187022147685L;
                                            var4_2 = rD.dlX().dbC().cGI();
                                            var3_3 = jf.bBe();
                                            try {
                                                v0 = rD.dlmvG.field_1724.field_6250;
                                                if (var3_3 == null) break block15;
                                                if (!(v0 < 0.0f)) break block16;
                                            }
                                            catch (MatchException v1) {
                                                throw iX.bxT(v1);
                                            }
                                            var4_2 += 180.0f;
                                        }
                                        v0 = 1.0f;
                                    }
                                    var5_4 = v0;
                                    try {
                                        cfr_temp_0 = rD.dlmvG.field_1724.field_6250 - 0.0f;
                                        v2 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 < 0.0f ? -1 : 1);
                                        if (var3_3 == null) break block17;
                                        if (v2 < 0) {
                                        }
                                        ** GOTO lbl28
                                    }
                                    catch (MatchException v3) {
                                        throw iX.bxT(v3);
                                    }
                                    var5_4 = -0.5f;
                                    try {
                                        if (var3_3 != null) break block18;
lbl28:
                                        // 2 sources

                                        v2 = (cfr_temp_1 = rD.dlmvG.field_1724.field_6250 - 0.0f) == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                    }
                                    catch (MatchException v4) {
                                        throw iX.bxT(v4);
                                    }
                                }
                                try {
                                    if (var3_3 == null) break block19;
                                    if (v2 <= 0) break block18;
                                }
                                catch (MatchException v5) {
                                    throw iX.bxT(v5);
                                }
                                var5_4 = 0.5f;
                            }
                            v2 = (cfr_temp_2 = rD.dlmvG.field_1724.field_6212 - 0.0f) == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                        }
                        try {
                            if (var3_3 == null) break block20;
                            if (v2 <= 0) break block21;
                        }
                        catch (MatchException v6) {
                            throw iX.bxT(v6);
                        }
                        var4_2 -= 90.0f * var5_4;
                    }
                    v2 = (cfr_temp_3 = rD.dlmvG.field_1724.field_6212 - 0.0f) == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                }
                try {
                    if (var3_3 == null) break block22;
                    if (v2 >= 0) break block23;
                }
                catch (MatchException v7) {
                    throw iX.bxT(v7);
                }
                var4_2 += 90.0f * var5_4;
            }
            v2 = (float)var0;
        }
        try {
            v8 = v2 != false ? Math.toRadians(var4_2) : (double)var4_2;
        }
        catch (MatchException v9) {
            throw iX.bxT(v9);
        }
        return v8;
    }

    public static void bxN(double d) {
        boolean bl;
        block2: {
            block3: {
                long l = UWCYb ^ 0x201010968E48L;
                String[] stringArray = jf.bBe();
                try {
                    bl = iX.bxC();
                    if (stringArray == null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw iX.bxT(matchException);
                }
                return;
            }
            bl = true;
        }
        double d2 = iX.bxP(bl);
        rD.dlmvG.field_1724.method_18800(-Math.sin(d2) * d, rD.dlmvG.field_1724.method_18798().field_1351, Math.cos(d2) * d);
    }

    private static int bxU(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x705A;
        if (arYfW[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = uATfM[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])gTDLH.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    gTDLH.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iX", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            iX.arYfW[n2] = n3;
        }
        return arYfW[n2];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(iX.class, "bxV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
