/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.text.Text
 */
package sixtwo;

import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.text.Text;
import sixtwo.hH;

public class gi
extends hH {
    private Entity PkMHK;
    private Text KWUnr;
    private MatrixStack KSVnW;
    private OrderedRenderCommandQueue fqnYk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gi(Entity entity, Text text, MatrixStack matrixStack, OrderedRenderCommandQueue orderedRenderCommandQueue) {
        this.PkMHK = entity;
        this.KWUnr = text;
        this.KSVnW = matrixStack;
        this.fqnYk = orderedRenderCommandQueue;
    }

    public OrderedRenderCommandQueue baO() {
        return this.fqnYk;
    }

    public MatrixStack baN() {
        return this.KSVnW;
    }

    public Entity baL() {
        return this.PkMHK;
    }

    public Text baM() {
        return this.KWUnr;
    }
}

