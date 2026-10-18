package dev.opengrim.modules.world;

import java.util.HashSet;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.block.Block;
import net.minecraft.block.ButtonBlock;
import net.minecraft.block.LeverBlock;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ingame.HangingSignEditScreen;
import net.minecraft.client.gui.screen.ingame.SignEditScreen;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.BlockItem;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

/**
 * Lever Replace (registry sixtwo.dF): "Automatically replaces levers and buttons".
 *
 * <p>Port of sixtwo.dF.
 * Source: analysis/decompiled/payload-decrypted/sixtwo/dF.java:31-167.
 * Spec: analysis/specs/casesafe/handlers/dF_.md.
 *
 * <p>Settings tree:
 * <ul>
 *   <li>Mode (iqrsx, dF.java:34-44) group with Instant (SMlWc, dF.java:54) and Legit (QJtRA, dF.java:55)</li>
 *   <li>Allowed Items (UBzDb, dF.java:67-89) cK filter preselected with six swords</li>
 *   <li>Block To Replace (FjyNN, dF.java:90-107) group with Cobweb (nZWdG, dF.java:116),
 *       Obsidian (MIMsQ, dF.java:127), Held Block (WOZWS, dF.java:140)</li>
 * </ul>
 * State: mnITY slot cache initialized -1 (dF.java:141).
 * Handlers: ald(gO$tm) tick handler (dF.java:152), ale(gH$th) render-marker hook (dF.java:155),
 * alf(Predicate) slot scanner (dF.java:157), YO() lifecycle override (dF.java:166).
 * Screen guards: SignEditScreen and HangingSignEditScreen suppression (dF_.md "Per-handler
 * semantics" — class_498/class_7744 tokens).
 *
 * <p><b>High-probability guesses</b> (labeled): Mode is translated as a radio pair (ct/cu
 * radio-vs-toggle semantics are native, dF_.md "Unrecovered" #4; same convention as
 * {@link UnchargeBlock}); Instant presses the recovered use-key spoof
 * ({@code field_1904 useKey} + {@code method_23481 setPressed}, dF_.md:32) and releases it on
 * the next tick (the release half is not token-visible; a held press would place
 * continuously); the trigger target (crosshair lever/button else nearest within 4 blocks) and
 * the mining-then-place sequence are a reconstruction — the recovered trigger is only the
 * {@code HitResult$Type.BLOCK} crosshair gate (dF_.md:28).
 *
 * <p>Unrecovered: which of the five {@code alg}–{@code all} item predicates maps to
 * Cobweb/Obsidian/Held Block/Allowed Items (dF_.md:44), and the mnITY cache lifecycle
 * (dF_.md:47).
 */
public class LeverReplace extends Module {
	private static final int SCAN_RADIUS = 4;

	private final GroupSetting mode = register(new GroupSetting("mode"));
	private final BoolSetting instant;
	private final BoolSetting legit;
	private final GroupSetting allowedItems = register(new GroupSetting("allowed_items"));
	private final BoolSetting woodenSword = new BoolSetting("wooden_sword", true);
	private final BoolSetting stoneSword = new BoolSetting("stone_sword", true);
	private final BoolSetting ironSword = new BoolSetting("iron_sword", true);
	private final BoolSetting goldenSword = new BoolSetting("golden_sword", true);
	private final BoolSetting diamondSword = new BoolSetting("diamond_sword", true);
	private final BoolSetting netheriteSword = new BoolSetting("netherite_sword", true);
	private final GroupSetting blockToReplace = register(new GroupSetting("block_to_replace"));
	private final BoolSetting cobweb = new BoolSetting("cobweb", false);
	private final BoolSetting obsidian = new BoolSetting("obsidian", false);
	private final BoolSetting heldBlock = new BoolSetting("held_block", false);

	private BlockPos miningTarget;
	private int slotCache = -1;
	private boolean updatingRadio;
	private boolean releaseUseKey;

	public LeverReplace() {
		super("lever_replace", "Lever Replace", "Automatically replaces levers and buttons", ModuleCategory.WORLD);
		instant = new BoolSetting("instant", true) {
			@Override
			protected void onChange() {
				onRadioChanged(this);
			}
		};
		legit = new BoolSetting("legit", false) {
			@Override
			protected void onChange() {
				onRadioChanged(this);
			}
		};
		mode.add(instant);
		mode.add(legit);
		allowedItems.add(woodenSword);
		allowedItems.add(stoneSword);
		allowedItems.add(ironSword);
		allowedItems.add(goldenSword);
		allowedItems.add(diamondSword);
		allowedItems.add(netheriteSword);
		blockToReplace.add(cobweb);
		blockToReplace.add(obsidian);
		blockToReplace.add(heldBlock);
	}

	private void onRadioChanged(BoolSetting changed) {
		if (updatingRadio) {
			return;
		}
		updatingRadio = true;
		try {
			if (changed.getValue()) {
				if (changed != instant) {
					instant.setValue(false);
				}
				if (changed != legit) {
					legit.setValue(false);
				}
			} else if (!instant.getValue() && !legit.getValue()) {
				// ct radio group always keeps one option selected (default index 0: Instant).
				instant.setValue(true);
			}
		} finally {
			updatingRadio = false;
		}
	}

	@Override
	public void onTick() {
		if (releaseUseKey) {
			releaseUseKey = false;
			MinecraftClient.getInstance().options.useKey.setPressed(false);
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			return;
		}
		if (client.currentScreen instanceof SignEditScreen || client.currentScreen instanceof HangingSignEditScreen) {
			return;
		}
		if (!instant.getValue() && !legit.getValue()) {
			return;
		}
		if (miningTarget != null) {
			continueMining(client, player);
			return;
		}
		BlockPos target = findReplaceable(client, player);
		if (target == null) {
			return;
		}
		if (legit.getValue() && !holdingAllowedItem(player)) {
			return;
		}
		slotCache = player.getInventory().getSelectedSlot();
		miningTarget = target;
		if (instant.getValue()) {
			client.options.useKey.setPressed(true);
			releaseUseKey = true;
		}
		RotationManager.get().submitPosition(Vec3d.ofCenter(target), RotationPriority.uWTdl, this);
		client.interactionManager.attackBlock(target, Direction.UP);
	}

	private BlockPos findReplaceable(MinecraftClient client, ClientPlayerEntity player) {
		if (client.crosshairTarget instanceof BlockHitResult blockHit
				&& blockHit.getType() == HitResult.Type.BLOCK) {
			BlockPos crosshairPos = blockHit.getBlockPos();
			Block block = player.getEntityWorld().getBlockState(crosshairPos).getBlock();
			if (block instanceof LeverBlock || block instanceof ButtonBlock) {
				return crosshairPos;
			}
		}
		BlockPos origin = player.getBlockPos();
		BlockPos best = null;
		double bestDistance = Double.MAX_VALUE;
		for (BlockPos pos : BlockPos.iterate(origin.add(-SCAN_RADIUS, -SCAN_RADIUS, -SCAN_RADIUS),
				origin.add(SCAN_RADIUS, SCAN_RADIUS, SCAN_RADIUS))) {
			Block block = player.getEntityWorld().getBlockState(pos).getBlock();
			if (!(block instanceof LeverBlock) && !(block instanceof ButtonBlock)) {
				continue;
			}
			double distance = player.squaredDistanceTo(Vec3d.ofCenter(pos));
			if (distance < bestDistance) {
				bestDistance = distance;
				best = pos.toImmutable();
			}
		}
		return best;
	}

	private void continueMining(MinecraftClient client, ClientPlayerEntity player) {
		var state = player.getEntityWorld().getBlockState(miningTarget);
		if (!(state.getBlock() instanceof LeverBlock) && !(state.getBlock() instanceof ButtonBlock)) {
			placeReplacement(client, player, miningTarget);
			miningTarget = null;
			return;
		}
		RotationManager.get().submitPosition(Vec3d.ofCenter(miningTarget), RotationPriority.uWTdl, this);
		if (client.interactionManager.updateBlockBreakingProgress(miningTarget, Direction.UP)) {
			placeReplacement(client, player, miningTarget);
			miningTarget = null;
		}
	}

	private void placeReplacement(MinecraftClient client, ClientPlayerEntity player, BlockPos pos) {
		Item wanted = wantedItem(player);
		if (wanted == null) {
			return;
		}
		int slot = findSlot(player, wanted);
		if (slot < 0) {
			return;
		}
		player.getInventory().setSelectedSlot(slot);
		RotationManager.get().submitPosition(Vec3d.ofCenter(pos), RotationPriority.uWTdl, this);
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
			Vec3d center = Vec3d.ofCenter(support);
			Vec3d hitVec = center.add(face.getOffsetX() * 0.5, face.getOffsetY() * 0.5, face.getOffsetZ() * 0.5);
			client.interactionManager.interactBlock(player, Hand.MAIN_HAND,
					new BlockHitResult(hitVec, face, support, false));
			player.swingHand(Hand.MAIN_HAND);
			break;
		}
		if (slotCache >= 0) {
			player.getInventory().setSelectedSlot(slotCache);
			slotCache = -1;
		}
	}

	private Item wantedItem(ClientPlayerEntity player) {
		if (cobweb.getValue()) {
			return Items.COBWEB;
		}
		if (obsidian.getValue()) {
			return Items.OBSIDIAN;
		}
		if (heldBlock.getValue()) {
			ItemStack held = player.getMainHandStack();
			if (!held.isEmpty() && held.getItem() instanceof BlockItem) {
				return held.getItem();
			}
		}
		return null;
	}

	private static int findSlot(ClientPlayerEntity player, Item wanted) {
		for (int i = 0; i < 9; i++) {
			if (player.getInventory().getStack(i).isOf(wanted)) {
				return i;
			}
		}
		return -1;
	}

	private boolean holdingAllowedItem(ClientPlayerEntity player) {
		ItemStack held = player.getMainHandStack();
		Set<Item> allowed = allowedSet();
		return allowed.contains(held.getItem());
	}

	private Set<Item> allowedSet() {
		Set<Item> out = new HashSet<>();
		if (woodenSword.getValue()) {
			out.add(Items.WOODEN_SWORD);
		}
		if (stoneSword.getValue()) {
			out.add(Items.STONE_SWORD);
		}
		if (ironSword.getValue()) {
			out.add(Items.IRON_SWORD);
		}
		if (goldenSword.getValue()) {
			out.add(Items.GOLDEN_SWORD);
		}
		if (diamondSword.getValue()) {
			out.add(Items.DIAMOND_SWORD);
		}
		if (netheriteSword.getValue()) {
			out.add(Items.NETHERITE_SWORD);
		}
		return out;
	}

	@Override
	protected void onDisable() {
		miningTarget = null;
		slotCache = -1;
		if (releaseUseKey) {
			releaseUseKey = false;
			MinecraftClient.getInstance().options.useKey.setPressed(false);
		}
	}
}
