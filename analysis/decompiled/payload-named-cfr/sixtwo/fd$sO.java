/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import native.Loader;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;

final class fd$sO
extends Record {
    private final BlockPos dripstonePos;
    private final BlockPos trapdoorPos;
    private final BlockHitResult placeHitResult;
    private final boolean secondaryUse;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private fd$sO(BlockPos blockPos, BlockPos blockPos2, BlockHitResult blockHitResult, boolean bl2) {
        this.dripstonePos = blockPos;
        this.trapdoorPos = blockPos2;
        this.placeHitResult = blockHitResult;
        this.secondaryUse = bl2;
    }

    static {
        Loader.doInit(fd$sO.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native BlockPos dripstonePos();

    public native BlockPos trapdoorPos();

    public native boolean secondaryUse();

    public native BlockHitResult placeHitResult();
}

