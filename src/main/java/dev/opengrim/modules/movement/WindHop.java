package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.ActionResult;
import net.minecraft.util.Hand;
import net.minecraft.util.math.Vec3d;

/**
 * Wind Hop (registry sixtwo.eR, module id 119):
 * "Throws a wind charge beneath you". Category {@code gh.xwjCw} (Combat;
 * eR.java:23 — registry tag says the same: Wind Hop sits in the Combat roster).
 *
 * <p>1:1 port of sixtwo.eR from:
 * <ul>
 *   <li>analysis/decompiled/payload-decrypted/sixtwo/eR.java:21-58 (ctor:
 *       "Activation Key" cD {@code .VO(-999)} (unbound keybind widget) eR.java:39;
 *       "Only On Ground" cJ {@code .WE(true)} eR.java:55; timer
 *       {@code OahHn = mT.cpz()} eR.java:56)</li>
 *   <li>handlers eR.java:66-84: {@code aCF(gA)} input event, {@code aCG(gv)}
 *       empty-shell event, {@code aCH(gH$th)} client tick</li>
 *   <li>analysis/specs/handlers/eR.md (runtime model); native corpus
 *       analysis/ghidra/casesafe/handlers-stitched/sixtwo_eR_.c — verified
 *       {@code Lsixtwo/eR;}, aCF/aCG/aCH/aCI (the non-casesafe
 *       handlers-full-annotated/sixtwo_eR.c actually holds er "Speed",
 *       case-collapse trap)</li>
 * </ul>
 *
 * <p>Recovered surface (eR.md): the tick handler gates on enabled, requires the
 * player on ground while "Only On Ground" is checked, run OahHn ms-cooldown with
 * a fixed internal threshold, locates the wind-charge hotbar slot via
 * {@code oQ.cJv(predicate)} over {@code oP.cJm()} with {@code aCI(ItemStack)Z}
 * (item predicate — the wind-charge identity rests on the registry description;
 * its constant is not in any plaintext window), and executes the use through
 * the {@code oT} block/interaction builder aimed beneath the player with a
 * {@code KeyBinding.useKey} pressed spoof.
 *
 * <p>The original {@code Activation Key} is a {@code cD} keybind setting; the
 * port uses {@link KeybindSetting} with the same {@code -999} unbound sentinel
 * and the {@code KeybindWidget} row. {@code cD} holds a key-code int (field
 * {@code taKVz}, default from its clinit; casesafe/payload-named-cfr/
 * sixtwo/cD_.java:26, 31-34), {@code .VO(int)} sets it (cD_.java:89-110) and
 * {@code VN()} renders it via {@code jb.byM(code)} (cD_.java:81-82). The input
 * event {@code aCF(gA)} has no direct bus equivalent, so the activation key is
 * polled from the tick with InputUtil instead. The cooldown threshold is stored
 * by the VM inside the {@code mT} timer — 500 ms is the recorded stand-in
 * (high-probability guess). Aims are submitted through RotationManager (never
 * raw setYaw/setPitch).
 *
 * <p>trace 2026-10-17: only {@code YO} ran (1×, on disable, 169511145782); no
 * client-tick event fired at all in that 20s span (paused/stalled client under
 * trace load), so aCF/aCG/aCH/aCI were not triggered. Capture conditions:
 * aCF — bind the Activation Key and press it; aCH — leave the module enabled
 * across live ticks with a wind charge in the hotbar; aCI — the item predicate
 * is exercised by aCH's slot search; aCG — identity of {@code gv} unrecovered
 * (no trigger path known).
 */
public class WindHop extends Module {
	/** Fixed internal cooldown; the original threshold constant is VM-hidden (eR.md). */
	private static final long COOLDOWN_MS = 500L;

	private final KeybindSetting activationKey = register(new KeybindSetting("activation_key", -999));
	private final BoolSetting onlyOnGround = register(new BoolSetting("only_on_ground", true));

	private long lastThrowTime;
	private boolean armed;
	private boolean prevKeyHeld;

	public WindHop() {
		super("wind_hop", "Wind Hop", "Throws a wind charge beneath you", ModuleCategory.COMBAT);
	}

	@Override
	protected void onEnable() {
		armed = false;
		lastThrowTime = 0L;
		prevKeyHeld = false;
	}

	@Override
	protected void onDisable() {
		armed = false;
		lastThrowTime = 0L;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}

		// Input event detection (aCF) via Activation Key
		boolean held = activationKey.isPressed();
		boolean pressed = held && !prevKeyHeld;
		prevKeyHeld = held;

		if (pressed) {
			armed = true;
		}

		if (!armed) {
			return;
		}

		if (onlyOnGround.getValue() && !player.isOnGround()) {
			return;
		}

		if (System.currentTimeMillis() - lastThrowTime < COOLDOWN_MS) {
			return;
		}

		int chargeSlot = -1;
		var inventory = player.getInventory();
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = inventory.getMainStacks().get(slot);
			if (aCI(stack)) {
				chargeSlot = slot;
				break;
			}
		}

		if (chargeSlot < 0) {
			armed = false;
			return;
		}

		inventory.setSelectedSlot(chargeSlot);
		// The original aims beneath the player through the oT interaction
		// builder. PlayerInteractItemC2SPacket carries the real yaw/pitch, so
		// apply the downward rotation around the use (same pattern as AutoMlg),
		// then keep it submitted for the visual tick.
		Rotation rotation = Rotation.lookingAt(player.getEyePos(),
				player.getEntityPos().add(0.0, -1.0, 0.0)).clamped();
		RotationManager.get().submitRotation(rotation, RotationPriority.uWTdl, this);
		ActionResult result = RotationManager.get().applyForAction(rotation,
				() -> client.interactionManager.interactItem(player, Hand.MAIN_HAND));
		if (result instanceof ActionResult.Success success
				&& success.swingSource() == ActionResult.SwingSource.CLIENT) {
			player.swingHand(Hand.MAIN_HAND);
		}

		lastThrowTime = System.currentTimeMillis();
		armed = false;
	}

	/** Port of native item predicate aCI(ItemStack)Z (eR.java:96). */
	public static boolean aCI(ItemStack stack) {
		return stack != null && stack.isOf(Items.WIND_CHARGE);
	}

	public boolean isArmed() {
		return armed;
	}

	public long getLastThrowTime() {
		return lastThrowTime;
	}
}
