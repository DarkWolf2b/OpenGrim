package dev.opengrim.modules.movement;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

/**
 * Elytra Target (registry sixtwo.dA, module id 59, bind 82): "Automatically uses firework for target".
 *
 * <p>parity: partial — settings and wiring 1:1, behavior bodies VM-native.
 * Spec: analysis/specs/handlers/dA.md. Evidence: dA.java:36-187 ctor with Follow
 * Distance dA.java:55, Firework Use Mode dA.java:74, None dA.java:75-85, On Bind
 * dA.java:87-95, Auto dA.java:96-107 (default), Firework Cooldown dA.java:126,
 * Firework Key dA.java:140 (visible iff On Bind, dA.java:185), Elytra Bounce
 * dA.java:155, Overshoot dA.java:166, Overshoot Value dA.java:183; state flag
 * {@code NevtZ} dA.java:23 + {@code akfwU = mT.cpz()} timer dA.java:184;
 * listeners ajT(gH$th) dA.java:223-224, ajU(gA) dA.java:228-229, ajV(LivingEntity)
 * dA.java:221, akh() dA.java:203, YO() dA.java:239-240. Trace 2026-10-17
 * (by-class-casesafe/dA_.jsonl): class load + one YO() call only — no [N] body
 * observable at runtime (capture conditions unmet).
 *
 * <p>Recovered contract: while enabled and gliding with a target, evaluate an
 * eye-position raycast (getEyePos + RaycastContext + FluidHandling.NONE cluster,
 * handlers/dA.md "Evidence base" 4) for target visibility, and use a firework when
 * the mode/cooldown allows (Auto on the mT-timer cooldown, On Bind on the Firework
 * Key). The aim/overshoot/follow-distance math is VM bytecode — unrecovered.
 *
 * <p>High-probability guesses (labeled; handlers/dA.md "Unrecovered" 1-2,6-7):
 * the visibility raycast as a block line-of-sight gate (COLLIDER/NONE convention),
 * the target acquisition (crosshair entity, else nearest living within 64 blocks),
 * the cooldown as {@code player.age} ticks, the firework hotbar-slot use, and the
 * Follow Distance band interpretation (fire when farther than Follow Distance, or
 * always when Elytra Bounce).
 */
public class ElytraTarget extends Module {
	private final DoubleSetting followDistance = register(new DoubleSetting("follow_distance", 1.0, 0.0, 100.0, 10.0, " blocks"));
	private final ModeSetting fireworkUseMode = register(new ModeSetting("firework_use_mode",
			List.of("none", "on_bind", "auto"), "auto"));
	private final DoubleSetting fireworkCooldown = register(new DoubleSetting("firework_cooldown", 1.0, 0.0, 60.0, 2.0, " ticks"));
	private final KeybindSetting fireworkKey = register(new KeybindSetting("firework_key", -999));
	private final BoolSetting elytraBounce = register(new BoolSetting("elytra_bounce", false));
	private final BoolSetting overshoot = register(new BoolSetting("overshoot", false));
	private final DoubleSetting overshootValue = register(new DoubleSetting("overshoot_value", 0.01, 0.0, 5.0, 3.0, " ticks"));

	private long lastUseTick;
	private boolean fireworkPending;

	public ElytraTarget() {
		super("elytra_target", "Elytra Target", "Automatically uses firework for target", ModuleCategory.PLAYER);
		setBind(82); // registry metadata.txt:88 sixtwo.dA key=59 bind=82
	}

	public boolean isTarget(LivingEntity entity) {
		if (entity == null || !entity.isAlive()) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			return false;
		}
		return client.player.distanceTo(entity) <= followDistance.getValue() + 64.0;
	}

	public boolean isActive() {
		return fireworkPending;
	}

	@Override
	public void onTick() {
		fireworkKey.setVisible("on_bind".equals(fireworkUseMode.getValue()));
		fireworkCooldown.setVisible("auto".equals(fireworkUseMode.getValue()));
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (client.world == null || player == null) {
			return;
		}
		if (!player.isGliding()) {
			fireworkPending = false;
			return;
		}
		if ("none".equals(fireworkUseMode.getValue())) {
			return;
		}
		LivingEntity target = findTarget(client, player);
		if (target == null || !isTarget(target)) {
			return;
		}
		Vec3d aim = target.getEntityPos().add(0.0, target.getHeight() * 0.5, 0.0);
		if (!hasLineOfSight(client, player, aim)) {
			return;
		}
		if (overshoot.getValue()) {
			Vec3d dir = aim.subtract(player.getEyePos()).normalize();
			aim = aim.add(dir.multiply(overshootValue.getValue()));
		}
		RotationManager.get().submitPosition(aim, RotationPriority.uWTdl, this);
		if ("on_bind".equals(fireworkUseMode.getValue())) {
			int key = fireworkKey.getValue();
			if (key == -999 || !net.minecraft.client.util.InputUtil.isKeyPressed(client.getWindow(), key)) {
				return;
			}
		} else {
			long cooldownTicks = fireworkCooldown.getValue().longValue();
			if (player.age - lastUseTick < cooldownTicks) {
				return;
			}
			if (player.distanceTo(target) <= followDistance.getValue() && !elytraBounce.getValue()) {
				return;
			}
		}
		if (useFirework(client, player)) {
			lastUseTick = player.age;
			fireworkPending = true;
		}
	}

	/**
	 * High-probability guess: the handler spec's dA-attributable eye-raycast cluster
	 * (getEyePos + RaycastContext + FluidHandling.NONE, handlers/dA.md "Evidence
	 * base" 4) read as a block line-of-sight gate to the aim point. ShapeType and
	 * exact hit handling unrecovered (field_17558 identity unknown).
	 */
	private static boolean hasLineOfSight(MinecraftClient client, ClientPlayerEntity player, Vec3d point) {
		BlockHitResult hit = client.world.raycast(new RaycastContext(player.getEyePos(), point,
				RaycastContext.ShapeType.COLLIDER, RaycastContext.FluidHandling.NONE, player));
		return hit.getType() == HitResult.Type.MISS;
	}

	private LivingEntity findTarget(MinecraftClient client, ClientPlayerEntity player) {
		if (client.targetedEntity instanceof LivingEntity living && living.isAlive()) {
			return living;
		}
		Box search = new Box(player.getEntityPos().subtract(64, 64, 64), player.getEntityPos().add(64, 64, 64));
		return client.world.getOtherEntities(player, search, e -> e instanceof LivingEntity l && l.isAlive()).stream()
				.map(e -> (LivingEntity) e)
				.min(Comparator.comparingDouble(player::distanceTo))
				.orElse(null);
	}

	private static boolean useFirework(MinecraftClient client, ClientPlayerEntity player) {
		int rocketSlot = -1;
		for (int slot = 0; slot <= 8; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isOf(Items.FIREWORK_ROCKET)) {
				rocketSlot = slot;
				break;
			}
		}
		if (rocketSlot < 0 || client.interactionManager == null) {
			return false;
		}
		int previousSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(rocketSlot);
		client.interactionManager.interactItem(player, Hand.MAIN_HAND);
		player.swingHand(Hand.MAIN_HAND);
		player.getInventory().setSelectedSlot(previousSlot);
		return true;
	}
}
