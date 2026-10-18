/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_9799
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
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_9799;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jO;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.kh;
import sixtwo.lF;
import sixtwo.ld;
import sixtwo.mG;

public class jU
implements kh<jO> {
    private static final long iIURF;
    private static final String[] QaDIb;
    private static final String[] NMTNJ;
    private static final Map YBUhC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jU.iIURF = gb.aYR(6987229562181160938L, 7444533500002196327L, MethodHandles.lookup().lookupClass()).a(41633260938310L);
                jU.YBUhC = new HashMap<K, V>(13);
                var0 = jU.iIURF ^ 40564356388678L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[4];
                var7_4 = 0;
                var6_5 = "\"\u0093\u00d4:C5\u001d\u0094**\u00cb\u009f\u0018\u00ca3Lq*P\u00f0\u0000\u00bb@\n>\u00ce\u00fby\u00d79j\u00ef \u0006\u00f1\u00cd^\u0010\u00bd\u001b(e^T+`\u00ebV\u0083Z\u00fc\u0000\u00a2\u00b6\u00fe\u001d\u00e5\u0011V\u0099\u0095~\u0085\u00a2\f";
                var8_6 = "\"\u0093\u00d4:C5\u001d\u0094**\u00cb\u009f\u0018\u00ca3Lq*P\u00f0\u0000\u00bb@\n>\u00ce\u00fby\u00d79j\u00ef \u0006\u00f1\u00cd^\u0010\u00bd\u001b(e^T+`\u00ebV\u0083Z\u00fc\u0000\u00a2\u00b6\u00fe\u001d\u00e5\u0011V\u0099\u0095~\u0085\u00a2\f".length();
                var5_7 = 32;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = jU.bNc(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "@o\u0094&\u0097\u00f1%2}4\u00f15\u00ea\u00ff\u00a2*\u009c?\u0089g\u00a8Y\u0007>{\u00cb;\b1\t\u001fE\u00c6\u00ffW\u00a0\u00ff2r\u00f68\u009d\u0012|\u00c1L\u00d3ICDSd4\u00d7\u00aa5\u00fe\u008f\u0081\u00c4'p\u00f0\u00cd\u00abk\u000bA\u001f\u00bd\u00cdC\u00ed\u008eM\u008b\u000f?6\u00d8\u00a6\u001f\f\u00d3\u0099\t\u009c\u00a2\u00bfT\u0010\u00c8H<x\u009c\u0095";
                    var8_6 = "@o\u0094&\u0097\u00f1%2}4\u00f15\u00ea\u00ff\u00a2*\u009c?\u0089g\u00a8Y\u0007>{\u00cb;\b1\t\u001fE\u00c6\u00ffW\u00a0\u00ff2r\u00f68\u009d\u0012|\u00c1L\u00d3ICDSd4\u00d7\u00aa5\u00fe\u008f\u0081\u00c4'p\u00f0\u00cd\u00abk\u000bA\u001f\u00bd\u00cdC\u00ed\u008eM\u008b\u000f?6\u00d8\u00a6\u001f\f\u00d3\u0099\t\u009c\u00a2\u00bfT\u0010\u00c8H<x\u009c\u0095".length();
                    var5_7 = 40;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = jU.bNc(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
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
        jU.QaDIb = var9_3;
        jU.NMTNJ = new String[4];
    }

    private static Throwable bNb(Throwable throwable) {
        return throwable;
    }

    /*
     * Unable to fully structure code
     */
    public void bMX(jO var1_1) {
        block33: {
            block32: {
                block37: {
                    block31: {
                        block30: {
                            block35: {
                                var2_2 = jU.iIURF ^ 68493295521108L;
                                var5_3 = var1_1.bKi();
                                var4_4 = jT.bMR();
                                try {
                                    if (var5_3.cnW()) {
                                        return;
                                    }
                                }
                                catch (Throwable v0) {
                                    throw jU.bNb(v0);
                                }
                                var6_5 = Math.max(var1_1.bKm(), 0.001f);
                                var7_6 = var1_1.bKd();
                                var8_7 = var1_1.bKe();
                                cfr_temp_0 = var7_6 - 0.0f;
                                v1 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 < 0.0f ? -1 : 1);
                                if (var4_4) break block30;
                                if (v1 <= 0) break block31;
                                break block35;
                                catch (Throwable v2) {
                                    throw jU.bNb(v2);
                                }
                            }
                            try {
                                block36: {
                                    v3 = var8_7;
                                    v4 = 0.0f;
                                    if (var4_4) break block32;
                                    break block36;
                                    catch (Throwable v5) {
                                        throw jU.bNb(v5);
                                    }
                                }
                                cfr_temp_1 = v3 - v4;
                                v1 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 < 0.0f ? -1 : 1);
                            }
                            catch (Throwable v6) {
                                throw jU.bNb(v6);
                            }
                        }
                        if (v1 > 0) break block37;
                    }
                    return;
                }
                v3 = var1_1.bKb();
                v4 = var6_5;
            }
            var9_8 = v3 - v4;
            var10_9 = var1_1.bKc() - var6_5;
            var11_10 = var7_6 + var6_5 * 2.0f;
            var12_11 = var8_7 + var6_5 * 2.0f;
            var13_12 = new class_9799(class_290.field_1575.getVertexSize() * 4);
            try {
                var14_13 = new class_287(var13_12, VertexFormat.class_5596.field_27382, class_290.field_1575);
                jU.FroVm.uv_quad_region_color(var14_13, var1_1.bKa(), var9_8, var10_9, var11_10, var12_11, 0.0f, 0.0f, 1.0f, 1.0f, mG.hoGuU);
                var15_15 = var14_13.method_60800();
                try {
                    lF.cfB(kR.bAgoy, var15_15, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNa(sixtwo.jO float com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((jU)this, (jO)var1_1, (float)var6_5));
                    if (var4_4) break block33;
                }
                catch (Throwable var16_17) {
                    block34: {
                        try {
                            v7 = var15_15;
                            if (!var4_4) {
                                if (v7 == null) break block34;
                            }
                            ** GOTO lbl67
                        }
                        catch (Throwable v8) {
                            throw jU.bNb(v8);
                        }
                        try {
                            v7 = var15_15;
lbl67:
                            // 2 sources

                            v7.close();
                        }
                        catch (Throwable var17_18) {
                            var16_17.addSuppressed(var17_18);
                        }
                    }
                    throw var16_17;
                }
                try {
                    if (var15_15 != null) {
                        var15_15.close();
                    }
                }
                catch (Throwable v9) {
                    throw jU.bNb(v9);
                }
            }
            finally {
                var13_12.close();
            }
        }
    }

    private /* synthetic */ void bNa(jO jO2, float f, RenderPass renderPass) {
        this.bMY(jO2, f);
    }

    private static CallSite bNf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jU" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private float bMZ(ld ld2, float f, float f2) {
        float f3 = Math.min(f, f2);
        return Math.max(0.0f, Math.min(ld2.value(), f3));
    }

    private static String bNd(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4E50;
        if (NMTNJ[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])YBUhC.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YBUhC.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jU", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = QaDIb[n2].getBytes("ISO-8859-1");
            jU.NMTNJ[n2] = jU.bNc(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return NMTNJ[n2];
    }

    private static Object bNe(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jU.bNd(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private void bMY(jO jO2, float f) {
        long l = iIURF ^ 0x4A0619509FBFL;
        float f2 = jO2.bKd() * 0.5f;
        float f3 = jO2.bKe() * 0.5f;
        float f4 = this.bMZ(jO2.bKh(), f2, f3);
        jL.wcOYb.bJl();
        jL.wcOYb.bJr((String)((Object)jU.bNf("n", (int)27965, (long)(0x6F339A38470FEFD2L ^ l))), f2 / f, f3 / f);
        jL.wcOYb.bJq((String)((Object)jU.bNf("n", (int)16015, (long)(0xDC82D7219A7BC61L ^ l))), f4 / f);
        jL.wcOYb.bJu((String)((Object)jU.bNf("n", (int)624, (long)(0x64B10286D73C809DL ^ l))), jO2.bKi().con());
        jL.wcOYb.bJu((String)((Object)jU.bNf("n", (int)13885, (long)(0x7B8B272A2BA534D1L ^ l))), jF.bHw());
    }

    private static String bNc(byte[] byArray) {
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
            return MethodHandles.lookup().findStatic(jU.class, "bNe", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
