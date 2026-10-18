package dev.opengrim.modules.utility;

import java.util.Random;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.screen.slot.Slot;
import net.minecraft.screen.slot.SlotActionType;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;

import dev.opengrim.mixin.HandledScreenAccessor;

/**
 * Auto Clicker (registry sixtwo.fn, module id 161): "Clicks automatically when
 * holding attack key".
 *
 * <p>parity: settings 12/13 top-level (Click Pattern omitted), behavior
 * partial. 1:1 reconstruction of sixtwo.fn. Spec:
 * analysis/specs/handlers/fn.md (evidence:
 * payload-decrypted/sixtwo/fn.java:67-293 constructor, fn.java:272-273
 * scheduler pair re(12,12,ElhZz,null,always-true,false), fn.java:274-275
 * int rings {-1,-1} and factor 1.0, fn.java:290-292 visibility gates,
 * fn.java:348 aKM tick entry, pool with re deN/deV/deW/deO, rr diT/diS/diU
 * click injection, Random/nextDouble, HandledScreen/Slot inventory filters).
 *
 * <p>Recovered: Mouse Buttons group with Left Click and Right Click toggles,
 * Left CPS and Right CPS chains (step 1, 1-20, default 12, " CPS") with
 * per-button visibility, Randomize true, Simulate Exhaust false, Allow
 * Breaking Blocks true, Inventory false gating Randomize Speed true,
 * Conditions group with Holding Weapon and Not Using Item toggles,
 * scheduler init pair (12,12) matching the 12.0 CPS defaults, always-true
 * gate suppliers, tick-driven scheduler model.
 */
public class AutoClicker extends Module {
	private final GroupSetting mouseButtons = register(new GroupSetting("mouse_buttons"));
	private final BoolSetting leftClick = register(new BoolSetting("left_click", false));
	private final BoolSetting rightClick = register(new BoolSetting("right_click", false));
	private final DoubleSetting leftCps = register(new DoubleSetting("left_cps", 1.0, 1.0, 20.0, 12.0, " CPS"));
	private final DoubleSetting rightCps = register(new DoubleSetting("right_cps", 1.0, 1.0, 20.0, 12.0, " CPS"));
	private final BoolSetting randomize = register(new BoolSetting("randomize", true));
	private final BoolSetting simulateExhaust = register(new BoolSetting("simulate_exhaust", false));
	private final BoolSetting allowBreakingBlocks = register(new BoolSetting("allow_breaking_blocks", true));
	private final BoolSetting inventory = register(new BoolSetting("inventory", false));
	private final BoolSetting randomizeSpeed = register(new BoolSetting("randomize_speed", true));
	private final GroupSetting conditions = register(new GroupSetting("conditions"));
	private final BoolSetting holdingWeapon = register(new BoolSetting("holding_weapon", false));
	private final BoolSetting notUsingItem = register(new BoolSetting("not_using_item", false));

	private final int[] leftRing = {-1, -1};
	private final int[] rightRing = {-1, -1};
	private double factor = 1.0;
	private final Random random = new Random();
	private long nextLeftAt;
	private long nextRightAt;

	public AutoClicker() {
		super("auto_clicker", "Auto Clicker", "Clicks automatically when holding attack key", ModuleCategory.UTILITY);
		mouseButtons.add(leftClick);
		mouseButtons.add(rightClick);
		conditions.add(holdingWeapon);
		conditions.add(notUsingItem);
	}

	@Override
	protected void onEnable() {
		leftRing[0] = -1;
		leftRing[1] = -1;
		rightRing[0] = -1;
		rightRing[1] = -1;
		factor = 1.0;
		nextLeftAt = 0L;
		nextRightAt = 0L;
	}

	@Override
	public void onTick() {
		leftCps.setVisible(leftClick.getValue());
		rightCps.setVisible(rightClick.getValue());
		randomizeSpeed.setVisible(inventory.getValue());

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		boolean inScreen = client.currentScreen != null;
		if (inScreen && !inventory.getValue()) {
			return;
		}
		if (notUsingItem.getValue() && player.isUsingItem()) {
			return;
		}
		if (holdingWeapon.getValue() && player.getMainHandStack().isEmpty()) {
			return;
		}
		long now = System.currentTimeMillis();
		if (leftClick.getValue() && client.options.attackKey.isPressed() && now >= nextLeftAt) {
			nextLeftAt = now + interval(leftCps.getValue());
			clickLeft(client, player, inScreen);
		}
		if (rightClick.getValue() && client.options.useKey.isPressed() && now >= nextRightAt) {
			nextRightAt = now + interval(rightCps.getValue());
			clickRight(client, player, inScreen);
		}
	}

	/**
	 * In-world: attack the crosshair entity when the attack cooldown has
	 * recovered (rr diT/diS click injection), or swing for block breaking while
	 * Allow Breaking Blocks is on. In an inventory screen (Inventory on): pick
	 * up the hovered slot (HandledScreen/Slot inventory filters from the
	 * recovered pool).
	 */
	private void clickLeft(MinecraftClient client, ClientPlayerEntity player, boolean inScreen) {
		if (inScreen) {
			clickHoveredSlot(client, player, 0);
			return;
		}
		if (client.targetedEntity != null && player.getAttackCooldownProgress(0.0f) >= 1.0f) {
			client.interactionManager.attackEntity(player, client.targetedEntity);
			player.swingHand(Hand.MAIN_HAND);
		} else if (allowBreakingBlocks.getValue()) {
			player.swingHand(Hand.MAIN_HAND);
		}
	}

	/** In-world: right-click the block crosshair. In a screen: use the hovered slot. */
	private void clickRight(MinecraftClient client, ClientPlayerEntity player, boolean inScreen) {
		if (inScreen) {
			clickHoveredSlot(client, player, 1);
			return;
		}
		if (!player.isUsingItem() && client.crosshairTarget instanceof BlockHitResult hit) {
			client.interactionManager.interactBlock(player, Hand.MAIN_HAND, hit);
		}
	}

	private void clickHoveredSlot(MinecraftClient client, ClientPlayerEntity player, int button) {
		if (client.currentScreen instanceof HandledScreen<?> screen) {
			Slot slot = ((HandledScreenAccessor) screen).opengrim$getFocusedSlot();
			if (slot != null) {
				client.interactionManager.clickSlot(screen.getScreenHandler().syncId, slot.id, button,
						SlotActionType.PICKUP, player);
			}
		}
	}

	private long interval(double cps) {
		double base = 1000.0 / Math.max(1.0, cps);
		base *= factor;
		if (randomize.getValue()) {
			base *= 0.9 + random.nextDouble() * 0.2;
		}
		return (long) base;
	}
}
