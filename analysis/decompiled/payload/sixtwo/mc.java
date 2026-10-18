package sixtwo;

import net.minecraft.class_1297;
import net.minecraft.class_1937;
import net.minecraft.class_243;

public record mc(
   class_1937 level, class_1297 sourceEntity, int stepIndex, class_243 previousPosition, class_243 currentPosition, class_243 currentMotion, boolean inWater
) {
}
