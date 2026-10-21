package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;

/**
 * Hole ESP (registry sixtwo.dj): "Highlights safe holes". Module id 147,
 * category gh.nOCvV.
 *
 * <p>1:1 port of sixtwo.dj. Primary decompile:
 * {@code analysis/decompiled/casesafe/payload-decrypted/sixtwo/dj.java};
 * bytecode ground truth: {@code javap -c -p} on
 * {@code analysis/decompiled/jar-casesafe/sixtwo/dj.class} (+ {@code dj$sB/sC/sD/sE}).
 * <ul>
 *   <li>Constructor &amp; settings tree dj.java:122-268 (mode group "Mode" with
 *       options "Boxes"/"Fade", ct#SO(0) selects Boxes).</li>
 *   <li>Tick rescan {@code afR(gH$th)} dj.java:1475-1502 (javap 4545-4576):
 *       inactive clears both collections; active replaces the scan list with
 *       {@code afY()}.</li>
 *   <li>World render {@code afS(go$sX)} dj.java:1854-1939 (javap 5346-5437):
 *       {@code bab()} + player + camera-entity guards, {@code afW()} mint, empty
 *       map bail, camera-negated offset, {@code afT()} list, {@code lvORN.SZ()}
 *       chooses {@code afU} (Boxes) or {@code afV} (Fade).</li>
 *   <li>Scan {@code afY} dj.java:1633-1815: y-outer/x-mid/z-inner over
 *       ceil(Range)/ceil(Range Y), covered-set skip, center-distance
 *       &gt; Range^2 ({@code agk} dj.java:616-623) skip, classify, add cells;
 *       then the "Void" bedrock sweep along {@code world.getBottomY()}.</li>
 *   <li>Classify {@code afZ} dj.java:1137-1298: quad first ({@code agb}
 *       dj.java:847-988, gated by "Quad"), then air/air+1/air+2, floor
 *       {@code agi}, horizontal neighbours: no open side =&gt; single
 *       ({@code iiJny}), exactly one open side + "Double" =&gt; {@code aga}
 *       dj.java:624-767 (cells sorted by the static comparator dj.java:390-392),
 *       otherwise null.</li>
 *   <li>Safety {@code agc} dj.java:993-1094 (javap 132-197, switch read from
 *       bytecode): every floor/wing/wall cell must pass {@code agi}
 *       (dj.java:1300-1375: BEDROCK, OBSIDIAN, CRYING_OBSIDIAN, ENDER_CHEST,
 *       RESPAWN_ANCHOR); all-bedrock =&gt; zrNsv, mixed =&gt; XoavU, no bedrock
 *       =&gt; WBAxv.</li>
 *   <li>Color mapping {@code agl} (decompile failed; javap tableswitch): ordinal
 *       0 zrNsv =&gt; "Bedrock Color", 1 WBAxv =&gt; "Obsidian Color", 2 XoavU =&gt;
 *       "Obsidian-Bedrock Color", 3 btXid =&gt; "Void Color" (dj$sD declaration
 *       order zrNsv, WBAxv, XoavU, btXid).</li>
 *   <li>Validity {@code afX} (decompile failed; javap 5085-5344): still in the
 *       scan list, center within Range^2, "Ignore Self" =&gt; player bounding box
 *       does not intersect {@code toBox(0.5)}, then safety toggle and shape
 *       toggle ("Double"/"Quad") gates.</li>
 *   <li>Fade {@code afW} dj.java:1519-1536 + {@code afT} dj.java:1538-1627: one
 *       {@code rk} animator per hole (duration = agu slot 15599 = <b>300 ms</b>,
 *       recovered by re-running the class's own DES decryptor - validated
 *       against the full-dump sites 29385 = 16 and 25501 = 147 - and easing
 *       rj.UPXqT = (1 - cos(pi t)) / 2, rj.java:69); value snaps to 0
 *       ({@code rk#dhg}), {@code dhd(valid ? 1 : 0)} per frame, dead entries
 *       removed at 0, remaining ones frustum-gated by {@code jJ.bIA(center)}
 *       (javap: null frustum =&gt; false, center +/-0.5 box).</li>
 *   <li>Draw: fill pipeline {@code age} dj.java:427-566 (buffer 1 = four side
 *       quads 16 vertices/hole via {@code agg} dj.java:769-774 with a
 *       bottom-color to top-transparent gradient; buffer 2 = {@code agf}
 *       dj.java:1377-1415 floor quad + Outline strips, 20 vertices/hole; both
 *       QUADS/POSITION_COLOR submitted through lF#cfW(kR.oXKXV)); boxes pipeline
 *       {@code agd} dj.java:779-841 + {@code afU} dj.java:1451-1473
 *       (MMuss batch): kH#bTJ wireframe in the outline color
 *       {@code coa(max(alpha,100)).cob(fade)} (transparent when Outline is off,
 *       mG.UhgnI) plus the kN#bUS filled box in {@code cob(fade)} at half alpha
 *       (kN#bUW cob(0.5f)).</li>
 * </ul>
 *
 * <p>Framework adaptations (labeled):
 * <ul>
 *   <li>[S] The tick event gH$th is dispatched at MinecraftClient.tick HEAD
 *       (bootstrap mixin.accessors.ClientEventBridgeMixin#offline$tickPre);
 *       this port scans in {@link #onTick()} (END_CLIENT_TICK), the same
 *       predicate sequence one tick point later.</li>
 *   <li>[S] Render layers: the original's kR.oXKXV / kN batch pipelines are
 *       mapped to {@code RenderLayers.debugFilledBox()} (fills) and
 *       {@code RenderLayers.lines()} (outline), the repo-wide convention.</li>
 *   <li>[S] {@code jJ.bIA}'s null-frustum branch returns false; this port
 *       follows the repo convention that a null captured frustum renders
 *       (BlockEsp/Particles).</li>
 *   <li>[G] The "Mode" ct group's per-option enable flag (cu#IopEl) has no
 *       ModeSetting equivalent; selection alone picks the pipeline.</li>
 * </ul>
 */
public class HoleEsp extends Module {
	/** Fade duration: agu("w", 15599, ...) = 300 ms (recovered via the class's own decryptor). */
	private static final int FADE_MS = 300;

	private final ModeSetting mode = register(new ModeSetting("mode", List.of("Boxes", "Fade"), "Boxes"));
	private final DoubleSetting range = register(new DoubleSetting("range", 0.5, 3.0, 25.0, 5.0, " blocks"));
	private final DoubleSetting rangeY = register(new DoubleSetting("range_y", 0.5, 0.0, 16.0, 3.0, " blocks"));
	private final BoolSetting outline = register(new BoolSetting("outline", true));
	private final DoubleSetting size = register(new DoubleSetting("size", 0.01, -1.0, 1.0, 1.0, null));
	private final BoolSetting ignoreSelf = register(new BoolSetting("ignore_self", false));
	private final BoolSetting obsidian = register(new BoolSetting("obsidian", true));
	private final BoolSetting obsidianBedrock = register(new BoolSetting("obsidian_bedrock", true));
	private final BoolSetting doubleHoles = register(new BoolSetting("double", false));
	private final BoolSetting quadHoles = register(new BoolSetting("quad", false));
	private final BoolSetting voidHoles = register(new BoolSetting("void", false));
	private final ColorSetting obsidianColor = register(new ColorSetting("obsidian_color", 0x50FF0000, true));
	private final ColorSetting obsidianBedrockColor = register(new ColorSetting("obsidian_bedrock_color", 0x50FFFF00, true));
	private final ColorSetting bedrockColor = register(new ColorSetting("bedrock_color", 0x5000FF00, true));
	private final ColorSetting voidColor = register(new ColorSetting("void_color", 0x8CFF0000, true));

	/** dj$sD safety levels (declaration order zrNsv, WBAxv, XoavU, btXid). */
	public enum HoleType {
		/** zrNsv - all floor cells bedrock. */
		BEDROCK,
		/** WBAxv - no bedrock. */
		OBSIDIAN,
		/** XoavU - bedrock and non-bedrock mixed. */
		OBSIDIAN_BEDROCK,
		/** btXid - the afY bottom-of-world sweep. */
		VOID
	}

	/** dj$sC hole shapes (declaration order iiJny, XksfN, vzSwM, WdDaI). */
	public enum HoleShape {
		/** iiJny - one cell. */
		SINGLE,
		/** XksfN - 1x2. */
		DOUBLE,
		/** vzSwM - 2x2. */
		QUAD,
		/** WdDaI - bottom-of-world sweep. */
		VOID_SWEEP
	}

	/** dj$sE: cells + safety + shape. */
	public record Hole(List<BlockPos> cells, HoleType type, HoleShape shape) {
		/**
		 * dj$sE#toBox (javap dj$sE 858-239): minX..maxX+1, minY..minY+offset
		 * (min/max ordered so negative offsets flip downwards), minZ..maxZ+1.
		 */
		public Box toBox(double offset) {
			int minX = Integer.MAX_VALUE, minY = Integer.MAX_VALUE, minZ = Integer.MAX_VALUE;
			int maxX = Integer.MIN_VALUE, maxZ = Integer.MIN_VALUE;
			for (BlockPos p : cells) {
				minX = Math.min(minX, p.getX());
				minY = Math.min(minY, p.getY());
				minZ = Math.min(minZ, p.getZ());
				maxX = Math.max(maxX, p.getX());
				maxZ = Math.max(maxZ, p.getZ());
			}
			double maxY = minY + offset;
			return new Box(minX, Math.min(minY, maxY), minZ, maxX + 1.0, Math.max(minY, maxY), maxZ + 1.0);
		}

		/** dj$sE#center: toBox(1.0).getCenter(). */
		public Vec3d center() {
			return toBox(1.0).getCenter();
		}

		public BlockPos primaryPos() {
			return cells.get(0);
		}
	}

	/** dj$sB: one hole plus its current fade factor. */
	private record FadeEntry(Hole hole, float fadeFactor) {
	}

	/** dj.cMEtP (dj.java:390-392): comparingInt(getX).thenComparingInt(getY).thenComparingInt(getZ). */
	private static final Comparator<BlockPos> POS_COMPARATOR = Comparator
			.comparingInt(BlockPos::getX)
			.thenComparingInt(BlockPos::getY)
			.thenComparingInt(BlockPos::getZ);

	/** soBDJ: last scan result. */
	private List<Hole> holes = new ArrayList<>();
	/** Dpuot: per-hole fade animators (rk). */
	private final Map<Hole, Animator> fades = new HashMap<>();

	public HoleEsp() {
		super("hole_esp", "Hole ESP", "Highlights safe holes", ModuleCategory.VISUALS);
		// cG#Vf visibility wiring, dj.java:214-265.
		obsidianColor.setVisible(obsidian.getValue());
		obsidianBedrockColor.setVisible(obsidianBedrock.getValue());
		voidColor.setVisible(voidHoles.getValue());
	}

	/**
	 * afR(gH$th) dj.java:1475-1502: rescan the world. The original's inactive
	 * branch clears both collections; here the handler only runs while enabled.
	 */
	@Override
	public void onTick() {
		// cG#Vf suppliers queried live by the original GUI.
		obsidianColor.setVisible(obsidian.getValue());
		obsidianBedrockColor.setVisible(obsidianBedrock.getValue());
		voidColor.setVisible(voidHoles.getValue());

		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			holes.clear();
			fades.clear();
			return;
		}
		holes = scan(client);
	}

	/** YO (dj.java:1941-1946): super.YO(); soBDJ.clear(); Dpuot.clear(). */
	@Override
	protected void onDisable() {
		holes.clear();
		fades.clear();
	}

	/** afY (dj.java:1633-1815): full scan of the box around the player plus the "Void" sweep. */
	private List<Hole> scan(MinecraftClient client) {
		ClientPlayerEntity player = client.player;
		List<Hole> found = new ArrayList<>();
		Set<BlockPos> covered = new HashSet<>();
		BlockPos origin = player.getBlockPos();
		int rx = MathHelper.ceil(range.getValue());
		int ry = MathHelper.ceil(rangeY.getValue());
		Vec3d playerPos = player.getEntityPos();
		double maxDistSq = agk();

		for (int dy = -ry; dy <= ry; dy++) {
			for (int dx = -rx; dx <= rx; dx++) {
				for (int dz = -rx; dz <= rx; dz++) {
					BlockPos pos = new BlockPos(origin.getX() + dx, origin.getY() + dy, origin.getZ() + dz);
					if (covered.contains(pos)) {
						continue;
					}
					if (pos.toCenterPos().squaredDistanceTo(playerPos) > maxDistSq) {
						continue;
					}
					Hole hole = classify(client, pos);
					if (hole != null) {
						found.add(hole);
						covered.addAll(hole.cells());
					}
				}
			}
		}

		// afY dj.java:1734-1813: with "Void" on, every bedrock block at the
		// world bottom inside Range is added as a btXid/WdDaI hole.
		if (!voidHoles.getValue()) {
			return found;
		}
		int bottomY = client.world.getBottomY();
		for (int dx = -rx; dx <= rx; dx++) {
			for (int dz = -rx; dz <= rx; dz++) {
				BlockPos pos = new BlockPos(origin.getX() + dx, bottomY, origin.getZ() + dz);
				if (pos.toCenterPos().squaredDistanceTo(playerPos) > maxDistSq) {
					continue;
				}
				if (!client.world.getBlockState(pos).isOf(Blocks.BEDROCK)) {
					continue;
				}
				found.add(new Hole(List.of(pos), HoleType.VOID, HoleShape.VOID_SWEEP));
			}
		}
		return found;
	}

	/** agk (dj.java:616-623): Range^2. */
	private double agk() {
		double value = range.getValue();
		return value * value;
	}

	/** afZ (dj.java:1137-1298): quad, then single/double classification. */
	private Hole classify(MinecraftClient client, BlockPos pos) {
		Hole quad = checkQuad(client, pos);
		if (quad != null) {
			return quad;
		}

		if (!isAir(client, pos) || !isAir(client, pos.up()) || !isAir(client, pos.up(2))) {
			return null;
		}
		List<BlockPos> floor = new ArrayList<>();
		List<Direction> open = new ArrayList<>();
		floor.add(pos.down());
		if (!isBlastResistant(client, pos.down())) {
			return null;
		}
		for (Direction dir : Direction.Type.HORIZONTAL) {
			BlockPos neighbor = pos.offset(dir);
			if (isBlastResistant(client, neighbor)) {
				floor.add(neighbor);
			} else {
				open.add(dir);
			}
		}
		if (open.isEmpty()) {
			HoleType type = safety(client, floor);
			if (type == null) {
				return null;
			}
			return new Hole(List.of(pos), type, HoleShape.SINGLE);
		}
		if (open.size() != 1) {
			return null;
		}
		if (!doubleHoles.getValue()) {
			return null;
		}
		return checkDouble(client, pos, open.get(0));
	}

	/** agb (dj.java:847-988): 2x2 quad hole, gated by "Quad". */
	private Hole checkQuad(MinecraftClient client, BlockPos pos) {
		if (!quadHoles.getValue()) {
			return null;
		}
		List<BlockPos> cells = List.of(pos, pos.east(), pos.south(), pos.south().east());
		for (BlockPos cell : cells) {
			if (!isAir(client, cell) || !isAir(client, cell.up()) || !isAir(client, cell.up(2))) {
				return null;
			}
			if (!isBlastResistant(client, cell.down())) {
				return null;
			}
		}
		List<BlockPos> floor = new ArrayList<>();
		for (BlockPos cell : cells) {
			floor.add(cell.down());
		}
		// The eight surrounding walls, in the original's order (dj.java:942).
		List<BlockPos> walls = List.of(
				pos.north(), pos.east().north(), pos.west(), pos.south().west(),
				pos.south().south(), pos.south().east().south(), pos.east().east(), pos.south().east().east());
		for (BlockPos wall : walls) {
			if (!isBlastResistant(client, wall)) {
				return null;
			}
			floor.add(wall);
		}
		HoleType type = safety(client, floor);
		if (type == null) {
			return null;
		}
		return new Hole(cells, type, HoleShape.QUAD);
	}

	/** aga (dj.java:624-767): 1x2 double hole; cells sorted by cMEtP. */
	private Hole checkDouble(MinecraftClient client, BlockPos pos, Direction direction) {
		BlockPos neighbor = pos.offset(direction);
		if (!isAir(client, neighbor) || !isAir(client, neighbor.up()) || !isAir(client, neighbor.up(2))) {
			return null;
		}
		if (!isBlastResistant(client, neighbor.down())) {
			return null;
		}
		List<BlockPos> floor = new ArrayList<>();
		floor.add(pos.down());
		floor.add(neighbor.down());
		for (Direction dir : Direction.Type.HORIZONTAL) {
			if (dir != direction) {
				BlockPos wing = pos.offset(dir);
				if (!isBlastResistant(client, wing)) {
					return null;
				}
				floor.add(wing);
			}
			if (dir != direction.getOpposite()) {
				BlockPos wing = neighbor.offset(dir);
				if (!isBlastResistant(client, wing)) {
					return null;
				}
				floor.add(wing);
			}
		}
		HoleType type = safety(client, floor);
		if (type == null) {
			return null;
		}
		List<BlockPos> cells = new ArrayList<>(List.of(pos, neighbor));
		cells.sort(POS_COMPARATOR);
		return new Hole(List.copyOf(cells), type, HoleShape.DOUBLE);
	}

	/**
	 * agc (dj.java:993-1094; javap 132-197): every cell must pass agi, then
	 * all-bedrock =&gt; zrNsv, mixed =&gt; XoavU, no bedrock =&gt; WBAxv; null
	 * rejects the hole.
	 */
	private HoleType safety(MinecraftClient client, List<BlockPos> floor) {
		boolean hasBedrock = false;
		boolean hasNonBedrock = false;
		for (BlockPos pos : floor) {
			if (!isBlastResistant(client, pos)) {
				return null;
			}
			if (client.world.getBlockState(pos).isOf(Blocks.BEDROCK)) {
				hasBedrock = true;
			} else {
				hasNonBedrock = true;
			}
		}
		if (hasBedrock && !hasNonBedrock) {
			return HoleType.BEDROCK;
		}
		if (hasBedrock) {
			return HoleType.OBSIDIAN_BEDROCK;
		}
		return HoleType.OBSIDIAN;
	}

	/** agh (dj.java:568-570): world.getBlockState(pos).isAir(). */
	private static boolean isAir(MinecraftClient client, BlockPos pos) {
		return client.world.getBlockState(pos).isAir();
	}

	/** agi (dj.java:1300-1375): BEDROCK, OBSIDIAN, CRYING_OBSIDIAN, ENDER_CHEST, RESPAWN_ANCHOR. */
	private static boolean isBlastResistant(MinecraftClient client, BlockPos pos) {
		Block block = client.world.getBlockState(pos).getBlock();
		return block == Blocks.BEDROCK
				|| block == Blocks.OBSIDIAN
				|| block == Blocks.CRYING_OBSIDIAN
				|| block == Blocks.ENDER_CHEST
				|| block == Blocks.RESPAWN_ANCHOR;
	}

	/** agl (javap tableswitch): safety level to its colour setting. */
	private int colorFor(HoleType type) {
		return switch (type) {
			case BEDROCK -> bedrockColor.getValue();
			case OBSIDIAN -> obsidianColor.getValue();
			case OBSIDIAN_BEDROCK -> obsidianBedrockColor.getValue();
			case VOID -> voidColor.getValue();
		};
	}

	/**
	 * afS (dj.java:1854-1939): mint fades, advance them per frame, cull, draw.
	 * The frustum and ignore-self tests of afX run before the fade step.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isEnabled() || client.player == null || client.getCameraEntity() == null) {
			return;
		}
		mintFades();
		if (fades.isEmpty()) {
			return;
		}

		MatrixStack matrices = event.context().matrices();
		VertexConsumerProvider consumers = event.context().consumers();
		Vec3d offset = event.camera().getCameraPos().negate();
		List<FadeEntry> list = buildRenderList();
		if (list.isEmpty()) {
			return;
		}

		matrices.push();
		try {
			matrices.translate(offset.x, offset.y, offset.z);
			MatrixStack.Entry entry = matrices.peek();
			if ("Boxes".equals(mode.getValue())) {
				for (FadeEntry fadeEntry : list) {
					drawBoxes(entry, consumers, fadeEntry);
				}
			} else {
				for (FadeEntry fadeEntry : list) {
					drawFade(entry, consumers, fadeEntry);
				}
			}
		} finally {
			matrices.pop();
		}
	}

	/** afW (dj.java:1519-1536): one 300 ms UPXqT animator per newly scanned hole, snapped to 0. */
	private void mintFades() {
		for (Hole hole : holes) {
			if (fades.containsKey(hole)) {
				continue;
			}
			Animator animator = new Animator(FADE_MS);
			animator.reset();
			fades.put(hole, animator);
		}
	}

	/** afT (dj.java:1538-1627): advance fades, drop dead holes, frustum-cull, collect. */
	private List<FadeEntry> buildRenderList() {
		List<FadeEntry> list = new ArrayList<>();
		Iterator<Map.Entry<Hole, Animator>> iterator = fades.entrySet().iterator();
		while (iterator.hasNext()) {
			Map.Entry<Hole, Animator> entry = iterator.next();
			Hole hole = entry.getKey();
			boolean valid = isHoleValid(hole);
			float fade = entry.getValue().update(valid ? 1.0f : 0.0f);
			if (!valid && fade == 0.0f) {
				iterator.remove();
				continue;
			}
			if (fade == 0.0f) {
				continue;
			}
			if (!isInFrustum(hole.center())) {
				continue;
			}
			list.add(new FadeEntry(hole, fade));
		}
		return list;
	}

	/**
	 * afX (javap 5085-5344): hole still in the scan list, center within Range^2,
	 * "Ignore Self" rejects the player's own hole (bounding box intersects
	 * toBox(0.5)), safety toggle and shape toggle must both be on.
	 */
	private boolean isHoleValid(Hole hole) {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (!holes.contains(hole)) {
			return false;
		}
		if (hole.center().squaredDistanceTo(player.getEntityPos()) > agk()) {
			return false;
		}
		if (ignoreSelf.getValue() && player.getBoundingBox().intersects(hole.toBox(0.5))) {
			return false;
		}
		boolean safetyAllowed = switch (hole.type()) {
			case BEDROCK -> true;
			case OBSIDIAN -> obsidian.getValue();
			case OBSIDIAN_BEDROCK -> obsidianBedrock.getValue();
			case VOID -> voidHoles.getValue();
		};
		if (!safetyAllowed) {
			return false;
		}
		return switch (hole.shape()) {
			case SINGLE, VOID_SWEEP -> true;
			case DOUBLE -> doubleHoles.getValue();
			case QUAD -> quadHoles.getValue();
		};
	}

	/**
	 * jJ.bIA (javap): center +/-0.5 box against the captured frustum. Repo
	 * convention: a null captured frustum renders (BlockEsp/Particles).
	 */
	private static boolean isInFrustum(Vec3d center) {
		Frustum frustum = MinecraftClient.getInstance().worldRenderer.getCapturedFrustum();
		if (frustum == null) {
			return true;
		}
		return frustum.isVisible(new Box(
				center.x - 0.5, center.y - 0.5, center.z - 0.5,
				center.x + 0.5, center.y + 0.5, center.z + 0.5));
	}

	/**
	 * afU/agd (dj.java:779-841, 1451-1473): boxes pipeline. kN#bUS draws the
	 * wireframe in the dtN colour (Outline on: coa(max(alpha,100)).cob(fade),
	 * else transparent mG.UhgnI) and the filled box in the dtO colour
	 * cob(fade) at half alpha (kN#bUW cob(0.5f)).
	 */
	private void drawBoxes(MatrixStack.Entry entry, VertexConsumerProvider consumers, FadeEntry fadeEntry) {
		Hole hole = fadeEntry.hole();
		float fade = fadeEntry.fadeFactor();
		Box box = hole.toBox(size.getValue());
		int color = colorFor(hole.type());
		float alpha = (color >>> 24) & 0xFF;

		int fill = withAlpha(color, alpha * fade);
		int outlineArgb = withAlpha(color, Math.max(alpha, 100.0f) * fade);
		if (outline.getValue() && ((outlineArgb >>> 24) & 0xFF) > 0) {
			drawBoxOutline(entry, consumers, box, outlineArgb);
		}
		if (((fill >>> 24) & 0xFF) > 0) {
			drawFilledBox(entry, consumers, box, withAlpha(fill, ((fill >>> 24) & 0xFF) * 0.5f));
		}
	}

	/**
	 * afV/age (dj.java:427-566): fill pipeline. Buffer 1 draws the four side
	 * quads with agg (bottom vertices cob(fade), top vertices coa(0)); buffer 2
	 * draws the floor and, with Outline on, the four inset strips at
	 * coa(170).cob(fade) (agf).
	 */
	private void drawFade(MatrixStack.Entry entry, VertexConsumerProvider consumers, FadeEntry fadeEntry) {
		Hole hole = fadeEntry.hole();
		float fade = fadeEntry.fadeFactor();
		Box box = hole.toBox(size.getValue());
		int color = colorFor(hole.type());
		float alpha = (color >>> 24) & 0xFF;

		VertexConsumer sides = consumers.getBuffer(RenderLayers.debugFilledBox());
		int bottom = withAlpha(color, alpha * fade);
		int top = withAlpha(color, 0.0f);
		gradientQuad(entry, sides, box.minX, box.minY, box.minZ, box.maxX, box.maxY, box.minZ, bottom, top);
		gradientQuad(entry, sides, box.maxX, box.minY, box.minZ, box.maxX, box.maxY, box.maxZ, bottom, top);
		gradientQuad(entry, sides, box.maxX, box.minY, box.maxZ, box.minX, box.maxY, box.maxZ, bottom, top);
		gradientQuad(entry, sides, box.minX, box.minY, box.maxZ, box.minX, box.maxY, box.minZ, bottom, top);

		drawFloor(entry, consumers, box, withAlpha(color, 170.0f * fade));
	}

	/** agf (dj.java:1377-1415): floor quad at cob(0.35) plus the Outline strips. */
	private void drawFloor(MatrixStack.Entry entry, VertexConsumerProvider consumers, Box box, int argb) {
		VertexConsumer vc = consumers.getBuffer(RenderLayers.debugFilledBox());
		float r = ((argb >> 16) & 0xFF) / 255.0f;
		float g = ((argb >> 8) & 0xFF) / 255.0f;
		float b = (argb & 0xFF) / 255.0f;
		float a = (((argb >>> 24) & 0xFF) / 255.0f) * 0.35f;

		float x0 = (float) box.minX, y0 = (float) box.minY, z0 = (float) box.minZ;
		float x1 = (float) box.maxX, z1 = (float) box.maxZ;
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y0, z1, x0, y0, z1, r, g, b, a);

		if (!outline.getValue()) {
			return;
		}
		float f7 = Math.min(0.04f, Math.min(x1 - x0, z1 - z0) * 0.5f);
		float a2 = ((argb >>> 24) & 0xFF) / 255.0f;
		quad(entry, vc, x0, y0, z0, x1, y0, z0, x1, y0, z0 + f7, x0, y0, z0 + f7, r, g, b, a2);
		quad(entry, vc, x0, y0, z1 - f7, x1, y0, z1 - f7, x1, y0, z1, x0, y0, z1, r, g, b, a2);
		quad(entry, vc, x0, y0, z0 + f7, x0 + f7, y0, z0 + f7, x0 + f7, y0, z1 - f7, x0, y0, z1 - f7, r, g, b, a2);
		quad(entry, vc, x1 - f7, y0, z0 + f7, x1, y0, z0 + f7, x1, y0, z1 - f7, x1 - f7, y0, z1 - f7, r, g, b, a2);
	}

	/** mG#coa: replace the alpha channel (0..255, clamped). */
	private static int withAlpha(int argb, float alpha255) {
		int a = Math.clamp(Math.round(alpha255), 0, 255);
		return (a << 24) | (argb & 0x00FFFFFF);
	}

	/** agg (dj.java:769-774): quad with the bottom corners in one colour and the top corners in another. */
	private static void gradientQuad(MatrixStack.Entry entry, VertexConsumer vc,
			double x0, double y0, double z0, double x1, double y1, double z1, int bottom, int top) {
		float ba = ((bottom >>> 24) & 0xFF) / 255.0f;
		float br = ((bottom >> 16) & 0xFF) / 255.0f;
		float bg = ((bottom >> 8) & 0xFF) / 255.0f;
		float bb = (bottom & 0xFF) / 255.0f;
		float ta = ((top >>> 24) & 0xFF) / 255.0f;
		float tr = ((top >> 16) & 0xFF) / 255.0f;
		float tg = ((top >> 8) & 0xFF) / 255.0f;
		float tb = (top & 0xFF) / 255.0f;
		vc.vertex(entry, (float) x0, (float) y0, (float) z0).color(br, bg, bb, ba);
		vc.vertex(entry, (float) x0, (float) y1, (float) z0).color(tr, tg, tb, ta);
		vc.vertex(entry, (float) x1, (float) y1, (float) z1).color(tr, tg, tb, ta);
		vc.vertex(entry, (float) x1, (float) y0, (float) z1).color(br, bg, bb, ba);
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

	/** kN#bUV (javap): the box wireframe in one colour. */
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

	/**
	 * rk animator (rk.java:54-134): value ramps from the value at the last
	 * target change to the new target over the duration, eased with rj.UPXqT
	 * ((1 - cos(pi t)) / 2, rj.java:69); {@code dhg} snaps to 0.
	 */
	private static final class Animator {
		private final int durationMs;
		private float value;
		private float start;
		private float target;
		private long startMs;

		Animator(int durationMs) {
			this.durationMs = durationMs;
		}

		/** rk#dhe(0.0f) via rk#dhg (rk.java:146-155). */
		void reset() {
			this.value = 0.0f;
			this.start = 0.0f;
			this.target = 0.0f;
			this.startMs = System.currentTimeMillis();
		}

		/** rk#dhd (rk.java:54-134): restart on target change, then eased progress. */
		float update(float newTarget) {
			long now = System.currentTimeMillis();
			if (newTarget != target) {
				this.start = this.value;
				this.target = newTarget;
				this.startMs = now;
			}
			if (durationMs <= 0) {
				this.value = target;
				return value;
			}
			long elapsed = now - startMs;
			if (elapsed >= durationMs) {
				this.value = target;
				return value;
			}
			float t = (float) elapsed / durationMs;
			this.value = start + (target - start) * ease(t);
			return value;
		}

		/** rj.UPXqT (rj.java:69): -(cos(pi t) - 1) / 2. */
		private static float ease(float t) {
			return -(float) (Math.cos(Math.PI * t) - 1.0) / 2.0f;
		}
	}

	/** Holes from the last scan. */
	public List<Hole> getHoles() {
		return List.copyOf(holes);
	}

	public boolean shouldOutline() {
		return outline.getValue();
	}

	public double getSize() {
		return size.getValue();
	}

	public boolean isIgnoreSelf() {
		return ignoreSelf.getValue();
	}

	public boolean wantsDouble() {
		return doubleHoles.getValue();
	}

	public boolean wantsQuad() {
		return quadHoles.getValue();
	}
}
