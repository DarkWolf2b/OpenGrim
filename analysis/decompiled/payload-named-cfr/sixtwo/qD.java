/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.entity.feature.FeatureRenderer
 *  net.minecraft.client.render.entity.feature.FeatureRendererContext
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.RotationAxis
 *  org.joml.Quaternionfc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.feature.FeatureRenderer;
import net.minecraft.client.render.entity.feature.FeatureRendererContext;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.RotationAxis;
import org.joml.Quaternionfc;
import sixtwo.cS;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.jo;
import sixtwo.js;
import sixtwo.kn;
import sixtwo.ky;
import sixtwo.mG;
import sixtwo.oR;
import sixtwo.qC;
import sixtwo.qu;
import sixtwo.rD;

public class qD
extends FeatureRenderer<PlayerEntityRenderState, PlayerEntityModel> {
    private static final long YijCR = gb.aYR(8156976936887596683L, -6150078433035784067L, MethodHandles.lookup().lookupClass()).a(182193575313587L);
    private static final long tRFrF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qD(FeatureRendererContext<PlayerEntityRenderState, PlayerEntityModel> featureRendererContext) {
        super(featureRendererContext);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = YijCR ^ 0xFBB7105F979L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -5095854130532000521L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                tRFrF = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static MatchException cZG(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cZE(MatrixStack matrixStack, OrderedRenderCommandQueue orderedRenderCommandQueue, int n2, PlayerEntityRenderState playerEntityRenderState, float f2, float f3) {
        float f4;
        int n3;
        AbstractClientPlayerEntity abstractClientPlayerEntity;
        cS cS2;
        block57: {
            block58: {
                boolean bl2;
                block55: {
                    block56: {
                        block53: {
                            block54: {
                                block50: {
                                    block51: {
                                        block52: {
                                            block48: {
                                                block49: {
                                                    AbstractClientPlayerEntity abstractClientPlayerEntity2;
                                                    block46: {
                                                        block47: {
                                                            Entity entity;
                                                            block45: {
                                                                boolean bl3;
                                                                block44: {
                                                                    long l2 = YijCR ^ 0x8C621217AE0L;
                                                                    bl2 = qC.cZy();
                                                                    try {
                                                                        if (rD.dlmvG.world == null) {
                                                                            return;
                                                                        }
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qD.cZG(matchException);
                                                                    }
                                                                    try {
                                                                        bl3 = qu.cmARD.get();
                                                                        if (!bl2) break block44;
                                                                        if (bl3) return;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qD.cZG(matchException);
                                                                    }
                                                                    bl3 = hF.BQuMu;
                                                                }
                                                                if (!bl3) {
                                                                    return;
                                                                }
                                                                cS2 = rD.dlJ().aZx(cS.class);
                                                                try {
                                                                    if (!cS2.bag()) {
                                                                        return;
                                                                    }
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw qD.cZG(matchException);
                                                                }
                                                                Entity entity2 = rD.dlmvG.world.getEntityById(playerEntityRenderState.id);
                                                                try {
                                                                    try {
                                                                        entity = entity2;
                                                                        if (!bl2) break block45;
                                                                        if (!(entity instanceof AbstractClientPlayerEntity)) return;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qD.cZG(matchException);
                                                                    }
                                                                    entity = entity2;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw qD.cZG(matchException);
                                                                }
                                                            }
                                                            abstractClientPlayerEntity = (AbstractClientPlayerEntity)entity;
                                                            try {
                                                                if (!bl2) {
                                                                    return;
                                                                }
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qD.cZG(matchException);
                                                            }
                                                            try {
                                                                try {
                                                                    abstractClientPlayerEntity2 = abstractClientPlayerEntity;
                                                                    if (!bl2) break block46;
                                                                    if (!abstractClientPlayerEntity2.isInvisible()) break block47;
                                                                    return;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw qD.cZG(matchException);
                                                                }
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qD.cZG(matchException);
                                                            }
                                                        }
                                                        abstractClientPlayerEntity2 = abstractClientPlayerEntity;
                                                    }
                                                    try {
                                                        try {
                                                            try {
                                                                if (abstractClientPlayerEntity2 != rD.dlmvG.player) break block48;
                                                                n3 = cS2.Zb().TC();
                                                                if (!bl2) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qD.cZG(matchException);
                                                            }
                                                            if (n3 == 0) return;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw qD.cZG(matchException);
                                                        }
                                                        n3 = rD.dlmvG.options.getPerspective().isFirstPerson();
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw qD.cZG(matchException);
                                                    }
                                                }
                                                try {
                                                    if (!bl2) break block50;
                                                    if (n3 == 0) break block51;
                                                    return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qD.cZG(matchException);
                                                }
                                            }
                                            try {
                                                try {
                                                    n3 = cS2.Zc().TC();
                                                    if (!bl2) break block52;
                                                    if (n3 == 0) return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qD.cZG(matchException);
                                                }
                                                n3 = rD.dmc().ddy((PlayerEntity)abstractClientPlayerEntity);
                                            }
                                            catch (MatchException matchException) {
                                                throw qD.cZG(matchException);
                                            }
                                        }
                                        try {
                                            if (!bl2) break block50;
                                            if (n3 != 0) break block51;
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw qD.cZG(matchException);
                                        }
                                    }
                                    n3 = kn.YNOIY;
                                }
                                try {
                                    if (!bl2) break block53;
                                    if (n3 == 0) break block54;
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw qD.cZG(matchException);
                                }
                            }
                            n3 = js.bFC();
                        }
                        try {
                            if (!bl2) break block55;
                            if (n3 == 0) break block56;
                            return;
                        }
                        catch (MatchException matchException) {
                            throw qD.cZG(matchException);
                        }
                    }
                    n3 = n2;
                }
                try {
                    try {
                        if (!bl2) break block57;
                        if (n3 != (int)tRFrF) break block58;
                        return;
                    }
                    catch (MatchException matchException) {
                        throw qD.cZG(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw qD.cZG(matchException);
                }
            }
            matrixStack.push();
            n3 = oR.cJN().cIT() ? 1 : 0;
        }
        try {
            f4 = n3 != 0 ? -0.43f : -0.5f;
        }
        catch (MatchException matchException) {
            throw qD.cZG(matchException);
        }
        float f5 = f4;
        ((PlayerEntityModel)this.getContextModel()).getHead().applyTransform(matrixStack);
        matrixStack.translate(0.0f, f5, 0.0f);
        matrixStack.multiply((Quaternionfc)RotationAxis.NEGATIVE_Z.rotationDegrees(180.0f));
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(90.0f));
        mG mG2 = cS2.Zd().Wf();
        int n4 = cS2.Ze().VC();
        jo.bEt(() -> ky.bSd(matrixStack, abstractClientPlayerEntity, mG2, n4));
        matrixStack.pop();
    }
}

