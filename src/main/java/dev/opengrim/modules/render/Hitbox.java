package dev.opengrim.modules.render;

import java.util.List;
import java.util.Optional;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityPose;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.projectile.ProjectileUtil;
import net.minecraft.item.Items;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackPressEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.modules.combat.TriggerBot;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.util.FriendsManager;

/**
 * Hitbox (registry sixtwo.fq): "Visible version of hitboxes".
 *
 * <p>1:1 port of sixtwo.fq (analysis/decompiled/payload-decrypted/sixtwo/fq.java;
 * spec analysis/specs/casesafe/handlers/fq.md). A silent-aim attack module
 * driven by expanded hitboxes: in Silent mode, when the crosshair misses every
 * vanilla entity, the attack is swallowed, the target locked, and the silent
 * rotation toward the closest point on its expanded box submitted through the
 * rotation manager; once a ray along that rotation actually hits the target the
 * attack fires through the attack manager, or the lock is dropped after
 * "Retry Timeout".
 *
 * <p>Registration (fq.java:97): id 4, starts disabled, category
 * {@code gh.xwjCw} (combat, same family as fJ/fF/ff) — hence
 * {@link ModuleCategory#COMBAT}. Settings in constructor order (fq.java:98-234):
 * Mode (ct: Vanilla default / Silent), Width 0.01/0.0-2.0/0.0 " blocks",
 * Height 0.01/0.0-2.0/0.0 " blocks", Ignore Friends (false), Disable If Holding
 * Cobweb (false), Only For Slots (false), Slots (cz hotbar set, empty),
 * Invisible (false), Visible (false), Retry Timeout 10.0/0.0-1000.0/100.0
 * " ms", Static Height (false). Visibility wiring fq.java:244-249: Slots only
 * with Only For Slots, Invisible only in Vanilla mode, Visible + Retry Timeout
 * only in Silent mode.
 *
 * <p>Handlers: {@code aMD(gZ$tt)} attack event (fq.java:532-637) — the
 * original dispatches {@code gZ$tt} at the head of {@code MinecraftClient.doAttack}
 * (bootstrap ClientEventBridgeMixin, method_1536;
 * cancel = skip the attack), which is exactly the framework
 * {@link AttackPressEvent} (Fabric ClientPreAttackCallback); {@code aME(gv)}
 * pre-rotation event (fq.java:954-1056) — submits
 * {@code qL.dbI(point, ou.kxNyl, mw.uWTdl, this)}, ported as
 * {@link RotationManager#submitRotation} at {@link RotationPriority#uWTdl};
 * {@code aMF(gH$th)} tick (fq.java:1139-1287). This rebuild has no
 * pre-rotation event, so aME is folded into {@link #onTick} ahead of aMF
 * (same per-tick order, same gate chain).
 *
 * <p>Recovered mechanics ported 1:1: box expansion {@code aMH}
 * (fq.java:821-920) — symmetric grow by Width/2 on X/Z and Height/2 on Y, and
 * for a PlayerEntity with Static Height on that is gliding/crawling/swimming
 * the STANDING-pose dimensions rebuild the box (width + Width, minY unchanged,
 * maxY = minY + height + Height); attack filter {@code aMG} (fq.java:692-815) —
 * null/self, cobweb, Only For Slots ({@code cz.Uy()} = selected hotbar slot in
 * the set), then Ignore Friends for players; raycast candidate filter
 * {@code aMM} (fq.java:1293-1344) — {@code canHit() && !isSpectator() && aMG};
 * target validity {@code aML} (fq.java:1358-1446); closest-point range check
 * {@code aMO} (fq.java:639-676); expanded raycast {@code aMI}
 * (fq.java:1058-1137) — current rotation from the rotation manager, block-clamped
 * range, search box stretched by rotation*range and expanded by
 * (1+Width, 1+Height, 1+Width), closest hit wins; single-target raycast
 * {@code aMJ} (fq.java:1463-1475) — the {@code ox.cHn} shape (block clamp,
 * stretch+expand(1,1,1) box, spectator + identity predicate, range² max);
 * retry timer {@code mT.cpB}/{@code cpC} (strictly elapsed &gt; timeout).
 * The attack goes through the native {@code qP.ddn} — ported as
 * {@link TriggerBot#attack} (interactionManager.attackEntity + swing), the
 * repo's shared stand-in.
 *
 * <p>[U] unrecovered: the native hitbox renderer behind {@code aMY}/{@code aMZ}
 * (Visible/Invisible draw semantics — spec "Unrecovered"). The world-render
 * pass below is a labeled [G] stand-in: expanded boxes are drawn with
 * {@code RenderLayers.lines()} when the mode's flag is on (Invisible in Vanilla
 * mode for the vanilla crosshair entity, Visible in Silent mode for the locked
 * target); the exact native gating is unknown.
 */
public class Hitbox extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode", List.of("vanilla", "silent"), "vanilla"));
	private final DoubleSetting width = register(new DoubleSetting("width", 0.01, 0.0, 2.0, 0.0, " blocks"));
	private final DoubleSetting height = register(new DoubleSetting("height", 0.01, 0.0, 2.0, 0.0, " blocks"));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));
	private final BoolSetting disableIfHoldingCobweb = register(new BoolSetting("disable_if_holding_cobweb", false));
	private final BoolSetting onlyForSlots = register(new BoolSetting("only_for_slots", false));
	// cz "Slots" (fq.java:184) — hotbar-slot set, empty by default (cz.java:26);
	// modelled as the repo's group of nine toggles (TargetMargin/NoMiss
	// precedent), persisted through the group.
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting[] slotToggles = new BoolSetting[9];
	private final BoolSetting invisible = register(new BoolSetting("invisible", false));
	private final BoolSetting visible = register(new BoolSetting("visible", false));
	private final DoubleSetting retryTimeout = register(new DoubleSetting("retry_timeout", 10.0, 0.0, 1000.0, 100.0, " ms"));
	private final BoolSetting staticHeight = register(new BoolSetting("static_height", false));

	/** NZTfz (fq.java:84). */
	private Entity lockedTarget;
	/** obThK (fq.java:85) — mT.cpB() reset stamp. */
	private long lockStartMs;

	public Hitbox() {
		super("hitbox", "Hitbox", "Visible version of hitboxes", ModuleCategory.COMBAT);
		for (int i = 0; i < slotToggles.length; i++) {
			slotToggles[i] = new BoolSetting("slot_" + i, false);
			slots.add(slotToggles[i]);
		}
	}

	/**
	 * Attack handler aMD (fq.java:532-637), driven by {@link AttackPressEvent}
	 * (the original's {@code gZ$tt}, dispatched at the head of
	 * {@code MinecraftClient.doAttack}). Silent mode only: clear any stale
	 * target, bail when vanilla targeting already resolves an entity, raycast
	 * the expanded boxes, range-check the closest point, bail when the current
	 * view already hits, otherwise lock the target, restart the retry timer and
	 * cancel the vanilla attack.
	 */
	@Subscribe
	public void onAttackPress(AttackPressEvent event) {
		if (!isEnabled() || !"silent".equals(mode.getValue())) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		clearTarget();
		if (client.crosshairTarget instanceof EntityHitResult) {
			return;
		}
		EntityHitResult hit = expandedRaycast(player);
		if (hit == null) {
			return;
		}
		Entity entity = hit.getEntity();
		if (closestPoint(player, entity.getBoundingBox()) == null) {
			return;
		}
		if (singleTargetRaycast(player, entity, RotationManager.get().effectiveRotation()) != null) {
			return;
		}
		lockedTarget = entity;
		lockStartMs = System.currentTimeMillis();
		event.setCancelled(true);
	}

	/**
	 * Pre-rotation aME (fq.java:954-1056) folded ahead of tick aMF
	 * (fq.java:1139-1287). Gate chain: enabled + Silent, locked target, target
	 * validity, closest point; then the silent rotation is submitted and a ray
	 * along it is tested — hit &rarr; attack through the attack manager and
	 * clear; miss &rarr; clear once the retry timeout strictly elapsed.
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			clearTarget();
			return;
		}
		// fq.java:244-249 — visibility gates (live suppliers in the original).
		invisible.setVisible("vanilla".equals(mode.getValue()));
		visible.setVisible("silent".equals(mode.getValue()));
		retryTimeout.setVisible("silent".equals(mode.getValue()));
		slots.setVisible(onlyForSlots.getValue());

		if (!isEnabled() || !"silent".equals(mode.getValue())) {
			clearTarget();
			return;
		}
		if (lockedTarget == null) {
			return;
		}
		if (!isTargetValid(player, lockedTarget)) {
			clearTarget();
			return;
		}
		Vec3d point = aimPoint(player);
		if (point == null) {
			clearTarget();
			return;
		}
		Rotation rotation = Rotation.lookingAt(player.getEyePos(), point);
		// aME: rD.dlX().dbI(vec3d, ou.kxNyl, mw.uWTdl, this) — the ou policy
		// constant has no rebuild counterpart, priority/owner are carried.
		RotationManager.get().submitRotation(rotation, RotationPriority.uWTdl, this);
		if (singleTargetRaycast(player, lockedTarget, rotation) == null) {
			if (System.currentTimeMillis() - lockStartMs > retryTimeout.getValue()) {
				clearTarget();
			}
			return;
		}
		TriggerBot.attack(client, player, lockedTarget);
		clearTarget();
	}

	/**
	 * [G] stand-in for the native hitbox renderer (spec "Unrecovered"): draws
	 * the expanded box of the vanilla crosshair entity in Vanilla mode when
	 * Invisible is on, and of the locked silent target in Silent mode when
	 * Visible is on.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		Entity shown;
		if ("silent".equals(mode.getValue())) {
			if (!visible.getValue() || lockedTarget == null) {
				return;
			}
			shown = lockedTarget;
		} else {
			if (!invisible.getValue() || !(client.crosshairTarget instanceof EntityHitResult hit)) {
				return;
			}
			shown = hit.getEntity();
		}
		VertexConsumerProvider consumers = event.context().consumers();
		MatrixStack.Entry entry = event.context().matrices().peek();
		VertexConsumer lines = consumers.getBuffer(RenderLayers.lines());
		Vec3d cameraPos = event.camera().getCameraPos();
		Esp2D.drawBoxOutline(entry, lines, expandedBox(shown).offset(cameraPos.negate()), 0xFF40FF70, 1.0f);
	}

	/** aMN (fq.java:527-529); YO override fq.java:1477-1481. */
	@Override
	protected void onDisable() {
		clearTarget();
	}

	private void clearTarget() {
		lockedTarget = null;
	}

	/** The currently locked silent-aim target, if any (aNe, fq.java:415-417). */
	public Entity getLockedTarget() {
		return lockedTarget;
	}

	/**
	 * Box expansion geometry (sixtwo.fq {@code aMH}, fq.java:821-920): symmetric
	 * grow by {@code Width / 2} on X/Z and {@code Height / 2} on Y, except for
	 * gliding/crawling/swimming players with {@code Static Height} on, whose
	 * box is rebuilt from {@code STANDING} dimensions centered on the original
	 * X/Z center with unchanged {@code minY}. The original caches the slider
	 * values ({@code vzqAe}/{@code ZLJlY}, fq.java:82-83, refreshed via the Vd
	 * change callbacks fq.java:238-243); read live here (same values).
	 */
	public Box expandedBox(Entity entity) {
		return expandedBox(entity, entity.getBoundingBox());
	}

	/** aMH(entity, box) — the box parameter form the original exposes. */
	public Box expandedBox(Entity entity, Box box) {
		float extraWidth = width.getValue().floatValue();
		float extraHeight = height.getValue().floatValue();
		if (entity instanceof net.minecraft.entity.player.PlayerEntity player && staticHeight.getValue()
				&& (player.isGliding() || player.isCrawling() || player.isInSwimmingPose())) {
			var dims = player.getDimensions(EntityPose.STANDING);
			double boxWidth = dims.width() + extraWidth;
			double boxHeight = dims.height() + extraHeight;
			double centerX = (box.minX + box.maxX) / 2.0;
			double centerZ = (box.minZ + box.maxZ) / 2.0;
			return new Box(
					centerX - boxWidth / 2.0, box.minY, centerZ - boxWidth / 2.0,
					centerX + boxWidth / 2.0, box.minY + boxHeight, centerZ + boxWidth / 2.0);
		}
		return new Box(
				box.minX - extraWidth / 2.0, box.minY - extraHeight / 2.0, box.minZ - extraWidth / 2.0,
				box.maxX + extraWidth / 2.0, box.maxY + extraHeight / 2.0, box.maxZ + extraWidth / 2.0);
	}

	/**
	 * Attack filter (sixtwo.fq {@code aMG}, fq.java:692-815), in original order:
	 * false for null/self; false while holding cobweb with {@code Disable If
	 * Holding Cobweb} on; false when {@code Only For Slots} is on and the
	 * selected hotbar slot is not in the {@code Slots} set; non-players pass;
	 * players are excluded when {@code Ignore Friends} is on and they are on
	 * the friend list.
	 */
	public boolean passesFilter(ClientPlayerEntity player, Entity entity) {
		if (entity == null || entity == player) {
			return false;
		}
		if (disableIfHoldingCobweb.getValue() && player.isHolding(Items.COBWEB)) {
			return false;
		}
		if (onlyForSlots.getValue() && !slotsContain(player.getInventory().getSelectedSlot())) {
			return false;
		}
		if (entity instanceof net.minecraft.entity.player.PlayerEntity target && ignoreFriends.getValue()
				&& FriendsManager.isFriend(target.getGameProfile().name())) {
			return false;
		}
		return true;
	}

	/** cz.Uy() (cz.java:65-67) over the port's nine slot toggles. */
	private boolean slotsContain(int selectedSlot) {
		if (selectedSlot < 0 || selectedSlot >= slotToggles.length) {
			return false;
		}
		return slotToggles[selectedSlot].getValue();
	}

	/**
	 * Target validity (sixtwo.fq {@code aML}, fq.java:1358-1446): non-null, not
	 * removed, {@code canHit()}, passing {@code aMG}, and not dead for living
	 * entities.
	 */
	private boolean isTargetValid(ClientPlayerEntity player, Entity target) {
		if (target == null || target.isRemoved() || !target.canHit() || !passesFilter(player, target)) {
			return false;
		}
		if (target instanceof LivingEntity living && living.isDead()) {
			return false;
		}
		return true;
	}

	/**
	 * Closest point on the given box to the player eye, kept only inside the
	 * entity interaction range (sixtwo.fq {@code aMO}, fq.java:639-676;
	 * {@code jg.bBK} = vanilla clamp).
	 */
	private static Vec3d closestPoint(ClientPlayerEntity player, Box box) {
		Vec3d eye = player.getEyePos();
		double x = Math.clamp(eye.x, box.minX, box.maxX);
		double y = Math.clamp(eye.y, box.minY, box.maxY);
		double z = Math.clamp(eye.z, box.minZ, box.maxZ);
		Vec3d point = new Vec3d(x, y, z);
		double range = player.getEntityInteractionRange();
		if (eye.squaredDistanceTo(point) > range * range) {
			return null;
		}
		return point;
	}

	/** aMK (fq.java:923-947): aML() then aMO(NZTfz). */
	private Vec3d aimPoint(ClientPlayerEntity player) {
		if (!isTargetValid(player, lockedTarget)) {
			return null;
		}
		return closestPoint(player, lockedTarget.getBoundingBox());
	}

	/**
	 * Expanded-box raycast engine (sixtwo.fq {@code aMI}, fq.java:1058-1137):
	 * direction from the rotation manager's current rotation ({@code qL.dbC}),
	 * range = entity interaction range clamped by the nearest blocking block
	 * ({@code ox.cHp}: world raycast along the rotation, OUTLINE/NONE), search
	 * box stretched by {@code dir * range} and expanded by
	 * {@code (1 + Width, 1 + Height, 1 + Width)}; every candidate passing
	 * {@code aMM} is raycast against its expanded box and the strictly closest
	 * hit wins (returned with its hit position).
	 */
	private EntityHitResult expandedRaycast(ClientPlayerEntity player) {
		MinecraftClient client = MinecraftClient.getInstance();
		Rotation rotation = RotationManager.get().effectiveRotation();
		double range = player.getEntityInteractionRange();
		Vec3d eye = player.getEyePos();
		Vec3d direction = rotation.toDirection();
		double maxDistanceSq = range * range;
		BlockHitResult blockHit = client.world.raycast(new RaycastContext(
				eye, eye.add(direction.multiply(range)),
				RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, player));
		if (blockHit.getType() == HitResult.Type.BLOCK) {
			maxDistanceSq = Math.min(maxDistanceSq, eye.squaredDistanceTo(blockHit.getPos()));
		}
		Vec3d end = eye.add(direction.multiply(Math.sqrt(maxDistanceSq)));
		float extraWidth = width.getValue().floatValue();
		float extraHeight = height.getValue().floatValue();
		Box search = player.getBoundingBox().stretch(direction.multiply(range))
				.expand(1.0 + extraWidth, 1.0 + extraHeight, 1.0 + extraWidth);
		Entity closest = null;
		Vec3d closestHit = null;
		double closestDistanceSq = maxDistanceSq;
		for (Entity entity : client.world.getOtherEntities(player, search, e -> isRaycastCandidate(player, e))) {
			Optional<Vec3d> hit = expandedBox(entity, entity.getBoundingBox()).raycast(eye, end);
			if (hit.isEmpty()) {
				continue;
			}
			double distanceSq = eye.squaredDistanceTo(hit.get());
			if (distanceSq >= closestDistanceSq) {
				continue;
			}
			closest = entity;
			closestHit = hit.get();
			closestDistanceSq = distanceSq;
		}
		return closest == null ? null : new EntityHitResult(closest, closestHit);
	}

	/**
	 * Single-target raycast (sixtwo.fq {@code aMJ}, fq.java:1463-1475) with the
	 * {@code ox.cHn} body: block-clamped end point, search box
	 * {@code stretch(dir * range).expand(1, 1, 1)}, predicate
	 * {@code !isSpectator() && entity == target}, max range².
	 */
	private static EntityHitResult singleTargetRaycast(ClientPlayerEntity player, Entity target, Rotation rotation) {
		MinecraftClient client = MinecraftClient.getInstance();
		double range = player.getEntityInteractionRange();
		Vec3d eye = player.getEyePos();
		Vec3d direction = rotation.toDirection();
		Vec3d end = eye.add(direction.multiply(range));
		BlockHitResult blockHit = client.world.raycast(new RaycastContext(
				eye, end, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, player));
		if (blockHit.getType() == HitResult.Type.BLOCK) {
			double blockDistanceSq = eye.squaredDistanceTo(blockHit.getPos());
			if (blockDistanceSq < range * range) {
				end = eye.add(direction.multiply(Math.sqrt(blockDistanceSq)));
			}
		}
		Box box = player.getBoundingBox().stretch(direction.multiply(range)).expand(1.0, 1.0, 1.0);
		return ProjectileUtil.raycast(player, eye, end, box,
				e -> !e.isSpectator() && e == target, range * range);
	}

	/** Raycast candidate filter ({@code aMM}, fq.java:1293-1344). */
	public boolean isRaycastCandidate(ClientPlayerEntity player, Entity entity) {
		return entity.canHit() && !entity.isSpectator() && passesFilter(player, entity);
	}

	public String getMode() {
		return mode.getValue();
	}

	/** aNc (fq.java:432-434): the cached Width mirror. */
	public double getWidth() {
		return width.getValue();
	}

	/** aNd (fq.java:515-517): the cached Height mirror. */
	public double getHeight() {
		return height.getValue();
	}

	/** aNa (fq.java:482-484): the retry-timeout setting. */
	public double getRetryTimeoutMs() {
		return retryTimeout.getValue();
	}

	public HitResult getCrosshairTarget() {
		return MinecraftClient.getInstance().crosshairTarget;
	}
}
