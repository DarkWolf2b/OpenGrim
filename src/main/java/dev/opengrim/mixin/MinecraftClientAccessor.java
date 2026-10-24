package dev.opengrim.mixin;

import net.minecraft.client.MinecraftClient;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

/**
 * Accessor for {@code MinecraftClient.itemUseCooldown} (Yarn name for original
 * {@code field_1752 rightClickDelay}, matching original {@code MinecraftAccessor}).
 */
@Mixin(MinecraftClient.class)
public interface MinecraftClientAccessor {
	@Accessor("itemUseCooldown")
	int opengrim$getItemUseCooldown();

	@Accessor("itemUseCooldown")
	void opengrim$setItemUseCooldown(int cooldown);
}
