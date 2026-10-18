/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.client.font.TextRenderer$TextLayerType
 *  net.minecraft.client.model.Model
 *  net.minecraft.client.model.ModelPart
 *  net.minecraft.client.render.RenderLayer
 *  net.minecraft.client.render.block.MovingBlockRenderState
 *  net.minecraft.client.render.command.ModelCommandRenderer$CrumblingOverlayCommand
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue$Custom
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue$LayeredCustom
 *  net.minecraft.client.render.command.RenderCommandQueue
 *  net.minecraft.client.render.entity.state.EntityRenderState
 *  net.minecraft.client.render.entity.state.EntityRenderState$LeashData
 *  net.minecraft.client.render.entity.state.EntityRenderState$ShadowPiece
 *  net.minecraft.client.render.item.ItemRenderState$Glint
 *  net.minecraft.client.render.model.BakedQuad
 *  net.minecraft.client.render.model.BlockStateModel
 *  net.minecraft.client.render.state.CameraRenderState
 *  net.minecraft.client.texture.Sprite
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.item.ItemDisplayContext
 *  net.minecraft.text.OrderedText
 *  net.minecraft.text.Text
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Quaternionf
 */
package sixtwo;

import java.util.List;
import net.minecraft.block.BlockState;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.model.Model;
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.block.MovingBlockRenderState;
import net.minecraft.client.render.command.ModelCommandRenderer;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.command.RenderCommandQueue;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.item.ItemRenderState;
import net.minecraft.client.render.model.BakedQuad;
import net.minecraft.client.render.model.BlockStateModel;
import net.minecraft.client.render.state.CameraRenderState;
import net.minecraft.client.texture.Sprite;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.item.ItemDisplayContext;
import net.minecraft.text.OrderedText;
import net.minecraft.text.Text;
import net.minecraft.util.math.Vec3d;
import org.joml.Quaternionf;
import sixtwo.kn;
import sixtwo.kn$ui;

final class kn$uh
implements OrderedRenderCommandQueue {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private RenderCommandQueue dsD() {
        return kn.bQw().bGT();
    }

    public void submitFire(MatrixStack matrices, EntityRenderState renderState, Quaternionf rotation) {
    }

    public void submitLeash(MatrixStack matrices, EntityRenderState.LeashData leashData) {
    }

    public void submitLabel(MatrixStack matrices, Vec3d nameLabelPos, int y2, Text label, boolean notSneaking, int light, double squaredDistanceToCamera, CameraRenderState cameraState) {
    }

    public void submitShadowPieces(MatrixStack matrices, float shadowRadius, List<EntityRenderState.ShadowPiece> shadowPieces) {
    }

    private kn$uh() {
    }

    public void submitMovingBlock(MatrixStack matrices, MovingBlockRenderState state) {
    }

    public void submitModelPart(ModelPart part, MatrixStack matrices, RenderLayer renderLayer, int light, int overlay, Sprite sprite, boolean sheeted, boolean hasGlint, int tintedColor, ModelCommandRenderer.CrumblingOverlayCommand crumblingOverlay, int n2) {
        this.dsD().submitModelPart(part, matrices, renderLayer, light, overlay, sprite, sheeted, hasGlint, tintedColor, crumblingOverlay, n2);
    }

    public void submitBlockStateModel(MatrixStack matrices, RenderLayer renderLayer, BlockStateModel model, float r2, float g2, float b2, int light, int overlay, int outlineColor) {
    }

    public void submitBlock(MatrixStack matrices, BlockState state, int light, int overlay, int outlineColor) {
    }

    public void submitCustom(OrderedRenderCommandQueue.LayeredCustom customRenderer) {
    }

    public void submitItem(MatrixStack matrices, ItemDisplayContext displayContext, int light, int overlay, int outlineColors, int[] tintLayers, List<BakedQuad> quads, RenderLayer renderLayer, ItemRenderState.Glint glintType) {
        this.dsD().submitItem(matrices, displayContext, light, overlay, outlineColors, tintLayers, quads, renderLayer, glintType);
    }

    public void submitCustom(MatrixStack matrices, RenderLayer renderLayer, OrderedRenderCommandQueue.Custom customRenderer) {
        this.dsD().submitCustom(matrices, renderLayer, customRenderer);
    }

    public <S> void submitModel(Model<? super S> model, S state, MatrixStack matrices, RenderLayer renderLayer, int light, int overlay, int tintedColor, Sprite sprite, int outlineColor, ModelCommandRenderer.CrumblingOverlayCommand crumblingOverlay) {
        this.dsD().submitModel(model, state, matrices, renderLayer, light, overlay, tintedColor, sprite, outlineColor, crumblingOverlay);
    }

    public void submitText(MatrixStack matrices, float x2, float y2, OrderedText text, boolean dropShadow, TextRenderer.TextLayerType layerType, int light, int color, int backgroundColor, int outlineColor) {
    }

    public RenderCommandQueue getBatchingQueue(int order) {
        return new kn$ui((RenderCommandQueue)kn.bQw().bGT().getBatchingQueue(order));
    }
}

