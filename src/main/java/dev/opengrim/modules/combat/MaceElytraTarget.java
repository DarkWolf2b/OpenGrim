package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.math.Box;

/**
 * Mace Elytra Target (registry sixtwo.eQ, module id 152): "Follows target using
 * firework and hits it with mace".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/casesafe/handlers/eQ_.md (the pre-audit javadoc cited
 * handlers/eQ.md, which documents the case-collapsed eq Null Movement). Evidence:
 * eQ.java:94-260 constructor — Hit Mode eQ.java:106 ({@code ct}, no
 * {@code .SO()}/{@code .SY()} → default index 0 = Armor Swap, ct.java:34
 * {@code kErPl = 0}), Armor Swap eQ.java:120, Force Smash eQ.java:134, Fly Up
 * For eQ.java:146, Follow Distance eQ.java:163, Firework Use Mode eQ.java:182
 * (None eQ.java:183-193, On Bind eQ.java:203, Auto eQ.java:204-215 with
 * {@code .SY()} default), Firework Cooldown eQ.java:236, Firework Key
 * eQ.java:250 ({@code .VO(-999)}); visibility wiring Firework Key iff On Bind
 * eQ.java:252, Firework Cooldown iff Auto eQ.java:253; state flags dAcnc/gzCSp
 * eQ.java:23-24, stopwatch lRUvL = mT.cpz() eQ.java:251, orchestrator
 * registration eP.aBU() eQ.java:107 / eP.aBT(new int[4]) eQ.java:254-256.
 * Handlers: aCd(gM) marker tick eQ.java:69-70, aCe(gH$th) pre-motion tick
 * eQ.java:44-45, aCf(hw$tv) cancellable entity event eQ.java:81-82,
 * aCg(hw$tw) entity event eQ.java:33-34, aCh(gA) input event eQ.java:72-73,
 * YO() eQ.java:269-270. Trace 2026-10-17 (by-class-casesafe/eQ_.jsonl): one
 * YO() call only — no [N] body observable.
 *
 * <p>Setting attribution (resolves spec "Unrecovered" 2): the decrypted name
 * order in analysis/decrypted/full-dump.jsonl (class sixtwo.eQ) is Hit Mode,
 * Armor Swap, Force Smash, Fly Up For, Follow Distance, Firework Use Mode,
 * None, On Bind, Auto, Firework Cooldown, Firework Key — matching the
 * constructor call order exactly, so Fly Up For = eQ.java:146
 * (0.1/7.0-25.0/12.0), Follow Distance = eQ.java:163 (1.0/0.0-100.0/15.0
 * " blocks"), Firework Cooldown = eQ.java:236 (1.0/0.0-60.0/10.0 " ticks").
 *
 * <p>Recovered engine contract (handlers/eQ_.md "Runtime model"): eQ tracks the
 * target from the {@code hw$tv}/{@code hw$tw} entity events, follows it with
 * firework boosts while gliding, then dives and smashes with the mace through
 * the eP orchestrator ({@code eP.aBG}/{@code eP.aBH}, {@code oW} plans, the
 * {@code pe} point engine, {@code LivingEntity.stopGliding()},
 * {@code method_66281}). High-probability guesses (labeled): the target as the
 * nearest player within 32 blocks, the rotation submission, the tick-based
 * climb window and the smash trigger (above target or Force Smash, mace held,
 * within Follow Distance+2). Not implemented ([U]): the eP/oW/oY orchestrator
 * and {@code pe} movement solve, the Armor Swap hit-mode variant, and the
 * aCf/aCg target-event acquire/drop pairing.
 */
public class MaceElytraTarget extends Module {
	private final ModeSetting hitMode = register(new ModeSetting("hit_mode",
			List.of("armor_swap", "force_smash"), "armor_swap"));
	private final DoubleSetting flyUpFor = register(new DoubleSetting("fly_up_for", 0.1, 7.0, 25.0, 12.0, null));
	private final DoubleSetting followDistance = register(new DoubleSetting("follow_distance", 1.0, 0.0, 100.0, 15.0, " blocks"));
	private final ModeSetting fireworkUseMode = register(new ModeSetting("firework_use_mode",
			List.of("none", "on_bind", "auto"), "auto"));
	private final DoubleSetting fireworkCooldown = register(new DoubleSetting("firework_cooldown", 1.0, 0.0, 60.0, 10.0, " ticks"));
	private final IntSetting fireworkKey = register(new IntSetting("firework_key", -999, 348, -999));

	private long lastBoostMs = -1L;
	private int climbTicks;
	private boolean prevBind;

	public MaceElytraTarget() {
		super("mace_elytra_target", "Mace Elytra Target", "Follows target using firework and hits it with mace",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		fireworkKey.setVisible("on_bind".equals(fireworkUseMode.getValue())); // eQ.java:252
		fireworkCooldown.setVisible("auto".equals(fireworkUseMode.getValue())); // eQ.java:253
		int key = fireworkKey.getValue();
		boolean held = key != -999 && client.currentScreen == null
				&& net.minecraft.client.util.InputUtil.isKeyPressed(client.getWindow(), key);
		boolean pressed = held && !prevBind;
		prevBind = held;
		if (!player.isGliding()) {
			climbTicks = 0;
			return;
		}
		Entity target = client.world.getOtherEntities(player,
				new Box(player.getEntityPos(), player.getEntityPos()).expand(32.0),
				e -> e.isAlive() && e instanceof PlayerEntity)
				.stream().min(Comparator.comparingDouble(player::distanceTo)).orElse(null);
		if (target == null) {
			return;
		}
		RotationManager.get().submitRotation(
				Rotation.lookingAt(player.getEyePos(), target.getEyePos()).clamped(),
				RotationPriority.uWTdl, this);
		boolean wantBoost = "auto".equals(fireworkUseMode.getValue())
				? player.distanceTo(target) > followDistance.getValue()
				: "on_bind".equals(fireworkUseMode.getValue()) && pressed;
		long now = System.currentTimeMillis();
		if (wantBoost && (lastBoostMs < 0 || now - lastBoostMs >= Math.round(fireworkCooldown.getValue() * 50.0))) {
			if (useFirework(client, player)) {
				lastBoostMs = now;
				climbTicks = (int) Math.round(flyUpFor.getValue());
			}
		}
		if (climbTicks > 0) {
			climbTicks--;
		}
		boolean above = player.getY() > target.getY() + 1.0;
		boolean smashMode = "force_smash".equals(hitMode.getValue());
		if ((above || smashMode) && player.getMainHandStack().isOf(Items.MACE)
				&& player.distanceTo(target) <= followDistance.getValue() + 2.0) {
			TriggerBot.attack(client, player, target);
			player.stopGliding();
		}
	}

	private static boolean useFirework(MinecraftClient client, ClientPlayerEntity player) {
		int slot = -1;
		for (int i = 0; i < 9; i++) {
			if (player.getInventory().getStack(i).isOf(Items.FIREWORK_ROCKET)) {
				slot = i;
				break;
			}
		}
		if (slot < 0) {
			return false;
		}
		int held = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(slot);
		client.interactionManager.interactItem(player, Hand.MAIN_HAND);
		player.swingHand(Hand.MAIN_HAND);
		if (player.getInventory().getStack(held).isOf(Items.MACE)) {
			player.getInventory().setSelectedSlot(held);
		}
		return true;
	}
}
