package dev.opengrim.modules.combat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;

/**
 * Auto Tool (registry sixtwo.fL): "Automatically swaps to best tool when
 * mining".
 *
 * <p>Port of sixtwo.fL (casesafe/payload-decrypted/sixtwo/fL_.java:28-101
 * constructor; tick {@code aVf(gH$th)} fL_.java:84-85, worker
 * {@code aVg(BlockState)} fL_.java:91 scoring with
 * {@code Item.getMiningSpeedMultiplier} ({@code method_7924}); spec
 * analysis/specs/handlers/fL.md).
 * Settings in declaration order: Cooldown 10.0/0.0-1000.0/50.0-100.0 " ms",
 * Return Back (false), Return Delay 10.0/0.0-1000.0/50.0-100.0 " ms".
 *
 * <p><b>Recovered cA semantics (2026-10-18 re-verify):</b> both timers are
 * {@code cA} range sliders — state {@code MutablePair<Double,Double> wJgtl}
 * (casesafe/payload-named-cfr/sixtwo/cA_.java:37); the value accessor
 * {@code UN()} = {@code mU.cpR(this)} (cA_.java:557-559) =
 * {@code mU.cpP(left, right)} (sixtwo_77.java:215-219) =
 * {@code pcazh.nextDouble() * (d3 - d2) + d2} (sixtwo_77.java:125-127) — a
 * fresh uniform draw in {@code [left, right)} per read (consumers mm.java:57-58,
 * fJ_.java:73, ff.java:370). {@code UI(50.0, 100.0)} therefore means each
 * cooldown / return delay is uniform in [50, 100) ms; ported with the repo
 * convention (ClickAction/TargetMargin): slider = left handle, the recovered
 * second UI value = fixed anchor, sampled once per switch / per break end.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fL_.jsonl,
 * window [171531.4,171572.4]): {@code aVf}/{@code aVg} did NOT run — the client's
 * tick loop was stalled for the whole window (the always-on gH$th dispatchers
 * qN.dcs/qL.dbN/oU.cKW/qK.dbz/om.cEZ stop at t=171407.1 and resume at
 * t=171615.5), so this is a capture-environment gap, not module behavior. The
 * window's only fL event is the disable chain {@code YO} &rarr; {@code ol.cET()}
 * (t=171572801399) — the shared swap-cleanup also called by the disables of
 * dR/eG/eH/eN/eO/eS. {@code ol} owns the saved-slot/swapped latch (ol.java:14-15),
 * so disable restores the pre-swap slot; cET's body itself is VM-resident.
 * Capture condition for aVf/aVg: re-run with live ticks and hold attack on a
 * block (mining) — then aVf should run per tick and aVg should receive the mined
 * BlockState (swap trigger source/scan scope stay fL.md "Unrecovered" 2-3).
 */
public class AutoTool extends Module {
	private final DoubleSetting cooldown = register(new DoubleSetting("cooldown", 10.0, 0.0, 1000.0, 50.0, " ms"));
	private final BoolSetting returnBack = register(new BoolSetting("return_back", false));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	/** Second element of both recovered {@code UI(50.0, 100.0)} default pairs (fL_.java:40, 67). */
	private static final double DELAY_ANCHOR = 100.0;

	private long lastSwitchMs = -1L;
	private long cooldownMs = 0L;
	private int originalSlot = -1;
	private long breakEndedMs = -1L;
	private long returnDelayMs = 0L;
	private boolean wasBreaking;

	public AutoTool() {
		super("auto_tool", "Auto Tool", "Automatically swaps to best tool when mining", ModuleCategory.COMBAT);
	}

	/**
	 * Samples a {@code cA} range setting (recovered pair semantics: {@code UN()} =
	 * {@code mU.cpP(left, right)}, uniform in [left, right) — cA_.java:557-559,
	 * sixtwo_77.java:125-127/215-219) with the repo convention: slider = left
	 * handle, the recovered second UI value = fixed anchor.
	 */
	private static long sampleRange(DoubleSetting setting) {
		double left = setting.getValue();
		double right = Math.max(left, DELAY_ANCHOR);
		if (right <= left) {
			return Math.round(left);
		}
		return Math.round(java.util.concurrent.ThreadLocalRandom.current().nextDouble(left, right));
	}

	@Override
	public void onDisable() {
		// trace 2026-10-17: YO → ol.cET() (t=171572801399) — the shared swap cleanup;
		// restore the latched pre-swap slot before clearing state.
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null && originalSlot >= 0) {
			client.player.getInventory().setSelectedSlot(originalSlot);
		}
		lastSwitchMs = -1L;
		cooldownMs = 0L;
		originalSlot = -1;
		breakEndedMs = -1L;
		returnDelayMs = 0L;
		wasBreaking = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.crosshairTarget == null) {
			return;
		}
		boolean breaking = client.interactionManager != null && client.interactionManager.isBreakingBlock();
		if (!breaking) {
			if (wasBreaking) {
				breakEndedMs = System.currentTimeMillis();
				returnDelayMs = sampleRange(returnDelay);
			}
			wasBreaking = false;
			if (returnBack.getValue() && originalSlot >= 0 && breakEndedMs >= 0
					&& System.currentTimeMillis() - breakEndedMs >= returnDelayMs) {
				player.getInventory().setSelectedSlot(originalSlot);
				originalSlot = -1;
				breakEndedMs = -1L;
			}
			return;
		}
		wasBreaking = true;
		breakEndedMs = -1L;
		if (!(client.crosshairTarget instanceof BlockHitResult hit)) {
			return;
		}
		BlockPos pos = hit.getBlockPos();
		BlockState state = client.world.getBlockState(pos);
		selectFor(state, player);
	}

	private void selectFor(BlockState state, ClientPlayerEntity player) {
		int best = bestHotbarSlot(player, state);
		if (best < 0 || best == player.getInventory().getSelectedSlot()) {
			return;
		}
		long now = System.currentTimeMillis();
		if (lastSwitchMs >= 0L && now - lastSwitchMs < cooldownMs) {
			return;
		}
		if (returnBack.getValue() && originalSlot < 0) {
			originalSlot = player.getInventory().getSelectedSlot();
		}
		player.getInventory().setSelectedSlot(best);
		lastSwitchMs = now;
		cooldownMs = sampleRange(cooldown);
	}

	private static int bestHotbarSlot(ClientPlayerEntity player, BlockState state) {
		int best = -1;
		float bestSpeed = -1.0f;
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isEmpty()) {
				continue;
			}
			float speed = stack.getMiningSpeedMultiplier(state);
			if (speed > bestSpeed) {
				best = slot;
				bestSpeed = speed;
			}
		}
		return best;
	}
}
