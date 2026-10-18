package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.SkinTexturesResolveEvent;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.entity.player.SkinTextures;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;

@Mixin(PlayerListEntry.class)
public class PlayerListEntryMixin {
	@Inject(method = "getSkinTextures()Lnet/minecraft/entity/player/SkinTextures;",
			at = @At("RETURN"), cancellable = true)
	public void opengrim$onSkinTexturesResolve(CallbackInfoReturnable<SkinTextures> cir) {
		PlayerListEntry self = (PlayerListEntry) (Object) this;
		SkinTexturesResolveEvent event = EventBus.get()
				.post(new SkinTexturesResolveEvent(self.getProfile().id(), cir.getReturnValue()));
		SkinTextures replacement = event.replacement();
		if (replacement != null) {
			cir.setReturnValue(replacement);
		}
	}
}