package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.PotionContentsComponent;
import net.minecraft.entity.effect.StatusEffect;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.util.Hand;

/**
 * Auto Potion (registry sixtwo.fl): "Automatically uses potions".
 *
 * <p>Port of sixtwo.fl (payload-decrypted/sixtwo/fl.java:136-453 constructor;
 * trigger gate fl.java:441-488 {@code aJQ()}: timer {@code VKJkY.cpC(kduLk)}
 * over Per Potion Delay plus plan {@code aJU() != null}; spec
 * analysis/specs/casesafe/handlers/fl.md). Settings in declaration order: Mode
 * (Heal / Buff / Both), Activation (Auto / Look), Throw Angle (Up / Down,
 * default Down via {@code cu.SY()}), Buffs (Strength / Speed / Fire
 * Resistance, defaults on via {@code cw.Tz()}), Healings (Instant Healing /
 * Regeneration, defaults on), Regeneration Trigger (No Effect / Threshold),
 * Regeneration Threshold 0.1/1.0-100.0/60.0 "%", Required Angle
 * 0.1/1.0-45.0/25.0 " deg", Heal Until (Reaches Threshold / Full Health,
 * default Full Health via {@code cu.SY()}), Heal Threshold
 * 0.1/1.0-100.0/60.0 "%", Potion Type Delay 10.0/200.0-500.0/250.0 " ms",
 * Per Potion Delay 10.0/0.0-1500.0/100.0 " ms".
 *
 * <p>Recovered contract: the plan is {@code mz.of(effect, fl$sP(hotbarSlot,
 * hand))} and the slot lookup is effect-scoped ({@code aJZ(effect, stack)} =
 * "does this potion stack contain the effect"), so the hotbar scan matches the
 * potion's own status effect. The tick body is native — the trigger ordering,
 * health formula (whether absorption counts), mode/activation gating, splash
 * vs drink and the exact use call are unrecovered (spec "Unrecovered").
 *
 * <p>Labeled stand-ins: the plan order (heal then buffs), the percent formula
 * {@code 100 * (health + absorption) / max}, the Full-Health branch
 * ({@code health < max}), the per-effect cooldown map ({@code LKcpH}) keyed by
 * effect with Potion Type Delay as the next-allowed interval, the throw pitch
 * {@code +Required Angle} for Down / {@code -Required Angle} for Up, and the
 * use path ({@code interactItem} MAIN_HAND + swing). Visibility suppliers
 * aJS/aJT/aKb..aKg are native; the wiring here (Mode -> groups, toggle ->
 * trigger, Heal Until -> threshold, Activation -> angle) is a labeled guess;
 * Potion Type Delay stays always visible. Trace 2026-10-17: YO 1x (disable
 * only; no handler events — never enabled in the tour).
 */
public class AutoPotion extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("heal", "buff", "both"), "heal"));
	private final ModeSetting activation = register(new ModeSetting("activation",
			List.of("auto", "look"), "auto"));
	private final ModeSetting throwAngle = register(new ModeSetting("throw_angle",
			List.of("up", "down"), "down"));
	private final GroupSetting buffs = register(new GroupSetting("buffs"));
	private final BoolSetting strength = register(new BoolSetting("strength", true));
	private final BoolSetting speed = register(new BoolSetting("speed", true));
	private final BoolSetting fireResistance = register(new BoolSetting("fire_resistance", true));
	private final GroupSetting healings = register(new GroupSetting("healings"));
	private final BoolSetting instantHealing = register(new BoolSetting("instant_healing", true));
	private final BoolSetting regeneration = register(new BoolSetting("regeneration", true));
	private final ModeSetting regenerationTrigger = register(new ModeSetting("regeneration_trigger",
			List.of("no_effect", "threshold"), "no_effect"));
	private final DoubleSetting regenerationThreshold = register(new DoubleSetting("regeneration_threshold", 0.1, 1.0, 100.0, 60.0, "%"));
	private final DoubleSetting requiredAngle = register(new DoubleSetting("required_angle", 0.1, 1.0, 45.0, 25.0, " deg"));
	private final ModeSetting healUntil = register(new ModeSetting("heal_until",
			List.of("reaches_threshold", "full_health"), "full_health"));
	private final DoubleSetting healThreshold = register(new DoubleSetting("heal_threshold", 0.1, 1.0, 100.0, 60.0, "%"));
	private final DoubleSetting potionTypeDelay = register(new DoubleSetting("potion_type_delay", 10.0, 200.0, 500.0, 250.0, " ms"));
	private final DoubleSetting perPotionDelay = register(new DoubleSetting("per_potion_delay", 10.0, 0.0, 1500.0, 100.0, " ms"));

	private long lastUseMs;
	private final java.util.Map<RegistryEntry<StatusEffect>, Long> typeCooldown = new java.util.HashMap<>();

	public AutoPotion() {
		super("auto_potion", "Auto Potion", "Automatically uses potions", ModuleCategory.COMBAT);
		buffs.add(strength);
		buffs.add(speed);
		buffs.add(fireResistance);
		healings.add(instantHealing);
		healings.add(regeneration);
	}

	@Override
	public void onEnable() {
		lastUseMs = 0L;
		typeCooldown.clear();
	}

	/** fl#aJQ (fl.java:441-488): timer over Per Potion Delay and a live plan. */
	private boolean triggerReady(ClientPlayerEntity player) {
		if (System.currentTimeMillis() - lastUseMs <= perPotionDelay.getValue()) {
			return false;
		}
		return buildPlan(player) != null;
	}

	/**
	 * Port of {@code fl.aJQ()} for Kill Aura's pause gate {@code fr#aNB}
	 * (fr.java:1074-1097, {@code fl.bag() && fl.aJQ()}): true while the potion
	 * plan is live and the per-potion delay has elapsed.
	 */
	public boolean isTriggerReady() {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		return player != null && triggerReady(player);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		applyVisibility();
		if (!triggerReady(player)) {
			return;
		}
		RegistryEntry<StatusEffect> plan = buildPlan(player);
		if (plan == null) {
			return;
		}
		Long next = typeCooldown.get(plan);
		long now = System.currentTimeMillis();
		if (next != null && now < next) {
			return;
		}
		int slot = findPotion(player, plan);
		if (slot < 0) {
			return;
		}
		player.getInventory().setSelectedSlot(slot);
		float pitch = "down".equals(throwAngle.getValue())
				? requiredAngle.getValue().floatValue()
				: -requiredAngle.getValue().floatValue();
		RotationManager.get().submitRotation(Rotation.fromAngles(
				RotationManager.get().effectiveRotation().getYaw(), pitch), RotationPriority.uWTdl, this);
		client.interactionManager.interactItem(player, Hand.MAIN_HAND);
		player.swingHand(Hand.MAIN_HAND);
		lastUseMs = now;
		typeCooldown.put(plan, now + Math.round(potionTypeDelay.getValue()));
	}

	/** Visibility suppliers aJS/aJT/aKb..aKg (native) — labeled guess wiring. */
	private void applyVisibility() {
		boolean heal = !"buff".equals(mode.getValue());
		boolean buff = !"heal".equals(mode.getValue());
		healings.setVisible(heal);
		buffs.setVisible(buff);
		regenerationTrigger.setVisible(regeneration.getValue());
		regenerationThreshold.setVisible("threshold".equals(regenerationTrigger.getValue()));
		healThreshold.setVisible("reaches_threshold".equals(healUntil.getValue()));
		requiredAngle.setVisible("look".equals(activation.getValue()));
	}

	/** fl#aJU/aJY: pick the wanted status effect (plan), in the labeled order. */
	private RegistryEntry<StatusEffect> buildPlan(ClientPlayerEntity player) {
		if (player == null) {
			return null;
		}
		boolean wantHeal = !"buff".equals(mode.getValue());
		boolean wantBuff = !"heal".equals(mode.getValue());
		if (wantHeal && needsHeal(player)) {
			if (instantHealing.getValue() && hasPotion(player, StatusEffects.INSTANT_HEALTH)) {
				return StatusEffects.INSTANT_HEALTH;
			}
			if (regeneration.getValue() && regenWanted(player) && hasPotion(player, StatusEffects.REGENERATION)) {
				return StatusEffects.REGENERATION;
			}
		}
		if (wantBuff) {
			if (strength.getValue() && !player.hasStatusEffect(StatusEffects.STRENGTH)
					&& hasPotion(player, StatusEffects.STRENGTH)) {
				return StatusEffects.STRENGTH;
			}
			if (speed.getValue() && !player.hasStatusEffect(StatusEffects.SPEED)
					&& hasPotion(player, StatusEffects.SPEED)) {
				return StatusEffects.SPEED;
			}
			if (fireResistance.getValue() && !player.hasStatusEffect(StatusEffects.FIRE_RESISTANCE)
					&& hasPotion(player, StatusEffects.FIRE_RESISTANCE)) {
				return StatusEffects.FIRE_RESISTANCE;
			}
		}
		return null;
	}

	private boolean needsHeal(ClientPlayerEntity player) {
		if ("full_health".equals(healUntil.getValue())) {
			return player.getHealth() < player.getMaxHealth();
		}
		double pct = 100.0 * (player.getHealth() + player.getAbsorptionAmount()) / player.getMaxHealth();
		return pct < healThreshold.getValue();
	}

	private boolean regenWanted(ClientPlayerEntity player) {
		if ("no_effect".equals(regenerationTrigger.getValue())) {
			return !player.hasStatusEffect(StatusEffects.REGENERATION);
		}
		double pct = 100.0 * (player.getHealth() + player.getAbsorptionAmount()) / player.getMaxHealth();
		return pct < regenerationThreshold.getValue();
	}

	/**
	 * fl#aJZ(effect, stack) + aJY(effect): hotbar slot whose potion contents
	 * include the effect (fl$sP.hotbarSlot is an int slot; scan scope
	 * unrecovered — hotbar only here, labeled).
	 */
	private static int findPotion(ClientPlayerEntity player, RegistryEntry<StatusEffect> effect) {
		for (int slot = 0; slot < 9; slot++) {
			if (potionHasEffect(player.getInventory().getStack(slot), effect)) {
				return slot;
			}
		}
		return -1;
	}

	private static boolean hasPotion(ClientPlayerEntity player, RegistryEntry<StatusEffect> effect) {
		return findPotion(player, effect) >= 0;
	}

	private static boolean potionHasEffect(ItemStack stack, RegistryEntry<StatusEffect> effect) {
		if (!stack.isOf(Items.SPLASH_POTION) && !stack.isOf(Items.POTION) && !stack.isOf(Items.LINGERING_POTION)) {
			return false;
		}
		PotionContentsComponent contents = stack.get(DataComponentTypes.POTION_CONTENTS);
		if (contents == null) {
			return false;
		}
		for (StatusEffectInstance instance : contents.getEffects()) {
			if (instance.getEffectType() == effect) {
				return true;
			}
		}
		return false;
	}
}
