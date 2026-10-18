package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.option.GameOptions;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.client.gui.screen.ingame.AnvilScreen;
import net.minecraft.client.gui.screen.ingame.CommandBlockScreen;
import net.minecraft.client.gui.screen.ingame.StructureBlockScreen;
import net.minecraft.client.gui.screen.ingame.SignEditScreen;
import net.minecraft.client.gui.screen.ingame.HangingSignEditScreen;
import net.minecraft.client.util.InputUtil;
import net.minecraft.client.gui.screen.ingame.HandledScreen;

/**
 * Inventory Move (registry sixtwo.ek, module id 47): "Allows to move inside screens".
 *
 * <p>parity: 1:1 on the traced surface. Sources: analysis/specs/handlers/ek.md
 * (verified as sixtwo.ek — not eK Auto Web; evidence: ek.java:19-36 ctor with
 * Block Clicks ek.java:35; listeners asT(gH$th) ek.java:44, asU(gB) ek.java:47;
 * asV() ek.java:57); casesafe/payload-named-cfr/sixtwo/ek.java.
 *
 * <p>Trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/ek.jsonl,
 * window [170307.2,170347.7]): asT entered 3× (once per client tick, matching
 * the hc/gH$th cadence); each asT called asV() exactly once and asV returned
 * <b>1</b> all three times — while the ClickGUI (sixtwo.bl, a non-HandledScreen
 * Screen, opened once at t=165576.6M and still ticking per tick in this window)
 * was open. That disproves the earlier reading that asV requires a
 * HandledScreen: non-HandledScreen screens are movement-safe. asU never fired
 * (no screen clicks in the window; capture condition: click a slot in a handled
 * screen with ek enabled). asW(KeyBinding) has no separate trace entry (its
 * per-binding bookkeeping collapses into the mirror loop).
 *
 * <p>While a movement-safe screen is open the tick handler mirrors physical key state onto
 * the movement bindings via setPressed; text screens stay excluded. Block Clicks gates the
 * screen-click path.
 *
 * <p>Parity notes: the asU(gB) screen-click cancel gated by "Block Clicks" has no
 * recoverable VM body (handlers/ek.md "Unrecovered" #3) and no bus slot-click event exists
 * in our framework — "Block Clicks" stays registered/unread pending that event. The key
 * mirroring below is the designer-discretion stand-in for asT's invisible MC calls.
 */
public class InventoryMove extends Module {
	private final BoolSetting blockClicks = register(new BoolSetting("block_clicks", false));

	public InventoryMove() {
		super("inventory_move", "Inventory Move", "Allows to move inside screens", ModuleCategory.MOVEMENT);
	}

	/**
	 * Public screen-state query porting {@code asV()} (trace 2026-10-17: returned 1 with a
	 * non-HandledScreen screen — the ClickGUI — open; excluded screens and a filled cursor
	 * stack return false). Null-screen behavior is unobserved; kept false.
	 */
	public boolean isScreenSafe() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.currentScreen == null) {
			return false;
		}
		if (!isMovementSafeScreen(client)) {
			return false;
		}
		if (client.currentScreen instanceof HandledScreen<?>) {
			// asV slice: ScreenHandler currentScreenHandler + getCursorStack + isEmpty
			return client.player == null || client.player.currentScreenHandler.getCursorStack().isEmpty();
		}
		// trace 2026-10-17: non-HandledScreen screen (ClickGUI) open → asV returned 1
		return true;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.currentScreen == null) {
			return;
		}
		// asT's per-tick gate is asV() itself (trace 2026-10-17: one asV call per asT)
		if (!isScreenSafe()) {
			return;
		}
		GameOptions options = client.options;
		mirror(options.forwardKey, client);
		mirror(options.backKey, client);
		mirror(options.leftKey, client);
		mirror(options.rightKey, client);
		mirror(options.jumpKey, client);
		mirror(options.sneakKey, client);
		mirror(options.sprintKey, client);
	}

	private static boolean isMovementSafeScreen(MinecraftClient client) {
		if (client.currentScreen instanceof AnvilScreen) {
			return false;
		}
		if (client.currentScreen instanceof CommandBlockScreen) {
			return false;
		}
		if (client.currentScreen instanceof StructureBlockScreen) {
			return false;
		}
		// asV slice tokens: class_498 SignEditScreen, class_7744 HangingSignEditScreen
		if (client.currentScreen instanceof SignEditScreen) {
			return false;
		}
		if (client.currentScreen instanceof HangingSignEditScreen) {
			return false;
		}
		return true;
	}

	private void mirror(KeyBinding binding, MinecraftClient client) {
		int code = keyCodeOf(binding);
		if (code > 0) {
			binding.setPressed(InputUtil.isKeyPressed(client.getWindow(), code));
		}
	}

	private int keyCodeOf(KeyBinding binding) {
		InputUtil.Key key = InputUtil.fromTranslationKey(binding.getBoundKeyTranslationKey());
		if (key.getCategory() != InputUtil.Type.KEYSYM) {
			return -1;
		}
		return key.getCode();
	}
}
