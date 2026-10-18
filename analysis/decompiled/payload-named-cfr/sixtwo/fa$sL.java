/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import native.Loader;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

final class fa$sL
extends Record {
    private final BlockPos railPos;
    private final BlockPos firePos;
    private final BlockHitResult cartHitResult;
    private final Vec3d shotPoint;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private fa$sL(BlockPos blockPos, BlockPos blockPos2, BlockHitResult blockHitResult, Vec3d vec3d) {
        this.railPos = blockPos;
        this.firePos = blockPos2;
        this.cartHitResult = blockHitResult;
        this.shotPoint = vec3d;
    }

    static {
        Loader.doInit(fa$sL.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native Vec3d shotPoint();

    public native BlockPos railPos();

    public native BlockPos firePos();

    public native BlockHitResult cartHitResult();
}

