package dev.opengrim.modules.utility;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.projectile.FishingBobberEntity;
import net.minecraft.item.FishingRodItem;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;

/**
 * Auto Fish (registry sixtwo.dU, module id 66): "Automatically fishes for you".
 *
 * <p>Port of sixtwo.dU (analysis/decompiled/casesafe/payload-decrypted/sixtwo/dU_.java:38-155
 * constructor; events {@code apL(gH$th)} tick / {@code apK(gI)} packet /
 * {@code apM(gz)} key; {@code apR} rod validity; handler spec
 * analysis/specs/casesafe/handlers/dU_.md). Settings in declaration order
 * (dU_.java:52-154, all literals resolved by the decrypted source):
 * Anti Break {@code cJ .WE(false)}, Auto Cast {@code cJ .WE(false)}, Recast
 * Delay {@code cC .Vy(1.0).Vw(0.0).Vx(100.0).VA(15.0).Vz(" ticks")}, Catch
 * Delay and Throw Delay {@code cC .Vy(1.0).Vw(0.0).Vx(60.0).VA(5.0)
 * .Vz(" ticks")}, Splash Detection Range {@code cJ .WE(false)}, Splash
 * Detection {@code cC .Vy(0.1).Vw(0.0).Vx(10.0).VA(5.0).Vz(" blocks")} (name
 * has a trailing space in the original), In Gui {@code cJ .WE(false)}. The
 * handler spec's bsm-suffix uncertainty (windows 27377/3670/30680) is resolved
 * by the decrypted ctor: all three delays read {@code " ticks"}.
 *
 * <p>Recovered pipeline (dU_.md "Runtime model"): cast with Throw Delay, watch
 * the bobber's motion for a splash (two getXYZ reads + the {@code cso}
 * six-double distance helper), reel with Catch Delay, re-cast with Recast
 * Delay; Anti Break gates the rod's damage/max-damage pair, In Gui allows
 * operation with a screen open. The splash predicate math and reel/recast
 * scheduling are native (dU_.md "Unrecovered").
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/dU_.jsonl):
 * the window captured only {@code aaj} (enable) — {@code apL}/{@code apK}/
 * {@code apM} never fired (tick stall; capture condition: fish with the module
 * enabled).
 *
 * <p>[U] gap: the {@code apK(gI)} packet-side bobber-id tracking
 * ({@code nzBUx}/{@code gipBo}) is not ported — the live bobber is read from
 * {@code player.fishHook}, which covers the same state; the native id
 * bookkeeping is unrecovered. The original's other native state fields
 * ({@code dneZD}/{@code kzZLu} booleans, {@code DiDCD}/{@code TcAon} ints) have
 * unrecovered roles; the port carries the {@code phase}/{@code deadline} pair
 * instead of dead stand-ins.
 */
public class AutoFish extends Module {
	private final BoolSetting antiBreak = register(new BoolSetting("anti_break", false));
	private final BoolSetting autoCast = register(new BoolSetting("auto_cast", false));
	private final DoubleSetting recastDelay = register(new DoubleSetting("recast_delay", 1.0, 0.0, 100.0, 15.0, " ticks"));
	private final DoubleSetting catchDelay = register(new DoubleSetting("catch_delay", 1.0, 0.0, 60.0, 5.0, " ticks"));
	private final DoubleSetting throwDelay = register(new DoubleSetting("throw_delay", 1.0, 0.0, 60.0, 5.0, " ticks"));
	private final BoolSetting splashDetectionRange = register(new BoolSetting("splash_detection_range", false));
	private final DoubleSetting splashDetection = register(new DoubleSetting("splash_detection", 0.1, 0.0, 10.0, 5.0, " blocks"));
	private final BoolSetting inGui = register(new BoolSetting("in_gui", false));

	private int phase;
	private int deadline;
	private double prevBobberY;

	public AutoFish() {
		super("auto_fish", "Auto Fish", "Automatically fishes for you", ModuleCategory.PLAYER);
	}

	@Override
	protected void onEnable() {
		phase = 0;
		deadline = 0;
		prevBobberY = 0.0;
	}

	@Override
	protected void onDisable() {
		phase = 0;
		deadline = 0;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.interactionManager == null) {
			return;
		}
		if (client.currentScreen != null && !inGui.getValue()) {
			return;
		}
		Hand hand = handWithRod(player);
		if (hand == null) {
			return;
		}
		if (!rodUsable(player.getStackInHand(hand))) {
			return;
		}
		FishingBobberEntity bobber = player.fishHook;
		if (bobber != null) {
			if (phase == 0) {
				if (bitten(client, player, bobber)) {
					phase = 1;
					deadline = (int) Math.round(catchDelay.getValue());
				}
				prevBobberY = bobber.getY();
				return;
			}
			if (--deadline > 0) {
				return;
			}
			if (phase == 1) {
				client.interactionManager.interactItem(player, hand);
				phase = autoCast.getValue() ? 2 : 0;
				deadline = (int) Math.round(recastDelay.getValue());
			} else if (phase == 2) {
				client.interactionManager.interactItem(player, hand);
				phase = 0;
				deadline = 0;
				prevBobberY = player.fishHook == null ? 0.0 : player.fishHook.getY();
			}
			return;
		}
		if (phase == 2 || (autoCast.getValue() && phase == 0)) {
			if (deadline > 0 && --deadline > 0) {
				return;
			}
			client.interactionManager.interactItem(player, hand);
			phase = 0;
			deadline = (int) Math.round(throwDelay.getValue());
		}
	}

	private static Hand handWithRod(ClientPlayerEntity player) {
		if (player.getMainHandStack().getItem() instanceof FishingRodItem) {
			return Hand.MAIN_HAND;
		}
		if (player.getOffHandStack().getItem() instanceof FishingRodItem) {
			return Hand.OFF_HAND;
		}
		return null;
	}

	private boolean rodUsable(ItemStack rod) {
		if (!antiBreak.getValue()) {
			return true;
		}
		if (rod.getMaxDamage() <= 0) {
			return true;
		}
		return rod.getMaxDamage() - rod.getDamage() > 2;
	}

	private boolean bitten(MinecraftClient client, ClientPlayerEntity player, FishingBobberEntity bobber) {
		if (splashDetectionRange.getValue() && player.distanceTo(bobber) > splashDetection.getValue()) {
			return false;
		}
		return prevBobberY - bobber.getY() > 0.1 && bobber.getVelocity().y <= 0.0;
	}
}
