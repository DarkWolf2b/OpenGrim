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
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.mZ;

public class mr
implements CharSequence {
    int[] Tvxiq;
    int[] eWCtB;
    private static int[] yqymz;
    private static final long WDIYB;
    private static final long[] MbAby;
    private static final Integer[] JUGhB;
    private static final Map oDfAg;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mr(int[] nArray, int[] nArray2) {
        this.Tvxiq = nArray2;
        this.eWCtB = nArray;
    }

    public mr(int[] nArray) {
        long l2 = WDIYB ^ 0x2A5F7744CD14L;
        int n2 = nArray.length;
        int[] nArray2 = new int[Math.min(n2, (int)mr.cma("t", (int)19456, (long)(0x5C31F15AEFDDFEC5L ^ l2)))];
        ThreadLocalRandom threadLocalRandom = ThreadLocalRandom.current();
        try {
            for (int i2 = 0; i2 < nArray2.length; ++i2) {
                nArray2[i2] = threadLocalRandom.nextInt((int)mr.cma("t", (int)15436, (long)(0x31DF2D6C54B78E88L ^ l2)));
            }
        }
        catch (MatchException matchException) {
            throw mr.clX(matchException);
        }
        int[] nArray3 = new int[nArray.length];
        System.arraycopy(nArray, 0, nArray3, 0, nArray.length);
        mr.clU(nArray3, nArray2, 0, nArray3.length);
        this.Tvxiq = nArray2;
        this.eWCtB = nArray3;
    }

    public mr(byte[] byArray) {
        block9: {
            int[] nArray;
            int[] nArray2;
            int[] nArray3;
            block8: {
                long l2 = WDIYB ^ 0x4CE362428C36L;
                int[] nArray4 = mr.clW();
                nArray3 = nArray4;
                int n2 = byArray.length;
                nArray2 = new int[Math.min(n2, (int)mr.cma("t", (int)19456, (long)(0x5C3197E6FADBBFE7L ^ l2)))];
                ThreadLocalRandom threadLocalRandom = ThreadLocalRandom.current();
                for (int i2 = 0; i2 < nArray2.length; ++i2) {
                    try {
                        nArray = nArray2;
                        if (nArray3 == null) {
                            nArray[i2] = threadLocalRandom.nextInt((int)mr.cma("t", (int)15436, (long)(0x31DF4BD041B1CFAAL ^ l2)));
                            if (nArray3 == null) continue;
                            break;
                        }
                        break block8;
                    }
                    catch (MatchException matchException) {
                        throw mr.clX(matchException);
                    }
                }
                nArray = new int[byArray.length];
            }
            int[] nArray5 = nArray;
            for (int i3 = 0; i3 < byArray.length; ++i3) {
                try {
                    nArray5[i3] = byArray[i3];
                    if (nArray3 == null) {
                        if (nArray3 == null) continue;
                        break;
                    }
                    break block9;
                }
                catch (MatchException matchException) {
                    throw mr.clX(matchException);
                }
            }
            mr.clU(nArray5, nArray2, 0, nArray5.length);
            this.Tvxiq = nArray2;
            this.eWCtB = nArray5;
        }
    }

    public mr(String string) {
        int[] nArray;
        int[] nArray2;
        block4: {
            long l2 = WDIYB ^ 0x6B043FA8C528L;
            int[] nArray3 = mr.clW();
            int[] nArray4 = nArray3;
            int n2 = string.length();
            nArray2 = new int[Math.min(n2, (int)mr.cma("t", (int)7115, (long)(0x134AF82ECF7C2130L ^ l2)))];
            ThreadLocalRandom threadLocalRandom = ThreadLocalRandom.current();
            for (int i2 = 0; i2 < nArray2.length; ++i2) {
                try {
                    nArray = nArray2;
                    if (nArray4 == null) {
                        nArray[i2] = (char)threadLocalRandom.nextInt((int)mr.cma("t", (int)25582, (long)(0x4B6B6F5B6528D914L ^ l2)));
                        if (nArray4 == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw mr.clX(matchException);
                }
            }
            nArray = mZ.csh(string);
        }
        int[] nArray5 = nArray;
        mr.clU(nArray5, nArray2, 0, nArray5.length);
        this.Tvxiq = nArray2;
        this.eWCtB = nArray5;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                mr.WDIYB = gb.aYR(1540176203986889456L, 7187542815839585990L, MethodHandles.lookup().lookupClass()).a(213819981038823L);
                mr.oDfAg = new HashMap<K, V>(13);
                var0 = mr.WDIYB ^ 47991927834077L;
                mr.clV(null);
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
                var6_5 = "\u00c0z\u009d{\u000bsG\"\u008e\r\u0088@d\u0090>D";
                var7_6 = "\u00c0z\u009d{\u000bsG\"\u008e\r\u0088@d\u0090>D".length();
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
                    var6_5 = "S\u00a1\u008e\u0012\u00a1\u00e6\u008d\u00e0\u0088\u009d\u0093\u00c5=\u00ccy\u00ca";
                    var7_6 = "S\u00a1\u008e\u0012\u00a1\u00e6\u008d\u00e0\u0088\u009d\u0093\u00c5=\u00ccy\u00ca".length();
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
        mr.MbAby = var8_3;
        mr.JUGhB = new Integer[4];
    }

    @Override
    public int length() {
        return this.eWCtB.length;
    }

    @Override
    public String toString() {
        int[] nArray = Arrays.copyOf(this.eWCtB, this.eWCtB.length);
        try {
            mr.clU(nArray, this.Tvxiq, 0, nArray.length);
            String string = mZ.cse(nArray);
            return string;
        }
        finally {
            Arrays.fill(nArray, 0);
        }
    }

    @Override
    public char charAt(int n2) {
        return (char)(this.eWCtB[n2] ^ this.Tvxiq[n2 % this.Tvxiq.length]);
    }

    @Override
    public CharSequence subSequence(int n2, int n3) {
        long l2 = WDIYB ^ 0x2A4726CE8B3BL;
        int n4 = n3 - n2;
        int[] nArray = new int[n4];
        int[] nArray2 = new int[n4];
        int[] nArray3 = mr.clW();
        System.arraycopy(this.eWCtB, n2, nArray, 0, n4);
        int[] nArray4 = nArray3;
        for (int i2 = 0; i2 < n4; ++i2) {
            nArray2[i2] = this.Tvxiq[(n2 + i2) % this.Tvxiq.length];
            if (nArray4 == null) continue;
        }
        return new mr(nArray, nArray2);
    }

    private static CallSite cma(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static int[] clW() {
        return yqymz;
    }

    public static mr clS(int[] nArray) {
        return new mr(nArray);
    }

    public static mr clQ(String string) {
        return new mr(string);
    }

    public static void clV(int[] nArray) {
        yqymz = nArray;
    }

    public int[] clT() {
        int[] nArray;
        block4: {
            long l2 = WDIYB ^ 0x110BFF2DDBE3L;
            int[] nArray2 = new int[this.length()];
            int[] nArray3 = mr.clW();
            for (int i2 = 0; i2 < nArray2.length; ++i2) {
                try {
                    nArray = nArray2;
                    if (nArray3 == null) {
                        nArray[i2] = this.charAt(i2);
                        if (nArray3 == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw mr.clX(matchException);
                }
            }
            nArray = nArray2;
        }
        return nArray;
    }

    private static int clY(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x77D8;
        if (JUGhB[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = MbAby[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])oDfAg.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    oDfAg.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mr", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mr.JUGhB[n3] = n4;
        }
        return JUGhB[n3];
    }

    private static void clU(int[] nArray, int[] nArray2, int n2, int n3) {
        long l2 = WDIYB ^ 0x65B61A01B60AL;
        try {
            for (int i2 = n2; i2 < n2 + n3; ++i2) {
                nArray[i2] = (char)(nArray[i2] ^ nArray2[i2 % nArray2.length]);
            }
        }
        catch (MatchException matchException) {
            throw mr.clX(matchException);
        }
    }

    private static int clZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mr.clY(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException clX(MatchException matchException) {
        return matchException;
    }

    public static mr clR(byte[] byArray) {
        return new mr(byArray);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mr.class, "clZ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

