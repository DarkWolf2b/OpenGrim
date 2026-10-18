/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;
import sixtwo.rD;

public record oz(BlockPos blockPos, BlockHitResult blockHitResult) {
    private static String[] a;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        if (oz.b() != null) {
            oz.b(new String[2]);
        }
    }

    public static String[] b() {
        return a;
    }

    public static void b(String[] stringArray) {
        a = stringArray;
    }

    public BlockState blockState() {
        return rD.dlmvG.world.getBlockState(this.blockPos);
    }

    public Vec3d hitPoint() {
        return this.blockHitResult.getPos();
    }
}

