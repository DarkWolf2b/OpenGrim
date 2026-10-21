package dev.opengrim.modules.world;

import java.util.List;
import java.util.function.Predicate;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;

/**
 * Cart Assist (registry sixtwo.fb, module id 163): "Automatically performs
 * insta cart".
 *
 * <p>Port of sixtwo.fb (analysis/decompiled/payload-decrypted/sixtwo/fb.java:36-155
 * constructor; events {@code aHa(gM)} / {@code aHb(gv)} / {@code aHc(gH$th)} /
 * {@code aHd(gE)}; plan lifecycle {@code aHj/aHk/aHl/aHm}; placement engine
 * {@code XPiFl = new oi()} and the {@code aHp(BlockPos) → oz} plan; handler spec
 * analysis/specs/handlers/fb.md). Settings in declaration order (fb.java:47-148):
 * Actions {@code cv} (fb.java:47) with Place Rail / Place Minecart
 * ({@code .Tz()} → selected) and Place Protect (not selected); Return To
 * {@code ct} (fb.java:105) with Bow ({@code .SY()} → radio default) and Slot;
 * Slot {@code cC .Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0)} (no suffix; visibility
 * {@code YCydL.Vf(this.SGmOv::SZ)}, fb.java:148 = Slot selected).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fb.jsonl +
 * analysis/traces/2026-10-17/raw/trace.jsonl): enable used the inherited
 * {@code gg.aaj}; the disable override {@code YO} ran {@code aHH()} →
 * {@code oi.cDI()} (placement-engine reset) then {@code aHG()} (state reset) —
 * mirrored by {@link #onDisable()}. The tick listeners never fired (the tour
 * performs no placement; capture condition: hold a rail and mine/place so
 * {@code aHc}/{@code aHd} fire).
 *
 * <p>[S] gap: {@code aHd(gE)} — the block-break/attack-progress trigger (the
 * only non-tick entry, fb.md "Unrecovered" 2) has no counterpart event on our
 * bus. Reconstruction (native bodies; fb.md "Unrecovered" 1/3): rail → minecart
 * → protect → return phase pipeline over the {@code fb$sM}/{@code fb$sN} plan
 * records, ported as the Java phase state machine below.
 */
public class CartAssist extends Module {
	private final GroupSetting actions = register(new GroupSetting("actions"));
	private final BoolSetting placeRail = new BoolSetting("place_rail", true);
	private final BoolSetting placeMinecart = new BoolSetting("place_minecart", true);
	private final BoolSetting placeProtect = new BoolSetting("place_protect", false);
	private final ModeSetting returnTo = register(new ModeSetting("return_to", List.of("bow", "slot"), "bow"));
	private final DoubleSetting slot = register(new DoubleSetting("slot", 1.0, 1.0, 9.0, 1.0, null));

	private static final int PHASE_IDLE = 0;
	private static final int PHASE_RAIL = 1;
	private static final int PHASE_MINECART = 2;
	private static final int PHASE_PROTECT = 3;
	private static final int PHASE_RETURN = 4;

	private int phase = PHASE_IDLE;
	private boolean wasHoldingRail;

	public CartAssist() {
		super("cart_assist", "Cart Assist", "Automatically performs insta cart", ModuleCategory.COMBAT);
		actions.add(placeRail);
		actions.add(placeMinecart);
		actions.add(placeProtect);
	}

	@Override
	public void onDisable() {
		phase = PHASE_IDLE;
		wasHoldingRail = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null || client.world == null
				|| client.currentScreen != null) {
			phase = PHASE_IDLE;
			wasHoldingRail = false;
			return;
		}

		slot.setVisible("slot".equals(returnTo.getValue()));

		boolean holdingRail = isRail(player.getMainHandStack()) || isRail(player.getOffHandStack());
		if (phase == PHASE_IDLE) {
			if (holdingRail && !wasHoldingRail) {
				phase = PHASE_RAIL;
			}
			wasHoldingRail = holdingRail;
			return;
		}
		wasHoldingRail = holdingRail;

		switch (phase) {
			case PHASE_RAIL -> {
				if (placeRail.getValue()) {
					select(player, CartAssist::isRail);
					placeAtTarget(client, player);
				}
				phase = PHASE_MINECART;
			}
			case PHASE_MINECART -> {
				if (placeMinecart.getValue()) {
					select(player, CartAssist::isMinecart);
					placeAtTarget(client, player);
				}
				phase = placeProtect.getValue() ? PHASE_PROTECT : PHASE_RETURN;
			}
			case PHASE_PROTECT -> {
				select(player, CartAssist::isProtect);
				placeAtTarget(client, player);
				phase = PHASE_RETURN;
			}
			case PHASE_RETURN -> {
				if ("bow".equals(returnTo.getValue())) {
					select(player, CartAssist::isBow);
				} else if ("slot".equals(returnTo.getValue())) {
					int targetSlot = slot.getValue().intValue() - 1;
					player.getInventory().setSelectedSlot(Math.max(0, Math.min(8, targetSlot)));
				}
				phase = PHASE_IDLE;
			}
			default -> phase = PHASE_IDLE;
		}
	}

	private void placeAtTarget(MinecraftClient client, ClientPlayerEntity player) {
		HitResult target = client.crosshairTarget;
		if (target instanceof BlockHitResult hit && player.getEyePos().distanceTo(target.getPos()) <= player.getBlockInteractionRange()) {
			RotationManager.get().submitPosition(hit.getPos(), RotationPriority.uWTdl, this);
			client.interactionManager.interactBlock(player, Hand.MAIN_HAND, hit);
			player.swingHand(Hand.MAIN_HAND);
		}
	}

	private static void select(ClientPlayerEntity player, Predicate<ItemStack> filter) {
		for (int slotIdx = 0; slotIdx < 9; slotIdx++) {
			ItemStack stack = player.getInventory().getStack(slotIdx);
			if (!stack.isEmpty() && filter.test(stack)) {
				player.getInventory().setSelectedSlot(slotIdx);
				return;
			}
		}
	}

	static boolean isRail(ItemStack stack) {
		return stack.isOf(Items.RAIL) || stack.isOf(Items.POWERED_RAIL)
				|| stack.isOf(Items.DETECTOR_RAIL) || stack.isOf(Items.ACTIVATOR_RAIL);
	}

	static boolean isMinecart(ItemStack stack) {
		return stack.isOf(Items.MINECART) || stack.isOf(Items.TNT_MINECART)
				|| stack.isOf(Items.CHEST_MINECART) || stack.isOf(Items.HOPPER_MINECART);
	}

	static boolean isProtect(ItemStack stack) {
		return stack.isOf(Items.OBSIDIAN) || stack.isOf(Items.CRYING_OBSIDIAN);
	}

	static boolean isBow(ItemStack stack) {
		return stack.isOf(Items.BOW) || stack.isOf(Items.CROSSBOW);
	}
}
