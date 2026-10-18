/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  org.joml.Matrix3x2fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import net.minecraft.item.ItemStack;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;
import sixtwo.ju;
import sixtwo.ju$tT;
import sixtwo.jy;

public final class jw
extends jy<jw> {
    private String zujhu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public jw(@Nullable Matrix3x2fc matrix3x2fc, ItemStack itemStack, float f2, float f3) {
        super(matrix3x2fc, itemStack, f2, f3, ju$tT.yDoOO);
    }

    public jw bGz(@Nullable String string) {
        this.zujhu = string;
        return this;
    }

    @Override
    public void renderIntoBatch() {
        ju.bFT(this.wvKbm, this.qeMTM, this.svsZw, this.zXQoo, this.zujhu, this.qxFcM);
    }
}

