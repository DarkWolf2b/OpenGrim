package dev.opengrim.modules.combat;

import java.util.Comparator;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

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
 * are listed in analysis/PARITY-DIVERGENCES.md.
 */
public class AutoCrystal extends Module {
	private static final double REACH = 4.5;

	private final BoolSetting activateOnKey = register(new BoolSetting("activate_on_key", false));
	private final IntSetting activationKey = register(new IntSetting("activation_key", -999, 348, -999));
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
		if (activateOnKey.getValue() && (activationKey.getValue() == -999
				|| !net.minecraft.client.util.InputUtil.isKeyPressed(client.getWindow(), activationKey.getValue()))) {
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
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(REACH);
		client.world.getEntitiesByClass(EndCrystalEntity.class, box, e -> e.isAlive())
				.stream()
				.min(Comparator.comparingDouble(player::distanceTo))
				.ifPresent(crystal -> {
					TriggerBot.attack(client, player, crystal);
					breakCooldown = (int) Math.ceil(breakDelay.getValue());
				});
	}

	private void placeCrystals(MinecraftClient client, ClientPlayerEntity player) {
		if (placeCooldown > 0) {
			return;
		}
		ItemStack held = player.getMainHandStack();
		if (!held.isOf(Items.END_CRYSTAL)) {
			return;
		}
		Vec3d targetPos = nearestHostilePos(client, player);
		if (targetPos == null) {
			return;
		}
		BlockPos base = BlockPos.ofFloored(targetPos.x, targetPos.y, targetPos.z);
		for (Direction side : new Direction[] { Direction.UP, Direction.NORTH, Direction.SOUTH,
				Direction.WEST, Direction.EAST }) {
			BlockPos support = base.offset(side);
			BlockPos placePos = support.up();
			if (!client.world.getBlockState(placePos).isReplaceable()
					|| !client.world.getBlockState(support).isReplaceable()) {
				continue;
			}
			BlockHitResult hit = new BlockHitResult(Vec3d.ofCenter(support), Direction.UP, support, false);
			client.interactionManager.interactBlock(player, Hand.MAIN_HAND, hit);
			player.swingHand(Hand.MAIN_HAND);
			placeCooldown = (int) Math.ceil(placeDelay.getValue());
			return;
		}
	}

	private Vec3d nearestHostilePos(MinecraftClient client, ClientPlayerEntity player) {
		return client.world.getOtherEntities(player,
				new Box(player.getEntityPos(), player.getEntityPos()).expand(8.0),
				e -> e.isAlive() && (e instanceof net.minecraft.entity.mob.Monster
						|| e instanceof net.minecraft.entity.player.PlayerEntity))
				.stream()
				.min(Comparator.comparingDouble(player::distanceTo))
				.map(Entity::getEntityPos)
				.orElse(null);
	}
}
