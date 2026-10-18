package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;

/**
 * W-Tap (registry sixtwo.fG, module id 13): "Automatically performs W-Tap".
 *
 * <p>Port of sixtwo.fG (analysis/decompiled/payload-decrypted/sixtwo/fG.java:53-122
 * constructor; attack {@code aTf(hw$tv)} fG.java:148-149, input {@code aTg(gA)}
 * fG.java:151-152, bridge {@code aTh(Z,eD)} fG.java:154, phase runnables
 * {@code aTi..aTm} fG.java:138-146; enable hook {@code aaj} fG.java:129-130;
 * handler spec analysis/specs/casesafe/handlers/fG_.md). Settings in declaration
 * order (fG.java:56-116): Mode {@code ct} with WTap / STap / SneakTap
 * (radio default index 0 = WTap), Only On Ground {@code cJ .WE(false)},
 * Tap Start {@code cA .UG(5.0).UE(0.0).UF(1000.0).UI(120.0, 120.0).UH(" ms")},
 * Tap Stop {@code cA .UG(5.0).UE(1.0).UF(1000.0).UI(450.0, 450.0).UH(" ms")},
 * Tap Delay {@code cC .Vy(10.0).Vw(0.0).Vx(2500.0).VA(0.0).Vz(" ms")} (the
 * module-md list omitted Tap Delay — 8 settings exist, not 7).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fG_.jsonl):
 * the window captured only {@code aaj} (enable) — {@code aTf}/{@code aTg} never
 * fired (the tour performs no attacks/input). Capture condition: attack an
 * entity (aTf) / press movement keys (aTg).
 *
 * <p>Reconstruction (native bodies; fG_.md "Unrecovered" 1-2 — "never guess the
 * timing formula"): the attack event arms the tap, the forward key is released
 * at Tap Start, and the key states are restored after Tap Stop + Tap Delay;
 * STap presses back and SneakTap presses sneak for the window instead. Key
 * identities per mode are inference from the names (fG_.md item 2).
 */
public class WTap extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("wtap", "stap", "sneaktap"), "wtap"));
	private final BoolSetting onlyOnGround = register(new BoolSetting("only_on_ground", false));
	private final DoubleSetting tapStart = register(new DoubleSetting("tap_start", 5.0, 0.0, 1000.0, 120.0, " ms"));
	private final DoubleSetting tapStop = register(new DoubleSetting("tap_stop", 5.0, 1.0, 1000.0, 450.0, " ms"));
	private final DoubleSetting tapDelay = register(new DoubleSetting("tap_delay", 10.0, 0.0, 2500.0, 0.0, " ms"));

	private long attackMs = -1L;
	private boolean released;
	private boolean forwardWasPressed;
	private boolean sneakWasPressed;
	private boolean backWasPressed;

	public WTap() {
		super("w_tap", "W-Tap", "Automatically performs W-Tap", ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		attackMs = -1L;
		released = false;
	}

	@Override
	public void onDisable() {
		restore(MinecraftClient.getInstance());
		attackMs = -1L;
	}

	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		if (onlyOnGround.getValue() && !player.isOnGround()) {
			return;
		}
		attackMs = System.currentTimeMillis();
		released = false;
		forwardWasPressed = client.options.forwardKey.isPressed();
		sneakWasPressed = client.options.sneakKey.isPressed();
		backWasPressed = client.options.backKey.isPressed();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || attackMs < 0L) {
			return;
		}
		long since = System.currentTimeMillis() - attackMs;
		long start = Math.round(tapStart.getValue());
		long stop = Math.round(tapStop.getValue()) + Math.round(tapDelay.getValue());
		if (released) {
			if (since >= stop) {
				restore(client);
				attackMs = -1L;
			}
			return;
		}
		if (since >= start) {
			released = true;
			String tap = mode.getValue();
			if ("sneaktap".equals(tap)) {
				if (!sneakWasPressed) {
					client.options.sneakKey.setPressed(true);
				}
			} else if ("stap".equals(tap)) {
				if (forwardWasPressed) {
					client.options.backKey.setPressed(true);
				}
			} else {
				client.options.forwardKey.setPressed(false);
			}
		}
	}

	private void restore(MinecraftClient client) {
		if (released) {
			client.options.forwardKey.setPressed(forwardWasPressed);
			client.options.sneakKey.setPressed(sneakWasPressed);
			client.options.backKey.setPressed(backWasPressed);
		}
		released = false;
	}
}
