package dev.opengrim.modules.world;

import java.lang.reflect.Field;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.BlockItem;
import net.minecraft.item.ItemStack;
import net.minecraft.util.hit.HitResult;

/**
 * Fast Place (registry sixtwo.dZ): "Removes right click delay".
 *
 * <p>Port of sixtwo.dZ.
 * Source: analysis/decompiled/payload-decrypted/sixtwo/dZ.java:29-161 (declares class dZ, id 62).
 * Spec: analysis/specs/handlers/dZ.md.
 *
 * <p>Settings tree (declaration order):
 * <ul>
 *   <li>Blocks (Wkwey, dZ.java:39) default true</li>
 *   <li>Items (RfFUJ, dZ.java:40-52) default false</li>
 *   <li>Only For Valid Blocks (whhdh, dZ.java:53-75) default false</li>
 *   <li>Valid Blocks (tfzyX, dZ.java:76-89) cK item filter, empty default; group left empty
 *       because the jc.WnbNG item universe is native-built and unrecovered</li>
 *   <li>Right Click Delay (uafIf, dZ.java:90-108) step 1.0 min 0.0 max 4.0 default 0.0,
 *       suffix MCipD unrecovered (dZ.md "Unrecovered" #2; vanilla rightClickDelay is 4 ticks)</li>
 *   <li>Only If You Can Place (AKRql, dZ.java:109-131) default false</li>
 *   <li>Only For Slots (hSAvy, dZ.java:132-147) default false</li>
 *   <li>Slots (vmwmS, dZ.java:148-159) cz slot picker — translated to nine hotbar toggles
 *       (established cz convention); initial selection unrecovered, left true</li>
 * </ul>
 * Visibility wiring: only tfzyX.Vf(whhdh::WF) is recovered (dZ.java:160); the Slots picker
 * has no visibility predicate in the original.
 * Handlers: arc(gH$th) tick listener (dZ.java:180), aqZ(gO$tm) pre-use listener (dZ.java:185),
 * ara(gO$tl) item-use listener (dZ.java:175), arb(Item) item filter (dZ.java:182),
 * YO() lifecycle override (dZ.java:190).
 *
 * <p>Mechanism: the module writes {@code Minecraft.field_1752 rightClickDelay} (yarn name
 * {@code itemUseCooldown}, verified in yarn-1.21.11+build.6) via the MinecraftAccessor
 * get/setRightClickDelay pair (dZ.md "Pool surface"); the tick-based clamp here is a
 * stack adaptation of the recovered per-tick/per-use write policy (dZ.md "Unrecovered" #1).
 * Trace 2026-10-17: arc ×4, YO ×2 — no use-event hits in the capture.
 *
 * <p>High-probability guess (labeled): "Only If You Can Place" implemented as a crosshair
 * BLOCK-hit check (the original's check method is unrecovered, dZ.md #7).
 */
public class FastPlace extends Module {
	private final BoolSetting blocks = register(new BoolSetting("blocks", true));
	private final BoolSetting items = register(new BoolSetting("items", false));
	private final BoolSetting onlyForValidBlocks = register(new BoolSetting("only_for_valid_blocks", false));
	private final GroupSetting validBlocks = register(new GroupSetting("valid_blocks"));
	private final DoubleSetting rightClickDelay = register(new DoubleSetting("right_click_delay", 1.0, 0.0, 4.0, 0.0, null));
	private final BoolSetting onlyIfYouCanPlace = register(new BoolSetting("only_if_you_can_place", false));
	private final BoolSetting onlyForSlots = register(new BoolSetting("only_for_slots", false));
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting slot0 = new BoolSetting("slot_0", true);
	private final BoolSetting slot1 = new BoolSetting("slot_1", true);
	private final BoolSetting slot2 = new BoolSetting("slot_2", true);
	private final BoolSetting slot3 = new BoolSetting("slot_3", true);
	private final BoolSetting slot4 = new BoolSetting("slot_4", true);
	private final BoolSetting slot5 = new BoolSetting("slot_5", true);
	private final BoolSetting slot6 = new BoolSetting("slot_6", true);
	private final BoolSetting slot7 = new BoolSetting("slot_7", true);
	private final BoolSetting slot8 = new BoolSetting("slot_8", true);

	private static Field cachedItemUseCooldownField;
	private static boolean fieldLookupDone;

	public FastPlace() {
		super("fast_place", "Fast Place", "Removes right click delay", ModuleCategory.WORLD);
		slots.add(slot0);
		slots.add(slot1);
		slots.add(slot2);
		slots.add(slot3);
		slots.add(slot4);
		slots.add(slot5);
		slots.add(slot6);
		slots.add(slot7);
		slots.add(slot8);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			return;
		}
		validBlocks.setVisible(onlyForValidBlocks.getValue());
		if (!client.options.useKey.isPressed() || itemUseCooldown(client) <= rightClickDelay.getValue().intValue()) {
			return;
		}
		ItemStack stack = player.getMainHandStack();
		if (stack.isEmpty()) {
			stack = player.getOffHandStack();
		}
		boolean isBlockItem = !stack.isEmpty() && stack.getItem() instanceof BlockItem;
		if (isBlockItem ? !blocks.getValue() : !items.getValue()) {
			return;
		}
		if (onlyForValidBlocks.getValue() && !isBlockItem) {
			return;
		}
		if (onlyIfYouCanPlace.getValue()
				&& !(client.crosshairTarget != null && client.crosshairTarget.getType() == HitResult.Type.BLOCK)) {
			return;
		}
		if (onlyForSlots.getValue() && !slotEnabled(player.getInventory().getSelectedSlot())) {
			return;
		}
		setItemUseCooldown(client, rightClickDelay.getValue().intValue());
	}

	private boolean slotEnabled(int selected) {
		return switch (selected) {
			case 0 -> slot0.getValue();
			case 1 -> slot1.getValue();
			case 2 -> slot2.getValue();
			case 3 -> slot3.getValue();
			case 4 -> slot4.getValue();
			case 5 -> slot5.getValue();
			case 6 -> slot6.getValue();
			case 7 -> slot7.getValue();
			case 8 -> slot8.getValue();
			default -> false;
		};
	}

	private static int itemUseCooldown(MinecraftClient client) {
		Field field = itemUseCooldownField();
		if (field == null) {
			return Integer.MAX_VALUE;
		}
		try {
			return field.getInt(client);
		} catch (IllegalAccessException e) {
			return Integer.MAX_VALUE;
		}
	}

	private static void setItemUseCooldown(MinecraftClient client, int value) {
		Field field = itemUseCooldownField();
		if (field == null) {
			return;
		}
		try {
			field.setInt(client, value);
		} catch (IllegalAccessException ignored) {
		}
	}

	private static Field itemUseCooldownField() {
		if (!fieldLookupDone) {
			fieldLookupDone = true;
			for (String name : new String[]{"itemUseCooldown", "field_1752"}) {
				try {
					Field field = MinecraftClient.class.getDeclaredField(name);
					field.setAccessible(true);
					cachedItemUseCooldownField = field;
					break;
				} catch (ReflectiveOperationException ignored) {
				}
			}
		}
		return cachedItemUseCooldownField;
	}
}
