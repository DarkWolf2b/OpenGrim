/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.Arm
 *  net.minecraft.util.Hand
 */
package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Arm;
import net.minecraft.util.Hand;
import sixtwo.hH;

public class gl
extends hH {
    private Hand vymrZ;
    private Arm EAANp;
    private float NcQJW;
    private ItemStack AhPGQ;
    private float xnMqJ;
    private MatrixStack WigNW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gl(Hand hand, Arm arm, float f2, ItemStack itemStack, float f3, MatrixStack matrixStack) {
        this.vymrZ = hand;
        this.EAANp = arm;
        this.NcQJW = f2;
        this.AhPGQ = itemStack;
        this.xnMqJ = f3;
        this.WigNW = matrixStack;
    }

    public Hand baU() {
        return this.vymrZ;
    }

    public float baW() {
        return this.NcQJW;
    }

    public ItemStack baX() {
        return this.AhPGQ;
    }

    public float baY() {
        return this.xnMqJ;
    }

    public Arm baV() {
        return this.EAANp;
    }

    public MatrixStack baZ() {
        return this.WigNW;
    }
}

