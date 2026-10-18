package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.modules.utility.AntiBot;
import dev.opengrim.util.FriendsManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.mob.Monster;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Mace Aura (registry sixtwo.eP): "Automatically attacks with Mace".
 *
 * <p>Port of sixtwo.eP (payload-named-cfr/sixtwo/eP.java constructor id 120;
 * tick aBC(gH$th), pipeline aBI/aBJ/aBK, target aBP, gates aBL/aBM/aBN;
 * spec analysis/specs/handlers/eP.md). Settings in declaration order: Min
 * Fall Distance 0.1/1.5-12.0/4.0 " blocks", Targets, Target Options (Ignore
 * Friends / Ignore Naked / Ignore In Damage Tick), Target Priority
 * (Distance / Health), Attack Point (Best Vector / Nearest Vector), Hit
 * Distance 0.01/2.5-5.0/3.0 " blocks", Change Armor (false), Change View
 * (false), Limit FOV (false), FOV 1.0/10.0-360.0/180.0 " deg".
 *
 * <p>Aim uses {@link RotationManager} at {@link RotationPriority#uWTdl};
 * FOV reads use {@link RotationManager#effectiveRotation()}.
 *
 * <p>Scanner filters ported from og$vf.dvZ (handlers/eP.md): unconditional
 * self/dead/invulnerable (dwc) and AntiBot-verdict (dwd: rD.dml().aLp) drops,
 * optional naked (dwh), Friends list (dwe, gated by "Ignore Friends" - both
 * original friend stores map onto {@link FriendsManager}), in-damage-tick
 * (hurtTime), and the FOV cone (dwj, gated by "Limit FOV"). Range gate is the
 * eye-to-bounding-box distance (jg.bBJ), and the cF "Targets" universe is all
 * living entity types minus armor stands (jg.bBT/OCdZM) with players as the
 * default selection; the coarse players/mobs/all mode mapping is a documented
 * divergence. og.cCQ Target Lock preference is mirrored.
 */
public class MaceAura extends Module {
	private final DoubleSetting minFallDistance = register(new DoubleSetting("min_fall_distance", 0.1, 1.5, 12.0, 4.0, " blocks"));
	private final ModeSetting targets = register(new ModeSetting("targets",
			List.of("players", "mobs", "all"), "players"));
	private final GroupSetting targetOptions = register(new GroupSetting("target_options"));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));
	private final BoolSetting ignoreNaked = register(new BoolSetting("ignore_naked", false));
	private final BoolSetting ignoreInDamageTick = register(new BoolSetting("ignore_in_damage_tick", false));
	private final ModeSetting targetPriority = register(new ModeSetting("target_priority",
			List.of("distance", "health"), "distance"));
	private final ModeSetting attackPoint = register(new ModeSetting("attack_point",
			List.of("best_vector", "nearest_vector"), "best_vector"));
	private final DoubleSetting hitDistance = register(new DoubleSetting("hit_distance", 0.01, 2.5, 5.0, 3.0, " blocks"));
	private final BoolSetting changeArmor = register(new BoolSetting("change_armor", false));
	private final BoolSetting changeView = register(new BoolSetting("change_view", false));
	private final BoolSetting limitFov = register(new BoolSetting("limit_fov", false));
	private final DoubleSetting fov = register(new DoubleSetting("fov", 1.0, 10.0, 360.0, 180.0, " deg"));

	private LivingEntity current;

	public MaceAura() {
		super("mace_aura", "Mace Aura", "Automatically attacks with Mace", ModuleCategory.COMBAT);
		targetOptions.add(ignoreFriends);
		targetOptions.add(ignoreNaked);
		targetOptions.add(ignoreInDamageTick);
	}

	@Override
	public void onDisable() {
		current = null;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (!player.getMainHandStack().isOf(Items.MACE)) {
			return;
		}
		if (player.fallDistance < minFallDistance.getValue()) {
			return;
		}
		double reach = hitDistance.getValue();
		LivingEntity target = findTarget(client, player, reach);
		current = target;
		if (target == null) {
			return;
		}
		Vec3d point = "best_vector".equals(attackPoint.getValue())
				? target.getBoundingBox().getCenter() : target.getEyePos();
		RotationManager.get().submitRotation(
				Rotation.lookingAt(player.getEyePos(), point).clamped(), RotationPriority.uWTdl, this);
		if (changeView.getValue()) {
			RotationManager.get().submitPosition(point, RotationPriority.uWTdl, this);
		}
		TriggerBot.attack(client, player, target);
	}

	public LivingEntity currentTarget() {
		return current;
	}

	private LivingEntity findTarget(MinecraftClient client, ClientPlayerEntity player, double reach) {
		float halfFov = limitFov.getValue() ? fov.getValue().floatValue() / 2.0f : 360.0f;
		Box box = TriggerBot.reachBox(player.getEyePos(), reach);
		List<Entity> base;
		switch (targets.getValue()) {
			case "mobs" -> base = client.world.getOtherEntities(player, box, e -> e instanceof Monster);
			case "all" -> base = client.world.getOtherEntities(player, box,
					e -> e instanceof LivingEntity && !(e instanceof ArmorStandEntity));
			default -> base = new java.util.ArrayList<>(client.world.getPlayers());
		}
		AntiBot antiBot = antiBotModule();
		List<LivingEntity> candidates = base.stream()
				.filter(e -> e instanceof LivingEntity living && living.isAlive() && e != (Entity) player)
				.filter(e -> !isInvulnerableTarget(e))
				.filter(e -> eyeToBoxDistance(player, e) <= reach)
				.filter(e -> angleTo(player, e) <= halfFov)
				.filter(e -> !(e instanceof LivingEntity l) || !ignoreInDamageTick.getValue() || l.hurtTime == 0)
				.filter(e -> !ignoreNaked.getValue() || !isNaked(e))
				.filter(e -> !(e instanceof PlayerEntity p) || antiBot == null || !antiBot.isBot(p))
				.filter(e -> !(e instanceof PlayerEntity p) || !ignoreFriends.getValue()
						|| !FriendsManager.isFriend(p.getGameProfile().name()))
				.map(e -> (LivingEntity) e)
				.sorted("health".equals(targetPriority.getValue())
						? Comparator.comparingDouble(LivingEntity::getHealth)
						: Comparator.comparingDouble(player::distanceTo))
				.toList();
		// og.cCQ: an enabled Target Lock whose locked entity passes the
		// predicate is selected directly; otherwise the comparator-first candidate.
		Module lock = ModuleManager.get().byId("target_lock");
		if (lock != null && lock.isEnabled() && lock instanceof TargetLock targetLock) {
			PlayerEntity locked = targetLock.lockedTarget();
			if (locked != null && candidates.contains(locked)) {
				return locked;
			}
		}
		return candidates.isEmpty() ? null : candidates.get(0);
	}

	/** AntiBot verdict query (rD.dml().aLp, unconditional in og$vf.dwd). */
	private static AntiBot antiBotModule() {
		Module module = ModuleManager.get().byId("anti_bot");
		return module instanceof AntiBot antiBot ? antiBot : null;
	}

	/** og$vf.dwc: isInvulnerable() or a player in abilities.invulnerable. */
	private static boolean isInvulnerableTarget(Entity entity) {
		if (entity.isInvulnerable()) {
			return true;
		}
		return entity instanceof PlayerEntity player && player.getAbilities().invulnerable;
	}

	/** jg.bBJ: distance from the player's eye to the closest point of the box. */
	private static double eyeToBoxDistance(ClientPlayerEntity player, Entity target) {
		Box box = target.getBoundingBox();
		Vec3d eye = player.getEyePos();
		double dx = Math.max(Math.max(box.minX - eye.x, eye.x - box.maxX), 0.0);
		double dy = Math.max(Math.max(box.minY - eye.y, eye.y - box.maxY), 0.0);
		double dz = Math.max(Math.max(box.minZ - eye.z, eye.z - box.maxZ), 0.0);
		return Math.sqrt(dx * dx + dy * dy + dz * dz);
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
		Vec3d look = RotationManager.get().effectiveRotation().toDirection().normalize();
		double dot = MathHelper.clamp(toTarget.dotProduct(look), -1.0, 1.0);
		return (float) Math.toDegrees(Math.acos(dot));
	}
}
