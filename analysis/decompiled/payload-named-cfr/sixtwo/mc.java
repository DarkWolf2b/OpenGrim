/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.World
 */
package sixtwo;

import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;

public record mc(World level, Entity sourceEntity, int stepIndex, Vec3d previousPosition, Vec3d currentPosition, Vec3d currentMotion, boolean inWater) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;
}

