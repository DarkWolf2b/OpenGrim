package dev.opengrim.modules.movement;

import java.lang.reflect.Field;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket;
import net.minecraft.util.math.Vec3d;

/**
 * Super Firework (registry sixtwo.ep, module id 113):
 * "Increases speed after firework use".
 *
 * <p>1:1 port of sixtwo.ep from:
 * <ul>
 *   <li>analysis/decompiled/payload-named-cfr/sixtwo/ep.java:18-60</li>
 *   <li>analysis/decompiled/payload-decrypted/sixtwo/ep.java:10-49</li>
 *   <li>analysis/specs/casesafe/handlers/ep.md:1-130 (the plain
 *       handlers/ep.md file is the eP (Mace Aura) case-twin)</li>
 * </ul>
 *
 * <p>Single numeric setting declared in constructor sequence
 * (payload-decrypted/sixtwo/ep.java:20-32 — name int-array 20-31, builder 32):
 * Boost Value (step 0.01, min 1.5, max 3.0, default 1.5, suffix null,
 * ep.java:32).
 *
 * <p>Public getter atX() returning Boost Value ported as {@link #getBoostValue()}.
 * While gliding, a firework rocket use triggers a boost window scaling horizontal
 * velocity to the configured Boost Value threshold.
 *
 * <p>Trace 2026-10-17: neither atX() nor atY(IJ)I was entered in the whole session
 * (analysis/traces/2026-10-17/by-class-casesafe/ep.jsonl = class load only; the boot-time
 * constant-decrypt calls seen in the earlier capture did not recur here). Capture
 * conditions: (a) open the ClickGUI with the Movement tab showing ep — the setting widget
 * reads atX(); (b) glide with an elytra and use a firework rocket while ep is enabled to
 * arm the trigger path. The trigger event and boost math remain VM-resident
 * (spec "Unrecovered" #1-#3); the 40-tick window and use-key/rocket-hold arming below are
 * labeled reconstruction.
 */
public class SuperFirework extends Module {
	private static final int BOOST_TICKS = 40;

	private final DoubleSetting boostValue = register(new DoubleSetting(
			"boost_value", 0.01, 1.5, 3.0, 1.5, null));

	private int boostTicks;
	private volatile Field itemUseCooldownField;

	public SuperFirework() {
		super("super_firework", "Super Firework",
				"Increases speed after firework use", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onEnable() {
		boostTicks = 0;
	}

	@Override
	public void onDisable() {
		boostTicks = 0;
	}

	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (!(event.packet() instanceof PlayerInteractItemC2SPacket packet)) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || !player.isGliding()) {
			return;
		}
		ItemStack stack = player.getStackInHand(packet.getHand());
		if (stack.isOf(Items.FIREWORK_ROCKET)) {
			boostTicks = BOOST_TICKS;
		}
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}

		boolean gliding = player.isGliding();
		ItemStack mainHand = player.getMainHandStack();
		ItemStack offHand = player.getOffHandStack();
		boolean holdingRocket = mainHand.isOf(Items.FIREWORK_ROCKET) || offHand.isOf(Items.FIREWORK_ROCKET);

		if (gliding && client.options.useKey.isPressed() && holdingRocket && getItemUseCooldown(client) == 0) {
			boostTicks = BOOST_TICKS;
		}

		if (!gliding || boostTicks <= 0) {
			return;
		}

		boostTicks--;
		Vec3d velocity = player.getVelocity();
		double speed = Math.sqrt(velocity.x * velocity.x + velocity.z * velocity.z);
		double targetSpeed = boostValue.getValue().doubleValue();
		if (speed > 0.001 && speed < targetSpeed) {
			double factor = targetSpeed / speed;
			player.setVelocity(velocity.x * factor, velocity.y, velocity.z * factor);
		}
	}

	private int getItemUseCooldown(MinecraftClient client) {
		Field field = itemUseCooldownField;
		if (field == null) {
			try {
				field = MinecraftClient.class.getDeclaredField("itemUseCooldown");
				field.setAccessible(true);
				itemUseCooldownField = field;
			} catch (ReflectiveOperationException e) {
				return 0;
			}
		}
		try {
			return field.getInt(client);
		} catch (IllegalAccessException e) {
			return 0;
		}
	}

	public DoubleSetting getBoostValue() {
		return boostValue;
	}

	public int getBoostTicks() {
		return boostTicks;
	}
}