/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_1011
 *  net.minecraft.class_1011$class_1012
 *  net.minecraft.class_2338
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_2960
 *  net.minecraft.class_4587
 *  net.minecraft.class_4588
 *  net.minecraft.class_9799
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.awt.image.BufferedImage;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1011;
import net.minecraft.class_2338;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_2960;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_9799;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.mG;
import sixtwo.rD;

public class iW {
    public static final int PDWiH;
    public static final class_2960 HaVqD;
    private static final long LVQnS;
    private static final long[] whWMv;
    private static final Integer[] VMVMH;
    private static final Map njwRb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    iW.LVQnS = gb.aYR(2284949245207991303L, 43599466955523576L, MethodHandles.lookup().lookupClass()).a(85259852255064L);
                    var15 = iW.LVQnS ^ 9595942733839L;
                    var12_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var15 >>> 56);
                    for (var13_2 = 1; var13_2 < 8; ++var13_2) {
                        v2 = v2;
                        v2[var13_2] = (byte)(var15 << var13_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var12_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var14_4 = var12_1.doFinal("\f\u00fa\u00e2\u00f2V\u0092\u0014@".getBytes("ISO-8859-1"));
                ** while (true)
                var11_3 = iW.bxy(var14_4).intern();
                iW.njwRb = new HashMap<K, V>(13);
                var0_5 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var15 >>> 56);
                for (var1_6 = 1; var1_6 < 8; ++var1_6) {
                    v5 = v5;
                    v5[var1_6] = (byte)(var15 << var1_6 * 8 >>> 56);
                }
                var0_5.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_7 = new long[10];
                var3_8 = 0;
                var4_9 = "qG\u00a4i\u009a\u008bH\u0082'\u00aa\u00d8\u008f4\u00d8\u0014\u009f3\u00f4\u00d9t\u00d8$\u0095\u00b2\u00be\u00dafG\u00f7Fj\u00ac\u00a3\u0013\r\u00ba\u00a9\u00f1\u00fa+\u00b1\u0087H- rE\u001eZ\u00c4\u0096\u00fa\u00fbo\u00e9\u0093\u00e3\u00b3\u00de}\u0004\u00ed)\u00dc";
                var5_10 = "qG\u00a4i\u009a\u008bH\u0082'\u00aa\u00d8\u008f4\u00d8\u0014\u009f3\u00f4\u00d9t\u00d8$\u0095\u00b2\u00be\u00dafG\u00f7Fj\u00ac\u00a3\u0013\r\u00ba\u00a9\u00f1\u00fa+\u00b1\u0087H- rE\u001eZ\u00c4\u0096\u00fa\u00fbo\u00e9\u0093\u00e3\u00b3\u00de}\u0004\u00ed)\u00dc".length();
                var2_11 = 0;
                while (true) {
                    var7_12 = var4_9.substring(var2_11, var2_11 += 8).getBytes("ISO-8859-1");
                    v6 = var6_7;
                    v7 = var3_8++;
                    v8 = ((long)var7_12[0] & 255L) << 56 | ((long)var7_12[1] & 255L) << 48 | ((long)var7_12[2] & 255L) << 40 | ((long)var7_12[3] & 255L) << 32 | ((long)var7_12[4] & 255L) << 24 | ((long)var7_12[5] & 255L) << 16 | ((long)var7_12[6] & 255L) << 8 | (long)var7_12[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_11 < var5_10) ** continue;
                    var4_9 = "\u00d0\u00e7k\u0016\bM!P\u00cd\u0095\u00ce$\u00a0\u0091 \u0085";
                    var5_10 = "\u00d0\u00e7k\u0016\bM!P\u00cd\u0095\u00ce$\u00a0\u0091 \u0085".length();
                    var2_11 = 0;
                    while (true) {
                        var7_12 = var4_9.substring(var2_11, var2_11 += 8).getBytes("ISO-8859-1");
                        v6 = var6_7;
                        v7 = var3_8++;
                        v8 = ((long)var7_12[0] & 255L) << 56 | ((long)var7_12[1] & 255L) << 48 | ((long)var7_12[2] & 255L) << 40 | ((long)var7_12[3] & 255L) << 32 | ((long)var7_12[4] & 255L) << 24 | ((long)var7_12[5] & 255L) << 16 | ((long)var7_12[6] & 255L) << 8 | (long)var7_12[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_11 < var5_10) ** continue;
                    break block11;
                    break;
                }
            }
            var8_13 = v8;
            var10_14 = var0_5.doFinal(new byte[]{(byte)(var8_13 >>> 56), (byte)(var8_13 >>> 48), (byte)(var8_13 >>> 40), (byte)(var8_13 >>> 32), (byte)(var8_13 >>> 24), (byte)(var8_13 >>> 16), (byte)(var8_13 >>> 8), (byte)var8_13});
            v10 = ((long)var10_14[0] & 255L) << 56 | ((long)var10_14[1] & 255L) << 48 | ((long)var10_14[2] & 255L) << 40 | ((long)var10_14[3] & 255L) << 32 | ((long)var10_14[4] & 255L) << 24 | ((long)var10_14[5] & 255L) << 16 | ((long)var10_14[6] & 255L) << 8 | (long)var10_14[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        iW.whWMv = var6_7;
        iW.VMVMH = new Integer[10];
        iW.PDWiH = (int)iW.bxB("o", (int)15365, (long)(var15 ^ 6144512136898043017L));
        iW.HaVqD = class_2960.method_60656((String)var11_3);
    }

    private static String bxy(byte[] byArray) {
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

    public static void bxq(class_4587 class_45872, class_2338 class_23382, mG mG2) {
        iW.bxs(class_45872, new class_238(class_23382), mG2, mG2, false);
    }

    private static int bxz(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x237F;
        if (VMVMH[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = whWMv[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])njwRb.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    njwRb.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iW", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            iW.VMVMH[n2] = n3;
        }
        return VMVMH[n2];
    }

    private static int bxA(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = iW.bxz(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite bxB(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static class_1011 bxu(BufferedImage bufferedImage) {
        long l = LVQnS ^ 0x3289A75F6EB8L;
        int n = bufferedImage.getWidth();
        String[] stringArray = jf.bBe();
        int n2 = bufferedImage.getHeight();
        class_1011 class_10112 = new class_1011(class_1011.class_1012.field_4997, n, n2, true);
        int n3 = 0;
        while (n3 < n2) {
            block5: {
                for (int i = 0; i < n; ++i) {
                    int n4 = bufferedImage.getRGB(i, n3);
                    int n5 = n4 >> iW.bxB("o", (int)18295, (long)(0x2448BFBC72B44146L ^ l)) & iW.bxB("o", (int)27083, (long)(0x1925FE5F683A6FFBL ^ l));
                    int n6 = n4 >> iW.bxB("o", (int)10085, (long)(0x6920D3A67DAE215CL ^ l)) & iW.bxB("o", (int)18538, (long)(0x236B9B87C549CE50L ^ l));
                    int n7 = n4 >> iW.bxB("o", (int)13589, (long)(0xA2F9BFB3810332AL ^ l)) & iW.bxB("o", (int)18538, (long)(0x236B9B87C549CE50L ^ l));
                    int n8 = n4 & iW.bxB("o", (int)18538, (long)(0x236B9B87C549CE50L ^ l));
                    int n9 = n5 << iW.bxB("o", (int)31072, (long)(0xB8A827675367F58L ^ l)) | n8 << iW.bxB("o", (int)6810, (long)(0xF93EF767B489CA7L ^ l)) | n7 << iW.bxB("o", (int)8684, (long)(0x4CEDA37766F1A7D2L ^ l)) | n6;
                    try {
                        class_10112.method_61941(i, n3, n9);
                        if (stringArray != null) {
                            if (stringArray != null) continue;
                            break;
                        }
                        break block5;
                    }
                    catch (MatchException matchException) {
                        throw iW.bxx(matchException);
                    }
                }
                ++n3;
            }
            if (stringArray != null) continue;
        }
        return class_10112;
    }

    public static void bxw(class_4587 class_45872, class_4588 class_45882, float f, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10) {
        long l = LVQnS ^ 0x694E58D905AL;
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_22915(f7, f8, f9, f10);
        String[] stringArray = jf.bBe();
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f4, f2, f6).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f3).method_22915(f7, f8, f9, f10);
        class_45882.method_22918((Matrix4fc)matrix4f, f, f5, f6).method_22915(f7, f8, f9, f10);
        String[] stringArray2 = stringArray;
        try {
            class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f3).method_22915(f7, f8, f9, f10);
            class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_22915(f7, f8, f9, f10);
            class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_22915(f7, f8, f9, f10);
            class_45882.method_22918((Matrix4fc)matrix4f, f4, f5, f6).method_22915(f7, f8, f9, f10);
            if (iS.bwL() == null) {
                jf.bBd(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw iW.bxx(matchException);
        }
    }

    public static void bxp(class_4587 class_45872, class_2338 class_23382, mG mG2, mG mG3, boolean bl) {
        iW.bxs(class_45872, new class_238(class_23382), mG2, mG3, bl);
    }

    /*
     * Unable to fully structure code
     */
    public static void bxs(class_4587 var0, class_238 var1_1, mG var2_2, mG var3_3, boolean var4_4) {
        block37: {
            block33: {
                block34: {
                    var5_5 = iW.LVQnS ^ 86620200070575L;
                    var8_6 = var1_1.method_997(rD.dlmvG.field_1773.method_19418().method_71156().method_22882());
                    var9_7 = var0.method_23760().method_23761();
                    var7_8 = jf.bBe();
                    try {
                        v0 = var4_4;
                        if (var7_8 == null) break block33;
                        if (v0 == 0) break block34;
                    }
                    catch (Throwable v1) {
                        throw iW.bxx(v1);
                    }
                    var10_9 = var3_3.con();
                    var11_11 = new class_9799(class_290.field_1576.getVertexSize() * iW.bxB("o", (int)20910, (long)(5876849983144350853L ^ var5_5)));
                    try {
                        var12_12 = new class_287(var11_11, VertexFormat.class_5596.field_27380, class_290.field_1576);
                        iW.bxv(var0, (class_4588)var12_12, var8_6.field_1323, var8_6.field_1322, var8_6.field_1321, var8_6.field_1320, var8_6.field_1325, var8_6.field_1324, var10_9[0], var10_9[1], var10_9[2], var10_9[3] / 2.0f);
                        var13_15 = var12_12.method_60800();
                        try {
                            lF.cfW(kR.ShkJj, var13_15);
                            if (var7_8 == null) break block34;
                        }
                        catch (Throwable var14_18) {
                            block36: {
                                try {
                                    v2 = var13_15;
                                    if (var7_8 != null) {
                                        if (v2 == null) break block36;
                                    }
                                    ** GOTO lbl32
                                }
                                catch (Throwable v3) {
                                    throw iW.bxx(v3);
                                }
                                try {
                                    v2 = var13_15;
lbl32:
                                    // 2 sources

                                    v2.close();
                                }
                                catch (Throwable var15_20) {
                                    var14_18.addSuppressed(var15_20);
                                }
                            }
                            throw var14_18;
                        }
                        try {
                            if (var13_15 != null) {
                                var13_15.close();
                            }
                        }
                        catch (Throwable v4) {
                            throw iW.bxx(v4);
                        }
                    }
                    catch (Throwable var12_13) {
                        try {
                            var11_11.close();
                        }
                        catch (Throwable var13_16) {
                            var12_13.addSuppressed(var13_16);
                        }
                        throw var12_13;
                    }
                    var11_11.close();
                }
                v0 = var2_2.coh();
            }
            var10_10 = v0;
            var11_11 = new class_9799(class_290.field_1576.getVertexSize() * iW.bxB("o", (int)31072, (long)(831756597744663631L ^ var5_5)));
            try {
                var12_12 = new class_287(var11_11, VertexFormat.class_5596.field_29344, class_290.field_1576);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1322, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1322, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1322, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1322, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1322, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1322, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1322, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1322, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1322, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1325, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1322, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1325, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1322, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1325, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1322, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1325, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1325, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1325, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1325, (float)var8_6.field_1321).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1325, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1320, (float)var8_6.field_1325, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1325, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1325, (float)var8_6.field_1324).method_39415(var10_10);
                var12_12.method_22918((Matrix4fc)var9_7, (float)var8_6.field_1323, (float)var8_6.field_1325, (float)var8_6.field_1321).method_39415(var10_10);
                var13_15 = var12_12.method_60800();
                try {
                    lF.cfW(kR.YTwxL, var13_15);
                    if (var7_8 == null) break block37;
                }
                catch (Throwable var14_19) {
                    block39: {
                        try {
                            v5 = var13_15;
                            if (var7_8 != null) {
                                if (v5 == null) break block39;
                            }
                            ** GOTO lbl124
                        }
                        catch (Throwable v6) {
                            throw iW.bxx(v6);
                        }
                        try {
                            v5 = var13_15;
lbl124:
                            // 2 sources

                            v5.close();
                        }
                        catch (Throwable var15_21) {
                            var14_19.addSuppressed(var15_21);
                        }
                    }
                    throw var14_19;
                }
                try {
                    if (var13_15 != null) {
                        var13_15.close();
                    }
                }
                catch (Throwable v7) {
                    throw iW.bxx(v7);
                }
            }
            catch (Throwable var12_14) {
                try {
                    var11_11.close();
                }
                catch (Throwable var13_17) {
                    var12_14.addSuppressed(var13_17);
                }
                throw var12_14;
            }
            var11_11.close();
        }
        try {
            if (var7_8 == null) {
                iS.bwK("phDL2b");
            }
        }
        catch (Throwable v8) {
            throw iW.bxx(v8);
        }
    }

    private static Throwable bxx(Throwable throwable) {
        return throwable;
    }

    public static void bxv(class_4587 class_45872, class_4588 class_45882, double d, double d2, double d3, double d4, double d5, double d6, float f, float f2, float f3, float f4) {
        iW.bxw(class_45872, class_45882, (float)d, (float)d2, (float)d3, (float)d4, (float)d5, (float)d6, f, f2, f3, f4);
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    public static void bxt(class_4587 var0, Iterable<class_243> var1_1, mG var2_2) {
        block30: {
            var3_3 = iW.LVQnS ^ 90968232533751L;
            var6_4 = new ArrayList<class_243>();
            var7_5 = var1_1.iterator();
            var5_6 = jf.bBe();
            while (var7_5.hasNext()) {
                var8_7 = var7_5.next();
                try {
                    var6_4.add(var8_7);
                    if (var5_6 != null) {
                        if (var5_6 != null) continue;
                        break;
                    }
                    ** GOTO lbl25
                }
                catch (Throwable v0) {
                    throw iW.bxx(v0);
                }
            }
            try {
                if (var6_4.isEmpty()) {
                    return;
                }
            }
            catch (Throwable v1) {
                throw iW.bxx(v1);
            }
            var0.method_22903();
            try {
                jI.bIr(var0);
lbl25:
                // 2 sources

                var7_5 = new class_9799(class_290.field_1576.getVertexSize() * var6_4.size());
                try {
                    block29: {
                        var8_7 = new class_287(var7_5, VertexFormat.class_5596.field_29345, class_290.field_1576);
                        var9_9 = var0.method_23760().method_23761();
                        for (class_243 var11_12 : var6_4) {
                            try {
                                v2 = var8_7;
                                if (var5_6 != null) {
                                    v2.method_22918((Matrix4fc)var9_9, (float)var11_12.field_1352, (float)var11_12.field_1351, (float)var11_12.field_1350).method_39415(var2_2.coh());
                                    if (var5_6 != null) continue;
                                    break;
                                }
                                break block29;
                            }
                            catch (Throwable v3) {
                                throw iW.bxx(v3);
                            }
                        }
                        v2 = var8_7;
                    }
                    var10_11 = v2.method_60800();
                    try {
                        lF.cfW(kR.jLECJ, var10_11);
                        if (var5_6 == null) break block30;
                    }
                    catch (Throwable var11_13) {
                        block31: {
                            try {
                                v4 = var10_11;
                                if (var5_6 != null) {
                                    if (v4 == null) break block31;
                                }
                                ** GOTO lbl57
                            }
                            catch (Throwable v5) {
                                throw iW.bxx(v5);
                            }
                            try {
                                v4 = var10_11;
lbl57:
                                // 2 sources

                                v4.close();
                            }
                            catch (Throwable var12_14) {
                                var11_13.addSuppressed(var12_14);
                            }
                        }
                        throw var11_13;
                    }
                    try {
                        if (var10_11 != null) {
                            var10_11.close();
                        }
                    }
                    catch (Throwable v6) {
                        throw iW.bxx(v6);
                    }
                }
                finally {
                    var7_5.close();
                }
            }
            finally {
                var0.method_22909();
            }
        }
    }

    public static void bxr(class_4587 class_45872, class_238 class_2382, mG mG2) {
        iW.bxs(class_45872, class_2382, mG2, mG2, false);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(iW.class, "bxA", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
