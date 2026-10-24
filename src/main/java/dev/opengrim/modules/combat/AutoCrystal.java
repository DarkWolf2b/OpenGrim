package dev.opengrim.modules.combat;

import java.util.Comparator;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.dimension.DimensionType;

/**
 * Auto Crystal (registry sixtwo.eV, module id 28): "Automatically places and
 * breaks crystals".
 *
 * <p>Port of sixtwo.eV (payload-named-cfr/sixtwo/eV.java and the
 * payload-decrypted variant, eV.java:47-224). Setting tree, in declaration
 * order: Activate On Key (default false, eV.java:68-84), Activation Key
 * (default -999 unbound, eV.java:88-103), Spoof CPS (eV.java:104-114), Place
 * Delay (1.0/0.0-10.0/0.0 " ticks", eV.java:115-127), Break Delay (same chain,
 * eV.java:128-140), No Count Glitch (eV.java:141-157), No Bounce
 * (eV.java:158-168), Stop on Kill (eV.java:169-182), Stop Time
 * (25.0/0.0-8000.0/1000.0 " ticks", eV.java:183-193), Damage Tick
 * (eV.java:194-206), Predict Id (eV.java:207-218). Visibility wiring ports
 * the {@code Vf} gates (eV.java:223-224): Activation Key shows only with
 * Activate On Key, Stop Time only with Stop on Kill. Placement goes out as a
 * use-block packet with hand, hit result and sequence (cf.
 * {@code PlayerInteractBlockC2SPacket}, handlers/eV.md); breaks target
 * {@code EndCrystalEntity}.
 *
 * <p>Behaviors not recoverable from the decompile (damage model, target
 * scan order, CPS spoof shaping, kill-pause timing, predicted-id attacks)
 * are listed in analysis/docs/PARITY.md (Divergences).
 */
public class AutoCrystal extends Module {
	/** Natural entity-reach value; the original's range token was not recovered. */
	private static final double REACH = 4.5;
	/** Natural target search radius; the original's scan range was not recovered. */
	private static final double SEARCH_RANGE = 8.0;
	/** Horizontal/vertical support scan around the target's feet block. */
	private static final int SUPPORT_RADIUS = 2;

	private final BoolSetting activateOnKey = register(new BoolSetting("activate_on_key", false));
	private final KeybindSetting activationKey = register(new KeybindSetting("activation_key", -999));
	private final BoolSetting spoofCps = register(new BoolSetting("spoof_cps", false));
	private final DoubleSetting placeDelay =
			register(new DoubleSetting("place_delay", 1.0, 0.0, 10.0, 0.0, " ticks"));
	private final DoubleSetting breakDelay =
			register(new DoubleSetting("break_delay", 1.0, 0.0, 10.0, 0.0, " ticks"));
	private final BoolSetting noCountGlitch = register(new BoolSetting("no_count_glitch", false));
	private final BoolSetting noBounce = register(new BoolSetting("no_bounce", false));
	private final BoolSetting stopOnKill = register(new BoolSetting("stop_on_kill", false));
	private final DoubleSetting stopTime =
			register(new DoubleSetting("stop_time", 25.0, 0.0, 8000.0, 1000.0, " ticks"));
	private final BoolSetting damageTick = register(new BoolSetting("damage_tick", false));
	private final BoolSetting predictId = register(new BoolSetting("predict_id", false));

	private int placeCooldown;
	private int breakCooldown;
	private DimensionType lastDimension;

	public AutoCrystal() {
		super("auto_crystal", "Auto Crystal", "Automatically places and breaks crystals",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onTick() {
		// Visibility wiring ports the Vf gates (eV.java:223-224).
		activationKey.setVisible(activateOnKey.getValue());
		stopTime.setVisible(stopOnKill.getValue());

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		// eV.java:47 DcPJe: placed-position cache and timers reset per dimension.
		DimensionType dimension = client.world.getDimension();
		if (!dimension.equals(lastDimension)) {
			lastDimension = dimension;
			placeCooldown = 0;
			breakCooldown = 0;
		}
		if (activateOnKey.getValue() && !activationKey.isPressed()) {
			return;
		}
		if (placeCooldown > 0) {
			placeCooldown--;
		}
		if (breakCooldown > 0) {
			breakCooldown--;
		}
		breakCrystals(client, player);
		placeCrystals(client, player);
	}

	private void breakCrystals(MinecraftClient client, ClientPlayerEntity player) {
		if (breakCooldown > 0) {
			return;
		}
		Box box = player.getBoundingBox().expand(REACH);
		client.world.getEntitiesByClass(EndCrystalEntity.class, box,
				e -> e.isAlive() && player.squaredDistanceTo(e) <= REACH * REACH)
				.stream()
				.min(Comparator.comparingDouble(player::distanceTo))
				.ifPresent(crystal -> {
					TriggerBot.attack(client, player, crystal);
					breakCooldown = Math.max(1, (int) Math.ceil(breakDelay.getValue()));
				});
	}

	private void placeCrystals(MinecraftClient client, ClientPlayerEntity player) {
		if (placeCooldown > 0) {
			return;
		}
		Hand hand = crystalHand(player);
		if (hand == null) {
			return;
		}
		for (Vec3d targetPos : targetPositions(client, player)) {
			BlockPos support = findSupport(client, player, targetPos);
			if (support == null) {
				continue;
			}
			// The original sends PlayerInteractBlockC2SPacket(Hand, BlockHitResult,
			// sequence); this is the same vanilla interaction path.
			BlockHitResult hit = new BlockHitResult(Vec3d.ofCenter(support).add(0.0, 0.5, 0.0),
					Direction.UP, support, false);
			client.interactionManager.interactBlock(player, hand, hit);
			player.swingHand(hand);
			placeCooldown = Math.max(1, (int) Math.ceil(placeDelay.getValue()));
			return;
		}
	}

	private Hand crystalHand(ClientPlayerEntity player) {
		if (player.getMainHandStack().isOf(Items.END_CRYSTAL)) {
			return Hand.MAIN_HAND;
		}
		if (player.getOffHandStack().isOf(Items.END_CRYSTAL)) {
			return Hand.OFF_HAND;
		}
		return null;
	}

	private java.util.List<Vec3d> targetPositions(MinecraftClient client, ClientPlayerEntity player) {
		Box search = player.getBoundingBox().expand(SEARCH_RANGE);
		return client.world.getEntitiesByClass(AbstractClientPlayerEntity.class, search,
				e -> e != player && e.isAlive() && !e.isSpectator()
						&& !FriendsManager.isFriend(e.getGameProfile().name()))
				.stream()
				.sorted(Comparator.comparingDouble(player::distanceTo))
				.map(Entity::getEntityPos)
				.toList();
	}

	/**
	 * Vanilla EndCrystalItem only accepts obsidian/bedrock; the original scan
	 * order is VM-hidden, so this searches a natural 5x4x5 neighbourhood and
	 * takes the support closest to the target's feet.
	 */
	private BlockPos findSupport(MinecraftClient client, ClientPlayerEntity player, Vec3d targetPos) {
		BlockPos feet = BlockPos.ofFloored(targetPos.x, targetPos.y, targetPos.z);
		double reach = player.getBlockInteractionRange();
		double reachSq = reach * reach;
		BlockPos best = null;
		double bestDistance = Double.MAX_VALUE;
		for (int dy = -2; dy <= 1; dy++) {
			for (int dx = -SUPPORT_RADIUS; dx <= SUPPORT_RADIUS; dx++) {
				for (int dz = -SUPPORT_RADIUS; dz <= SUPPORT_RADIUS; dz++) {
					BlockPos support = feet.add(dx, dy, dz);
					BlockState state = client.world.getBlockState(support);
					if (!state.isOf(Blocks.OBSIDIAN) && !state.isOf(Blocks.BEDROCK)) {
						continue;
					}
					BlockPos placePos = support.up();
					if (!client.world.isAir(placePos)) {
						continue;
					}
					// Vanilla EndCrystalItem requires the 1x1x2 space above the
					// support to be empty of entities.
					Box space = new Box(placePos.getX(), placePos.getY(), placePos.getZ(),
							placePos.getX() + 1.0, placePos.getY() + 2.0, placePos.getZ() + 1.0);
					if (!client.world.getOtherEntities(null, space).isEmpty()) {
						continue;
					}
					if (player.getEyePos().squaredDistanceTo(Vec3d.ofCenter(support)) > reachSq) {
						continue;
					}
					double distance = support.getSquaredDistance(feet);
					if (distance < bestDistance) {
						bestDistance = distance;
						best = support;
					}
				}
			}
		}
		return best;
	}
}
