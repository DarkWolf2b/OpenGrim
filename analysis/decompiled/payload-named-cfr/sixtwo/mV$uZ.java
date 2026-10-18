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

public final class mV$uZ
extends Enum<mV$uZ> {
    public static final /* enum */ mV$uZ JLDtP;
    public static final /* enum */ mV$uZ dMdAl;
    public static final /* enum */ mV$uZ gqgma;
    public static final /* enum */ mV$uZ NsAOG;
    public static final /* enum */ mV$uZ rnupK;
    public static final /* enum */ mV$uZ OJvwU;
    public static final /* enum */ mV$uZ scLLw;
    private static final mV$uZ[] NkoZK;
    private static final long krSMA;
    private static final long[] LdypA;
    private static final Integer[] qAFfj;
    private static final Map OTQwC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static mV$uZ[] dvS() {
        long l2 = krSMA ^ 0x525EDA559C0L;
        mV$uZ[] mV$uZArray = new mV$uZ[mV$uZ.dvW("r", (int)4244, (long)(0x185E2F4E770AAD39L ^ l2))];
        mV$uZArray[0] = JLDtP;
        mV$uZArray[1] = dMdAl;
        mV$uZArray[2] = gqgma;
        mV$uZArray[3] = NsAOG;
        mV$uZArray[4] = rnupK;
        mV$uZArray[5] = OJvwU;
        mV$uZArray[mV$uZ.dvW("r", (int)6455, (long)(0x68EEBAB02F86249BL ^ l2))] = scLLw;
        return mV$uZArray;
    }

    private static CallSite dvW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mV$uZ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String dvT(byte[] byArray) {
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

    private static int dvU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1EBF;
        if (qAFfj[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = LdypA[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])OTQwC.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    OTQwC.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mV$uZ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mV$uZ.qAFfj[n3] = n4;
        }
        return qAFfj[n3];
    }

    private static int dvV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mV$uZ.dvU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block16: {
            block15: {
                block14: {
                    block13: {
                        mV$uZ.krSMA = gb.aYR(7444314463263922757L, -7512938632512613020L, MethodHandles.lookup().lookupClass()).a(57058766281784L);
                        var20 = mV$uZ.krSMA ^ 3428308779186L;
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
                        var16_5 = "\u00ee2I\u00a1;2\u00de\u00fbzG\n/\u00b2A\u00f2\u00f1\u0010\u00ee2I\u00a1;2\u00de\u00fb\u00d6o\u00d9\u00bfy\u00e7R\u00dc\u0010\u00ee2I\u00a1;2\u00de\u00fb\u0086\u0013\u00d6@\u00f7YBa\u0010\u00ee2I\u00a1;2\u00de\u00fb\u0086\u007f+\u00e9\u00b2\u00ee\u00ac3\u0010\u00ee2I\u00a1;2\u00de\u00fbJ\u009b\u00ead=T\u00f4\u008a";
                        var18_6 = "\u00ee2I\u00a1;2\u00de\u00fbzG\n/\u00b2A\u00f2\u00f1\u0010\u00ee2I\u00a1;2\u00de\u00fb\u00d6o\u00d9\u00bfy\u00e7R\u00dc\u0010\u00ee2I\u00a1;2\u00de\u00fb\u0086\u0013\u00d6@\u00f7YBa\u0010\u00ee2I\u00a1;2\u00de\u00fb\u0086\u007f+\u00e9\u00b2\u00ee\u00ac3\u0010\u00ee2I\u00a1;2\u00de\u00fbJ\u009b\u00ead=T\u00f4\u008a".length();
                        var15_7 = 16;
                        var14_8 = -1;
lbl19:
                        // 2 sources

                        while (true) {
                            v3 = ++var14_8;
                            v4 = var16_5.substring(v3, v3 + var15_7);
                            v5 = -1;
                            break block13;
                            break;
                        }
lbl24:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = mV$uZ.dvT(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            var16_5 = "\u00ee2I\u00a1;2\u00de\u00fb\u00f8\u00c2c\u0012\u0019\u00cdU\u00cb\u0010\u00a4R\u009b-\u00de\u00d4\u00acME\u00b5\bb\u0090 &\u0004";
                            var18_6 = "\u00ee2I\u00a1;2\u00de\u00fb\u00f8\u00c2c\u0012\u0019\u00cdU\u00cb\u0010\u00a4R\u009b-\u00de\u00d4\u00acME\u00b5\bb\u0090 &\u0004".length();
                            var15_7 = 16;
                            var14_8 = -1;
lbl33:
                            // 2 sources

                            while (true) {
                                v6 = ++var14_8;
                                v4 = var16_5.substring(v6, v6 + var15_7);
                                v5 = 0;
                                break block13;
                                break;
                            }
                            break;
                        }
lbl38:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = mV$uZ.dvT(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                    }
                    var19_9 = var12_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl50:
                        // 1 sources

                        ** continue;
                    }
                }
                mV$uZ.OTQwC = new HashMap<K, V>(13);
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
                var4_14 = "\u00eaB\u0014\u00ca\u0083\u009c\u00d2\u0091j26\u00fb\u00edy%\u008a\u00f0\u0006\u00ff\u00d3\u0013|\u00b0\u009d";
                var5_15 = "\u00eaB\u0014\u00ca\u0083\u009c\u00d2\u0091j26\u00fb\u00edy%\u008a\u00f0\u0006\u00ff\u00d3\u0013|\u00b0\u009d".length();
                var2_16 = 0;
                while (true) {
                    break block15;
                    break;
                }
lbl70:
                // 1 sources

                while (true) {
                    var6_12[v10] = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
                    if (var2_16 < var5_15) ** continue;
                    break block16;
                    break;
                }
            }
            var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
            v10 = var3_13++;
            var8_18 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            ** while (true)
        }
        mV$uZ.LdypA = var6_12;
        mV$uZ.qAFfj = new Integer[3];
        mV$uZ.JLDtP = new mV$uZ();
        mV$uZ.dMdAl = new mV$uZ();
        mV$uZ.gqgma = new mV$uZ();
        mV$uZ.NsAOG = new mV$uZ();
        mV$uZ.rnupK = new mV$uZ();
        mV$uZ.OJvwU = new mV$uZ();
        mV$uZ.scLLw = new mV$uZ();
        mV$uZ.NkoZK = mV$uZ.dvS();
    }

    public static mV$uZ[] values() {
        return (mV$uZ[])NkoZK.clone();
    }

    public static mV$uZ valueOf(String string) {
        return Enum.valueOf(mV$uZ.class, string);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mV$uZ.class, "dvV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

