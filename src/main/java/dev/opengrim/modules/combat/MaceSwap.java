package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;

/**
 * Mace Swap (registry sixtwo.eN, module id 115): "Automatically performs breach
 * and windburst swap".
 *
 * <p>Port of sixtwo.eN (analysis/decompiled/payload-decrypted/sixtwo/eN.java:29-143
 * constructor; attack listener {@code aBc(hw$tv)} at {@code mw.LOW} priority
 * eN.java:165-168; pre-motion tick {@code aBb(gH$th)} eN.java:154-155; handler
 * spec analysis/specs/handlers/eN.md). Settings in declaration order
 * (eN.java:32-141):
 * <ul>
 *   <li>Mode {@code ct} (eN.java:32-76) with children Breach / Wind Burst /
 *       Smart ({@code cu} defaults; no {@code .SY()} → radio default index 0 =
 *       Breach, ct kErPl=0),</li>
 *   <li>Allowed Items {@code cK .WM(jc.WnbNG).WN(12 items)} (eN.java:91-105):
 *       six swords + six axes, all twelve selected — ported as twelve toggles
 *       (jc.WnbNG is the wider selectable pool, jc.java:120),</li>
 *   <li>Windburst Threshold {@code cC .Vy(0.1).Vw(2.0).Vx(10.0).VA(3.0)
 *       .Vz(" blocks")} (eN.java:126) with visibility
 *       {@code PxteY.Vf(this.EifDU::SZ)} (eN.java:142) = Smart selected,</li>
 *   <li>Return Delay {@code cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0)
 *       .UH(" ms")} (eN.java:140),</li>
 *   <li>{@code ol} controller {@code FtkJb = new ol(this)} (eN.java:141).</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eN_.jsonl +
 * analysis/traces/2026-10-17/raw/trace.jsonl): the tick body {@code aBb} ran once
 * per tick and its only visible call was the shared scheduler check
 * {@code ol.cER(Return Delay)} → 0 (inside: {@code ol.cEX()} → 12,
 * {@code ol.cEW()} → 0) — the "swap back due?" poll over ol's saved-slot latch
 * (ol.java:14-15). Disable {@code YO} ran {@code ol.cET()} — the latched-slot
 * restore (same cleanup family as dR/eG/eH/eO/eS/fL) — mirrored by
 * {@link #onDisable()}. {@code aBc} never fired (the tour driver performs no
 * attacks; capture condition: attack an entity holding a sword/axe).
 *
 * <p>Reconstruction (native bodies are VM bytecode, handler spec "Unrecovered"):
 * Breach mode swaps to a hotbar mace for the hit when an Allowed Items stack is
 * held; Wind Burst / Smart watch the attack-cooldown drop on a held mace and
 * use a hotbar wind charge while {@code fallDistance ≥ Windburst Threshold};
 * the pre-swap slot is restored after Return Delay.
 */
public class MaceSwap extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("breach", "wind_burst", "smart"), "breach"));
	private final GroupSetting allowedItems = register(new GroupSetting("allowed_items"));
	private final BoolSetting woodenSword = new BoolSetting("wooden_sword", true);
	private final BoolSetting stoneSword = new BoolSetting("stone_sword", true);
	private final BoolSetting ironSword = new BoolSetting("iron_sword", true);
	private final BoolSetting goldenSword = new BoolSetting("golden_sword", true);
	private final BoolSetting diamondSword = new BoolSetting("diamond_sword", true);
	private final BoolSetting netheriteSword = new BoolSetting("netherite_sword", true);
	private final BoolSetting woodenAxe = new BoolSetting("wooden_axe", true);
	private final BoolSetting stoneAxe = new BoolSetting("stone_axe", true);
	private final BoolSetting ironAxe = new BoolSetting("iron_axe", true);
	private final BoolSetting goldenAxe = new BoolSetting("golden_axe", true);
	private final BoolSetting diamondAxe = new BoolSetting("diamond_axe", true);
	private final BoolSetting netheriteAxe = new BoolSetting("netherite_axe", true);
	private final DoubleSetting windburstThreshold = register(new DoubleSetting("windburst_threshold", 0.1, 2.0, 10.0, 3.0, " blocks"));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	private int previousSlot = -1;
	private long restoreAtMs;
	private float prevProgress = 1.0f;

	public MaceSwap() {
		super("mace_swap", "Mace Swap", "Automatically performs breach and windburst swap",
				ModuleCategory.COMBAT);
		allowedItems.add(woodenSword);
		allowedItems.add(stoneSword);
		allowedItems.add(ironSword);
		allowedItems.add(goldenSword);
		allowedItems.add(diamondSword);
		allowedItems.add(netheriteSword);
		allowedItems.add(woodenAxe);
		allowedItems.add(stoneAxe);
		allowedItems.add(ironAxe);
		allowedItems.add(goldenAxe);
		allowedItems.add(diamondAxe);
		allowedItems.add(netheriteAxe);
	}

	@Override
	public void onEnable() {
		previousSlot = -1;
		prevProgress = 1.0f;
	}

	/**
	 * Port of the {@code YO()} disable override (eN.java:192-193): the trace
	 * pinned its body to {@code ol.cET()} — restore the latched pre-swap slot
	 * (ol owns the saved-slot/latch, ol.java:14-15; same convention as the fL/eF
	 * re-check fixes).
	 */
	@Override
	public void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (previousSlot >= 0 && client.player != null) {
			client.player.getInventory().setSelectedSlot(previousSlot);
		}
		previousSlot = -1;
		prevProgress = 1.0f;
	}

	/**
	 * Port of {@code aBc(hw$tv)} (eN.java:165-168, priority {@code mw.LOW}):
	 * breach swap — while an Allowed Items stack is held, swap to a hotbar mace
	 * for the hit and schedule the Return Delay restore. The native body is
	 * VM-only (handler spec "Unrecovered" 1); capture condition: attack an
	 * entity with a sword/axe in hand and a mace in the hotbar. Priority mapping:
	 * {@code mw.LOW} → {@code -1} (runs after default-0 listeners; same convention
	 * as the DoubleTap HIGH → 1 mapping).
	 */
	@Subscribe(priority = -1)
	public void onAttackEntity(AttackEntityEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!(event.player() instanceof ClientPlayerEntity player)) {
			return;
		}
		if (!"breach".equals(mode.getValue())) {
			return;
		}
		if (!isAllowed(player.getMainHandStack())) {
			return;
		}
		int mace = hotbarSlotOf(player, Items.MACE);
		if (mace < 0 || mace == player.getInventory().getSelectedSlot()) {
			return;
		}
		previousSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(mace);
		restoreAtMs = System.currentTimeMillis() + Math.round(returnDelay.getValue());
	}

	/**
	 * Port of {@code aBb(gH$th)} (eN.java:154-155): per-tick the body polls
	 * {@code ol.cER(Return Delay)} (trace 2026-10-17) — mirrored as the
	 * timer-only restore — then runs the wind-burst branch for the Wind Burst /
	 * Smart modes (reconstruction; the slider gates on Smart via
	 * {@code PxteY.Vf(EifDU::SZ)}).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		// PxteY.Vf(this.EifDU::SZ) (eN.java:142): slider visible iff Smart selected.
		windburstThreshold.setVisible("smart".equals(mode.getValue()));
		if (previousSlot >= 0 && System.currentTimeMillis() >= restoreAtMs) {
			player.getInventory().setSelectedSlot(previousSlot);
			previousSlot = -1;
			return;
		}
		if (!"wind_burst".equals(mode.getValue())
				&& !"smart".equals(mode.getValue())) {
			prevProgress = player.getAttackCooldownProgress(0.0f);
			return;
		}
		if (!player.getMainHandStack().isOf(Items.MACE)) {
			prevProgress = player.getAttackCooldownProgress(0.0f);
			return;
		}
		float progress = player.getAttackCooldownProgress(0.0f);
		boolean attacked = progress < prevProgress - 0.3f;
		prevProgress = progress;
		if (!attacked || player.fallDistance < windburstThreshold.getValue()) {
			return;
		}
		int charge = hotbarSlotOf(player, Items.WIND_CHARGE);
		if (charge < 0) {
			return;
		}
		previousSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(charge);
		client.interactionManager.interactItem(player, Hand.MAIN_HAND);
		player.swingHand(Hand.MAIN_HAND);
		restoreAtMs = System.currentTimeMillis() + Math.round(returnDelay.getValue());
	}

	/** Port of the cK Allowed Items membership (eN.java:91-105; cK.WX). */
	private boolean isAllowed(ItemStack stack) {
		if (woodenSword.getValue() && stack.isOf(Items.WOODEN_SWORD)) return true;
		if (stoneSword.getValue() && stack.isOf(Items.STONE_SWORD)) return true;
		if (ironSword.getValue() && stack.isOf(Items.IRON_SWORD)) return true;
		if (goldenSword.getValue() && stack.isOf(Items.GOLDEN_SWORD)) return true;
		if (diamondSword.getValue() && stack.isOf(Items.DIAMOND_SWORD)) return true;
		if (netheriteSword.getValue() && stack.isOf(Items.NETHERITE_SWORD)) return true;
		if (woodenAxe.getValue() && stack.isOf(Items.WOODEN_AXE)) return true;
		if (stoneAxe.getValue() && stack.isOf(Items.STONE_AXE)) return true;
		if (ironAxe.getValue() && stack.isOf(Items.IRON_AXE)) return true;
		if (goldenAxe.getValue() && stack.isOf(Items.GOLDEN_AXE)) return true;
		if (diamondAxe.getValue() && stack.isOf(Items.DIAMOND_AXE)) return true;
		return netheriteAxe.getValue() && stack.isOf(Items.NETHERITE_AXE);
	}

	private static int hotbarSlotOf(ClientPlayerEntity player, net.minecraft.item.Item item) {
		for (int slot = 0; slot < 9; slot++) {
			if (player.getInventory().getMainStacks().get(slot).isOf(item)) {
				return slot;
			}
		}
		return -1;
	}
}
