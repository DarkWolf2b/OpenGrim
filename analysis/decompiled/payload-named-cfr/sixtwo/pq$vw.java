/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import net.minecraft.item.ItemStack;
import sixtwo.lq;

record pq$vw(ItemStack stack, String text, lq font, float renderScale, float alpha, float paddingX, float paddingY, float itemScale, float itemSize, boolean hasIcon, boolean hasName, float iconOutput, float nameOutput) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public float textHeight() {
        return this.font.cat();
    }

    public float textWidth() {
        return this.font.cao(this.text);
    }
}

