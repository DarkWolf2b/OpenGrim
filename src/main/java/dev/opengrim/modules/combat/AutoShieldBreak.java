package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.AxeItem;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;

/**
 * Auto Shield Break (registry sixtwo.fB): "Automatically breaks shield".
 *
 * <p>Port of sixtwo.fB (payload-named-cfr/sixtwo/fB.java constructor;
 * handlers aSg(hw$tv) attack entry, aSh(gH$th) marker, aSi(Entity) worker,
 * aSl(PlayerEntity,PlayerEntity) predicate; spec
 * analysis/specs/casesafe/handlers/fB_.md). Settings in declaration order: Attack Mode
 * (Auto / Manual), Switch Mode (Auto / Manual, visible with Attack Auto),
 * Auto Switch Delay 1.0/0.0-10.0/1.0-2.0 " ticks", Range 0.1/1.0-6.0/2.5-3.0
 * " blocks", Disable Mode (Single / Stun / Spam, default Stun), Stun Chance
 * 1.0/1.0-100.0/100.0 " %" (visible with Stun), Spam CPS 1.0/1.0-20.0/4.0-6.0
 * " cps" (visible with Spam), Ignore Walls (false), Spoof CPS (false),
 * Return Delay 10.0/0.0-1000.0/50.0-100.0 " ms", Ignore Friends (true),
 * Cancel On Use (false), Cancel Use Mode (All Items / Allow Shielding).
 */
public class AutoShieldBreak extends Module {
	private final ModeSetting attackMode = register(new ModeSetting("attack_mode",
			List.of("auto", "manual"), "auto"));
	private final ModeSetting switchMode = register(new ModeSetting("switch_mode",
			List.of("auto", "manual"), "auto"));
	private final DoubleSetting autoSwitchDelay = register(new DoubleSetting("auto_switch_delay", 1.0, 0.0, 10.0, 1.0, " ticks"));
	private final DoubleSetting range = register(new DoubleSetting("range", 0.1, 1.0, 6.0, 2.5, " blocks"));
	private final ModeSetting disableMode = register(new ModeSetting("disable_mode",
			List.of("single", "stun", "spam"), "stun"));
	private final DoubleSetting stunChance = register(new DoubleSetting("stun_chance", 1.0, 1.0, 100.0, 100.0, " %"));
	private final DoubleSetting spamCps = register(new DoubleSetting("spam_cps", 1.0, 1.0, 20.0, 4.0, " cps"));
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", false));
	private final BoolSetting spoofCps = register(new BoolSetting("spoof_cps", false));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", true));
	private final BoolSetting cancelOnUse = register(new BoolSetting("cancel_on_use", false));
	private final ModeSetting cancelUseMode = register(new ModeSetting("cancel_use_mode",
			List.of("all_items", "allow_shielding"), "all_items"));

	private long lastAttackMs;
	private long returnAtMs;
	private int previousSlot = -1;
	private boolean singleDone;

	public AutoShieldBreak() {
		super("auto_shield_break", "Auto Shield Break", "Automatically breaks shield", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		lastAttackMs = 0L;
		returnAtMs = 0L;
		previousSlot = -1;
		singleDone = false;
	}

	@Override
	protected void onDisable() {
		// The restore timer is tick-driven; disabling the module must not leave
		// the player stuck on the axe slot.
		MinecraftClient client = MinecraftClient.getInstance();
		if (previousSlot >= 0 && client.player != null) {
			client.player.getInventory().setSelectedSlot(previousSlot);
		}
		previousSlot = -1;
		returnAtMs = 0L;
	}

	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		if (!(event.target() instanceof PlayerEntity other)) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || other == client.player) {
			return;
		}
		if (!validTarget(client.player, other)) {
			return;
		}
		attackOnce(client, client.player, other);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		switchMode.setVisible("auto".equals(attackMode.getValue()));
		stunChance.setVisible("stun".equals(disableMode.getValue()));
		spamCps.setVisible("spam".equals(disableMode.getValue()));
		autoSwitchDelay.setVisible("auto".equals(switchMode.getValue()));

		if (previousSlot >= 0 && System.currentTimeMillis() >= returnAtMs) {
			player.getInventory().setSelectedSlot(previousSlot);
			previousSlot = -1;
		}
		if (singleDone) {
			setEnabled(false);
			return;
		}
		if (!"auto".equals(attackMode.getValue())) {
			return;
		}
		if (cancelOnUse.getValue() && player.isUsingItem()
				&& ("all_items".equals(cancelUseMode.getValue()) || !player.getActiveItem().isOf(Items.SHIELD))) {
			return;
		}
		Box box = TriggerBot.reachBox(player.getEyePos(), range.getValue());
		PlayerEntity target = client.world.getOtherEntities(player, box, e -> e instanceof PlayerEntity)
				.stream().map(e -> (PlayerEntity) e)
				.filter(e -> validTarget(player, e))
				.min(Comparator.comparingDouble(player::distanceTo)).orElse(null);
		if (target != null) {
			attackOnce(client, player, target);
		}
	}

	private boolean validTarget(ClientPlayerEntity player, PlayerEntity other) {
		if (!other.isAlive() || !other.isBlocking()) {
			return false;
		}
		if (player.distanceTo(other) > range.getValue() + 0.5) {
			return false;
		}
		if (!ignoreWalls.getValue() && !player.canSee(other)) {
			return false;
		}
		return !ignoreFriends.getValue()
				|| !FriendsManager.isFriend(other.getGameProfile().name());
	}

	private int findAxeSlot(ClientPlayerEntity player) {
		for (int i = 0; i < 9; i++) {
			if (player.getInventory().getStack(i).getItem() instanceof AxeItem) {
				return i;
			}
		}
		return -1;
	}

	private void attackOnce(MinecraftClient client, ClientPlayerEntity player, PlayerEntity target) {
		String mode = disableMode.getValue();
		if ("single".equals(mode) && singleDone) {
			return;
		}
		if ("stun".equals(mode) && Math.random() * 100.0 + 1.0 > stunChance.getValue()) {
			return;
		}
		long now = System.currentTimeMillis();
		if ("spam".equals(mode)) {
			double interval = 1000.0 / Math.max(1.0, spamCps.getValue());
			if (now - lastAttackMs < interval) {
				return;
			}
		} else if (now - lastAttackMs < 250L && !spoofCps.getValue()) {
			return;
		}

		if ("auto".equals(switchMode.getValue())) {
			if (!(player.getMainHandStack().getItem() instanceof AxeItem)) {
				int axeSlot = findAxeSlot(player);
				if (axeSlot >= 0) {
					if (previousSlot < 0) {
						previousSlot = player.getInventory().getSelectedSlot();
					}
					player.getInventory().setSelectedSlot(axeSlot);
					returnAtMs = now + Math.round(autoSwitchDelay.getValue() * 50.0 + returnDelay.getValue());
				} else {
					return;
				}
			}
		} else {
			if (!(player.getMainHandStack().getItem() instanceof AxeItem)) {
				return;
			}
		}

		TriggerBot.attack(client, player, target);
		lastAttackMs = now;
		if (spoofCps.getValue()) {
			player.resetTicksSinceLastAttack();
		}
		if ("single".equals(mode)) {
			singleDone = true;
		}
	}
}
