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
import sixtwo.od;

public final class aI
extends Enum<aI> {
    public static final /* enum */ aI JkFqu;
    public static final /* enum */ aI OOZEg;
    public static final /* enum */ aI PGwMP;
    public static final /* enum */ aI ejRch;
    public static final /* enum */ aI fhJit;
    public static final /* enum */ aI MltoB;
    public static final /* enum */ aI LYUHl;
    public static final /* enum */ aI mMivt;
    private final od KPbhi;
    private static final /* synthetic */ aI[] ufWCI;
    private static final long oldYq;
    private static final long[] ToNoi;
    private static final Integer[] naBWA;
    private static final Map nSztn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private aI(od od2) {
        this.KPbhi = od2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        aI.oldYq = gb.aYR(2029796362745907490L, -873967833286070265L, MethodHandles.lookup().lookupClass()).a(36526231130882L);
                        var20 = aI.oldYq ^ 74037699898462L;
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
                        var11_3 = new String[16];
                        var17_4 = 0;
                        var16_5 = "\u00c1c:\u00d4%\u00cb\u00b3\u00bc \u008d\u001a\u00c0&vC\u00db\u00c9eD\u009e\u007f-7U\u0010\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00ed\u00ec\u001f\u0091\u00ce\u000bD\u00f5\b\u000b(\u00ed\u00c3!\u00fb\u00ffq\b\u00cf\u00a9\u0016\u00ac\u009fot\u00d7\u0018\u00c1c:\u00d4%\u00cb\u00b3\u00bc:\u0002\u00bf\u00b7\u00ee?C\u001a\u00e8VR\u0088\rBzJ\b^Tdw\u008c2\u00a3\u00da\u0010\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00dd;@S\u00e0\u00ce\u0080\u0014\b\u00d9\u00fc\u0098\u00ddc\u00eb\u00f87\u0018\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00e8\u000fZYE\u00ff\u00fcT\u00de\u00c7#`<UK\u0003\u00107\u009b\u00d5t\u0016\u00c1F\u00ad\u00b3\u0005X\u0014\u00ed\u000b]\u00b8\b\u00de\u0018E$\u00fc\u00c1(\u00e2\bB\u00ca\u00cdS8\u00bb\u0017\u00db\u0018\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00cd;\u00aa\u00ce;TB\u00aea\u0018Q\u00dd\u00f0L\u00c2\u00d7\u0010\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u001dz\u0086\u00f3\u00c9\u008d=\u00e6";
                        var18_6 = "\u00c1c:\u00d4%\u00cb\u00b3\u00bc \u008d\u001a\u00c0&vC\u00db\u00c9eD\u009e\u007f-7U\u0010\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00ed\u00ec\u001f\u0091\u00ce\u000bD\u00f5\b\u000b(\u00ed\u00c3!\u00fb\u00ffq\b\u00cf\u00a9\u0016\u00ac\u009fot\u00d7\u0018\u00c1c:\u00d4%\u00cb\u00b3\u00bc:\u0002\u00bf\u00b7\u00ee?C\u001a\u00e8VR\u0088\rBzJ\b^Tdw\u008c2\u00a3\u00da\u0010\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00dd;@S\u00e0\u00ce\u0080\u0014\b\u00d9\u00fc\u0098\u00ddc\u00eb\u00f87\u0018\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00e8\u000fZYE\u00ff\u00fcT\u00de\u00c7#`<UK\u0003\u00107\u009b\u00d5t\u0016\u00c1F\u00ad\u00b3\u0005X\u0014\u00ed\u000b]\u00b8\b\u00de\u0018E$\u00fc\u00c1(\u00e2\bB\u00ca\u00cdS8\u00bb\u0017\u00db\u0018\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u00cd;\u00aa\u00ce;TB\u00aea\u0018Q\u00dd\u00f0L\u00c2\u00d7\u0010\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u001dz\u0086\u00f3\u00c9\u008d=\u00e6".length();
                        var15_7 = 24;
                        var14_8 = -1;
lbl19:
                        // 2 sources

                        while (true) {
                            v3 = ++var14_8;
                            v4 = var16_5.substring(v3, v3 + var15_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl24:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = aI.wa(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            var16_5 = "\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u0012M`\u00fb\u00e8\u00a1;\u0017\b\u001f\u00d9\u00d0\u00e9KJ\u0016\u001b";
                            var18_6 = "\u00c1c:\u00d4%\u00cb\u00b3\u00bc\u0012M`\u00fb\u00e8\u00a1;\u0017\b\u001f\u00d9\u00d0\u00e9KJ\u0016\u001b".length();
                            var15_7 = 16;
                            var14_8 = -1;
lbl33:
                            // 2 sources

                            while (true) {
                                v6 = ++var14_8;
                                v4 = var16_5.substring(v6, v6 + var15_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl38:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = aI.wa(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            break block19;
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
                aI.nSztn = new HashMap<K, V>(13);
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
                var6_12 = new long[5];
                var3_13 = 0;
                var4_14 = "e_2\u0018\u00e5\u00c8W\u00ba\u009a\u001c)U5\u00ba\u00a1d&i9\u00f4qv\u00ea\u001b";
                var5_15 = "e_2\u0018\u00e5\u00c8W\u00ba\u009a\u001c)U5\u00ba\u00a1d&i9\u00f4qv\u00ea\u001b".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl75:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "z\u00d5h\u0013'\u00e4H\u00e0s-\u00c3\u00bb\u00da\u00c5\u0098\u00f6";
                    var5_15 = "z\u00d5h\u0013'\u00e4H\u00e0s-\u00c3\u00bb\u00da\u00c5\u0098\u00f6".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl88:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl101:
                // 1 sources

                ** continue;
            }
        }
        aI.ToNoi = var6_12;
        aI.naBWA = new Integer[5];
        aI.JkFqu = new aI(od.cBQ(var11_3[13]));
        aI.OOZEg = new aI(od.cBQ(var11_3[8]));
        aI.PGwMP = new aI(od.cBQ(var11_3[1]));
        aI.ejRch = new aI(od.cBQ(var11_3[0]));
        aI.fhJit = new aI(od.cBQ(var11_3[6]));
        aI.MltoB = new aI(od.cBQ(var11_3[12]));
        aI.LYUHl = new aI(od.cBQ(var11_3[4]));
        aI.mMivt = new aI(od.cBQ(var11_3[14]));
        aI.ufWCI = aI.vZ();
    }

    public static aI[] values() {
        return (aI[])ufWCI.clone();
    }

    public static aI valueOf(String string) {
        return Enum.valueOf(aI.class, string);
    }

    private static int wc(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = aI.wb(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite wd(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aI" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String wa(byte[] byArray) {
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

    private static int wb(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x450A;
        if (naBWA[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ToNoi[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])nSztn.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nSztn.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aI", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            aI.naBWA[n3] = n4;
        }
        return naBWA[n3];
    }

    public od vY() {
        return this.KPbhi;
    }

    private static /* synthetic */ aI[] vZ() {
        long l2 = oldYq ^ 0x3308EB5E07A6L;
        aI[] aIArray = new aI[aI.wd("w", (int)30910, (long)(0x6A39D7DFE934F52FL ^ l2))];
        aIArray[0] = JkFqu;
        aIArray[1] = OOZEg;
        aIArray[2] = PGwMP;
        aIArray[3] = ejRch;
        aIArray[4] = fhJit;
        aIArray[5] = MltoB;
        aIArray[aI.wd("w", (int)27632, (long)(0x3827B5D46218E663L ^ l2))] = LYUHl;
        aIArray[aI.wd("w", (int)14316, (long)(0x2861EBABCD85BA7CL ^ l2))] = mMivt;
        return aIArray;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(aI.class, "wc", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

