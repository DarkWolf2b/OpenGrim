/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.entity.EntityRenderManager
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.PlayerLikeEntity
 */
package sixtwo;

import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.EntityRenderManager;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.PlayerLikeEntity;
import sixtwo.hH;

public class gj
extends hH {
    private MatrixStack UlhDQ;
    private PlayerLikeEntity dGSXa;
    private EntityRenderManager JmnUb;
    private OrderedRenderCommandQueue AMllE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gj(MatrixStack matrixStack, PlayerLikeEntity playerLikeEntity, EntityRenderManager entityRenderManager, OrderedRenderCommandQueue orderedRenderCommandQueue) {
        this.UlhDQ = matrixStack;
        this.dGSXa = playerLikeEntity;
        this.JmnUb = entityRenderManager;
        this.AMllE = orderedRenderCommandQueue;
    }

    public EntityRenderManager baR() {
        return this.JmnUb;
    }

    public OrderedRenderCommandQueue baS() {
        return this.AMllE;
    }

    public MatrixStack baP() {
        return this.UlhDQ;
    }

    public PlayerLikeEntity baQ() {
        return this.dGSXa;
    }
}

