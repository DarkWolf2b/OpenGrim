/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.world.World
 *  org.joml.Matrix3x2fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.world.World;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;
import sixtwo.ju;
import sixtwo.ju$tT;
import sixtwo.jy;

public final class jv
extends jy<jv> {
    private LivingEntity kyBjH;
    private World qOMFo;
    private float ZBHtA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public jv(@Nullable Matrix3x2fc matrix3x2fc, @Nullable LivingEntity livingEntity, @Nullable World world, ItemStack itemStack, float f2, float f3, float f4) {
        super(matrix3x2fc, itemStack, f2, f3, ju$tT.yDoOO);
        this.kyBjH = livingEntity;
        this.qOMFo = world;
        this.ZBHtA = f4;
    }

    public jv bGs(@Nullable LivingEntity livingEntity) {
        this.kyBjH = livingEntity;
        return this;
    }

    public jv bGu(float f2) {
        this.ZBHtA = f2;
        return this;
    }

    public jv bGt(@Nullable World world) {
        this.qOMFo = world;
        return this;
    }

    @Override
    public void renderIntoBatch() {
        ju.bFO(this.wvKbm, this.kyBjH, this.qOMFo, this.qeMTM, this.svsZw, this.zXQoo, this.ZBHtA, this.qxFcM);
    }
}

