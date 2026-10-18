package dev.opengrim.modules.movement;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.EntityPushEvent;
import dev.opengrim.event.impl.PushOutOfBlocksEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;

/**
 * No Push (registry sixtwo.es, module id 37): "Prevents pushing out of blocks".
 * Category {@code gh.xgeEn} (Movement; es.java:21).
 *
 * <p>1:1 reconstruction of sixtwo.es (payload-decrypted/sixtwo/es.java:19-62,
 * declared class es): {@code cv nPcnW} group "Cancel Push" (es.java:34) with
 * children {@code cw lfLfR} "Block Push" {@code .Tz()} (es.java:47) and
 * {@code cw uaNzy} "Entity Push" (es.java:61); two {@code @hG} handlers —
 * {@code aup(hd)} block-push event (es.java:72) and {@code auq(hq)}
 * entity-push event (es.java:83).
 *
 * <p><b>Recovered defaults (2026-10-18 re-verify):</b> {@code cw.Tz()} =
 * {@code cv.To(this)} adds the child to the group's <i>selected</i> list
 * (casesafe/payload-named-cfr/sixtwo/cw.java:152-155, cv.java:40-126) and the
 * effective gate is {@code cw.TC()} = {@code RDnKR && selected}
 * (cw.java:157-181; the field initializer is true, cw.java:50-51). The recovered
 * behaviour reads exactly that accessor — 116 case-sensitive {@code .TC()} call
 * sites in the decompiled payload (cU_/dG_/cR/cW/…) and **zero** {@code .TF()}
 * reads of the raw flag — so the two states are: Block Push {@code .Tz()} →
 * selected → on by default; Entity Push without {@code .Tz()} → not selected →
 * {@code TC() == false} → <b>off by default</b>. The port now uses
 * (true, false); the previous "both default on" reading (from the raw
 * {@code RDnKR} initializer) is superseded.
 *
 * <p>Event classes {@code hd} (carries a BlockPos, getter bcw()) and {@code hq}
 * (two Entity refs, bcZ/bda) are dispatched by the native movement patches;
 * hH.bdX(boolean)/bdW() is the cancel flag. es is the only class declaring
 * handlers for hd/hq (ev.auR also listens for hq). The rebuild wires the same
 * two engine paths through our Events: PushOutOfBlocksEvent
 * (Entity#pushOutOfBlocks) and EntityPushEvent (Entity#pushAwayFrom) — see
 * mixin/PushOutOfBlocksMixin.java, mixin/EntityPushMixin.java. Native corpus
 * analysis/ghidra/handlers-full-annotated/sixtwo_es.c (verified
 * {@code Lsixtwo/es;}).
 *
 * <p>high-probability guess: the shared decrypted pool window carried riptide
 * API tokens (EnchantmentHelper.getTridentSpinAttackStrength,
 * isTouchingWaterOrRain, useRiptide, addVelocity, move(SELF), RIPTIDE_3) — the
 * most-likely reading in es.md is that push-cancellation exempts the player
 * while in a riptide spin-attack so the boost is not frozen; applied to both
 * handlers here, exact scope unrecovered.
 *
 * <p>trace 2026-10-17: {@code aup}/{@code auq} did not run in their 4s window
 * (no block/entity push occurred — the class logged only its load event).
 * Capture conditions: auq — collide with another entity while moving (entity
 * push); aup — get pushed out of a block (e.g. stand inside a closing piston/
 * portal-adjacent block space). The conditional cancellation (riptide
 * exemption) is still the only reading of the shared window.
 */
public class NoPush extends Module {
	private final GroupSetting cancelPush = register(new GroupSetting("cancel_push"));
	private final BoolSetting blockPush = register(new BoolSetting("block_push", true));
	private final BoolSetting entityPush = register(new BoolSetting("entity_push", false));

	public NoPush() {
		super("no_push", "No Push", "Prevents pushing out of blocks", ModuleCategory.MOVEMENT);
		cancelPush.add(blockPush);
		cancelPush.add(entityPush);
	}

	/** Original handler aup(hd): cancel block push-out while Block Push is on (es.java:72). */
	@Subscribe
	public void onPushOutOfBlocks(PushOutOfBlocksEvent event) {
		if (blockPush.getValue() && !isRiptideActive()) {
			event.cancel();
		}
	}

	/** Original handler auq(hq): cancel entity push while Entity Push is on (es.java:83). */
	@Subscribe
	public void onEntityPush(EntityPushEvent event) {
		if (entityPush.getValue() && !isRiptideActive()) {
			event.cancel();
		}
	}

	private boolean isRiptideActive() {
		var player = MinecraftClient.getInstance().player;
		return player != null && player.isUsingRiptide();
	}
}