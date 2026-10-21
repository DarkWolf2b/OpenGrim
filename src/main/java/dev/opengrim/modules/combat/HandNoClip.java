package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.CollisionShapeEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.block.Blocks;

/**
 * Hand No Clip (registry sixtwo.dS): "Allows to attack through blocks".
 *
 * <p>Port of sixtwo.dS (casesafe/payload-decrypted/sixtwo/dS_.java:26-99;
 * handler spec analysis/specs/handlers/dS.md). Category {@code gh.qBzlZ}
 * (Misc; combat-function package per batch6.md). Settings in ctor order
 * (dS_.java:29-98): Ignore group with All / Specified ({@code ct} + two
 * {@code cu}), Work On group ({@code cv .Tm(1)}) with Place / Break
 * ({@code cw .Tz()} = default selected), Blocks item set
 * {@code cK .WM(jc.GjreY).WN(Items.COBWEB, Items.PAINTING)} with the
 * {@code xmgVN.Vf(this.UeXgv::SZ)} change callback. The one behavior handler
 * {@code apC(hm)} (dS_.java:112-113) nulls the block's shape
 * ({@code VoxelShapes.empty()}, {@code method_1073}) through the mutable
 * {@code hm.bcS(VoxelShape)} setter while the block is relevant to the
 * current action (Work On) and matches the Ignore mode; {@code apD()Z} is a
 * VM-only predicate (dS_.java:117).
 *
 * <p><b>Recovered widget defaults (2026-10-18 re-verify):</b> Ignore's
 * {@code ct} selects index 0 unless an option is marked with {@code cu.SY()}
 * (ct.java:33-41 sets {@code kErPl = 0}; cu.java:200-202 is the only other
 * writer) — neither All nor Specified is marked, so the default is All. Both
 * Work On children carry {@code .Tz()} (dS_.java:64-89), i.e. both are
 * default-selected: {@code cw.Tz()} = {@code cv.To(this)} adds the child to the
 * group's selected list (cw.java:152-155, cv.java:40-126) and the effective gate
 * {@code cw.TC()} = {@code RDnKR && selected} (cw.java:157-181, field init true
 * at cw.java:50-51) — the port's "place/break default true" is evidenced. The
 * Blocks set's effective default is {COBWEB}: {@code WM(jc.GjreY)} selects all
 * block items ({@code jc.GjreY} = {@code jc.bzN()}, jc.java:1335-1352),
 * {@code WN(COBWEB, PAINTING)} intersects to that set (cK.Xa, cK.java:121-199)
 * and PAINTING is not a block item, so {@code eAose} = {COBWEB} (the predicates
 * WY/WZ/WW/WX read {@code eAose}, cK.java:552-573).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/dS_.jsonl):
 * the window captured only the class-load line — {@code apC(hm)} and {@code apD()}
 * did not run (the tour driver stands still, so no block-shape query of a
 * relevant block occurs). Capture condition: walk into / attack through a cobweb
 * (or a Blocks-listed block) with the module enabled so the {@code hm} shape event
 * fires — then apC's shape replacement and the apD predicate (the attack-key
 * participation, dS.md "Unrecovered" 1) become observable.
 */
public class HandNoClip extends Module {
	private final ModeSetting ignore = register(new ModeSetting("ignore",
			List.of("all", "specified"), "all"));
	private final GroupSetting workOn = register(new GroupSetting("work_on"));
	private final BoolSetting place = register(new BoolSetting("place", true));
	private final BoolSetting breakBlock = register(new BoolSetting("break", true));
	private final GroupSetting blocks = register(new GroupSetting("blocks"));
	private final BoolSetting cobweb = new BoolSetting("cobweb", true);
	private final BoolSetting painting = new BoolSetting("painting", true);

	public HandNoClip() {
		super("hand_no_clip", "Hand No Clip", "Allows to attack through blocks", ModuleCategory.PLAYER);
		workOn.add(place);
		workOn.add(breakBlock);
		blocks.add(cobweb);
		blocks.add(painting);
		// xmgVN.Vf(this.UeXgv::SZ) (dS_.java:98) initial state (default Ignore = "all").
		blocks.setVisible("specified".equals(ignore.getValue()));
	}

	@Override
	public void onTick() {
		// xmgVN.Vf(this.UeXgv::SZ) (dS_.java:98) — Blocks list is bound to the
		// Specified child of Ignore; hidden while All is selected.
		blocks.setVisible("specified".equals(ignore.getValue()));
	}

	@Subscribe
	private void onCollisionShape(CollisionShapeEvent event) {
		if (!isEnabled()) {
			return;
		}
		if (!place.getValue() && !breakBlock.getValue()) {
			return;
		}
		if ("specified".equals(ignore.getValue()) && !isListed(event.state().getBlock())) {
			return;
		}
		event.setReplacement(Blocks.AIR.getDefaultState());
	}

	/**
	 * Membership test for the decrypted Blocks list (dS.java:87: default
	 * entries {@code Items.COBWEB} and {@code Items.PAINTING}). Paintings are
	 * entities and never query block collision shapes, so only the cobweb
	 * entry is consulted here; the painting entry is retained for structure
	 * parity (the native apD gate owns the entity-side path).
	 */
	private boolean isListed(net.minecraft.block.Block block) {
		return block == Blocks.COBWEB && cobweb.getValue();
	}
}
