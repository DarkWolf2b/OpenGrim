package dev.opengrim.modules.world;

import java.util.ArrayList;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.InputUtil;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

/**
 * Anchor Macro (registry sixtwo.eX): "Automatically charges and explodes an anchor".
 *
 * <p>Port of sixtwo.eX from payload-decrypted/sixtwo/eX.java:54-361 (constructor)
 * and eX.java:368-459 (events aEP, aEO, aEM, aEN, aES, aEQ, aER, aFv; spec analysis/specs/handlers/eX.md).
 *
 * <p>Settings in declaration order:
 * <ul>
 *   <li>Mode (tGIRe, eX.java:57: Press / Hold)</li>
 *   <li>Charge Anchors (ikcZw, eX.java:106, default true)</li>
 *   <li>Charge Delay (qSoHb, eX.java:120, step 1.0, min 0.0, max 10.0, default 0.0, " ticks")</li>
 *   <li>Detonate Anchors (mmJaL, eX.java:138, default true)</li>
 *   <li>Detonate Delay (xdsyS, eX.java:155, step 1.0, min 0.0, max 10.0, default 0.0, " ticks")</li>
 *   <li>Anchor Delay (GIPFr, eX.java:169, step 1.0, min 0.0, max 10.0, default 0.0, " ticks")</li>
 *   <li>Detonate Item (ymWjd, eX.java:184, step 1.0, min 1.0, max 9.0, default 1.0, " slot")</li>
 *   <li>Switch Delay (QJeGA, eX.java:198, step 1.0, min 0.0, max 10.0, default 0.0, " ticks")</li>
 *   <li>Only For Own (JeboL, eX.java:212, default false)</li>
 *   <li>Cancel On Use (JCATM, eX.java:227, default true)</li>
 *   <li>Safe Anchor (KfwhF, eX.java:243, default false)</li>
 *   <li>Safe Anchor Hold (RGmUw, eX.java:261, default false)</li>
 *   <li>Hold Key (hPUWA, eX.java:271, default -999)</li>
 *   <li>Safe Anchor Blocks (kecKJ, eX.java:291, obsidian/glowstone)</li>
 *   <li>When (KUvew, eX.java:292: Before Charge / After Charge, ct/cu radio
 *       group, default Before Charge)</li>
 *   <li>Diagonal (NZxVb, eX.java:343, default true)</li>
 * </ul>
 *
 * <p>Visibility wiring (eX.java:349-354):
 * <ul>
 *   <li>Charge Delay visible when Charge Anchors is enabled</li>
 *   <li>Detonate Delay visible when Detonate Anchors is enabled</li>
 *   <li>Hold Key visible when Safe Anchor Hold is enabled</li>
 *   <li>Safe Anchor Blocks, When, Diagonal visible when Safe Anchor is enabled</li>
 * </ul>
 *
 * <p>Gap: the When/Diagonal settings are registered but not read — their
 * behavior is inside the VM (spec "Unrecovered / uncertain" §1/§3).
 */
public class AnchorMacro extends Module {
	private enum Step {
		PLACE_ANCHOR,
		CHARGE,
		DETONATE
	}

	private final ModeSetting mode = register(new ModeSetting("mode", List.of("press", "hold"), "press"));
	private final BoolSetting chargeAnchors = register(new BoolSetting("charge_anchors", true));
	private final DoubleSetting chargeDelay = register(new DoubleSetting("charge_delay", 1.0, 0.0, 10.0, 0.0, " ticks"));
	private final BoolSetting detonateAnchors = register(new BoolSetting("detonate_anchors", true));
	private final DoubleSetting detonateDelay = register(new DoubleSetting("detonate_delay", 1.0, 0.0, 10.0, 0.0, " ticks"));
	private final DoubleSetting anchorDelay = register(new DoubleSetting("anchor_delay", 1.0, 0.0, 10.0, 0.0, " ticks"));
	private final DoubleSetting detonateItem = register(new DoubleSetting("detonate_item", 1.0, 1.0, 9.0, 1.0, " slot"));
	private final DoubleSetting switchDelay = register(new DoubleSetting("switch_delay", 1.0, 0.0, 10.0, 0.0, " ticks"));
	private final BoolSetting onlyForOwn = register(new BoolSetting("only_for_own", false));
	private final BoolSetting cancelOnUse = register(new BoolSetting("cancel_on_use", true));
	private final BoolSetting safeAnchor = register(new BoolSetting("safe_anchor", false));
	private final BoolSetting safeAnchorHold = register(new BoolSetting("safe_anchor_hold", false));
	private final KeybindSetting holdKey = register(new KeybindSetting("hold_key", -999));
	private final GroupSetting safeAnchorBlocks = register(new GroupSetting("safe_anchor_blocks"));
	private final BoolSetting obsidianBlock = new BoolSetting("obsidian", true);
	private final BoolSetting glowstoneBlock = new BoolSetting("glowstone", true);
	private final ModeSetting when = register(new ModeSetting("when",
			List.of("before_charge", "after_charge"), "before_charge"));
	private final BoolSetting diagonal = register(new BoolSetting("diagonal", true));

	private final List<BlockPos> pendingAnchors = new ArrayList<>();
	private Step step;
	private BlockPos anchorPos;
	private int waitTicks;
	private int switchCooldown;
	private int originalSlot = -1;
	private boolean prevActive;
	private boolean detonateWaitDone;

	public AnchorMacro() {
		super("anchor_macro", "Anchor Macro", "Automatically charges and explodes an anchor", ModuleCategory.COMBAT);
		safeAnchorBlocks.add(obsidianBlock);
		safeAnchorBlocks.add(glowstoneBlock);
	}

	@Override
	public void onEnable() {
		reset();
		prevActive = false;
	}

	@Override
	public void onDisable() {
		reset();
		prevActive = false;
	}

	public BlockPos getCurrentAnchor() {
		return anchorPos;
	}

	public List<BlockPos> getPendingAnchors() {
		return pendingAnchors;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null) {
			reset();
			return;
		}

		chargeDelay.setVisible(chargeAnchors.getValue());
		detonateDelay.setVisible(detonateAnchors.getValue());
		holdKey.setVisible(safeAnchorHold.getValue());
		safeAnchorBlocks.setVisible(safeAnchor.getValue());
		when.setVisible(safeAnchor.getValue());
		diagonal.setVisible(safeAnchor.getValue());

		boolean active = isActive(client);
		if (!active) {
			prevActive = false;
			reset();
			return;
		}

		if (step == null) {
			if ("press".equalsIgnoreCase(mode.getValue()) && prevActive) {
				return;
			}
			if (!(client.crosshairTarget instanceof BlockHitResult hit)) {
				return;
			}
			if (safeAnchor.getValue() && !isSafePlacementBlock(player, hit.getBlockPos())) {
				return;
			}
			step = Step.PLACE_ANCHOR;
			originalSlot = player.getInventory().getSelectedSlot();
		}
		prevActive = true;

		if (cancelOnUse.getValue() && player.isUsingItem()) {
			reset();
			return;
		}

		run(client, player);
	}

	private boolean isActive(MinecraftClient client) {
		if ("hold".equalsIgnoreCase(mode.getValue())) {
			return true;
		}
		int key = holdKey.getValue();
		if (safeAnchorHold.getValue() && key != -999) {
			return InputUtil.isKeyPressed(client.getWindow(), key);
		}
		return client.options.useKey.isPressed();
	}

	private boolean isSafePlacementBlock(ClientPlayerEntity player, BlockPos clickedPos) {
		var state = player.getEntityWorld().getBlockState(clickedPos);
		if (obsidianBlock.getValue() && state.isOf(Blocks.OBSIDIAN)) {
			return true;
		}
		if (glowstoneBlock.getValue() && state.isOf(Blocks.GLOWSTONE)) {
			return true;
		}
		return !obsidianBlock.getValue() && !glowstoneBlock.getValue();
	}

	private void run(MinecraftClient client, ClientPlayerEntity player) {
		if (waitTicks > 0) {
			waitTicks--;
			return;
		}

		switch (step) {
			case PLACE_ANCHOR -> {
				if (!switchTo(player, Items.RESPAWN_ANCHOR)) {
					reset();
					return;
				}
				if (!switchSettled()) {
					return;
				}
				if (!(client.crosshairTarget instanceof BlockHitResult hit)) {
					reset();
					return;
				}
				anchorPos = hit.getBlockPos().offset(hit.getSide()).toImmutable();
				if (!player.getEntityWorld().getBlockState(anchorPos).isReplaceable()) {
					reset();
					return;
				}
				RotationManager.get().submitPosition(Vec3d.ofCenter(anchorPos), RotationPriority.uWTdl, this);
				client.interactionManager.interactBlock(player, Hand.MAIN_HAND, hit);
				player.swingHand(Hand.MAIN_HAND);
				pendingAnchors.add(anchorPos);
				waitTicks = anchorDelay.getValue().intValue();
				step = chargeAnchors.getValue() ? Step.CHARGE : Step.DETONATE;
			}
			case CHARGE -> {
				if (!switchTo(player, Items.GLOWSTONE)) {
					step = Step.DETONATE;
					return;
				}
				if (!switchSettled()) {
					return;
				}
				interactAt(client, player, anchorPos);
				waitTicks = chargeDelay.getValue().intValue();
				step = Step.DETONATE;
			}
			case DETONATE -> {
				if (!detonateAnchors.getValue()) {
					reset();
					return;
				}
				if (!detonateWaitDone) {
					detonateWaitDone = true;
					waitTicks = detonateDelay.getValue().intValue();
					return;
				}
				if (safeAnchor.getValue() && playerNearAnchor(player)) {
					if (!safeAnchorHold.getValue()) {
						reset();
					}
					return;
				}
				if (onlyForOwn.getValue() && (anchorPos == null || !pendingAnchors.contains(anchorPos))) {
					reset();
					return;
				}
				int detSlot = detonateItem.getValue().intValue() - 1;
				if (detSlot >= 0 && detSlot < 9) {
					player.getInventory().setSelectedSlot(detSlot);
				}
				if (!switchSettled()) {
					return;
				}
				interactAt(client, player, anchorPos);
				if (originalSlot >= 0 && originalSlot < 9) {
					player.getInventory().setSelectedSlot(originalSlot);
				}
				reset();
			}
		}
	}

	private void interactAt(MinecraftClient client, ClientPlayerEntity player, BlockPos pos) {
		if (pos == null) {
			return;
		}
		RotationManager.get().submitPosition(Vec3d.ofCenter(pos), RotationPriority.uWTdl, this);
		BlockHitResult hit = new BlockHitResult(Vec3d.ofCenter(pos), Direction.UP, pos, false);
		client.interactionManager.interactBlock(player, Hand.MAIN_HAND, hit);
		player.swingHand(Hand.MAIN_HAND);
	}

	private boolean playerNearAnchor(ClientPlayerEntity player) {
		return anchorPos != null
				&& player.getEntityPos().squaredDistanceTo(Vec3d.ofCenter(anchorPos)) <= 3.5 * 3.5;
	}

	private boolean switchTo(ClientPlayerEntity player, Item item) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isOf(item)) {
				if (player.getInventory().getSelectedSlot() != slot) {
					player.getInventory().setSelectedSlot(slot);
					switchCooldown = Math.max(1, switchDelay.getValue().intValue());
				}
				return true;
			}
		}
		return false;
	}

	private boolean switchSettled() {
		if (switchCooldown > 0) {
			switchCooldown--;
			return false;
		}
		return true;
	}

	private void reset() {
		step = null;
		anchorPos = null;
		waitTicks = 0;
		switchCooldown = 0;
		originalSlot = -1;
		detonateWaitDone = false;
	}
}
