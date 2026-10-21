package dev.opengrim.modules.render;

/**
 * Duck interface added to {@code net.minecraft.client.render.entity.state.EntityRenderState}
 * by {@code EntityRenderStateMixin}. The 1.21.11 entity renderer is split into
 * state extraction ({@code EntityRenderer.updateRenderState(entity, state, delta)})
 * and submission ({@code LivingEntityRenderer.render(state, ...)}); the model
 * submission only receives the state, so the Chams "Hide Original" decision
 * (sixtwo.dv#aiJ, dv.java:1266-1390) travels on the state.
 */
public interface ChamsRenderState {
	void opengrim$setChamsHidden(boolean hidden);

	boolean opengrim$isChamsHidden();

	/**
	 * {@code dv.aiM(entity)} at the same extraction: the original bootstrap
	 * ({@code LivingEntityRenderEventBridgeMixin.offline$renderLivingEntity})
	 * re-submits {@code EntityRenderer.render} (leash + label) after cancelling
	 * the living-entity render when {@code aiM} holds.
	 */
	void opengrim$setChamsKeepLabel(boolean keep);

	boolean opengrim$isChamsKeepLabel();
}
