package dev.opengrim.mixin;

import net.minecraft.entity.LimbAnimator;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

/**
 * Port of the original's mixin accessor
 * {@code mixin.accessors.WalkAnimationStateAccessor} (bootstrap decompile
 * analysis/decompiled/bootstrap/mixin/accessors/WalkAnimationStateAccessor.java):
 * exposes {@code LimbAnimator.animationProgress} so ghost entities can copy a
 * player's limb animation position (used by Pop Chams, sixtwo.cT$so.java:739).
 */
@Mixin(LimbAnimator.class)
public interface LimbAnimatorAccessor {
	@Accessor("animationProgress")
	void opengrim$setPosition(float position);

	@Accessor("animationProgress")
	float opengrim$getPosition();
}
