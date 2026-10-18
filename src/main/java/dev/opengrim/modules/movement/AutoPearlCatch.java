package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import dev.opengrim.rotation.RotationPriority;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.IntSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.InputUtil;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.Hand;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

/**
 * Auto Pearl Catch (registry sixtwo.eO, module id 118): "Catches pearl with wind charge in the air".
 *
 * <p>Port of sixtwo.eO (payload-decrypted/sixtwo/eO.java). Category
 * {@code gh.xwjCw} = Combat (eO.java:26) — file stays under movement/ for
 * registration stability. Spec: analysis/specs/casesafe/handlers/eO_.md.
 * Constructor eO.java:24-92: Activation Key {@code cD .VO(-999)} (eO.java:27-44,
 * key-code int, -999 = unbound), Wind Charge Delay {@code cC Vy(10).Vw(150).
 * Vx(500).VA(250)} (eO.java:45-61), Return Slot {@code .WE(true)} (eO.java:62-74),
 * Return Delay {@code cA UG(10).UE(0).UF(1000).UI(50,100) .Vf(GzaZR::WF)} (eO.java:75-91,
 * visible while Return Slot is on — {@code cB.Vf(Supplier<Boolean>)} is the
 * recovered visibility-supplier contract, casesafe/payload-cfr/sixtwo/cB_.java:26,
 * 345, and {@code cJ.WF()} is the Return Slot getter, cJ_.java:55), scheduler
 * {@code ol} + timer {@code mT} (eO.java:89-90) plus the recovered cA pair
 * semantics (value = uniform draw in [50, 100) ms; see below). Listeners:
 * aBt(gA) mouse/activation eO.java:107-108,
 * aBu(gv) pre-rotation eO.java:110-111, aBv(gH$th) tick eO.java:113-114, YO()
 * disable eO.java:118-119. When the activation key is held and the local
 * player's pearl is mid-air, a wind charge is thrown at the predicted catch
 * point (aimed through the rotation manager), then the hotbar returns after
 * Return Delay when Return Slot is on.
 *
 * <p>high-probability guess: Activation Key gating — unbound (-999) means the
 * module never auto-triggers; it throws only while the bound key is pressed
 * ({@code mT}-timer semantics per eO_.md "ol scheduler + mT timer gate the
 * wind-charge throw to Wind Charge Delay"). The mace phase of the technique
 * ({@code Items.MACE} token) is virtualized and not replicated.
 *
 * <p><b>Recovered cA semantics (2026-10-18 re-verify):</b> Return Delay is a
 * {@code cA} range slider — state {@code MutablePair<Double,Double> wJgtl}
 * (casesafe/payload-named-cfr/sixtwo/cA_.java:37); value accessor {@code UN()} =
 * {@code mU.cpR(this)} (cA_.java:557-559) = {@code mU.cpP(left, right)}
 * (sixtwo_77.java:215-219) = {@code pcazh.nextDouble() * (d3 - d2) + d2}
 * (sixtwo_77.java:125-127) — a fresh uniform draw in {@code [left, right)} per
 * read (consumers mm.java:57-58, fJ_.java:73, ff.java:370). {@code UI(50.0, 100.0)}
 * therefore means "return delay uniform in [50, 100) ms"; ported with the repo
 * convention (ClickAction/TargetMargin): slider = left handle, the recovered
 * second UI value = fixed anchor, sampled once per throw.
 *
 * <p>trace 2026-10-17: aBu (pre-rotation) ran 1× and aBv (tick) 1×; YO 1× on
 * disable. Both aBu and aBv synchronously read {@code eP.aBU()} — the
 * Mace-suite shared config array {@code LuzRg} also read by eM.aAZ (3×) and
 * eN.aBb (2×) in the same session — confirming the mace-suite integration of
 * the technique (the array returned null in the traced run). aBt (mouse
 * activation) did not trigger. Capture conditions: aBt — move the mouse/click
 * with the Activation Key bound while a pearl is in flight; mace phase — hold
 * a mace with a pearl in flight and capture the aBu/aBv body's item reads and
 * packet sends.
 */
public class AutoPearlCatch extends Module {
	private final IntSetting activationKey = register(new IntSetting("activation_key", -999, 348, -999));
	private final DoubleSetting windChargeDelay = register(new DoubleSetting("wind_charge_delay", 10.0, 150.0, 500.0, 250.0, null));
	private final BoolSetting returnSlot = register(new BoolSetting("return_slot", true));
	private final DoubleSetting returnDelay = register(new DoubleSetting("return_delay", 10.0, 0.0, 1000.0, 50.0, null));

	private long lastThrowMs;
	private long returnDelayMs;
	private int throwSlot = -1;
	private boolean armed;

	public AutoPearlCatch() {
		super("auto_pearl_catch", "Auto Pearl Catch", "Catches pearl with wind charge in the air",
				ModuleCategory.COMBAT);
	}

	/** Second element of the recovered {@code UI(50.0, 100.0)} default pair (eO.java:75-91). */
	private static final double RETURN_DELAY_ANCHOR = 100.0;

	/**
	 * Samples Return Delay in ms from {@code [returnDelay, RETURN_DELAY_ANCHOR]}
	 * (recovered cA range pair {@code UI(50.0, 100.0)} / {@code cA.UN()} =
	 * {@code mU.cpP}, uniform in the pair range — casesafe/payload-named-cfr/
	 * sixtwo/cA_.java:557-559, sixtwo_77.java:125-127/215-219).
	 */
	private long sampleReturnDelayMs() {
		double left = returnDelay.getValue();
		double right = Math.max(left, RETURN_DELAY_ANCHOR);
		if (right <= left) {
			return Math.round(left);
		}
		return Math.round(java.util.concurrent.ThreadLocalRandom.current().nextDouble(left, right));
	}

	@Override
	protected void onEnable() {
		armed = false;
		throwSlot = -1;
		lastThrowMs = 0;
		returnDelayMs = sampleReturnDelayMs();
	}

	@Override
	protected void onDisable() {
		armed = false;
		throwSlot = -1;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		returnDelay.setVisible(returnSlot.getValue());
		int key = activationKey.getValue();
		armed = key != -999 && InputUtil.isKeyPressed(client.getWindow(), key);
		if (!armed) {
			return;
		}
		if (throwSlot >= 0) {
			if (System.currentTimeMillis() - lastThrowMs >= returnDelayMs) {
				returnToSlot(player);
			}
			return;
		}
		if (System.currentTimeMillis() - lastThrowMs < windChargeDelay.getValue().longValue()) {
			return;
		}
		EnderPearlEntity pearl = nearestOwnPearl(client, player);
		if (pearl == null) {
			return;
		}
		int chargeSlot = hotbarSlotOf(player, Items.WIND_CHARGE);
		if (chargeSlot < 0) {
			return;
		}
		RotationManager.get().submitPosition(pearl.getEntityPos(), RotationPriority.uWTdl, this);
		throwSlot = player.getInventory().getSelectedSlot();
		player.getInventory().setSelectedSlot(chargeSlot);
		client.interactionManager.interactItem(player, Hand.MAIN_HAND);
		player.swingHand(Hand.MAIN_HAND);
		lastThrowMs = System.currentTimeMillis();
		returnDelayMs = sampleReturnDelayMs();
	}

	private EnderPearlEntity nearestOwnPearl(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos().subtract(64, 64, 64), player.getEntityPos().add(64, 64, 64));
		EnderPearlEntity best = null;
		double bestDist = Double.MAX_VALUE;
		for (EnderPearlEntity pearl : client.world.getEntitiesByClass(EnderPearlEntity.class, box, e -> e.isAlive())) {
			if (pearl.getOwner() != null && !pearl.getOwner().equals(player)) {
				continue;
			}
			double d = player.distanceTo(pearl);
			if (d < bestDist) {
				bestDist = d;
				best = pearl;
			}
		}
		return best;
	}

	private int hotbarSlotOf(ClientPlayerEntity player, net.minecraft.item.Item item) {
		for (int slot = 0; slot < 9; slot++) {
			ItemStack stack = player.getInventory().getStack(slot);
			if (stack.isOf(item)) {
				return slot;
			}
		}
		return -1;
	}

	private void returnToSlot(ClientPlayerEntity player) {
		if (returnSlot.getValue() && throwSlot >= 0) {
			player.getInventory().setSelectedSlot(throwSlot);
		}
		throwSlot = -1;
		armed = false;
	}
}
