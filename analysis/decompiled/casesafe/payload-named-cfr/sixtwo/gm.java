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

public class gm
extends hH {
    private Hand ZSWTm;
    private Arm TEGQu;
    private float CSsHU;
    private ItemStack QDpDW;
    private float oeAfQ;
    private MatrixStack UUADX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public float bbe() {
        return this.oeAfQ;
    }

    public Hand bba() {
        return this.ZSWTm;
    }

    public gm(Hand hand, Arm arm, float f2, ItemStack itemStack, float f3, MatrixStack matrixStack) {
        this.ZSWTm = hand;
        this.TEGQu = arm;
        this.CSsHU = f2;
        this.QDpDW = itemStack;
        this.oeAfQ = f3;
        this.UUADX = matrixStack;
    }

    public float bbc() {
        return this.CSsHU;
    }

    public ItemStack bbd() {
        return this.QDpDW;
    }

    public Arm bbb() {
        return this.TEGQu;
    }

    public MatrixStack bbf() {
        return this.UUADX;
    }
}

