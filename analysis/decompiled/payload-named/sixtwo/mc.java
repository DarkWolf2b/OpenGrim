package sixtwo;

import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;

public record mc(World level, Entity sourceEntity, int stepIndex, Vec3d previousPosition, Vec3d currentPosition, Vec3d currentMotion, boolean inWater) {
}
