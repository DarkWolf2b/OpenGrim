/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;
import sixtwo.hH;

public class gS
extends hH {
    private BlockState XpgmN;
    private BlockPos dxjVh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gS(BlockState blockState, BlockPos blockPos) {
        this.XpgmN = blockState;
        this.dxjVh = blockPos;
    }

    public void bci(BlockState blockState) {
        this.XpgmN = blockState;
    }

    public BlockState bcg() {
        return this.XpgmN;
    }

    public BlockPos bch() {
        return this.dxjVh;
    }
}

