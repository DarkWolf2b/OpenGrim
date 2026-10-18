package dev.opengrim.modules.combat;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.damage.DamageSource;
import net.minecraft.network.packet.s2c.play.EntityDamageS2CPacket;

import java.util.List;

/**
 * Spear Double Tap (registry sixtwo.eI): "Performs spear and mace double tap".
 *
 * <p>Port of sixtwo.eI (payload-decrypted/sixtwo/eI.java:68-172 constructor;
 * frame axX(gM), packet axY(gL$tk) resolving EntityDamageS2CPacket to attacker
 * and victim, tick axZ(gH$th), steps aya/ayb, engaged ayj, target ayk; spec
 * analysis/specs/handlers/eI.md). Settings in declaration order: Change Armor
 * (off, eI.java:84 — no .WE call, spec "default off"), Armor Change Timing
 * (After Spear Hit / Before Mace Hit, eI.java:105-141, visible with Change
 * Armor via yTUFP.Vf(tOxMr::WF) eI.java:170), Return Back (true, eI.java:154),
 * Return Delay 10.0/0.0-1000.0/50.0 (eI.java:168, visible with Return Back via
 * Eppcp.Vf(ytGpS::WF) eI.java:171; suffix GGWXd unrecovered, " ms" unproven;
 * UI(50.0, 100.0) reads as a randomized 50-100 default range per the spec).
 *
 * <p>Recovered chain: the spear hit is detected from the damage packet
 * (createDamageSource/getAttacker/getEntityById, eI.md "Pool-derived MC
 * surface") while the held item is the spear (getActiveOrMainHandStack
 * method_76694); the second hit then runs from the tick handler. The attack
 * here goes through {@link TriggerBot#attack}.
 *
 * <p>Unrecovered (documented choices): the exact hit timing / tick offsets and
 * the second-hit execution path (eI.md "Unrecovered" — do not guess); the
 * {@code ol} armor/step controller (aya/ayb steps) is not implemented; Return
 * Back is interpreted as restoring the previously selected slot (the spec's
 * "restore armor after the cycle" reading is unproven).
 */
public class SpearDoubleTap extends Module {
	private final BoolSetting changeArmor = register(new BoolSetting("change_armor", false));
	private final ModeSetting armorChangeTiming = register(new ModeSetting("armor_change_timing",
			List.of("after_spear_hit", "before_mace_hit"), "after_spear_hit"));
	private final BoolSetting returnBack = register(new BoolSetting("return_back", true));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	private Entity rememberedTarget;
	private boolean spearHit;
	private boolean secondHit;
	private long hitAtMs;
	private int previousSlot = -1;

	public SpearDoubleTap() {
		super("spear_double_tap", "Spear Double Tap", "Performs spear and mace double tap", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		rememberedTarget = null;
		spearHit = false;
		secondHit = false;
		previousSlot = -1;
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!(event.packet() instanceof EntityDamageS2CPacket damage)) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null) {
			return;
		}
		DamageSource source = damage.createDamageSource(client.world);
		if (source == null || source.getAttacker() != client.player) {
			return;
		}
		Entity victim = client.world.getEntityById(damage.entityId());
		if (victim != null && victim.isAlive() && SpearReach.isSpear(client.player.getMainHandStack())) {
			rememberedTarget = victim;
			spearHit = true;
			secondHit = false;
			hitAtMs = System.currentTimeMillis();
		}
	}

	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		if (spearHit && event.target() != null) {
			rememberedTarget = event.target();
		}
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		armorChangeTiming.setVisible(changeArmor.getValue());
		returnDelay.setVisible(returnBack.getValue());
		if (!spearHit || secondHit) {
			maybeRestore(player);
			return;
		}
		if (System.currentTimeMillis() - hitAtMs > 1500L) {
			spearHit = false;
			maybeRestore(player);
			return;
		}
		Entity target = rememberedTarget;
		if (target == null || !target.isAlive()) {
			return;
		}
		if (player.getAttackCooldownProgress(0.0f) < 1.0f) {
			return;
		}
		if (returnBack.getValue() && previousSlot < 0) {
			previousSlot = player.getInventory().getSelectedSlot();
		}
		TriggerBot.attack(client, player, target);
		secondHit = true;
		hitAtMs = System.currentTimeMillis();
	}

	public boolean engaged() {
		return spearHit && !secondHit;
	}

	public Entity target() {
		return rememberedTarget;
	}

	private void maybeRestore(ClientPlayerEntity player) {
		if (secondHit && returnBack.getValue() && previousSlot >= 0
				&& System.currentTimeMillis() - hitAtMs >= Math.round(returnDelay.getValue())) {
			player.getInventory().setSelectedSlot(previousSlot);
			previousSlot = -1;
			spearHit = false;
			secondHit = false;
		}
	}
}
