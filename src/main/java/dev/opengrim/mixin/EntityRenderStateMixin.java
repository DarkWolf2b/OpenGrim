package dev.opengrim.mixin;

import dev.opengrim.modules.render.ChamsRenderState;
import dev.opengrim.modules.render.NametagSuppressState;
import net.minecraft.client.render.entity.state.EntityRenderState;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Unique;

/**
 * Carries the Chams "Hide Original" flag (sixtwo.dv#aiJ), the {@code aiM}
 * label-fallback flag, and the 2D ESP nametag suppression flag from entity
 * state extraction to model/label submission.
 */
@Mixin(EntityRenderState.class)
public class EntityRenderStateMixin implements ChamsRenderState, NametagSuppressState {
	@Unique
	private boolean opengrim$chamsHidden;
	@Unique
	private boolean opengrim$chamsKeepLabel;
	@Unique
	private boolean opengrim$nametagSuppressed;

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

	@Override
	public void opengrim$setNametagSuppressed(boolean suppressed) {
		this.opengrim$nametagSuppressed = suppressed;
	}

	@Override
	public boolean opengrim$isNametagSuppressed() {
		return this.opengrim$nametagSuppressed;
	}
}
