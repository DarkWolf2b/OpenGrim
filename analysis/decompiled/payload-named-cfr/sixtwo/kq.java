/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.model.ModelPart
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.entity.PlayerEntityRenderer
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.PlayerLikeEntity
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.entity.PlayerEntityRenderer;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.rD;

public final class kq {
    private static int hmhqw;
    private static final long WdBQQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        WdBQQ = gb.aYR(845915686675419384L, 5212466952231506870L, MethodHandles.lookup().lookupClass()).a(161708862246564L);
        if (kq.bQM() == 0) {
            kq.bQK(22);
        }
    }

    private static MatchException bQN(MatchException matchException) {
        return matchException;
    }

    public static int bQM() {
        int n2 = kq.bQL();
        try {
            if (n2 == 0) {
                return 84;
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        return 0;
    }

    private static void bQJ(MatrixStack matrixStack, ModelPart modelPart) {
        float f2;
        block13: {
            float f3;
            block14: {
                int n2;
                block11: {
                    float f4;
                    block12: {
                        long l2 = WdBQQ ^ 0x185811671102L;
                        n2 = kq.bQM();
                        try {
                            try {
                                float f5 = modelPart.roll - 0.0f;
                                f2 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                                if (n2 == 0) break block11;
                                if (f2 == false) break block12;
                            }
                            catch (MatchException matchException) {
                                throw kq.bQN(matchException);
                            }
                            matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Z.rotation(modelPart.roll));
                        }
                        catch (MatchException matchException) {
                            throw kq.bQN(matchException);
                        }
                    }
                    f2 = (f4 = modelPart.yaw - 0.0f) == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                }
                try {
                    try {
                        if (n2 == 0) break block13;
                        if (f2 == false) break block14;
                    }
                    catch (MatchException matchException) {
                        throw kq.bQN(matchException);
                    }
                    matrixStack.multiply((Quaternionfc)RotationAxis.NEGATIVE_Y.rotation(modelPart.yaw));
                }
                catch (MatchException matchException) {
                    throw kq.bQN(matchException);
                }
            }
            f2 = (f3 = modelPart.pitch - 0.0f) == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
        }
        try {
            if (f2 != false) {
                matrixStack.multiply((Quaternionfc)RotationAxis.NEGATIVE_X.rotation(modelPart.pitch));
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
    }

    public static void bQK(int n2) {
        hmhqw = n2;
    }

    private static void bQH(BufferBuilder bufferBuilder, MatrixStack matrixStack, float f2, float f3, float f4, float f5, float f6, float f7, int n2, float f8) {
        Matrix4f matrix4f = matrixStack.peek().getPositionMatrix();
        Vector3f vector3f = kq.bQI(f2, f3, f4, f5, f6, f7);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(n2).normal(matrixStack.peek(), vector3f.x(), vector3f.y(), vector3f.z()).lineWidth(f8);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f6, f7).color(n2).normal(matrixStack.peek(), vector3f.x(), vector3f.y(), vector3f.z()).lineWidth(f8);
    }

    public static int bQL() {
        return hmhqw;
    }

    private static Vector3f bQI(float f2, float f3, float f4, float f5, float f6, float f7) {
        float f8 = f5 - f2;
        float f9 = f6 - f3;
        float f10 = f7 - f4;
        float f11 = MathHelper.sqrt((float)(f8 * f8 + f9 * f9 + f10 * f10));
        return new Vector3f(f8 / f11, f9 / f11, f10 / f11);
    }

    public static void bQG(MatrixStack matrixStack, BufferBuilder bufferBuilder, float f2, AbstractClientPlayerEntity abstractClientPlayerEntity, int n2, float f3) {
        float f4;
        float f5;
        MatrixStack matrixStack2;
        float f6;
        float f7;
        MatrixStack matrixStack3;
        float f8;
        float f9;
        float f10;
        MatrixStack matrixStack4;
        float f11;
        float f12;
        float f13;
        MatrixStack matrixStack5;
        float f14;
        float f15;
        MatrixStack matrixStack6;
        float f16;
        float f17;
        float f18;
        float f19;
        float f20;
        float f21;
        MatrixStack matrixStack7;
        BufferBuilder bufferBuilder2;
        float f22;
        float f23;
        float f24;
        float f25;
        float f26;
        MatrixStack matrixStack8;
        BufferBuilder bufferBuilder3;
        float f27;
        float f28;
        float f29;
        float f30;
        float f31;
        MatrixStack matrixStack9;
        BufferBuilder bufferBuilder4;
        boolean bl2;
        int n3;
        ModelPart modelPart;
        ModelPart modelPart2;
        ModelPart modelPart3;
        ModelPart modelPart4;
        ModelPart modelPart5;
        boolean bl3;
        block54: {
            boolean bl4;
            block55: {
                Quaternionf quaternionf;
                MatrixStack matrixStack10;
                block52: {
                    boolean bl5;
                    boolean bl6;
                    float f32;
                    block50: {
                        float f33;
                        block51: {
                            long l2 = WdBQQ ^ 0x54F2C7539A16L;
                            PlayerEntityRenderer playerEntityRenderer = rD.dlmvG.getEntityRenderDispatcher().getPlayerRenderer(abstractClientPlayerEntity);
                            PlayerEntityModel playerEntityModel = (PlayerEntityModel)playerEntityRenderer.getModel();
                            f33 = MathHelper.lerpAngleDegrees((float)f2, (float)abstractClientPlayerEntity.lastBodyYaw, (float)abstractClientPlayerEntity.bodyYaw);
                            f32 = abstractClientPlayerEntity.getPitch(f2);
                            bl4 = abstractClientPlayerEntity.isInSwimmingPose();
                            int n4 = kq.bQM();
                            bl3 = abstractClientPlayerEntity.isInSneakingPose();
                            bl6 = abstractClientPlayerEntity.isGliding();
                            modelPart5 = playerEntityModel.head;
                            modelPart4 = playerEntityModel.leftArm;
                            modelPart3 = playerEntityModel.rightArm;
                            modelPart2 = playerEntityModel.leftLeg;
                            modelPart = playerEntityModel.rightLeg;
                            matrixStack.push();
                            n3 = n4;
                            PlayerEntityRenderState playerEntityRenderState = new PlayerEntityRenderState();
                            playerEntityRenderer.updateRenderState((PlayerLikeEntity)abstractClientPlayerEntity, playerEntityRenderState, f2);
                            playerEntityModel.setAngles(playerEntityRenderState);
                            Vec3d vec3d = abstractClientPlayerEntity.getLerpedPos(f2);
                            try {
                                try {
                                    jI.bIs(matrixStack, vec3d);
                                    bl5 = bl4;
                                    if (n3 == 0) break block50;
                                    if (!bl5) break block51;
                                }
                                catch (MatchException matchException) {
                                    throw kq.bQN(matchException);
                                }
                                matrixStack.translate(0.0f, 0.35f, 0.0f);
                            }
                            catch (MatchException matchException) {
                                throw kq.bQN(matchException);
                            }
                        }
                        try {
                            matrixStack10 = matrixStack;
                            quaternionf = new Quaternionf().rotationAxis((float)((double)(f33 + 180.0f) * Math.PI / 180.0), 0.0f, -1.0f, 0.0f);
                            if (n3 == 0) break block52;
                            matrixStack10.multiply((Quaternionfc)quaternionf);
                            bl5 = bl4;
                        }
                        catch (MatchException matchException) {
                            throw kq.bQN(matchException);
                        }
                    }
                    try {
                        block53: {
                            try {
                                try {
                                    if (bl5) break block53;
                                    bl2 = bl6;
                                    if (n3 == 0) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw kq.bQN(matchException);
                                }
                                if (!bl2) break block55;
                            }
                            catch (MatchException matchException) {
                                throw kq.bQN(matchException);
                            }
                        }
                        matrixStack10 = matrixStack;
                        quaternionf = new Quaternionf().rotationAxis((float)((double)(90.0f + f32) * Math.PI / 180.0), -1.0f, 0.0f, 0.0f);
                    }
                    catch (MatchException matchException) {
                        throw kq.bQN(matchException);
                    }
                }
                matrixStack10.multiply((Quaternionfc)quaternionf);
            }
            bl2 = bl4;
        }
        try {
            if (bl2) {
                matrixStack.translate(0.0f, -0.95f, 0.0f);
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            bufferBuilder4 = bufferBuilder;
            matrixStack9 = matrixStack;
            f31 = 0.0f;
            f30 = bl3 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f29 = bl3 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f28 = 0.0f;
            f27 = bl3 ? 1.05f : 1.4f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            kq.bQH(bufferBuilder4, matrixStack9, f31, f30, f29, f28, f27, 0.0f, n2, f3);
            bufferBuilder3 = bufferBuilder;
            matrixStack8 = matrixStack;
            f26 = -0.37f;
            f25 = bl3 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f24 = 0.0f;
            f23 = 0.37f;
            f22 = bl3 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            kq.bQH(bufferBuilder3, matrixStack8, f26, f25, f24, f23, f22, 0.0f, n2, f3);
            bufferBuilder2 = bufferBuilder;
            matrixStack7 = matrixStack;
            f21 = -0.15f;
            f20 = bl3 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f19 = bl3 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f18 = 0.15f;
            f17 = bl3 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f16 = bl3 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            kq.bQH(bufferBuilder2, matrixStack7, f21, f20, f19, f18, f17, f16, n2, f3);
            matrixStack.push();
            matrixStack6 = matrixStack;
            f15 = 0.0f;
            f14 = bl3 ? 1.05f : 1.4f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            matrixStack6.translate(f15, f14, 0.0f);
            kq.bQJ(matrixStack, modelPart5);
            kq.bQH(bufferBuilder, matrixStack, 0.0f, 0.0f, 0.0f, 0.0f, 0.15f, 0.0f, n2, f3);
            matrixStack.pop();
            matrixStack.push();
            matrixStack5 = matrixStack;
            f13 = 0.15f;
            f12 = bl3 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f11 = bl3 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            matrixStack5.translate(f13, f12, f11);
            kq.bQJ(matrixStack, modelPart);
            kq.bQH(bufferBuilder, matrixStack, 0.0f, 0.0f, 0.0f, 0.0f, -0.6f, 0.0f, n2, f3);
            matrixStack.pop();
            matrixStack.push();
            matrixStack4 = matrixStack;
            f10 = -0.15f;
            f9 = bl3 ? 0.6f : 0.7f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            f8 = bl3 ? 0.23f : 0.0f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            matrixStack4.translate(f10, f9, f8);
            kq.bQJ(matrixStack, modelPart2);
            kq.bQH(bufferBuilder, matrixStack, 0.0f, 0.0f, 0.0f, 0.0f, -0.6f, 0.0f, n2, f3);
            matrixStack.pop();
            matrixStack.push();
            matrixStack3 = matrixStack;
            f7 = 0.37f;
            f6 = bl3 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            matrixStack3.translate(f7, f6, 0.0f);
            kq.bQJ(matrixStack, modelPart3);
            kq.bQH(bufferBuilder, matrixStack, 0.0f, 0.0f, 0.0f, 0.0f, -0.55f, 0.0f, n2, f3);
            matrixStack.pop();
            matrixStack.push();
            matrixStack2 = matrixStack;
            f5 = -0.37f;
            f4 = bl3 ? 1.05f : 1.35f;
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
        try {
            matrixStack2.translate(f5, f4, 0.0f);
            kq.bQJ(matrixStack, modelPart4);
            kq.bQH(bufferBuilder, matrixStack, 0.0f, 0.0f, 0.0f, 0.0f, -0.55f, 0.0f, n2, f3);
            matrixStack.pop();
            matrixStack.pop();
            if (n3 == 0) {
                iS.bwK("QLmeX");
            }
        }
        catch (MatchException matchException) {
            throw kq.bQN(matchException);
        }
    }
}

