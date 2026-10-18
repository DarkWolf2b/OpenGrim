package dev.opengrim.modules.world;

import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.s2c.play.BlockUpdateS2CPacket;
import net.minecraft.network.packet.s2c.play.ChunkDeltaUpdateS2CPacket;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;
import net.minecraft.world.World;

/**
 * Auto Lever Replace (registry sixtwo.dK): "Automatically destroys levers".
 *
 * <p>Port of sixtwo.dK from casesafe/payload-decrypted/sixtwo/dK_.java:24-119
 * (constructor dK_.java:24-75, module id {@code gf.aZL(130, false, gh.qBzlZ)} at
 * dK_.java:26) and handlers dK_.java:90-118 (ana fov, anc gV block-change,
 * anb gH$th render marker, and/ane helpers, anl/ank getters; spec
 * analysis/specs/casesafe/handlers/dK_.md).
 *
 * <p>Settings in declaration order (dK_.java:27-74):
 * <ul>
 *   <li>Work With (zrgbM, cv multi-select group)</li>
 *   <li>Auto Trap (ImshN, cw child of Work With, default false — no {@code .Tz()}/{@code .SY()} marker)</li>
 *   <li>Auto Web (CzAnG, cw child of Work With, default false)</li>
 *   <li>Ignore Walls (QiyGI, cJ toggle {@code .WE(true)}, dK_.java:74)</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code YO()} ran once (a
 * full enable→disable cycle) — the only visible callee is {@code gg.YO()}
 * (the base deregistration); the {@code and(Z)}/{@code ane()}/{@code anf()}
 * helpers never triggered. The tick {@code ana(gv)}, block-change
 * {@code anc(gV)} and render marker {@code anb(gH$th)} never triggered —
 * capture conditions: a client tick with the module enabled in-game (ana),
 * a block update inside the watched radius (anc), a rendered frame with a
 * lever target (anb).
 *
 * <p>State fields from decompile:
 * <ul>
 *   <li>{@code vuasL} ({@code mB} block-target record: {@code BlockPos cnb()}, {@code Vec3d cnc()}, {@code Direction cnd()})</li>
 *   <li>{@code jcQsa} ({@code float} eye-distance range gate fed to {@code jg.bBG(Vec3d, float)})</li>
 * </ul>
 */
public class AutoLeverReplace extends Module {
	/** Port of {@code sixtwo.mB} block-target record ({@code VBRbf}, {@code MgRaw}, {@code AoZAE}). */
	public record BlockTarget(BlockPos pos, Vec3d hitPos, Direction side) {
	}

	private final GroupSetting workWith = register(new GroupSetting("work_with"));
	private final BoolSetting autoTrap = new BoolSetting("auto_trap", false);
	private final BoolSetting autoWeb = new BoolSetting("auto_web", false);
	private final BoolSetting ignoreWalls = register(new BoolSetting("ignore_walls", true));

	/** Port of {@code vuasL : mB}. */
	private BlockTarget currentTarget;
	/** Port of {@code jcQsa : float} (eye-distance reach threshold). */
	private float range = 4.5f;

	public AutoLeverReplace() {
		super("auto_lever_replace", "Auto Lever Replace", "Automatically destroys levers", ModuleCategory.WORLD);
		workWith.add(autoTrap);
		workWith.add(autoWeb);
	}

	@Override
	public void onEnable() {
		currentTarget = null;
	}

	@Override
	public void onDisable() {
		// trace 2026-10-17: dK.YO ran once — visible body is gg.YO()
		// (deregistration) only; vuasL is cleared as the state reset.
		currentTarget = null;
	}

	public BlockPos getTargetPos() {
		return currentTarget != null ? currentTarget.pos() : null;
	}

	/** Mirrors {@code sixtwo.dK#ank() -> mB}. */
	public BlockTarget getTarget() {
		return currentTarget;
	}

	/** Mirrors {@code sixtwo.dK#anl() -> float}. */
	public float getRange() {
		return range;
	}

	/**
	 * Block-change listener porting {@code @hG anc(gV)} (dK_.md:64-66, 89-91):
	 * clears {@code vuasL} as soon as the watched lever block becomes air ({@code method_26215}).
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		BlockTarget target = currentTarget;
		if (target == null) {
			return;
		}
		if (event.packet() instanceof BlockUpdateS2CPacket pkt) {
			if (pkt.getPos().equals(target.pos()) && pkt.getState().isAir()) {
				currentTarget = null;
			}
		} else if (event.packet() instanceof ChunkDeltaUpdateS2CPacket delta) {
			delta.visitUpdates((pos, state) -> {
				if (pos.equals(target.pos()) && state.isAir()) {
					currentTarget = null;
				}
			});
		}
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			currentTarget = null;
			return;
		}

		range = (float) player.getBlockInteractionRange();
		World world = player.getEntityWorld();

		// Validate existing vuasL target (isAir / lever check + jg.bBG eye-distance check + visibility)
		if (currentTarget != null) {
			BlockState state = world.getBlockState(currentTarget.pos());
			if (state.isAir()
					|| !state.isOf(Blocks.LEVER)
					|| !withinEyeRange(player, currentTarget.hitPos(), range)
					|| !visible(player, currentTarget.pos())) {
				currentTarget = null;
			}
		}

		if (!workWithAllows()) {
			currentTarget = null;
			return;
		}

		if (currentTarget == null) {
			currentTarget = findLeverTarget(client, player, world);
		}

		if (currentTarget != null) {
			RotationManager.get().submitPosition(currentTarget.hitPos(), RotationPriority.uWTdl, this);
			if (!client.interactionManager.updateBlockBreakingProgress(currentTarget.pos(), currentTarget.side())) {
				client.interactionManager.attackBlock(currentTarget.pos(), currentTarget.side());
			}
			player.swingHand(Hand.MAIN_HAND);
		}
	}

	/**
	 * Evaluates {@code Work With} cooperation with {@code eJ} (Auto Trap) and {@code eK} (Auto Web).
	 * If neither child toggle is enabled, operates standalone; if one or both are enabled, requires
	 * at least one selected partner module to be active.
	 */
	private boolean workWithAllows() {
		boolean useTrap = autoTrap.getValue();
		boolean useWeb = autoWeb.getValue();
		if (!useTrap && !useWeb) {
			return true;
		}
		if (useTrap) {
			Module trap = ModuleManager.get().byId("auto_trap");
			if (trap != null && trap.isEnabled()) {
				return true;
			}
		}
		if (useWeb) {
			Module web = ModuleManager.get().byId("auto_web");
			if (web != null && web.isEnabled()) {
				return true;
			}
		}
		return false;
	}

	private BlockTarget findLeverTarget(MinecraftClient client, ClientPlayerEntity player, World world) {
		Set<BlockPos> candidates = new LinkedHashSet<>();
		boolean useTrap = autoTrap.getValue();
		boolean useWeb = autoWeb.getValue();

		if (useTrap || useWeb) {
			if (useTrap && ModuleManager.get().byId("auto_trap") instanceof AutoTrap trap && trap.isEnabled()) {
				candidates.addAll(trap.getActiveCandidatePositions(client, player));
			}
			if (useWeb && ModuleManager.get().byId("auto_web") instanceof AutoWeb web && web.isEnabled()) {
				candidates.addAll(web.getActiveCandidatePositions(client, player));
			}
		} else {
			int radius = (int) Math.ceil(range);
			for (BlockPos pos : BlockPos.iterateOutwards(player.getBlockPos(), radius, radius, radius)) {
				candidates.add(pos.toImmutable());
			}
		}

		List<BlockPos> ordered = new ArrayList<>(candidates);
		for (BlockPos pos : ordered) {
			BlockState state = world.getBlockState(pos);
			if (!state.isOf(Blocks.LEVER)) {
				continue;
			}
			Vec3d center = Vec3d.ofCenter(pos);
			if (!withinEyeRange(player, center, range)) {
				continue;
			}
			if (!visible(player, pos)) {
				continue;
			}
			Direction side = sideOf(player, pos);
			return new BlockTarget(pos.toImmutable(), center, side);
		}
		return null;
	}

	/** Mirrors {@code sixtwo.jg#bBG(Vec3d, float)}: eye-position distance check. */
	private static boolean withinEyeRange(ClientPlayerEntity player, Vec3d target, float maxRange) {
		return player.getEyePos().squaredDistanceTo(target) <= (double) (maxRange * maxRange);
	}

	private boolean visible(ClientPlayerEntity player, BlockPos pos) {
		if (ignoreWalls.getValue()) {
			return true;
		}
		Vec3d eye = player.getEyePos();
		HitResult hit = player.getEntityWorld().raycast(new RaycastContext(eye, Vec3d.ofCenter(pos),
				RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, player));
		return hit instanceof BlockHitResult blockHit && blockHit.getBlockPos().equals(pos);
	}

	private Direction sideOf(ClientPlayerEntity player, BlockPos pos) {
		HitResult hit = player.getEntityWorld().raycast(new RaycastContext(player.getEyePos(), Vec3d.ofCenter(pos),
				RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, player));
		if (hit instanceof BlockHitResult blockHit && blockHit.getBlockPos().equals(pos)) {
			return blockHit.getSide();
		}
		return Direction.UP;
	}
}
