package dev.opengrim.modules.world;

import java.util.HashSet;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.block.BlockState;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.inventory.Inventory;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

/**
 * Ghost Hand (registry sixtwo.ec): "Allows to open containers through walls".
 *
 * <p>Port of sixtwo.ec — declared-class-verified source
 * analysis/decompiled/casesafe/payload-named-cfr/sixtwo/ec.java:19-43
 * (file:26-30 constructor with id 75, category {@code gh.qBzlZ}; :21
 * {@code Set<BlockPos> SRuur} init; :39-40 arz(gH$th) tick listener; :42 arA
 * identity rethrow). The un-prefixed payload-named-cfr/sixtwo/ec.java and
 * payload-decrypted/sixtwo/ec.java files declare sixtwo.eC (Sprint) on this
 * checkout — case-collision twins, do not read them as this class.
 * Spec: analysis/specs/casesafe/handlers/ec.md (the plain handlers/ec.md file
 * is the eC (Sprint) case-twin, not this class).
 *
 * <p>Structure:
 * <ul>
 *   <li>Zero settings constructed (ec.java:11-14, ec.md "Settings tree")</li>
 *   <li>SRuur position deduplication set (Set&lt;BlockPos&gt;, ec.java:21)</li>
 *   <li>arz(gH$th) pre-motion client-tick listener (ec.java:40)</li>
 *   <li>arA(MatchException) identity rethrow (ec.java:42)</li>
 * </ul>
 *
 * <p>Tick behavior follows the pool run POOL[0xc311,0x76) and interaction cluster:
 * build look direction from yaw and pitch via toRadians plus rotateX/rotateY,
 * scale by reach via multiply, origin at getCameraPosVec(1.0F), test states
 * with hasBlockEntity, fabricate BlockHitResult with Direction.UP, and submit
 * interactBlock through client interaction manager. SRuur dedupes positions.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code arz(gH$th)} ran in
 * both enable windows (12 ms / 1.1 ms), each tick with the identical visible
 * body: {@code ee.arS() → 0} (the payload's static sentry/broadcast read —
 * the same pattern as gg.baA()/mT.cpK()/fg.aIW(), called from many module
 * handlers) then {@code gg.bab() → 1} (the in-game gate: player, world,
 * interactionManager and networkHandler all non-null — the networkHandler
 * check below is trace-pinned). No further module calls fired — the
 * interactBlock path only runs on a use action (capture condition: hold the
 * use key on a container behind a wall).
 */
public class GhostHand extends Module {
	private static final double REACH = 4.5;
	private static final double STEP = 0.25;

	private final Set<BlockPos> SRuur = new HashSet<>();

	public GhostHand() {
		super("ghost_hand", "Ghost Hand", "Allows to open containers through walls", ModuleCategory.WORLD);
	}

	@Override
	public void onDisable() {
		SRuur.clear();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		// gg.bab() in-game gate — trace 2026-10-17: ec.arz → gg.bab() → 1 (2/2
		// runs); bab() = player + world + interactionManager + networkHandler.
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (client.currentScreen != null || !client.options.useKey.isPressed()) {
			return;
		}
		BlockPos target = findContainerThroughWall(client, player);
		if (target == null) {
			SRuur.removeIf(pos -> player.getEntityWorld().getBlockEntity(pos) == null);
			return;
		}
		if (!SRuur.add(target)) {
			return;
		}
		Vec3d center = Vec3d.ofCenter(target);
		// ec's pool run (POOL[0xc311,0x76) + interaction cluster) contains
		// interactBlock but no swing token — no swing is emitted (casesafe
		// handlers ec.md "Per-handler semantics").
		client.interactionManager.interactBlock(player, Hand.MAIN_HAND,
				new BlockHitResult(center, Direction.UP, target, false));
	}

	private BlockPos findContainerThroughWall(MinecraftClient client, ClientPlayerEntity player) {
		Vec3d eye = player.getCameraPosVec(1.0f);
		Vec3d dir = directionFromYawPitch(player.getYaw(), player.getPitch());
		for (double t = STEP; t <= REACH; t += STEP) {
			BlockPos pos = BlockPos.ofFloored(eye.add(dir.multiply(t)));
			BlockState state = player.getEntityWorld().getBlockState(pos);
			if (state.isAir()) {
				continue;
			}
			if (!state.hasBlockEntity()) {
				continue;
			}
			BlockEntity blockEntity = player.getEntityWorld().getBlockEntity(pos);
			if (blockEntity instanceof Inventory) {
				return pos.toImmutable();
			}
		}
		return null;
	}

	private static Vec3d directionFromYawPitch(float yaw, float pitch) {
		double yawRad = Math.toRadians(yaw);
		double pitchRad = Math.toRadians(pitch);
		Vec3d base = new Vec3d(0.0, 0.0, 1.0);
		return base.rotateX((float) pitchRad).rotateY((float) yawRad);
	}
}
