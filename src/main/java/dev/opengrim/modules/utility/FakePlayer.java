package dev.opengrim.modules.utility;

import java.util.UUID;

import com.mojang.authlib.GameProfile;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.network.OtherClientPlayerEntity;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.WeaponComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.enchantment.Enchantments;
import net.minecraft.entity.Entity;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.item.consume.UseAction;
import net.minecraft.registry.Registry;
import net.minecraft.registry.RegistryKeys;
import net.minecraft.util.Hand;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.mixin.LivingEntityAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.StringSetting;

/**
 * Fake Player (registry sixtwo.cX): "Spawns fake player".
 *
 * <p>parity: high. 1:1 reconstruction of sixtwo.cX. Spec:
 * analysis/specs/handlers/cX.md (evidence: cX.java:98-121 constructor,
 * cX.java:286-296 existence check, cX.java:298-390 script hook,
 * cX.java:392-418 enable hook, cX.java:424-449 yaw sync, cX.java:474-531
 * spawn, cX.java:533-566 remove, cX.java:613-657 living-flag helper,
 * cX.java:660-962 tick state machine, cX.java:963-1021 use-eligibility,
 * cX.java:1151-1233 wind-burst jump, cX.java:1319-1441 attacked handler,
 * cX.java:1510-1515 disable hook).
 *
 * <p>On enable the module spawns a static {@code OtherClientPlayerEntity}
 * with a random UUID and the "Name" setting value, copies position/rotation,
 * syncs yaw/pitch/body/head yaw, optionally copies the armor slots plus both
 * hands, applies REGENERATION (amplifier 2), ABSORPTION (amplifier 4) and
 * RESISTANCE (amplifier 1) and removes the entity on disable. The tick state
 * machine (idle stops use, shield holds a shield up, custom item uses the
 * held item) runs in {@link #onTick}; the pre-attack handler performs the
 * wind-burst jump and the shield-break/cooldown reaction. Trace 2026-10-17
 * cX_ confirms the call structure (aaj → aak → aaB/aaA; YO → aaB) and the
 * three status-effect durations (aaH/aaI → 9999).
 *
 * <p>Not ported (documented gaps):
 * <ul>
 *   <li>[U] the shell-side script slot appliers {@code aar(String, ItemStack)}
 *   (cX.java:579-600, CFR failed; recovered from bytecode as a 19-alias
 *   dispatch to main/off hand, the four armor slots and {@code aav}) and
 *   {@code aav(String, ItemStack)} (cX.java:1027-1149; "hotbar1..9" is
 *   dump-confirmed, the second prefix and the armor max are not) — the alias
 *   strings are double-DES-encrypted and absent from full-dump, and this port
 *   has no script shell to call them.</li>
 *   <li>[G] the copy-inventory armor base (cX.java:508-521, DES int ~32446,
 *   not in full-dump) is taken as 36 (PlayerInventory armor slots
 *   feet..head).</li>
 *   <li>[S] the native helpers {@code jh.bCg/bCh} (enchantment lookup) are
 *   mirrored with {@code EnchantmentHelper.getLevel}; {@code jg.bBL} and
 *   {@code jc.bzo/bzw} are ported inline ({@link #isBehind},
 *   {@link #disablesBlocking}, the fall gate in {@link #windBurstJump}).</li>
 * </ul>
 */
public class FakePlayer extends Module {
	/** Wind-burst jump table (cX.java:283: {@code AekfX = {1.2, 1.75, 2.2}}). */
	static final double[] WIND_BURST_JUMP = {1.2, 1.75, 2.2};
	/** Wind-burst base for levels above 3 (cX.java:81: {@code bTQok = 1.5}). */
	static final double WIND_BURST_BASE = 1.5;
	/** Wind-burst per-level step for levels above 3 (cX.java:82: {@code uNWYG = 0.35}). */
	static final double WIND_BURST_STEP = 0.35;
	/**
	 * Status-effect duration of the three spawn effects (cX.java:527-529, DES
	 * ints ~22049/~20063): trace 2026-10-17 cX_ — {@code aaH}/{@code aaI}
	 * returned 9999 for all three decrypt sites.
	 */
	private static final int EFFECT_DURATION_TICKS = 9999;
	/**
	 * Armor-slot base of the copy-inventory loop (cX.java:508-521, DES int
	 * ~32446 — not in full-dump). The loop copies 4 consecutive slots, so the
	 * base is the first armor slot (36 = feet..head, PlayerInventory
	 * EQUIPMENT_SLOTS); kept as a labeled guess.
	 */
	private static final int COPY_INVENTORY_BASE = 36;

	private final StringSetting name = register(new StringSetting("name", ""));
	private final BoolSetting copyInventory = register(new BoolSetting("copy_inventory", false));

	private static OtherClientPlayerEntity fake;
	private UseMode useMode = UseMode.IDLE;
	private Hand useHand = Hand.MAIN_HAND;
	private ItemStack heldItem = ItemStack.EMPTY;

	public FakePlayer() {
		super("fake_player", "Fake Player", "Spawns fake player", ModuleCategory.UTILITY);
	}

	/** Use modes of the tick state machine (cX$ss: idle / shield / custom item). */
	public enum UseMode {
		IDLE,
		SHIELD,
		CUSTOM
	}

	/**
	 * Enable hook (cX.java:392-418 {@code aaj}): {@code super.aaj(); aak();}
	 * behind the {@code bab()} in-game gate.
	 */
	@Override
	protected void onEnable() {
		spawn();
	}

	/**
	 * Disable hook (cX.java:1510-1515 {@code YO}): remove the entity and reset
	 * the mode plus the captured stack.
	 */
	@Override
	protected void onDisable() {
		remove();
		useMode = UseMode.IDLE;
		heldItem = ItemStack.EMPTY;
	}

	/**
	 * Tick state machine (cX.java:660-962 {@code aat}): idle stops the use
	 * action; shield mode holds the shield up (clearing on the shield
	 * cooldown); custom mode captures/restores {@code heldItem} and starts the
	 * use action when {@link #isUseEligible} passes.
	 */
	@Override
	public void onTick() {
		if (fake == null) {
			return;
		}
		if (useMode == UseMode.IDLE) {
			if (fake.isUsingItem()) {
				fake.clearActiveItem();
				setUsingState(false, useHand);
			}
			return;
		}
		ItemStack stack = fake.getStackInHand(useHand);
		if (stack.isEmpty() && useMode == UseMode.CUSTOM && !heldItem.isEmpty()) {
			fake.setStackInHand(useHand, heldItem.copy());
			stack = fake.getStackInHand(useHand);
		}
		if (!isUseEligible(stack, useMode)) {
			if (fake.isUsingItem()) {
				fake.clearActiveItem();
				setUsingState(false, useHand);
			}
			return;
		}
		if (useMode == UseMode.SHIELD) {
			if (fake.getItemCooldownManager().isCoolingDown(Items.SHIELD.getDefaultStack())
					&& fake.isUsingItem()) {
				fake.clearActiveItem();
				setUsingState(false, useHand);
			}
			return;
		}
		if (useMode == UseMode.CUSTOM && heldItem.isEmpty()) {
			heldItem = stack.copy();
		}
		if (useMode == UseMode.CUSTOM && !heldItem.isEmpty() && !stack.isOf(heldItem.getItem())) {
			fake.setStackInHand(useHand, heldItem.copy());
			stack = fake.getStackInHand(useHand);
		}
		if (fake.isUsingItem() && fake.getActiveHand() == useHand) {
			return;
		}
		fake.setCurrentHand(useHand);
		setUsingState(true, useHand);
	}

	/**
	 * Script hook (cX.java:298-390 {@code aas}): selects the use mode and
	 * hand; a null mode resets to idle and a null hand resets to the main
	 * hand. Switching away from the custom mode drops the captured stack; the
	 * idle reset also stops an active use action and clears the living flags.
	 */
	public void setUseMode(UseMode mode, Hand hand) {
		useMode = mode == null ? UseMode.IDLE : mode;
		useHand = hand == null ? Hand.MAIN_HAND : hand;
		if (useMode != UseMode.CUSTOM) {
			heldItem = ItemStack.EMPTY;
		}
		if (fake != null && useMode == UseMode.IDLE && fake.isUsingItem()) {
			fake.clearActiveItem();
			setUsingState(false, useHand);
		}
	}

	/** Whether the fake player currently exists (cX.java:286-296 {@code aam}). */
	public boolean exists() {
		return fake != null;
	}

	/** The fake player entity, or null (cX.java:466-468 {@code aan}). */
	public OtherClientPlayerEntity getFakePlayer() {
		return fake;
	}

	/** The active use hand (cX.java:470-472 {@code aap}). */
	public Hand getUseHand() {
		return useHand;
	}

	/** The active use mode (cX.java:568-570 {@code aao}). */
	public UseMode getUseMode() {
		return useMode;
	}

	/**
	 * Pre-attack handler (cX.java:1319-1441 {@code aau} on {@code hw$tv},
	 * fired at the HEAD of {@code PlayerEntity.attack} by the bootstrap
	 * InteractionEventBridgeMixin:21-37): only for attacks on the fake player.
	 * Always performs the wind-burst jump, then — while the fake is shielding
	 * in the use hand and the attacker stands behind it — reacts to a
	 * blocking-disabling weapon with a shield cooldown, otherwise damages the
	 * fake with a player-attack source.
	 */
	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isInGame()) {
			return;
		}
		if (event.target() != fake) {
			return;
		}
		windBurstJump();
		boolean shieldUsing = useMode == UseMode.SHIELD && fake.isUsingItem()
				&& fake.getActiveHand() == useHand;
		boolean behind = isBehind(fake, event.player());
		if (shieldUsing && behind) {
			if (disablesBlocking(event.player().getMainHandStack())) {
				fake.clearActiveItem();
				setUsingState(false, useHand);
				WeaponComponent weapon = event.player().getMainHandStack()
						.get(DataComponentTypes.WEAPON);
				if (weapon != null) {
					fake.getItemCooldownManager().set(Items.SHIELD.getDefaultStack(),
							(int) (weapon.disableBlockingForSeconds() * 20.0f));
				}
			}
			return;
		}
		fake.onDamaged(client.world.getDamageSources().playerAttack(event.player()));
	}

	/**
	 * Spawn hook (cX.java:474-531 {@code aak}): discards any previous entity,
	 * creates the fake player with a random UUID and the "Name" value, copies
	 * position/rotation, syncs yaw, copies the armor slots plus the main hand
	 * when "Copy Inventory" is on, always copies the off hand, adds the entity
	 * to the world and applies the three status effects.
	 */
	private void spawn() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isInGame()) {
			return;
		}
		remove();
		fake = new OtherClientPlayerEntity(client.world,
				new GameProfile(UUID.randomUUID(), profileName()));
		fake.copyPositionAndRotation(client.player);
		syncYaw();
		if (copyInventory.getValue()) {
			for (int slot = 0; slot < 4; slot++) {
				ItemStack stack = client.player.getInventory().getStack(COPY_INVENTORY_BASE + slot);
				fake.getInventory().setStack(COPY_INVENTORY_BASE + slot,
						stack.isEmpty() ? ItemStack.EMPTY : stack.copy());
			}
			fake.setStackInHand(Hand.MAIN_HAND, client.player.getMainHandStack().copy());
		}
		fake.setStackInHand(Hand.OFF_HAND, client.player.getOffHandStack().copy());
		client.world.addEntity(fake);
		fake.addStatusEffect(new StatusEffectInstance(StatusEffects.REGENERATION,
				EFFECT_DURATION_TICKS, 2));
		fake.addStatusEffect(new StatusEffectInstance(StatusEffects.ABSORPTION,
				EFFECT_DURATION_TICKS, 4));
		fake.addStatusEffect(new StatusEffectInstance(StatusEffects.RESISTANCE,
				EFFECT_DURATION_TICKS, 1));
	}

	/**
	 * Remove hook (cX.java:533-566 {@code aaB}): removes the entity from the
	 * world (when one is loaded), marks it removed with DISCARDED and drops
	 * the reference.
	 */
	private void remove() {
		if (fake == null) {
			return;
		}
		ClientWorld world = MinecraftClient.getInstance().world;
		if (world != null) {
			world.removeEntity(fake.getId(), Entity.RemovalReason.DISCARDED);
		}
		fake.setRemoved(Entity.RemovalReason.DISCARDED);
		fake = null;
	}

	/**
	 * Yaw sync (cX.java:424-449 {@code aaA}): mirrors the local player's yaw
	 * and pitch onto the fake player, including the previous-value fields,
	 * body yaw and head yaw.
	 */
	private static void syncYaw() {
		if (fake == null) {
			return;
		}
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		fake.setYaw(player.getYaw());
		fake.setPitch(player.getPitch());
		fake.lastYaw = fake.getYaw();
		fake.lastPitch = fake.getPitch();
		fake.lastBodyYaw = fake.bodyYaw = fake.getYaw();
		fake.headYaw = fake.getYaw();
		fake.lastHeadYaw = fake.headYaw;
	}

	/**
	 * Living-flag helper (cX.java:613-657 {@code aay}): flag 1 = using item,
	 * flag 2 = off-hand active (only while using with the off hand). Routed
	 * through the bootstrap accessor's {@code callSetLivingEntityFlag}.
	 */
	private static void setUsingState(boolean using, Hand hand) {
		if (fake == null) {
			return;
		}
		LivingEntityAccessor accessor = (LivingEntityAccessor) fake;
		accessor.opengrim$setLivingFlag(1, using);
		accessor.opengrim$setLivingFlag(2, using && hand == Hand.OFF_HAND);
	}

	/**
	 * Use eligibility (cX.java:963-1021 {@code aax}): empty is never eligible,
	 * shield mode needs a shield and custom mode needs a use action in the
	 * {@code cX$st} switch map — {@code UseAction.EAT} or
	 * {@code UseAction.DRINK} (cX$st.class: {@code uFllB[EAT] = 1},
	 * {@code uFllB[DRINK] = 2}; the switch returns true for cases 1 and 2).
	 */
	private static boolean isUseEligible(ItemStack stack, UseMode mode) {
		if (stack.isEmpty()) {
			return false;
		}
		if (mode == UseMode.SHIELD) {
			return stack.isOf(Items.SHIELD);
		}
		if (mode != UseMode.CUSTOM) {
			return false;
		}
		UseAction action = stack.getUseAction();
		return action == UseAction.EAT || action == UseAction.DRINK;
	}

	/**
	 * Wind-burst jump (cX.java:1151-1233 {@code aaz}): singleplayer only
	 * ({@code isConnectedToLocalServer}), requires a wind-burst item and a
	 * falling, non-gliding player; the boost is the static table up to level 3
	 * and {@code 1.5 + (level - 1) * 0.35} above it. Also zeroes fall
	 * distance.
	 */
	private void windBurstJump() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!client.isConnectedToLocalServer()) {
			return;
		}
		ClientPlayerEntity player = client.player;
		ItemStack stack = player.getMainHandStack();
		int level = windBurstLevel(stack);
		if (level <= 0) {
			return;
		}
		if (player.fallDistance <= 1.5 || player.isGliding()) {
			return;
		}
		if (level <= WIND_BURST_JUMP.length) {
			player.setVelocity(0.0, WIND_BURST_JUMP[level - 1], 0.0);
		} else {
			player.setVelocity(0.0, WIND_BURST_BASE + (level - 1) * WIND_BURST_STEP, 0.0);
		}
		player.fallDistance = 0.0;
	}

	/**
	 * Wind-burst level (cX.java:1210 {@code jh.bCh(stack, Enchantments.WIND_BURST)}).
	 * The {@code jc.bzq} gate is the same lookup with {@code > 0}; the helper
	 * is native in the original and is mirrored with
	 * {@code EnchantmentHelper.getLevel} (WaterSpeed convention).
	 */
	private static int windBurstLevel(ItemStack stack) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null) {
			return 0;
		}
		try {
			Registry<Enchantment> registry = client.world.getRegistryManager()
					.getOrThrow(RegistryKeys.ENCHANTMENT);
			return registry.getOptional(Enchantments.WIND_BURST)
					.map(entry -> EnchantmentHelper.getLevel(entry, stack))
					.orElse(0);
		} catch (Exception ignored) {
			return 0;
		}
	}

	/**
	 * Distance check (jg.java:368-391 {@code jg.bBL}): the attacker stands
	 * behind the fake when the horizontal direction from the fake to the
	 * attacker dotted with {@code fake.getRotationVector(0, height)} is
	 * negative.
	 */
	private static boolean isBehind(Entity from, Entity target) {
		Vec3d look = from.getRotationVector(0.0f, from.getHeight());
		Vec3d delta = target.getEntityPos().subtract(from.getEntityPos());
		Vec3d horizontal = new Vec3d(delta.x, 0.0, delta.z).normalize();
		return horizontal.dotProduct(look) < 0.0;
	}

	/**
	 * Weapon check (jc.java:492-527 {@code jc.bzo}): the WEAPON component is
	 * present and disables blocking for more than zero seconds.
	 */
	private static boolean disablesBlocking(ItemStack stack) {
		WeaponComponent weapon = stack.get(DataComponentTypes.WEAPON);
		return weapon != null && weapon.disableBlockingForSeconds() > 0.0f;
	}

	/**
	 * The "Name" value truncated to the decrypted max length 32 (cX.java:101
	 * {@code .Un(32)}; StringSetting has no max length, same treatment as
	 * AutoLogout's fI name).
	 */
	private String profileName() {
		String value = name.getValue();
		return value.length() > 32 ? value.substring(0, 32) : value;
	}

	/**
	 * The original's {@code gg.bab()} in-game gate: player, world, interaction
	 * manager and network handler all present.
	 */
	private static boolean isInGame() {
		MinecraftClient client = MinecraftClient.getInstance();
		return client.player != null && client.world != null
				&& client.interactionManager != null && client.getNetworkHandler() != null;
	}
}
