package dev.opengrim.mixin;

import net.minecraft.client.network.PendingUpdateManager;
import net.minecraft.client.world.ClientWorld;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

/**
 * Port of the original's mixin accessor
 * {@code mixin.accessors.ClientLevelAccessor} (bootstrap decompile
 * analysis/decompiled/bootstrap/mixin/accessors/ClientLevelAccessor.java:
 * {@code @Accessor("field_37951") getBlockStatePredictionHandler()}): exposes
 * {@code ClientWorld.pendingUpdateManager} (package-private in vanilla) so
 * Nuker's fastest mode can send its START_DESTROY_BLOCK packet with a
 * block-prediction sequence number - the original's sixtwo.jd#bAo
 * (jd.java, invoked at dI.java:1411) does exactly this.
 */
@Mixin(ClientWorld.class)
public interface ClientWorldAccessor {
	@Accessor("pendingUpdateManager")
	PendingUpdateManager opengrim$getPendingUpdateManager();
}
