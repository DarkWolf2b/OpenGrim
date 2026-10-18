/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

final class fb$sM
extends Record {
    private final BlockPos railPos;
    private final BlockHitResult cartHitResult;
    private final List<Vec3d> arrowPath;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private fb$sM(BlockPos blockPos, BlockHitResult blockHitResult, List<Vec3d> list) {
        this.railPos = blockPos;
        this.cartHitResult = blockHitResult;
        this.arrowPath = list;
    }

    static {
        Loader.doInit(fb$sM.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native List<Vec3d> arrowPath();

    public native BlockPos railPos();

    public native BlockHitResult cartHitResult();
}

