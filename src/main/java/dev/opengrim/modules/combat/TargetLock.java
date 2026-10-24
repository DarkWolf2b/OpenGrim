package dev.opengrim.modules.combat;

import java.util.Comparator;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;

/**
 * Target Lock (registry sixtwo.fg): "Allows to lock on a single target".
 *
 * <p>Port of sixtwo.fg (casesafe/payload-named-cfr/sixtwo/fg.java:26-79
 * constructor - the non-casesafe fg.java is the sixtwo.fG W-Tap twin;
 * input aIS(gA), validator aIT(Entity), getter aIU(), id broadcast
 * aIV/aIW; spec analysis/specs/handlers/fg.md). Settings in declaration
 * order (fg.java:42-78): Lock Keybind cD .VO(-999) (unbound), Select Range cC
 * .Vy(0.1).Vw(3.0).Vx(10.0).VA(5.0).Vz(" blocks") = step 0.1, min 3.0, max 10.0,
 * default 5.0, suffix " blocks", Select Through Walls cJ .WE(false).
 *
 * <p>While locked the view is steered through {@link RotationManager} at
 * {@link RotationPriority#uWTdl}.
 *
 * <p>high-probability guesses (VM bodies, analysis/specs/handlers/fg.md "Unrecovered"):
 * the key-edge lock/unlock toggle, nearest-target selection (vs crosshair angle), the
 * release conditions (death/removal/range) and the rotation steering. aIT's exact
 * predicate set is unrecovered (player-only + alive + not-self used here).
 *
 * <p>trace 2026-10-17: the aIV/aIW static int[] broadcast is polled 275x by
 * unrelated VM bodies (fp/fo/fC/fz/fr/fs/fT) and always returned the empty value -
 * it is obfuscation tripwire plumbing, not behavior
 * (trace-recheck-movement-b-render.md:30); {@link #sharedIds()} mirrors it for
 * completeness. aIS (gA input) never fired (Lock Keybind unbound in the session).
 * Capture condition: bind Lock Keybind and press it with players in range; log the
 * aIS selection + aIT predicate decisions and the aIV broadcast contents.
 */
public class TargetLock extends Module {
	private final KeybindSetting lockKeybind = register(new KeybindSetting("lock_keybind", -999));
	private final DoubleSetting selectRange = register(new DoubleSetting("select_range", 0.1, 3.0, 10.0, 5.0, " blocks"));
	private final BoolSetting selectThroughWalls = register(new BoolSetting("select_through_walls", false));

	private PlayerEntity lockedTarget;
	private boolean keyWasHeld;
	private static int[] sharedIds = new int[0];

	public TargetLock() {
		super("target_lock", "Target Lock", "Allows to lock on a single target", ModuleCategory.COMBAT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			lockedTarget = null;
			keyWasHeld = false;
			return;
		}
		boolean held = client.currentScreen == null && lockKeybind.isPressed();
		boolean pressed = held && !keyWasHeld;
		keyWasHeld = held;
		if (lockedTarget != null && (!lockedTarget.isAlive() || lockedTarget.isRemoved()
				|| player.distanceTo(lockedTarget) > selectRange.getValue() * 2.0)) {
			lockedTarget = null;
		}
		if (pressed) {
			PlayerEntity nearest = findTarget(client, player);
			lockedTarget = nearest == lockedTarget ? null : nearest;
			sharedIds = lockedTarget == null ? new int[0] : new int[] { lockedTarget.getId() };
		}
		if (lockedTarget != null) {
			RotationManager.get().submitRotation(
					Rotation.lookingAt(player.getEyePos(), lockedTarget.getEyePos()).clamped(),
					RotationPriority.uWTdl, this);
		}
	}

	@Override
	public void onDisable() {
		lockedTarget = null;
		sharedIds = new int[0];
	}

	public PlayerEntity lockedTarget() {
		return lockedTarget;
	}

	public boolean valid(Entity entity) {
		return entity instanceof PlayerEntity player && player.isAlive() && entity != MinecraftClient.getInstance().player;
	}

	public static int[] sharedIds() {
		return sharedIds.clone();
	}

	static void setSharedIds(int[] ids) {
		sharedIds = ids.clone();
	}

	private PlayerEntity findTarget(MinecraftClient client, ClientPlayerEntity player) {
		double range = selectRange.getValue();
		return client.world.getPlayers().stream()
				.filter(other -> other != (Entity) player && other.isAlive())
				.filter(other -> valid(other))
				.filter(other -> player.distanceTo(other) <= range)
				.filter(other -> selectThroughWalls.getValue() || player.canSee(other))
				.min(Comparator.comparingDouble(player::distanceTo))
				.orElse(null);
	}
}
