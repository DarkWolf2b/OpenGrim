/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_1044
 *  net.minecraft.class_1297
 *  net.minecraft.class_243
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_4587
 *  net.minecraft.class_7833
 *  net.minecraft.class_9799
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1044;
import net.minecraft.class_1297;
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_4587;
import net.minecraft.class_7833;
import net.minecraft.class_9799;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jI;
import sixtwo.jL;
import sixtwo.jk;
import sixtwo.kA;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lh;
import sixtwo.rD;

public final class kz {
    private static final kS aKqGY;
    private static final long ViaTx;
    private static final String[] rpCWe;
    private static final String[] lfBwE;
    private static final Map obVin;
    private static final long[] GbqLf;
    private static final Integer[] XzWak;
    private static final Map sFABK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    kz.ViaTx = gb.aYR(3160100636026436216L, 5719372574879310460L, MethodHandles.lookup().lookupClass()).a(31403975451301L);
                    kz.obVin = new HashMap<K, V>(13);
                    var11 = kz.ViaTx ^ 96630310835019L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u00e9\u00c4&e\u008f\u00a3\fy\u00deLK\u00c2\u00b5\u00e6\u0084\u00d6`\u00af\u00c9!\u00bdE\u00f6\u0012\u00e7\u00c3c\u00f3\u0082+6} \u00e0e@\u0097h\u0006\u00c6q\u00ff+\u00c3oQS\u0017\u0088\u009e\u00cb\u0013\u00bc\u00c7\u008a\u00ccp1<\u0082\u00e4b\u008ds\u00b1";
                    var19_6 = "\u00e9\u00c4&e\u008f\u00a3\fy\u00deLK\u00c2\u00b5\u00e6\u0084\u00d6`\u00af\u00c9!\u00bdE\u00f6\u0012\u00e7\u00c3c\u00f3\u0082+6} \u00e0e@\u0097h\u0006\u00c6q\u00ff+\u00c3oQS\u0017\u0088\u009e\u00cb\u0013\u00bc\u00c7\u008a\u00ccp1<\u0082\u00e4b\u008ds\u00b1".length();
                    var16_7 = 32;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = kz.bSl(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                kz.rpCWe = var20_3;
                kz.lfBwE = new String[2];
                kz.sFABK = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[5];
                var3_13 = 0;
                var4_14 = "R\u0000\u00adx\u00bdO\u008d\u00fe\u009b\u00e2B\u00db+Ew\u001e\u008f1\u00ef\u00b3tH\u00bc4";
                var5_15 = "R\u0000\u00adx\u00bdO\u008d\u00fe\u009b\u00e2B\u00db+Ew\u001e\u008f1\u00ef\u00b3tH\u00bc4".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "2(\u009fX\u0099\u008d\u0010X5iz\u0099$\u00b0~\u00af";
                    var5_15 = "2(\u009fX\u0099\u008d\u0010X5iz\u0099$\u00b0~\u00af".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        kz.GbqLf = var6_12;
        kz.XzWak = new Integer[5];
        kz.aKqGY = kS.bVE().duk(lh.aApMr).dul(false).dun(true).duo(false).dup();
    }

    private static Object bSn(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = kz.bSm(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static /* synthetic */ void bSj(class_1044 class_10442, RenderPass renderPass) {
        long l = ViaTx ^ 0x7656AEA45D0EL;
        try {
            jL.SUknV.bJl();
            jL.SUknV.bJu((String)((Object)kz.bSo("g", (int)22706, (long)(0xF253DC282B9AB5AL ^ l))), jF.bHw());
            if (class_10442 != null) {
                renderPass.bindTexture((String)((Object)kz.bSo("g", (int)28521, (long)(0x5B1B115257591C80L ^ l))), class_10442.method_71659(), class_10442.method_75484());
            }
        }
        catch (MatchException matchException) {
            throw kz.bSk(matchException);
        }
    }

    private static Throwable bSk(Throwable throwable) {
        return throwable;
    }

    private static int bSp(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2723;
        if (XzWak[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = GbqLf[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])sFABK.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    sFABK.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kz", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kz.XzWak[n2] = n3;
        }
        return XzWak[n2];
    }

    private static CallSite bSo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int bSq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = kz.bSp(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static String bSm(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4560;
        if (lfBwE[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])obVin.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    obVin.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kz", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = rpCWe[n2].getBytes("ISO-8859-1");
            kz.lfBwE[n2] = kz.bSl(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return lfBwE[n2];
    }

    private static CallSite bSr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bSl(byte[] byArray) {
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
     * Unable to fully structure code
     */
    public static void bSi(class_4587 var0, class_1297 var1_1, int var2_2, float var3_3, float var4_4) {
        block29: {
            var5_5 = kz.ViaTx ^ 3074298772986L;
            var8_6 = new class_9799(class_290.field_1576.getVertexSize() * kz.bSr("a", (int)15678, (long)(3426705825559317601L ^ var5_5)));
            var7_7 = kA.bSv();
            try {
                block28: {
                    block26: {
                        block25: {
                            var9_8 = new class_287(var8_6, VertexFormat.class_5596.field_27380, class_290.field_1576);
                            var10_10 = var0.method_23760().method_23761();
                            var11_12 = kA.bSt(var4_4);
                            var13_13 = Math.abs(1.0 + Math.sin(var11_12 - 0.44999998807907104)) / 2.0;
                            var15_14 = Math.abs(1.0 + Math.sin(var11_12)) / 2.0;
                            var17_15 = var1_1.method_30950(var4_4).method_1031(0.0, var13_13 * (double)var1_1.method_17682(), 0.0);
                            var18_16 = rD.dlmvG.field_1773.method_19418().method_71156();
                            var19_17 = var17_15.method_1020(var18_16);
                            var20_18 = var1_1.field_5971 + (var1_1.method_23318() - var1_1.field_5971) * (double)var4_4 - var18_16.field_1351 + var15_14 * (double)var1_1.method_17682();
                            var22_19 = kz.bSr("a", (int)18164, (long)(2136292836833327017L ^ var5_5));
                            for (var23_20 = 0; var23_20 <= var22_19; ++var23_20) {
                                var24_22 = (float)(var19_17.field_1352 + Math.cos((float)var23_20 * 6.2831855f / (float)var22_19) * (double)var1_1.method_17681() * (double)var3_3);
                                var25_24 = (float)(var19_17.field_1350 + Math.sin((float)var23_20 * 6.2831855f / (float)var22_19) * (double)var1_1.method_17681() * (double)var3_3);
                                try {
                                    var9_8.method_22918((Matrix4fc)var10_10, var24_22, (float)var20_18, var25_24).method_39415(jk.bDv(var2_2, (int)kz.bSr("a", (int)28421, (long)(3114213708417130073L ^ var5_5))));
                                    v0 = var9_8;
                                    if (var7_7 != null) {
                                        v0.method_22918((Matrix4fc)var10_10, var24_22, (float)var19_17.field_1351, var25_24).method_39415(jk.bDv(var2_2, 0));
                                        if (var7_7 != null) continue;
                                        break;
                                    }
                                    break block25;
                                }
                                catch (Throwable v1) {
                                    throw kz.bSk(v1);
                                }
                            }
                            v0 = var9_8;
                        }
                        var23_21 = v0.method_60794();
                        try {
                            block27: {
                                v2 = var23_21;
                                if (var7_7 == null) break block26;
                                try {
                                    block31: {
                                        if (v2 == null) break block27;
                                        break block31;
                                        catch (Throwable v3) {
                                            throw kz.bSk(v3);
                                        }
                                    }
                                    lF.cfW(kR.PMnQE, var23_21);
                                }
                                catch (Throwable v4) {
                                    throw kz.bSk(v4);
                                }
                            }
                            v2 = var23_21;
                        }
                        catch (Throwable var24_23) {
                            block30: {
                                try {
                                    v5 = var23_21;
                                    if (var7_7 != null) {
                                        if (v5 == null) break block30;
                                    }
                                    ** GOTO lbl60
                                }
                                catch (Throwable v6) {
                                    throw kz.bSk(v6);
                                }
                                try {
                                    v5 = var23_21;
lbl60:
                                    // 2 sources

                                    v5.close();
                                }
                                catch (Throwable var25_25) {
                                    var24_23.addSuppressed(var25_25);
                                }
                            }
                            throw var24_23;
                        }
                    }
                    try {
                        if (var7_7 == null) break block28;
                        if (v2 == null) break block29;
                    }
                    catch (Throwable v7) {
                        throw kz.bSk(v7);
                    }
                    v2 = var23_21;
                }
                v2.close();
            }
            finally {
                var8_6.close();
            }
        }
        try {
            if (iS.bwL() == null) {
                kA.bSu("rrXmCb");
            }
        }
        catch (Throwable v8) {
            throw kz.bSk(v8);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    public static void bSh(class_243 var0, class_4587 var1_1, float var2_2, int var3_3, class_1044 var4_4) {
        block20: {
            var5_5 = kz.ViaTx ^ 60416891214860L;
            var7_6 = kA.bSv();
            try {
                var1_1.method_22903();
                jI.bIs(var1_1, var0);
                var1_1.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(90.0f));
                var8_7 = var2_2 * 2.0f;
                var9_8 = new class_9799(class_290.field_20888.getVertexSize() * 4);
                try {
                    var10_9 = new class_287(var9_8, VertexFormat.class_5596.field_27382, class_290.field_20888);
                    var11_11 = var1_1.method_23760().method_23761();
                    var10_9.method_22918((Matrix4fc)var11_11, -var2_2, -var2_2 + var8_7, 0.0f).method_39415(var3_3).method_22913(0.0f, 1.0f).method_22921(0, (int)kz.bSr("a", (int)4097, (long)(5703019465875390636L ^ var5_5)));
                    var10_9.method_22918((Matrix4fc)var11_11, -var2_2 + var8_7, -var2_2 + var8_7, 0.0f).method_39415(var3_3).method_22913(1.0f, 1.0f).method_22921(0, (int)kz.bSr("a", (int)28672, (long)(2317038945494196392L ^ var5_5)));
                    var10_9.method_22918((Matrix4fc)var11_11, -var2_2 + var8_7, -var2_2, 0.0f).method_39415(var3_3).method_22913(1.0f, 0.0f).method_22921(0, (int)kz.bSr("a", (int)28672, (long)(2317038945494196392L ^ var5_5)));
                    var10_9.method_22918((Matrix4fc)var11_11, -var2_2, -var2_2, 0.0f).method_39415(var3_3).method_22913(0.0f, 0.0f).method_22921(0, (int)kz.bSr("a", (int)28672, (long)(2317038945494196392L ^ var5_5)));
                    var12_13 = var10_9.method_60800();
                    try {
                        var13_14 = kR.Dmmsd.bUZ(kz.aKqGY);
                        lF.cfD(var13_14, var12_13, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bSj(net.minecraft.class_1044 com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((class_1044)var4_4));
                        if (var7_6 == null) break block20;
                    }
                    catch (Throwable var13_15) {
                        block22: {
                            try {
                                v0 = var12_13;
                                if (var7_6 != null) {
                                    if (v0 == null) break block22;
                                }
                                ** GOTO lbl36
                            }
                            catch (Throwable v1) {
                                throw kz.bSk(v1);
                            }
                            try {
                                v0 = var12_13;
lbl36:
                                // 2 sources

                                v0.close();
                            }
                            catch (Throwable var14_16) {
                                var13_15.addSuppressed(var14_16);
                            }
                        }
                        throw var13_15;
                    }
                    try {
                        if (var12_13 != null) {
                            var12_13.close();
                        }
                    }
                    catch (Throwable v2) {
                        throw kz.bSk(v2);
                    }
                }
                catch (Throwable var10_10) {
                    try {
                        var9_8.close();
                    }
                    catch (Throwable var11_12) {
                        var10_10.addSuppressed(var11_12);
                    }
                    throw var10_10;
                }
                var9_8.close();
            }
            finally {
                var1_1.method_22909();
            }
        }
        try {
            if (var7_6 == null) {
                iS.bwK("mGctS");
            }
        }
        catch (Throwable v3) {
            throw kz.bSk(v3);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kz.class, "bSn", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(kz.class, "bSq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
