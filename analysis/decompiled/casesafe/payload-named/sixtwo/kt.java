/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.authlib.GameProfile
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  mixin.accessors.WalkAnimationStateAccessor
 *  net.minecraft.client.model.Model
 *  net.minecraft.client.model.ModelPart
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.OtherClientPlayerEntity
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.BuiltBuffer
 *  net.minecraft.client.render.RenderLayers
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.render.entity.LivingEntityRenderer
 *  net.minecraft.client.render.entity.model.BipedEntityModel
 *  net.minecraft.client.render.entity.model.ElytraEntityModel
 *  net.minecraft.client.render.entity.model.EntityModelLayers
 *  net.minecraft.client.render.entity.model.PlayerCapeModel
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.BipedEntityRenderState
 *  net.minecraft.client.render.entity.state.LivingEntityRenderState
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.EntityPose
 *  net.minecraft.entity.EquipmentSlot
 *  net.minecraft.entity.PlayerLikeEntity
 *  net.minecraft.entity.player.PlayerSkinType
 *  net.minecraft.item.Items
 *  net.minecraft.util.AssetInfo$TextureAsset
 *  net.minecraft.util.Hand
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.ColorHelper
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import com.mojang.authlib.GameProfile;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WalkAnimationStateAccessor;
import net.minecraft.client.model.Model;
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.OtherClientPlayerEntity;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.BuiltBuffer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.render.entity.LivingEntityRenderer;
import net.minecraft.client.render.entity.model.BipedEntityModel;
import net.minecraft.client.render.entity.model.ElytraEntityModel;
import net.minecraft.client.render.entity.model.EntityModelLayers;
import net.minecraft.client.render.entity.model.PlayerCapeModel;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.BipedEntityRenderState;
import net.minecraft.client.render.entity.state.LivingEntityRenderState;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.EntityPose;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.entity.player.PlayerSkinType;
import net.minecraft.item.Items;
import net.minecraft.util.AssetInfo;
import net.minecraft.util.Hand;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.ColorHelper;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec3d;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.jC;
import sixtwo.jL;
import sixtwo.ki;
import sixtwo.ks;
import sixtwo.ku;
import sixtwo.kv;
import sixtwo.kw;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rg;

public class kt {
    private final rg QrGyy;
    private final ku SAPZa;
    private Vec3d OmUIx;
    private Vec3d UScrC;
    private OtherClientPlayerEntity tLzLU;
    private PlayerEntityModel TRGbg;
    private PlayerEntityModel HRWqQ;
    private PlayerCapeModel LOuMD;
    private PlayerCapeModel OhmsV;
    private ElytraEntityModel bAiqA;
    private ElytraEntityModel Pdzhn;
    private PlayerSkinType CRBkx;
    private ks SueiO;
    private kw KOcUS;
    private jC fKqfS;
    private static final Identifier mCJQZ;
    private static boolean vuFhM;
    private static final long Iousr;
    private static final String[] wINKP;
    private static final String[] KQBfh;
    private static final Map koOhD;
    private static final long[] HgRhM;
    private static final Integer[] jmxFQ;
    private static final Map SwLAk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static boolean bRw() {
        return vuFhM;
    }

    public boolean bQX() {
        return true;
    }

    public void bRa(Vec3d vec3d) {
        block15: {
            kt kt2;
            Vec3d vec3d2;
            block13: {
                boolean bl2;
                block14: {
                    block11: {
                        block12: {
                            long l2 = Iousr ^ 0x767FBB9BE126L;
                            bl2 = kt.bRx();
                            try {
                                vec3d2 = vec3d;
                                if (!bl2) break block11;
                                if (vec3d2 != null) break block12;
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                            return;
                        }
                        vec3d2 = this.UScrC;
                    }
                    try {
                        try {
                            if (!bl2) break block13;
                            if (vec3d2 != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                        this.bQY(vec3d);
                        return;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                }
                try {
                    kt2 = this;
                    if (!bl2) break block15;
                    vec3d2 = kt2.UScrC;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            try {
                if (vec3d2.squaredDistanceTo(vec3d) <= 1.0E-6) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw kt.bRy(matchException);
            }
            this.OmUIx = this.UScrC;
            kt2 = this;
        }
        kt2.UScrC = vec3d;
    }

    public void bQZ(Vec3d vec3d, AbstractClientPlayerEntity abstractClientPlayerEntity) {
        this.bQY(vec3d);
        this.bRr(abstractClientPlayerEntity);
    }

    public static boolean bRx() {
        boolean bl2 = kt.bRw();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw kt.bRy(matchException);
        }
        return false;
    }

    public kt bQV(kw kw2) {
        kw kw3;
        block2: {
            block3: {
                long l2 = Iousr ^ 0x4B4C5EF10D4L;
                boolean bl2 = kt.bRx();
                try {
                    kt kt2 = this;
                    kw3 = kw2;
                    if (!bl2) break block2;
                    if (kw3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                kw3 = kw.bRK();
                break block2;
            }
            kw3 = kw2;
        }
        kt2.KOcUS = kw3;
        return this;
    }

    private void bRr(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        block4: {
            block5: {
                long l2 = Iousr ^ 0x7AF3DB3AEA83L;
                boolean bl2 = kt.bRx();
                try {
                    try {
                        if (!bl2) break block4;
                        if (abstractClientPlayerEntity != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            this.SueiO = ks.capture(abstractClientPlayerEntity);
        }
    }

    private boolean bRd(AbstractClientPlayerEntity abstractClientPlayerEntity, Vec3d vec3d, float f2) {
        double d2;
        block12: {
            block13: {
                boolean bl2;
                block10: {
                    block11: {
                        boolean bl3;
                        block8: {
                            block9: {
                                long l2 = Iousr ^ 0x6563CC4E4CB4L;
                                bl2 = kt.bRw();
                                try {
                                    try {
                                        try {
                                            bl3 = rD.dlmvG.options.getPerspective().isFirstPerson();
                                            if (bl2) break block8;
                                            if (!bl3) break block9;
                                        }
                                        catch (MatchException matchException) {
                                            throw kt.bRy(matchException);
                                        }
                                        double d3 = vec3d.squaredDistanceTo(abstractClientPlayerEntity.getEntityPos()) - 1.0E-6;
                                        d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                                        if (bl2) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw kt.bRy(matchException);
                                    }
                                    if (d2 <= 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            bl3 = false;
                        }
                        return bl3;
                    }
                    double d4 = rD.dlmvG.gameRenderer.getCamera().getCameraPos().squaredDistanceTo(abstractClientPlayerEntity.getCameraPosVec(f2)) - 1.0E-6;
                    d2 = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                }
                try {
                    if (bl2) break block12;
                    if (d2 > 0) break block13;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                d2 = 1.0;
                break block12;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    private void bRn(ks ks2, Vec3d vec3d) {
        block33: {
            OtherClientPlayerEntity otherClientPlayerEntity;
            block34: {
                boolean bl2;
                block31: {
                    boolean bl3;
                    block30: {
                        block29: {
                            block27: {
                                EntityPose entityPose;
                                OtherClientPlayerEntity otherClientPlayerEntity2;
                                block26: {
                                    ks ks3;
                                    block24: {
                                        block25: {
                                            long l2 = Iousr ^ 0x7E993A4CBB45L;
                                            this.tLzLU.setPosition(vec3d);
                                            this.tLzLU.lastX = vec3d.x;
                                            this.tLzLU.lastY = vec3d.y;
                                            this.tLzLU.lastZ = vec3d.z;
                                            this.tLzLU.setYaw(ks2.yRot());
                                            this.tLzLU.setPitch(ks2.xRot());
                                            this.tLzLU.lastYaw = ks2.yRotO();
                                            this.tLzLU.lastPitch = ks2.xRotO();
                                            this.tLzLU.bodyYaw = ks2.yBodyRot();
                                            this.tLzLU.lastBodyYaw = ks2.yBodyRotO();
                                            this.tLzLU.headYaw = ks2.yHeadRot();
                                            boolean bl4 = kt.bRx();
                                            this.tLzLU.lastHeadYaw = ks2.yHeadRotO();
                                            this.tLzLU.hurtTime = ks2.hurtTime();
                                            this.tLzLU.deathTime = ks2.deathTime();
                                            this.tLzLU.setPose(ks2.pose());
                                            this.tLzLU.setSneaking(ks2.shiftDown());
                                            this.tLzLU.setSprinting(ks2.sprinting());
                                            this.tLzLU.setOnGround(ks2.onGround());
                                            this.tLzLU.setVelocity(ks2.deltaMovement());
                                            this.tLzLU.setStackInHand(Hand.MAIN_HAND, ks2.mainHand().copy());
                                            this.tLzLU.setStackInHand(Hand.OFF_HAND, ks2.offHand().copy());
                                            this.tLzLU.equipStack(EquipmentSlot.CHEST, ks2.chestEquipment().copy());
                                            WalkAnimationStateAccessor walkAnimationStateAccessor = (WalkAnimationStateAccessor)this.tLzLU.limbAnimator;
                                            this.tLzLU.limbAnimator.setSpeed(ks2.walkAnimationSpeed());
                                            bl3 = bl4;
                                            try {
                                                try {
                                                    walkAnimationStateAccessor.setPosition(ks2.walkAnimationPos());
                                                    otherClientPlayerEntity2 = this.tLzLU;
                                                    ks3 = ks2;
                                                    if (!bl3) break block24;
                                                    if (!ks3.fallFlying()) break block25;
                                                }
                                                catch (MatchException matchException) {
                                                    throw kt.bRy(matchException);
                                                }
                                                entityPose = EntityPose.GLIDING;
                                                break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw kt.bRy(matchException);
                                            }
                                        }
                                        ks3 = ks2;
                                    }
                                    entityPose = ks3.pose();
                                }
                                try {
                                    block28: {
                                        try {
                                            try {
                                                otherClientPlayerEntity2.setPose(entityPose);
                                                bl2 = ks2.fallFlying();
                                                if (!bl3) break block27;
                                                if (!bl2) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw kt.bRy(matchException);
                                            }
                                            this.tLzLU.startGliding();
                                            if (bl3) break block29;
                                        }
                                        catch (MatchException matchException) {
                                            throw kt.bRy(matchException);
                                        }
                                    }
                                    bl2 = this.tLzLU.isGliding();
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            try {
                                try {
                                    if (!bl3) break block30;
                                    if (!bl2) break block29;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                                this.tLzLU.stopGliding();
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                        }
                        bl2 = ks2.usingItem();
                    }
                    try {
                        try {
                            block32: {
                                try {
                                    try {
                                        if (!bl3) break block31;
                                        if (!bl2) break block32;
                                    }
                                    catch (MatchException matchException) {
                                        throw kt.bRy(matchException);
                                    }
                                    this.tLzLU.setCurrentHand(ks2.usedItemHand());
                                    if (bl3) break block33;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            otherClientPlayerEntity = this.tLzLU;
                            if (!bl3) break block34;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                        bl2 = otherClientPlayerEntity.isUsingItem();
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                }
                try {
                    if (!bl2) break block33;
                    otherClientPlayerEntity = this.tLzLU;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            otherClientPlayerEntity.clearActiveItem();
        }
    }

    protected kw bQW() {
        return this.KOcUS;
    }

    private static Throwable bRy(Throwable throwable) {
        return throwable;
    }

    /*
     * Exception decompiling
     */
    public void bQQ(MatrixStack var1_1, float var2_2, AbstractClientPlayerEntity var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [11[TRYBLOCK]], but top level block is 15[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public void bRb(Vec3d vec3d, AbstractClientPlayerEntity abstractClientPlayerEntity) {
        this.bRa(vec3d);
        this.bRr(abstractClientPlayerEntity);
    }

    public void bQY(Vec3d vec3d) {
        block4: {
            block5: {
                long l2 = Iousr ^ 0x1B0F24432CDFL;
                boolean bl2 = kt.bRx();
                try {
                    try {
                        if (!bl2) break block4;
                        if (vec3d != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            this.OmUIx = vec3d;
            this.UScrC = vec3d;
            this.QrGyy.dfE(vec3d);
        }
    }

    private static CallSite bRF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kt" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    private void bRm(PlayerSkinType var1_1) {
        block51: {
            block50: {
                block49: {
                    block47: {
                        block48: {
                            block45: {
                                block46: {
                                    block43: {
                                        block44: {
                                            block41: {
                                                block42: {
                                                    block39: {
                                                        block40: {
                                                            block37: {
                                                                var2_2 = kt.Iousr ^ 72765211222205L;
                                                                var4_3 = kt.bRw();
                                                                try {
                                                                    block38: {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    v0 = this;
                                                                                    if (var4_3) break block37;
                                                                                    if (v0.tLzLU == null) break block38;
                                                                                }
                                                                                catch (MatchException v1) {
                                                                                    throw kt.bRy(v1);
                                                                                }
                                                                                v2 = this;
                                                                                if (var4_3) break block39;
                                                                            }
                                                                            catch (MatchException v3) {
                                                                                throw kt.bRy(v3);
                                                                            }
                                                                            if (v2.tLzLU.getEntityWorld() == rD.dlmvG.world) break block40;
                                                                        }
                                                                        catch (MatchException v4) {
                                                                            throw kt.bRy(v4);
                                                                        }
                                                                    }
                                                                    v0 = this;
                                                                }
                                                                catch (MatchException v5) {
                                                                    throw kt.bRy(v5);
                                                                }
                                                            }
                                                            v0.tLzLU = new OtherClientPlayerEntity(rD.dlmvG.world, new GameProfile(UUID.randomUUID(), (String)kt.bRC("z", (int)4637, (long)(3260641129690218936L ^ var2_2))));
                                                        }
                                                        v2 = this;
                                                    }
                                                    try {
                                                        try {
                                                            if (var4_3) break block41;
                                                            if (v2.OhmsV != null) break block42;
                                                        }
                                                        catch (MatchException v6) {
                                                            throw kt.bRy(v6);
                                                        }
                                                        this.OhmsV = new PlayerCapeModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER_CAPE));
                                                    }
                                                    catch (MatchException v7) {
                                                        throw kt.bRy(v7);
                                                    }
                                                }
                                                v2 = this;
                                            }
                                            try {
                                                try {
                                                    if (var4_3) break block43;
                                                    if (v2.bAiqA != null) break block44;
                                                }
                                                catch (MatchException v8) {
                                                    throw kt.bRy(v8);
                                                }
                                                this.bAiqA = new ElytraEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.ELYTRA));
                                            }
                                            catch (MatchException v9) {
                                                throw kt.bRy(v9);
                                            }
                                        }
                                        v2 = this;
                                    }
                                    try {
                                        try {
                                            if (var4_3) break block45;
                                            if (v2.LOuMD != null) break block46;
                                        }
                                        catch (MatchException v10) {
                                            throw kt.bRy(v10);
                                        }
                                        this.LOuMD = new PlayerCapeModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER_CAPE));
                                    }
                                    catch (MatchException v11) {
                                        throw kt.bRy(v11);
                                    }
                                }
                                v2 = this;
                            }
                            try {
                                try {
                                    if (var4_3) break block47;
                                    if (v2.Pdzhn != null) break block48;
                                }
                                catch (MatchException v12) {
                                    throw kt.bRy(v12);
                                }
                                this.Pdzhn = new ElytraEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.ELYTRA));
                            }
                            catch (MatchException v13) {
                                throw kt.bRy(v13);
                            }
                        }
                        v2 = this;
                    }
                    try {
                        try {
                            if (var4_3) break block49;
                            if (v2.TRGbg != null) {
                            }
                            ** GOTO lbl110
                        }
                        catch (MatchException v14) {
                            throw kt.bRy(v14);
                        }
                        v2 = this;
                    }
                    catch (MatchException v15) {
                        throw kt.bRy(v15);
                    }
                }
                try {
                    try {
                        v16 = v2.CRBkx;
                        v17 = var1_1;
                        if (var4_3) break block50;
                        if (v16 == v17) break block51;
                    }
                    catch (MatchException v18) {
                        throw kt.bRy(v18);
                    }
lbl110:
                    // 2 sources

                    v16 = var1_1;
                    v17 = PlayerSkinType.SLIM;
                }
                catch (MatchException v19) {
                    throw kt.bRy(v19);
                }
            }
            try {
                v20 = v16 == v17;
            }
            catch (MatchException v21) {
                throw kt.bRy(v21);
            }
            var5_4 = v20;
            try {
                v22 = this;
                v23 = v24;
                v25 = v24;
                v26 = rD.dlmvG.getLoadedEntityModels();
                v27 = var5_4 != false ? EntityModelLayers.PLAYER_SLIM : EntityModelLayers.PLAYER;
            }
            catch (MatchException v28) {
                throw kt.bRy(v28);
            }
            v23(v26.getModelPart(v27), var5_4);
            v22.TRGbg = v25;
            this.HRWqQ = new PlayerEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(var5_4 != false ? EntityModelLayers.PLAYER_SLIM : EntityModelLayers.PLAYER), var5_4);
            this.TRGbg.getHead().scale(new Vector3f(-0.3f, -0.3f, -0.3f));
            this.HRWqQ.getHead().scale(new Vector3f(-0.3f, -0.3f, -0.3f));
            this.CRBkx = var1_1;
        }
    }

    public Vec3d bRc() {
        Vec3d vec3d;
        block16: {
            block17: {
                kt kt2;
                boolean bl2;
                block14: {
                    block15: {
                        block12: {
                            block13: {
                                long l2 = Iousr ^ 0x8FC7E8C8808L;
                                bl2 = kt.bRw();
                                try {
                                    try {
                                        kt2 = this;
                                        if (bl2) break block12;
                                        if (kt2.UScrC != null) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw kt.bRy(matchException);
                                    }
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            kt2 = this;
                        }
                        try {
                            try {
                                if (bl2) break block14;
                                if (!kt2.KOcUS.bRQ()) break block15;
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                            return this.UScrC;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                    }
                    kt2 = this;
                }
                try {
                    try {
                        vec3d = kt2.OmUIx;
                        if (bl2) break block16;
                        if (vec3d != null) break block17;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    this.bQY(this.UScrC);
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            vec3d = this.QrGyy.dfA(this.UScrC);
        }
        return vec3d;
    }

    private void bRe(MatrixStack matrixStack, float f2, ks ks2, Identifier identifier, Identifier identifier2, mG mG2, float f3) {
        kt.bRf(() -> this.bRg(matrixStack, f2, ks2, identifier, identifier2), kw.bRK().bRP(mG2, kv.DESOY, f3));
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    private void bRg(MatrixStack var1_1, float var2_2, ks var3_3, Identifier var4_4, Identifier var5_5) {
        block54: {
            block50: {
                block53: {
                    block51: {
                        block52: {
                            block64: {
                                block63: {
                                    block62: {
                                        block61: {
                                            block49: {
                                                block48: {
                                                    block46: {
                                                        block47: {
                                                            block44: {
                                                                block45: {
                                                                    var6_6 = kt.Iousr ^ 30311059220911L;
                                                                    var9_7 = this.tLzLU.getEntityPos().subtract(rD.dlmvG.gameRenderer.getCamera().getCameraPos());
                                                                    var1_1.push();
                                                                    var1_1.translate(var9_7.x, var9_7.y, var9_7.z);
                                                                    var10_8 = MathHelper.lerp((float)var2_2, (float)this.tLzLU.lastBodyYaw, (float)this.tLzLU.bodyYaw);
                                                                    var1_1.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(180.0f - var10_8));
                                                                    this.bRp(var1_1, var3_3, var2_2);
                                                                    this.bRo(var1_1);
                                                                    var11_9 = rD.dlmvG.getEntityRenderDispatcher().getPlayerRenderer((AbstractClientPlayerEntity)this.tLzLU);
                                                                    v0 = kt.bRw();
                                                                    var12_10 = new PlayerEntityRenderState();
                                                                    var11_9.updateRenderState((PlayerLikeEntity)this.tLzLU, var12_10, var2_2);
                                                                    var8_11 = v0;
                                                                    try {
                                                                        var12_10.skinTextures = var3_3.skin();
                                                                        var12_10.isGliding = var3_3.fallFlying();
                                                                        v1 = var12_10;
                                                                        v2 = var3_3.fallFlying() != false ? 20.0f : 0.0f;
                                                                    }
                                                                    catch (MatchException v3) {
                                                                        throw kt.bRy(v3);
                                                                    }
                                                                    v1.glidingTicks = v2;
                                                                    v4 = var12_10;
                                                                    v5 = false;
                                                                    if (var8_11) break block44;
                                                                    try {
                                                                        block58: {
                                                                            v4.applyFlyingRotation = v5;
                                                                            var12_10.flyingRotation = 0.0f;
                                                                            var12_10.equippedChestStack = var3_3.chestEquipment().copy();
                                                                            v4 = var12_10;
                                                                            if (var3_3.skin().cape() == null) break block45;
                                                                            break block58;
                                                                            catch (MatchException v6) {
                                                                                throw kt.bRy(v6);
                                                                            }
                                                                        }
                                                                        v5 = true;
                                                                        break block44;
                                                                    }
                                                                    catch (MatchException v7) {
                                                                        throw kt.bRy(v7);
                                                                    }
                                                                }
                                                                v5 = false;
                                                            }
                                                            v4.capeVisible = v5;
                                                            this.bRq(var12_10, var3_3);
                                                            var13_12 = (WalkAnimationStateAccessor)this.tLzLU.limbAnimator;
                                                            var12_10.limbSwingAmplitude = this.tLzLU.limbAnimator.getSpeed();
                                                            var12_10.limbSwingAnimationProgress = var13_12.getPosition();
                                                            this.TRGbg.setAngles(var12_10);
                                                            this.TRGbg.leftPants.visible = true;
                                                            this.TRGbg.rightPants.visible = true;
                                                            this.TRGbg.leftSleeve.visible = true;
                                                            this.TRGbg.rightSleeve.visible = true;
                                                            this.TRGbg.jacket.visible = true;
                                                            this.TRGbg.hat.visible = true;
                                                            this.HRWqQ.leftPants.visible = true;
                                                            this.HRWqQ.rightPants.visible = true;
                                                            this.HRWqQ.leftSleeve.visible = true;
                                                            this.HRWqQ.rightSleeve.visible = true;
                                                            this.HRWqQ.jacket.visible = true;
                                                            this.HRWqQ.hat.visible = true;
                                                            var14_13 = LivingEntityRenderer.getOverlay((LivingEntityRenderState)var12_10, (float)0.0f);
                                                            var15_14 = var12_10.light;
                                                            var16_15 = this.bRs(var12_10);
                                                            if (var5_5 == null) break block47;
                                                            try {
                                                                block59: {
                                                                    v8 = this.tLzLU.getEquippedStack(EquipmentSlot.CHEST).isOf(Items.ELYTRA);
                                                                    if (var8_11) break block46;
                                                                    break block59;
                                                                    catch (MatchException v9) {
                                                                        throw kt.bRy(v9);
                                                                    }
                                                                }
                                                                if (v8) break block47;
                                                            }
                                                            catch (MatchException v10) {
                                                                throw kt.bRy(v10);
                                                            }
                                                            v8 = true;
                                                            break block46;
                                                        }
                                                        v8 = false;
                                                    }
                                                    var17_16 = v8;
                                                    if (!this.tLzLU.getEquippedStack(EquipmentSlot.CHEST).isOf(Items.ELYTRA)) break block48;
                                                    try {
                                                        block60: {
                                                            if (var16_15 == null) break block48;
                                                            break block60;
                                                            catch (MatchException v11) {
                                                                throw kt.bRy(v11);
                                                            }
                                                        }
                                                        v12 = true;
                                                        break block49;
                                                    }
                                                    catch (MatchException v13) {
                                                        throw kt.bRy(v13);
                                                    }
                                                }
                                                v12 = false;
                                            }
                                            var18_17 = v12;
                                            v14 = this.KOcUS.bRR();
                                            if (var8_11) break block50;
                                            if (v14 == 0) ** GOTO lbl162
                                            break block61;
                                            catch (MatchException v15) {
                                                throw kt.bRy(v15);
                                            }
                                        }
                                        this.bRi(var1_1, (Model)this.TRGbg, (Model)this.HRWqQ, var4_4, var15_14, var14_13);
                                        v16 = var12_10.invisible;
                                        if (var8_11) break block51;
                                        break block62;
                                        catch (MatchException v17) {
                                            throw kt.bRy(v17);
                                        }
                                    }
                                    if (v16) break block52;
                                    break block63;
                                    catch (MatchException v18) {
                                        throw kt.bRy(v18);
                                    }
                                }
                                v16 = var17_16;
                                if (var8_11) break block51;
                                break block64;
                                catch (MatchException v19) {
                                    throw kt.bRy(v19);
                                }
                            }
                            try {
                                block65: {
                                    if (!v16) break block52;
                                    break block65;
                                    catch (MatchException v20) {
                                        throw kt.bRy(v20);
                                    }
                                }
                                this.bRi(var1_1, (Model)this.OhmsV, (Model)this.LOuMD, var5_5, var15_14, var14_13);
                            }
                            catch (MatchException v21) {
                                throw kt.bRy(v21);
                            }
                        }
                        v16 = var12_10.invisible;
                    }
                    try {
                        if (var8_11) break block53;
                        if (v16) break block54;
                    }
                    catch (MatchException v22) {
                        throw kt.bRy(v22);
                    }
                    v16 = var18_17;
                }
                if (!v16) break block54;
                try {
                    block66: {
                        var1_1.push();
                        var1_1.translate(0.0f, 0.0f, 0.125f);
                        this.bAiqA.setAngles((BipedEntityRenderState)var12_10);
                        this.bRi(var1_1, (Model)this.bAiqA, (Model)this.Pdzhn, var16_15, var15_14, var14_13);
                        var1_1.pop();
                        if (!var8_11) break block54;
                        break block66;
                        catch (MatchException v23) {
                            throw kt.bRy(v23);
                        }
                    }
                    v14 = ColorHelper.fromFloats((float)0.75f, (float)1.0f, (float)1.0f, (float)1.0f);
                }
                catch (MatchException v24) {
                    throw kt.bRy(v24);
                }
            }
            var19_18 = v14;
            var20_19 = this.bRh();
            var21_20 = var20_19.bGU();
            try {
                block57: {
                    block55: {
                        block56: {
                            block67: {
                                var22_21 = var21_20.getBuffer(this.TRGbg.getLayer(var4_4));
                                this.TRGbg.render(var1_1, var22_21, var15_14, var14_13, var19_18);
                                v25 = var12_10.invisible;
                                if (var8_11) break block55;
                                if (v25) break block56;
                                break block67;
                                catch (MatchException v26) {
                                    throw kt.bRy(v26);
                                }
                            }
                            try {
                                block68: {
                                    v25 = var17_16;
                                    if (var8_11) break block55;
                                    break block68;
                                    catch (MatchException v27) {
                                        throw kt.bRy(v27);
                                    }
                                }
                                if (!v25) break block56;
                            }
                            catch (MatchException v28) {
                                throw kt.bRy(v28);
                            }
                            var23_22 = var21_20.getBuffer(this.OhmsV.getLayer(var5_5));
                            this.OhmsV.render(var1_1, var23_22, var15_14, var14_13, var19_18);
                        }
                        v25 = var12_10.invisible;
                    }
                    try {
                        if (var8_11) break block57;
                        if (v25) break block54;
                    }
                    catch (MatchException v29) {
                        throw kt.bRy(v29);
                    }
                    v25 = var18_17;
                }
                if (v25) {
                    var1_1.push();
                    var1_1.translate(0.0f, 0.0f, 0.125f);
                    this.bAiqA.setAngles((BipedEntityRenderState)var12_10);
                    var23_22 = var21_20.getBuffer(RenderLayers.armorCutoutNoCull((Identifier)var16_15));
                    this.bAiqA.render(var1_1, var23_22, var15_14, var14_13, var19_18);
                    var1_1.pop();
                }
            }
            finally {
                var20_19.bGY();
            }
        }
        var1_1.pop();
    }

    private void bRl(ModelPart modelPart) {
        ModelPart modelPart2;
        boolean bl2;
        block3: {
            block4: {
                long l2 = Iousr ^ 0x5B3FD397C6A1L;
                bl2 = kt.bRx();
                try {
                    modelPart2 = modelPart;
                    if (!bl2) break block3;
                    if (modelPart2 != null) break block4;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                return;
            }
            modelPart2 = modelPart;
        }
        for (ModelPart modelPart3 : modelPart2.traverse()) {
            modelPart3.resetTransform();
            if (bl2) continue;
        }
    }

    private static Object bRB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kt.bRA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private /* synthetic */ void bRt(AbstractTexture abstractTexture, RenderPass renderPass) {
        long l2 = Iousr ^ 0x13F70009E17EL;
        jL.qidnW.bJl();
        jL.qidnW.bJt((String)((Object)kt.bRC("z", (int)12980, (long)(0x68FE187DC020A0D5L ^ l2))), 1.0f, 1.0f, 1.0f, 1.0f);
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)10720, (long)(0x4D24D09EEB84BB84L ^ l2))), this.KOcUS.bRS());
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)4711, (long)(0x27BC0AFF950B0000L ^ l2))), this.KOcUS.bRT());
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)24513, (long)(0x755F27AA70804DA2L ^ l2))), this.KOcUS.bRU());
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)2080, (long)(0x205645CEA6549A45L ^ l2))), this.KOcUS.bRV());
        renderPass.bindTexture((String)((Object)kt.bRC("z", (int)20792, (long)(0x25BCA7A1B545C35AL ^ l2))), abstractTexture.getGlTextureView(), abstractTexture.getSampler());
    }

    private static String bRz(byte[] byArray) {
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

    private Identifier bRs(PlayerEntityRenderState playerEntityRenderState) {
        block5: {
            AssetInfo.TextureAsset textureAsset;
            block4: {
                long l2 = Iousr ^ 0x64D3381D5043L;
                boolean bl2 = kt.bRx();
                try {
                    try {
                        textureAsset = playerEntityRenderState.skinTextures.elytra();
                        if (!bl2) break block4;
                        if (textureAsset == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    textureAsset = playerEntityRenderState.skinTextures.elytra();
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            return textureAsset.texturePath();
        }
        return mCJQZ;
    }

    private BuiltBuffer bRj(BuiltBuffer builtBuffer, BuiltBuffer builtBuffer2, BufferAllocator bufferAllocator) {
        BufferBuilder bufferBuilder;
        block13: {
            float f2;
            float f3;
            int n2;
            boolean bl2;
            int n3;
            ByteBuffer byteBuffer;
            ByteBuffer byteBuffer2;
            long l2;
            block12: {
                int n4;
                block10: {
                    block11: {
                        l2 = Iousr ^ 0x29FC580E2DD5L;
                        byteBuffer2 = builtBuffer.getBuffer().duplicate().order(ByteOrder.nativeOrder());
                        byteBuffer = builtBuffer2.getBuffer().duplicate().order(ByteOrder.nativeOrder());
                        n3 = builtBuffer.getDrawParameters().vertexCount();
                        bl2 = kt.bRw();
                        try {
                            try {
                                n4 = n3;
                                if (bl2) break block10;
                                if (n4 == builtBuffer2.getDrawParameters().vertexCount()) break block11;
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                    }
                    n4 = VertexFormats.POSITION_TEXTURE.getVertexSize();
                }
                n2 = n4;
                f3 = Float.POSITIVE_INFINITY;
                float f4 = Float.NEGATIVE_INFINITY;
                for (int i2 = 0; i2 < n3; ++i2) {
                    float f5 = byteBuffer.getFloat(i2 * n2 + 4);
                    f3 = Math.min(f3, f5);
                    f2 = Math.max(f4, f5);
                    if (!bl2) {
                        f4 = f2;
                        if (!bl2) continue;
                    }
                    break block12;
                }
                f2 = Math.max(f4 - f3, 1.0E-4f);
            }
            float f6 = f2;
            BufferBuilder bufferBuilder2 = new BufferBuilder(bufferAllocator, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE_COLOR);
            for (int i3 = 0; i3 < n3; ++i3) {
                int n5 = i3 * n2;
                float f7 = byteBuffer2.getFloat(n5);
                float f8 = byteBuffer2.getFloat(n5 + 4);
                float f9 = byteBuffer2.getFloat(n5 + kt.bRF("p", (int)32766, (long)(0xB4EC1894DA7983FL ^ l2)));
                float f10 = byteBuffer2.getFloat(n5 + kt.bRF("p", (int)16515, (long)(0x2BD202995564A747L ^ l2)));
                float f11 = byteBuffer2.getFloat(n5 + kt.bRF("p", (int)17469, (long)(0x3C4FA44F4A8CA3FAL ^ l2)));
                float f12 = byteBuffer.getFloat(n5 + 4);
                float f13 = MathHelper.clamp((float)((f12 - f3) / f6), (float)0.0f, (float)1.0f);
                int n6 = MathHelper.floor((float)(f13 * 255.0f));
                try {
                    bufferBuilder = bufferBuilder2;
                    if (!bl2) {
                        bufferBuilder.vertex(f7, f8, f9).color(ColorHelper.getArgb((int)kt.bRF("p", (int)12645, (long)(0x4B3D2B7482F6D6A6L ^ l2)), (int)n6, (int)kt.bRF("p", (int)23632, (long)(0x4732C7F4DBE9BB95L ^ l2)), (int)kt.bRF("p", (int)23632, (long)(0x4732C7F4DBE9BB95L ^ l2)))).texture(f10, f11);
                        if (!bl2) continue;
                        break;
                    }
                    break block13;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            bufferBuilder = bufferBuilder2;
        }
        return bufferBuilder.endNullable();
    }

    /*
     * Unable to fully structure code
     */
    private void bRq(PlayerEntityRenderState var1_1, ks var2_2) {
        block24: {
            block23: {
                block19: {
                    block20: {
                        block21: {
                            block22: {
                                var3_3 = kt.Iousr ^ 64451904391225L;
                                var5_4 = kt.bRx();
                                try {
                                    if (!var2_2.chestEquipment().isOf(Items.ELYTRA)) {
                                        return;
                                    }
                                }
                                catch (MatchException v0) {
                                    throw kt.bRy(v0);
                                }
                                var6_5 = 0.2617994f;
                                var7_6 = 0.0f;
                                var8_7 = -0.2617994f;
                                try {
                                    v1 = var2_2.fallFlying();
                                    if (!var5_4) break block19;
                                    if (v1) {
                                    }
                                    ** GOTO lbl54
                                }
                                catch (MatchException v2) {
                                    throw kt.bRy(v2);
                                }
                                var9_8 = 1.0f;
                                var10_9 = var2_2.deltaMovement();
                                try {
                                    try {
                                        try {
                                            try {
                                                if (!var5_4) break block20;
                                                if (!(var10_9.y < 0.0)) break block21;
                                            }
                                            catch (MatchException v3) {
                                                throw kt.bRy(v3);
                                            }
                                            v4 = var10_9;
                                            if (!var5_4) break block22;
                                        }
                                        catch (MatchException v5) {
                                            throw kt.bRy(v5);
                                        }
                                        if (!(v4.lengthSquared() > 1.0E-7)) break block21;
                                    }
                                    catch (MatchException v6) {
                                        throw kt.bRy(v6);
                                    }
                                    v4 = var10_9.normalize();
                                }
                                catch (MatchException v7) {
                                    throw kt.bRy(v7);
                                }
                            }
                            var11_10 = v4;
                            var9_8 = 1.0f - (float)Math.pow(-var11_10.y, 1.5);
                        }
                        var6_5 = var9_8 * 0.34906584f + (1.0f - var9_8) * var6_5;
                        var8_7 = var9_8 * -1.5707964f + (1.0f - var9_8) * var8_7;
                    }
                    try {
                        try {
                            if (var5_4) break block23;
lbl54:
                            // 2 sources

                            v8 = var1_1;
                            if (!var5_4) break block24;
                        }
                        catch (MatchException v9) {
                            throw kt.bRy(v9);
                        }
                        v1 = v8.isInSneakingPose;
                    }
                    catch (MatchException v10) {
                        throw kt.bRy(v10);
                    }
                }
                if (v1) {
                    var6_5 = 0.6981317f;
                    var7_6 = 0.08726646f;
                    var8_7 = -0.7853982f;
                }
            }
            var1_1.leftWingPitch = var6_5;
            var1_1.leftWingYaw = var7_6;
            v8 = var1_1;
        }
        v8.leftWingRoll = var8_7;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static void bRf(Runnable runnable, kw kw2) {
        kw kw3;
        block7: {
            long l2 = Iousr ^ 0x74856EAC4096L;
            boolean bl2 = kt.bRw();
            try {
                try {
                    if (runnable == null) return;
                    kw3 = kw2;
                    if (bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                if (kw3 == null) return;
            }
            catch (MatchException matchException) {
                throw kt.bRy(matchException);
            }
            kw3 = kw2;
        }
        try {
            if (kw3.bRW() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw kt.bRy(matchException);
        }
        ki.bPi(runnable, kw2.bRW(), kw2.bRW(), 0, 4, 2.5f, 1.0f, 1.0f, kw2.bRY(), 1.0f, 1.0f);
    }

    /*
     * Exception decompiling
     */
    private void bRi(MatrixStack var1_1, Model var2_2, Model var3_3, Identifier var4_4, int var5_5, int var6_6) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Started 2 blocks at once
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.getStartingBlocks(Op04StructuredStatement.java:412)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:487)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private jC bRh() {
        jC jC2;
        block4: {
            block5: {
                long l2 = Iousr ^ 0x6DE90A0CCFC9L;
                boolean bl2 = kt.bRw();
                try {
                    try {
                        jC2 = this.fKqfS;
                        if (bl2) break block4;
                        if (jC2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    this.fKqfS = new jC();
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            jC2 = this.fKqfS;
        }
        return jC2;
    }

    private void bRp(MatrixStack matrixStack, ks ks2, float f2) {
        double d2;
        double d3;
        Vec3d vec3d;
        Vec3d vec3d2;
        block10: {
            double d4;
            double d5;
            block11: {
                long l2 = Iousr ^ 0x101A7F2112ADL;
                boolean bl2 = kt.bRx();
                try {
                    if (!ks2.fallFlying()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                float f3 = MathHelper.lerp((float)f2, (float)ks2.xRotO(), (float)ks2.xRot());
                matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(-90.0f - f3));
                vec3d2 = ks2.deltaMovement();
                d5 = vec3d2.horizontalLengthSquared();
                try {
                    if (d5 <= 1.0E-7) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                float f4 = MathHelper.lerp((float)f2, (float)ks2.yRotO(), (float)ks2.yRot());
                vec3d = Vec3d.fromPolar((float)f3, (float)f4);
                d4 = vec3d.horizontalLengthSquared();
                try {
                    try {
                        d3 = d4;
                        d2 = 1.0E-7;
                        if (!bl2) break block10;
                        if (!(d3 <= d2)) break block11;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            d3 = vec3d2.x * vec3d.x + vec3d2.z * vec3d.z;
            d2 = Math.sqrt(d5 * d4);
        }
        double d6 = d3 / d2;
        double d7 = vec3d2.x * vec3d.z - vec3d2.z * vec3d.x;
        float f5 = (float)(Math.signum(d7) * Math.acos(MathHelper.clamp((double)d6, (double)-1.0, (double)1.0)));
        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotation(f5));
    }

    private void bRk(BipedEntityModel<?> bipedEntityModel) {
        this.bRl(bipedEntityModel.head);
        this.bRl(bipedEntityModel.hat);
        this.bRl(bipedEntityModel.body);
        this.bRl(bipedEntityModel.rightArm);
        this.bRl(bipedEntityModel.leftArm);
        this.bRl(bipedEntityModel.rightLeg);
        this.bRl(bipedEntityModel.leftLeg);
    }

    public static void bRv(boolean bl2) {
        vuFhM = bl2;
    }

    private static CallSite bRC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kt" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void bRo(MatrixStack matrixStack) {
        matrixStack.scale(-1.0f, -1.0f, 1.0f);
        matrixStack.scale(0.9375f, 0.9375f, 0.9375f);
        matrixStack.translate(0.0f, -1.501f, 0.0f);
    }

    private static String bRA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x41E0;
        if (KQBfh[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])koOhD.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    koOhD.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kt", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = wINKP[n3].getBytes("ISO-8859-1");
            kt.KQBfh[n3] = kt.bRz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return KQBfh[n3];
    }

    private static int bRE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = kt.bRD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int bRD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x78EA;
        if (jmxFQ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = HgRhM[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])SwLAk.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    SwLAk.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kt", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kt.jmxFQ[n3] = n4;
        }
        return jmxFQ[n3];
    }

    public kt(ku ku2) {
        long l2 = Iousr ^ 0x72E7172171DCL;
        this.QrGyy = new rg((int)kt.bRF("p", (int)965, (long)(0x619B34F82B7CB80EL ^ l2)));
        this.KOcUS = kw.bRK();
        this.SAPZa = ku2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        kt.Iousr = gb.aYR(2155236003250911185L, 1916641638048172439L, MethodHandles.lookup().lookupClass()).a(273694774512790L);
                        var20 = kt.Iousr ^ 97099914627609L;
                        kt.koOhD = new HashMap<K, V>(13);
                        kt.bRv(false);
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
                        var18_3 = new String[8];
                        var16_4 = 0;
                        var15_5 = "\u008b\u00e6\u0012\u00d0\u00a42g\u0093\u0092\u000e\u0006\u00f8O\u0006l\u00e5,\u00a2+H\u00f5\u00d0h(5\u00a88\u00c1\u00dem\u0001\u00cc$*\u00ca&\u00c9\u00c1\u009c\u00a3\u0018\u00ec\u0095\u00f9\u00a3na\u0010\u00d5\u00c8R1d\u00a9Gqi\t\u00cf\u0094\u00a6\u00c6\u00e1t\u00e3 \u00d4\u0099\u0081\u009c\u00d8\u00b5H\u008c\u00da\u00ab#N\u0017E\u00ab\u0087L\u00b0w\n\u009e\u00e57\u0097\u001d\u00f7EKE_R\u008d \u009a0q-tm<\u00c4\u0091\u00a4Qn\u00ff\u00ce\u009a\u00f7\u00faM\u001d\u00a6\u00a9\u00c9R\u0011\u0017\u00ed$\u00af\u00fe\u00c40y \\\u00ac+d\u00a9\u0018Trq\u00a0\u00cc^\u001f\u00c5\u001a\u008eE\f\u00e4\u00e0I\u00f5\u00a7)f\u008a@\u00df\u00f4\u0011\u0002\u00cc\u0018\n\u00b5K\u00fe\u0002j\u00fe\u0017\u00fe7\u00c2ixo\u009c\u000f=\nS\u00ae\u00b9\t \u00e1";
                        var17_6 = "\u008b\u00e6\u0012\u00d0\u00a42g\u0093\u0092\u000e\u0006\u00f8O\u0006l\u00e5,\u00a2+H\u00f5\u00d0h(5\u00a88\u00c1\u00dem\u0001\u00cc$*\u00ca&\u00c9\u00c1\u009c\u00a3\u0018\u00ec\u0095\u00f9\u00a3na\u0010\u00d5\u00c8R1d\u00a9Gqi\t\u00cf\u0094\u00a6\u00c6\u00e1t\u00e3 \u00d4\u0099\u0081\u009c\u00d8\u00b5H\u008c\u00da\u00ab#N\u0017E\u00ab\u0087L\u00b0w\n\u009e\u00e57\u0097\u001d\u00f7EKE_R\u008d \u009a0q-tm<\u00c4\u0091\u00a4Qn\u00ff\u00ce\u009a\u00f7\u00faM\u001d\u00a6\u00a9\u00c9R\u0011\u0017\u00ed$\u00af\u00fe\u00c40y \\\u00ac+d\u00a9\u0018Trq\u00a0\u00cc^\u001f\u00c5\u001a\u008eE\f\u00e4\u00e0I\u00f5\u00a7)f\u008a@\u00df\u00f4\u0011\u0002\u00cc\u0018\n\u00b5K\u00fe\u0002j\u00fe\u0017\u00fe7\u00c2ixo\u009c\u000f=\nS\u00ae\u00b9\t \u00e1".length();
                        var14_7 = 40;
                        var13_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var13_8;
                            v4 = var15_5.substring(v3, v3 + var14_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = kt.bRz(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            var15_5 = "\u00cesM9\u00af\u0010\u0085\u0088\u00d9bL%\u00c0\u00ea>P\u000e-\u00d1\u0094\u00bc \u00aa\u00c83\u00bce%BQ\u00bb\u0011\u00fe~\u009bc'\u001baaX\u00c5\u00ac\u00cd\u0081rh\u00fd\u00af\u00ba\u0090\u00b7M:m\u0080\u00e5\u00aa\u00c2i\u00a0\u00cb\u0006J\u00fe\u008dkn\bN\u0083: s\u00e8\u00b3<=]\u008d4\u00b3\u00b1\u00dd\u00a2\u0092\u00ca\u00ffJ\u0086\u001d\u008c\u00a1jp\u00dbT\u0099@\u001f\u00ac\u00ad\u00c6\u00d9\u009e";
                            var17_6 = "\u00cesM9\u00af\u0010\u0085\u0088\u00d9bL%\u00c0\u00ea>P\u000e-\u00d1\u0094\u00bc \u00aa\u00c83\u00bce%BQ\u00bb\u0011\u00fe~\u009bc'\u001baaX\u00c5\u00ac\u00cd\u0081rh\u00fd\u00af\u00ba\u0090\u00b7M:m\u0080\u00e5\u00aa\u00c2i\u00a0\u00cb\u0006J\u00fe\u008dkn\bN\u0083: s\u00e8\u00b3<=]\u008d4\u00b3\u00b1\u00dd\u00a2\u0092\u00ca\u00ffJ\u0086\u001d\u008c\u00a1jp\u00dbT\u0099@\u001f\u00ac\u00ad\u00c6\u00d9\u009e".length();
                            var14_7 = 72;
                            var13_8 = -1;
lbl35:
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
lbl40:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = kt.bRz(var19_9).intern();
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
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                kt.wINKP = var18_3;
                kt.KQBfh = new String[8];
                kt.SwLAk = new HashMap<K, V>(13);
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
                var6_12 = new long[8];
                var3_13 = 0;
                var4_14 = "\u0098\u00b3\u00f6\u0007|\u0017\u00d4\u00ae\u0097\u00cdN\u00e1\u0089\u00ce\u00a9\u00a6)\u00ca\u00ca\u00c2\u00d96\u00ae4\u00b9O\u0096\u00f4\u00fd\u00eb\u00c6\u00f7\u00fc\u0091y\u008d\u00ff\u00a5\u0080\u0086@\u00cd\u00bb\u00a9\u0012T|\u00ed";
                var5_15 = "\u0098\u00b3\u00f6\u0007|\u0017\u00d4\u00ae\u0097\u00cdN\u00e1\u0089\u00ce\u00a9\u00a6)\u00ca\u00ca\u00c2\u00d96\u00ae4\u00b9O\u0096\u00f4\u00fd\u00eb\u00c6\u00f7\u00fc\u0091y\u008d\u00ff\u00a5\u0080\u0086@\u00cd\u00bb\u00a9\u0012T|\u00ed".length();
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
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00e0\u00ce\u0096U\u00148\u00188yn\u008c!X(\u0087N";
                    var5_15 = "\u00e0\u00ce\u0096U\u00148\u00188yn\u008c!X(\u0087N".length();
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
lbl92:
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
lbl105:
                // 1 sources

                ** continue;
            }
        }
        kt.HgRhM = var6_12;
        kt.jmxFQ = new Integer[8];
        kt.mCJQZ = Identifier.ofVanilla((String)kt.bRC("z", (int)2355, (long)(6903492504471941172L ^ var20)));
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kt.class, "bRE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(kt.class, "bRB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

