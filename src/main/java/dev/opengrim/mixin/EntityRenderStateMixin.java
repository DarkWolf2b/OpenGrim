package dev.opengrim.mixin;

import dev.opengrim.modules.render.ChamsRenderState;
import net.minecraft.client.render.entity.state.EntityRenderState;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Unique;

/**
 * Carries the Chams "Hide Original" flag (sixtwo.dv#aiJ) and the {@code aiM}
 * label-fallback flag from entity state extraction to model submission. See
 * {@link ChamsRenderState}.
 */
@Mixin(EntityRenderState.class)
public class EntityRenderStateMixin implements ChamsRenderState {
	@Unique
	private boolean opengrim$chamsHidden;
	@Unique
	private boolean opengrim$chamsKeepLabel;

	@Override
	public void opengrim$setChamsHidden(boolean hidden) {
		this.opengrim$chamsHidden = hidden;
	}

	@Override
	public boolean opengrim$isChamsHidden() {
		return this.opengrim$chamsHidden;
	}

	@Override
	public void opengrim$setChamsKeepLabel(boolean keep) {
		this.opengrim$chamsKeepLabel = keep;
	}

	@Override
	public boolean opengrim$isChamsKeepLabel() {
		return this.opengrim$chamsKeepLabel;
	}
}
