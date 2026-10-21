package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.MouseScrollEvent;
import dev.opengrim.mixin.HandledScreenAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.CraftingResultSlot;
import net.minecraft.screen.slot.Slot;
import net.minecraft.screen.slot.SlotActionType;
import org.lwjgl.glfw.GLFW;

/**
 * Mouse Tweaks (registry sixtwo.dJ, module id 157): "Enhances inventory management".
 *
 * <p>Sources:
 * <ul>
 * <li>analysis/decompiled/payload-decrypted/sixtwo/dJ.java (lines 15-370)</li>
 * <li>analysis/decompiled/payload-named-cfr/sixtwo/dJ.java (lines 15-370)</li>
 * <li>analysis/specs/handlers/dJ.md</li>
 * </ul>
 *
 * <p>Settings (7 decrypted from constructor lines 47-304, in exact declaration order):
 * <ul>
 * <li>RMB Tweak (hRuUo, cJ bool, default true) (dJ.java:57)</li>
 * <li>LMB Tweak With Item (Twcyd, cJ bool, default true) (dJ.java:78)</li>
 * <li>LMB Tweak Without Item (AkIWJ, cJ bool, default true) (dJ.java:102)</li>
 * <li>Wheel Tweak (kshzP, cJ bool, default true) (dJ.java:115)</li>
 * <li>Wheel Search Order (MjLVq, ct group) with First To Last (GndWc), Last To First (lULpb, .SY() default) (dJ.java:135-167)</li>
 * <li>Wheel Scroll Direction (XujOg, ct group) with Normal (BEFfA, .SY() default), Inverted (FkJRf), Position Aware (RCVzG), Position Aware Inverted (iUlIH) (dJ.java:191-254)</li>
 * <li>Scroll Item Scaling (cnoHj, ct group) with Proportional (YdPTn, .SY() default), Always One (QgNbo) (dJ.java:275-303)</li>
 * </ul>
 *
 * <p>Runtime model:
 * <ul>
 * <li>amK(HandledScreen, x, y): hovered slot acquisition via the container-screen accessor
 * (original mixin invokeGetHoveredSlot(DD) - now HandledScreenAccessor.opengrim$invokeGetSlotAt,
 * Yarn getSlotAt/method_64240)</li>
 * <li>amN(Slot): slot eligibility excluding CraftingResultSlot / output slots from deposit</li>
 * <li>amP(ItemStack, ItemStack): stack match testing item and component identity</li>
 * <li>amB(HandledScreen, Slot, ItemStack): RMB drag single-item deposit</li>
 * <li>amF / amD: LMB drag pickup and distribution</li>
 * <li>amA / amL / amR / amT: wheel tweak slot-to-slot transfer</li>
 * </ul>
 *
 * <p>Stack divergence (documented): the original receives click/release/drag through
 * its own AbstractContainerScreen mixin (amy/amz/amx) and the wheel through amA;
 * this rebuild polls GLFW button state in the tick and consumes the wheel via
 * MouseScrollEvent. The clickSlot sequences remain approximations (handlers/dJ.md
 * "Unrecovered").
 */
public class MouseTweaks extends Module {
	private final BoolSetting rmbTweak = register(new BoolSetting("rmb_tweak", true));
	private final BoolSetting lmbTweakWithItem = register(new BoolSetting("lmb_tweak_with_item", true));
	private final BoolSetting lmbTweakWithoutItem = register(new BoolSetting("lmb_tweak_without_item", true));
	private final BoolSetting wheelTweak = register(new BoolSetting("wheel_tweak", true));
	private final ModeSetting wheelSearchOrder = register(new ModeSetting("wheel_search_order",
			List.of("first_to_last", "last_to_first"), "last_to_first"));
	private final ModeSetting wheelScrollDirection = register(new ModeSetting("wheel_scroll_direction",
			List.of("normal", "inverted", "position_aware", "position_aware_inverted"), "normal"));
	private final ModeSetting scrollItemScaling = register(new ModeSetting("scroll_item_scaling",
			List.of("proportional", "always_one"), "proportional"));

	private boolean leftDown;
	private boolean rightDown;
	private Slot lastLeftSlot;
	private Slot lastRightSlot;

	public MouseTweaks() {
		super("mouse_tweaks", "Mouse Tweaks", "Enhances inventory management", ModuleCategory.PLAYER);
		setBind(-999);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!(client.currentScreen instanceof HandledScreen<?> screen)
				|| client.interactionManager == null || client.player == null) {
			lastLeftSlot = null;
			lastRightSlot = null;
			leftDown = false;
			rightDown = false;
			return;
		}

		long handle = client.getWindow().getHandle();
		boolean left = GLFW.glfwGetMouseButton(handle, GLFW.GLFW_MOUSE_BUTTON_LEFT) == GLFW.GLFW_PRESS;
		boolean right = GLFW.glfwGetMouseButton(handle, GLFW.GLFW_MOUSE_BUTTON_RIGHT) == GLFW.GLFW_PRESS;

		if (!left) {
			lastLeftSlot = null;
		}
		if (!right) {
			lastRightSlot = null;
		}

		Slot slot = slotUnderCursor(screen, client);
		if (slot == null || !slot.isEnabled()) {
			leftDown = left;
			rightDown = right;
			return;
		}

		ItemStack cursorStack = client.player.currentScreenHandler.getCursorStack();

		if (left && !leftDown) {
			leftDown = true;
			lastLeftSlot = slot;
		} else if (left && slot != lastLeftSlot) {
			lastLeftSlot = slot;
			if (cursorStack.isEmpty()) {
				if (lmbTweakWithoutItem.getValue() && slot.hasStack()) {
					client.interactionManager.clickSlot(screen.getScreenHandler().syncId, slot.id, 0,
							SlotActionType.PICKUP, client.player);
				}
			} else if (lmbTweakWithItem.getValue() && slot.hasStack()) {
				ItemStack slotStack = slot.getStack();
				if (ItemStack.areItemsAndComponentsEqual(cursorStack, slotStack)
						&& cursorStack.getCount() < cursorStack.getMaxCount()) {
					client.interactionManager.clickSlot(screen.getScreenHandler().syncId, slot.id, 0,
							SlotActionType.PICKUP, client.player);
				}
			}
		}

		if (right && !rightDown) {
			rightDown = true;
			lastRightSlot = slot;
		} else if (right && slot != lastRightSlot) {
			lastRightSlot = slot;
			if (rmbTweak.getValue() && !cursorStack.isEmpty() && isSlotEligibleForInsert(slot, cursorStack)) {
				client.interactionManager.clickSlot(screen.getScreenHandler().syncId, slot.id, 1,
						SlotActionType.PICKUP, client.player);
			}
		}

		leftDown = left;
		rightDown = right;
	}

	@Subscribe
	public void onMouseScroll(MouseScrollEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!wheelTweak.getValue() || !(client.currentScreen instanceof HandledScreen<?> screen)
				|| client.interactionManager == null || client.player == null) {
			return;
		}

		Slot hovered = slotUnderCursor(screen, client);
		if (hovered == null || !hovered.isEnabled()) {
			return;
		}

		boolean up = event.vertical() > 0;
		if ("inverted".equals(wheelScrollDirection.getValue())
				|| "position_aware_inverted".equals(wheelScrollDirection.getValue())) {
			up = !up;
		}

		if (wheelTransfer(client, screen, hovered, up)) {
			event.cancel();
		}
	}

	private boolean wheelTransfer(MinecraftClient client, HandledScreen<?> screen, Slot hovered, boolean up) {
		Slot partner = findPartner(screen, hovered, up);
		if (partner == null || !client.player.currentScreenHandler.getCursorStack().isEmpty()) {
			return false;
		}

		Slot from = up ? hovered : partner;
		Slot to = up ? partner : hovered;
		int syncId = screen.getScreenHandler().syncId;
		boolean alwaysOne = "always_one".equals(scrollItemScaling.getValue());

		client.interactionManager.clickSlot(syncId, from.id, 0, SlotActionType.PICKUP, client.player);
		if (alwaysOne) {
			client.interactionManager.clickSlot(syncId, to.id, 1, SlotActionType.PICKUP, client.player);
		} else {
			client.interactionManager.clickSlot(syncId, to.id, 0, SlotActionType.PICKUP, client.player);
		}
		client.interactionManager.clickSlot(syncId, from.id, 0, SlotActionType.PICKUP, client.player);
		return true;
	}

	private Slot findPartner(HandledScreen<?> screen, Slot hovered, boolean up) {
		List<Slot> slots = screen.getScreenHandler().slots;
		ItemStack hoveredStack = hovered.getStack();
		if (hoveredStack.isEmpty()) {
			return null;
		}

		Slot emptyTarget = null;
		int size = slots.size();
		boolean lastToFirst = "last_to_first".equals(wheelSearchOrder.getValue());

		for (int i = 0; i < size; i++) {
			int index = lastToFirst ? size - 1 - i : i;
			Slot slot = slots.get(index);
			if (slot == hovered || !slot.isEnabled()) {
				continue;
			}
			ItemStack stack = slot.getStack();
			if (stack.isEmpty()) {
				if (emptyTarget == null && isSlotEligibleForInsert(slot, hoveredStack)) {
					emptyTarget = slot;
				}
				continue;
			}
			if (ItemStack.areItemsAndComponentsEqual(stack, hoveredStack) && stack.getCount() < stack.getMaxCount()) {
				return slot;
			}
		}
		return up ? emptyTarget : null;
	}

	private boolean isSlotEligibleForInsert(Slot slot, ItemStack stack) {
		if (slot instanceof CraftingResultSlot) {
			return false;
		}
		return slot.canInsert(stack);
	}

	private Slot slotUnderCursor(HandledScreen<?> screen, MinecraftClient client) {
		double mouseX = client.mouse.getX() * (double) client.getWindow().getScaledWidth() / (double) client.getWindow().getWidth();
		double mouseY = client.mouse.getY() * (double) client.getWindow().getScaledHeight() / (double) client.getWindow().getHeight();
		// amK: hovered-slot lookup through the accessor
		// (invokeGetHoveredSlot(DD) in the original mixin; Yarn getSlotAt).
		return ((HandledScreenAccessor) screen).opengrim$invokeGetSlotAt(mouseX, mouseY);
	}
}
