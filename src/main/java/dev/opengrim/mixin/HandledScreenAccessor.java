package dev.opengrim.mixin;

import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.screen.slot.Slot;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

/**
 * Exposes the hovered slot of a handled screen. Vanilla keeps
 * {@code focusedSlot} protected with no accessor on this stack.
 */
@Mixin(HandledScreen.class)
public interface HandledScreenAccessor {
	@Accessor("focusedSlot")
	Slot opengrim$getFocusedSlot();

	/**
	 * Port of the original's mixin accessor
	 * {@code AbstractContainerScreenAccessor.invokeGetHoveredSlot(DD)} (sixtwo.dJ
	 * amK, handlers/dJ.md): the protected screen-space slot lookup.
	 */
	@Invoker("getSlotAt")
	Slot opengrim$invokeGetSlotAt(double x, double y);
}
