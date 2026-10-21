package dev.opengrim.modules.world;

import java.lang.reflect.Field;
import java.util.Collections;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.mixin.ClientWorldAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.block.CropBlock;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.network.PendingUpdateManager;
import net.minecraft.client.network.SequencedPacketCreator;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.InputUtil;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.entity.Entity;
import net.minecraft.item.Item;
import net.minecraft.item.Items;
import net.minecraft.network.packet.c2s.play.PlayerActionC2SPacket;
import net.minecraft.registry.tag.FluidTags;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.shape.VoxelShape;
import net.minecraft.util.shape.VoxelShapes;
import net.minecraft.world.BlockView;
import net.minecraft.world.RaycastContext;
import net.minecraft.world.World;

/**
 * Nuker (registry sixtwo.dI): "Automatically mines blocks".
 *
 * <p>Port of sixtwo.dI.
 * Source: analysis/decompiled/payload-decrypted/sixtwo/dI.java:133-1660,
 * analysis/decompiled/payload-named-cfr/sixtwo/dI.java:133-1660.
 * Spec: analysis/specs/handlers/dI.md.
 *
 * <p>Settings tree:
 * <ul>
 *   <li>Blocks (fEoGq, dI.java:136-143) cK filter setting with default minable set jc.GjreY</li>
 *   <li>Range (mHbSn, dI.java:144) step 0.1 min 2.0 max 6.0 default 4.5 " blocks"</li>
 *   <li>Delay (wLMcW, dI.java:145) step 1.0 min 0.0 max 20.0 default 0.0 " ticks"</li>
 *   <li>Block To Mine (OEGRT, dI.java:146-182) mode with From List (JsQul), Selected (ndzRO), All (DmJAW)</li>
 *   <li>Selection Key (mbblx, dI.java:183-197) key setting default -999, visible when Selected</li>
 *   <li>Mining Speed (SIzNY, dI.java:198-236) mode with Normal (iMYFd), Faster (nKDKe), Fastest (cuKBK)</li>
 *   <li>Options (OgoNY, dI.java:237-298) group with Through Walls (RxRpl), Mine Flat (QxImU),
 *       Avoid Lava (vbcIH), Check Raycast (eBhEo, default true)</li>
 *   <li>Render Block (uhsFy, dI.java:299-312) default false</li>
 *   <li>Outline Color (fkIYK, dI.java:313-327) theme accent, visible when Render Block enabled</li>
 *   <li>Fill Color (kNGru, dI.java:328-339) theme accent at alpha 0.5, visible when Render Block enabled</li>
 *   <li>Filled (YdLcc, dI.java:340-347) default false, visible when Render Block enabled</li>
 *   <li>Mine In Screens (xbrHm, dI.java:348-364) default false</li>
 * </ul>
 * Handlers: alE(gv) pre-rotation tick target validation (dI.java:541-626),
 * alK() face refresh via raycast (dI.java:632-718), alM() mining engine (dI.java:720-793),
 * alH(gA) selection key block picker (dI.java:798-895), alN() dig tick (dI.java:933-936),
 * alJ() target scanner (dI.java:942-1115), alI(go.sX) world render (dI.java:1129-1203),
 * alF(gH$th) client tick (dI.java:1213-1425), alG(gV) block update retarget (dI.java:1427-1500),
 * alL(BlockState) block filter (dI.java:1540-1647).
 *
 * <p>Audit 2026-10-17 fixes (bytecode-verified against {@code dI_.class}):
 * <ul>
 *   <li>Block To Mine default is index 0 = From List (ct default {@code kErPl=0};
 *       the previous "all" default was wrong).</li>
 *   <li>Blocks (cK) default set is jc.GjreY - every block with an item
 *       ({@code jc.bzN}, jc.java:1335-1352); alL's From List branch tests
 *       {@code blocks.contains(block.asItem())} (cK.WY, cK.java:552-554). The
 *       previous port checked a permanently empty string set.</li>
 *   <li>Outline/Fill color defaults are the theme accent
 *       ({@code rD.dlM().bjG().bis()} = ig.bis = ie.bhJ = mG.yHyOB = 0xFF9747FF,
 *       Theme.java:80-86) and the same color with alpha 0.5 ({@code .cob(0.5f)}).</li>
 *   <li>Delay uses the mT millisecond stopwatch (mT.cpD = elapsed > n * ms/tick,
 *       mT.cpB reset) instead of a tick counter.</li>
 *   <li>alK samples the full 0..1/0.2 grid inside the target and only refreshes
 *       the face (the original never rewrites the hit point, dI.java:695-707);
 *       Through Walls uses ox.cHc (target as a full cube, all else air).</li>
 *   <li>alJ Through Walls uses ox.cHc; alM's Check Raycast gate uses ox.cHa
 *       (raycast along the rotation manager's direction, dI.java:778 + ox.java:188-206).</li>
 *   <li>Fastest mode matches alF's loop order (flat, lava, state, range, filter)
 *       and sends the sequenced START_DESTROY_BLOCK packet (jd.bAo = vanilla
 *       sendSequencedPacket) before breakBlock + swing.</li>
 *   <li>Render (Faster) mode runs alM once per frame with no screen gate
 *       (alI has none, dI.java:1220-1224).</li>
 * </ul>
 *
 * <p>Known divergences:
 * <ul>
 *   <li>The cK "Blocks" item multiselect has no settings-API equivalent; it is a
 *       programmatic {@link #getBlocks()} set (BlockEsp precedent).</li>
 *   <li>gv (pre-rotation tick) is folded into the client tick and gA (input) is
 *       polled with an edge latch - neither event exists on the port's bus.</li>
 *   <li>gV (block state change) has no bus event; the break is observed at the
 *       dig site (alM after alN) and drives the alG body verbatim.</li>
 *   <li>mT.cpD's ms-per-tick constant is DES-encrypted through the native
 *       gb.aYR key machinery; 50 ms/tick is a labelled high-probability guess.</li>
 * </ul>
 */
public class Nuker extends Module {
	/** cK "Blocks" (fEoGq, dI.java:143): placeholder node - the item multiselect is programmatic. */
	private final GroupSetting blocksGroup = register(new GroupSetting("blocks"));
	private final DoubleSetting range = register(new DoubleSetting("range", 0.1, 2.0, 6.0, 4.5, " blocks"));
	private final DoubleSetting delay = register(new DoubleSetting("delay", 1.0, 0.0, 20.0, 0.0, " ticks"));
	private final ModeSetting blockToMine = register(new ModeSetting("block_to_mine",
			List.of("from_list", "selected", "all"), "from_list"));
	private final IntSetting selectionKey = register(new IntSetting("selection_key", -999, 348, -999));
	private final ModeSetting miningSpeed = register(new ModeSetting("mining_speed",
			List.of("normal", "faster", "fastest"), "normal"));
	private final GroupSetting options = register(new GroupSetting("options"));
	private final BoolSetting throughWalls = new BoolSetting("through_walls", false);
	private final BoolSetting mineFlat = new BoolSetting("mine_flat", false);
	private final BoolSetting avoidLava = new BoolSetting("avoid_lava", false);
	private final BoolSetting checkRaycast = new BoolSetting("check_raycast", true);
	private final BoolSetting renderBlock = register(new BoolSetting("render_block", false));
	private final ColorSetting outlineColor = register(new ColorSetting("outline_color", 0xFF9747FF, false));
	private final ColorSetting fillColor = register(new ColorSetting("fill_color", 0x809747FF));
	private final BoolSetting filled = register(new BoolSetting("filled", false));
	private final BoolSetting mineInScreens = register(new BoolSetting("mine_in_screens", false));

	/** ms per tick used by mT.cpD (dI.java:733). [G] - see class javadoc. */
	private static final long MS_PER_TICK = 50L;

	/** cK "Blocks" value set (eAose); default jc.GjreY, jc.java:2168. */
	private final Set<Item> blocks = new LinkedHashSet<>(defaultBlockItems());

	private MiningTarget target;
	private Block pickedBlock;
	/** mT uqcOW (mT.cpz at dI.java:365): last reset (cpB) stamp, ms. */
	private long timerReset = System.currentTimeMillis();
	private boolean selectionKeyDown;

	private static class MiningTarget {
		BlockPos pos;
		Vec3d hitPoint;
		Direction side;

		MiningTarget(BlockPos pos, Vec3d hitPoint, Direction side) {
			this.pos = pos;
			this.hitPoint = hitPoint;
			this.side = side != null ? side : Direction.UP;
		}
	}

	public Nuker() {
		super("nuker", "Nuker", "Automatically mines blocks", ModuleCategory.PLAYER);
		options.add(throughWalls);
		options.add(mineFlat);
		options.add(avoidLava);
		options.add(checkRaycast);
	}

	/**
	 * Port of jc.bzN (jc.java:1335-1352): every declared {@link Blocks} field
	 * whose {@code asItem()} is not {@link Items#AIR} - the jc.GjreY default of
	 * the cK "Blocks" setting.
	 */
	private static Set<Item> defaultBlockItems() {
		Set<Item> items = new LinkedHashSet<>();
		for (Field field : Blocks.class.getDeclaredFields()) {
			try {
				if (!(field.get(null) instanceof Block block) || block.asItem() == Items.AIR) {
					continue;
				}
				items.add(block.asItem());
			} catch (IllegalAccessException ignored) {
			}
		}
		return items;
	}

	/** cK.WL (cK.java:117-119): the current "Blocks" value set. */
	public Set<Item> getBlocks() {
		return Collections.unmodifiableSet(blocks);
	}

	/** cK.WV (cK.java:484): add an item to the "Blocks" set. */
	public void addBlock(Item item) {
		blocks.add(item);
	}

	/** cK.WU (cK.java:584): remove an item from the "Blocks" set. */
	public void removeBlock(Item item) {
		blocks.remove(item);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			resetBreaking();
			return;
		}
		updateVisibility();
		handleSelectionKey(client, player);
		boolean screensBlocked = client.currentScreen != null && !mineInScreens.getValue();
		// alE (gv pre-rotation tick, dI.java:541-626) is folded into the client
		// tick - the port's bus has no pre-rotation event.
		if (!screensBlocked) {
			alE(client, player);
		}
		// alF (gH$th, dI.java:1213-1425).
		if (screensBlocked) {
			return;
		}
		if (target == null) {
			target = alJ(client, player);
			return;
		}
		if ("normal".equals(miningSpeed.getValue())) {
			alM(client, player);
			return;
		}
		if (!"fastest".equals(miningSpeed.getValue())) {
			return;
		}
		fastestMine(client, player);
	}

	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		if (target == null) {
			return;
		}
		if (renderBlock.getValue()) {
			renderTargetBox(event, target.pos);
		}
		// alI (dI.java:1129-1203): the Faster mode drives alM from the render
		// event, ungated by the open-screen check.
		if ("faster".equals(miningSpeed.getValue())) {
			MinecraftClient client = MinecraftClient.getInstance();
			ClientPlayerEntity player = client.player;
			if (player != null && player.getEntityWorld() != null && client.interactionManager != null) {
				alM(client, player);
			}
		}
	}

	private void updateVisibility() {
		selectionKey.setVisible("selected".equals(blockToMine.getValue()));
		outlineColor.setVisible(renderBlock.getValue());
		fillColor.setVisible(renderBlock.getValue());
		filled.setVisible(renderBlock.getValue());
	}

	/** Pre-rotation validation and rotation submit (dI.java:541-626, alE). */
	private void alE(MinecraftClient client, ClientPlayerEntity player) {
		if (target == null) {
			return;
		}
		if (!inRange(target.hitPoint, range.getValue().floatValue())) {
			target = null;
			return;
		}
		RotationManager.get().submitPosition(target.hitPoint, RotationPriority.uWTdl, this);
	}

	/** Selection-key block picker (dI.java:798-895, alH). */
	private void handleSelectionKey(MinecraftClient client, ClientPlayerEntity player) {
		if (!"selected".equals(blockToMine.getValue())) {
			selectionKeyDown = false;
			return;
		}
		int code = selectionKey.getValue();
		boolean down = code >= 0 && code <= 348
				&& InputUtil.isKeyPressed(client.getWindow(), code);
		if (down && !selectionKeyDown) {
			if (client.crosshairTarget instanceof BlockHitResult hit
					&& hit.getType() == HitResult.Type.BLOCK) {
				pickedBlock = player.getEntityWorld().getBlockState(hit.getBlockPos()).getBlock();
				target = alJ(client, player);
			} else {
				pickedBlock = null;
			}
		}
		selectionKeyDown = down;
	}

	/** Mining engine (dI.java:720-793, alM). */
	private void alM(MinecraftClient client, ClientPlayerEntity player) {
		if (target == null) {
			return;
		}
		if (!delayElapsed()) {
			return;
		}
		if (player.getEntityWorld().getBlockState(target.pos).isAir()) {
			target = alJ(client, player);
			return;
		}
		if (checkRaycast.getValue() && !hasLineOfSight(target.pos, range.getValue().floatValue())) {
			return;
		}
		alK(client, player);
		alN(client, player);
		// Port compensation for alG(gV) (dI.java:1427-1500): the port's bus has
		// no block-state-change event, so the break is observed at the dig site.
		BlockPos dug = target.pos;
		handleBlockChanged(client, player, dug, player.getEntityWorld().getBlockState(dug));
	}

	/** mT.cpD gate (dI.java:733): elapsed > delay * ms-per-tick since the last cpB. */
	private boolean delayElapsed() {
		return System.currentTimeMillis() - timerReset > delay.getValue().intValue() * MS_PER_TICK;
	}

	/**
	 * Port of alG (dI.java:1427-1500): a block-state change to the current
	 * target that turned it air invalidates the target, restarts the delay
	 * timer (mT.cpB) and immediately retargets.
	 */
	private void handleBlockChanged(MinecraftClient client, ClientPlayerEntity player, BlockPos pos, BlockState state) {
		if ("fastest".equals(miningSpeed.getValue())) {
			return;
		}
		if (target == null) {
			return;
		}
		if (pos.equals(target.pos) && state.isAir()) {
			target = null;
			timerReset = System.currentTimeMillis();
			target = alJ(client, player);
		}
	}

	/** Dig execution tick (dI.java:933-936, alN). */
	private void alN(MinecraftClient client, ClientPlayerEntity player) {
		client.interactionManager.updateBlockBreakingProgress(target.pos, target.side);
		player.swingHand(Hand.MAIN_HAND);
	}

	/** Face refresh via raycast (dI.java:632-718, alK). */
	private void alK(MinecraftClient client, ClientPlayerEntity player) {
		if (target == null) {
			return;
		}
		if (throughWalls.getValue()) {
			// alK dI.java:653-655 - collider raycast that treats the target as a
			// full cube and every other block as air (ox.cHc).
			BlockHitResult hit = raycastIgnoringBlocks(client, new RaycastContext(player.getEyePos(),
					target.pos.toCenterPos(), RaycastContext.ShapeType.COLLIDER,
					RaycastContext.FluidHandling.NONE, player), target.pos);
			target.side = hit.getSide();
			return;
		}
		// alK dI.java:660-707 - sample the 0..1/0.2 grid inside the target; every
		// matching OUTLINE hit refreshes the face (the last one wins, the hit
		// point is never rewritten).
		for (float x = 0.0f; x <= 1.0f; x += 0.2f) {
			for (float y = 0.0f; y <= 1.0f; y += 0.2f) {
				for (float z = 0.0f; z <= 1.0f; z += 0.2f) {
					Vec3d point = new Vec3d((double) target.pos.getX() + x,
							(double) target.pos.getY() + y, (double) target.pos.getZ() + z);
					BlockHitResult hit = player.getEntityWorld().raycast(new RaycastContext(player.getEyePos(),
							point, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, player));
					if (hit.getType() == HitResult.Type.BLOCK && hit.getBlockPos().equals(target.pos)) {
						target.side = hit.getSide();
					}
				}
			}
		}
	}

	/**
	 * Port of ox.cHc (ox.java:223-244 + ox.cHv/cHu): raycast the context start
	 * to end while the target position is treated as a full cube (OBSIDIAN) and
	 * every other position as air; a miss yields {@code BlockHitResult.createMissed}.
	 */
	private static BlockHitResult raycastIgnoringBlocks(MinecraftClient client, RaycastContext context, BlockPos pos) {
		ClientWorld world = client.world;
		return BlockView.raycast(context.getStart(), context.getEnd(), context, (ctx, blockPos) -> {
			BlockState state = blockPos.equals(pos) ? Blocks.OBSIDIAN.getDefaultState() : Blocks.AIR.getDefaultState();
			VoxelShape shape = ctx.getBlockShape(state, world, blockPos);
			BlockHitResult blockHit = world.raycastBlock(ctx.getStart(), ctx.getEnd(), blockPos, shape, state);
			VoxelShape empty = VoxelShapes.empty();
			BlockHitResult emptyHit = empty.raycast(ctx.getStart(), ctx.getEnd(), blockPos);
			double blockDist = blockHit == null ? Double.MAX_VALUE
					: ctx.getStart().squaredDistanceTo(blockHit.getPos());
			double emptyDist = emptyHit == null ? Double.MAX_VALUE
					: ctx.getStart().squaredDistanceTo(emptyHit.getPos());
			return blockDist <= emptyDist ? blockHit : emptyHit;
		}, ctx -> {
			Vec3d diff = ctx.getStart().subtract(ctx.getEnd());
			return BlockHitResult.createMissed(ctx.getEnd(),
					Direction.getFacing(diff.x, diff.y, diff.z), BlockPos.ofFloored(ctx.getEnd()));
		});
	}

	/** Target scanner (dI.java:942-1115, alJ). */
	private MiningTarget alJ(MinecraftClient client, ClientPlayerEntity player) {
		int radius = range.getValue().intValue();
		BlockPos origin = BlockPos.ofFloored(player.getEntityPos()).up();
		float maxRange = range.getValue().floatValue();
		for (BlockPos pos : BlockPos.iterateOutwards(origin, radius, radius, radius)) {
			BlockState state = player.getEntityWorld().getBlockState(pos);
			if (state.isAir()) {
				continue;
			}
			if (mineFlat.getValue() && (double) pos.getY() - player.getY() < 0.0) {
				continue;
			}
			if (!inRange(pos.toCenterPos(), maxRange)) {
				continue;
			}
			if (avoidLava.getValue() && nearLava(player.getEntityWorld(), pos)) {
				continue;
			}
			if (!alL(state)) {
				continue;
			}
			if (throughWalls.getValue()) {
				// alJ dI.java:1061-1062 - ox.cHc (target as a full cube, all else air).
				BlockHitResult hit = raycastIgnoringBlocks(client, new RaycastContext(player.getEyePos(),
						pos.toCenterPos(), RaycastContext.ShapeType.COLLIDER,
						RaycastContext.FluidHandling.NONE, player), pos);
				return new MiningTarget(pos.toImmutable(), hit.getPos(), hit.getSide());
			}
			for (float x = 0.0f; x <= 1.0f; x += 0.2f) {
				for (float y = 0.0f; y <= 1.0f; y += 0.2f) {
					for (float z = 0.0f; z <= 1.0f; z += 0.2f) {
						Vec3d point = new Vec3d((double) pos.getX() + x,
								(double) pos.getY() + y, (double) pos.getZ() + z);
						BlockHitResult hit = player.getEntityWorld().raycast(new RaycastContext(player.getEyePos(),
								point, RaycastContext.ShapeType.OUTLINE,
								RaycastContext.FluidHandling.NONE, player));
						if (hit.getType() == HitResult.Type.BLOCK && hit.getBlockPos().equals(pos)) {
							return new MiningTarget(pos.toImmutable(), point, hit.getSide());
						}
					}
				}
			}
		}
		return null;
	}

	/** Block filter (dI.java:1540-1647, alL). */
	private boolean alL(BlockState state) {
		if (!state.getFluidState().isEmpty()) {
			return false;
		}
		Block block = state.getBlock();
		if (block instanceof CropBlock crop) {
			if (crop.getAge(state) < crop.getMaxAge()) {
				return false;
			}
		}
		if ("from_list".equals(blockToMine.getValue())) {
			// cK.WY (cK.java:552-554): the block's item is in the "Blocks" set.
			return blocks.contains(block.asItem());
		}
		if ("selected".equals(blockToMine.getValue())) {
			return block == pickedBlock;
		}
		return true;
	}

	/** Fastest mining mode: breaks all blocks in radius per tick (dI.java:1319-1425). */
	private void fastestMine(MinecraftClient client, ClientPlayerEntity player) {
		int radius = range.getValue().intValue();
		BlockPos origin = BlockPos.ofFloored(player.getEntityPos()).up();
		float maxRange = range.getValue().floatValue();
		for (BlockPos pos : BlockPos.iterateOutwards(origin, radius, radius, radius)) {
			if (mineFlat.getValue() && (double) pos.getY() - player.getY() < 0.0) {
				continue;
			}
			if (avoidLava.getValue() && nearLava(player.getEntityWorld(), pos)) {
				continue;
			}
			BlockState state = player.getEntityWorld().getBlockState(pos);
			if (!inRange(pos.toCenterPos(), maxRange)) {
				continue;
			}
			if (!alL(state)) {
				continue;
			}
			try {
				// jd.bAo (jd.java) = sequenced action packet through the block
				// prediction handler; the vanilla path is
				// ClientPlayerInteractionManager#sendSequencedPacket (private).
				sendSequencedPacket(sequence -> new PlayerActionC2SPacket(
						PlayerActionC2SPacket.Action.START_DESTROY_BLOCK, pos, Direction.UP, sequence));
				client.interactionManager.breakBlock(pos);
				player.swingHand(Hand.MAIN_HAND);
			} catch (Exception ignored) {
			}
		}
	}

	/** Port of jd.bAo (jd.java): send a packet carrying the block-prediction sequence. */
	private static void sendSequencedPacket(SequencedPacketCreator creator) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null) {
			return;
		}
		ClientWorld world = client.world;
		if (world == null) {
			return;
		}
		PendingUpdateManager manager =
				((ClientWorldAccessor) world).opengrim$getPendingUpdateManager().incrementSequence();
		try {
			client.getNetworkHandler().sendPacket(creator.predict(manager.getSequence()));
		} finally {
			manager.close();
		}
	}

	/** jg.bBG (jg.java): eye distance to the point <= range. */
	private static boolean inRange(Vec3d point, float maxRange) {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		return player != null && player.getEyePos().distanceTo(point) <= (double) maxRange;
	}

	/**
	 * Raycast line-of-sight check (ox.cHa/cHb, ox.java:188-206 + dI.java:778):
	 * the ray runs from the camera entity's eye along the rotation manager's
	 * effective direction (qL.dbC, ox.java:196) and is capped at Range.
	 */
	private static boolean hasLineOfSight(BlockPos pos, double maxReach) {
		Entity camera = MinecraftClient.getInstance().getCameraEntity();
		if (camera == null) {
			return false;
		}
		Vec3d eye = camera.getEyePos();
		Vec3d dir = RotationManager.get().effectiveRotation().toDirection();
		Vec3d end = eye.add(dir.x * maxReach, dir.y * maxReach, dir.z * maxReach);
		return new Box(pos).raycast(eye, end).isPresent();
	}

	/**
	 * Avoid Lava check (dI.java:1027/1371 call {@code ja.byI(BlockPos)}).
	 * {@code ja.byI} is a native-VM method with no Java body and no handler in
	 * the ghidra corpora; this 3x3x3 lava-fluid test is a labelled
	 * high-probability guess [G] for "block position is near lava".
	 */
	private boolean nearLava(World world, BlockPos pos) {
		for (BlockPos neighbor : BlockPos.iterateOutwards(pos, 1, 1, 1)) {
			if (world.getFluidState(neighbor).isIn(FluidTags.LAVA)) {
				return true;
			}
		}
		return false;
	}

	private void renderTargetBox(WorldRenderEvent event, BlockPos pos) {
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		if (matrices == null || consumers == null) {
			return;
		}
		Vec3d cam = event.camera().getCameraPos();
		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();
			Box box = new Box(pos);
			if (filled.getValue()) {
				// iW.bxs fill pass (iW.java): the fill color's alpha is halved.
				int fill = fillColor.getValue();
				drawFilledBox(entry, consumers, box, (fill & 0x00FFFFFF) | ((fillColor.alpha() / 2) << 24));
			}
			drawBoxOutline(entry, consumers, box, outlineColor.getValue());
		} finally {
			matrices.pop();
		}
	}

	private static void drawFilledBox(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y0, z1, x0, y0, z1, r, g, b, a);
		quad(entry, vc, x0, y1, z0, x1, y1, z0, x1, y1, z1, x0, y1, z1, r, g, b, a);
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y1, z0, x0, y1, z0, r, g, b, a);
		quad(entry, vc, x0, y0, z1, x1, y0, z1, x1, y1, z1, x0, y1, z1, r, g, b, a);
		quad(entry, vc, x0, y0, z0, x0, y0, z1, x0, y1, z1, x0, y1, z0, r, g, b, a);
		quad(entry, vc, x1, y0, z0, x1, y0, z1, x1, y1, z1, x1, y1, z0, r, g, b, a);
	}

	private static void quad(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float cx, float cy, float cz, float dx, float dy, float dz,
			float r, float g, float b, float a) {
		vc.vertex(entry, ax, ay, az).color(r, g, b, a);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a);
		vc.vertex(entry, cx, cy, cz).color(r, g, b, a);
		vc.vertex(entry, dx, dy, dz).color(r, g, b, a);
	}

	private static void drawBoxOutline(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.lines());
		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, y1 = (float) box.maxY, z1 = (float) box.maxZ;
		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(1.0f);
	}

	@Override
	protected void onDisable() {
		// YO (dI.java:1745-1750): super.YO(); jpzPS = null; OXKNB = null.
		pickedBlock = null;
		target = null;
		selectionKeyDown = false;
	}

	/**
	 * Port of {@code dI.amm()} (dI_.class: {@code amm()} returns the private
	 * {@code OXKNB} mining-target record): true while a mining target is held.
	 * Consumed by Kill Aura's pause gate {@code fr#aNB} (fr.java:1018-1029).
	 */
	public boolean isMining() {
		return target != null;
	}

	private void resetBreaking() {
		target = null;
	}
}
