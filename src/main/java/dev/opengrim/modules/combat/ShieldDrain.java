package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.Rotation;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;

/**
 * Shield Drain (registry sixtwo.eT): "Spams attacks at enemy shield to break
 * it".
 *
 * <p>Port of sixtwo.eT (casesafe/payload-named-cfr/sixtwo/eT_.java:23-92
 * constructor; tick aDu(gH$th), predicates aDv/aDw(PlayerEntity); spec
 * analysis/specs/casesafe/handlers/eT_.md - the non-casesafe handlers/eT.md is
 * the sixtwo.et Anti Web twin). Settings in declaration order (eT_.java:44-91):
 * Min Fall Distance cC .Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(QSxPs) - step 0.1,
 * min 0.0, max 12.0, default 1.5, suffix " blocks" (high-probability guess:
 * QSxPs is native-decrypted/unrecovered; the sibling eS "Min Fall Distance" with
 * the identical chain is decrypted " blocks", eS_.md), Click Mode ct group with
 * cu "Vanilla" / cu "Blatant" (default "vanilla" = high-probability guess: no
 * .SY() marker in the shell, the default selection lives in the VM), Hit Per
 * Tick cC .VA(10.0).Vw(1.0).Vx(50.0).Vy(1.0) = default 10.0, min 1.0, max 50.0,
 * step 1.0, visible with Blatant (YtRvz.Vf(mRyFn::SZ), eT_.java:91).
 *
 * <p>high-probability guesses (VM bodies, casesafe/handlers/eT_.md "Blockers"):
 * the hardcoded 4.0 search radius (no range setting exists), the
 * player.fallDistance >= Min Fall Distance comparator (target-vs-attacker
 * unrecovered) and the vanilla/blatant iteration counts.
 *
 * <p>trace 2026-10-17: no eT method entered (class load only) - never enabled in
 * the traced session. Capture condition: enable Shield Drain next to a shielding
 * player and log the aDu attack loop + aDw predicate.
 */
public class ShieldDrain extends Module {
	private final DoubleSetting minFallDistance = register(new DoubleSetting("min_fall_distance", 0.1, 0.0, 12.0, 1.5, " blocks"));
	private final ModeSetting clickMode = register(new ModeSetting("click_mode",
			List.of("vanilla", "blatant"), "vanilla"));
	private final DoubleSetting hitPerTick = register(new DoubleSetting("hit_per_tick", 1.0, 1.0, 50.0, 10.0, null));

	public ShieldDrain() {
		super("shield_drain", "Shield Drain", "Spams attacks at enemy shield to break it",
				ModuleCategory.COMBAT);
	}

	public boolean engages(PlayerEntity other) {
		return other != null && other.isAlive() && other.isBlocking();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		hitPerTick.setVisible("blatant".equals(clickMode.getValue()));
		PlayerEntity target = findBlocker(client, player);
		if (target == null) {
			return;
		}
		if (player.fallDistance < minFallDistance.getValue()) {
			return;
		}
		RotationManager.get().submitRotation(
				Rotation.lookingAt(player.getEyePos(), target.getEyePos()).clamped(),
				RotationPriority.uWTdl, this);
		if ("vanilla".equals(clickMode.getValue())) {
			if (player.getAttackCooldownProgress(0.0f) >= 1.0f) {
				TriggerBot.attack(client, player, target);
			}
			return;
		}
		int hits = (int) Math.round(hitPerTick.getValue());
		for (int i = 0; i < hits; i++) {
			TriggerBot.attack(client, player, target);
		}
	}

	private static PlayerEntity findBlocker(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(4.0);
		return client.world.getOtherEntities(player, box,
				e -> e instanceof PlayerEntity p && p.isAlive() && p.isBlocking())
				.stream().map(e -> (PlayerEntity) e)
				.min(Comparator.comparingDouble(player::distanceTo)).orElse(null);
	}
}
