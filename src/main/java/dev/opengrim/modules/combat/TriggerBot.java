package dev.opengrim.modules.combat;

import java.lang.reflect.Field;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.Collections;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.util.Hand;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;

/**
 * Trigger Bot (registry sixtwo.fF): "Automatically hits entity when in range".
 *
 * <p>Port of sixtwo.fF (payload-decrypted/sixtwo/fF.java:74-491 constructor;
 * tick aST(gH$th) fF.java:508-509 at HIGH priority, visibility aSU/aSV/aSW
 * fF.java:515-517; spec analysis/specs/casesafe/handlers/fF_.md). Settings in
 * declaration order: Target (cF entity filter, OCdZM preset, default
 * {PLAYER}), Items To Use (Weapon Only / Custom Slots), Slots (cz hotbar set,
 * default empty), Hit Delay Mode (Item Cooldown / Timer), Cooldown
 * 0.01/0.0-1.0/0.9 (visible with Item Cooldown), Timer 1.0/0.0-1000.0/600.0
 * " ms" (visible with Timer), Attack Options (Un Press Shield / Simulate
 * Clicks), Target Options (Ignore Walls / Ignore Friends / Ignore Naked /
 * Ignore In Damage Tick / Ignore When Shielding), Critical Mode (None /
 * Prioritize Crits / Only Crits), Cancel In Screens (false), Cancel On Use
 * (false), Cancel Use Mode (All Items / Allow Shielding, visible with Cancel
 * On Use), Range 0.01/1.5-6.0/3.0 " blocks", When Holding (false), Hold Key
 * (mouse button 0), Upper Cut (false).
 *
 * <p>Recovered and ported 1:1: the crosshair raycast {@code ox.cHn}
 * (ox.java:83-218, caster = camera entity, direction = {@code ox.cHr} =
 * pending rotation {@code qL.dbX} (qL.java:106-108) or the camera entity's
 * interpolated rotation {@code ov.cGA} (ov.java:228-267), spectator bypass in
 * the ray predicate, wall clamp, expanded search box, range² max distance),
 * the cF.VX target filter (cF.java:229-267) over the {@code jg$tJ.OCdZM}
 * candidate universe {@code jg.bBT} (jg.java:1400-1428; preset contents per
 * dY_.md:43-46), the crit-environment check {@code iX.bxM} (iX.java:482-582)
 * including the cobweb scan {@code jg.bBs} (jg.java:1189-1258), and the
 * mouse-button Hold Key poll (cD setting over the mA mouse enum, mA.java:171;
 * {@link KeybindSetting#isPressed()} uses {@code glfwGetMouseButton} for
 * mouse codes — same helper convention as ClickAction.java:155-163).
 *
 * <p>Labeled stand-ins (aST's decision body is VM-resident — spec fF_.md
 * "Unrecovered"; the gate order is part of the reconstruction, the aST pool
 * lists the referenced tokens but does not pin the control flow): the fF
 * predicate contents beyond cF.VX (Ignore Friends / Naked / Shielding / In
 * Damage Tick checks and isAlive; the pool proves only that the settings and
 * fg.aIT are read), the crit-mode semantics
 * (Prioritize/Only Crits branches; None attacks unconditionally) and the
 * Upper Cut jump (0.15 vy, same stand-in as Criticals.java:130), Simulate
 * Clicks (attack-key pulse), Un Press Shield (useKey release), the attack
 * execution (interactionManager.attackEntity + swing), the aSU/aSV/aSW
 * visibility conditions (Hit Delay Mode / Items To Use wiring), the hit-delay
 * thresholds (Cooldown = attack-cooldown fraction, Timer = ms since last hit)
 * and the Target Lock cross-check (fg.aIT reference in the tick pool).
 *
 * <p>Not ported: {@code oV.cLb(double)} range transform (native, ox.java:123)
 * [U]; the fG (W-Tap) {@code HrnPx}/{@code QYvrB}/{@code deLoo} and fH (Aim
 * Assist) {@code aTx}/{@code JXduj} interplays (pool-proven reads, semantics
 * unrecovered) [U].
 *
 * <p>Framework limitation (labeled): the original's {@code cF} "Target"
 * entity-type multi-select and {@code cz} "Slots" hotbar set have no
 * settings-API equivalent — selection lives in {@link #getEntityTypes()} /
 * {@link #addEntityType(EntityType)} / {@link #removeEntityType(EntityType)}
 * and {@link #getSlots()} / {@link #addSlot(int)} / {@link #removeSlot(int)}
 * (same approximation as AntiInvisible); the aSW visibility gate on the Slots
 * widget is not expressible and is folded into the Custom Slots check. cz's
 * default set is empty (cz.java:26), so Custom Slots matches nothing until
 * slots are added. Trace 2026-10-17: aST 6x (tick handler), otherwise class
 * load only.
 */
public class TriggerBot extends Module {
	/** cF selected set (sulLA), default {PLAYER} (cF.java:34-36). */
	private final Set<EntityType<?>> selected = new HashSet<>(List.of(EntityType.PLAYER));
	/**
	 * cF candidate universe (AcnID): the {@code jg$tJ.OCdZM} preset seeded by
	 * {@code cF.VS} = {@code jg.bBT()} (jg.java:1400-1428; preset contents
	 * recovered in dY_.md:43-46).
	 */
	private final Set<EntityType<?>> universe = livingUniverse();
	/** cz hotbar slot set (vTMHw), default empty (cz.java:26). */
	private final Set<Integer> slots = new HashSet<>();

	private final ModeSetting itemsToUse = register(new ModeSetting("items_to_use",
			List.of("weapon_only", "custom_slots"), "weapon_only"));
	private final ModeSetting hitDelayMode = register(new ModeSetting("hit_delay_mode",
			List.of("item_cooldown", "timer"), "item_cooldown"));
	private final DoubleSetting cooldown = register(new DoubleSetting("cooldown", 0.01, 0.0, 1.0, 0.9, null));
	private final DoubleSetting timer = register(new DoubleSetting("timer", 1.0, 0.0, 1000.0, 600.0, " ms"));
	private final GroupSetting attackOptions = register(new GroupSetting("attack_options"));
	private final BoolSetting unPressShield = register(new BoolSetting("un_press_shield", false));
	private final BoolSetting simulateClicks = register(new BoolSetting("simulate_clicks", false));
	private final GroupSetting targetOptions = register(new GroupSetting("target_options"));
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", false));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));
	private final BoolSetting ignoreNaked = register(new BoolSetting("ignore_naked", false));
	private final BoolSetting ignoreInDamageTick = register(new BoolSetting("ignore_in_damage_tick", false));
	private final BoolSetting ignoreWhenShielding = register(new BoolSetting("ignore_when_shielding", false));
	private final ModeSetting criticalMode = register(new ModeSetting("critical_mode",
			List.of("none", "prioritize_crits", "only_crits"), "none"));
	private final BoolSetting cancelInScreens = register(new BoolSetting("cancel_in_screens", false));
	private final BoolSetting cancelOnUse = register(new BoolSetting("cancel_on_use", false));
	private final ModeSetting cancelUseMode = register(new ModeSetting("cancel_use_mode",
			List.of("all_items", "allow_shielding"), "all_items"));
	private final DoubleSetting range = register(new DoubleSetting("range", 0.01, 1.5, 6.0, 3.0, " blocks"));
	private final BoolSetting whenHolding = register(new BoolSetting("when_holding", false));
	private final KeybindSetting holdKey = register(new KeybindSetting("hold_key", 0));
	private final BoolSetting upperCut = register(new BoolSetting("upper_cut", false));

	private long lastHitMs;

	public TriggerBot() {
		super("trigger_bot", "Trigger Bot", "Automatically hits entity when in range", ModuleCategory.COMBAT);
		attackOptions.add(unPressShield);
		attackOptions.add(simulateClicks);
		targetOptions.add(ignoreWalls);
		targetOptions.add(ignoreFriends);
		targetOptions.add(ignoreNaked);
		targetOptions.add(ignoreInDamageTick);
		targetOptions.add(ignoreWhenShielding);
	}

	@Override
	public void onEnable() {
		lastHitMs = 0L;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		cooldown.setVisible("item_cooldown".equals(hitDelayMode.getValue())); // rIJAy.Vf(aSV), fF.java:488
		timer.setVisible("timer".equals(hitDelayMode.getValue())); // eImKU.Vf(aSU), fF.java:489
		cancelUseMode.setVisible(cancelOnUse.getValue()); // LQzFK.Vf(gBIsx::WF), fF.java:490
		if (cancelInScreens.getValue() && client.currentScreen != null) {
			return;
		}
		if (cancelOnUse.getValue() && player.isUsingItem()
				&& ("all_items".equals(cancelUseMode.getValue())
						|| !player.getActiveItem().isOf(net.minecraft.item.Items.SHIELD))) {
			return;
		}
		if (whenHolding.getValue() && !holdKey.isPressed()) {
			return;
		}
		if ("custom_slots".equals(itemsToUse.getValue()) && !inSlots(player)) {
			return;
		}
		Entity caster = client.getCameraEntity();
		if (caster == null) {
			return; // ox.cHn returns null without a caster (ox.java:98-103)
		}
		Entity hit = raycastHit(client, caster);
		if (!(hit instanceof LivingEntity living)) {
			return;
		}
		if (!hitDelayReady(player)) {
			return;
		}
		if (!critReady(player)) {
			return;
		}
		if (unPressShield.getValue() && player.isBlocking()) {
			client.options.useKey.setPressed(false);
		}
		if (simulateClicks.getValue()) {
			client.options.attackKey.setPressed(true);
			client.options.attackKey.setPressed(false);
		}
		attack(client, player, living);
		lastHitMs = System.currentTimeMillis();
	}

	/**
	 * Port of {@code ox.cHn} (ox.java:83-218) with fF's target predicate
	 * attached the way the tick pool proves it ({@code ox.cHk(Predicate)} +
	 * the {@code (Ljava/util/function/Predicate;)Lsixtwo/ox;} descriptor, i.e.
	 * the {@code cHo} wrapping: {@code instanceof LivingEntity} + predicate
	 * and'd into the ray filter, ox.java:541-605). Range feeds
	 * {@code ox.cHe} (VvKfB), Ignore Walls feeds {@code ox.cHf} (pPuZs).
	 * Direction is {@code ox.cHr()}: the pending silent rotation
	 * ({@code qL.dbX}, qL.java:106-108) when queued, else the camera entity's
	 * interpolated rotation ({@code ov.cGA}, ov.java:228-267). The native
	 * {@code oV.cLb} range transform (ox.java:123) is not applied [U].
	 */
	private Entity raycastHit(MinecraftClient client, Entity caster) {
		double reach = range.getValue();
		Vec3d start = caster.getEyePos();
		Rotation pending = RotationManager.get().rawPending();
		float tickDelta = client.getRenderTickCounter().getTickProgress(true);
		Rotation look = pending != null ? pending
				: Rotation.fromAngles(caster.getYaw(tickDelta), caster.getPitch(tickDelta));
		Vec3d dir = look.toDirection();
		Vec3d end = start.add(dir.multiply(reach));
		if (!ignoreWalls.getValue()) {
			var blockHit = client.world.raycast(new net.minecraft.world.RaycastContext(start, end,
					net.minecraft.world.RaycastContext.ShapeType.OUTLINE,
					net.minecraft.world.RaycastContext.FluidHandling.NONE, caster));
			if (blockHit.getType() == net.minecraft.util.hit.HitResult.Type.BLOCK) {
				double d = blockHit.getPos().squaredDistanceTo(start);
				if (d < reach * reach) {
					end = start.add(dir.multiply(Math.sqrt(d)));
				}
			}
		}
		Box search = caster.getBoundingBox().stretch(dir.multiply(reach)).expand(1.0, 1.0, 1.0);
		var hit = net.minecraft.entity.projectile.ProjectileUtil.raycast(caster, start, end, search,
				e -> e.isSpectator() || (e instanceof LivingEntity living && living.isAlive()
						&& matches(living) && passesFilters(living)),
				reach * reach);
		return hit == null ? null : hit.getEntity();
	}

	/**
	 * Port of cF.VX(entity) (cF.java:229-267, recovered in dY_.md:49-54): true
	 * only when the selected set is non-empty, the entity type is in the
	 * OCdZM candidate universe and the type is selected.
	 */
	public boolean matches(Entity entity) {
		if (entity == null || selected.isEmpty()) {
			return false;
		}
		EntityType<?> type = entity.getType();
		return universe.contains(type) && selected.contains(type);
	}

	/**
	 * Port of jg.bBT (jg.java:1400-1428) — the {@code jg$tJ.OCdZM} preset
	 * seeded by cF.VS: every EntityType whose generic parameter is a
	 * LivingEntity class, minus ARMOR_STAND.
	 */
	private static Set<EntityType<?>> livingUniverse() {
		Set<EntityType<?>> set = new LinkedHashSet<>();
		for (Field field : EntityType.class.getDeclaredFields()) {
			if (field.getType() != EntityType.class) {
				continue;
			}
			field.setAccessible(true);
			try {
				Object value = field.get(null);
				Type generic = field.getGenericType();
				if (!(value instanceof EntityType) || !(generic instanceof ParameterizedType parameterized)
						|| parameterized.getActualTypeArguments().length != 1
						|| !(parameterized.getActualTypeArguments()[0] instanceof Class<?> clazz)) {
					continue;
				}
				if (!LivingEntity.class.isAssignableFrom(clazz)) {
					continue;
				}
				set.add((EntityType<?>) value);
			} catch (IllegalAccessException | RuntimeException ignored) {
				// jg.bBT swallows the reflective failure (jg.java:1422-1424);
				// RuntimeException guards mapped-runtime reflection quirks.
			}
		}
		set.remove(EntityType.ARMOR_STAND);
		return set;
	}

	private boolean passesFilters(LivingEntity entity) {
		if (!entity.isAlive()) {
			return false;
		}
		if (ignoreInDamageTick.getValue() && entity.hurtTime > 0) {
			return false;
		}
		if (ignoreWhenShielding.getValue() && entity.isBlocking()) {
			return false;
		}
		if (ignoreNaked.getValue() && entity instanceof net.minecraft.entity.player.PlayerEntity p
				&& p.getEquippedStack(net.minecraft.entity.EquipmentSlot.HEAD).isEmpty()
				&& p.getEquippedStack(net.minecraft.entity.EquipmentSlot.CHEST).isEmpty()
				&& p.getEquippedStack(net.minecraft.entity.EquipmentSlot.LEGS).isEmpty()
				&& p.getEquippedStack(net.minecraft.entity.EquipmentSlot.FEET).isEmpty()) {
			return false;
		}
		if (ignoreFriends.getValue() && entity instanceof net.minecraft.entity.player.PlayerEntity p
				&& dev.opengrim.util.FriendsManager.isFriend(p.getGameProfile().name())) {
			return false;
		}
		Module lock = ModuleManager.get().byId("target_lock");
		if (lock != null && lock.isEnabled() && lock instanceof TargetLock targetLock
				&& targetLock.lockedTarget() != null && targetLock.lockedTarget() != entity) {
			return false;
		}
		return true;
	}

	/** cz.Uy(): current hotbar slot is in the Slots set (default empty). */
	private boolean inSlots(ClientPlayerEntity player) {
		return slots.contains(player.getInventory().getSelectedSlot());
	}

	/** Live selection of the "Target" list (default PLAYER). */
	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(selected);
	}

	public void addEntityType(EntityType<?> type) {
		selected.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		selected.remove(type);
	}

	/** Live hotbar slot set ("Slots", cz.vTMHw — default empty). */
	public Set<Integer> getSlots() {
		return Collections.unmodifiableSet(slots);
	}

	public void addSlot(int slot) {
		slots.add(slot);
	}

	public void removeSlot(int slot) {
		slots.remove(slot);
	}

	private boolean hitDelayReady(ClientPlayerEntity player) {
		if ("timer".equals(hitDelayMode.getValue())) {
			return System.currentTimeMillis() - lastHitMs >= Math.round(timer.getValue());
		}
		return player.getAttackCooldownProgress(0.0f) >= cooldown.getValue().floatValue();
	}

	private boolean critReady(ClientPlayerEntity player) {
		String mode = criticalMode.getValue();
		if ("none".equals(mode)) {
			return true;
		}
		boolean blocked = critBlocked(player);
		boolean falling = !player.isOnGround() && player.getVelocity().y < 0.0 && !blocked;
		if (upperCut.getValue() && player.isOnGround() && !blocked) {
			player.setVelocity(player.getVelocity().x, 0.15, player.getVelocity().z);
			return "prioritize_crits".equals(mode);
		}
		if ("only_crits".equals(mode)) {
			return falling;
		}
		return falling || player.isOnGround();
	}

	/**
	 * Port of iX.bxM (iX.java:482-582) — the "no crit possible" environment
	 * check, in the original's order: blindness, levitation, cobweb
	 * ({@code jg.bBs}), submerged in water, in lava, climbing, flying.
	 */
	private static boolean critBlocked(ClientPlayerEntity player) {
		return player.hasStatusEffect(StatusEffects.BLINDNESS)
				|| player.hasStatusEffect(StatusEffects.LEVITATION)
				|| inCobweb(player)
				|| player.isSubmergedInWater()
				|| player.isInLava()
				|| player.isClimbing()
				|| player.getAbilities().flying;
	}

	/**
	 * Port of jg.bBs (jg.java:1189-1258): true when any COBWEB block position
	 * inside the entity's bounding box holds cobweb.
	 */
	private static boolean inCobweb(LivingEntity entity) {
		Box box = entity.getBoundingBox();
		BlockPos.Mutable pos = new BlockPos.Mutable();
		for (int x = MathHelper.floor(box.minX); x <= MathHelper.floor(box.maxX); x++) {
			for (int y = MathHelper.floor(box.minY); y <= MathHelper.floor(box.maxY); y++) {
				for (int z = MathHelper.floor(box.minZ); z <= MathHelper.floor(box.maxZ); z++) {
					pos.set(x, y, z);
					if (box.contains(pos) && entity.getEntityWorld().getBlockState(pos).isOf(Blocks.COBWEB)) {
						return true;
					}
				}
			}
		}
		return false;
	}

	/**
	 * Mouse-button-aware poll for the Hold Key setting: cD wraps the mA mouse
	 * enum (mA.java:171-177), so codes 0..6 are mouse buttons and are read by
	 * {@link KeybindSetting#isPressed()}.
	 */
	public static void attack(MinecraftClient client, ClientPlayerEntity player, Entity target) {
		client.interactionManager.attackEntity(player, target);
		player.swingHand(Hand.MAIN_HAND);
	}

	public static Box reachBox(Vec3d pos, double reach) {
		return new Box(pos.subtract(reach, reach, reach), pos.add(reach, reach, reach));
	}

	static float angleTo(ClientPlayerEntity player, Entity target) {
		Vec3d toTarget = target.getEyePos().subtract(player.getEyePos()).normalize();
		Vec3d look = RotationManager.get().effectiveRotation().toDirection().normalize();
		double dot = MathHelper.clamp(toTarget.dotProduct(look), -1.0, 1.0);
		return (float) Math.toDegrees(Math.acos(dot));
	}
}
