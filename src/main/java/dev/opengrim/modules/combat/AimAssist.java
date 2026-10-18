package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.mob.Monster;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Aim Assist (registry sixtwo.fH): "Automatically aims at entity".
 *
 * <p>Port of sixtwo.fH (payload-named-cfr/sixtwo/fH.java:55-710, constructor
 * fH.java:228-699; payload-decrypted variant; spec
 * analysis/specs/handlers/fH.md). Setting tree in declaration order: Target
 * (fH.java:58), Range 0.1/3.0-10.0/6.0 " blocks", FOV 1.0/10.0-360.0/180.0
 * " deg", Randomization 1.0/0.0-100.0/5.0 " %", Horizontal (true), Horizontal
 * Speed 0.1/0.1-20.0/1.0, Vertical (true), Vertical Speed 0.1/0.1-20.0/1.0,
 * Aim Point (Best Vector / Nearest Vector, default Nearest), Aim While On
 * Target (true), Predict Position (false), Prediction Ticks 1.0/1.0-5.0/2.0
 * " ticks", Render Prediction (false), Prediction Color, Target Options
 * (Ignore Friends / Ignore Naked / Ignore Walls), Items To Use (Wapon Only /
 * Custom Slots + Slots), Target Priority (Distance / Health), Target Mode
 * (Switch / Locked), Cancel In Screens (true), Draw Fov (false), Fov Color,
 * When Holding (false), Hold Key (default key 0). All visibility couplings
 * ported 1:1 (fH.java:687-693; the {@code aUr}/{@code aUs} predicates are
 * native VM bodies — see the [G] note below).
 *
 * <p>[N] Native-VM module: every behavior method of sixtwo.fH is a native stub
 * (analysis/ghidra/handlers-stitched/sixtwo_fH.c — 59 handlers / 589 VM
 * continuation blocks, zero float arithmetic surviving). The rotation math,
 * the target predicate {@code aUp(Entity)}, the player gate
 * {@code aUq(ClientPlayerEntity)} and the render handlers
 * {@code aTv(gH$th)}/{@code aTw(go$sX)}/{@code aTy(gk)} are not decodable
 * (fH.md "Unrecovered" 1-7; the only evidenced rotation primitive is
 * {@code Entity.setPitch(F)V}, pool token {@code method_36457}). Capture
 * condition for native evidence: enable Aim Assist in-world with a target in
 * range — trace 2026-10-17 shows {@code aTv} → {@code aTx} (target getter)
 * firing twice, no rotation values recorded.
 *
 * <p>All substituted math below is a high-probability guess ([G]) standing in
 * for the unrecovered VM bodies; none of it is byte-verified:
 * <ul>
 *   <li>[G] Aiming runs in {@link #onTick} (no tick handler exists in the
 *       original — all three handlers are render-side) and submits through
 *       {@link RotationManager} at {@link RotationPriority#uWTdl}, per the
 *       framework rotation policy; FOV reads use
 *       {@link RotationManager#effectiveRotation()}.</li>
 *   <li>[G] {@code approach()} (linear per-tick step by Horizontal/Vertical
 *       Speed) replaces the unrecovered smoothing math.</li>
 *   <li>[G] {@code noise()} (splitmix-style hash) replaces the original
 *       {@code mV} smooth-noise generator (seeded {@code Random}, frequency
 *       0.05f, 3 octaves, mode {@code AjjgB}; fH.java:683-686).</li>
 *   <li>[G] Aim Point: Best Vector → hitbox center, Nearest Vector → eye pos;
 *       the original's vector math is inside the VM.</li>
 *   <li>[G] {@code isWeapon} (WEAPON data component) / {@code isNaked} (all
 *       four armor slots empty) mirror the fr KillAura port's reading of the
 *       same {@code aUq} family of gates; the original conditions are native.</li>
 *   <li>[G] Prediction = linear velocity * Prediction Ticks; the original
 *       {@code CBxhI} path construction is native.</li>
 *   <li>[U] Colors: both cG defaults come from the runtime theme
 *       ({@code rD.dlM().bjG().bis()}); fixed ARGB placeholders are used.</li>
 *   <li>[U] Target (cF entity-list): contents/default entity filter
 *       ({@code jg$tJ.OCdZM}) are unrecovered; the port uses the fr KillAura
 *       players/mobs/all mode with "players" default.</li>
 * </ul>
 */
public class AimAssist extends Module {
	private final ModeSetting target = register(new ModeSetting("target",
			List.of("players", "mobs", "all"), "players"));
	private final DoubleSetting range = register(new DoubleSetting("range", 0.1, 3.0, 10.0, 6.0, " blocks"));
	private final DoubleSetting fov = register(new DoubleSetting("fov", 1.0, 10.0, 360.0, 180.0, " deg"));
	private final DoubleSetting randomization = register(new DoubleSetting("randomization", 1.0, 0.0, 100.0, 5.0, " %"));
	private final BoolSetting horizontal = register(new BoolSetting("horizontal", true));
	private final DoubleSetting horizontalSpeed = register(new DoubleSetting("horizontal_speed", 0.1, 0.1, 20.0, 1.0, null));
	private final BoolSetting vertical = register(new BoolSetting("vertical", true));
	private final DoubleSetting verticalSpeed = register(new DoubleSetting("vertical_speed", 0.1, 0.1, 20.0, 1.0, null));
	private final ModeSetting aimPoint = register(new ModeSetting("aim_point",
			List.of("best_vector", "nearest_vector"), "nearest_vector"));
	private final BoolSetting aimWhileOnTarget = register(new BoolSetting("aim_while_on_target", true));
	private final BoolSetting predictPosition = register(new BoolSetting("predict_position", false));
	private final DoubleSetting predictionTicks = register(new DoubleSetting("prediction_ticks", 1.0, 1.0, 5.0, 2.0, " ticks"));
	private final BoolSetting renderPrediction = register(new BoolSetting("render_prediction", false));
	private final ColorSetting predictionColor = register(new ColorSetting("prediction_color", 0x80FF5555));
	private final GroupSetting targetOptions = register(new GroupSetting("target_options"));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));
	private final BoolSetting ignoreNaked = register(new BoolSetting("ignore_naked", false));
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", false));
	// Original ct pNnvx with cu options "Wapon Only" (index 0, default) and
	// "Custom Slots" (index 1) — fH.java:519-546 (the "Wapon" typo is the
	// original's).
	private final ModeSetting itemsToUse = register(new ModeSetting("items_to_use",
			List.of("weapon_only", "custom_slots"), "weapon_only"));
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final ModeSetting targetPriority = register(new ModeSetting("target_priority",
			List.of("distance", "health"), "distance"));
	private final ModeSetting targetMode = register(new ModeSetting("target_mode",
			List.of("switch", "locked"), "switch"));
	private final BoolSetting cancelInScreens = register(new BoolSetting("cancel_in_screens", true));
	private final BoolSetting drawFov = register(new BoolSetting("draw_fov", false));
	private final ColorSetting fovColor = register(new ColorSetting("fov_color", 0xFFFFFFFF));
	private final BoolSetting whenHolding = register(new BoolSetting("when_holding", false));
	// Default key 0: cD.VO(mA.sCBUa.cmO()) with mA.sCBUa = new mA(0)
	// (mA.java:171, cmO() returns the enum payload, mA.java:352-354).
	private final IntSetting holdKey = register(new IntSetting("hold_key", -999, 348, 0));

	private LivingEntity locked;
	private long tickIndex;

	public AimAssist() {
		super("aim_assist", "Aim Assist", "Automatically aims at entity", ModuleCategory.COMBAT);
		targetOptions.add(ignoreFriends);
		targetOptions.add(ignoreNaked);
		targetOptions.add(ignoreWalls);
	}

	@Override
	public void onEnable() {
		locked = null;
		tickIndex = 0;
	}

	@Override
	public void onDisable() {
		locked = null;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		horizontalSpeed.setVisible(horizontal.getValue()); // sZDRi.Vf(MTMNI::WF), fH.java:687
		verticalSpeed.setVisible(vertical.getValue()); // OYFtx.Vf(mcave::WF), fH.java:688
		predictionTicks.setVisible(predictPosition.getValue()); // RpKwK.Vf(xZaeo::WF), fH.java:689
		renderPrediction.setVisible(predictPosition.getValue()); // maPUy.Vf(xZaeo::WF), fH.java:690
		// SGIKe.Vf(this::aUs), fH.java:691 — aUs() is a native VM body; the
		// handler spec reads it as structurally gated by Predict Position.
		predictionColor.setVisible(predictPosition.getValue());
		fovColor.setVisible(drawFov.getValue()); // UxVgK.Vf(AwNUJ::WF), fH.java:693
		// hjLsk.Vf(this::aUr), fH.java:692 — aUr() is a native VM body;
		// structurally "Custom Slots" selected (same wiring as fr KillAura).
		slots.setVisible("custom_slots".equals(itemsToUse.getValue()));
		if (cancelInScreens.getValue() && client.currentScreen != null) {
			return;
		}
		if (!aimWhileOnTarget.getValue() && client.targetedEntity != null) {
			return;
		}
		int key = holdKey.getValue();
		if (whenHolding.getValue() && (key == -999
				|| !net.minecraft.client.util.InputUtil.isKeyPressed(client.getWindow(), key))) {
			return;
		}
		LivingEntity current = locked != null && locked.isAlive() ? locked : findTarget(client, player);
		if ("locked".equals(targetMode.getValue())) {
			locked = current;
		} else {
			locked = null;
		}
		if (current == null) {
			return;
		}
		Vec3d point = pickPoint(player, current);
		if (randomization.getValue() > 0.0) {
			double jitter = randomization.getValue() / 100.0;
			point = point.add(noise(tickIndex, 0L) * jitter, noise(tickIndex, 1L) * jitter * 0.5, 0.0);
		}
		tickIndex++;
		Rotation wanted = Rotation.lookingAt(player.getEyePos(), point).clamped();
		Rotation current_rot = RotationManager.get().effectiveRotation();
		float yaw = horizontal.getValue()
				? approach(current_rot.getYaw(), wanted.getYaw(), horizontalSpeed.getValue().floatValue())
				: current_rot.getYaw();
		float pitch = vertical.getValue()
				? approach(current_rot.getPitch(), wanted.getPitch(), verticalSpeed.getValue().floatValue())
				: current_rot.getPitch();
		RotationManager.get().submitRotation(Rotation.fromAngles(yaw, pitch), RotationPriority.uWTdl, this);
	}

	private LivingEntity findTarget(MinecraftClient client, ClientPlayerEntity player) {
		double reach = range.getValue();
		float halfFov = fov.getValue().floatValue() / 2.0f;
		Box box = TriggerBot.reachBox(player.getEyePos(), reach);
		List<Entity> base;
		switch (target.getValue()) {
			case "mobs" -> base = client.world.getOtherEntities(player, box, e -> e instanceof Monster);
			case "all" -> base = client.world.getOtherEntities(player, box, e -> e instanceof LivingEntity);
			default -> base = List.copyOf(client.world.getPlayers().stream()
					.filter(e -> (Entity) e != (Entity) player).map(e -> (Entity) e).toList());
		}
		return base.stream()
				.filter(e -> e instanceof LivingEntity living && living.isAlive() && e != (Entity) player)
				.filter(e -> player.distanceTo(e) <= reach)
				.filter(e -> angleTo(player, e) <= halfFov)
				.filter(e -> ignoreWalls.getValue() || player.canSee(e))
				.filter(e -> !ignoreNaked.getValue() || !isNaked(e))
				.filter(e -> !ignoreFriends.getValue() || !(e instanceof PlayerEntity p)
						|| !FriendsManager.isFriend(p.getGameProfile().name()))
				.filter(e -> !weaponOnlyMode() || isWeapon(player))
				.map(e -> (LivingEntity) e)
				.min("health".equals(targetPriority.getValue())
						? Comparator.comparingDouble(LivingEntity::getHealth)
						: Comparator.comparingDouble(player::distanceTo))
				.orElse(null);
	}

	private Vec3d pickPoint(ClientPlayerEntity player, LivingEntity target) {
		Vec3d base = "best_vector".equals(aimPoint.getValue())
				? target.getBoundingBox().getCenter()
				: target.getEyePos();
		if (predictPosition.getValue()) {
			Vec3d v = target.getVelocity();
			double ticks = predictionTicks.getValue();
			base = base.add(v.x * ticks, v.y * ticks, v.z * ticks);
		}
		return base;
	}

	private static boolean isNaked(Entity entity) {
		return entity instanceof PlayerEntity player
				&& player.getEquippedStack(EquipmentSlot.HEAD).isEmpty()
				&& player.getEquippedStack(EquipmentSlot.CHEST).isEmpty()
				&& player.getEquippedStack(EquipmentSlot.LEGS).isEmpty()
				&& player.getEquippedStack(EquipmentSlot.FEET).isEmpty();
	}

	/** [G] Items To Use == "Wapon Only" (ct option 0, the default). */
	private boolean weaponOnlyMode() {
		return "weapon_only".equals(itemsToUse.getValue());
	}

	private static boolean isWeapon(ClientPlayerEntity player) {
		return player.getMainHandStack().contains(net.minecraft.component.DataComponentTypes.WEAPON);
	}

	private static float angleTo(ClientPlayerEntity player, Entity target) {
		Vec3d toTarget = target.getEyePos().subtract(player.getEyePos()).normalize();
		Vec3d look = RotationManager.get().effectiveRotation().toDirection().normalize();
		double dot = MathHelper.clamp(toTarget.dotProduct(look), -1.0, 1.0);
		return (float) Math.toDegrees(Math.acos(dot));
	}

	private static float approach(float current, float wanted, float maxStep) {
		float delta = MathHelper.wrapDegrees(wanted - current);
		if (Math.abs(delta) <= maxStep) {
			return current + delta;
		}
		return current + Math.signum(delta) * maxStep;
	}

	private static double noise(long tick, long channel) {
		long h = 0x9E3779B97F4A7C15L + tick * 0xBF58476D1CE4E5B9L + channel * 0x94D049BB133111EBL;
		h ^= h >>> 30;
		h *= 0xBF58476D1CE4E5B9L;
		h ^= h >>> 27;
		return ((h >>> 11) / (double) (1L << 53)) * 2.0 - 1.0;
	}
}
