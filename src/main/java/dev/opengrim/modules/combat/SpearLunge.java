package dev.opengrim.modules.combat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.AttackRangeComponent;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.tag.ItemTags;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Spear Lunge (registry sixtwo.eG, module id 148): "Automatically lunges with
 * spear".
 *
 * <p>Port of sixtwo.eG (analysis/decompiled/payload-decrypted/sixtwo/eG.java:97-214
 * constructor; auto-lunge tick {@code awU(gM)}, input {@code awV(gA)},
 * pre-motion tick {@code awW(gH$th)}, workers {@code awX}/{@code awZ},
 * visibility {@code axk}, disable override {@code YO}; handler spec
 * analysis/specs/handlers/eG.md). Settings in declaration order (eG.java:101-206):
 * Activation Key {@code cD .VO(-999)} (unbound), Change Armor {@code cJ}
 * (no {@code .WE()} → cJ default false, cJ_.java:20), Restore Armor {@code cJ}
 * (visibility {@code DvcwW.Vf(this.erPcw::WF)}, eG.java:202 = Change Armor on),
 * Start Flying After Restore {@code cJ} (visibility supplier {@code this::axk},
 * eG.java:205 — condition unrecovered), Return Back {@code cJ .WE(true)},
 * Return Delay {@code cA .UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(SOwbe)}
 * (native suffix, kept " ms" per the eI/eH sibling convention; visibility
 * {@code xSSxj.Vf(this.lQVHc::WF)}, eG.java:206), {@code ol} controller
 * {@code cqIYc} (eG.java:201).
 *
 * <p>Recovered gate (eG.md "Runtime model", pool window): the held stack must be
 * in the {@code SPEARS} item tag ({@code field_63257}, eG.md:21); the effective
 * reach comes from the held stack's {@code AttackRangeComponent}
 * ({@code field_64680}/{@code method_58694}) with fallback
 * {@code AttackRangeComponent.defaultForEntity} ({@code method_76734}), and the
 * lunge fires while a candidate is within its {@code maxRange}
 * ({@code comp_5261}).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eG_.jsonl +
 * analysis/traces/2026-10-17/raw/trace.jsonl): the disable override {@code YO}
 * ran {@code awZ()} → {@code ol.cET()} (latched-slot restore, ol.java:14-15) —
 * mirrored by {@link #onDisable()}. {@code awU}/{@code awV}/{@code awW} never
 * fired (the tour performs no input; capture condition: hold a spear with a
 * target in reach, or press the Activation Key).
 *
 * <p>Reconstruction (native bodies; eG.md "Unrecovered"): manual trigger on the
 * Activation Key edge, lunge impulse along the look direction, optional flight
 * restart and slot restore after Return Delay.
 */
public class SpearLunge extends Module {
	private final IntSetting activationKey = register(new IntSetting("activation_key", -999, 348, -999));
	private final BoolSetting changeArmor = register(new BoolSetting("change_armor", false));
	private final BoolSetting restoreArmor = register(new BoolSetting("restore_armor", false));
	private final BoolSetting startFlyingAfterRestore = register(new BoolSetting("start_flying_after_restore", false));
	private final BoolSetting returnBack = register(new BoolSetting("return_back", true));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, " ms"));

	private boolean lunging;
	private long lungeAtMs;
	private int previousSlot = -1;

	public SpearLunge() {
		super("spear_lunge", "Spear Lunge", "Automatically lunges with spear", ModuleCategory.COMBAT);
	}

	/**
	 * Port of the {@code YO()} disable override (eG.java:223-224): trace pinned
	 * its body to {@code awZ() → ol.cET()} — restore the latched pre-lunge slot
	 * (ol owns the saved-slot/latch, ol.java:14-15).
	 */
	@Override
	public void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (previousSlot >= 0 && client.player != null) {
			client.player.getInventory().setSelectedSlot(previousSlot);
		}
		previousSlot = -1;
		lunging = false;
	}

	/**
	 * Port of {@code awU(gM)} / {@code awV(gA)} / {@code awW(gH$th)} merged onto
	 * the tick: trigger (Activation Key edge or attack key), spear/range gate,
	 * lunge, then the Return Delay restore.
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		// DvcwW.Vf(this.erPcw::WF) / xSSxj.Vf(this.lQVHc::WF) (eG.java:202-206).
		restoreArmor.setVisible(changeArmor.getValue());
		returnDelay.setVisible(returnBack.getValue());
		int key = activationKey.getValue();
		boolean manual = key != -999 && client.currentScreen == null
				&& net.minecraft.client.util.InputUtil.isKeyPressed(client.getWindow(), key);
		boolean holdingSpear = isSpear(player.getMainHandStack());
		if (lunging) {
			if (System.currentTimeMillis() - lungeAtMs >= Math.round(returnDelay.getValue())) {
				if (returnBack.getValue() && previousSlot >= 0) {
					player.getInventory().setSelectedSlot(previousSlot);
					previousSlot = -1;
				}
				if (restoreArmor.getValue() && startFlyingAfterRestore.getValue()) {
					player.getAbilities().allowFlying = true;
					player.getAbilities().flying = true;
				}
				lunging = false;
			}
			return;
		}
		if ((manual || client.options.attackKey.isPressed()) && holdingSpear && inRange(client, player)) {
			previousSlot = player.getInventory().getSelectedSlot();
			Vec3d look = player.getRotationVec(1.0f);
			Vec3d impulse = new Vec3d(look.x, 0.0, look.z).normalize().multiply(0.8);
			player.setVelocity(impulse.x, Math.max(player.getVelocity().y, 0.2), impulse.z);
			lunging = true;
			lungeAtMs = System.currentTimeMillis();
		}
	}

	/** Port of the SPEARS tag test ({@code field_63257}, eG.md:21). */
	private static boolean isSpear(ItemStack stack) {
		return !stack.isEmpty() && stack.isIn(ItemTags.SPEARS);
	}

	/**
	 * Port of the recovered range gate: a candidate must be within the held
	 * spear's effective max range ({@code comp_5261} of the ATTACK_RANGE
	 * component, fallback {@code AttackRangeComponent.defaultForEntity}).
	 */
	private static boolean inRange(MinecraftClient client, ClientPlayerEntity player) {
		if (client.world == null) {
			return false;
		}
		AttackRangeComponent component = player.getMainHandStack().get(DataComponentTypes.ATTACK_RANGE);
		double maxRange = component != null
				? component.getEffectiveMaxRange(player)
				: AttackRangeComponent.defaultForEntity(player).getEffectiveMaxRange(player);
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(maxRange);
		return !client.world.getOtherEntities(player, box,
				e -> e.isAlive() && e instanceof LivingEntity).isEmpty();
	}
}
