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
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.mZ;

public final class mY
extends Enum<mY> {
    public static final /* enum */ mY riWOz;
    public static final /* enum */ mY ofgUy;
    public static final /* enum */ mY kGYlY;
    public static final /* enum */ mY LYeIf;
    public static final /* enum */ mY EKEPD;
    public static final /* enum */ mY nXBiI;
    public static final /* enum */ mY dgaxA;
    public static final /* enum */ mY QsHIY;
    public static final /* enum */ mY cjEmH;
    public static final /* enum */ mY hJBwZ;
    public static final /* enum */ mY fVXfs;
    public static final /* enum */ mY SQcHy;
    public static final /* enum */ mY QizSS;
    private final int eQCNL;
    private static final /* synthetic */ mY[] BmpOi;
    private static final long zDKBw;
    private static final String[] hLjXS;
    private static final String[] qbMjv;
    private static final Map TeVtD;
    private static final long[] fzAnG;
    private static final Integer[] UIauL;
    private static final Map mNcKz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private mY(int n3) {
        this.eQCNL = n3;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        mY.zDKBw = gb.aYR(-4170146750888990672L, -5783277496622966282L, MethodHandles.lookup().lookupClass()).a(99670126162367L);
                        var20 = mY.zDKBw ^ 33377401271851L;
                        mY.TeVtD = new HashMap<K, V>(13);
                        var11_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                            v2 = v2;
                            v2[var12_2] = (byte)(var20 << var12_2 * 8 >>> 56);
                        }
                        var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var18_3 = new String[7];
                        var16_4 = 0;
                        var15_5 = "K\u0087W\u00a8\u00a1\u00ef\u00f4Z\u00ff\u00b3F\u0085\u0080\u00bb'?\u0010\u0087\u00dd3\u0086\u00de\u00d1i`M\u0012\u0012\u00a9[\u00c0i\u0010\u0010\u00e9R\u0004\u00d8%Y \u0002\u00e8O\u009cs7\u00f6a\u00ba\u0010\u0001]\u00beP\u00af\u00f7\u0091\"\u00c7\u00bb\u00ac\u00f5o\u00a3&\u00c8@\u00f8\u0092*\u00f2\u00e1=+\u00a7o|)\u0099wK\u0018\u00ce|BS\t*\u00ff*\u009ba\u00fb\u00d7CV\u00c7oD4e\u009e\u00db\u001c\u00dc\u0097\u00de-Z\u00fc\u00dc\u00ab\u001b\u00d5\u00d4\u00b3\u0085-\u0092\t$q\u0011\u0016\u00c0_\u00d1D$\u00a7\u00ed";
                        var17_6 = "K\u0087W\u00a8\u00a1\u00ef\u00f4Z\u00ff\u00b3F\u0085\u0080\u00bb'?\u0010\u0087\u00dd3\u0086\u00de\u00d1i`M\u0012\u0012\u00a9[\u00c0i\u0010\u0010\u00e9R\u0004\u00d8%Y \u0002\u00e8O\u009cs7\u00f6a\u00ba\u0010\u0001]\u00beP\u00af\u00f7\u0091\"\u00c7\u00bb\u00ac\u00f5o\u00a3&\u00c8@\u00f8\u0092*\u00f2\u00e1=+\u00a7o|)\u0099wK\u0018\u00ce|BS\t*\u00ff*\u009ba\u00fb\u00d7CV\u00c7oD4e\u009e\u00db\u001c\u00dc\u0097\u00de-Z\u00fc\u00dc\u00ab\u001b\u00d5\u00d4\u00b3\u0085-\u0092\t$q\u0011\u0016\u00c0_\u00d1D$\u00a7\u00ed".length();
                        var14_7 = 16;
                        var13_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var13_8;
                            v4 = var15_5.substring(v3, v3 + var14_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = mY.crU(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            var15_5 = "\u008fB\u00fd]$E\u00d3L3 h\u00ec\u00e2k\u009b\u00ce\u0010\r)S\u0007\u001ci-\u000bc\u001a\bC\u00f5\u00a9Yv";
                            var17_6 = "\u008fB\u00fd]$E\u00d3L3 h\u00ec\u00e2k\u009b\u00ce\u0010\r)S\u0007\u001ci-\u000bc\u001a\bC\u00f5\u00a9Yv".length();
                            var14_7 = 16;
                            var13_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var13_8;
                                v4 = var15_5.substring(v6, v6 + var14_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = mY.crU(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var19_9 = var11_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                mY.hLjXS = var18_3;
                mY.qbMjv = new String[7];
                mY.mNcKz = new HashMap<K, V>(13);
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
                var6_12 = new long[24];
                var3_13 = 0;
                var4_14 = "\u00a8P\u00e1\u0083\u00bf}s\b\u00f2N\u00bec\u00f4\u00146\u00ddz\u00dd\u00c1\u00c4f\u0000.\u00f6H\u009dt\u00ea5\u00f1w\u007fk\u0000S\u00b2\u00b0\u00f5\u00fc\u00f0k\u00bb\u0003\u0012((\u001f\u0010\u0090\u0081(\u0012\u00cd\u00f1D\u00f0\u0091\u001e\u00bc<\u008eE-1\u00bf#\u009dNz\u00d7\u00aed\u00bc\u00a6\u00d7\u0087\u0017>\u0095oOP\u00a1\u0095\u001a!V\u008c\u00eds\u00e4\u001bmH\u00c0_C\u00e4f\u00ccG\u0005\u00b7\u008f\u00cf\u00ac\u0001%u\u00ec8Pt\u00b5q\u00a5\u00e98\\O\u00a0Y$\u00ec0\u0080\u00a0&\u00a0.|\u00ec\u00e5/\u00d4\u009fo-\u00b4\u00d9[!.\";\u0092J+\u00af\u00e1.\u001c\u00d5\u00cc\u00c4y\u0080`\u00e1\u00dd&\u00d6\u0083n\u00fbIqq'\u00b0x\u00e6\u0002\u0085\u001a\u00f8";
                var5_15 = "\u00a8P\u00e1\u0083\u00bf}s\b\u00f2N\u00bec\u00f4\u00146\u00ddz\u00dd\u00c1\u00c4f\u0000.\u00f6H\u009dt\u00ea5\u00f1w\u007fk\u0000S\u00b2\u00b0\u00f5\u00fc\u00f0k\u00bb\u0003\u0012((\u001f\u0010\u0090\u0081(\u0012\u00cd\u00f1D\u00f0\u0091\u001e\u00bc<\u008eE-1\u00bf#\u009dNz\u00d7\u00aed\u00bc\u00a6\u00d7\u0087\u0017>\u0095oOP\u00a1\u0095\u001a!V\u008c\u00eds\u00e4\u001bmH\u00c0_C\u00e4f\u00ccG\u0005\u00b7\u008f\u00cf\u00ac\u0001%u\u00ec8Pt\u00b5q\u00a5\u00e98\\O\u00a0Y$\u00ec0\u0080\u00a0&\u00a0.|\u00ec\u00e5/\u00d4\u009fo-\u00b4\u00d9[!.\";\u0092J+\u00af\u00e1.\u001c\u00d5\u00cc\u00c4y\u0080`\u00e1\u00dd&\u00d6\u0083n\u00fbIqq'\u00b0x\u00e6\u0002\u0085\u001a\u00f8".length();
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
lbl78:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u001eI\u00f1.\u0017nk\u009c\u00909(\u00c4~.+\u00d3";
                    var5_15 = "\u001eI\u00f1.\u0017nk\u009c\u00909(\u00c4~.+\u00d3".length();
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
lbl91:
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
lbl104:
                // 1 sources

                ** continue;
            }
        }
        mY.fzAnG = var6_12;
        mY.UIauL = new Integer[24];
        mY.riWOz = new mY(1);
        mY.ofgUy = new mY(4);
        mY.kGYlY = new mY(5);
        mY.LYeIf = new mY((int)mY.csa("c", (int)5813, (long)(7684601672013758936L ^ var20)));
        mY.EKEPD = new mY((int)mY.csa("c", (int)19549, (long)(5485242769999633201L ^ var20)));
        mY.nXBiI = new mY((int)mY.csa("c", (int)4821, (long)(7028161733177001379L ^ var20)));
        mY.dgaxA = new mY((int)mY.csa("c", (int)29621, (long)(5972372226790696130L ^ var20)));
        mY.QsHIY = new mY((int)mY.csa("c", (int)14765, (long)(5130674883951193821L ^ var20)));
        mY.cjEmH = new mY((int)mY.csa("c", (int)8318, (long)(6035528325983074059L ^ var20)));
        mY.hJBwZ = new mY((int)mY.csa("c", (int)2364, (long)(8977023937885494866L ^ var20)));
        mY.fVXfs = new mY((int)mY.csa("c", (int)25903, (long)(126152381186716228L ^ var20)));
        mY.SQcHy = new mY((int)mY.csa("c", (int)14454, (long)(8056142061109309212L ^ var20)));
        mY.QizSS = new mY((int)mY.csa("c", (int)13027, (long)(783289275735991709L ^ var20)));
        mY.BmpOi = mY.crS();
    }

    public static mY[] values() {
        return (mY[])BmpOi.clone();
    }

    public static mY valueOf(String string) {
        return Enum.valueOf(mY.class, string);
    }

    private static IllegalArgumentException crT(IllegalArgumentException illegalArgumentException) {
        return illegalArgumentException;
    }

    private static /* synthetic */ mY[] crS() {
        long l2 = zDKBw ^ 0x144A2F66E63DL;
        mY[] mYArray = new mY[mY.csa("c", (int)27307, (long)(0x341E462C76BBADC1L ^ l2))];
        mYArray[0] = riWOz;
        mYArray[1] = ofgUy;
        mYArray[2] = kGYlY;
        mYArray[3] = LYeIf;
        mYArray[4] = EKEPD;
        mYArray[5] = nXBiI;
        mYArray[mY.csa("c", (int)3738, (long)(0x5100047721D449F5L ^ l2))] = dgaxA;
        mYArray[mY.csa("c", (int)2466, (long)(0x3778764F29814ECCL ^ l2))] = QsHIY;
        mYArray[mY.csa("c", (int)29303, (long)(0x31CD9BC39DA03508L ^ l2))] = cjEmH;
        mYArray[mY.csa("c", (int)14662, (long)(0x13225ECC9D807E2FL ^ l2))] = hJBwZ;
        mYArray[mY.csa("c", (int)15550, (long)(0x6533B1FC66F4FBD3L ^ l2))] = fVXfs;
        mYArray[mY.csa("c", (int)18509, (long)(0x5AC5E28EB13E8F26L ^ l2))] = SQcHy;
        mYArray[mY.csa("c", (int)27384, (long)(0x230B246AEC2C2D94L ^ l2))] = QizSS;
        return mYArray;
    }

    private static int crY(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x32D1;
        if (UIauL[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = fzAnG[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])mNcKz.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    mNcKz.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mY", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mY.UIauL[n3] = n4;
        }
        return UIauL[n3];
    }

    private static CallSite csa(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public int crQ() {
        return this.eQCNL;
    }

    private static int crZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mY.crY(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static List<mY> crO() {
        return Arrays.stream(mY.values()).sorted(Comparator.comparing(mY2 -> mY2.eQCNL).reversed()).collect(Collectors.toList());
    }

    private static String crV(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1A8;
        if (qbMjv[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])TeVtD.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    TeVtD.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mY", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = hLjXS[n3].getBytes("ISO-8859-1");
            mY.qbMjv[n3] = mY.crU(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return qbMjv[n3];
    }

    private static String crU(byte[] byArray) {
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

    private static CallSite crX(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object crW(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = mY.crV(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Unable to fully structure code
     */
    public static int[] crP(int var0) {
        block16: {
            block15: {
                var1_1 = mY.zDKBw ^ 18052201166853L;
                var3_2 = mZ.csy();
                try {
                    v0 = var0;
                    if (var3_2 != null) break block15;
                    if (v0 > 0) {
                    }
                    ** GOTO lbl15
                }
                catch (IllegalArgumentException v1) {
                    throw mY.crT(v1);
                }
                v0 = var0;
            }
            try {
                if (v0 <= mY.csa("c", (int)20032, (long)(6846032983269955334L ^ var1_1))) break block16;
lbl15:
                // 2 sources

                throw new IllegalArgumentException(var0 + (String)mY.crX("t", (int)741, (long)(7598553972914628815L ^ var1_1)));
            }
            catch (IllegalArgumentException v2) {
                throw mY.crT(v2);
            }
        }
        var4_3 = mY.crO();
        var5_4 = 0;
        var6_5 = new StringBuilder();
        while (var0 > 0 && var5_4 < var4_3.size()) {
            block18: {
                block17: {
                    var7_6 = var4_3.get(var5_4);
                    try {
                        try {
                            v3 = var7_6.crQ();
                            v4 = var0;
                            if (var3_2 != null) break block17;
                            if (v3 <= v4) {
                            }
                            ** GOTO lbl45
                        }
                        catch (IllegalArgumentException v5) {
                            throw mY.crT(v5);
                        }
                        var6_5.append(var7_6.name());
                        v3 = var0;
                        v4 = var7_6.crQ();
                    }
                    catch (IllegalArgumentException v6) {
                        throw mY.crT(v6);
                    }
                }
                var0 = v3 - v4;
                try {
                    if (var3_2 == null) break block18;
lbl45:
                    // 2 sources

                    ++var5_4;
                }
                catch (IllegalArgumentException v7) {
                    throw mY.crT(v7);
                }
            }
            if (var3_2 == null) continue;
        }
        return mZ.csh(var6_5.toString());
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mY.class, "crZ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(mY.class, "crW", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

