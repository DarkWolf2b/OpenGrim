package dev.opengrim.modules.combat;

import java.util.concurrent.ThreadLocalRandom;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.TargetingMarginEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.block.Blocks;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Target Margin (registry sixtwo.fJ): "Invisible version of hitboxes".
 *
 * <p>parity: full for the recovered Java surface. 1:1 reconstruction of
 * sixtwo.fJ. Spec: analysis/specs/casesafe/handlers/fJ_.md (evidence:
 * fJ.java:74-76 aUN attack redraw, fJ.java:78-89 aUO margin hook,
 * fJ.java:164-319 aUP decision order, settings fJ.java:318-409).
 *
 * <p>The original intercepts vanilla {@code Entity#getTargetingMargin()} via
 * its {@code hr} mixin callback (entity + CallbackInfoReturnable&lt;Float&gt;) and
 * rewrites the returned margin while enabled; this rebuild mirrors that with
 * {@link TargetingMarginEvent}, posted by
 * {@link dev.opengrim.mixin.EntityTargetingMarginMixin}. The cached margin
 * re-rolls on every local-player attack (original {@code hw.tv} = the
 * attack-pre event of bootstrap InteractionEventBridgeMixin; port
 * {@link AttackEntityEvent}) and is served by the margin hook.
 *
 * <p>"Size" is the original's two-handle range widget
 * {@code cA .UG(0.01).UE(0.0).UF(2.0).UI(0.0, 0.0)} whose draw
 * ({@code mU.cpP}, uniform in [left, right]) re-rolls per attack. This rebuild
 * keeps the repo's single-slider convention (ClickAction/CartRefill precedent:
 * slider = left handle, the UI pair's second value kept as an anchor constant)
 * — with anchor 0.0 the draw is degenerate, so Size acts as the fixed margin.
 *
 * <p>"Slots" is the original's {@code cz} hotbar-slot set (fJ.java:384,
 * constructed empty — all toggles default off); modelled as the repo's
 * GroupSetting with nine toggles (CartRefill precedent). The original gate
 * {@code Fkuth.WF() && !EqPct.Uy()} (fJ.java:215-238) returns margin 0 when
 * Only For Slots is on and the selected hotbar slot is not in the set.
 *
 * <p>Known divergence: the port's bus only delivers to enabled modules, so the
 * attack redraw does not run while disabled (the original's aUN has no
 * {@code bab()} gate); the cached value is otherwise preserved across
 * enable/disable exactly like the original's {@code QAlRd}.
 */
public class TargetMargin extends Module {
	/** Second value of the recovered Size UI-pair (0.0, 0.0). */
	private static final double SIZE_ANCHOR = 0.0;

	private final DoubleSetting size = register(new DoubleSetting("size", 0.01, 0.0, 2.0, 0.0, null));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", false));
	private final BoolSetting disableIfHoldingCobweb = register(new BoolSetting("disable_if_holding_cobweb", false));
	private final BoolSetting onlyForSlots = register(new BoolSetting("only_for_slots", false));
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting slot0 = new BoolSetting("slot_0", false);
	private final BoolSetting slot1 = new BoolSetting("slot_1", false);
	private final BoolSetting slot2 = new BoolSetting("slot_2", false);
	private final BoolSetting slot3 = new BoolSetting("slot_3", false);
	private final BoolSetting slot4 = new BoolSetting("slot_4", false);
	private final BoolSetting slot5 = new BoolSetting("slot_5", false);
	private final BoolSetting slot6 = new BoolSetting("slot_6", false);
	private final BoolSetting slot7 = new BoolSetting("slot_7", false);
	private final BoolSetting slot8 = new BoolSetting("slot_8", false);
	private final BoolSetting disableIfInCobweb = register(new BoolSetting("disable_if_in_cobweb", false));

	private float cached;

	public TargetMargin() {
		super("target_margin", "Target Margin", "Invisible version of hitboxes", ModuleCategory.COMBAT);
		slots.add(slot0);
		slots.add(slot1);
		slots.add(slot2);
		slots.add(slot3);
		slots.add(slot4);
		slots.add(slot5);
		slots.add(slot6);
		slots.add(slot7);
		slots.add(slot8);
	}

	/**
	 * Attack redraw (fJ.java:74-76 aUN(hw.tv)): unconditional re-roll of the
	 * cached margin on every local-player attack, no enabled check.
	 */
	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		cached = drawSize();
	}

	/**
	 * Targeting-margin hook (fJ.java:78-89 aUO(hr)): gated by the module
	 * enabled flag ({@code bab()}), then the decision is written back.
	 */
	@Subscribe
	public void onTargetingMargin(TargetingMarginEvent event) {
		if (!isEnabled()) {
			return;
		}
		event.setValue(marginFor(event.entity()));
	}

	@Override
	public void onTick() {
		// fJ.java:408 this.EqPct.Vf(this.Fkuth::WF) — Slots visible only with
		// Only For Slots on.
		slots.setVisible(onlyForSlots.getValue());
	}

	/**
	 * Margin decision aUP (fJ.java:164-319), evaluated in original order; each
	 * early return restores the vanilla 0.0f margin. Public because the
	 * original's second consumer (ds Entity ESP "Hitbox" mode, ds.java:408-409)
	 * calls {@code fJ.aUP(entity)} directly.
	 */
	public float marginFor(Entity entity) {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || entity == player) {
			return 0.0f;
		}
		// fJ.java:190-210 NStEn "Disable If Holding Cobweb" +
		// player.isHolding(Items.COBWEB) (field_8786).
		if (disableIfHoldingCobweb.getValue() && player.isHolding(Items.COBWEB)) {
			return 0.0f;
		}
		// fJ.java:215-238 Fkuth "Only For Slots" && !EqPct.Uy() (cz.java:65-67:
		// selected hotbar slot membership).
		if (onlyForSlots.getValue() && !slotsContain(player.getInventory().getSelectedSlot())) {
			return 0.0f;
		}
		// fJ.java:248-280 XIgqS "Disable If In Cobweb" + jg.bBs (cobweb
		// intersection scan).
		if (entity instanceof LivingEntity living && disableIfInCobweb.getValue() && inCobweb(client, living)) {
			return 0.0f;
		}
		// fJ.java:285-311 CCWrA "Ignore Friends" + rD.dmc().ddy (friend
		// registry; repo FriendsManager per the established convention).
		if (entity instanceof PlayerEntity p && ignoreFriends.getValue()
				&& FriendsManager.isFriend(p.getGameProfile().name())) {
			return 0.0f;
		}
		return cached;
	}

	/** cz.Uy() over the port's nine slot toggles. */
	private boolean slotsContain(int selectedSlot) {
		return switch (selectedSlot) {
			case 0 -> slot0.getValue();
			case 1 -> slot1.getValue();
			case 2 -> slot2.getValue();
			case 3 -> slot3.getValue();
			case 4 -> slot4.getValue();
			case 5 -> slot5.getValue();
			case 6 -> slot6.getValue();
			case 7 -> slot7.getValue();
			case 8 -> slot8.getValue();
			default -> false;
		};
	}

	/**
	 * The cA "Size" draw ({@code KbVJm.UN()} → {@code mU.cpR} → {@code mU.cpP},
	 * uniform in the range pair): repo convention samples between the slider
	 * (left handle) and the fixed anchor (second UI value 0.0); with anchor 0.0
	 * this degenerates to the slider value.
	 */
	private float drawSize() {
		double left = size.getValue().doubleValue();
		double right = Math.max(left, SIZE_ANCHOR);
		if (right <= left) {
			return (float) left;
		}
		return (float) ThreadLocalRandom.current().nextDouble(left, right);
	}

	/** Mirrors sixtwo.jg#bBs (same helper as AntiWeb/et): box-overlap cobweb scan. */
	private static boolean inCobweb(MinecraftClient client, LivingEntity entity) {
		Box box = entity.getBoundingBox();
		BlockPos min = BlockPos.ofFloored(box.minX, box.minY, box.minZ);
		BlockPos max = BlockPos.ofFloored(box.maxX, box.maxY, box.maxZ);
		for (BlockPos pos : BlockPos.iterate(min, max)) {
			if (box.contains(Vec3d.of(pos)) && client.world.getBlockState(pos).isOf(Blocks.COBWEB)) {
				return true;
			}
		}
		return false;
	}
}
