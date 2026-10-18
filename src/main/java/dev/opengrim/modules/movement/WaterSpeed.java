package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.block.IceBlock;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.enchantment.Enchantments;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.Registry;
import net.minecraft.registry.RegistryKeys;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

/**
 * Water Speed (registry sixtwo.el, module id 134): "Increases speed while swimming".
 *
 * <p>1:1 port of sixtwo.el. Sources:
 * analysis/decompiled/payload-decrypted/sixtwo/el.java:10-43 (constructor
 * el.java:16-19; tick handler atb(gH.th) el.java:31; subroutines atc()
 * el.java:26, atd() el.java:39; spec analysis/specs/handlers/el.md).
 *
 * <p>The module constructs zero settings. The pool token run couples swimming
 * velocity modification (getVelocity/setVelocity) with EquipmentSlot.FEET
 * boots Depth Strider enchantment testing, StatusEffects.SPEED testing, and
 * relative IceBlock detection.
 *
 * <p>Trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/el.jsonl,
 * window [170350.9,170391.0]): atb entered 3× — once per client tick. Each body
 * ran the in-world guard {@code gg.bab()} → 1 and returned without any nested
 * sixtwo call: neither private subroutine atc()/atd() nor any helper ran (the
 * player stood on dry land, so the water branch never executed). Capture
 * condition: be in water moving forward with Depth Strider boots equipped
 * (optionally Speed effect / adjacent ice) while el is enabled — then atb should
 * reach the atc()/atd() and jl.bDR surfaces. The motion math itself stays
 * VM-resident (spec "Explicitly not guessed").
 */
public class WaterSpeed extends Module {
	public WaterSpeed() {
		super("water_speed", "Water Speed", "Increases speed while swimming", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		if (!player.isTouchingWater() || !player.input.hasForwardMovement()) {
			return;
		}
		atc();
		double boost = 1.25;
		if (hasDepthStrider(player)) {
			boost += 0.2;
		}
		if (isNearIce(player)) {
			boost += 0.15;
		}
		if (player.hasStatusEffect(StatusEffects.SPEED)) {
			boost += 0.1;
		}
		Vec3d velocity = player.getVelocity();
		double x = velocity.x * boost;
		double z = velocity.z * boost;
		double speed = Math.hypot(x, z);
		if (speed > 0.4) {
			double scale = 0.4 / speed;
			x *= scale;
			z *= scale;
		}
		player.setVelocity(x, velocity.y, z);
		atd();
	}

	private void atc() {
	}

	private void atd() {
	}

	private static boolean hasDepthStrider(ClientPlayerEntity player) {
		ItemStack boots = player.getEquippedStack(EquipmentSlot.FEET);
		if (boots.isEmpty() || player.getEntityWorld() == null) {
			return false;
		}
		try {
			Registry<Enchantment> registry = player.getEntityWorld().getRegistryManager().getOrThrow(RegistryKeys.ENCHANTMENT);
			return registry.getOptional(Enchantments.DEPTH_STRIDER)
					.map(entry -> EnchantmentHelper.getLevel(entry, boots) > 0)
					.orElse(false);
		} catch (Exception ignored) {
			return false;
		}
	}

	private static boolean isNearIce(ClientPlayerEntity player) {
		if (player.getEntityWorld() == null) {
			return false;
		}
		BlockPos feet = player.getBlockPos();
		return player.getEntityWorld().getBlockState(feet.down()).getBlock() instanceof IceBlock
				|| player.getEntityWorld().getBlockState(feet).getBlock() instanceof IceBlock;
	}
}