package dev.opengrim.modules.world;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.modules.combat.TargetLock;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.fluid.FluidState;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import net.minecraft.util.shape.VoxelShape;
import net.minecraft.world.RaycastContext;

/**
 * Auto Drain (registry sixtwo.fw, module id 14, category {@code gh.xwjCw} =
 * Combat — fw.java:87): "Automatically pickups liquid from cobweb".
 *
 * <p>Settings 1:1 from {@code analysis/decompiled/payload-decrypted/sixtwo/fw.java:85-226}
 * (declaration order): {@code Mode} Blatant(0)/Legit(1) (fw.java:88-98),
 * {@code Switch Mode} Auto(0)/Manual(1) (fw.java:111-120), {@code Auto Switch
 * Delay} {@code cA} step 1.0, min 0.0, max 20.0, default 1.0 (fw.java:139;
 * suffix {@code zAhcx} is set by the native clinit and is not in the runtime
 * dump — [G] " ticks" kept as a high-probability guess), {@code Steal Mode}
 * Water Cobweb(0)/Lava Cobweb(1)/Water(2)/Lava(3)/All(4) (fw.java:151-181),
 * {@code Cancel For} Own(0)/Friends(1) (fw.java:193-203), {@code Cancel In
 * Screens} {@code WE(false)} (fw.java:222). No {@code Vf} visibility gates.</p>
 *
 * <p>Recovered behaviour (Java-visible, not virtualized):
 * {@code aRb()BlockHitResult} — fw.java:254-781, bytecode-verified
 * (javap of jar-casesafe/sixtwo/fw.class):
 * <ol>
 * <li>range = {@code player.getBlockInteractionRange()} (int cast),
 *     origin = {@code BlockPos.ofFloored(player.getEntityPos()).up()},
 *     {@code BlockPos.iterateOutwards(origin, range, range, range)}.</li>
 * <li>Per position, four gates each bypassed when Target Lock is engaged
 *     ({@code fg.aIW() != null}, ported as {@link TargetLock#sharedIds()} with
 *     non-empty = engaged — fw.java:257/266/269/298/305): not in {@code NrVzh},
 *     {@code fluid.isStill()}, {@code aRc(isWater, isLava, isCobweb)},
 *     {@code fluid.getShape(...)} non-empty.</li>
 * <li>Sample points (fw.java:310-731): eye = {@code player.getEyePos()},
 *     dir = normalize(eye − {@code pos.toCenterPos()}); 6 axis directions
 *     (indy 23221 = 6, runtime dump); per shape box and per direction with
 *     {@code dotProduct(dir) > 0} — px/py/pz face value for the axis component,
 *     NaN otherwise; 4×4 grid: x uses the outer index, y the inner index, and z
 *     uses the outer index when py is a face value else the inner index (this
 *     asymmetric quirk is the original's; preserved). Then the random block:
 *     {@code Random(pos.hashCode())}, per iteration {@code nextInt(boxes)} →
 *     box, {@code nextInt(6)} → axis, then for x/y/z a {@code nextBoolean()}
 *     and a {@code nextDouble()} only when the boolean+axis does not pick a
 *     face — the RNG call order is preserved verbatim; sample offset by
 *     {@code pos}.</li>
 * <li>Raycast each sample: {@code RaycastContext(eye, sample, OUTLINE,
 *     SOURCE_ONLY, player)}; return the hit when type == BLOCK and
 *     {@code hit.getBlockPos().equals(pos)}; else null (fw.java:732-781).</li>
 * </ol>
 *
 * <p>Native (VM) surface — [N], not recoverable from the decompile; this port
 * keeps a documented reconstruction:
 * <ul>
 * <li>{@code aQY(gH$th)} tick listener, {@code aQX(gv)} pre-rotation listener,
 *     {@code aQZ(gW$tq)} block-use-result listener, {@code aRa()} slot-switch
 *     worker, {@code aRc(ZZZ)} the Steal-Mode filter, {@code aRd(BlockPos)}
 *     (12 native handlers; spec analysis/specs/handlers/fw.md:62-69).
 *     Capture condition for all of them: run the original client with the
 *     module enabled against a cobweb-fluid pool.</li>
 * <li>[G] {@code aRc} mapping (spec:62-69 infers the 5-way filter): Water
 *     Cobweb = water &amp;&amp; cobweb, Lava Cobweb = lava &amp;&amp; cobweb,
 *     Water = water, Lava = lava, All = water || lava.</li>
 * <li>[G] the tick reconstruction (bucket-slot switch after Auto Switch Delay,
 *     rotation submit, interact) approximates the native aQY/aQX/aRa wiring —
 *     {@code qJ.dbp} execution is VM-internal.</li>
 * <li>[G] random-sample count: indy call site {@code aRi(5843,…)} is not in
 *     full-dump.jsonl; {@value #RANDOM_SAMPLES} is a high-probability guess.</li>
 * <li>[U] {@code NrVzh} lifecycle (spec:86): only the {@code contains} read is
 *     visible, so the port adds on interaction and never expires the list (the
 *     original has no {@code YO} override either — state persists across
 *     toggles).</li>
 * <li>Trace 2026-10-17: aQX/aQY/aRb each 1× (aRb returns BlockHitResult); no
 *     numeric exits captured.</li>
 * </ul>
 */
public class AutoDrain extends Module {
	/** [G] indy aRi(5843) unrecovered — high-probability guess. */
	private static final int RANDOM_SAMPLES = 6;
	/** Auto Switch Delay × 50 ms (ticks) — port of the native delay wiring. */
	private static final long TICK_MS = 50L;

	private final ModeSetting mode = register(new ModeSetting("mode", List.of("Blatant", "Legit"), "Blatant"));
	private final ModeSetting switchMode = register(new ModeSetting("switch_mode", List.of("Auto", "Manual"), "Auto"));
	private final DoubleSetting autoSwitchDelay = register(new DoubleSetting("auto_switch_delay", 1.0, 0.0, 20.0, 1.0, " ticks"));
	private final ModeSetting stealMode = register(new ModeSetting("steal_mode",
			List.of("Water Cobweb", "Lava Cobweb", "Water", "Lava", "All"), "Water Cobweb"));
	private final ModeSetting cancelFor = register(new ModeSetting("cancel_for", List.of("Own", "Friends"), "Own"));
	private final BoolSetting cancelInScreens = register(new BoolSetting("cancel_in_screens", false));

	/** NrVzh: drained/visited positions (fw.java:224). */
	private final List<BlockPos> drainedPositions = new ArrayList<>();
	private long lastSwitchMs;

	public AutoDrain() {
		super("auto_drain", "Auto Drain", "Automatically pickups liquid from cobweb", ModuleCategory.COMBAT);
	}

	/**
	 * Reconstruction of the native {@code aQY(gH.th)} tick listener
	 * (fw.java:242, spec fw.md:64) — see class javadoc [N]/[G].
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			return;
		}
		if (cancelInScreens.getValue() && client.currentScreen != null) {
			return;
		}

		BlockHitResult liquidHit = findLiquid(player);
		if (liquidHit == null) {
			return;
		}

		if (!player.getMainHandStack().isOf(Items.BUCKET) && !player.getOffHandStack().isOf(Items.BUCKET)) {
			if (!"Auto".equals(switchMode.getValue())) {
				return;
			}
			long now = System.currentTimeMillis();
			long delayMs = (long) autoSwitchDelay.getValue().doubleValue() * TICK_MS;
			if (now - lastSwitchMs < delayMs) {
				return;
			}
			int slot = bucketSlot(player);
			if (slot < 0) {
				return;
			}
			player.getInventory().setSelectedSlot(slot);
			lastSwitchMs = now;
			return;
		}

		RotationManager.get().submitPosition(liquidHit.getPos(), RotationPriority.uWTdl, this);
		Hand hand = player.getMainHandStack().isOf(Items.BUCKET) ? Hand.MAIN_HAND : Hand.OFF_HAND;
		client.interactionManager.interactBlock(player, hand, liquidHit);
		player.swingHand(hand);
		drainedPositions.add(liquidHit.getBlockPos());
	}

	/**
	 * 1:1 port of {@code fw.aRb()} (fw.java:254-781, bytecode-verified) — the
	 * liquid-finder raycast; see class javadoc for the full step list.
	 */
	private BlockHitResult findLiquid(ClientPlayerEntity player) {
		var world = player.getEntityWorld();
		int range = (int) player.getBlockInteractionRange();
		// fg.aIW() != null = Target Lock engaged (fw.java:257); the port's
		// TargetLock.sharedIds() returns an empty array when unlocked.
		boolean lockEngaged = TargetLock.sharedIds().length > 0;
		BlockPos origin = BlockPos.ofFloored(player.getEntityPos()).up();

		for (BlockPos pos : BlockPos.iterateOutwards(origin, range, range, range)) {
			if (drainedPositions.contains(pos) && !lockEngaged) {
				continue;
			}

			FluidState fluidState = world.getFluidState(pos);
			if (!fluidState.isStill() && !lockEngaged) {
				continue;
			}

			Block block = world.getBlockState(pos).getBlock();
			Block downBlock = world.getBlockState(pos.down()).getBlock();
			boolean isWater = block == Blocks.WATER;
			boolean isLava = block == Blocks.LAVA;
			boolean isCobweb = downBlock == Blocks.COBWEB;

			if (!accepts(isWater, isLava, isCobweb) && !lockEngaged) {
				continue;
			}

			VoxelShape shape = fluidState.getShape(world, pos);
			if (shape.isEmpty() && !lockEngaged) {
				continue;
			}

			Vec3d eyePos = player.getEyePos();
			Vec3d centerPos = pos.toCenterPos();
			Vec3d normDir = eyePos.subtract(centerPos).normalize();

			List<Vec3d> samplePoints = new ArrayList<>();
			Vec3d[] faceDirections = new Vec3d[]{
				new Vec3d(1.0, 0.0, 0.0),
				new Vec3d(-1.0, 0.0, 0.0),
				new Vec3d(0.0, 1.0, 0.0),
				new Vec3d(0.0, -1.0, 0.0),
				new Vec3d(0.0, 0.0, 1.0),
				new Vec3d(0.0, 0.0, -1.0)
			};

			List<Box> boxes = shape.getBoundingBoxes();
			for (Box box : boxes) {
				double minX = box.minX + pos.getX();
				double maxX = box.maxX + pos.getX();
				double minY = box.minY + pos.getY();
				double maxY = box.maxY + pos.getY();
				double minZ = box.minZ + pos.getZ();
				double maxZ = box.maxZ + pos.getZ();

				for (Vec3d faceDir : faceDirections) {
					if (faceDir.dotProduct(normDir) <= 0.0) {
						continue;
					}

					double px = faceDir.x > 0.0 ? maxX : (faceDir.x < 0.0 ? minX : Double.NaN);
					double py = faceDir.y > 0.0 ? maxY : (faceDir.y < 0.0 ? minY : Double.NaN);
					double pz = faceDir.z > 0.0 ? maxZ : (faceDir.z < 0.0 ? minZ : Double.NaN);

					for (int i = 0; i < 4; i++) {
						double sx = Double.isNaN(px) ? minX + (maxX - minX) * (i / 3.0) : px;
						for (int j = 0; j < 4; j++) {
							double sy = Double.isNaN(py) ? minY + (maxY - minY) * (j / 3.0) : py;
							double sz;
							if (!Double.isNaN(pz)) {
								sz = pz;
							} else if (!Double.isNaN(py)) {
								sz = minZ + (maxZ - minZ) * (i / 3.0);
							} else {
								sz = minZ + (maxZ - minZ) * (j / 3.0);
							}
							samplePoints.add(new Vec3d(sx, sy, sz));
						}
					}
				}
			}

			Random rand = new Random(pos.hashCode());
			for (int k = 0; k < RANDOM_SAMPLES; k++) {
				Box rBox = boxes.get(rand.nextInt(boxes.size()));
				int axis = rand.nextInt(6);
				boolean faceX = rand.nextBoolean();
				double rx = faceX && axis == 0 ? rBox.minX
						: faceX && axis == 1 ? rBox.maxX
						: rBox.minX + rand.nextDouble() * (rBox.maxX - rBox.minX);
				boolean faceY = rand.nextBoolean();
				double ry = faceY && axis == 2 ? rBox.minY
						: faceY && axis == 3 ? rBox.maxY
						: rBox.minY + rand.nextDouble() * (rBox.maxY - rBox.minY);
				boolean faceZ = rand.nextBoolean();
				double rz = faceZ && axis == 4 ? rBox.minZ
						: faceZ && axis == 5 ? rBox.maxZ
						: rBox.minZ + rand.nextDouble() * (rBox.maxZ - rBox.minZ);
				samplePoints.add(new Vec3d(rx + pos.getX(), ry + pos.getY(), rz + pos.getZ()));
			}

			for (Vec3d sample : samplePoints) {
				RaycastContext ctx = new RaycastContext(eyePos, sample,
						RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.SOURCE_ONLY, player);
				HitResult hit = world.raycast(ctx);
				if (hit.getType() == HitResult.Type.BLOCK
						&& hit instanceof BlockHitResult blockHit
						&& blockHit.getBlockPos().equals(pos)) {
					return blockHit;
				}
			}
		}

		return null;
	}

	/**
	 * [G] native {@code aRc(ZZZ)Z} filter (fw.java:785, spec fw.md:68):
	 * Steal Mode → water/lava/cobweb acceptance.
	 */
	private boolean accepts(boolean isWater, boolean isLava, boolean cobwebBelow) {
		String sm = stealMode.getValue();
		if ("Water Cobweb".equals(sm)) {
			return isWater && cobwebBelow;
		}
		if ("Lava Cobweb".equals(sm)) {
			return isLava && cobwebBelow;
		}
		if ("Water".equals(sm)) {
			return isWater;
		}
		if ("Lava".equals(sm)) {
			return isLava;
		}
		return isWater || isLava;
	}

	private static int bucketSlot(ClientPlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			if (player.getInventory().getStack(slot).isOf(Items.BUCKET)) {
				return slot;
			}
		}
		return -1;
	}
}
