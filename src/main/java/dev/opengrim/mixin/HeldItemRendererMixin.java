package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.HandRenderEvent;
import dev.opengrim.event.impl.HeldItemChangeEvent;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.item.HeldItemRenderer;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Arm;
import net.minecraft.util.Hand;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Unique;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

/**
 * View Model (sixtwo.dC) hand/arm render bridge. Mirrors the original shell's
 * {@code mixin.accessors.ItemInHandEventBridgeMixin}: the held-item event fires
 * immediately before {@code HeldItemRenderer#renderItem} inside
 * {@code renderFirstPersonItem} (the original {@code gl} event), the arm event
 * at the head of {@code renderArmHoldingItem} (the original {@code gt} event).
 * Both hand the live {@link MatrixStack} to {@link HandRenderEvent} listeners.
 *
 * <p>It also publishes {@link HeldItemChangeEvent} from the head of
 * {@code HeldItemRenderer#updateHeldItems} (Yarn {@code method_3220}) when the
 * player's main- or off-hand stack object changed. The original's held-item
 * signal reaches Swing Animations as the blank shell {@code hc} event
 * (dispatched at {@code ClientPlayerEntity.tick} HEAD by
 * {@code LocalPlayerEventBridgeMixin}, bootstrap line 121-137), whose native
 * per-hand change predicates {@code in.bkX()/bkY()} are unrecovered
 * (cQ.java:240,266). Vanilla tracks those stack changes in
 * {@code updateHeldItems}; this bridge exposes them as an event exactly once
 * per reference change.
 */
@Mixin(HeldItemRenderer.class)
public class HeldItemRendererMixin {
	@Unique
	private ItemStack opengrim$lastMainHand = ItemStack.EMPTY;
	@Unique
	private ItemStack opengrim$lastOffHand = ItemStack.EMPTY;

	@Inject(method = "updateHeldItems()V", at = @At("HEAD"))
	private void opengrim$heldItemChange(CallbackInfo ci) {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player == null) {
			return;
		}
		ItemStack mainHand = player.getMainHandStack();
		ItemStack offHand = player.getOffHandStack();
		boolean mainChanged = mainHand != this.opengrim$lastMainHand;
		boolean offChanged = offHand != this.opengrim$lastOffHand;
		this.opengrim$lastMainHand = mainHand;
		this.opengrim$lastOffHand = offHand;
		if (mainChanged || offChanged) {
			EventBus.get().post(new HeldItemChangeEvent(player, mainHand, offHand, mainChanged, offChanged));
		}
	}

	@Inject(method = "renderFirstPersonItem(Lnet/minecraft/client/network/AbstractClientPlayerEntity;FFLnet/minecraft/util/Hand;FLnet/minecraft/item/ItemStack;FLnet/minecraft/client/util/math/MatrixStack;Lnet/minecraft/client/render/command/OrderedRenderCommandQueue;I)V",
			at = @At(value = "INVOKE",
					target = "Lnet/minecraft/client/render/item/HeldItemRenderer;renderItem(Lnet/minecraft/entity/LivingEntity;Lnet/minecraft/item/ItemStack;Lnet/minecraft/item/ItemDisplayContext;Lnet/minecraft/client/util/math/MatrixStack;Lnet/minecraft/client/render/command/OrderedRenderCommandQueue;I)V",
					shift = At.Shift.BEFORE))
	private void opengrim$heldItemRender(AbstractClientPlayerEntity player, float tickProgress, float pitch, Hand hand,
			float swingProgress, ItemStack stack, float equipProgress, MatrixStack matrices,
			OrderedRenderCommandQueue queue, int light, CallbackInfo ci) {
		EventBus.get().post(new HandRenderEvent(HandRenderEvent.Part.ITEM, hand, matrices));
	}

	@Inject(method = "renderArmHoldingItem(Lnet/minecraft/client/util/math/MatrixStack;Lnet/minecraft/client/render/command/OrderedRenderCommandQueue;IFFLnet/minecraft/util/Arm;)V",
			at = @At("HEAD"))
	private void opengrim$armRender(MatrixStack matrices, OrderedRenderCommandQueue queue, int light,
			float equipProgress, float swingProgress, Arm arm, CallbackInfo ci) {
		EventBus.get().post(new HandRenderEvent(HandRenderEvent.Part.ARM, null, matrices));
	}
}
