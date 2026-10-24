package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.combat.AutoPotion;
import dev.opengrim.modules.world.AutoTrap;
import dev.opengrim.modules.world.AutoWeb;
import dev.opengrim.modules.world.Nuker;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.modules.utility.AntiBot;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.mob.Monster;
import net.minecraft.entity.player.PlayerEntity;
import dev.opengrim.util.FriendsManager;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Kill Aura (registry sixtwo.fr): "Automatically attacks entities".
 *
 * <p>Port of sixtwo.fr (analysis/decompiled/casesafe/payload-decrypted/sixtwo/fr.java;
 * bytecode cross-checked via javap of jar-casesafe/sixtwo/fr.class). The constructor
 * (fr.java:131-982) builds 60 setting wrappers, ported here in declaration order:
 * Search Distance 0.1/2.5-50/6.0 " blocks" (cC, fr.java:150),
 * Aim Mode Normal/Snap (ct, fr.java:160-169, default Normal),
 * Aim Smoothing Mode Unrestricted/Adaptive (ct, fr.java:189-213, default
 * Unrestricted), Sprint Mode None/Default (ct, fr.java:226-236, default
 * None), Move Correction true (cJ, fr.java:253), Correction Type
 * Silent/Focused (ct SO(1), fr.java:270-287, default Focused),
 * Critical Mode None/Prioritize Crits/Only Crits (ct SO(1), fr.java:302-333,
 * default Prioritize Crits), Hit Delay Mode Item Cooldown/Timer (ct,
 * fr.java:349-365), Cooldown 0.01/0-1/0.9 (cA, fr.java:375),
 * Timer 1/0-1000/600 " ms" (cA, fr.java:376), Attack Options group (cv,
 * fr.java:392) with Break Shield / Un Press Shield / Simulate Clicks (cw,
 * fr.java:406-440), Target Options group (cv, fr.java:456) with Ignore
 * Walls / Friends / Naked / In Damage Tick / When Shielding (cw,
 * fr.java:470-546), Targets multiselect (cF .VS(jg$tJ.OCdZM), fr.java:555),
 * Items To Use Weapon Only/Custom Slots (ct, fr.java:569-596), Slots (cz,
 * fr.java:597), Target Renderer false (cJ, fr.java:612), Target Renderer
 * Color (cG .Uf(bjG().bis()), fr.java:633), Render Mode Capture
 * Mark/Capture Rounded/Capture Triangle/Dashed Triangle (ct SO(1),
 * fr.java:648-714, default Capture Rounded), Attack Distance
 * 0.01/2.5-5/3.0 " blocks" (cC, fr.java:731), Target Priority Distance/Health
 * (ct, fr.java:748-766), Attack Point Best Vector/Nearest Vector (ct,
 * fr.java:780-809 — no .SY() marker on either child, so the default is index 0
 * Best Vector), Cancel In Screens false (cJ, fr.java:828), Cancel On Use false
 * (cJ, fr.java:843), Cancel Use Mode All Items/Allow Shielding (ct,
 * fr.java:860-888, default All Items), Change View false (cJ, fr.java:901),
 * Target Mode Switch/Locked (ct SO(1), fr.java:914-930, default Locked),
 * Visualise Rotation true (cJ, fr.java:950), Limit FOV false (cJ,
 * fr.java:961), FOV 1/10-360/180 " deg" (cC, fr.java:962).
 *
 * <p>Visibility wiring ports the {@code Vf} gates (fr.java:967-974):
 * Correction Type with Move Correction, FOV with Limit FOV, Slots with
 * Custom Slots, color and Render Mode with Target Renderer, Cooldown with
 * Item Cooldown, Timer with Timer, Cancel Use Mode with Cancel On Use.
 *
 * <p>Attack arbitration ports the Java-visible pause gate sixtwo.fr#aNB
 * (fr.java:1001-1121) exactly: the aura yields while Nuker is mining
 * ({@code dI.amm() != null}, fr.java:1018-1029 — {@link Nuker#isMining()}),
 * while Auto Web ({@code eK.aAa()}) or Auto Trap ({@code eJ.aAa()}) report
 * active (fr.java:1035-1065; {@code aAa()} is native, ported as isEnabled —
 * labeled guess), and while Auto Potion is enabled and its plan is live
 * ({@code fl.bag() && fl.aJQ()}, fr.java:1074-1097 —
 * {@link AutoPotion#isTriggerReady()}). The {@code rD.dlZ().dbt()}
 * arbitration gate (fr.java:1102-1112) has no counterpart — see
 * analysis/docs/PARITY.md divergences.
 *
 * <p>Target selection ports the {@code og}/{@code oh} framework
 * (og.java:30-135, oh.class javap): range is the eye-to-bounding-box distance
 * {@code jg.bBI} (jg.java:278-281, bBJ/bBK clamp-point); Locked keeps the
 * current target while it stays within Search Distance ({@code og.cCT},
 * og.java:94-135); the attack gate is the eye-to-point distance
 * {@code jg.bBG} (jg.java:573-594) against Attack Distance. The "Targets"
 * cF multiselect is approximated by a players/mobs/all mode: the original
 * default preset OCdZM is {@code jg.fbEDU} = every entity type minus the
 * projectile/decoration list (jg.java:600-634), i.e. all living entities but
 * armor stands once intersected with the oh LivingEntity stream — the "all"
 * mode (and its default) mirrors that.
 *
 * <p>Each attack submits a silent rotation for the target through
 * {@link RotationManager} (port of sixtwo.qL#dbI), at the silent-aim tier
 * (cf. {@code mw.uWTdl}). The cached target is exported via
 * {@link #getTarget} (port of {@code cslIX}/{@code aOQ}, fr.java:121,
 * fr.java:1214-1216).
 *
 * <p>Behaviors not recoverable from the decompile (native {@code pe/pc/pd}
 * attack-point engine, aim smoothing math, sprint/move-correction movement,
 * crit forcing, axe-swap for Break Shield, target render shapes aNs/aNt,
 * theme-fed color default, encrypted Targets/Slots contents) are listed in
 * analysis/docs/PARITY.md.
 */
public class KillAura extends Module {
	private final DoubleSetting searchDistance = register(new DoubleSetting("search_distance",
			0.1, 2.5, 50.0, 6.0, " blocks"));
	private final ModeSetting aimMode = register(new ModeSetting("aim_mode",
			List.of("normal", "snap"), "normal"));
	private final ModeSetting aimSmoothingMode = register(new ModeSetting("aim_smoothing_mode",
			List.of("unrestricted", "adaptive"), "unrestricted"));
	private final ModeSetting sprintMode = register(new ModeSetting("sprint_mode",
			List.of("none", "default"), "none"));
	private final BoolSetting moveCorrection = register(new BoolSetting("move_correction", true));
	private final ModeSetting correctionType = register(new ModeSetting("correction_type",
			List.of("silent", "focused"), "focused"));
	private final ModeSetting criticalMode = register(new ModeSetting("critical_mode",
			List.of("none", "prioritize_crits", "only_crits"), "prioritize_crits"));
	private final ModeSetting hitDelayMode = register(new ModeSetting("hit_delay_mode",
			List.of("item_cooldown", "timer"), "item_cooldown"));
	private final DoubleSetting cooldown = register(new DoubleSetting("cooldown",
			0.01, 0.0, 1.0, 0.9, null));
	private final DoubleSetting timer = register(new DoubleSetting("timer",
			1.0, 0.0, 1000.0, 600.0, " ms"));
	private final GroupSetting attackOptions = register(new GroupSetting("attack_options"));
	private final BoolSetting breakShield = register(new BoolSetting("break_shield", false));
	private final BoolSetting unPressShield = register(new BoolSetting("un_press_shield", false));
	private final BoolSetting simulateClicks = register(new BoolSetting("simulate_clicks", false));
	private final GroupSetting targetOptions = register(new GroupSetting("target_options"));
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", false));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));
	private final BoolSetting ignoreNaked = register(new BoolSetting("ignore_naked", false));
	private final BoolSetting ignoreInDamageTick = register(new BoolSetting("ignore_in_damage_tick", false));
	private final BoolSetting ignoreWhenShielding = register(new BoolSetting("ignore_when_shielding", false));
	// The "Targets" cF multiselect is approximated by a players/mobs/all mode
	// (documented divergence). The original default preset is jg$tJ.OCdZM =
	// jg.fbEDU (jg.java:600-634): every entity type minus the projectile/
	// decoration list, which within oh's LivingEntity-only stream equals "all
	// living entities except armor stands" — the "all" mode below.
	private final ModeSetting targets = register(new ModeSetting("targets",
			List.of("players", "mobs", "all"), "all"));
	private final ModeSetting itemsToUse = register(new ModeSetting("items_to_use",
			List.of("weapon_only", "custom_slots"), "weapon_only"));
	// cz "Slots" (fr.java:597) is a hotbar-slot set with no OpenGrim widget
	// (same approximation as TriggerBot): live set, empty by default
	// (cz.java:26), so Custom Slots matches nothing until slots are added.
	private final Set<Integer> slots = new HashSet<>();
	private final BoolSetting targetRenderer = register(new BoolSetting("target_renderer", false));
	// Default is theme-fed in the original (Uf(rD.dlM().bjG().bis()),
	// fr.java:633); white stands in until the theme value is recovered.
	private final ColorSetting targetRendererColor = register(new ColorSetting("target_renderer_color", 0xFFFFFFFF));
	private final ModeSetting renderMode = register(new ModeSetting("render_mode",
			List.of("capture_mark", "capture_rounded", "capture_triangle", "dashed_triangle"), "capture_rounded"));
	private final DoubleSetting attackDistance = register(new DoubleSetting("attack_distance",
			0.01, 2.5, 5.0, 3.0, " blocks"));
	private final ModeSetting targetPriority = register(new ModeSetting("target_priority",
			List.of("distance", "health"), "distance"));
	private final ModeSetting attackPoint = register(new ModeSetting("attack_point",
			List.of("best_vector", "nearest_vector"), "best_vector"));
	private final BoolSetting cancelInScreens = register(new BoolSetting("cancel_in_screens", false));
	private final BoolSetting cancelOnUse = register(new BoolSetting("cancel_on_use", false));
	private final ModeSetting cancelUseMode = register(new ModeSetting("cancel_use_mode",
			List.of("all_items", "allow_shielding"), "all_items"));
	private final BoolSetting changeView = register(new BoolSetting("change_view", false));
	private final ModeSetting targetMode = register(new ModeSetting("target_mode",
			List.of("switch", "locked"), "locked"));
	private final BoolSetting visualiseRotation = register(new BoolSetting("visualise_rotation", true));
	private final BoolSetting limitFov = register(new BoolSetting("limit_fov", false));
	private final DoubleSetting fov = register(new DoubleSetting("fov",
			1.0, 10.0, 360.0, 180.0, " deg"));

	private LivingEntity lockedTarget;
	private LivingEntity currentTarget;
	private long lastAttackMs;

	public KillAura() {
		super("kill_aura", "Kill Aura", "Automatically attacks entities", ModuleCategory.COMBAT);
		setBind(82); // registry metadata.txt:fr key=5 bind=82
		attackOptions.add(breakShield);
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
		lastAttackMs = 0;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		// Visibility wiring ports the Vf gates (fr.java:967-974).
		correctionType.setVisible(moveCorrection.getValue());
		fov.setVisible(limitFov.getValue());
		targetRendererColor.setVisible(targetRenderer.getValue());
		renderMode.setVisible(targetRenderer.getValue());
		cooldown.setVisible("item_cooldown".equals(hitDelayMode.getValue()));
		timer.setVisible("timer".equals(hitDelayMode.getValue()));
		cancelUseMode.setVisible(cancelOnUse.getValue());
		// Port of sixtwo.fr#aNB (fr.java:1001-1121): the aura yields while
		// sibling modules own the current action.
		if (ModuleManager.get().byId("nuker") instanceof Nuker nuker && nuker.isMining()) {
			return;
		}
		if (ModuleManager.get().byId("auto_web") instanceof AutoWeb web && web.isEnabled()) {
			return;
		}
		if (ModuleManager.get().byId("auto_trap") instanceof AutoTrap trap && trap.isEnabled()) {
			return;
		}
		if (ModuleManager.get().byId("auto_potion") instanceof AutoPotion potion
				&& potion.isEnabled() && potion.isTriggerReady()) {
			return;
		}
		if (cancelInScreens.getValue() && client.currentScreen != null) {
			return;
		}
		if (cancelOnUse.getValue() && player.isUsingItem()
				&& ("all_items".equals(cancelUseMode.getValue())
						|| !player.getActiveItem().isOf(net.minecraft.item.Items.SHIELD))) {
			return;
		}
		if ("weapon_only".equals(itemsToUse.getValue()) && !isWeapon(player)) {
			return;
		}
		if ("custom_slots".equals(itemsToUse.getValue())
				&& !slots.contains(player.getInventory().getSelectedSlot())) {
			return;
		}
		double searchRange = searchDistance.getValue();
		double attackRange = attackDistance.getValue();
		float halfFov = limitFov.getValue() ? fov.getValue().floatValue() / 2.0f : 360.0f;

		// og.cCR/cCT (og.java:30-135): Locked retains the current target while
		// it is alive and stays within Search Distance (eye-to-bounding-box).
		LivingEntity target;
		if ("locked".equals(targetMode.getValue()) && lockedTarget != null
				&& lockedTarget.isAlive() && eyeDistanceToBox(player, lockedTarget) <= searchRange) {
			target = lockedTarget;
		} else {
			target = findTarget(client, player, searchRange, halfFov);
		}
		if ("locked".equals(targetMode.getValue())) {
			lockedTarget = target;
		}
		currentTarget = target;
		if (target == null) {
			return;
		}
		// jg.bBG (jg.java:573-594): the hit gate is the eye-to-point distance.
		Vec3d point = attackPoint(player, target);
		if (player.getEyePos().distanceTo(point) > attackRange) {
			return;
		}
		if (!hitDelayReady(player)) {
			return;
		}
		if (!criticalGate(player)) {
			return;
		}
		// Port of the sixtwo.fr#aNz -> qL#dbI submit: aim at the target through
		// the rotation manager before the attack lands.
		RotationManager.get().submitRotation(
				Rotation.lookingAt(player.getEyePos(), point).clamped(),
				RotationPriority.uWTdl, this);
		if (changeView.getValue()) {
			RotationManager.get().submitPosition(point, RotationPriority.uWTdl, this);
		}
		if (unPressShield.getValue() && player.isBlocking()) {
			client.options.useKey.setPressed(false);
		}
		if (simulateClicks.getValue()) {
			client.options.attackKey.setPressed(true);
			client.options.attackKey.setPressed(false);
		}
		TriggerBot.attack(client, player, target);
		lastAttackMs = System.currentTimeMillis();
	}

	/**
	 * Port of sixtwo.fr#aOQ (fr.java:1214-1216): exports the cached
	 * {@code cslIX} target (fr.java:121) for ESP consumers.
	 */
	public LivingEntity getTarget() {
		return currentTarget;
	}

	/**
	 * Attack Point selection ({@code pe} point engine with the {@code pc}/{@code pd}
	 * providers, fr.java:964-967 — native, unrecovered). Nearest Vector uses the
	 * bounding-box point closest to the eye ({@code jg.bBK} clamp, jg.java:558-563);
	 * Best Vector stands in with the box center. Both readings are labeled guesses.
	 */
	private Vec3d attackPoint(ClientPlayerEntity player, LivingEntity target) {
		Box box = target.getBoundingBox();
		if ("nearest_vector".equals(attackPoint.getValue())) {
			Vec3d eye = player.getEyePos();
			return new Vec3d(MathHelper.clamp(eye.x, box.minX, box.maxX),
					MathHelper.clamp(eye.y, box.minY, box.maxY),
					MathHelper.clamp(eye.z, box.minZ, box.maxZ));
		}
		return box.getCenter();
	}

	/** jg.bBI (jg.java:278-281): eye-to-bounding-box distance (closest box point). */
	private static double eyeDistanceToBox(ClientPlayerEntity player, Entity entity) {
		Vec3d eye = player.getEyePos();
		Box box = entity.getBoundingBox();
		Vec3d closest = new Vec3d(MathHelper.clamp(eye.x, box.minX, box.maxX),
				MathHelper.clamp(eye.y, box.minY, box.maxY),
				MathHelper.clamp(eye.z, box.minZ, box.maxZ));
		return eye.distanceTo(closest);
	}

	/** Live hotbar slot set ("Slots", cz.vTMHw — default empty). */
	public Set<Integer> getSlots() {
		return java.util.Collections.unmodifiableSet(slots);
	}

	public void addSlot(int slot) {
		slots.add(slot);
	}

	public void removeSlot(int slot) {
		slots.remove(slot);
	}

	private LivingEntity findTarget(MinecraftClient client, ClientPlayerEntity player, double reach, float halfFov) {
		Box box = TriggerBot.reachBox(player.getEyePos(), reach);
		List<Entity> rawCandidates;
		switch (targets.getValue()) {
			case "players" -> rawCandidates = List.copyOf(client.world.getPlayers());
			case "mobs" -> rawCandidates = client.world.getOtherEntities(player, box, e -> e instanceof Monster);
			// "all" mirrors the original default preset jg.fbEDU within oh's
			// LivingEntity stream: every living entity except armor stands.
			default -> rawCandidates = client.world.getOtherEntities(player, box,
					e -> e instanceof LivingEntity && !(e instanceof ArmorStandEntity));
		}
		List<LivingEntity> candidates = rawCandidates.stream()
				.filter(e -> e != player && e instanceof LivingEntity l && l.isAlive()
						&& eyeDistanceToBox(player, l) <= reach)
				.filter(e -> angleTo(player, e) <= halfFov)
				.filter(e -> !(e instanceof PlayerEntity p) || !ignoreFriends.getValue()
						|| !FriendsManager.isFriend(p.getGameProfile().name()))
				.filter(e -> !(e instanceof PlayerEntity p) || !AntiBot.isBotActive(p))
				.filter(e -> !ignoreNaked.getValue() || !isNaked(e))
				.filter(e -> !ignoreWalls.getValue() || player.canSee(e))
				.filter(e -> !ignoreInDamageTick.getValue() || !(e instanceof LivingEntity l) || l.hurtTime <= 0)
				.filter(e -> !ignoreWhenShielding.getValue() || !(e instanceof LivingEntity l) || !l.isBlocking())
				.map(e -> (LivingEntity) e)
				.toList();
		if ("health".equals(targetPriority.getValue())) {
			return candidates.stream()
					.min(Comparator.comparingDouble(LivingEntity::getHealth))
					.orElse(null);
		}
		return candidates.stream()
				.min(Comparator.comparingDouble(e -> eyeDistanceToBox(player, e)))
				.orElse(null);
	}

	private boolean hitDelayReady(ClientPlayerEntity player) {
		if ("timer".equals(hitDelayMode.getValue())) {
			return System.currentTimeMillis() - lastAttackMs >= timer.getValue();
		}
		return player.getAttackCooldownProgress(0.0f) >= cooldown.getValue().floatValue();
	}

	private boolean criticalGate(ClientPlayerEntity player) {
		String mode = criticalMode.getValue();
		if ("none".equals(mode)) {
			return true;
		}
		boolean critWindow = !player.isOnGround() && player.getVelocity().y < 0.0;
		if ("only_crits".equals(mode)) {
			return critWindow;
		}
		// prioritize_crits: hold off unless the target is already crittable, but
		// never lock up completely when the window never opens.
		return critWindow || player.isOnGround();
	}

	private static boolean isWeapon(ClientPlayerEntity player) {
		return player.getMainHandStack().contains(net.minecraft.component.DataComponentTypes.WEAPON);
	}

	private static boolean isNaked(Entity entity) {
		return entity instanceof PlayerEntity player
				&& player.getEquippedStack(EquipmentSlot.HEAD).isEmpty()
				&& player.getEquippedStack(EquipmentSlot.CHEST).isEmpty()
				&& player.getEquippedStack(EquipmentSlot.LEGS).isEmpty()
				&& player.getEquippedStack(EquipmentSlot.FEET).isEmpty();
	}

	private static float angleTo(ClientPlayerEntity player, Entity target) {
		Vec3d toTarget = target.getEyePos().subtract(player.getEyePos()).normalize();
		// Read back the effective (possibly silent) rotation, cf. dbC().cGH()
		// raycasts in fq.java:1069 and oC.java:294-295.
		Vec3d look = RotationManager.get().effectiveRotation().toDirection().normalize();
		double dot = MathHelper.clamp(toTarget.dotProduct(look), -1.0, 1.0);
		return (float) Math.toDegrees(Math.acos(dot));
	}
}
