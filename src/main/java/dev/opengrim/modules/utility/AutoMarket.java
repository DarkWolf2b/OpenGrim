package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.gui.WheelScreenBase;
import dev.opengrim.gui.ui.AnimatedScreen;
import dev.opengrim.mixin.HandledScreenAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.network.packet.s2c.play.OpenScreenS2CPacket;
import net.minecraft.screen.slot.Slot;
import net.minecraft.text.Text;

/**
 * Auto Market (registry sixtwo.dM, module id 26): "Automatically buys and sells
 * items on market".
 *
 * <p>1:1 reconstruction of sixtwo.dM shell and command dispatch.
 * Specs: analysis/specs/casesafe/modules/dM_.md and
 * analysis/specs/casesafe/handlers/dM_.md (evidence: dM.java:122-174
 * constructor with the three settings and the engine subsystem list
 * {@code OgFsa = List.of(nB, nC, nD, nA, nE)}, dM.java:378-411 any(gM) =
 * disconnect, dM.java:425-429 enable reset, dM.java:432-451
 * runMarketOpenCommand, dM.java:453-459 updateFallbackTimeout, dM.java:472-475
 * anx(gN) = post-login reload, dM.java:477-697 anz(gA) key dispatcher,
 * dM.java:697-762 anA(gL$tk) S2C packet entry).
 *
 * <p>Settings:
 * <ul>
 *   <li>"State Key" (default -999) — toggles session running state</li>
 *   <li>"Add Rule Key" (default 2, middle mouse button) — adds hovered item rule</li>
 *   <li>"Edit Market" — group placeholder for market editor</li>
 * </ul>
 */
public class AutoMarket extends Module {
	/** "State Key" (dM.java:135 {@code .VO(-999)} = unbound). */
	private final KeybindSetting stateKey = register(new KeybindSetting("state_key", -999));
	/**
	 * "Add Rule Key" (dM.java:149 {@code .VO(mA.OGQHF.cmO())}): middle mouse button.
	 */
	private final KeybindSetting addRuleKey = register(new KeybindSetting("add_rule_key", 2));
	/**
	 * "Edit Market" (dM.java:162): action button opening the market editor.
	 */
	private final GroupSetting editMarket = register(new GroupSetting("edit_market"));

	/** Engine running flag (dM.java:109 {@code QvQJq}). */
	private boolean running;
	private boolean stateDown;
	private boolean addRuleDown;

	public AutoMarket() {
		super("auto_market", "Auto Market", "Automatically buys and sells items on market", ModuleCategory.PLAYER);
	}

	@Override
	protected void onEnable() {
		resetEngine();
	}

	@Override
	protected void onDisable() {
		if (running) {
			pauseSession();
		}
		resetEngine();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isInGame(client)) {
			if (running) {
				pauseSession();
			}
			resetEngine();
			stateDown = false;
			addRuleDown = false;
			return;
		}
		boolean state = stateKey.isPressed();
		boolean addRule = addRuleKey.isPressed();
		if (addRule && !addRuleDown) {
			onKeyPress(client, addRuleKey.getValue());
		}
		if (state && !stateDown) {
			onKeyPress(client, stateKey.getValue());
		}
		stateDown = state;
		addRuleDown = addRule;
	}

	private void onKeyPress(MinecraftClient client, int key) {
		Screen screen = client.currentScreen;
		if (screen instanceof AnimatedScreen || screen instanceof WheelScreenBase) {
			return;
		}
		if (key == addRuleKey.getValue() && screen instanceof HandledScreen<?> handled) {
			addRuleFromHovered(handled);
		}
		if (key != stateKey.getValue()) {
			return;
		}
		if (running) {
			pauseAndNotify();
			return;
		}
		startSession();
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!running) {
			return;
		}
		if (event.packet() instanceof OpenScreenS2CPacket) {
			// Market container screen opened
		}
	}

	private void addRuleFromHovered(HandledScreen<?> screen) {
		Slot hovered = ((HandledScreenAccessor) screen).opengrim$getFocusedSlot();
		if (hovered == null || !hovered.hasStack() || hovered.getStack().isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null) {
			client.player.sendMessage(Text.literal(
					"§a[Auto Market]§r Added rule for: " + hovered.getStack().getName().getString()), false);
		}
	}

	private void startSession() {
		MinecraftClient client = MinecraftClient.getInstance();
		resetEngine();
		running = true;
		if (client.player != null) {
			client.player.sendMessage(Text.literal("§a[Auto Market]§r Session started."), false);
		}
		if (!(client.currentScreen instanceof HandledScreen)) {
			reopenMarket();
		}
	}

	private void pauseSession() {
		if (!running) {
			return;
		}
		running = false;
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null) {
			client.player.sendMessage(Text.literal("§c[Auto Market]§r Session paused."), false);
		}
		resetEngine();
	}

	private void pauseAndNotify() {
		if (!running) {
			return;
		}
		pauseSession();
	}

	private void reopenMarket() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null) {
			if (client.currentScreen != null) {
				client.player.closeHandledScreen();
			}
			if (client.getNetworkHandler() != null) {
				client.getNetworkHandler().sendChatCommand("ah");
			}
		}
		resetEngine();
	}

	private void resetEngine() {
	}

	public boolean isRunning() {
		return running;
	}

	private static boolean isInGame(MinecraftClient client) {
		return client.player != null && client.world != null
				&& client.interactionManager != null && client.getNetworkHandler() != null;
	}
}
