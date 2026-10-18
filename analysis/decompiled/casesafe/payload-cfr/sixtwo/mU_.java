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
import java.util.concurrent.ThreadLocalRandom;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.cA;
import sixtwo.gb;

public class mU {
    private static final ThreadLocalRandom pcazh;
    private static final char GQDjz;
    private static final char PeGTC;
    private static int gRpmW;
    private static final long LxHYI;
    private static final long[] afDxp;
    private static final Integer[] PeZwE;
    private static final Map HYksB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                mU.LxHYI = gb.aYR(-5642763879656398978L, -7638232348856279786L, MethodHandles.lookup().lookupClass()).a(29478026005498L);
                mU.HYksB = new HashMap<K, V>(13);
                mU.cpT(0);
                var0 = mU.LxHYI ^ 63210747173377L;
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
                var8_3 = new long[6];
                var5_4 = 0;
                var6_5 = "O7\u0007\u00d5#\u000b\u00ba n\u00cd\u00bb\u00e7\u00adr\u00f7\u00d9h?\u0092%)\u00e2qX\u001e\u00d9Cl=\u0001q ";
                var7_6 = "O7\u0007\u00d5#\u000b\u00ba n\u00cd\u00bb\u00e7\u00adr\u00f7\u00d9h?\u0092%)\u00e2qX\u001e\u00d9Cl=\u0001q ".length();
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
                    var6_5 = "`\u00e8\u009aC\u00a1\u0087\u00b3^\u00de\u000b\\@\u00140\u00d4\u00bd";
                    var7_6 = "`\u00e8\u009aC\u00a1\u0087\u00b3^\u00de\u000b\\@\u00140\u00d4\u00bd".length();
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
        mU.afDxp = var8_3;
        mU.PeZwE = new Integer[6];
        mU.GQDjz = (char)mU.cpZ("y", (int)2169, (long)(var0 ^ 6741156703855048282L));
        mU.PeGTC = (char)mU.cpZ("y", (int)16718, (long)(var0 ^ 406387938239463273L));
        mU.pcazh = ThreadLocalRandom.current();
    }

    public static int cpO(int n, int n2) {
        return pcazh.nextInt(n2 - n + 1) + n;
    }

    public static double cpP(double d, double d2) {
        return pcazh.nextDouble() * (d2 - d) + d;
    }

    public static float cpQ(float f, float f2) {
        return pcazh.nextFloat() * (f2 - f) + f;
    }

    public static boolean cpN(int n) {
        int n2;
        block14: {
            Object object;
            block12: {
                int n3;
                long l;
                block13: {
                    block10: {
                        block11: {
                            l = LxHYI ^ 0x6C49E0882D3FL;
                            n3 = mU.cpU();
                            try {
                                try {
                                    n2 = n;
                                    if (n3 != 0) break block10;
                                    if (n2 > 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw mU.cpW(matchException);
                                }
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw mU.cpW(matchException);
                            }
                        }
                        n2 = n;
                    }
                    try {
                        try {
                            object = mU.cpZ("y", (int)4118, (long)(0x5FAFC9AC7DA95908L ^ l));
                            if (n3 != 0) break block12;
                            if (n2 < object) break block13;
                        }
                        catch (MatchException matchException) {
                            throw mU.cpW(matchException);
                        }
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw mU.cpW(matchException);
                    }
                }
                try {
                    n2 = pcazh.nextInt((int)mU.cpZ("y", (int)11500, (long)(0x665181C33FCE65F4L ^ l)));
                    if (n3 != 0) break block14;
                    object = n;
                }
                catch (MatchException matchException) {
                    throw mU.cpW(matchException);
                }
            }
            n2 = n2 < object ? 1 : 0;
        }
        return n2 != 0;
    }

    private static MatchException cpW(MatchException matchException) {
        return matchException;
    }

    public static int cpV() {
        int n = mU.cpU();
        try {
            if (n == 0) {
                return 12;
            }
        }
        catch (MatchException matchException) {
            throw mU.cpW(matchException);
        }
        return 0;
    }

    public static String cpM(int n2) {
        return IntStream.range(0, n2).mapToObj(n -> {
            long l = LxHYI ^ 0x39D5B75F8E1L;
            return String.valueOf((char)pcazh.nextInt((int)mU.cpZ("y", (int)2409, (long)(0x9A405408ED515A8L ^ l)), (int)mU.cpZ("y", (int)32090, (long)(0x359F1E2FECECE198L ^ l))));
        }).collect(Collectors.joining());
    }

    public static double cpR(cA cA2) {
        double d = (Double)cA2.UW().getLeft();
        double d2 = (Double)cA2.UW().getRight();
        return mU.cpP(d, d2);
    }

    public static void cpT(int n) {
        gRpmW = n;
    }

    public static int cpU() {
        return gRpmW;
    }

    private static CallSite cpZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mU" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int cpY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = mU.cpX(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int cpX(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x126D;
        if (PeZwE[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = afDxp[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HYksB.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HYksB.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mU", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mU.PeZwE[n2] = n3;
        }
        return PeZwE[n2];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mU.class, "cpY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
