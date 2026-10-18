/*
 * Decompiled with CFR 0.152.
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
import sixtwo.gb;
import sixtwo.mZ;

public class mX {
    private static final long nacTO;
    private static final long[] mOsSp;
    private static final Integer[] KNTgs;
    private static final Map XzTuG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                mX.nacTO = gb.aYR(5558789182704723956L, -7768098523006838707L, MethodHandles.lookup().lookupClass()).a(158746631795078L);
                mX.XzTuG = new HashMap<K, V>(13);
                var0 = mX.nacTO ^ 121608516676103L;
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
                var8_3 = new long[7];
                var5_4 = 0;
                var6_5 = "\u00d4v\u0096\u0007\u00d6\u008e1\u008f\u0016\u00a9i}\u0012\u0012x\u00c4\u00b2\u009a+\u000b|v\u00d6\u00d0\u00bf\u00d4\u008f`#\u000e\u00c180\u00b5\u00b7w\u00d7\u00d4\u00cbR";
                var7_6 = "\u00d4v\u0096\u0007\u00d6\u008e1\u008f\u0016\u00a9i}\u0012\u0012x\u00c4\u00b2\u009a+\u000b|v\u00d6\u00d0\u00bf\u00d4\u008f`#\u000e\u00c180\u00b5\u00b7w\u00d7\u00d4\u00cbR".length();
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
                    var6_5 = "^\u00f2V\u00ac/\u001b6\u00df\u0082\u00ef\u00e4\u00b4Yj0\u0094";
                    var7_6 = "^\u00f2V\u00ac/\u001b6\u00df\u0082\u00ef\u00e4\u00b4Yj0\u0094".length();
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
        mX.mOsSp = var8_3;
        mX.KNTgs = new Integer[7];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static int crC(int[] nArray, int[] nArray2) {
        int n2;
        int[] nArray3;
        long l2;
        block30: {
            int[] nArray4;
            int[] nArray5;
            block31: {
                block28: {
                    block29: {
                        int[] nArray6;
                        block26: {
                            block27: {
                                int[] nArray7;
                                block25: {
                                    block24: {
                                        l2 = nacTO ^ 0x189535885EEDL;
                                        nArray3 = mZ.csy();
                                        try {
                                            nArray7 = nArray;
                                            if (nArray3 != null) break block24;
                                            if (nArray7 == null) return 0;
                                        }
                                        catch (MatchException matchException) {
                                            throw mX.crK(matchException);
                                        }
                                        nArray7 = nArray2;
                                    }
                                    try {
                                        if (nArray3 != null) break block25;
                                        if (nArray7 == null) return 0;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                    nArray7 = nArray;
                                }
                                try {
                                    try {
                                        try {
                                            try {
                                                int n3 = nArray7.length;
                                                if (nArray3 != null) return n3;
                                                if (n3 == 0) return 0;
                                            }
                                            catch (MatchException matchException) {
                                                throw mX.crK(matchException);
                                            }
                                            nArray6 = nArray2;
                                            if (nArray3 != null) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw mX.crK(matchException);
                                        }
                                        if (nArray6.length != 0) break block27;
                                        return 0;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                            }
                            nArray6 = mX.crD(nArray);
                        }
                        nArray5 = nArray6;
                        nArray4 = mX.crD(nArray2);
                        try {
                            try {
                                n2 = mX.crE(nArray5, nArray4);
                                if (nArray3 != null) break block28;
                                if (n2 == 0) break block29;
                                return (int)mX.crN("c", (int)13601, (long)(0xED46192F4D088D7L ^ l2));
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    n2 = mX.crF(nArray4, nArray5);
                }
                try {
                    try {
                        if (nArray3 != null) break block30;
                        if (n2 == 0) break block31;
                        return (int)mX.crN("c", (int)16472, (long)(0x6B32C82F369DFDA8L ^ l2));
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw mX.crK(matchException);
                }
            }
            n2 = mX.crG(nArray4, nArray5);
        }
        int n4 = n2;
        try {
            try {
                int n5 = n4;
                if (nArray3 != null) return n5;
                if (n5 == -1) return 0;
                return (int)(mX.crN("c", (int)23280, (long)(0x5E78D3ADC04BE705L ^ l2)) - n4);
            }
            catch (MatchException matchException) {
                throw mX.crK(matchException);
            }
        }
        catch (MatchException matchException) {
            throw mX.crK(matchException);
        }
    }

    private static MatchException crK(MatchException matchException) {
        return matchException;
    }

    public static int[] crD(int[] nArray) {
        int[] nArray2;
        block7: {
            long l2 = nacTO ^ 0x176C1CAC20BAL;
            int[] nArray3 = new int[nArray.length];
            int n2 = 0;
            int[] nArray4 = mZ.csy();
            while (n2 < nArray.length) {
                block8: {
                    int n3;
                    block9: {
                        nArray2 = nArray;
                        if (nArray4 != null) break block7;
                        n3 = nArray2[n2];
                        try {
                            try {
                                try {
                                    if (nArray4 != null) break block8;
                                    if (n3 < mX.crN("c", (int)31903, (long)(0x76AACB2685143F3AL ^ l2))) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n3 > mX.crN("c", (int)24501, (long)(0x5A6DC1B2322F9C11L ^ l2))) break block9;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            n3 += 32;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    nArray3[n2] = n3;
                    ++n2;
                }
                if (nArray4 == null) continue;
            }
            nArray2 = nArray3;
        }
        return nArray2;
    }

    public static boolean crE(int[] nArray, int[] nArray2) {
        int n2;
        block13: {
            int n3;
            int[] nArray3;
            block11: {
                int n4;
                block12: {
                    long l2 = nacTO ^ 0x2A6013EB2966L;
                    nArray3 = mZ.csy();
                    try {
                        try {
                            n4 = nArray.length;
                            if (nArray3 != null) break block11;
                            if (n4 == nArray2.length) break block12;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                }
                n4 = n3 = 0;
            }
            while (n3 < nArray.length) {
                block15: {
                    boolean bl2;
                    block14: {
                        try {
                            try {
                                try {
                                    n2 = nArray[n3];
                                    if (nArray3 != null) break block13;
                                    if (nArray3 != null) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n2 == nArray2[n3]) break block15;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            bl2 = false;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    return bl2;
                }
                ++n3;
                if (nArray3 == null) continue;
            }
            n2 = 1;
        }
        return n2 != 0;
    }

    private static CallSite crN(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean crF(int[] nArray, int[] nArray2) {
        int n2;
        block13: {
            int n3;
            int[] nArray3;
            block11: {
                int n4;
                block12: {
                    long l2 = nacTO ^ 0x23DCFC5BABFEL;
                    nArray3 = mZ.csy();
                    try {
                        try {
                            n4 = nArray2.length;
                            if (nArray3 != null) break block11;
                            if (n4 <= nArray.length) break block12;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                }
                n4 = n3 = 0;
            }
            while (n3 < nArray2.length) {
                block15: {
                    boolean bl2;
                    block14: {
                        try {
                            try {
                                try {
                                    n2 = nArray[n3];
                                    if (nArray3 != null) break block13;
                                    if (nArray3 != null) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n2 == nArray2[n3]) break block15;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            bl2 = false;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    return bl2;
                }
                ++n3;
                if (nArray3 == null) continue;
            }
            n2 = 1;
        }
        return n2 != 0;
    }

    public static int crH(int[] nArray, int[] nArray2) {
        int n2;
        block16: {
            long l2 = nacTO ^ 0x149BB05EA8BAL;
            int n3 = 0;
            int[] nArray3 = mZ.csy();
            int n4 = 0;
            block12: while (true) {
                int n5 = n4;
                block13: while (n5 < nArray.length) {
                    n2 = 0;
                    if (nArray3 != null) break block16;
                    for (int i2 = v1290540; i2 < nArray2.length; ++i2) {
                        int n6;
                        block18: {
                            int n7;
                            int n8;
                            block17: {
                                n5 = 0;
                                if (nArray3 != null) continue block13;
                                n8 = n5;
                                while (n4 + n8 < nArray.length) {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        n6 = i2 + n8;
                                                        n7 = nArray2.length;
                                                        if (nArray3 != null || nArray3 != null) break block17;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mX.crK(matchException);
                                                    }
                                                    if (n6 >= n7) break;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mX.crK(matchException);
                                                }
                                                n6 = nArray[n4 + n8];
                                                n7 = nArray2[i2 + n8];
                                                if (nArray3 != null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw mX.crK(matchException);
                                            }
                                            if (n6 != n7) break;
                                        }
                                        catch (MatchException matchException) {
                                            throw mX.crK(matchException);
                                        }
                                        ++n8;
                                        if (nArray3 == null) continue;
                                        break;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                }
                                try {
                                    n6 = n8;
                                    if (nArray3 != null) break block18;
                                    n7 = n3;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                            }
                            if (n6 <= n7) continue;
                            n6 = n8;
                        }
                        n3 = n6;
                        if (nArray3 == null) continue;
                    }
                    ++n4;
                    if (nArray3 == null) continue block12;
                }
                break;
            }
            n2 = n3;
        }
        return n2;
    }

    public static boolean crJ(String string, String string2) {
        return mX.crI(mZ.csh(string), mZ.csh(string2));
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean crI(int[] nArray, int[] nArray2) {
        int n2;
        int[] nArray3;
        long l2;
        block32: {
            block33: {
                int[] nArray4;
                block31: {
                    block29: {
                        block30: {
                            block28: {
                                l2 = nacTO ^ 0x6C7B0A01EB4L;
                                nArray3 = mZ.csy();
                                try {
                                    nArray4 = nArray2;
                                    if (nArray3 != null) break block28;
                                    if (nArray4 == null) return true;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                nArray4 = nArray2;
                            }
                            try {
                                try {
                                    if (nArray3 != null) break block29;
                                    if (nArray4.length != 0) break block30;
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                        }
                        nArray4 = nArray;
                    }
                    try {
                        if (nArray3 != null) break block31;
                        if (nArray4 == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                    nArray4 = nArray;
                }
                try {
                    try {
                        n2 = nArray4.length;
                        if (nArray3 != null) break block32;
                        if (n2 >= nArray2.length) break block33;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw mX.crK(matchException);
                }
            }
            n2 = 0;
        }
        int n3 = n2;
        do {
            block38: {
                if (n3 > nArray.length - nArray2.length) return 0 != 0;
                int n4 = 0;
                if (nArray3 != null) return n4 != 0;
                int n5 = n4;
                do {
                    int n6;
                    Object object;
                    block36: {
                        int n7;
                        int n8;
                        block37: {
                            block34: {
                                block35: {
                                    if (n5 >= nArray2.length) return 1 != 0;
                                    n8 = nArray[n3 + n5];
                                    n7 = nArray2[n5];
                                    try {
                                        try {
                                            try {
                                                int n9;
                                                try {
                                                    n9 = n8;
                                                    if (nArray3 != null) return n9 != 0;
                                                    object = mX.crN("c", (int)28199, (long)(0x44A669EF898A9389L ^ l2));
                                                    if (nArray3 != null) break block34;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mX.crK(matchException);
                                                }
                                                if (n9 < object) break block35;
                                            }
                                            catch (MatchException matchException) {
                                                throw mX.crK(matchException);
                                            }
                                            n6 = n8;
                                            object = mX.crN("c", (int)11157, (long)(0x11E1458E0C89D63DL ^ l2));
                                            if (nArray3 != null) break block34;
                                        }
                                        catch (MatchException matchException) {
                                            throw mX.crK(matchException);
                                        }
                                        if (n6 > object) break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                    n8 += 32;
                                }
                                n6 = n7;
                                object = mX.crN("c", (int)31903, (long)(0x76AADA8D29180134L ^ l2));
                            }
                            try {
                                try {
                                    try {
                                        if (nArray3 != null) break block36;
                                        if (n6 < object) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                    n6 = n7;
                                    object = mX.crN("c", (int)24501, (long)(0x5A6DD0199E23A21FL ^ l2));
                                    if (nArray3 != null) break block36;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n6 > object) break block37;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            n7 += 32;
                        }
                        n6 = n8;
                        object = n7;
                    }
                    if (n6 != object) break block38;
                    ++n5;
                } while (nArray3 == null);
                return 1 != 0;
            }
            ++n3;
        } while (nArray3 == null);
        return 0 != 0;
    }

    private static int crM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mX.crL(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int crL(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4B94;
        if (KNTgs[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = mOsSp[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])XzTuG.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XzTuG.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mX", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mX.KNTgs[n3] = n4;
        }
        return KNTgs[n3];
    }

    public static int crG(int[] nArray, int[] nArray2) {
        int n2;
        block15: {
            int n3;
            int[] nArray3;
            block13: {
                int n4;
                block14: {
                    long l2 = nacTO ^ 0x5D8CE266C1C8L;
                    nArray3 = mZ.csy();
                    try {
                        try {
                            n4 = nArray2.length;
                            if (nArray3 != null) break block13;
                            if (n4 <= nArray.length) break block14;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                        return -1;
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                }
                n4 = n3 = 0;
            }
            while (n3 <= nArray.length - nArray2.length) {
                block17: {
                    int n5;
                    block16: {
                        n2 = 0;
                        if (nArray3 != null) break block15;
                        for (int i2 = v1291244; i2 < nArray2.length; ++i2) {
                            try {
                                try {
                                    try {
                                        n5 = nArray[n3 + i2];
                                        if (nArray3 != null) break block16;
                                        if (n5 == nArray2[i2]) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                    if (nArray3 != null) {
                                        continue;
                                    }
                                    break block17;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                        }
                        n5 = n3;
                    }
                    return n5;
                }
                ++n3;
                if (nArray3 == null) continue;
            }
            n2 = -1;
        }
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mX.class, "crM", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

