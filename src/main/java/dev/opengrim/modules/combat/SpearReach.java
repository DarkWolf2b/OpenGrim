package dev.opengrim.modules.combat;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.InteractionRangeEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.AttackRangeComponent;
import net.minecraft.entity.Entity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.tag.ItemTags;

/**
 * Spear Reach (registry sixtwo.eF, module id 128): "Increases reach by attribute swapping
 * with spear".
 *
 * <p>Port of sixtwo.eF (payload-decrypted/sixtwo/eF.java). Category
 * {@code gh.xwjCw} = Combat ({@code gf.aZL(128, false, gh.xwjCw)} eF.java:61).
 * Spec: analysis/specs/casesafe/handlers/eF_.md. Settings ctor order:
 * Allowed Items {@code cK .WM(jc.WnbNG).WN(new Item[]{WOODEN_SWORD, STONE_SWORD,
 * IRON_SWORD, GOLDEN_SWORD, DIAMOND_SWORD, NETHERITE_SWORD, WOODEN_AXE,
 * STONE_AXE, IRON_AXE, GOLDEN_AXE, DIAMOND_AXE, NETHERITE_AXE})} (eF.java:62-90,
 * 12-item multiselect default = all twelve), Return Delay
 * {@code cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(feInP)} (eF.java:91-104;
 * suffix is the native-decrypted static {@code feInP}, not in the decrypted dump —
 * kept null per the encrypted-suffix convention).
 *
 * <p><b>Recovered cA semantics (2026-10-18 re-verify):</b> Return Delay is a
 * {@code cA} range slider — state {@code MutablePair<Double,Double> wJgtl}
 * (casesafe/payload-named-cfr/sixtwo/cA_.java:37); value accessor {@code UN()} =
 * {@code mU.cpR(this)} (cA_.java:557-559) = {@code mU.cpP(left, right)}
 * (sixtwo_77.java:215-219) = {@code pcazh.nextDouble() * (d3 - d2) + d2}
 * (sixtwo_77.java:125-127) — a fresh uniform draw in {@code [left, right)} per
 * read (consumers mm.java:57-58, fJ_.java:73, ff.java:370). {@code UI(50.0, 100.0)}
 * means "swap-back delay uniform in [50, 100) ms"; ported with the repo convention
 * (ClickAction/TargetMargin): slider = left handle, the recovered second UI value
 * = fixed anchor, sampled once per swap. The item multiselect's effective default
 * is also recovered: {@code cK.WM(jc.WnbNG)} seeds the picker with all items
 * ({@code jc.bzM()} = every non-AIR {@code Items} field, jc.java:1794-1810) and
 * {@code WN(12 items)} intersects to exactly those twelve
 * ({@code cK.Xa} writes {@code eAose} = set ∩ {@code NBjNm}, cK.java:121-199;
 * predicates WY/WZ/WW/WX read {@code eAose}, cK.java:552-573).
 *
 * <p>Recovered pipeline (eF_.md "Runtime model"): read the held stack's
 * {@code AttackRangeComponent} ({@code awK: stack.get(DataComponentTypes.ATTACK_RANGE)},
 * {@code comp_5261 maxRange}); the entity default comes from
 * {@code AttackRangeComponent.defaultForEntity} ({@code method_76734}); spear
 * identity via the {@code SPEARS} item tag ({@code field_63257}); on the attack
 * event ({@code awH(hw$tv)}) the target distance is evaluated against the range
 * and, when the attack is out of normal range, the hotbar swaps to the spear
 * ({@code awJ()} player+slot provider) and swaps back after Return Delay via the
 * {@code ol} scheduler. The reach-modify event {@code awF(gY)} writes the
 * effective reach back through the event's {@code bco(double)}.
 *
 * <p>Stack adaptations: {@code gY} is wired to our {@code InteractionRangeEvent}
 * (ENTITY kind, the listener the vanilla crosshair/attack-range check reads);
 * the item multiselect is ported as twelve toggles; the swap happens inside the
 * cancellable {@code AttackEntityEvent}, so vanilla resolves the hit with the
 * spear already selected (the original submitted through its own {@code ol}
 * machinery).
 *
 * <p>high-probability guess: the reach value written is the spear's
 * {@code getEffectiveMaxRange(player)} ({@code method_76739}, which also spans the
 * {@code LUNGE} attribute) when an allowed item is held and a spear is available —
 * the write-formula our {@code bco} carries is VM-only; the substitute uses only
 * recovered API reads.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eF_.jsonl,
 * window [168994.1,169008.0]): {@code awE} entered 2&times; (one per tick); its body
 * ran the in-game guard {@code gg.bab()} &rarr; 1 and then the shared scheduler
 * check {@code ol.cER(jymCX)} (Return Delay) &rarr; 0 (inside: {@code ol.cEX()} &rarr;
 * 12, {@code ol.cEW()} &rarr; 0) — the "swap back due?" check (swapped latch &amp;&amp;
 * elapsed &ge; setting), false because nothing had been swapped. The
 * {@code eG.axm()}[]iS and {@code fX.aYu()}[]I calls in the same spans are
 * VM-dispatch artifact getters (iS[]/int[]-typed opaque predicates, same shape as
 * cQ's {@code dh.afl()} at cQ.java:225) — not cross-module behavior, so the
 * previously-flagged eF &rarr; eG.axm call is not ported. {@code awF}/{@code awH}/
 * {@code awG} did not run (no reach query / attack / marker event fired in the
 * window). Capture conditions: aim at an entity so the reach event fires (awF),
 * attack an out-of-range entity with a spear in the hotbar (awH/awJ swap path),
 * and trigger the gZ$tt marker (awG). eF declares no {@code YO} override
 * (eF.java:59-114) — no restore-on-disable (the earlier safety restore is removed
 * for 1:1 parity).
 */
public class SpearReach extends Module {
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
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, null));

	/** Second element of the recovered {@code UI(50.0, 100.0)} default pair (eF.java:91-104). */
	private static final double RETURN_DELAY_ANCHOR = 100.0;

	private int previousSlot = -1;
	private long swapAtMs = -1L;
	private long returnDelayMs = 0L;

	public SpearReach() {
		super("spear_reach", "Spear Reach", "Increases reach by attribute swapping with spear",
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

	/**
	 * Port of {@code awF(gY)} — reach-modify: extends the entity interaction
	 * range to the available spear's effective max range while an Allowed
	 * Items stack (or the spear itself) is held, so the vanilla pick can ever
	 * reach farther (eF_.md reach pipeline).
	 */
	@Subscribe
	public void onInteractionRange(InteractionRangeEvent event) {
		if (event.kind() != InteractionRangeEvent.Kind.ENTITY) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		ItemStack held = player.getMainHandStack();
		if (!isAllowed(held) && !isSpear(held)) {
			return;
		}
		AttackRangeComponent spearRange = spearRangeComponent(player);
		if (spearRange == null) {
			return;
		}
		float extended = spearRange.getEffectiveMaxRange(player);
		if (extended > event.value()) {
			event.setValue(extended);
		}
	}

	/**
	 * Port of {@code awH(hw$tv)} — attack-event entry: evaluate target
	 * distance against the held stack's max range ("when the desired attack
	 * is out of normal range, swap to a spear"); swap to the spear for this
	 * hit ({@code awJ()} slot provider).
	 */
	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		if (!(event.player() instanceof ClientPlayerEntity player)) {
			return;
		}
		ItemStack held = player.getMainHandStack();
		if (!isAllowed(held) || isSpear(held)) {
			return;
		}
		Entity target = event.target();
		if (target == null) {
			return;
		}
		AttackRangeComponent current = held.get(DataComponentTypes.ATTACK_RANGE);
		double normal = current != null ? current.getEffectiveMaxRange(player)
				: AttackRangeComponent.defaultForEntity(player).getEffectiveMaxRange(player);
		if (player.distanceTo(target) <= normal) {
			return;
		}
		int spear = findSpearSlot(player);
		if (spear < 0 || spear == player.getInventory().getSelectedSlot()) {
			return;
		}
		previousSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(spear);
		swapAtMs = System.currentTimeMillis();
		returnDelayMs = sampleReturnDelayMs();
	}

	/**
	 * Samples Return Delay in ms from {@code [returnDelay, RETURN_DELAY_ANCHOR]}
	 * (recovered cA range pair {@code UI(50.0, 100.0)} / {@code cA.UN()} =
	 * {@code mU.cpP}, uniform in the pair range — casesafe/payload-named-cfr/
	 * sixtwo/cA_.java:557-559, sixtwo_77.java:125-127/215-219).
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
	 * Port of {@code awE(gH$th)} — the tick-side scheduler upkeep. Trace 2026-10-17:
	 * awE's only visible call was {@code ol.cER(jymCX)} (Return Delay) &rarr; 0 — the
	 * shared "swap-back due?" check (swapped latch &amp;&amp; elapsed &ge; setting; ol owns
	 * the latch/saved slot, ol.java:14-15), false while nothing was swapped.
	 * Mirrored as a timer-only restore (the previous targeted-entity condition had
	 * no trace support and is dropped).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		// trace 2026-10-17: awE ran the gg.bab() in-game guard (→1) before ol.cER.
		if (player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (previousSlot < 0) {
			return;
		}
		if (System.currentTimeMillis() - swapAtMs >= returnDelayMs) {
			player.getInventory().setSelectedSlot(previousSlot);
			previousSlot = -1;
		}
	}

	private int findSpearSlot(ClientPlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			if (isSpear(player.getInventory().getStack(slot))) {
				return slot;
			}
		}
		return -1;
	}

	/** Port of {@code awK(ItemStack)} — {@code stack.get(DataComponentTypes.ATTACK_RANGE)} on the held spear. */
	private static AttackRangeComponent spearRangeComponent(ClientPlayerEntity player) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (isSpear(stack)) {
				return stack.get(DataComponentTypes.ATTACK_RANGE);
			}
		}
		return null;
	}

	private boolean isAllowed(ItemStack stack) {
		if (woodenSword.getValue()) { if (stack.isOf(net.minecraft.item.Items.WOODEN_SWORD)) return true; }
		if (stoneSword.getValue()) { if (stack.isOf(net.minecraft.item.Items.STONE_SWORD)) return true; }
		if (ironSword.getValue()) { if (stack.isOf(net.minecraft.item.Items.IRON_SWORD)) return true; }
		if (goldenSword.getValue()) { if (stack.isOf(net.minecraft.item.Items.GOLDEN_SWORD)) return true; }
		if (diamondSword.getValue()) { if (stack.isOf(net.minecraft.item.Items.DIAMOND_SWORD)) return true; }
		if (netheriteSword.getValue()) { if (stack.isOf(net.minecraft.item.Items.NETHERITE_SWORD)) return true; }
		if (woodenAxe.getValue()) { if (stack.isOf(net.minecraft.item.Items.WOODEN_AXE)) return true; }
		if (stoneAxe.getValue()) { if (stack.isOf(net.minecraft.item.Items.STONE_AXE)) return true; }
		if (ironAxe.getValue()) { if (stack.isOf(net.minecraft.item.Items.IRON_AXE)) return true; }
		if (goldenAxe.getValue()) { if (stack.isOf(net.minecraft.item.Items.GOLDEN_AXE)) return true; }
		if (diamondAxe.getValue()) { if (stack.isOf(net.minecraft.item.Items.DIAMOND_AXE)) return true; }
		if (netheriteAxe.getValue()) { if (stack.isOf(net.minecraft.item.Items.NETHERITE_AXE)) return true; }
		return false;
	}

	/** Spear identity: {@code SPEARS} item tag ({@code field_63257}, eF pool window). */
	static boolean isSpear(ItemStack stack) {
		return !stack.isEmpty() && stack.isIn(ItemTags.SPEARS);
	}
}
