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
import sixtwo.mr;

public final class mA
extends Enum<mA> {
    public static final /* enum */ mA sCBUa;
    public static final /* enum */ mA frWTZ;
    public static final /* enum */ mA OGQHF;
    public static final /* enum */ mA tYwDF;
    public static final /* enum */ mA eKpBI;
    public static final /* enum */ mA bVTAk;
    public static final /* enum */ mA SbfUE;
    private final int UyRGG;
    private static final /* synthetic */ mA[] MHnjf;
    private static boolean NXHWP;
    private static final long dnsnI;
    private static final long[] GTUCr;
    private static final Integer[] BvkEY;
    private static final Map rFDhT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private mA(int n2) {
        this.UyRGG = n2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block17: {
            block16: {
                block15: {
                    block14: {
                        mA.dnsnI = gb.aYR(7349253894837860685L, -2966708561316324497L, MethodHandles.lookup().lookupClass()).a(164991762327259L);
                        var20 = mA.dnsnI ^ 104693569841189L;
                        if (mA.cmR()) {
                            mA.cmQ(true);
                        }
                        var12_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var13_2 = 1; var13_2 < 8; ++var13_2) {
                            v2 = v2;
                            v2[var13_2] = (byte)(var20 << var13_2 * 8 >>> 56);
                        }
                        var12_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var11_3 = new String[7];
                        var17_4 = 0;
                        var16_5 = "\u009f\u00bf\u008c\u001f\u00c7\u00ea!\u0014\bn\u00a5\"\u0082\u0099\b\u0084Y\bQzbC\u009d\u00cb_\u00ab\u0010OV\u0012\u0006!\u00b3\u0093\u00a0\u00fb\u00e2\u00f3\u00c9\u0012\u00e3h\u00b4\u0010\u00e8W\u00bfQ\u0004B\u00c8\u00a5\u008c\u00e9\u00d48\u009c\u00d8M\u00e4";
                        var18_6 = "\u009f\u00bf\u008c\u001f\u00c7\u00ea!\u0014\bn\u00a5\"\u0082\u0099\b\u0084Y\bQzbC\u009d\u00cb_\u00ab\u0010OV\u0012\u0006!\u00b3\u0093\u00a0\u00fb\u00e2\u00f3\u00c9\u0012\u00e3h\u00b4\u0010\u00e8W\u00bfQ\u0004B\u00c8\u00a5\u008c\u00e9\u00d48\u009c\u00d8M\u00e4".length();
                        var15_7 = 8;
                        var14_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var14_8;
                            v4 = var16_5.substring(v3, v3 + var15_7);
                            v5 = -1;
                            break block14;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = mA.cmU(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            var16_5 = "\u00ca\u00bdr\u00e1\u00a8\n\u00d6\u00ed\u00c641\u00eb\u00bd\u00dd\u00fa\u00cf\u0010\u0090\u00b1S\r\u00e2\u00f8)\u001b\u000er\u00db[~\u00d7$\u00c8";
                            var18_6 = "\u00ca\u00bdr\u00e1\u00a8\n\u00d6\u00ed\u00c641\u00eb\u00bd\u00dd\u00fa\u00cf\u0010\u0090\u00b1S\r\u00e2\u00f8)\u001b\u000er\u00db[~\u00d7$\u00c8".length();
                            var15_7 = 16;
                            var14_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var14_8;
                                v4 = var16_5.substring(v6, v6 + var15_7);
                                v5 = 0;
                                break block14;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = mA.cmU(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            break block15;
                            break;
                        }
                    }
                    var19_9 = var12_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                mA.rFDhT = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var20 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var20 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[3];
                var3_13 = 0;
                var4_14 = "i\u00e0\u00f1 \u0097$=\u00a2\u009c\u00a0\u00b0\u007fB\u00c4\u00b2\u000b\u00e7\u0082.\u00ec\u001fiy8";
                var5_15 = "i\u00e0\u00f1 \u0097$=\u00a2\u009c\u00a0\u00b0\u007fB\u00c4\u00b2\u000b\u00e7\u0082.\u00ec\u001fiy8".length();
                var2_16 = 0;
                while (true) {
                    break block16;
                    break;
                }
lbl72:
                // 1 sources

                while (true) {
                    var6_12[v10] = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
                    if (var2_16 < var5_15) ** continue;
                    break block17;
                    break;
                }
            }
            var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
            v10 = var3_13++;
            var8_18 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            ** while (true)
        }
        mA.GTUCr = var6_12;
        mA.BvkEY = new Integer[3];
        mA.sCBUa = new mA(0);
        mA.frWTZ = new mA(1);
        mA.OGQHF = new mA(2);
        mA.tYwDF = new mA(3);
        mA.eKpBI = new mA(4);
        mA.bVTAk = new mA(5);
        mA.SbfUE = new mA((int)mA.cmX("i", (int)4285, (long)(6958970864224545680L ^ var20)));
        mA.MHnjf = mA.cmP();
    }

    public static mA[] values() {
        return (mA[])MHnjf.clone();
    }

    public static mA valueOf(String string) {
        return Enum.valueOf(mA.class, string);
    }

    public static mA cmN(int n) {
        mA mA2;
        block9: {
            long l = dnsnI ^ 0x71672A663598L;
            mA[] mAArray = mA.values();
            int n2 = mAArray.length;
            int[] nArray = mr.clW();
            for (int i = 0; i < n2; ++i) {
                mA mA3;
                block10: {
                    mA mA4 = mAArray[i];
                    try {
                        block11: {
                            try {
                                try {
                                    try {
                                        mA2 = mA4;
                                        if (nArray != null) break block9;
                                        if (nArray != null) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw mA.cmT(matchException);
                                    }
                                    if (mA2.cmO() == n) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw mA.cmT(matchException);
                                }
                                if (nArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw mA.cmT(matchException);
                            }
                        }
                        mA3 = mA4;
                    }
                    catch (MatchException matchException) {
                        throw mA.cmT(matchException);
                    }
                }
                return mA3;
            }
            mA2 = sCBUa;
        }
        return mA2;
    }

    private static String cmU(byte[] byArray) {
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

    public static boolean cmS() {
        boolean bl = mA.cmR();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw mA.cmT(matchException);
        }
        return false;
    }

    public static boolean cmR() {
        return NXHWP;
    }

    private static MatchException cmT(MatchException matchException) {
        return matchException;
    }

    private static CallSite cmX(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mA" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ mA[] cmP() {
        long l = dnsnI ^ 0xB3D74C3BE2L;
        mA[] mAArray = new mA[mA.cmX("i", (int)10994, (long)(0x5F2E6F094334C21BL ^ l))];
        mAArray[0] = sCBUa;
        mAArray[1] = frWTZ;
        mAArray[2] = OGQHF;
        mAArray[3] = tYwDF;
        mAArray[4] = eKpBI;
        mAArray[5] = bVTAk;
        mAArray[mA.cmX("i", (int)15483, (long)(0x59E45894CA1BD493L ^ l))] = SbfUE;
        return mAArray;
    }

    private static int cmW(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = mA.cmV(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int cmV(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2321;
        if (BvkEY[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = GTUCr[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])rFDhT.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rFDhT.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mA", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mA.BvkEY[n2] = n3;
        }
        return BvkEY[n2];
    }

    public static void cmQ(boolean bl) {
        NXHWP = bl;
    }

    public int cmO() {
        return this.UyRGG;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mA.class, "cmW", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
