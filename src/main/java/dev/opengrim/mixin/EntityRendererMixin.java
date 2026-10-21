package dev.opengrim.mixin;

import dev.opengrim.modules.render.Chams;
import dev.opengrim.modules.render.ChamsRenderState;
import net.minecraft.client.render.entity.EntityRenderer;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Marks each extracted {@link EntityRenderState} with the Chams "Hide Original"
 * decision. 1.21.11 splits entity rendering into
 * {@code EntityRenderer.updateRenderState(entity, state, delta)} and
 * {@code LivingEntityRenderer.render(state, ...)}; only the former still has
 * the entity reference.
 *
 * <p>Gate: sixtwo.dv#aiJ (dv.java:1266-1390) evaluated when the model is drawn -
 * module enabled, "Hide Original" on, not the Chams batch ({@code kn.YNOIY}),
 * entity in the "Entities" set, the self light/apply/first-person rules, and
 * the {@code aiM} label fallback used by the original bootstrap.
 */
@Mixin(EntityRenderer.class)
public class EntityRendererMixin {
	@Inject(method = "updateRenderState(Lnet/minecraft/entity/Entity;Lnet/minecraft/client/render/entity/state/EntityRenderState;F)V",
			at = @At("TAIL"))
	private void opengrim$markChams(Entity entity, EntityRenderState state, float tickDelta,
			CallbackInfo ci) {
		if (state instanceof ChamsRenderState marker) {
			marker.opengrim$setChamsHidden(Chams.shouldHideModel(entity, state.light));
			marker.opengrim$setChamsKeepLabel(Chams.shouldHideOriginal(entity));
		}
	}
}
