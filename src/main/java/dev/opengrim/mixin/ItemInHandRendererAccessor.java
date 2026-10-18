package dev.opengrim.mixin;

import net.minecraft.client.render.item.HeldItemRenderer;
import net.minecraft.item.ItemStack;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

/**
 * Port of the original's mixin accessor
 * {@code mixin.accessors.ItemInHandRendererAccessor} (bootstrap jar,
 * analysis/jars/bootstrap-raw/mixin/accessors/ItemInHandRendererAccessor.class):
 * exposes the first-person held-item renderer's equip progress and cached
 * hand stacks so Swing Animations (sixtwo.cQ YF, cQ.java:213-301) can snap the
 * equip animation to completion on held-item changes.
 */
@Mixin(HeldItemRenderer.class)
public interface ItemInHandRendererAccessor {
	@Accessor("equipProgressMainHand")
	float opengrim$getEquipProgressMainHand();

	@Accessor("equipProgressMainHand")
	void opengrim$setEquipProgressMainHand(float value);

	@Accessor("equipProgressOffHand")
	float opengrim$getEquipProgressOffHand();

	@Accessor("equipProgressOffHand")
	void opengrim$setEquipProgressOffHand(float value);

	@Accessor("mainHand")
	void opengrim$setMainHand(ItemStack stack);

	@Accessor("offHand")
	void opengrim$setOffHand(ItemStack stack);
}
