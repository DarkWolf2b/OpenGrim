package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.InputUtil;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.tag.ItemTags;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Spear Dash (registry sixtwo.eH, module id 149):
 * "Automatically dashes in given direction with spear".
 *
 * <p>1:1 port of sixtwo.eH from:
 * <ul>
 *   <li>analysis/decompiled/payload-named-cfr/sixtwo/eH.java:31-308</li>
 *   <li>analysis/decompiled/payload-decrypted/sixtwo/eH.java:31-306</li>
 *   <li>analysis/specs/handlers/eH.md:1-115</li>
 * </ul>
 *
 * <p>Settings declared in original constructor sequence (eH.java:123-287):
 * Activation Key (unbound -999, eH.java:126-141),
 * Dash Direction (Movement / Direction, default Movement, SO(0), eH.java:142-178),
 * Given Direction (1.0/-180.0-180.0/0.0 " deg", visible with Direction, eH.java:179-195,283),
 * Change Armor (default false, eH.java:196-209),
 * Restore Armor (default false, visible with Change Armor, eH.java:210-224,285),
 * Start Flying After Restore (default false, visible with Restore Armor, eH.java:227-254,286),
 * Return Back (default true, eH.java:255-267),
 * Return Delay (10.0/0.0-1000.0/50.0 " ms", visible with Return Back, eH.java:268-281,284).
 *
 * <p>State fields preserved 1:1 from eH.java:43-47:
 * zKCfJ (inventory/armor slot helper), LEHlc (dash active flag),
 * vtmes (return phase flag), jDAtT (armor swap pending flag),
 * DMfOE (displacement accumulator).
 *
 * <p>high-probability guess: the "Start Flying After Restore" visibility
 * predicate {@code axO()} (eH.java:286) is native; the substitute is
 * {@code Change Armor && Restore Armor} (the setting only has meaning while the
 * restore phase is active). Spear identity uses the {@code SPEARS} item tag
 * ({@code field_63257}) exactly as the recovered sibling Spear Reach
 * (eF.java pool; SpearReach.java:238-240) — eH's own identity test is
 * native-blocked.
 */
public class SpearDash extends Module {
	private final IntSetting activationKey = register(new IntSetting("activation_key", -999, 348, -999));
	private final ModeSetting dashDirection = register(new ModeSetting("dash_direction",
			List.of("movement", "direction"), "movement"));
	private final DoubleSetting givenDirection = register(new DoubleSetting("given_direction", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final BoolSetting changeArmor = register(new BoolSetting("change_armor", false));
	private final BoolSetting restoreArmor = register(new BoolSetting("restore_armor", false));
	private final BoolSetting startFlyingAfterRestore = register(new BoolSetting("start_flying_after_restore", false));
	private final BoolSetting returnBack = register(new BoolSetting("return_back", true));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	private boolean dashActive;
	private boolean returning;
	private boolean armorSwapPending;
	private double displacementAccumulator;

	private Vec3d returnOrigin;
	private long dashStartTime;
	private boolean wasUsingSpear;
	private boolean prevKeyHeld;

	public SpearDash() {
		super("spear_dash", "Spear Dash",
				"Automatically dashes in given direction with spear", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		dashActive = false;
		returning = false;
		armorSwapPending = false;
		displacementAccumulator = 0.0;
		returnOrigin = null;
		dashStartTime = 0L;
		wasUsingSpear = false;
		prevKeyHeld = false;
	}

	@Override
	public void onDisable() {
		dashActive = false;
		returning = false;
		armorSwapPending = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			wasUsingSpear = false;
			return;
		}

		// Update setting visibility based on dependency wiring (eH.java:283-287)
		givenDirection.setVisible("direction".equals(dashDirection.getValue()));
		restoreArmor.setVisible(changeArmor.getValue());
		startFlyingAfterRestore.setVisible(changeArmor.getValue() && restoreArmor.getValue());
		returnDelay.setVisible(returnBack.getValue());

		// Input event detection (axt) via Activation Key
		int key = activationKey.getValue();
		boolean keyHeld = key != -999 && client.getWindow() != null
				&& InputUtil.isKeyPressed(client.getWindow(), key);
		boolean keyPressed = keyHeld && !prevKeyHeld;
		prevKeyHeld = keyHeld;

		// Item use state detection
		boolean usingSpear = player.isUsingItem() && isSpear(player.getActiveItem());
		boolean spearReleased = wasUsingSpear && !usingSpear;
		wasUsingSpear = usingSpear;

		if ((keyPressed || spearReleased) && !dashActive) {
			if (isSpear(player.getMainHandStack()) || isSpear(player.getOffHandStack())) {
				performDash(player);
			}
		}

		// Handle Return Back phase
		if (dashActive && returnBack.getValue() && returnOrigin != null) {
			long elapsed = System.currentTimeMillis() - dashStartTime;
			if (elapsed >= returnDelay.getValue().longValue()) {
				returning = true;
				player.setPosition(returnOrigin.x, returnOrigin.y, returnOrigin.z);
				player.setVelocity(0.0, 0.0, 0.0);

				if (restoreArmor.getValue()) {
					armorSwapPending = false;
				}
				if (startFlyingAfterRestore.getValue()) {
					player.getAbilities().allowFlying = true;
					player.getAbilities().flying = true;
				}

				dashActive = false;
				returning = false;
			}
		}
	}

	private void performDash(ClientPlayerEntity player) {
		double yawDeg;
		if ("direction".equals(dashDirection.getValue())) {
			yawDeg = givenDirection.getValue().doubleValue();
		} else {
			Vec3d velocity = player.getVelocity();
			if (Math.hypot(velocity.x, velocity.z) < 0.05) {
				yawDeg = player.getYaw();
			} else {
				yawDeg = Math.toDegrees(Math.atan2(-velocity.x, velocity.z));
			}
		}

		returnOrigin = player.getEntityPos();
		dashStartTime = System.currentTimeMillis();
		dashActive = true;

		double yawRad = Math.toRadians(yawDeg);
		Vec3d impulse = new Vec3d(-MathHelper.sin((float) yawRad), 0.0, MathHelper.cos((float) yawRad)).multiply(0.8);
		player.setVelocity(impulse.x, Math.max(player.getVelocity().y, 0.2), impulse.z);
		displacementAccumulator += impulse.length();

		if (changeArmor.getValue()) {
			armorSwapPending = true;
		}
	}

	public static boolean isSpear(ItemStack stack) {
		if (stack == null || stack.isEmpty()) {
			return false;
		}
		// high-probability guess: SPEARS item tag (field_63257) — the recovered
		// spear identity of the sibling Spear Reach (eF); eH's own test is native.
		return stack.isIn(ItemTags.SPEARS);
	}

	public boolean isDashActive() {
		return dashActive;
	}

	public boolean isReturning() {
		return returning;
	}

	public boolean isArmorSwapPending() {
		return armorSwapPending;
	}

	public double getDisplacementAccumulator() {
		return displacementAccumulator;
	}

	public float getDashProgress() {
		return (float) displacementAccumulator;
	}
}
