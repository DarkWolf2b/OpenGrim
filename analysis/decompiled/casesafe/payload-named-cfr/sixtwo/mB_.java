/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

public class mB {
    private BlockPos VBRbf;
    private Vec3d MgRaw;
    private Direction AoZAE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mB(BlockPos blockPos, Vec3d vec3d, Direction direction) {
        this.VBRbf = blockPos;
        this.MgRaw = vec3d;
        this.AoZAE = direction;
    }

    public void cmY(BlockPos blockPos) {
        this.VBRbf = blockPos;
    }

    public void cmZ(Vec3d vec3d) {
        this.MgRaw = vec3d;
    }

    public Direction cnd() {
        return this.AoZAE;
    }

    public Vec3d cnc() {
        return this.MgRaw;
    }

    public BlockPos cnb() {
        return this.VBRbf;
    }

    public void cna(Direction direction) {
        this.AoZAE = direction;
    }
}

