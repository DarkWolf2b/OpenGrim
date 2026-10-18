/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.OverlayTexture
 *  net.minecraft.client.render.RenderLayer
 *  net.minecraft.client.render.RenderLayers
 *  net.minecraft.client.render.VertexConsumer
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.entity.feature.FeatureRenderer
 *  net.minecraft.client.render.entity.feature.FeatureRendererContext
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.client.util.math.MatrixStack$Entry
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EquipmentSlot
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
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
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.feature.FeatureRenderer;
import net.minecraft.client.render.entity.feature.FeatureRendererContext;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.qu;
import sixtwo.rD;

public class qC
extends FeatureRenderer<PlayerEntityRenderState, PlayerEntityModel> {
    private static boolean ajGhE;
    private static final long PftoW;
    private static final long[] uJLFk;
    private static final Integer[] lcjyD;
    private static final Map KgUBe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qC(FeatureRendererContext<PlayerEntityRenderState, PlayerEntityModel> featureRendererContext) {
        super(featureRendererContext);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                qC.PftoW = gb.aYR(-4265989503287534394L, 7359482773001144905L, MethodHandles.lookup().lookupClass()).a(212318759050670L);
                qC.KgUBe = new HashMap<K, V>(13);
                qC.cZx(true);
                var0 = qC.PftoW ^ 120307984891374L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[4];
                var5_4 = 0;
                var6_5 = "6\u00b5\u00af\u00cc.=\u0096\u00ad\u008c\u00d2\u0080\u00f2_\u009a\u00b2\u00bf";
                var7_6 = "6\u00b5\u00af\u00cc.=\u0096\u00ad\u008c\u00d2\u0080\u00f2_\u009a\u00b2\u00bf".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "n\u00c3\u00cdo\u001d\u00f7\u0095C\u00f6\u0010\u000b_\u001a\u00dc\u00a0\u008c";
                    var7_6 = "n\u00c3\u00cdo\u001d\u00f7\u0095C\u00f6\u0010\u000b_\u001a\u00dc\u00a0\u008c".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl53:
                // 1 sources

                ** continue;
            }
        }
        qC.uJLFk = var8_3;
        qC.lcjyD = new Integer[4];
    }

    public static void cZx(boolean bl2) {
        ajGhE = bl2;
    }

    private static int cZC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = qC.cZB(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static boolean cZy() {
        return ajGhE;
    }

    private static MatchException cZA(MatchException matchException) {
        return matchException;
    }

    private static void cZu(MatrixStack matrixStack, VertexConsumer vertexConsumer, int n2) {
        block14: {
            float f2;
            float f3;
            int n3;
            boolean bl2;
            Matrix4f matrix4f;
            long l2;
            block13: {
                block12: {
                    l2 = PftoW ^ 0x1DFE375155ABL;
                    matrixStack.push();
                    matrixStack.translate(1.0, -0.10000001, 0.1);
                    matrixStack.scale(1.875f, 1.875f, 1.0f);
                    matrixStack.translate(-0.9375f, -0.0625f, 0.0f);
                    matrixStack.scale(1.0f, 1.0f, 0.7f);
                    MatrixStack.Entry entry = matrixStack.peek();
                    matrix4f = entry.getPositionMatrix();
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, 0.0f, 0.0f).color((int)qC.cZD("a", (int)25439, (long)(0x5EBC8EB67E363979L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, 1.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, 0.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, 1.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, 1.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, 1.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, 1.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, 1.0f);
                    boolean bl3 = qC.cZy();
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, 1.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, -1.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, 1.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, -1.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, 0.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, -1.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, 0.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 0.0f, -1.0f);
                    bl2 = bl3;
                    for (n3 = 0; n3 < qC.cZD("a", (int)12780, (long)(0x433FA1EC06B26BC9L ^ l2)); ++n3) {
                        f3 = (float)n3 / 32.0f;
                        f2 = 1.0f - f3 - 0.015625f;
                        vertexConsumer.vertex((Matrix4fc)matrix4f, f3, 0.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), -1.0f, 0.0f, 0.0f);
                        vertexConsumer.vertex((Matrix4fc)matrix4f, f3, 0.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), -1.0f, 0.0f, 0.0f);
                        vertexConsumer.vertex((Matrix4fc)matrix4f, f3, 1.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), -1.0f, 0.0f, 0.0f);
                        vertexConsumer.vertex((Matrix4fc)matrix4f, f3, 1.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), -1.0f, 0.0f, 0.0f);
                        float f4 = f3 + 0.03125f;
                        try {
                            vertexConsumer.vertex((Matrix4fc)matrix4f, f4, 1.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 1.0f, 0.0f, 0.0f);
                            vertexConsumer.vertex((Matrix4fc)matrix4f, f4, 1.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 0.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 1.0f, 0.0f, 0.0f);
                            vertexConsumer.vertex((Matrix4fc)matrix4f, f4, 0.0f, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 1.0f, 0.0f, 0.0f);
                            vertexConsumer.vertex((Matrix4fc)matrix4f, f4, 0.0f, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(f2, 1.0f).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 1.0f, 0.0f, 0.0f);
                            if (bl2) {
                                if (bl2) continue;
                                break;
                            }
                            break block12;
                        }
                        catch (MatchException matchException) {
                            throw qC.cZA(matchException);
                        }
                    }
                    n3 = 0;
                }
                while (n3 < qC.cZD("a", (int)3484, (long)(0x3E7E1C5B402A57BBL ^ l2))) {
                    f3 = (float)n3 / 32.0f + 0.03125f;
                    f2 = 1.0f - (float)n3 / 32.0f - 0.015625f;
                    try {
                        vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, f3, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 1.0f, 0.0f);
                        vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, f3, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 1.0f, 0.0f);
                        vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, f3, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 1.0f, 0.0f);
                        vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, f3, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, 1.0f, 0.0f);
                        ++n3;
                        if (bl2) {
                            if (bl2) continue;
                            break;
                        }
                        break block13;
                    }
                    catch (MatchException matchException) {
                        throw qC.cZA(matchException);
                    }
                }
                n3 = 0;
            }
            while (n3 < qC.cZD("a", (int)3484, (long)(0x3E7E1C5B402A57BBL ^ l2))) {
                f3 = (float)n3 / 32.0f;
                f2 = 1.0f - f3 - 0.015625f;
                try {
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, f3, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, -1.0f, 0.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, f3, 0.0f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, -1.0f, 0.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 0.0f, f3, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(1.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, -1.0f, 0.0f);
                    vertexConsumer.vertex((Matrix4fc)matrix4f, 1.0f, f3, -0.078125f).color((int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2)), (int)qC.cZD("a", (int)25340, (long)(0x135872915BB138D8L ^ l2))).texture(0.0f, f2).overlay(OverlayTexture.DEFAULT_UV).light(n2).normal(matrixStack.peek(), 0.0f, -1.0f, 0.0f);
                    ++n3;
                    if (bl2) {
                        if (bl2) continue;
                        break;
                    }
                    break block14;
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
            }
            matrixStack.pop();
        }
    }

    private static int cZB(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5353;
        if (lcjyD[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = uJLFk[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KgUBe.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KgUBe.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/qC", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            qC.lcjyD[n3] = n4;
        }
        return lcjyD[n3];
    }

    public static boolean cZz() {
        boolean bl2 = qC.cZy();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        return false;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cZt(MatrixStack matrixStack, OrderedRenderCommandQueue orderedRenderCommandQueue, int n2, PlayerEntityRenderState playerEntityRenderState, float f2, float f3) {
        float f4;
        Entity entity;
        boolean bl2;
        block28: {
            boolean bl3;
            block27: {
                long l2 = PftoW ^ 0x4D2800796F00L;
                bl2 = qC.cZy();
                try {
                    if (rD.dlmvG.world == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
                try {
                    bl3 = qu.cmARD.get();
                    if (!bl2) break block27;
                    if (bl3) return;
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
                bl3 = hF.BQuMu;
            }
            if (!bl3) {
                return;
            }
            Entity entity2 = rD.dlmvG.world.getEntityById(playerEntityRenderState.id);
            try {
                try {
                    entity = entity2;
                    if (!bl2) break block28;
                    if (!(entity instanceof AbstractClientPlayerEntity)) return;
                }
                catch (MatchException matchException) {
                    throw qC.cZA(matchException);
                }
                entity = entity2;
            }
            catch (MatchException matchException) {
                throw qC.cZA(matchException);
            }
        }
        AbstractClientPlayerEntity abstractClientPlayerEntity = (AbstractClientPlayerEntity)entity;
        try {
            if (!bl2) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        try {
            if (abstractClientPlayerEntity.isInvisible()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        ee ee2 = rD.dlJ().aZx(ee.class);
        try {
            if (ee2.arM().WF()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        ItemStack itemStack = abstractClientPlayerEntity.getEquippedStack(EquipmentSlot.CHEST);
        try {
            if (itemStack.isOf(Items.ELYTRA)) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        Identifier identifier = rD.dlR().cZL(abstractClientPlayerEntity);
        try {
            if (identifier == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        boolean bl4 = abstractClientPlayerEntity.isInSneakingPose();
        try {
            f4 = bl4 ? 1.0f : 0.0f;
        }
        catch (MatchException matchException) {
            throw qC.cZA(matchException);
        }
        float f5 = f4;
        float f6 = MathHelper.lerp((float)f5, (float)0.2f, (float)0.185f);
        float f7 = MathHelper.lerp((float)f5, (float)0.125f, (float)0.175f);
        float f8 = MathHelper.lerp((float)f5, (float)24.0f, (float)33.0f);
        Vector3f vector3f = new Vector3f(MathHelper.lerp((float)f5, (float)0.0f, (float)1.5f), 0.0f, MathHelper.lerp((float)f5, (float)1.0f, (float)2.5f));
        vector3f.normalize();
        Vector3f vector3f2 = new Vector3f(MathHelper.lerp((float)f5, (float)0.0f, (float)1.5f), 0.0f, MathHelper.lerp((float)f5, (float)-1.0f, (float)-2.5f));
        vector3f2.normalize();
        float f9 = f8 + MathHelper.sin((double)(f2 / 4.0f)) * 20.0f;
        RenderLayer renderLayer = RenderLayers.entityCutout((Identifier)identifier);
        matrixStack.push();
        matrixStack.scale(1.1f, 1.1f, 1.1f);
        matrixStack.translate(0.0f, f6, f7);
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(90.0f));
        matrixStack.push();
        matrixStack.multiply((Quaternionfc)RotationAxis.of((Vector3f)vector3f).rotationDegrees(f9));
        matrixStack.translate(-0.125f, 0.125f, 0.18f);
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(100.0f));
        orderedRenderCommandQueue.submitCustom(matrixStack, renderLayer, (entry, vertexConsumer) -> qC.cZu(matrixStack, vertexConsumer, n2));
        matrixStack.pop();
        matrixStack.push();
        matrixStack.multiply((Quaternionfc)RotationAxis.of((Vector3f)vector3f2).rotationDegrees(f9));
        matrixStack.translate(0.0f, 0.125f, 0.18f);
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(80.0f));
        orderedRenderCommandQueue.submitCustom(matrixStack, renderLayer, (entry, vertexConsumer) -> qC.cZu(matrixStack, vertexConsumer, n2));
        matrixStack.pop();
        matrixStack.pop();
    }

    private static CallSite cZD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/qC" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(qC.class, "cZC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

