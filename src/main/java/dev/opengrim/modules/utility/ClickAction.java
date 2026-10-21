package dev.opengrim.modules.utility;

import java.util.concurrent.ThreadLocalRandom;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import org.lwjgl.glfw.GLFW;

/**
 * Click Action (registry sixtwo.dR, module id 60): "Uses item on click".
 *
 * <p>1:1 reconstruction of sixtwo.dR. Spec:
 * analysis/specs/casesafe/handlers/dR_.md (evidence:
 * casesafe/payload-decrypted/sixtwo/dR_.java:33-90 constructor - Pearl Key cD .VO(-999)
 * (:46), Firework Key cD .VO(-999) (:60), Potion Key cD .VO(-999) (:72), Return Delay cA
 * .UG(10.0).UE(0.0).UF(1000.0).UI(50.0,100.0).UH(gcmeH) (:86) - plus mT timer klvjL,
 * ol controller MEsln and dR$sI.qWbQG init).
 *
 * <p>Return Delay is one cA widget: default 50.0 = first UI-pair value (repo convention,
 * cf. AutoStunSlam/AutoShieldBreak), suffix " ms" (high-probability guess: gcmeH is
 * native-decrypted/unrecovered; the sibling Return Delay chains with the identical numbers
 * are decrypted " ms", eS_.md/fB_.md). The pair's second value 100.0 is kept as the sampled
 * upper bound ({@link #RETURN_DELAY_ANCHOR}), mirroring "randomized default range 50-100".
 *
 * <p>State machine ({@code dR$sI}):
 * <ul>
 *   <li>{@code qWbQG} (IDLE): awaiting key/mouse trigger</li>
 *   <li>{@code ZfrpN} (EQUIPPED): hotbar slot switched to target item</li>
 *   <li>{@code cgVae} (USING): useKey pressed and item interaction dispatched</li>
 *   <li>{@code UPeYL} (RESTORING): waiting for Return Delay timer {@code klvjL} before running {@code wSKUO} restore</li>
 * </ul>
 *
 * <p>high-probability guesses (VM bodies, casesafe/handlers/dR_.md "Unrecovered"): the
 * phase meanings above, the press-switch-use-restore ordering, the interactItem +
 * swingHand dispatch (the recovered surface proves only useKey/setPressed and the
 * cooldown/off-hand helpers) and the per-item predicate assignment.
 *
 * <p>trace 2026-10-17: apk (tick) ran 3x, then YO ran aps (reset) once on disable; the
 * module was enabled without a bound key, so no swap/use path executed. Capture
 * condition: bind Pearl/Firework/Potion Key and press it while holding the matching item
 * in the hotbar/inventory; log the apk state sequence + app/apq slot/use calls.
 */
public class ClickAction extends Module {
	/** Port of {@code sixtwo.dR$sI} phase enum. */
	private enum Phase {
		qWbQG,
		ZfrpN,
		cgVae,
		UPeYL
	}

	private final IntSetting pearlKey = register(new IntSetting("pearl_key", -999, 348, -999));
	private final IntSetting fireworkKey = register(new IntSetting("firework_key", -999, 348, -999));
	private final IntSetting potionKey = register(new IntSetting("potion_key", -999, 348, -999));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	/** Second element of the recovered UI(50.0, 100.0) default pair (dR_.java:86) - sampled upper bound of the restore delay. */
	private static final double RETURN_DELAY_ANCHOR = 100.0;

	private Phase phase = Phase.qWbQG;
	private long lastUseAt;
	private long sampledDelayMs;
	private int returnSlot = -1;
	private Hand activeHand = Hand.MAIN_HAND;
	private boolean pearlDown;
	private boolean fireworkDown;
	private boolean potionDown;

	public ClickAction() {
		super("click_action", "Click Action", "Uses item on click", ModuleCategory.PLAYER);
	}

	@Override
	protected void onEnable() {
		aps();
		pearlDown = false;
		fireworkDown = false;
		potionDown = false;
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null) {
			apr(client, client.player);
		}
		aps();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}

		// apk(gH.th): advance state machine
		switch (phase) {
			case ZfrpN -> {
				apq(client, player, activeHand);
				phase = Phase.cgVae;
			}
			case cgVae -> {
				client.options.useKey.setPressed(false);
				if (returnSlot >= 0) {
					phase = Phase.UPeYL;
				} else {
					aps();
				}
			}
			case UPeYL -> {
				if (System.currentTimeMillis() - lastUseAt >= sampledDelayMs) {
					apr(client, player);
					aps();
				}
			}
			case qWbQG -> {
			}
		}

		if (client.currentScreen != null) {
			pearlDown = false;
			fireworkDown = false;
			potionDown = false;
			return;
		}

		long handle = client.getWindow().getHandle();
		boolean pearl = keyDown(handle, pearlKey.getValue());
		boolean firework = keyDown(handle, fireworkKey.getValue());
		boolean potion = keyDown(handle, potionKey.getValue());
		if (pearl && !pearlDown) {
			trigger(client, player, Items.ENDER_PEARL);
		}
		if (firework && !fireworkDown) {
			trigger(client, player, Items.FIREWORK_ROCKET);
		}
		if (potion && !potionDown) {
			trigger(client, player, Items.SPLASH_POTION);
		}
		pearlDown = pearl;
		fireworkDown = firework;
		potionDown = potion;
	}

	private static boolean keyDown(long handle, int code) {
		if (code < 0) {
			return false;
		}
		if (code <= GLFW.GLFW_MOUSE_BUTTON_LAST) {
			return GLFW.glfwGetMouseButton(handle, code) == GLFW.GLFW_PRESS;
		}
		return GLFW.glfwGetKey(handle, code) == GLFW.GLFW_PRESS;
	}

	/**
	 * Stack validity check porting {@code apl(ItemStack)}: item match + target-stack cooldown gate.
	 */
	private static boolean isValidStack(ClientPlayerEntity player, ItemStack stack, Item item) {
		return !stack.isEmpty()
				&& stack.isOf(item)
				&& !player.getItemCooldownManager().isCoolingDown(stack);
	}

	private void trigger(MinecraftClient client, ClientPlayerEntity player, Item item) {
		if (phase != Phase.qWbQG) {
			return;
		}
		// Off-hand-first check (getOffHandStack / Hand.OFF_HAND in dR_.md)
		if (isValidStack(player, player.getOffHandStack(), item)) {
			activeHand = Hand.OFF_HAND;
			returnSlot = -1;
			apq(client, player, Hand.OFF_HAND);
			phase = Phase.cgVae;
			return;
		}
		// Hotbar search (slots 0..8)
		int currentSlot = player.getInventory().getSelectedSlot();
		if (isValidStack(player, player.getMainHandStack(), item)) {
			activeHand = Hand.MAIN_HAND;
			returnSlot = -1;
			apq(client, player, Hand.MAIN_HAND);
			phase = Phase.cgVae;
			return;
		}
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (!isValidStack(player, stack, item)) {
				continue;
			}
			returnSlot = currentSlot;
			player.getInventory().setSelectedSlot(slot);
			activeHand = Hand.MAIN_HAND;
			sampledDelayMs = sampleReturnDelayMs();
			lastUseAt = System.currentTimeMillis();
			apq(client, player, Hand.MAIN_HAND);
			phase = Phase.cgVae;
			return;
		}
	}

	/**
	 * Use action on the given hand, porting {@code apq(Hand)}.
	 */
	private void apq(MinecraftClient client, ClientPlayerEntity player, Hand hand) {
		client.options.useKey.setPressed(true);
		client.interactionManager.interactItem(player, hand);
		player.swingHand(hand);
		lastUseAt = System.currentTimeMillis();
	}

	/**
	 * Restore original hotbar slot, porting {@code apr()} / {@code wSKUO}.
	 */
	private void apr(MinecraftClient client, ClientPlayerEntity player) {
		client.options.useKey.setPressed(false);
		if (returnSlot >= 0 && returnSlot < 9) {
			player.getInventory().setSelectedSlot(returnSlot);
		}
		returnSlot = -1;
	}

	/**
	 * Reset state machine to {@code qWbQG}, porting {@code aps()}.
	 */
	private void aps() {
		phase = Phase.qWbQG;
		lastUseAt = 0L;
		sampledDelayMs = 0L;
		returnSlot = -1;
	}

	/**
	 * Samples Return Delay in ms from {@code [returnDelay, RETURN_DELAY_ANCHOR]} (mirroring the recovered
	 * UI(50.0, 100.0) "randomized default range" pair / {@code mU.cpR}).
	 */
	private long sampleReturnDelayMs() {
		double left = returnDelay.getValue();
		double right = Math.max(left, RETURN_DELAY_ANCHOR);
		if (right <= left) {
			return Math.round(left);
		}
		return Math.round(ThreadLocalRandom.current().nextDouble(left, right));
	}
}
