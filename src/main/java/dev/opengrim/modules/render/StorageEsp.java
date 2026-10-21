package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

import com.mojang.datafixers.util.Pair;

import net.minecraft.block.entity.BlockEntity;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.item.Item;
import net.minecraft.item.Items;
import net.minecraft.util.Util;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.ChunkPos;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.chunk.ChunkStatus;
import net.minecraft.world.chunk.WorldChunk;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;

/**
 * Storage ESP (registry sixtwo.dq, module id 81, bind -999): "Draws box around
 * storage blocks".
 *
 * <p>1:1 port of sixtwo.dq (analysis/decompiled/casesafe/payload-decrypted/sixtwo/dq.java
 * - the on-disk {@code payload-decrypted/sixtwo/dq.java} is the case twin dQ/Hit
 * Sounds and was NOT used; handler spec analysis/specs/handlers/dq.md; bytecode
 * {@code javap -c -p analysis/decompiled/jar-casesafe/sixtwo/dq.class}). Category
 * {@code gh.nOCvV} (dq.java:110). Settings in declaration order:
 * <ul>
 *   <li>Block Entities {@code cK .WK(Item[]).WQ()} (dq.java:136) seeded with
 *       Chest, Barrel, Shulker Box, Ender Chest, Furnace, Trapped Chest,
 *       Brewing Stand, Spawner, Hopper (dq.java:126-135);</li>
 *   <li>Filled {@code cJ .WE(false)} (dq.java:144);</li>
 *   <li>Tracers {@code cJ .WE(false)} (dq.java:153);</li>
 *   <li>Tracers Width {@code cC .Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0)} (dq.java:168),
 *       visible only while Tracers is on (dq.java:585);</li>
 *   <li>18 colors {@code cG} (dq.java:189-580): Chest, Barrel, Shulker, Ender
 *       Chest, Furnace, Trapped Chest, Brewing Stand, Spawner, Hopper, each
 *       Outline ({@code .Uf(theme.bis())}) then Fill
 *       ({@code .Uf(theme.bis().cob(0.5f))});</li>
 * </ul>
 *
 * <p>Handlers: {@code aaj()} enable (dq.java:716-721), {@code ahP(gH$th)} tick
 * (dq.java:1078-1138), {@code ahR()} scan (dq.java:881-930), {@code ahW(List)}
 * async swap (dq.java:6296-6309, bytecode), {@code ahO(Item)} item check
 * (dq.java:773-825), {@code ahN(BlockEntity)} color lookup (dq.java:723-771),
 * {@code ahS}/{@code ahT} color-map binding (dq.java:842-850), {@code ahQ(go$sX)}
 * render (dq.java:945-1076). There is no disable override.
 *
 * <p>Behavior: the tick handler throttles an off-thread scan of all loaded chunks
 * (one dedicated single-thread executor; the result swaps into the render list on
 * {@code Util.getMainWorkerExecutor()}) and restarts the throttle stopwatch after
 * each submission. A block entity is kept when its block item is one of the nine
 * seeded entries (or a colored/plain shulker box while the Shulker Box entry is
 * on - {@code ahO}, dq.java:773-825) and is enabled. Rendering draws the outline
 * (and the fill only when Filled is on) for every stored block entity inside the
 * camera frustum, then - when Tracers is on - a line of the outline color from the
 * eye (in first person 75 units forward, dq.java:1020-1034) to the block center.
 *
 * <p>Framework stand-ins (each labeled):
 * <ul>
 *   <li>[S] the {@code cK} item-set setting is a {@link GroupSetting} with nine
 *       {@link BoolSetting} children in the original seed order; the extra
 *       {@code .WQ()} flag (dq.java:136) has native semantics and no
 *       representation ([U], analysis/specs/handlers/dq.md "Unrecovered").</li>
 *   <li>[S] {@code cG} colors are {@link ColorSetting}s; the original defaults are
 *       the theme color ({@code rD.dlM().bjG().bis()}) and the same at 0.5 alpha
 *       ({@code .cob(0.5f)}), which resolve to white / 50% white - the convention
 *       of the peer ports (PopChams, SkeletonEsp, Trails).</li>
 *   <li>[S] {@code ja.byG()} (native, "loaded chunks") is {@code
 *       ClientWorld#getChunks()}; {@code ja.byD(chunk)} is literally {@code new
 *       ArrayList<>(chunk.getBlockEntities().values())} (ja.java:42-44).</li>
 *   <li>[S] {@code mT} stopwatch inlined (System.currentTimeMillis; {@code cpC} =
 *       elapsed &gt; arg strictly, mT.class javap); the interval constant
 *       {@code irQyF} is a class-key DES literal that is not in
 *       analysis/decrypted/full-dump.jsonl and whose key is native {@code
 *       gb.aYR}, so it is not statically recoverable - [G] 250 ms is used, a
 *       value consistent with the only trace-observable constraint (each observed
 *       {@code cpC} returned elapsed, max observed gap 14.4 s,
 *       analysis/traces/2026-10-17/by-class-casesafe/dq.jsonl).</li>
 *   <li>[S] the {@code MMuss}/{@code dJxyG} batchers and {@code kH.bTJ}/{@code
 *       kF.bTn} builders are replaced by direct {@code VertexConsumer} draws
 *       (RenderLayers.debugFilledBox / lines) with the same colors, geometry and
 *       ordering; {@code kH.bTJ}'s fourth argument (depth-test flag, constant
 *       false, dq.java:1005) has no equivalent here.</li>
 * </ul>
 */
public class StorageEsp extends Module {
	/**
	 * [G] {@code dq.irQyF} rescan throttle in ms - a class-key DES constant, not
	 * recoverable from the pool dump; see the class javadoc.
	 */
	private static final long SCAN_INTERVAL_MS = 250L;

	/** {@code jc.FFgfM} (jc.java:2169-2187): plain + 16 colored shulker items. */
	private static final Set<Item> SHULKER_ITEMS = Set.of(Items.SHULKER_BOX, Items.WHITE_SHULKER_BOX,
			Items.ORANGE_SHULKER_BOX, Items.MAGENTA_SHULKER_BOX, Items.LIGHT_BLUE_SHULKER_BOX, Items.YELLOW_SHULKER_BOX,
			Items.LIME_SHULKER_BOX, Items.PINK_SHULKER_BOX, Items.GRAY_SHULKER_BOX, Items.LIGHT_GRAY_SHULKER_BOX,
			Items.CYAN_SHULKER_BOX, Items.PURPLE_SHULKER_BOX, Items.BLUE_SHULKER_BOX, Items.BROWN_SHULKER_BOX,
			Items.GREEN_SHULKER_BOX, Items.RED_SHULKER_BOX, Items.BLACK_SHULKER_BOX);

	private final GroupSetting blockEntities = register(new GroupSetting("block_entities"));
	private final BoolSetting chest = register(new BoolSetting("chest", true));
	private final BoolSetting barrel = register(new BoolSetting("barrel", true));
	private final BoolSetting shulkerBox = register(new BoolSetting("shulker_box", true));
	private final BoolSetting enderChest = register(new BoolSetting("ender_chest", true));
	private final BoolSetting furnace = register(new BoolSetting("furnace", true));
	private final BoolSetting trappedChest = register(new BoolSetting("trapped_chest", true));
	private final BoolSetting brewingStand = register(new BoolSetting("brewing_stand", true));
	private final BoolSetting spawner = register(new BoolSetting("spawner", true));
	private final BoolSetting hopper = register(new BoolSetting("hopper", true));

	private final BoolSetting filled = register(new BoolSetting("filled", false));
	private final BoolSetting tracers = register(new BoolSetting("tracers", false));
	private final DoubleSetting tracersWidth = register(new DoubleSetting("tracers_width", 0.1, 1.0, 3.0, 1.0, null));

	private final ColorSetting chestOutlineColor = register(new ColorSetting("chest_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting chestFillColor = register(new ColorSetting("chest_fill_color", 0x80FFFFFF, true));
	private final ColorSetting barrelOutlineColor = register(new ColorSetting("barrel_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting barrelFillColor = register(new ColorSetting("barrel_fill_color", 0x80FFFFFF, true));
	private final ColorSetting shulkerOutlineColor = register(new ColorSetting("shulker_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting shulkerFillColor = register(new ColorSetting("shulker_fill_color", 0x80FFFFFF, true));
	private final ColorSetting enderChestOutlineColor = register(new ColorSetting("ender_chest_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting enderChestFillColor = register(new ColorSetting("ender_chest_fill_color", 0x80FFFFFF, true));
	private final ColorSetting furnaceOutlineColor = register(new ColorSetting("furnace_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting furnaceFillColor = register(new ColorSetting("furnace_fill_color", 0x80FFFFFF, true));
	private final ColorSetting trappedChestOutlineColor = register(new ColorSetting("trapped_chest_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting trappedChestFillColor = register(new ColorSetting("trapped_chest_fill_color", 0x80FFFFFF, true));
	private final ColorSetting brewingStandOutlineColor = register(new ColorSetting("brewing_stand_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting brewingStandFillColor = register(new ColorSetting("brewing_stand_fill_color", 0x80FFFFFF, true));
	private final ColorSetting spawnerOutlineColor = register(new ColorSetting("spawner_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting spawnerFillColor = register(new ColorSetting("spawner_fill_color", 0x80FFFFFF, true));
	private final ColorSetting hopperOutlineColor = register(new ColorSetting("hopper_outline_color", 0xFFFFFFFF, false));
	private final ColorSetting hopperFillColor = register(new ColorSetting("hopper_fill_color", 0x80FFFFFF, true));

	/** {@code bZIEf} (dq.java:581): item -&gt; (outline, fill) color settings. */
	private final Map<Item, Pair<ColorSetting, ColorSetting>> colorPairs = new LinkedHashMap<>();
	/** {@code DJvpl} (dq.java:583): block entities from the last completed scan. */
	private final List<BlockEntity> blockEntityList = new ArrayList<>();
	/** {@code balhj} (dq.java:584): private single-thread scan executor. */
	private final ExecutorService executor = Executors.newSingleThreadExecutor(r -> {
		Thread thread = new Thread(r, "OpenGrim-StorageEsp-Scanner");
		thread.setDaemon(true);
		return thread;
	});
	/** {@code laGjl} (dq.java:582): rescan stopwatch. */
	private long scanTimerStart;
	/** {@code pvnDE} (dq.java:99, 720, 1128): scan-ready flag (never cleared). */
	private boolean scanReady;

	public StorageEsp() {
		super("storage_esp", "Storage ESP", "Draws box around storage blocks", ModuleCategory.VISUALS);
		// cK seed order, dq.java:126-135.
		blockEntities.add(chest);
		blockEntities.add(barrel);
		blockEntities.add(shulkerBox);
		blockEntities.add(enderChest);
		blockEntities.add(furnace);
		blockEntities.add(trappedChest);
		blockEntities.add(brewingStand);
		blockEntities.add(spawner);
		blockEntities.add(hopper);
		// bZIEf seeding, dq.java:586-607.
		bind(Items.CHEST, chestOutlineColor, chestFillColor);
		bind(Items.BARREL, barrelOutlineColor, barrelFillColor);
		for (Item item : SHULKER_ITEMS) {
			colorPairs.put(item, Pair.of(shulkerOutlineColor, shulkerFillColor));
		}
		bind(Items.ENDER_CHEST, enderChestOutlineColor, enderChestFillColor);
		bind(Items.FURNACE, furnaceOutlineColor, furnaceFillColor);
		bind(Items.TRAPPED_CHEST, trappedChestOutlineColor, trappedChestFillColor);
		bind(Items.BREWING_STAND, brewingStandOutlineColor, brewingStandFillColor);
		bind(Items.SPAWNER, spawnerOutlineColor, spawnerFillColor);
		bind(Items.HOPPER, hopperOutlineColor, hopperFillColor);
		// mT.cpz() resets the stopwatch at construction (mT.class javap).
		scanTimerStart = System.currentTimeMillis();
	}

	/** {@code ahS(Item, cG, cG)} (dq.java:842-845): register the color pair for an item. */
	private void bind(Item item, ColorSetting outline, ColorSetting fill) {
		colorPairs.put(item, Pair.of(outline, fill));
	}

	/** {@code aaj()} (dq.java:716-721): enable - drop the old list, arm the scan. */
	@Override
	protected void onEnable() {
		blockEntityList.clear();
		scanReady = true;
	}

	/**
	 * {@code ahP(gH$th)} (dq.java:1078-1138): in-game + throttle-elapsed +
	 * scan-ready gate, then submit the scan and restart the stopwatch. The
	 * {@code pvnDE} gate is never cleared after enable (only writes are
	 * {@code = true}, dq.java:720 and 1128), so it only blocks the very first
	 * tick before enable; analysis/specs/handlers/dq.md:23 describes it as a
	 * busy check - corrected here from the bytecode.
	 */
	@Override
	public void onTick() {
		updateVisibility();
		MinecraftClient client = MinecraftClient.getInstance();
		if (!inGame(client)) {
			return;
		}
		if (!(System.currentTimeMillis() - scanTimerStart > SCAN_INTERVAL_MS)) {
			return;
		}
		if (!scanReady) {
			return;
		}
		List<WorldChunk> chunks = loadedChunks(client);
		CompletableFuture.supplyAsync(() -> scan(chunks), executor).thenAcceptAsync(list -> {
			blockEntityList.clear();
			blockEntityList.addAll(list);
			scanReady = true;
		}, Util.getMainWorkerExecutor());
		scanTimerStart = System.currentTimeMillis();
	}

	/**
	 * {@code ja.byG()} (ja.java:46, native "loaded chunks"): snapshotted on the
	 * main thread as the chunks around the player within the clamped view
	 * distance + 1 (the same access the peer chunk scans use,
	 * {@code WorldChunkManager#getChunk(x, z, ChunkStatus.FULL, false)}).
	 */
	private static List<WorldChunk> loadedChunks(MinecraftClient client) {
		List<WorldChunk> chunks = new ArrayList<>();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return chunks;
		}
		ChunkPos center = player.getChunkPos();
		int radius = client.options.getViewDistance().getValue() + 1;
		for (int dx = -radius; dx <= radius; dx++) {
			for (int dz = -radius; dz <= radius; dz++) {
				WorldChunk chunk = client.world.getChunkManager().getChunk(center.x + dx, center.z + dz,
						ChunkStatus.FULL, false);
				if (chunk != null) {
					chunks.add(chunk);
				}
			}
		}
		return chunks;
	}

	/**
	 * {@code ahR()} (dq.java:881-930): every block entity of the loaded chunks
	 * whose block item is registered and enabled.
	 */
	private List<BlockEntity> scan(List<WorldChunk> chunks) {
		List<BlockEntity> found = new ArrayList<>();
		for (WorldChunk chunk : chunks) {
			for (BlockEntity blockEntity : new ArrayList<>(chunk.getBlockEntities().values())) {
				Item item = blockEntity.getCachedState().getBlock().asItem();
				if (colorPairs.containsKey(item) && visibleFor(item)) {
					found.add(blockEntity);
				}
			}
		}
		return found;
	}

	/**
	 * {@code ahO(Item)} (dq.java:773-825): the item's own toggle, or - for any
	 * plain/colored shulker box - the Shulker Box toggle.
	 */
	private boolean visibleFor(Item item) {
		if (selected(item)) {
			return true;
		}
		return SHULKER_ITEMS.contains(item) && shulkerBox.getValue();
	}

	/** The nine seeded item entries mapped onto their boolean stand-ins. */
	private boolean selected(Item item) {
		if (item == Items.CHEST) {
			return chest.getValue();
		}
		if (item == Items.BARREL) {
			return barrel.getValue();
		}
		if (item == Items.SHULKER_BOX) {
			return shulkerBox.getValue();
		}
		if (item == Items.ENDER_CHEST) {
			return enderChest.getValue();
		}
		if (item == Items.FURNACE) {
			return furnace.getValue();
		}
		if (item == Items.TRAPPED_CHEST) {
			return trappedChest.getValue();
		}
		if (item == Items.BREWING_STAND) {
			return brewingStand.getValue();
		}
		if (item == Items.SPAWNER) {
			return spawner.getValue();
		}
		if (item == Items.HOPPER) {
			return hopper.getValue();
		}
		return false;
	}

	/**
	 * {@code ahN(BlockEntity)} (dq.java:723-771): the live (outline, fill) color
	 * values for a block entity, or null when its item is not shown.
	 */
	private int[] colorsFor(BlockEntity blockEntity) {
		Item item = blockEntity.getCachedState().getBlock().asItem();
		if (!visibleFor(item)) {
			return null;
		}
		Pair<ColorSetting, ColorSetting> pair = colorPairs.get(item);
		if (pair == null) {
			return null;
		}
		return new int[]{pair.getFirst().getValue(), pair.getSecond().getValue()};
	}

	/**
	 * The original wires every color's visibility to {@code ahO(item)} of its
	 * item ({@code ahT}, dq.java:847-850) and Tracers Width to
	 * {@code wzGtS.WF()} (dq.java:585); our widgets take a boolean, refreshed
	 * each tick (peer convention, e.g. Blink).
	 */
	private void updateVisibility() {
		tracersWidth.setVisible(tracers.getValue());
		chestOutlineColor.setVisible(visibleFor(Items.CHEST));
		chestFillColor.setVisible(visibleFor(Items.CHEST));
		barrelOutlineColor.setVisible(visibleFor(Items.BARREL));
		barrelFillColor.setVisible(visibleFor(Items.BARREL));
		shulkerOutlineColor.setVisible(visibleFor(Items.SHULKER_BOX));
		shulkerFillColor.setVisible(visibleFor(Items.SHULKER_BOX));
		enderChestOutlineColor.setVisible(visibleFor(Items.ENDER_CHEST));
		enderChestFillColor.setVisible(visibleFor(Items.ENDER_CHEST));
		furnaceOutlineColor.setVisible(visibleFor(Items.FURNACE));
		furnaceFillColor.setVisible(visibleFor(Items.FURNACE));
		trappedChestOutlineColor.setVisible(visibleFor(Items.TRAPPED_CHEST));
		trappedChestFillColor.setVisible(visibleFor(Items.TRAPPED_CHEST));
		brewingStandOutlineColor.setVisible(visibleFor(Items.BREWING_STAND));
		brewingStandFillColor.setVisible(visibleFor(Items.BREWING_STAND));
		spawnerOutlineColor.setVisible(visibleFor(Items.SPAWNER));
		spawnerFillColor.setVisible(visibleFor(Items.SPAWNER));
		hopperOutlineColor.setVisible(visibleFor(Items.HOPPER));
		hopperFillColor.setVisible(visibleFor(Items.HOPPER));
	}

	/**
	 * {@code ahQ(go$sX)} (dq.java:945-1076): frustum-gated outline (and fill when
	 * Filled is on) boxes for every stored block entity, then - when Tracers is
	 * on, not frustum-gated (dq.java:1039-1070) - one outline-colored line from
	 * the eye to each block center.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || blockEntityList.isEmpty()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (!inGame(client)) {
			return;
		}
		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d cam = event.camera().getCameraPos();
		Frustum frustum = client.worldRenderer.getCapturedFrustum();
		// Tracers gating is resolved before the pose push: an early return must
		// never leave the shared pose stack pushed (vanilla throws
		// "Pose stack not empty" at the end of the entity pass). The original's
		// tracer tail (kF.bTn) reads the camera entity only for its own batch.
		Entity cameraEntity = tracers.getValue() ? client.getCameraEntity() : null;
		float tickDelta = cameraEntity == null ? 0.0f
				: client.getRenderTickCounter().getTickProgress(true);
		matrices.push();
		try {
			matrices.translate(-cam.x, -cam.y, -cam.z);
			MatrixStack.Entry entry = matrices.peek();

			for (BlockEntity blockEntity : blockEntityList) {
				// jJ.bIC(blockEntity) -> jJ.bIA(pos.toCenterPos()) (jJ.java:87-117):
				// the center +-0.5 frustum box equals new Box(pos).
				if (frustum != null && !frustum.isVisible(new Box(blockEntity.getPos()))) {
					continue;
				}
				int[] colors = colorsFor(blockEntity);
				if (colors == null) {
					continue;
				}
				Box box = new Box(blockEntity.getPos());
				// kN.bUS draw order (kN.class javap): outline first (bUV), then the
				// fill gated by the Filled flag (bUW), then the unused third pass.
				drawBoxOutline(entry, consumers, box, colors[0]);
				if (filled.getValue()) {
					drawFilledBox(entry, consumers, box, colors[1]);
				}
			}

			if (cameraEntity != null) {
				Vec3d origin = tracerOrigin(cameraEntity, tickDelta);
				float width = tracersWidth.getValue().floatValue();
				for (BlockEntity blockEntity : blockEntityList) {
					int[] colors = colorsFor(blockEntity);
					if (colors == null) {
						continue;
					}
					drawLine(entry, consumers, origin, blockEntity.getPos().toCenterPos(), colors[0], width);
				}
			}
		} finally {
			matrices.pop();
		}
	}

	/**
	 * Tracer origin (dq.java:1020-1034): camera entity lerped position + eye
	 * height; in first person the (0, 0, 75) offset is rotated by
	 * rotateX(-pitch) then rotateY(-yaw), in third person the bare eye is used.
	 */
	private static Vec3d tracerOrigin(Entity cameraEntity, float tickDelta) {
		Vec3d eye = cameraEntity.getLerpedPos(tickDelta)
				.add(0.0, cameraEntity.getEyeHeight(cameraEntity.getPose()), 0.0);
		MinecraftClient client = MinecraftClient.getInstance();
		if (!client.options.getPerspective().isFirstPerson()) {
			return eye;
		}
		float pitch = (float) -Math.toRadians(cameraEntity.getPitch());
		float yaw = (float) -Math.toRadians(cameraEntity.getYaw());
		return new Vec3d(0.0, 0.0, 75.0).rotateX(pitch).rotateY(yaw).add(eye);
	}

	/** {@code gg.bab()} (gg.java:393-458): player, world, interaction manager and network handler present. */
	private static boolean inGame(MinecraftClient client) {
		return client.player != null && client.world != null && client.interactionManager != null
				&& client.getNetworkHandler() != null;
	}

	/** {@code aID()}-style readout: the scanned block entities (cross-module reads). */
	public List<BlockEntity> getBlockEntities() {
		return List.copyOf(blockEntityList);
	}

	public boolean isFilled() {
		return filled.getValue();
	}

	public boolean isTracers() {
		return tracers.getValue();
	}

	public double getTracersWidth() {
		return tracersWidth.getValue();
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
		line(entry, vc, x0, y0, z0, x1, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x0, y0, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y0, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z0, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x1, y1, z1, x0, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y1, z1, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z0, x0, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z0, x1, y1, z0, r, g, b, a, 1.0f);
		line(entry, vc, x1, y0, z1, x1, y1, z1, r, g, b, a, 1.0f);
		line(entry, vc, x0, y0, z1, x0, y1, z1, r, g, b, a, 1.0f);
	}

	private static void drawLine(MatrixStack.Entry entry, VertexConsumerProvider consumers, Vec3d from, Vec3d to,
			int argb, float width) {
		float a = ((argb >>> 24) & 0xFF) / 255.0f;
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		VertexConsumer vc = consumers.getBuffer(RenderLayers.lines());
		float dx = (float) (to.x - from.x), dy = (float) (to.y - from.y), dz = (float) (to.z - from.z);
		vc.vertex(entry, (float) from.x, (float) from.y, (float) from.z).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, (float) to.x, (float) to.y, (float) to.z).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}

	private static void line(MatrixStack.Entry entry, VertexConsumer vc, float ax, float ay, float az,
			float bx, float by, float bz, float r, float g, float b, float a, float width) {
		float dx = bx - ax, dy = by - ay, dz = bz - az;
		vc.vertex(entry, ax, ay, az).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
		vc.vertex(entry, bx, by, bz).color(r, g, b, a).normal(entry, dx, dy, dz).lineWidth(width);
	}
}
