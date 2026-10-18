package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.item.ItemStack;

/**
 * Attribute Swap (registry sixtwo.fh, module id 139): "Automatically performs
 * attribute swap". Category {@code gh.xwjCw} (Combat; fh.java:38).
 *
 * <p>parity: settings 2/2, category fixed, behavior approximate. decompile:
 * analysis/decompiled/casesafe/payload-decrypted/sixtwo/fh.java (declared
 * class fh) — constructor fh.java:36-67: {@code super(gf.aZL(139, false,
 * gh.xwjCw))}, "Target Slot" cC chain {@code .Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0)}
 * (step 1, min 1, max 9, default 1, no suffix builder), "Return Delay" cA chain
 * {@code .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(NXMEC)} (step 10,
 * min 0, max 1000, default range 50-100), helper {@code nJGrs = new ol(this)}
 * (action scheduler absorbed into the tick), listeners fh.java:20-28:
 * {@code aJg(hw$tv)} attack event + {@code aJf(gH$th)} tick. Behavior spec:
 * analysis/specs/casesafe/handlers/fh.md (the sibling-loose
 * analysis/specs/handlers/fh.md holds fH "Aim Assist" — case-twin).
 *
 * <p><b>Recovered cA semantics (2026-10-18 re-verify):</b> {@code cA} is a
 * range slider — its state is {@code MutablePair<Double,Double> wJgtl}
 * (casesafe/payload-named-cfr/sixtwo/cA_.java:37) and its value accessor
 * {@code UN()} = {@code mU.cpR(this)} (cA_.java:557-559) =
 * {@code mU.cpP(UW().getLeft(), UW().getRight())} (sixtwo_77.java:215-219) =
 * {@code pcazh.nextDouble() * (d3 - d2) + d2} (sixtwo_77.java:125-127) — a fresh
 * uniform draw in {@code [left, right)} per read. Consumers confirmed:
 * mm.java:57-58, fJ_.java:73, ff.java:370 all read {@code cA.UN()}. So
 * {@code UI(50.0, 100.0)} means "delay uniform in [50, 100) ms", not a fixed 50
 * — ported with the repo convention (ClickAction/TargetMargin): slider = left
 * handle, the recovered second UI value = fixed anchor, sampled once per armed
 * swap.
 *
 * <p>Recovered for the slice: {@code ItemStack.getUseAction()} +
 * {@code UseAction.NONE} ("do-nothing filler" probe), component probes
 * {@code CONSUMABLE}, {@code BLOCKS_ATTACKS}, {@code KINETIC_WEAPON},
 * {@code EQUIPPABLE}, and the stack-is-item test; the attack hook consumes a
 * one-shot latch and {@code aJf} keeps the return swap after Return Delay via
 * the ol scheduler (fh.md "Runtime model").
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): {@code aJf} ran in all
 * three enable windows (3 ticks), each with the identical visible body:
 * {@code fg.aIW() → 0} (the payload's static sentry/broadcast read — same
 * pattern as gg.baA()/mT.cpK(); null here, Target Lock not engaged),
 * {@code gg.bab() → 1} (in-game gate: player/world/interactionManager/
 * networkHandler all non-null) and {@code ol.cER(Return Delay) → 0} with
 * nested {@code ol.cEX() → 12} / {@code ol.cEW() → 0} — the per-module
 * scheduler poll reporting no armed return swap. {@code aJg(hw$tv)} (the
 * attack swap) never triggered — capture condition: attack an entity with the
 * module enabled (with Target Lock engaged to exercise the {@code aIW() !=
 * null} branch).
 *
 * <p>high-probability guess: the Return Delay suffix {@code NXMEC} is
 * undecrypted — cited as " ms" (0-1000 step-10 range; time-unit reading per
 * casesafe/fh.md §Unrecovered 4). Which probe makes a stack the "attribute"
 * item (the component priority chain and whether CONSUMABLE/UseAction.NONE are
 * rejecting fillers) is unrecovered — implemented as "attacker stack qualifies
 * when it carries KINETIC_WEAPON or BLOCKS_ATTACKS or EQUIPPABLE, fillers when
 * it carries CONSUMABLE or is UseAction.NONE" (high-probability guess). The
 * swap mechanics (direct selected-slot switch vs click-swap window packet) and
 * the {@code ol} scheduler shape are likewise guesses carrying the recovered
 * constants only.
 */
public class AttributeSwap extends Module {
	private final DoubleSetting targetSlot = register(new DoubleSetting("target_slot", 1.0, 1.0, 9.0, 1.0, null));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	/** Second element of the recovered {@code UI(50.0, 100.0)} default pair (fh.java:65). */
	private static final double RETURN_DELAY_ANCHOR = 100.0;

	private int savedSlot = -1;
	private boolean armed;
	private long armedAt;
	private long armedDelayMs;

	public AttributeSwap() {
		super("attribute_swap", "Attribute Swap", "Automatically performs attribute swap",
				ModuleCategory.COMBAT);
	}

	@Override
	protected void onEnable() {
		savedSlot = -1;
		armed = false;
		armedAt = 0L;
		armedDelayMs = 0L;
	}

	@Override
	protected void onDisable() {
		savedSlot = -1;
		armed = false;
	}

	/**
	 * Samples the Return Delay from {@code [returnDelay, RETURN_DELAY_ANCHOR]}
	 * (recovered cA range pair {@code UI(50.0, 100.0)} / {@code cA.UN()} =
	 * {@code mU.cpP}, uniform in the pair range).
	 */
	private long sampleReturnDelayMs() {
		double left = returnDelay.getValue();
		double right = Math.max(left, RETURN_DELAY_ANCHOR);
		if (right <= left) {
			return Math.round(left);
		}
		return Math.round(java.util.concurrent.ThreadLocalRandom.current().nextDouble(left, right));
	}

	/**
	 * Attack-event listener (sixtwo.fh#aJg): consumes the one-shot latch,
	 * evaluates the held stack components, performs the mainhand to Target
	 * Slot exchange and arms the return swap.
	 */
	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || !isEnabled()) {
			return;
		}
		if (!event.player().equals(player)) {
			return;
		}
		ItemStack held = player.getMainHandStack();
		if (!isAttributeItem(held)) {
			return;
		}
		int target = targetSlot.getValue().intValue() - 1;
		int current = player.getInventory().getSelectedSlot();
		if (target < 0 || target > 8 || target == current) {
			return;
		}
		ItemStack other = player.getInventory().getStack(target);
		if (isAttributeItem(other)) {
			return;
		}
		savedSlot = current;
		player.getInventory().setSelectedSlot(target);
		armed = true;
		armedAt = System.currentTimeMillis();
		armedDelayMs = sampleReturnDelayMs();
	}

	@Override
	public void onTick() {
		// trace 2026-10-17: aJf → fg.aIW() → 0 (payload sentry read; no port
		// analog) → gg.bab() → 1 (in-game gate) → ol.cER(Return Delay) → 0
		// (scheduler poll, 0 = no pending return swap) — identical in all 3
		// captured tick runs.
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || player.getEntityWorld() == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (!armed) {
			// ol.cER(returnDelay) → 0: no armed return swap this tick.
			return;
		}
		if (System.currentTimeMillis() - armedAt < armedDelayMs) {
			return;
		}
		if (savedSlot >= 0 && savedSlot <= 8) {
			player.getInventory().setSelectedSlot(savedSlot);
		}
		savedSlot = -1;
		armed = false;
	}

	/**
	 * Recovered from the fh slice (fh.md "Runtime model"): the held stack's
	 * identity probes — {@code getUseAction() == UseAction.NONE} identifies a
	 * "do-nothing" filler, {@code CONSUMABLE}/{@code BLOCKS_ATTACKS}/
	 * {@code KINETIC_WEAPON}/{@code EQUIPPABLE} are the component probes. The
	 * exact priority chain is native; high-probability guess: kinetic/blocks-/
	 * equippable stacks qualify as the attribute item, consumable/UseAction.NONE
	 * stacks are the filler side.
	 */
	private static boolean isAttributeItem(ItemStack stack) {
		if (stack.isEmpty()) {
			return false;
		}
		if (stack.contains(DataComponentTypes.KINETIC_WEAPON)
				|| stack.contains(DataComponentTypes.BLOCKS_ATTACKS)
				|| stack.contains(DataComponentTypes.EQUIPPABLE)) {
			return true;
		}
		return !stack.contains(DataComponentTypes.CONSUMABLE)
				&& stack.getUseAction() != net.minecraft.item.consume.UseAction.NONE;
	}
}
