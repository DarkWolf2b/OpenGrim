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
        int n;
        int[] nArray3;
        long l;
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
                                        l = nacTO ^ 0x189535885EEDL;
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
                                                int n2 = nArray7.length;
                                                if (nArray3 != null) return n2;
                                                if (n2 == 0) return 0;
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
                                n = mX.crE(nArray5, nArray4);
                                if (nArray3 != null) break block28;
                                if (n == 0) break block29;
                                return (int)mX.crN("c", (int)13601, (long)(0xED46192F4D088D7L ^ l));
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    n = mX.crF(nArray4, nArray5);
                }
                try {
                    try {
                        if (nArray3 != null) break block30;
                        if (n == 0) break block31;
                        return (int)mX.crN("c", (int)16472, (long)(0x6B32C82F369DFDA8L ^ l));
                    }
                    catch (MatchException matchException) {
                        throw mX.crK(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw mX.crK(matchException);
                }
            }
            n = mX.crG(nArray4, nArray5);
        }
        int n3 = n;
        try {
            try {
                int n4 = n3;
                if (nArray3 != null) return n4;
                if (n4 == -1) return 0;
                return (int)(mX.crN("c", (int)23280, (long)(0x5E78D3ADC04BE705L ^ l)) - n3);
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
            long l = nacTO ^ 0x176C1CAC20BAL;
            int[] nArray3 = new int[nArray.length];
            int n = 0;
            int[] nArray4 = mZ.csy();
            while (n < nArray.length) {
                block8: {
                    int n2;
                    block9: {
                        nArray2 = nArray;
                        if (nArray4 != null) break block7;
                        n2 = nArray2[n];
                        try {
                            try {
                                try {
                                    if (nArray4 != null) break block8;
                                    if (n2 < mX.crN("c", (int)31903, (long)(0x76AACB2685143F3AL ^ l))) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n2 > mX.crN("c", (int)24501, (long)(0x5A6DC1B2322F9C11L ^ l))) break block9;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            n2 += 32;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    nArray3[n] = n2;
                    ++n;
                }
                if (nArray4 == null) continue;
            }
            nArray2 = nArray3;
        }
        return nArray2;
    }

    public static boolean crE(int[] nArray, int[] nArray2) {
        int n;
        block13: {
            int n2;
            int[] nArray3;
            block11: {
                int n3;
                block12: {
                    long l = nacTO ^ 0x2A6013EB2966L;
                    nArray3 = mZ.csy();
                    try {
                        try {
                            n3 = nArray.length;
                            if (nArray3 != null) break block11;
                            if (n3 == nArray2.length) break block12;
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
                n3 = n2 = 0;
            }
            while (n2 < nArray.length) {
                block15: {
                    boolean bl;
                    block14: {
                        try {
                            try {
                                try {
                                    n = nArray[n2];
                                    if (nArray3 != null) break block13;
                                    if (nArray3 != null) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n == nArray2[n2]) break block15;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            bl = false;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    return bl;
                }
                ++n2;
                if (nArray3 == null) continue;
            }
            n = 1;
        }
        return n != 0;
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
        int n;
        block13: {
            int n2;
            int[] nArray3;
            block11: {
                int n3;
                block12: {
                    long l = nacTO ^ 0x23DCFC5BABFEL;
                    nArray3 = mZ.csy();
                    try {
                        try {
                            n3 = nArray2.length;
                            if (nArray3 != null) break block11;
                            if (n3 <= nArray.length) break block12;
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
                n3 = n2 = 0;
            }
            while (n2 < nArray2.length) {
                block15: {
                    boolean bl;
                    block14: {
                        try {
                            try {
                                try {
                                    n = nArray[n2];
                                    if (nArray3 != null) break block13;
                                    if (nArray3 != null) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n == nArray2[n2]) break block15;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            bl = false;
                        }
                        catch (MatchException matchException) {
                            throw mX.crK(matchException);
                        }
                    }
                    return bl;
                }
                ++n2;
                if (nArray3 == null) continue;
            }
            n = 1;
        }
        return n != 0;
    }

    public static int crH(int[] nArray, int[] nArray2) {
        int n;
        block16: {
            long l = nacTO ^ 0x149BB05EA8BAL;
            int n2 = 0;
            int[] nArray3 = mZ.csy();
            int n3 = 0;
            block12: while (true) {
                int n4 = n3;
                block13: while (n4 < nArray.length) {
                    n = 0;
                    if (nArray3 != null) break block16;
                    for (int i = v4329; i < nArray2.length; ++i) {
                        int n5;
                        block18: {
                            int n6;
                            int n7;
                            block17: {
                                n4 = 0;
                                if (nArray3 != null) continue block13;
                                n7 = n4;
                                while (n3 + n7 < nArray.length) {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        n5 = i + n7;
                                                        n6 = nArray2.length;
                                                        if (nArray3 != null || nArray3 != null) break block17;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mX.crK(matchException);
                                                    }
                                                    if (n5 >= n6) break;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mX.crK(matchException);
                                                }
                                                n5 = nArray[n3 + n7];
                                                n6 = nArray2[i + n7];
                                                if (nArray3 != null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw mX.crK(matchException);
                                            }
                                            if (n5 != n6) break;
                                        }
                                        catch (MatchException matchException) {
                                            throw mX.crK(matchException);
                                        }
                                        ++n7;
                                        if (nArray3 == null) continue;
                                        break;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                }
                                try {
                                    n5 = n7;
                                    if (nArray3 != null) break block18;
                                    n6 = n2;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                            }
                            if (n5 <= n6) continue;
                            n5 = n7;
                        }
                        n2 = n5;
                        if (nArray3 == null) continue;
                    }
                    ++n3;
                    if (nArray3 == null) continue block12;
                }
                break;
            }
            n = n2;
        }
        return n;
    }

    public static boolean crJ(String string, String string2) {
        return mX.crI(mZ.csh(string), mZ.csh(string2));
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean crI(int[] nArray, int[] nArray2) {
        int n;
        int[] nArray3;
        long l;
        block32: {
            block33: {
                int[] nArray4;
                block31: {
                    block29: {
                        block30: {
                            block28: {
                                l = nacTO ^ 0x6C7B0A01EB4L;
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
                        n = nArray4.length;
                        if (nArray3 != null) break block32;
                        if (n >= nArray2.length) break block33;
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
            n = 0;
        }
        int n2 = n;
        do {
            block38: {
                if (n2 > nArray.length - nArray2.length) return 0 != 0;
                int n3 = 0;
                if (nArray3 != null) return n3 != 0;
                int n4 = n3;
                do {
                    int n5;
                    Object object;
                    block36: {
                        int n6;
                        int n7;
                        block37: {
                            block34: {
                                block35: {
                                    if (n4 >= nArray2.length) return 1 != 0;
                                    n7 = nArray[n2 + n4];
                                    n6 = nArray2[n4];
                                    try {
                                        try {
                                            try {
                                                int n8;
                                                try {
                                                    n8 = n7;
                                                    if (nArray3 != null) return n8 != 0;
                                                    object = mX.crN("c", (int)28199, (long)(0x44A669EF898A9389L ^ l));
                                                    if (nArray3 != null) break block34;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mX.crK(matchException);
                                                }
                                                if (n8 < object) break block35;
                                            }
                                            catch (MatchException matchException) {
                                                throw mX.crK(matchException);
                                            }
                                            n5 = n7;
                                            object = mX.crN("c", (int)11157, (long)(0x11E1458E0C89D63DL ^ l));
                                            if (nArray3 != null) break block34;
                                        }
                                        catch (MatchException matchException) {
                                            throw mX.crK(matchException);
                                        }
                                        if (n5 > object) break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                    n7 += 32;
                                }
                                n5 = n6;
                                object = mX.crN("c", (int)31903, (long)(0x76AADA8D29180134L ^ l));
                            }
                            try {
                                try {
                                    try {
                                        if (nArray3 != null) break block36;
                                        if (n5 < object) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw mX.crK(matchException);
                                    }
                                    n5 = n6;
                                    object = mX.crN("c", (int)24501, (long)(0x5A6DD0199E23A21FL ^ l));
                                    if (nArray3 != null) break block36;
                                }
                                catch (MatchException matchException) {
                                    throw mX.crK(matchException);
                                }
                                if (n5 > object) break block37;
                            }
                            catch (MatchException matchException) {
                                throw mX.crK(matchException);
                            }
                            n6 += 32;
                        }
                        n5 = n7;
                        object = n6;
                    }
                    if (n5 != object) break block38;
                    ++n4;
                } while (nArray3 == null);
                return 1 != 0;
            }
            ++n2;
        } while (nArray3 == null);
        return 0 != 0;
    }

    private static int crM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = mX.crL(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int crL(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4B94;
        if (KNTgs[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = mOsSp[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])XzTuG.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XzTuG.put(l3, objectArray);
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
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mX.KNTgs[n2] = n3;
        }
        return KNTgs[n2];
    }

    public static int crG(int[] nArray, int[] nArray2) {
        int n;
        block15: {
            int n2;
            int[] nArray3;
            block13: {
                int n3;
                block14: {
                    long l = nacTO ^ 0x5D8CE266C1C8L;
                    nArray3 = mZ.csy();
                    try {
                        try {
                            n3 = nArray2.length;
                            if (nArray3 != null) break block13;
                            if (n3 <= nArray.length) break block14;
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
                n3 = n2 = 0;
            }
            while (n2 <= nArray.length - nArray2.length) {
                block17: {
                    int n4;
                    block16: {
                        n = 0;
                        if (nArray3 != null) break block15;
                        for (int i = v5033; i < nArray2.length; ++i) {
                            try {
                                try {
                                    try {
                                        n4 = nArray[n2 + i];
                                        if (nArray3 != null) break block16;
                                        if (n4 == nArray2[i]) continue;
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
                        n4 = n2;
                    }
                    return n4;
                }
                ++n2;
                if (nArray3 == null) continue;
            }
            n = -1;
        }
        return n;
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
