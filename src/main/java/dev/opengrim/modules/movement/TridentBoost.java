package dev.opengrim.modules.movement;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.UseItemEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.entity.MovementType;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.sound.SoundCategory;
import net.minecraft.sound.SoundEvent;
import net.minecraft.sound.SoundEvents;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Trident Boost (registry sixtwo.eu, module id 40): "Allows to use trident outside water or rain".
 * Category {@code gh.xgeEn} (eu.java:21).
 *
 * <p>1:1 port of sixtwo.eu. Sources:
 * analysis/decompiled/casesafe/payload-decrypted/sixtwo/eu.java:10-92
 * (constructor eu.java:19-67 with settings Boost Cooldown eu.java:37 and Allow
 * Outside Water Or Rain eu.java:66; listener auJ(gD) eu.java:79; getters auK()
 * eu.java:87, auL() eu.java:91; behavior spec
 * analysis/specs/casesafe/handlers/eu.md — note the non-casesafe
 * analysis/specs/handlers/eu.md holds the case-twin eU "Air Anchor"). Native
 * corpus analysis/ghidra/handlers-full-annotated/sixtwo_eu.c (verified
 * {@code Lsixtwo/eu;}).
 *
 * <p>Replicates the vanilla client-side riptide launch when using a riptide
 * trident outside water or rain. Recovered token cluster (casesafe/eu.md):
 * spin-strength gate {@code EnchantmentHelper.getTridentSpinAttackStrength},
 * wet check {@code isTouchingWaterOrRain}, boost math
 * {@code MathHelper.sin/cos/sqrt} over the player rotation, application via
 * {@code addVelocity} + {@code useRiptide} + {@code move(MovementType.SELF,
 * ...)}, feedback {@code World.playSoundFromEntity} with RIPTIDE_1/2/3 selected
 * by strength. The arithmetic is the vanilla launch body, verified byte-exact
 * in the yarn 1.21.11+build.6 named jar ({@code TridentItem.onStoppedUsing}):
 * direction vector {@code (-sin(yaw)cos(pitch), -sin(pitch),
 * cos(yaw)cos(pitch))}, normalized and scaled by {@code spinStrength} (the
 * enchantment value — 1.5/2.25/3.0 — NOT a derived 3*(1+strength) factor),
 * {@code useRiptide(20, 8.0F, stack)}, and an on-ground {@code move(SELF,
 * (0, 1.1999999, 0))} hop. The RIPTIDE_1/2/3 switch on {@code (int)
 * spinStrength} reproduces vanilla's level-indexed sound choice
 * ({@code EnchantmentHelper.getEffect(stack, TRIDENT_EFFECT...)} index
 * {@code min(level,3)-1} in the named jar) for Riptide I/II/III.
 *
 * <p>trace 2026-10-17: auJ did not trigger in its 4s window (no dry riptide
 * use; the client tick did fire for other modules). Capture condition: hold
 * right-click with a Riptide trident while dry (not in water/rain) with
 * "Allow Outside Water Or Rain" checked. The trigger is wired to
 * {@link UseItemEvent} (Fabric {@code UseItemCallback} on
 * {@code MultiPlayerGameMode.interactItem}) — the bus analog of the native
 * {@code gD} item-use event (empty cancelable shell, eu.java:79; the original
 * fires it before the vanilla use, so this port boosts on the use attempt
 * rather than on the vanilla charge state — vanilla's {@code TridentItem.use}
 * returns FAIL for a dry spin-attack trident, so the previous {@code
 * isUsingItem} poll could never fire outside water/rain).
 *
 * <p>high-probability guess: the {@code SDRyJ} checkbox is read as the
 * enable-condition for the dry case (wet → inert, vanilla boosts); its exact
 * role (widen conditions vs gate cooldown) is VM-hidden. The Boost Cooldown
 * suffix {@code yJtAG} is undecrypted; the unit is read as seconds (eu.md
 * "seconds assumed, not confirmed") and applied as a wall-clock ms gate.
 */
public class TridentBoost extends Module {
	private final DoubleSetting boostCooldown = register(new DoubleSetting("boost_cooldown", 1.0, 0.0, 20.0, 10.0, " s"));
	private final BoolSetting allowOutsideWaterOrRain = register(new BoolSetting("allow_outside_water_or_rain", false));

	private long lastBoostTime;

	public TridentBoost() {
		super("trident_boost", "Trident Boost", "Allows to use trident outside water or rain", ModuleCategory.MOVEMENT);
	}

	/**
	 * Getter for Boost Cooldown slider, porting {@code auK()} from sixtwo.eu.
	 */
	public DoubleSetting auK() {
		return boostCooldown;
	}

	/**
	 * Getter for Allow Outside Water Or Rain toggle, porting {@code auL()} from sixtwo.eu.
	 */
	public BoolSetting auL() {
		return allowOutsideWaterOrRain;
	}

	@Override
	public void onEnable() {
		lastBoostTime = 0L;
	}

	/**
	 * Port of the {@code auJ(gD)} handler: on a dry spin-attack trident use
	 * attempt, apply the vanilla riptide launch locally.
	 */
	@Subscribe
	public void onUseItem(UseItemEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || event.player() != player) {
			return;
		}
		ItemStack stack = player.getStackInHand(event.hand());
		if (!stack.isOf(Items.TRIDENT)) {
			return;
		}
		float spinStrength = EnchantmentHelper.getTridentSpinAttackStrength(stack, player);
		if (spinStrength <= 0.0f) {
			return;
		}
		// When wet the vanilla client boosts by itself and the module stays inert;
		// when dry the boost fires only with "Allow Outside Water Or Rain" checked
		// (eu.md — inferred nuance, high-probability guess on the exact wiring).
		if (player.isTouchingWaterOrRain()) {
			return;
		}
		if (!allowOutsideWaterOrRain.getValue()) {
			return;
		}
		if (System.currentTimeMillis() - lastBoostTime < boostCooldown.getValue() * 1000.0) {
			return;
		}
		applyBoost(client, player, stack, spinStrength);
	}

	private void applyBoost(MinecraftClient client, ClientPlayerEntity player, ItemStack stack, float spinStrength) {
		// Vanilla TridentItem.onStoppedUsing launch body (yarn 1.21.11+build.6,
		// verified via javap of the named jar): rotate-normalized direction
		// scaled by the spin-attack strength.
		float yaw = player.getYaw();
		float pitch = player.getPitch();
		float f = -MathHelper.sin(yaw * 0.017453292F) * MathHelper.cos(pitch * 0.017453292F);
		float g = -MathHelper.sin(pitch * 0.017453292F);
		float h = MathHelper.cos(yaw * 0.017453292F) * MathHelper.cos(pitch * 0.017453292F);
		float m = MathHelper.sqrt(f * f + g * g + h * h);
		float scale = spinStrength / m;
		f *= scale;
		g *= scale;
		h *= scale;

		player.addVelocity(f, g, h);
		// Vanilla passes the fixed 8.0F attack damage, not the spin strength.
		player.useRiptide(20, 8.0F, stack);
		if (player.isOnGround()) {
			// Vanilla ground hop: (0, 1.1999999284744263, 0) in MovementType.SELF.
			player.move(MovementType.SELF, new Vec3d(0.0, 1.1999999284744263, 0.0));
		}

		// Riptide I/II/III (spin strength 1.5/2.25/3.0) → sound 1/2/3; the
		// original hard-codes the three RIPTIDE constants (eu.md token run:
		// field_14606/14806/14717) with the selection formula VM-hidden — this
		// switch reproduces vanilla's level-indexed choice (high-probability
		// guess on the original's own selection).
		RegistryEntry<SoundEvent> sound = switch ((int) spinStrength) {
			case 1 -> SoundEvents.ITEM_TRIDENT_RIPTIDE_1;
			case 2 -> SoundEvents.ITEM_TRIDENT_RIPTIDE_2;
			default -> SoundEvents.ITEM_TRIDENT_RIPTIDE_3;
		};
		client.world.playSoundFromEntity(null, player, sound.value(), SoundCategory.PLAYERS, 1.0F, 1.0F);

		// Boost Cooldown unit unrecovered (suffix yJtAG undecrypted): read as
		// seconds here — recorded high-probability guess, not evidence (eu.md).
		lastBoostTime = System.currentTimeMillis();
	}
}
