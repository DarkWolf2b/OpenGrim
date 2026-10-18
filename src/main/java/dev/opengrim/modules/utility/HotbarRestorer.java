package dev.opengrim.modules.utility;

import java.util.Arrays;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.SlotActionType;
import org.lwjgl.glfw.GLFW;

/**
 * Hotbar Restorer (registry sixtwo.dO, module id 141): "Restores hotbar to saved state".
 *
 * <p>Sources:
 * <ul>
 * <li>analysis/decompiled/payload-named-cfr/sixtwo/dO.java (lines 43-191)</li>
 * <li>analysis/specs/handlers/dO.md</li>
 * </ul>
 *
 * <p>Settings (5 ported from constructor lines 81-123; every display name and
 * the two cD defaults are encrypted in the original and absent from the
 * constant dump - the ids/labels below are high-probability guesses):
 * <ul>
 * <li>save_key (ERHWx, cD int keybind widget, default -999)</li>
 * <li>restore_key (LjWLs, cD int keybind widget, default -999)</li>
 * <li>mode (RPJPb, 4-char ct group with NTcLD (6-char) / byQPn (4-char) cu children;
 * mapped as "direct" (NTcLD) / "swap" (byQPn), default index 0)</li>
 * <li>auto_save (OMKFJ, 23-char cJ bool toggle, default false)</li>
 * <li>delay (FvAmO, cC double slider: step 10.0, min 0.0, max 500.0, default 0.0,
 * suffix string from aoN("m",17797,...) - " ms" assumed from the sibling delays,
 * unproven; its native visibility predicate aoI is left always-visible)</li>
 * </ul>
 *
 * <p>State fields and methods:
 * <ul>
 * <li>vASOe: ItemStack[] snapshot buffer sized PlayerInventory.getHotbarSize() (dO.java:125,127)</li>
 * <li>lIFPa: boolean snapshot-valid latch (dO.java:55)</li>
 * <li>fPfGt: int restore cursor (dO.java:56)</li>
 * <li>CISmK: monotonic delay timer gating restore cadence (dO.java:126)</li>
 * <li>aou(gz): key trigger event</li>
 * <li>aov(gq) / aoA: HandledScreen container restoration clicks</li>
 * <li>aoF: PlayerInventory slot search</li>
 * </ul>
 *
 * <p>Stack divergence (documented): the original's four event entries (aou key,
 * aos input, aov screen-open, aot render overlay) and its save/restore split are
 * j2cc-VM blocked; this rebuild polls GLFW key edges in the tick and drives the
 * restore with a delay-stepped cursor (no overlay render, no key-synthesis path).
 */
public class HotbarRestorer extends Module {
	private final IntSetting saveKey = register(new IntSetting("save_key", -999, 348, -999));
	private final IntSetting restoreKey = register(new IntSetting("restore_key", -999, 348, -999));
	private final ModeSetting mode = register(new ModeSetting("mode", List.of("direct", "swap"), "direct"));
	private final BoolSetting autoSave = register(new BoolSetting("auto_save", false));
	private final DoubleSetting delay = register(new DoubleSetting("delay", 10.0, 0.0, 500.0, 0.0, " ms"));

	private final ItemStack[] snapshot = new ItemStack[PlayerInventory.getHotbarSize()];
	private boolean snapshotValid;
	private int restoreCursor;
	private long lastActionTime;
	private boolean saveKeyDown;
	private boolean restoreKeyDown;

	public HotbarRestorer() {
		super("hotbar_restorer", "Hotbar Restorer", "Restores hotbar to saved state", ModuleCategory.UTILITY);
		setBind(-999);
		Arrays.fill(this.snapshot, ItemStack.EMPTY);
	}

	@Override
	public void onEnable() {
		if (autoSave.getValue()) {
			MinecraftClient client = MinecraftClient.getInstance();
			if (client.player != null) {
				save(client.player);
			}
		}
	}

	@Override
	public void onDisable() {
		snapshotValid = false;
		restoreCursor = 0;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}

		long handle = client.getWindow().getHandle();
		boolean saveDown = isKeyDown(handle, saveKey.getValue());
		boolean restoreDown = isKeyDown(handle, restoreKey.getValue());

		if (saveDown && !saveKeyDown) {
			save(player);
		}
		if (restoreDown && !restoreKeyDown) {
			startRestore(player);
		}

		saveKeyDown = saveDown;
		restoreKeyDown = restoreDown;

		if (snapshotValid && restoreCursor < snapshot.length) {
			long delayMs = delay.getValue().longValue();
			if (System.currentTimeMillis() - lastActionTime >= delayMs) {
				stepRestore(client, player);
			}
		}
	}

	private void save(ClientPlayerEntity player) {
		PlayerInventory inventory = player.getInventory();
		for (int i = 0; i < snapshot.length; i++) {
			ItemStack stack = inventory.getStack(i);
			snapshot[i] = stack.isEmpty() ? ItemStack.EMPTY : stack.copy();
		}
		snapshotValid = true;
		restoreCursor = 0;
		lastActionTime = System.currentTimeMillis();
	}

	private void startRestore(ClientPlayerEntity player) {
		if (!snapshotValid) {
			return;
		}
		restoreCursor = 0;
		lastActionTime = System.currentTimeMillis();
	}

	private void stepRestore(MinecraftClient client, ClientPlayerEntity player) {
		if (restoreCursor >= snapshot.length) {
			return;
		}

		PlayerInventory inventory = player.getInventory();
		ItemStack desired = snapshot[restoreCursor];
		ItemStack current = inventory.getStack(restoreCursor);

		if (areStacksEqual(current, desired)) {
			restoreCursor++;
			return;
		}

		if (client.currentScreen instanceof HandledScreen<?> screen && client.interactionManager != null) {
			int syncId = screen.getScreenHandler().syncId;
			int sourceSlot = findInventorySlot(inventory, desired, PlayerInventory.getHotbarSize());
			if (sourceSlot >= 0) {
				int sourceWindowSlot = sourceSlot < 9 ? sourceSlot + 36 : sourceSlot;
				int targetWindowSlot = restoreCursor + 36;
				client.interactionManager.clickSlot(syncId, sourceWindowSlot, 0, SlotActionType.PICKUP, player);
				client.interactionManager.clickSlot(syncId, targetWindowSlot, 0, SlotActionType.PICKUP, player);
				client.interactionManager.clickSlot(syncId, sourceWindowSlot, 0, SlotActionType.PICKUP, player);
			}
		} else if ("direct".equals(mode.getValue())) {
			int sourceSlot = findInventorySlot(inventory, desired, PlayerInventory.getHotbarSize());
			if (sourceSlot >= 0) {
				ItemStack fromStack = inventory.getStack(sourceSlot);
				inventory.setStack(sourceSlot, current.copy());
				inventory.setStack(restoreCursor, fromStack.copy());
			}
		}

		lastActionTime = System.currentTimeMillis();
		restoreCursor++;
	}

	private int findInventorySlot(PlayerInventory inventory, ItemStack target, int startIndex) {
		if (target.isEmpty()) {
			return -1;
		}
		for (int i = startIndex; i < inventory.getMainStacks().size(); i++) {
			ItemStack stack = inventory.getStack(i);
			if (areStacksEqual(stack, target)) {
				return i;
			}
		}
		for (int i = 0; i < startIndex; i++) {
			if (i == restoreCursor) {
				continue;
			}
			ItemStack stack = inventory.getStack(i);
			if (areStacksEqual(stack, target)) {
				return i;
			}
		}
		return -1;
	}

	private boolean areStacksEqual(ItemStack a, ItemStack b) {
		if (a == null || b == null) {
			return a == b;
		}
		if (a.isEmpty() && b.isEmpty()) {
			return true;
		}
		return ItemStack.areItemsAndComponentsEqual(a, b);
	}

	private static boolean isKeyDown(long handle, int code) {
		return code >= 0 && GLFW.glfwGetKey(handle, code) == GLFW.GLFW_PRESS;
	}
}