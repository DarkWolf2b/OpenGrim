/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.textures.GpuTextureView
 *  net.minecraft.class_10017
 *  net.minecraft.class_11659
 *  net.minecraft.class_12075
 *  net.minecraft.class_1921
 *  net.minecraft.class_243
 *  net.minecraft.class_2960
 *  net.minecraft.class_308$class_11274
 *  net.minecraft.class_4587
 *  net.minecraft.class_4597$class_4598
 *  net.minecraft.class_4608
 *  net.minecraft.class_591
 *  net.minecraft.class_7833
 *  net.minecraft.class_898
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.GpuTextureView;
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
import net.minecraft.class_10017;
import net.minecraft.class_11659;
import net.minecraft.class_12075;
import net.minecraft.class_1921;
import net.minecraft.class_243;
import net.minecraft.class_2960;
import net.minecraft.class_308;
import net.minecraft.class_4587;
import net.minecraft.class_4597;
import net.minecraft.class_4608;
import net.minecraft.class_591;
import net.minecraft.class_7833;
import net.minecraft.class_898;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jC;
import sixtwo.jF;
import sixtwo.jI;
import sixtwo.js;
import sixtwo.mG;
import sixtwo.rD;

public final class jr {
    private static final float yNuSl = -10850.0f;
    private static jC ajsvX;
    private static final long xwomO;
    private static final long[] AIvOD;
    private static final Integer[] SIjrl;
    private static final Map avqBf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        xwomO = gb.aYR(-5308184261290161932L, 8937719512333401079L, MethodHandles.lookup().lookupClass()).a(270939487081972L);
        avqBf = new HashMap(13);
        long l = xwomO ^ 0x1ECC9D577A23L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "R\u0092\u00c5\u00d7\u0095R\u00f0p\u00ce\u0080\u0083\u00baEED\u00eb";
        int n2 = "R\u0092\u00c5\u00d7\u0095R\u00f0p\u00ce\u0080\u0083\u00baEED\u00eb".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        AIvOD = lArray;
        SIjrl = new Integer[2];
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    public static void bFt(Matrix3x2fc matrix3x2fc, class_591 class_5912, class_2960 class_29602, float f, float f2, float f3, float f4, float f5, float f6, float f7) {
        long l = xwomO ^ 0x1D48D000140DL;
        class_4587 class_45872 = jI.bIm(matrix3x2fc);
        String[] stringArray = js.bFF();
        class_45872.method_22903();
        class_45872.method_46416(f4 + f6 / 2.0f, f5 + f7, -10850.0f);
        class_45872.method_22905(f, f, f);
        class_45872.method_46416(0.0f, -0.0625f, 0.0f);
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        matrix4f.rotateAround((Quaternionfc)class_7833.field_40714.rotationDegrees(f2), 0.0f, -1.0625f, 0.0f);
        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(f3));
        jC jC2 = jr.bFv();
        class_4597.class_4598 class_45982 = jC2.bGU();
        GpuTextureView gpuTextureView = RenderSystem.outputColorTextureOverride;
        GpuTextureView gpuTextureView2 = RenderSystem.outputDepthTextureOverride;
        rD.dlmvG.field_1773.method_71114().method_71034(class_308.class_11274.field_60029);
        try {
            class_45872.method_22903();
            class_45872.method_34425((Matrix4fc)new Matrix4f().scaling(1.0f, 1.0f, -1.0f));
            class_45872.method_46416(0.0f, -1.5f, 0.0f);
            class_1921 class_19212 = class_5912.method_23500(class_29602);
            int n = mG.hoGuU.coa(255.0f * jF.bHy()).coh();
            class_5912.method_62100(class_45872, class_45982.method_73477(class_19212), (int)jr.bFz("k", (int)24324, (long)(0x5D8CEA5F4960283AL ^ l)), class_4608.field_21444, n);
            class_45872.method_22909();
        }
        finally {
            try {
                jC2.bGY();
            }
            finally {
                rD.dlmvG.field_1773.method_71114().method_71034(class_308.class_11274.field_60027);
                RenderSystem.outputColorTextureOverride = gpuTextureView;
                RenderSystem.outputDepthTextureOverride = gpuTextureView2;
            }
        }
        try {
            class_45872.method_22909();
            if (stringArray != null) {
                iS.bwK("zirxw");
            }
        }
        catch (MatchException matchException) {
            throw jr.bFw(matchException);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    static void bFu(Matrix3x2fc matrix3x2fc, class_10017 class_100172, float f, class_243 class_2432, Quaternionf quaternionf, Quaternionf quaternionf2, float f2, float f3, float f4, float f5) {
        long l = xwomO ^ 0x365609A5056AL;
        class_4587 class_45872 = jI.bIm(matrix3x2fc);
        String[] stringArray = js.bFF();
        class_45872.method_46416(f2 + f4 / 2.0f, f3 + f5 / 2.0f, -10850.0f);
        class_45872.method_22905(f, f, -f);
        GpuTextureView gpuTextureView = RenderSystem.outputColorTextureOverride;
        GpuTextureView gpuTextureView2 = RenderSystem.outputDepthTextureOverride;
        rD.dlmvG.field_1773.method_71114().method_71034(class_308.class_11274.field_60028);
        class_100172.field_61820 = (int)jr.bFz("k", (int)21672, (long)(0x584AE9707D0CB2F0L ^ l));
        jC jC2 = jr.bFv();
        js.bFA();
        try {
            class_45872.method_61958(class_2432);
            class_45872.method_22907((Quaternionfc)quaternionf);
            class_45872.method_22907((Quaternionfc)class_7833.field_40718.rotationDegrees(180.0f));
            class_12075 class_120752 = new class_12075();
            try {
                if (quaternionf2 != null) {
                    class_120752.field_63081 = quaternionf2.conjugate(new Quaternionf()).rotateY((float)Math.PI);
                }
            }
            catch (MatchException matchException) {
                throw jr.bFw(matchException);
            }
            class_898 class_8982 = rD.dlmvG.method_1561();
            class_8982.method_72976(class_100172, class_120752, 0.0, 0.0, 0.0, class_45872, (class_11659)jC2.bGT());
        }
        finally {
            try {
                js.bFB();
                jC2.bGY();
            }
            finally {
                rD.dlmvG.field_1773.method_71114().method_71034(class_308.class_11274.field_60027);
                RenderSystem.outputColorTextureOverride = gpuTextureView;
                RenderSystem.outputDepthTextureOverride = gpuTextureView2;
            }
        }
        try {
            if (iS.bwL() == null) {
                js.bFE(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw jr.bFw(matchException);
        }
    }

    private static int bFx(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5448;
        if (SIjrl[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = AIvOD[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])avqBf.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    avqBf.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jr", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jr.SIjrl[n2] = n3;
        }
        return SIjrl[n2];
    }

    private static int bFy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = jr.bFx(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static MatchException bFw(MatchException matchException) {
        return matchException;
    }

    private static jC bFv() {
        jC jC2;
        block4: {
            block5: {
                long l = xwomO ^ 0x7989230F614FL;
                String[] stringArray = js.bFF();
                try {
                    try {
                        jC2 = ajsvX;
                        if (stringArray != null) break block4;
                        if (jC2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jr.bFw(matchException);
                    }
                    ajsvX = new jC();
                }
                catch (MatchException matchException) {
                    throw jr.bFw(matchException);
                }
            }
            jC2 = ajsvX;
        }
        return jC2;
    }

    private static CallSite bFz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jr.class, "bFy", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
