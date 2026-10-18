/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.textures.GpuTextureView
 *  net.minecraft.client.render.DiffuseLighting$Type
 *  net.minecraft.client.render.OverlayTexture
 *  net.minecraft.client.render.RenderLayer
 *  net.minecraft.client.render.VertexConsumerProvider$Immediate
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.entity.EntityRenderManager
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.EntityRenderState
 *  net.minecraft.client.render.state.CameraRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.client.render.DiffuseLighting;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.EntityRenderManager;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
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
        long l2 = xwomO ^ 0x1ECC9D577A23L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "R\u0092\u00c5\u00d7\u0095R\u00f0p\u00ce\u0080\u0083\u00baEED\u00eb";
        int n3 = "R\u0092\u00c5\u00d7\u0095R\u00f0p\u00ce\u0080\u0083\u00baEED\u00eb".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        AIvOD = lArray;
        SIjrl = new Integer[2];
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    public static void bFt(Matrix3x2fc matrix3x2fc, PlayerEntityModel playerEntityModel, Identifier identifier, float f2, float f3, float f4, float f5, float f6, float f7, float f8) {
        long l2 = xwomO ^ 0x1D48D000140DL;
        MatrixStack matrixStack = jI.bIm(matrix3x2fc);
        String[] stringArray = js.bFF();
        matrixStack.push();
        matrixStack.translate(f5 + f7 / 2.0f, f6 + f8, -10850.0f);
        matrixStack.scale(f2, f2, f2);
        matrixStack.translate(0.0f, -0.0625f, 0.0f);
        Matrix4f matrix4f = matrixStack.peek().getPositionMatrix();
        matrix4f.rotateAround((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(f3), 0.0f, -1.0625f, 0.0f);
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(f4));
        jC jC2 = jr.bFv();
        VertexConsumerProvider.Immediate immediate = jC2.bGU();
        GpuTextureView gpuTextureView = RenderSystem.outputColorTextureOverride;
        GpuTextureView gpuTextureView2 = RenderSystem.outputDepthTextureOverride;
        rD.dlmvG.gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.PLAYER_SKIN);
        try {
            matrixStack.push();
            matrixStack.multiplyPositionMatrix((Matrix4fc)new Matrix4f().scaling(1.0f, 1.0f, -1.0f));
            matrixStack.translate(0.0f, -1.5f, 0.0f);
            RenderLayer renderLayer = playerEntityModel.getLayer(identifier);
            int n2 = mG.hoGuU.coa(255.0f * jF.bHy()).coh();
            playerEntityModel.render(matrixStack, immediate.getBuffer(renderLayer), (int)jr.bFz("k", (int)24324, (long)(0x5D8CEA5F4960283AL ^ l2)), OverlayTexture.DEFAULT_UV, n2);
            matrixStack.pop();
        }
        finally {
            try {
                jC2.bGY();
            }
            finally {
                rD.dlmvG.gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.ITEMS_3D);
                RenderSystem.outputColorTextureOverride = gpuTextureView;
                RenderSystem.outputDepthTextureOverride = gpuTextureView2;
            }
        }
        try {
            matrixStack.pop();
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
    static void bFu(Matrix3x2fc matrix3x2fc, EntityRenderState entityRenderState, float f2, Vec3d vec3d, Quaternionf quaternionf, Quaternionf quaternionf2, float f3, float f4, float f5, float f6) {
        long l2 = xwomO ^ 0x365609A5056AL;
        MatrixStack matrixStack = jI.bIm(matrix3x2fc);
        String[] stringArray = js.bFF();
        matrixStack.translate(f3 + f5 / 2.0f, f4 + f6 / 2.0f, -10850.0f);
        matrixStack.scale(f2, f2, -f2);
        GpuTextureView gpuTextureView = RenderSystem.outputColorTextureOverride;
        GpuTextureView gpuTextureView2 = RenderSystem.outputDepthTextureOverride;
        rD.dlmvG.gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.ENTITY_IN_UI);
        entityRenderState.light = (int)jr.bFz("k", (int)21672, (long)(0x584AE9707D0CB2F0L ^ l2));
        jC jC2 = jr.bFv();
        js.bFA();
        try {
            matrixStack.translate(vec3d);
            matrixStack.multiply((Quaternionfc)quaternionf);
            matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Z.rotationDegrees(180.0f));
            CameraRenderState cameraRenderState = new CameraRenderState();
            try {
                if (quaternionf2 != null) {
                    cameraRenderState.orientation = quaternionf2.conjugate(new Quaternionf()).rotateY((float)Math.PI);
                }
            }
            catch (MatchException matchException) {
                throw jr.bFw(matchException);
            }
            EntityRenderManager entityRenderManager = rD.dlmvG.getEntityRenderDispatcher();
            entityRenderManager.render(entityRenderState, cameraRenderState, 0.0, 0.0, 0.0, matrixStack, (OrderedRenderCommandQueue)jC2.bGT());
        }
        finally {
            try {
                js.bFB();
                jC2.bGY();
            }
            finally {
                rD.dlmvG.gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.ITEMS_3D);
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

    private static int bFx(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5448;
        if (SIjrl[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = AIvOD[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])avqBf.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    avqBf.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jr.SIjrl[n3] = n4;
        }
        return SIjrl[n3];
    }

    private static int bFy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = jr.bFx(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException bFw(MatchException matchException) {
        return matchException;
    }

    private static jC bFv() {
        jC jC2;
        block4: {
            block5: {
                long l2 = xwomO ^ 0x7989230F614FL;
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

