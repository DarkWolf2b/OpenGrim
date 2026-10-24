package dev.opengrim.mixin;

import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.render.Freecam;
import net.minecraft.client.input.Input;
import net.minecraft.client.input.KeyboardInput;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.Vec2f;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * Suppresses real player movement while Freecam is active so the player
 * entity stays put while the camera moves freely.
 */
@Mixin(KeyboardInput.class)
public class KeyboardInputMixin {
	@Inject(method = "tick", at = @At("TAIL"))
	private void opengrim$suppressPlayerMovement(CallbackInfo ci) {
		Freecam freecam = ModuleManager.get().getModule(Freecam.class);
		if (freecam != null && freecam.isEnabled()) {
			Input input = (Input) (Object) this;
			input.playerInput = PlayerInput.DEFAULT;
			((InputAccessor) input).opengrim$setMovementVector(Vec2f.ZERO);
		}
	}
}
