/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.OverlayTexture
 *  net.minecraft.client.render.RenderLayers
 *  net.minecraft.client.render.command.ModelCommandRenderer$CrumblingOverlayCommand
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.entity.equipment.EquipmentModel
 *  net.minecraft.client.render.entity.equipment.EquipmentModel$LayerType
 *  net.minecraft.client.render.entity.equipment.EquipmentModelLoader
 *  net.minecraft.client.render.entity.feature.FeatureRenderer
 *  net.minecraft.client.render.entity.feature.FeatureRendererContext
 *  net.minecraft.client.render.entity.model.BipedEntityModel
 *  net.minecraft.client.render.entity.model.EntityModelLayers
 *  net.minecraft.client.render.entity.model.LoadedEntityModels
 *  net.minecraft.client.render.entity.model.PlayerCapeModel
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.component.type.EquippableComponent
 *  net.minecraft.entity.Entity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.command.ModelCommandRenderer;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.equipment.EquipmentModel;
import net.minecraft.client.render.entity.equipment.EquipmentModelLoader;
import net.minecraft.client.render.entity.feature.FeatureRenderer;
import net.minecraft.client.render.entity.feature.FeatureRendererContext;
import net.minecraft.client.render.entity.model.BipedEntityModel;
import net.minecraft.client.render.entity.model.EntityModelLayers;
import net.minecraft.client.render.entity.model.LoadedEntityModels;
import net.minecraft.client.render.entity.model.PlayerCapeModel;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.EquippableComponent;
import net.minecraft.entity.Entity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.RegistryKey;
import net.minecraft.util.Identifier;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.iS;
import sixtwo.qC;
import sixtwo.qu;
import sixtwo.rD;

public class qE
extends FeatureRenderer<PlayerEntityRenderState, PlayerEntityModel> {
    private final BipedEntityModel<PlayerEntityRenderState> jmbPO;
    private final EquipmentModelLoader VDPZF;
    private static final long gmDen = gb.aYR(1610285853023546737L, 3427000863365390479L, MethodHandles.lookup().lookupClass()).a(189872680527603L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qE(FeatureRendererContext<PlayerEntityRenderState, PlayerEntityModel> featureRendererContext, LoadedEntityModels loadedEntityModels, EquipmentModelLoader equipmentModelLoader) {
        long l2 = gmDen ^ 0x5EE9785E0C1FL;
        super(featureRendererContext);
        this.jmbPO = new PlayerCapeModel(loadedEntityModels.getModelPart(EntityModelLayers.PLAYER_CAPE));
        boolean bl2 = qC.cZy();
        try {
            this.VDPZF = equipmentModelLoader;
            if (!bl2) {
                iS.bwK("Ujbrd");
            }
        }
        catch (MatchException matchException) {
            throw qE.cZJ(matchException);
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cZI(MatrixStack matrixStack, OrderedRenderCommandQueue orderedRenderCommandQueue, int n2, PlayerEntityRenderState playerEntityRenderState, float f2, float f3) {
        block38: {
            boolean bl2;
            Identifier identifier;
            block37: {
                boolean bl3;
                AbstractClientPlayerEntity abstractClientPlayerEntity;
                boolean bl4;
                block36: {
                    block35: {
                        Entity entity;
                        block34: {
                            boolean bl5;
                            block33: {
                                long l2 = gmDen ^ 0x1F7E965FE8CBL;
                                bl4 = qC.cZz();
                                try {
                                    if (rD.dlmvG.world == null) {
                                        return;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw qE.cZJ(matchException);
                                }
                                try {
                                    bl5 = qu.cmARD.get();
                                    if (bl4) break block33;
                                    if (bl5) return;
                                }
                                catch (MatchException matchException) {
                                    throw qE.cZJ(matchException);
                                }
                                bl5 = hF.BQuMu;
                            }
                            if (!bl5) {
                                return;
                            }
                            Entity entity2 = rD.dlmvG.world.getEntityById(playerEntityRenderState.id);
                            try {
                                try {
                                    entity = entity2;
                                    if (bl4) break block34;
                                    if (!(entity instanceof AbstractClientPlayerEntity)) return;
                                }
                                catch (MatchException matchException) {
                                    throw qE.cZJ(matchException);
                                }
                                entity = entity2;
                            }
                            catch (MatchException matchException) {
                                throw qE.cZJ(matchException);
                            }
                        }
                        abstractClientPlayerEntity = (AbstractClientPlayerEntity)entity;
                        try {
                            if (bl4) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        ee ee2 = rD.dlJ().aZx(ee.class);
                        try {
                            try {
                                bl3 = playerEntityRenderState.invisible;
                                if (bl4) break block35;
                                if (bl3) return;
                            }
                            catch (MatchException matchException) {
                                throw qE.cZJ(matchException);
                            }
                            bl3 = ee2.bag();
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                    }
                    try {
                        try {
                            if (bl4) break block36;
                            if (!bl3) return;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        bl3 = playerEntityRenderState.capeVisible;
                    }
                    catch (MatchException matchException) {
                        throw qE.cZJ(matchException);
                    }
                }
                if (!bl3) return;
                identifier = rD.dlT().daj(abstractClientPlayerEntity);
                try {
                    if (identifier == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw qE.cZJ(matchException);
                }
                try {
                    try {
                        try {
                            bl2 = this.cZH(playerEntityRenderState.equippedChestStack, EquipmentModel.LayerType.WINGS);
                            if (bl4) break block37;
                            if (bl2) return;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        matrixStack.push();
                        if (bl4) break block38;
                    }
                    catch (MatchException matchException) {
                        throw qE.cZJ(matchException);
                    }
                    bl2 = this.cZH(playerEntityRenderState.equippedChestStack, EquipmentModel.LayerType.HUMANOID);
                }
                catch (MatchException matchException) {
                    throw qE.cZJ(matchException);
                }
            }
            try {
                if (bl2) {
                    matrixStack.translate(0.0f, -0.053125f, 0.06875f);
                }
            }
            catch (MatchException matchException) {
                throw qE.cZJ(matchException);
            }
            orderedRenderCommandQueue.submitModel(this.jmbPO, (Object)playerEntityRenderState, matrixStack, RenderLayers.entitySolid((Identifier)identifier), n2, OverlayTexture.DEFAULT_UV, playerEntityRenderState.outlineColor, (ModelCommandRenderer.CrumblingOverlayCommand)null);
        }
        matrixStack.pop();
    }

    private boolean cZH(ItemStack itemStack, EquipmentModel.LayerType layerType) {
        boolean bl2;
        block8: {
            block7: {
                boolean bl3;
                block9: {
                    block10: {
                        EquippableComponent equippableComponent;
                        boolean bl4;
                        EquippableComponent equippableComponent2;
                        block6: {
                            long l2 = gmDen ^ 0x421E4184392L;
                            equippableComponent2 = (EquippableComponent)itemStack.get(DataComponentTypes.EQUIPPABLE);
                            bl4 = qC.cZy();
                            try {
                                equippableComponent = equippableComponent2;
                                if (!bl4) break block6;
                                if (equippableComponent == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw qE.cZJ(matchException);
                            }
                            equippableComponent = equippableComponent2;
                        }
                        try {
                            bl2 = equippableComponent.assetId().isPresent();
                            if (!bl4) break block8;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        EquipmentModel equipmentModel = this.VDPZF.get((RegistryKey)equippableComponent2.assetId().get());
                        try {
                            bl3 = equipmentModel.getLayers(layerType).isEmpty();
                            if (!bl4) break block9;
                            if (bl3) break block10;
                        }
                        catch (MatchException matchException) {
                            throw qE.cZJ(matchException);
                        }
                        bl3 = true;
                        break block9;
                    }
                    bl3 = false;
                }
                return bl3;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException cZJ(MatchException matchException) {
        return matchException;
    }
}

