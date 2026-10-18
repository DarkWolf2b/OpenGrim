/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1268
 *  net.minecraft.class_1269
 *  net.minecraft.class_1269$class_9860
 *  net.minecraft.class_1269$class_9861
 *  net.minecraft.class_1297
 *  net.minecraft.class_1299
 *  net.minecraft.class_1304
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_1802
 *  net.minecraft.class_1922
 *  net.minecraft.class_1934
 *  net.minecraft.class_1937
 *  net.minecraft.class_2246
 *  net.minecraft.class_2248
 *  net.minecraft.class_2338
 *  net.minecraft.class_2338$class_2339
 *  net.minecraft.class_238
 *  net.minecraft.class_239$class_240
 *  net.minecraft.class_243
 *  net.minecraft.class_2596
 *  net.minecraft.class_2680
 *  net.minecraft.class_2828$class_2829
 *  net.minecraft.class_3532
 *  net.minecraft.class_3959
 *  net.minecraft.class_3959$class_242
 *  net.minecraft.class_3959$class_3960
 *  net.minecraft.class_3965
 *  net.minecraft.class_634
 *  net.minecraft.class_640
 *  net.minecraft.class_746
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.reflect.Field;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.security.Key;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1268;
import net.minecraft.class_1269;
import net.minecraft.class_1297;
import net.minecraft.class_1299;
import net.minecraft.class_1304;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_1802;
import net.minecraft.class_1922;
import net.minecraft.class_1934;
import net.minecraft.class_1937;
import net.minecraft.class_2246;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_238;
import net.minecraft.class_239;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2680;
import net.minecraft.class_2828;
import net.minecraft.class_3532;
import net.minecraft.class_3959;
import net.minecraft.class_3965;
import net.minecraft.class_634;
import net.minecraft.class_640;
import net.minecraft.class_746;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.pf;
import sixtwo.rD;

public class jg {
    public static final String gaLzx;
    public static final Set<class_1299<? extends class_1297>> hZYeV;
    public static final Set<class_1299<? extends class_1297>> fbEDU;
    public static final Set<class_1299<? extends class_1297>> skTlu;
    private static final String[] okfwP;
    private static int aIWFT;
    private static final long CcOBc;
    private static final long[] xEBCE;
    private static final Integer[] bSsdq;
    private static final Map KBkDM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block22: {
            block21: {
                block20: {
                    block19: {
                        jg.CcOBc = gb.aYR(-4077821107154291975L, -7390323926547277616L, MethodHandles.lookup().lookupClass()).a(133219813590623L);
                        var20 = jg.CcOBc ^ 116231379233606L;
                        if (jg.bCa() != 0) {
                            jg.bBY(14);
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
                        var11_3 = new String[5];
                        var17_4 = 0;
                        var16_5 = "&\u0080\"\u0088\t\u009f\u008b\u00a9\b\u00a0>\u00fbK\u008e^D8\b2\u0091P\u001f\u001b\u00c2\u00de\u001c";
                        var18_6 = "&\u0080\"\u0088\t\u009f\u008b\u00a9\b\u00a0>\u00fbK\u008e^D8\b2\u0091P\u001f\u001b\u00c2\u00de\u001c".length();
                        var15_7 = 8;
                        var14_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var14_8;
                            v4 = var16_5.substring(v3, v3 + var15_7);
                            v5 = -1;
                            break block19;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = jg.bCc(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            var16_5 = "\u00eb\u00ee:\u00df\u00cd9m\u00dcAzi,+\u009a\u0099\u001b\u0093\u00b7U-Q<\u00fc\u0016\bX\u00f5t\u00bcE\u00a8\u009a!";
                            var18_6 = "\u00eb\u00ee:\u00df\u00cd9m\u00dcAzi,+\u009a\u0099\u001b\u0093\u00b7U-Q<\u00fc\u0016\bX\u00f5t\u00bcE\u00a8\u009a!".length();
                            var15_7 = 24;
                            var14_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var14_8;
                                v4 = var16_5.substring(v6, v6 + var15_7);
                                v5 = 0;
                                break block19;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = jg.bCc(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            break block20;
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
                jg.gaLzx = var11_3[3];
                jg.KBkDM = new HashMap<K, V>(13);
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
                var6_12 = new long[26];
                var3_13 = 0;
                var4_14 = "\u0011\u0083\u00ad\u00e2\u009c_c5\u00c0|q/\f\u00a6\u00f9\u0005\u00a1\u0086\u00a0\u00eeU\u00a4\u00bb\u00a8\u0098\u008e\u0001\u00cf\u00ca\u0019\u0081\u0088t\u001ek\rD.\f\u00e8v\u008c\u0081\u00e8\u00a5U\u009c\u00d4\u00d7Q^p<\u00b6Ww2/\u007fOW\u00d80~J.\u00cbD3x\u0092\u0010\u00f8\u009ez\u00e6\u009bO\t\u00c7\u0005\u00ce\u00c0\u00f7\u00d1\u00b6\u0083\u00c4q\u00f9\u001bYl\u009d\u00a6\u0095e\f\u00c6\u00a0d!\u00c3\u00a9\u0014\u00de\u008f3\u00f4\u0005\\V\u0005\u00d9\u00ac\u00f3\u00f4n\u0084\u0097+\u00b0a0\u00ec\u00e7rc=\u00cb\u0090-z\u0002E\u00cb\u00d8\u001c\u00cc\u0096\u00c8\u0011\u0090\u0094.\u001b\u00e4z\u00a2nZ5dV](\u00db\u00dc\u0089\u0018U\u00bf\nd\u0092\n\u00f5$e\u00dd\u0098\u00a1\u00e4\u00feX5V\u00c0\u00fc\u00a9~\u0007`2\u0082\u00993\u007f*\u00f8\u00e9\u0012";
                var5_15 = "\u0011\u0083\u00ad\u00e2\u009c_c5\u00c0|q/\f\u00a6\u00f9\u0005\u00a1\u0086\u00a0\u00eeU\u00a4\u00bb\u00a8\u0098\u008e\u0001\u00cf\u00ca\u0019\u0081\u0088t\u001ek\rD.\f\u00e8v\u008c\u0081\u00e8\u00a5U\u009c\u00d4\u00d7Q^p<\u00b6Ww2/\u007fOW\u00d80~J.\u00cbD3x\u0092\u0010\u00f8\u009ez\u00e6\u009bO\t\u00c7\u0005\u00ce\u00c0\u00f7\u00d1\u00b6\u0083\u00c4q\u00f9\u001bYl\u009d\u00a6\u0095e\f\u00c6\u00a0d!\u00c3\u00a9\u0014\u00de\u008f3\u00f4\u0005\\V\u0005\u00d9\u00ac\u00f3\u00f4n\u0084\u0097+\u00b0a0\u00ec\u00e7rc=\u00cb\u0090-z\u0002E\u00cb\u00d8\u001c\u00cc\u0096\u00c8\u0011\u0090\u0094.\u001b\u00e4z\u00a2nZ5dV](\u00db\u00dc\u0089\u0018U\u00bf\nd\u0092\n\u00f5$e\u00dd\u0098\u00a1\u00e4\u00feX5V\u00c0\u00fc\u00a9~\u0007`2\u0082\u00993\u007f*\u00f8\u00e9\u0012".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block21;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "r\u0007\u00af\u00d2\u00fb\u0097\u001b\u001f\u001c\u00d2\u00c2\u00e1\u00f8\u0097\u00af\u00d7";
                    var5_15 = "r\u0007\u00af\u00d2\u00fb\u0097\u001b\u001f\u001c\u00d2\u00c2\u00e1\u00f8\u0097\u00af\u00d7".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block21;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block22;
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
lbl105:
                // 1 sources

                ** continue;
            }
        }
        jg.xEBCE = var6_12;
        jg.bSsdq = new Integer[26];
        jg.hZYeV = jg.bBS();
        jg.fbEDU = jg.bBU();
        jg.skTlu = jg.bBT();
        v15 = new String[jg.bCf("i", (int)6484, (long)(4565298335807544230L ^ var20))];
        v15[0] = "N";
        v15[1] = var11_3[0];
        v15[2] = "E";
        v15[3] = var11_3[4];
        v15[4] = "S";
        v15[5] = var11_3[2];
        v15[jg.bCf("i", (int)9041, (long)(6702167822508499371L ^ var20))] = "W";
        v15[jg.bCf("i", (int)22629, (long)(5563684398666701465L ^ var20))] = var11_3[1];
        jg.okfwP = v15;
    }

    public static double bBI(class_1297 class_12972) {
        return jg.bBJ(rD.dlmvG.field_1724.method_33571(), class_12972.method_5829());
    }

    private static CallSite bCf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static class_243 bBE(class_243 class_2432, float f, float f2) {
        class_243 class_2433;
        double d;
        block6: {
            double d2;
            block7: {
                long l = CcOBc ^ 0x11AED5655CDAL;
                d2 = class_2432.method_1027();
                String[] stringArray = jf.bBe();
                try {
                    try {
                        double d3 = d2 - 1.0E-7;
                        d = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                        if (stringArray == null) break block6;
                        if (d >= 0) break block7;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return class_243.field_1353;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            double d4 = d2 - 1.0;
            d = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
        }
        try {
            class_2433 = d > 0 ? class_2432.method_1029() : class_2432;
        }
        catch (MatchException matchException) {
            throw jg.bCb(matchException);
        }
        class_243 class_2434 = class_2433.method_1021((double)f);
        float f3 = class_3532.method_15374((double)(f2 * ((float)Math.PI / 180)));
        float f4 = class_3532.method_15362((double)(f2 * ((float)Math.PI / 180)));
        return new class_243(class_2434.field_1352 * (double)f4 - class_2434.field_1350 * (double)f3, class_2434.field_1351, class_2434.field_1350 * (double)f4 + class_2434.field_1352 * (double)f3);
    }

    public static int bBx(class_1657 class_16572) {
        class_640 class_6402;
        block10: {
            class_640 class_6403;
            block11: {
                class_634 class_6342;
                String[] stringArray;
                block8: {
                    block9: {
                        long l = CcOBc ^ 0x40F858592182L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                class_6342 = rD.dlmvG.method_1562();
                                if (stringArray == null) break block8;
                                if (class_6342 != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return 0;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    class_6342 = rD.dlmvG.method_1562();
                }
                class_6403 = class_6342.method_2871(class_16572.method_5667());
                try {
                    try {
                        class_6402 = class_6403;
                        if (stringArray == null) break block10;
                        if (class_6402 != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return 0;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            class_6402 = class_6403;
        }
        return class_6402.method_2959();
    }

    public static double bBJ(class_243 class_2432, class_238 class_2382) {
        class_243 class_2433 = jg.bBK(class_2432, class_2382);
        return jg.bBH(class_2433, class_2432);
    }

    public static boolean bBL(class_1297 class_12972, class_1297 class_12973) {
        double d;
        block2: {
            block3: {
                long l = CcOBc ^ 0x71BE319B3927L;
                class_243 class_2432 = class_12972.method_5631(0.0f, class_12972.method_5791());
                class_243 class_2433 = class_12973.method_73189().method_1035(class_12972.method_73189());
                class_2433 = new class_243(class_2433.field_1352, 0.0, class_2433.field_1350).method_1029();
                String[] stringArray = jf.bBe();
                try {
                    double d2 = class_2433.method_1026(class_2432) - 0.0;
                    d = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                    if (stringArray == null) break block2;
                    if (d >= 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                d = 1.0;
                break block2;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    public static boolean bBR(class_1269 class_12692) {
        boolean bl;
        block8: {
            block7: {
                class_1269 class_12693;
                block6: {
                    long l = CcOBc ^ 0x3B8506D6A578L;
                    String[] stringArray = jf.bBe();
                    try {
                        try {
                            class_12693 = class_12692;
                            if (stringArray == null) break block6;
                            if (!(class_12693 instanceof class_1269.class_9860)) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        class_12693 = class_12692;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                class_1269.class_9860 class_98602 = (class_1269.class_9860)class_12693;
                try {
                    if (class_98602.comp_2909() != class_1269.class_9861.field_52427) break block7;
                    bl = true;
                    break block8;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    private static int bCe(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = jg.bCd(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static int bCa() {
        int n = jg.bBZ();
        try {
            if (n == 0) {
                return 51;
            }
        }
        catch (MatchException matchException) {
            throw jg.bCb(matchException);
        }
        return 0;
    }

    private static int bCd(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x303B;
        if (bSsdq[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = xEBCE[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KBkDM.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KBkDM.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jg", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jg.bSsdq[n2] = n3;
        }
        return bSsdq[n2];
    }

    @Deprecated
    public static void bBr() {
        double d = (double)class_3532.method_15357((double)rD.dlmvG.field_1724.method_23317()) + 0.5;
        double d2 = (double)class_3532.method_15357((double)rD.dlmvG.field_1724.method_23321()) + 0.5;
        rD.dlmvG.field_1724.method_5814(d, rD.dlmvG.field_1724.method_23318(), d2);
        rD.dlmvG.field_1724.field_3944.method_52787((class_2596)new class_2828.class_2829(rD.dlmvG.field_1724.method_23317(), rD.dlmvG.field_1724.method_23318(), rD.dlmvG.field_1724.method_23321(), rD.dlmvG.field_1724.method_24828(), rD.dlmvG.field_1724.field_5976));
    }

    public static boolean bBP(class_1309 class_13092) {
        class_746 class_7462;
        class_1309 class_13093;
        block10: {
            block11: {
                String[] stringArray;
                block8: {
                    block9: {
                        long l = CcOBc ^ 0x3806B136A761L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                class_13093 = class_13092;
                                if (stringArray == null) break block8;
                                if (jg.bBQ(class_13093)) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    class_13093 = class_13092;
                }
                try {
                    try {
                        class_7462 = rD.dlmvG.field_1724;
                        if (stringArray == null) break block10;
                        if (class_13093 != class_7462) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            class_13093 = class_13092;
            class_7462 = rD.dlmvG.field_1724;
        }
        return jg.bBL((class_1297)class_13093, (class_1297)class_7462);
    }

    public static class_243 bBK(class_243 class_2432, class_238 class_2382) {
        double d = class_3532.method_15350((double)class_2432.field_1352, (double)class_2382.field_1323, (double)class_2382.field_1320);
        double d2 = class_3532.method_15350((double)class_2432.field_1351, (double)class_2382.field_1322, (double)class_2382.field_1325);
        double d3 = class_3532.method_15350((double)class_2432.field_1350, (double)class_2382.field_1321, (double)class_2382.field_1324);
        return new class_243(d, d2, d3);
    }

    public static int bBZ() {
        return aIWFT;
    }

    public static boolean bBM(class_1309 class_13092) {
        return jg.bBN(class_13092, 0.0);
    }

    public static boolean bBG(class_243 class_2432, float f) {
        double d;
        block2: {
            block3: {
                long l = CcOBc ^ 0x1BFA0A0B3405L;
                String[] stringArray = jf.bBe();
                try {
                    double d2 = jg.bBH(rD.dlmvG.field_1724.method_33571(), class_2432) - (double)f;
                    d = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                    if (stringArray == null) break block2;
                    if (d > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                d = 1.0;
                break block2;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    private static Exception bCb(Exception exception) {
        return exception;
    }

    public static Set<class_1299<? extends class_1297>> bBU() {
        long l = CcOBc ^ 0x5536162D0301L;
        Set<class_1299<? extends class_1297>> set = jg.bBS();
        class_1299[] class_1299Array = new class_1299[jg.bCf("i", (int)8041, (long)(0x2EFA7F0CDC6535C8L ^ l))];
        class_1299Array[0] = class_1299.field_6063;
        class_1299Array[1] = class_1299.field_6083;
        class_1299Array[2] = class_1299.field_42623;
        class_1299Array[3] = class_1299.field_6138;
        class_1299Array[4] = class_1299.field_6112;
        class_1299Array[5] = class_1299.field_6120;
        class_1299Array[jg.bCf("i", (int)24349, (long)(0x31804D4DF2C9F5B0L ^ l))] = class_1299.field_6131;
        class_1299Array[jg.bCf("i", (int)22629, (long)(0x4D3611FB8CD672DEL ^ l))] = class_1299.field_6089;
        class_1299Array[jg.bCf("i", (int)6776, (long)(0x233A5A59BCC8B0D6L ^ l))] = class_1299.field_42456;
        class_1299Array[jg.bCf("i", (int)31974, (long)(0x11CB3A166B5AD651L ^ l))] = class_1299.field_42460;
        class_1299Array[jg.bCf("i", (int)26754, (long)(0x49383BB5AFA84228L ^ l))] = class_1299.field_42457;
        class_1299Array[jg.bCf("i", (int)30494, (long)(0x7A05E1D44D6ADDB6L ^ l))] = class_1299.field_6103;
        class_1299Array[jg.bCf("i", (int)16810, (long)(0x1A7FE9EC5906B1CL ^ l))] = class_1299.field_6124;
        class_1299Array[jg.bCf("i", (int)9548, (long)(0x7F2221B9C3CF0FFEL ^ l))] = class_1299.field_6130;
        class_1299Array[jg.bCf("i", (int)31941, (long)(0x5BC64F1009355679L ^ l))] = class_1299.field_6133;
        class_1299Array[jg.bCf("i", (int)20955, (long)(0x428750170A297B65L ^ l))] = class_1299.field_6100;
        class_1299Array[jg.bCf("i", (int)27411, (long)(0x41B47A0D459AC1A9L ^ l))] = class_1299.field_6135;
        class_1299Array[jg.bCf("i", (int)25631, (long)(0x5186BA5E2D0CEA6L ^ l))] = class_1299.field_6122;
        class_1299Array[jg.bCf("i", (int)26487, (long)(0x127EAA4AD354DDBL ^ l))] = class_1299.field_6061;
        class_1299Array[jg.bCf("i", (int)7506, (long)(0x703C9BB97AA837E2L ^ l))] = class_1299.field_6044;
        class_1299Array[jg.bCf("i", (int)31896, (long)(0x7477598E93525637L ^ l))] = class_1299.field_6064;
        class_1299Array[jg.bCf("i", (int)18380, (long)(0x784F2EE258C76D78L ^ l))] = class_1299.field_6060;
        class_1299Array[jg.bCf("i", (int)32304, (long)(0x663E2568EE215488L ^ l))] = class_1299.field_6066;
        class_1299Array[jg.bCf("i", (int)11356, (long)(0x6C830121A14B86EFL ^ l))] = class_1299.field_6049;
        class_1299Array[jg.bCf("i", (int)23713, (long)(0x28096FF0A520760AL ^ l))] = class_1299.field_6129;
        class_1299Array[jg.bCf("i", (int)22966, (long)(0x257071E7889B731FL ^ l))] = class_1299.field_6043;
        class_1299Array[jg.bCf("i", (int)22845, (long)(0x4003B554F6B07382L ^ l))] = class_1299.field_28401;
        Set<class_1299> set2 = Set.of(class_1299Array);
        set.removeAll(set2);
        return set;
    }

    public static class_238 bBA(class_1297 class_12972) {
        class_243 class_2432 = class_12972.method_30950(rD.dlmvG.method_61966().method_60637(true));
        return jg.bBB(class_12972, class_2432);
    }

    public static float bBv(class_1309 class_13092, float f) {
        return f / class_13092.method_6063() * 100.0f;
    }

    public static class_238 bBz(class_1297 class_12972) {
        class_243 class_2432 = class_12972.method_73189();
        return new class_238(class_2432.field_1352 - (double)(class_12972.method_17681() / 2.0f), class_2432.field_1351, class_2432.field_1350 - (double)(class_12972.method_17681() / 2.0f), class_2432.field_1352 + (double)(class_12972.method_17681() / 2.0f), class_2432.field_1351 + (double)class_12972.method_17682(), class_2432.field_1350 + (double)(class_12972.method_17681() / 2.0f));
    }

    public static double bBH(class_243 class_2432, class_243 class_2433) {
        return class_2432.method_1022(class_2433);
    }

    public static Set<class_1299<? extends class_1297>> bBS() {
        long l = CcOBc ^ 0x159125EE7B08L;
        LinkedHashSet<class_1299<? extends class_1297>> linkedHashSet = new LinkedHashSet<class_1299<? extends class_1297>>();
        for (Field field : class_1299.class.getDeclaredFields()) {
            if (field.getType() != class_1299.class) continue;
            field.setAccessible(true);
            try {
                Object object = field.get(null);
                try {
                    if (!(object instanceof class_1299)) continue;
                    linkedHashSet.add((class_1299<? extends class_1297>)((class_1299)object));
                }
                catch (IllegalAccessException illegalAccessException) {
                    throw jg.bCb(illegalAccessException);
                }
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        return linkedHashSet;
    }

    public static boolean bBQ(class_1309 class_13092) {
        boolean bl;
        block40: {
            block41: {
                class_1268 class_12682;
                class_1268 class_12683;
                boolean bl2;
                String[] stringArray;
                block42: {
                    class_1268 class_12684;
                    block43: {
                        boolean bl3;
                        block44: {
                            boolean bl4;
                            block38: {
                                block39: {
                                    block36: {
                                        block37: {
                                            block34: {
                                                block35: {
                                                    long l = CcOBc ^ 0x4EC3FCD85C20L;
                                                    bl4 = class_13092.method_6047().method_31574(class_1802.field_8255);
                                                    stringArray = jf.bBe();
                                                    bl2 = class_13092.method_6079().method_31574(class_1802.field_8255);
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    bl = bl4;
                                                                    if (stringArray == null) break block34;
                                                                    if (bl) break block35;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw jg.bCb(matchException);
                                                                }
                                                                bl = bl2;
                                                                if (stringArray == null) break block34;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw jg.bCb(matchException);
                                                            }
                                                            if (bl) break block35;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jg.bCb(matchException);
                                                        }
                                                        return false;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jg.bCb(matchException);
                                                    }
                                                }
                                                bl = class_13092.method_6039();
                                            }
                                            try {
                                                try {
                                                    if (stringArray == null) break block36;
                                                    if (!bl) break block37;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jg.bCb(matchException);
                                                }
                                                return true;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                        }
                                        bl = class_13092.method_6115();
                                    }
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (stringArray == null) break block38;
                                                    if (!bl) break block39;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jg.bCb(matchException);
                                                }
                                                bl = class_13092.method_6030().method_31574(class_1802.field_8255);
                                                if (stringArray == null) break block38;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            if (!bl) break block39;
                                        }
                                        catch (MatchException matchException) {
                                            throw jg.bCb(matchException);
                                        }
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                }
                                bl = class_13092.method_6115();
                            }
                            try {
                                if (stringArray == null) break block40;
                                if (!bl) break block41;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            class_12684 = class_13092.method_6058();
                            try {
                                try {
                                    try {
                                        class_12683 = class_12684;
                                        class_12682 = class_1268.field_5808;
                                        if (stringArray == null) break block42;
                                        if (class_12683 != class_12682) break block43;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                    bl3 = bl4;
                                    if (stringArray == null) break block44;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                                if (!bl3) break block43;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            bl3 = true;
                        }
                        return bl3;
                    }
                    class_12683 = class_12684;
                    class_12682 = class_1268.field_5810;
                }
                try {
                    try {
                        try {
                            if (class_12683 != class_12682) break block41;
                            bl = bl2;
                            if (stringArray == null) break block40;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        if (!bl) break block41;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    public static boolean bBq() {
        return rD.dlmvG.field_1687.method_18456().parallelStream().filter(class_7422 -> {
            boolean bl;
            long l = CcOBc ^ 0x6C149F7D9C0EL;
            try {
                bl = rD.dlmvG.field_1724 != class_7422;
            }
            catch (MatchException matchException) {
                throw jg.bCb(matchException);
            }
            return bl;
        }).filter(class_7422 -> {
            double d;
            block2: {
                block3: {
                    long l = CcOBc ^ 0x425E81272986L;
                    String[] stringArray = jf.bBe();
                    try {
                        double d2 = class_7422.method_5858((class_1297)rD.dlmvG.field_1724) - 36.0;
                        d = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                        if (stringArray == null) break block2;
                        if (d >= 0) break block3;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    d = 1.0;
                    break block2;
                }
                d = 0.0;
            }
            return (boolean)d;
        }).anyMatch(class_1309::method_29504);
    }

    public static boolean bBC(class_1297 class_12972) {
        int n;
        block13: {
            class_1297 class_12973;
            String[] stringArray;
            class_1297 class_12974;
            long l;
            block11: {
                block12: {
                    l = CcOBc ^ 0x10478013F6F8L;
                    class_12974 = rD.dlmvG.method_1560();
                    stringArray = jf.bBe();
                    try {
                        try {
                            class_12973 = class_12974;
                            if (stringArray == null) break block11;
                            if (class_12973 != null) break block12;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                class_12973 = class_12972;
            }
            class_238 class_2382 = class_12973.method_5829();
            class_243 class_2432 = class_12974.method_33571();
            List<class_243> list = pf.cNi(class_2432, class_2382, (int)jg.bCf("i", (int)491, (long)(0x7E104B483B225EB2L ^ l)));
            for (class_243 class_2433 : list) {
                try {
                    double d = class_2432.method_1025(class_2433) - (double)1.0E-5f;
                    n = d == 0.0 ? 0 : (d < 0.0 ? -1 : 1);
                    if (stringArray == null) break block13;
                    if (n < 0) {
                        continue;
                    }
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                class_3959 class_39592 = new class_3959(class_2432, class_2433, class_3959.class_3960.field_17559, class_3959.class_242.field_1348, class_12974);
                class_3965 class_39652 = rD.dlmvG.field_1687.method_17742(class_39592);
                try {
                    if (class_39652.method_17783() == class_239.class_240.field_1333) {
                        return false;
                    }
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                if (stringArray != null) continue;
            }
            n = 1;
        }
        return n != 0;
    }

    public static class_1934 bBw(class_1657 class_16572) {
        class_640 class_6402;
        block10: {
            class_640 class_6403;
            block11: {
                class_634 class_6342;
                String[] stringArray;
                block8: {
                    block9: {
                        long l = CcOBc ^ 0x401DCBDC5A30L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                class_6342 = rD.dlmvG.method_1562();
                                if (stringArray == null) break block8;
                                if (class_6342 != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    class_6342 = rD.dlmvG.method_1562();
                }
                class_6403 = class_6342.method_2871(class_16572.method_5667());
                try {
                    try {
                        class_6402 = class_6403;
                        if (stringArray == null) break block10;
                        if (class_6402 != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            class_6402 = class_6403;
        }
        return class_6402.method_2958();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static double bBy(class_1297 class_12972) {
        long l = CcOBc ^ 0x19F668431784L;
        class_1937 class_19372 = class_12972.method_73183();
        class_2338 class_23382 = class_12972.method_24515();
        String[] stringArray = jf.bBe();
        for (int i = class_23382.method_10264(); i >= class_19372.method_31607(); --i) {
            boolean bl;
            class_2338 class_23383;
            block27: {
                class_2680 class_26802;
                block28: {
                    block26: {
                        class_2248 class_22482;
                        block25: {
                            block24: {
                                block23: {
                                    class_23383 = new class_2338(class_23382.method_10263(), i, class_23382.method_10260());
                                    class_26802 = class_19372.method_8320(class_23383);
                                    class_22482 = class_26802.method_26204();
                                    try {
                                        try {
                                            bl = class_22482.equals(class_2246.field_10382);
                                            if (stringArray == null) break block23;
                                            if (bl) return -1.0;
                                        }
                                        catch (MatchException matchException) {
                                            throw jg.bCb(matchException);
                                        }
                                        bl = class_22482.equals(class_2246.field_10164);
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (stringArray == null) break block24;
                                        if (bl) return -1.0;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                    bl = class_22482.equals(class_2246.field_10030);
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                            }
                            try {
                                try {
                                    if (stringArray == null) break block25;
                                    if (bl) return -1.0;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                                bl = class_22482.equals(class_2246.field_21211);
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block26;
                                if (bl) return -1.0;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            bl = class_22482.equals(class_2246.field_10343);
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block27;
                            if (!bl) break block28;
                            return -1.0;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                bl = class_26802.method_26220((class_1922)class_19372, class_23383).method_1110();
            }
            try {
                if (bl) continue;
                return class_12972.method_23318() - (double)class_23383.method_10264() - 1.0;
            }
            catch (MatchException matchException) {
                throw jg.bCb(matchException);
            }
        }
        return -1.0;
    }

    public static class_238 bBB(class_1297 class_12972, class_243 class_2432) {
        return new class_238(class_2432.field_1352 - (double)(class_12972.method_17681() / 2.0f), class_2432.field_1351, class_2432.field_1350 - (double)(class_12972.method_17681() / 2.0f), class_2432.field_1352 + (double)(class_12972.method_17681() / 2.0f), class_2432.field_1351 + (double)class_12972.method_17682(), class_2432.field_1350 + (double)(class_12972.method_17681() / 2.0f));
    }

    public static boolean bBD(class_1657 class_16572) {
        boolean bl;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    block16: {
                        block14: {
                            long l = CcOBc ^ 0x4BB63BDD1F87L;
                            stringArray = jf.bBe();
                            try {
                                try {
                                    bl = class_16572.method_6118(class_1304.field_6166).method_7960();
                                    if (stringArray == null) break block14;
                                    if (!bl) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                                bl = class_16572.method_6118(class_1304.field_6172).method_7960();
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (!bl) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            bl = class_16572.method_6118(class_1304.field_6174).method_7960();
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (!bl) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        bl = class_16572.method_6118(class_1304.field_6169).method_7960();
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (!bl) break block15;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                bl = true;
                break block18;
            }
            bl = false;
        }
        return bl;
    }

    public static String bBO(float f) {
        float f2;
        block2: {
            float f3;
            long l;
            block3: {
                l = CcOBc ^ 0x381761DCEEF2L;
                f3 = (f + 180.0f) % 360.0f;
                String[] stringArray = jf.bBe();
                try {
                    float f4 = f3 - 0.0f;
                    f2 = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                    if (stringArray == null) break block2;
                    if (f2 >= 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                f3 += 360.0f;
            }
            f2 = (int)Math.floor((f3 + 22.5f) / 45.0f) & jg.bCf("i", (int)22629, (long)(0x4D367CDAFB279F2DL ^ l));
        }
        float f5 = f2;
        return okfwP[f5];
    }

    public static boolean bBs(class_1309 class_13092) {
        int n;
        block11: {
            long l = CcOBc ^ 0x76B66E7CD193L;
            class_238 class_2382 = class_13092.method_5829();
            class_2338.class_2339 class_23392 = new class_2338.class_2339();
            String[] stringArray = jf.bBe();
            int n2 = class_3532.method_15357((double)class_2382.field_1323);
            block6: while (true) {
                int n3 = n2;
                block7: while (n3 <= class_3532.method_15357((double)class_2382.field_1320)) {
                    n = class_3532.method_15357((double)class_2382.field_1322);
                    if (stringArray == null) break block11;
                    int n4 = n;
                    block8: while (true) {
                        int n5 = n4;
                        block9: while (n5 <= class_3532.method_15357((double)class_2382.field_1325)) {
                            n3 = class_3532.method_15357((double)class_2382.field_1321);
                            if (stringArray == null) continue block7;
                            int n6 = n3;
                            while (n6 <= class_3532.method_15357((double)class_2382.field_1324)) {
                                block12: {
                                    block13: {
                                        boolean bl;
                                        block14: {
                                            try {
                                                class_23392.method_10103(n2, n4, n6);
                                                if (stringArray == null) break block12;
                                                n5 = class_2382.method_71152((class_2338)class_23392) ? 1 : 0;
                                                if (stringArray == null) continue block9;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            try {
                                                try {
                                                    if (n5 == 0) break block13;
                                                    bl = class_13092.method_73183().method_8320((class_2338)class_23392).method_27852(class_2246.field_10343);
                                                    if (stringArray == null) break block14;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jg.bCb(matchException);
                                                }
                                                if (!bl) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            bl = true;
                                        }
                                        return bl;
                                    }
                                    ++n6;
                                }
                                if (stringArray != null) continue;
                            }
                            ++n4;
                            if (stringArray != null) continue block8;
                        }
                        break;
                    }
                    ++n2;
                    if (stringArray != null) continue block6;
                }
                break;
            }
            n = 0;
        }
        return n != 0;
    }

    public static boolean bBV() {
        int n;
        block22: {
            block23: {
                String[] stringArray;
                long l;
                block20: {
                    block21: {
                        block18: {
                            block19: {
                                class_746 class_7462;
                                block16: {
                                    block17: {
                                        l = CcOBc ^ 0x62BB89257B9EL;
                                        stringArray = jf.bBe();
                                        try {
                                            try {
                                                class_7462 = rD.dlmvG.field_1724;
                                                if (stringArray == null) break block16;
                                                if (class_7462.method_5854() == null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw jg.bCb(matchException);
                                        }
                                    }
                                    class_7462 = rD.dlmvG.field_1724;
                                }
                                try {
                                    try {
                                        n = class_7462.method_5799();
                                        if (stringArray == null) break block18;
                                        if (n == 0) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                            }
                            n = rD.dlmvG.field_1724.method_31549().field_7477;
                        }
                        try {
                            try {
                                if (stringArray == null) break block20;
                                if (n == 0) break block21;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    n = rD.dlmvG.field_1724.method_7344().method_7586();
                }
                try {
                    try {
                        if (stringArray == null) break block22;
                        if (n < jg.bCf("i", (int)20644, (long)(0x51D7598F5DCD028AL ^ l))) break block23;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    n = 1;
                    break block22;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            n = 0;
        }
        return n != 0;
    }

    public static boolean bBF(class_243 class_2432) {
        double d;
        block2: {
            block3: {
                long l = CcOBc ^ 0x52A6E1C9FD26L;
                String[] stringArray = jf.bBe();
                try {
                    double d2 = jg.bBH(rD.dlmvG.field_1724.method_33571(), class_2432) - rD.dlmvG.field_1724.method_55754();
                    d = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                    if (stringArray == null) break block2;
                    if (d > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                d = 1.0;
                break block2;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    public static boolean bBt(class_1309 class_13092, float f) {
        float f2;
        block2: {
            block3: {
                long l = CcOBc ^ 0x104DAD686C57L;
                String[] stringArray = jf.bBe();
                try {
                    float f3 = class_13092.method_6032() - f - 0.0f;
                    f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                    if (stringArray == null) break block2;
                    if (f2 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                f2 = 1.0f;
                break block2;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    public static boolean bBN(class_1309 class_13092, double d) {
        class_238 class_2382 = rD.dlmvG.field_1724.method_5829().method_1009(d, 0.0, d);
        return class_13092.method_5829().method_994(class_2382);
    }

    public static void bBY(int n) {
        aIWFT = n;
    }

    public static Set<class_1299<? extends class_1297>> bBT() {
        long l = CcOBc ^ 0x104C128FE47BL;
        LinkedHashSet<class_1299<? extends class_1297>> linkedHashSet = new LinkedHashSet<class_1299<? extends class_1297>>();
        for (Field field : class_1299.class.getDeclaredFields()) {
            if (field.getType() != class_1299.class) continue;
            field.setAccessible(true);
            try {
                Type type;
                ParameterizedType parameterizedType;
                Type[] typeArray;
                Type type2;
                Object object = field.get(null);
                if (!(object instanceof class_1299) || !((type2 = field.getGenericType()) instanceof ParameterizedType) || (typeArray = (parameterizedType = (ParameterizedType)type2).getActualTypeArguments()).length != 1 || !((type = typeArray[0]) instanceof Class)) continue;
                Class clazz = (Class)type;
                try {
                    if (!class_1309.class.isAssignableFrom(clazz)) continue;
                    linkedHashSet.add((class_1299<? extends class_1297>)((class_1299)object));
                }
                catch (IllegalAccessException illegalAccessException) {
                    throw jg.bCb(illegalAccessException);
                }
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        linkedHashSet.remove(class_1299.field_6131);
        return linkedHashSet;
    }

    public static float bBu(float f) {
        return f / rD.dlmvG.field_1724.method_6063() * 100.0f;
    }

    private static String bCc(byte[] byArray) {
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

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jg.class, "bCe", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
