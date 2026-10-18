package dev.opengrim.modules.world;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

/**
 * Air Anchor (registry sixtwo.eU, module id 114): "Allows to place anchor in air".
 * Category {@code gh.xwjCw} (Combat; eU.java:25).
 *
 * <p>Port of sixtwo.eU from payload-decrypted/sixtwo/eU.java:23-50 (constructor:
 * "Double Anchor" cJ {@code .WE(false)} eU.java:40; "Chance" cC
 * {@code .Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(pyZOh)} eU.java:48 — suffix
 * pyZOh natively decrypted, unrecovered) and eU.java:59-83 (accessors
 * aDH/aDF/aDD/aDE/aDG, marker handler aDC(gH$th) eU.java:68; behavior spec
 * analysis/specs/handlers/eU.md).
 *
 * <p>Recovered pool surface (analysis/specs/handlers/eU.md; native corpus
 * analysis/ghidra/casesafe/handlers-stitched/sixtwo_eU_.c — note the
 * non-casesafe handlers-full-annotated/sixtwo_eU.c actually holds the eu
 * Trident Boost handlers, case-collapse trap): held-item gate
 * {@code Items.RESPAWN_ANCHOR} (field_23141), the {@code bDI(BlockPos)Z}
 * placeability predicate that makes an anchor placeable in air, and the packet
 * factory {@code aDI(BlockHitResult,I)} constructing a
 * {@code PlayerInteractBlockC2SPacket(Hand, BlockHitResult, sequence)}
 * directly — the module fabricates the interact packet instead of routing
 * through vanilla use (constant {@code mW HyfoP} one-shot gate exposed via aDH
 * for eX Anchor Macro).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code aDC(gH$th)} ran in
 * both enable windows, each tick with the identical visible body:
 * {@code eV.aEq() → 0} (Auto Crystal cross-module gate — also read by eX
 * Anchor Macro, where the true branch feeds an incompatibility warning; its
 * polarity is unrecovered, false in the capture), {@code gg.bab() → 1}
 * (in-game gate: player/world/interactionManager/networkHandler — the
 * networkHandler check below is trace-pinned) and {@code HyfoP.crA()} (the mW
 * one-shot gate reset, trace-pinned at the tick prologue). {@code YO()} (the
 * disable override) = {@code super.YO()} (gg.YO deregistration) followed by
 * {@code HyfoP.crA()} — both reset points are mirrored below. {@code aDI}
 * (packet factory) never triggered — capture condition: hold a respawn anchor
 * with the module enabled and look at a spot with an entity/no-support
 * geometry (a placement attempt). The {@code eV.aEq()} non-zero branch needs
 * Auto Crystal enabled alongside.
 *
 * <p>high-probability guess: the target BlockPos derivation, the Chance roll
 * wiring, the Double Anchor loop shape, and the cooldown latch value are all
 * j2cc natives — the crosshair-aware placement model below carries the
 * recovered constants and the interact-packet route
 * ({@code interactionManager.interactBlock} builds the same packet with a real
 * sequence). The suffix {@code pyZOh} is native-decrypted and unrecovered —
 * cited as " %" (1-100 Chance slider, the Backtrack/precedent style); the roll
 * is read as uniform {@code [0,100)} &lt; Chance so the default 100 always
 * fires (high-probability guess). The mW one-shot action gate has no framework
 * analog; its reset points are mirrored (see the trace paragraph) with the
 * readiness latch exposed via {@code isReady()} / {@code actionGateClaimed()}.
 * Rotation
 * submission through {@link RotationManager} is stack wiring — eU's window has
 * no rotation-manager tokens (eU.md §Unrecovered).
 */
public class AirAnchor extends Module {
	private final BoolSetting doubleAnchor = register(new BoolSetting("double_anchor", false));
	private final DoubleSetting chance = register(new DoubleSetting("chance", 1.0, 1.0, 100.0, 100.0, " %"));

	private BlockPos target;
	private boolean armed;
	private int cooldownTicks;
	/** mW HyfoP one-shot action gate state (mW.VEfPX; crA clears it). */
	private boolean gateClaimed;

	public AirAnchor() {
		super("air_anchor", "Air Anchor", "Allows to place anchor in air", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		target = null;
		armed = false;
		cooldownTicks = 0;
		gateClaimed = false;
	}

	@Override
	public void onDisable() {
		// trace 2026-10-17: eU.YO = super.YO() then HyfoP.crA() (mW reset).
		target = null;
		armed = false;
		cooldownTicks = 0;
		gateClaimed = false;
	}

	/** Accessor analog of sixtwo.eU#aDF (stored placement target). */
	public BlockPos getTarget() {
		return target;
	}

	/** Accessor analog of sixtwo.eU#aDG (readiness predicate). */
	public boolean isReady() {
		return armed;
	}

	/** Accessor analog of sixtwo.eU#aDH (the mW one-shot action gate). */
	public boolean actionGateClaimed() {
		return gateClaimed;
	}

	/** Accessor analog of sixtwo.eU#aDD (the Double Anchor toggle). */
	public BoolSetting getDoubleAnchor() {
		return doubleAnchor;
	}

	/** Accessor analog of sixtwo.eU#aDE (the Chance slider). */
	public DoubleSetting getChance() {
		return chance;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		// trace 2026-10-17: aDC prologue order — eV.aEq() → gg.bab() → HyfoP.crA().
		// gg.bab() = player + world + interactionManager + networkHandler.
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		// HyfoP.crA() (mW gate reset) runs unconditionally at the tick prologue.
		gateClaimed = false;
		if (cooldownTicks > 0) {
			cooldownTicks--;
			return;
		}
		if (!player.getMainHandStack().isOf(Items.RESPAWN_ANCHOR)
				&& !player.getOffHandStack().isOf(Items.RESPAWN_ANCHOR)) {
			armed = false;
			return;
		}
		if (client.crosshairTarget instanceof BlockHitResult) {
			return;
		}
		// high-probability guess: uniform [0,100) roll against Chance so the
		// default 100 always places (the roll formula itself is VM-hidden).
		double roll = Math.random() * 100.0;
		if (roll > chance.getValue().doubleValue()) {
			return;
		}
		Vec3d eye = player.getEyePos();
		Vec3d look = RotationManager.get().effectiveRotation().toDirection();
		BlockPos aimed = BlockPos.ofFloored(eye.add(look.multiply(4.5)));
		if (!player.getEntityWorld().getBlockState(aimed).isReplaceable()) {
			return;
		}
		target = aimed.toImmutable();
		RotationManager.get().submitPosition(Vec3d.ofCenter(target), RotationPriority.uWTdl, this);
		if (placeWithSupport(client, player, target)) {
			cooldownTicks = 5;
			armed = true;
			// mW.crx claim (inferred arm point; crA clears it next tick).
			gateClaimed = true;
			if (doubleAnchor.getValue()) {
				BlockPos above = target.up();
				if (player.getEntityWorld().getBlockState(above).isReplaceable()) {
					placeWithSupport(client, player, above);
				}
			}
		}
	}

	private boolean placeWithSupport(MinecraftClient client, ClientPlayerEntity player, BlockPos pos) {
		int[][] offsets = {{0, -1, 0}, {0, 1, 0}, {-1, 0, 0}, {1, 0, 0}, {0, 0, 1}, {0, 0, -1}};
		for (int[] offset : offsets) {
			BlockPos support = pos.add(offset[0], offset[1], offset[2]);
			if (player.getEntityWorld().getBlockState(support).isReplaceable()) {
				continue;
			}
			Direction face = Direction.fromVector(-offset[0], -offset[1], -offset[2], null);
			if (face == null) {
				continue;
			}
			Hand hand = player.getMainHandStack().isOf(Items.RESPAWN_ANCHOR) ? Hand.MAIN_HAND : Hand.OFF_HAND;
			Vec3d center = Vec3d.ofCenter(support);
			Vec3d hitVec = center.add(face.getOffsetX() * 0.5, face.getOffsetY() * 0.5, face.getOffsetZ() * 0.5);
			client.interactionManager.interactBlock(player, hand, new BlockHitResult(hitVec, face, support, false));
			player.swingHand(hand);
			return true;
		}
		return false;
	}
}
