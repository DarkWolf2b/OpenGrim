package dev.opengrim.mixin;

import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.data.TrackedData;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

/**
 * Port of the original's mixin accessor
 * {@code mixin.accessors.LivingEntityAccessor} (bootstrap decompile
 * analysis/decompiled/bootstrap/mixin/accessors/LivingEntityAccessor.java,
 * {@code getDataHealthId()} on {@code field_6228}): exposes the private
 * {@code LivingEntity.HEALTH} tracked-data handle. Used by Soul Effects
 * (sixtwo.cZ#aaZ, cZ.java:875) to match the health entry of an
 * {@code EntityTrackerUpdateS2CPacket} by its tracked-data id.
 *
 * <p>The bootstrap accessor also carries
 * {@code callSetLivingEntityFlag(int, boolean)} on {@code method_6085}
 * (= Yarn {@code LivingEntity.setLivingFlag}); Fake Player's
 * {@code aay(boolean, Hand)} (cX.java:613-657) uses flag 1 (using item) and
 * flag 2 (off-hand active) through it, so the invoker is mirrored here.
 */
@Mixin(LivingEntity.class)
public interface LivingEntityAccessor {
	@Accessor("HEALTH")
	static TrackedData<Float> opengrim$getHealthData() {
		throw new AssertionError();
	}

	/** Port of {@code callSetLivingEntityFlag} (bootstrap LivingEntityAccessor:22-23). */
	@Invoker("setLivingFlag")
	void opengrim$setLivingFlag(int flag, boolean value);
}
