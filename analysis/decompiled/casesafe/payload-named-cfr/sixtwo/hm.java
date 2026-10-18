/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.shape.VoxelShape
 */
package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.shape.VoxelShape;
import sixtwo.hH;

public class hm
extends hH {
    private BlockState LCeGi;
    private BlockPos GvLRo;
    private VoxelShape nmQxT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hm(BlockState blockState, BlockPos blockPos, VoxelShape voxelShape) {
        this.LCeGi = blockState;
        this.GvLRo = blockPos;
        this.nmQxT = voxelShape;
    }

    public void bcS(VoxelShape voxelShape) {
        this.nmQxT = voxelShape;
    }

    public BlockState bcN() {
        return this.LCeGi;
    }

    public BlockPos bcO() {
        return this.GvLRo;
    }

    public VoxelShape bcP() {
        return this.nmQxT;
    }

    public void bcQ(BlockState blockState) {
        this.LCeGi = blockState;
    }

    public void bcR(BlockPos blockPos) {
        this.GvLRo = blockPos;
    }
}

