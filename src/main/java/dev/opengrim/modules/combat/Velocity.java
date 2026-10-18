package dev.opengrim.modules.combat;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;
import net.minecraft.util.math.Vec3d;

/**
 * Velocity (registry sixtwo.fC, module id 24): "Changes player knockback".
 *
 * <p>Port of sixtwo.fC (payload-decrypted/sixtwo/fC.java:25-67 builders;
 * packet handler {@code aSw(gL$tk)} fC.java:87-88, per-axis transform
 * {@code aSx(DDI)D} fC.java:85, rewrite {@code aSy(packet,DDD)} fC.java:96; spec
 * analysis/specs/casesafe/handlers/fC_.md). Category {@code gh.xwjCw} = Combat.
 * Settings in declaration order: Horizontal {@code UG(1.0).UE(0.0).UF(100.0).
 * UI(100.0,100.0).UH(" %")} fC.java:39, Vertical identical fC.java:49, Disable In
 * Fluid {@code .WE(false)} fC.java:67 — gate is {@code Entity.isInLava}
 * ({@code method_5771}) only (fC_.md; no other fluid predicate is in the pool).
 *
 * <p>Original mechanics (fC_.md): intercept only {@code EntityVelocityUpdateS2CPacket},
 * rewrite the packet in place via the {@code ClientboundSetEntityMotionPacketAccessor}
 * mixin ({@code setMovement}) after passing each component through {@code aSx};
 * the packet may additionally be held through the {@code iU.bwT} scheduled task
 * (delay/args VM-only). The in-place packet mutation needs a network accessor
 * not present in this stack, so the packet is cancelled and the rescaled
 * entity velocity applied directly — same client-visible effect.
 *
 * <p>high-probability guess: the per-component formula
 * {@code v * pct / 100} (fC_.md "Unrecovered #1" states only the default-100
 * identity and one surviving {@code dadd} are evidenced; the percentage math
 * itself executed in the VM). Same for reading only the local player's packet.
 *
 * <p><b>cA pair note (2026-10-18 re-verify):</b> Horizontal/Vertical are
 * {@code cA} range sliders (state {@code MutablePair<Double,Double>},
 * casesafe/payload-named-cfr/sixtwo/cA_.java:37; value {@code UN()} =
 * {@code mU.cpR} = {@code mU.cpP(left, right)} = {@code nextDouble() * (right -
 * left) + left}, sixtwo_77.java:125-127/215-219). Both pairs are
 * {@code UI(100.0, 100.0)} (fC.java:39, 49) — degenerate, so the drawn value is
 * exactly 100.0 and the default is identity, matching the port's 100.0 default;
 * the port keeps a plain DoubleSetting because the range collapses.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/fC_.jsonl,
 * window [171164.2,171174.9]): {@code aSw} entered 14&times; — once per received
 * packet (the event wraps any packet, gL_.java:29-42). Every call's body ran the
 * in-game guard {@code gg.bab()} &rarr; 1, then read the Disable-In-Fluid setting
 * ({@code cJ.WF()} &rarr; 0 — one read per call, pinned to the aSw spans) and then
 * {@code gL.bcf()} (the packet getter). {@code aSx}/{@code aSy} did NOT run in any
 * of the 14 calls: all packets were rejected before the transform, i.e. the
 * local-entity filter demonstrably exists and sits between the packet read and
 * aSx (its exact vanilla-side form stays invisible). Capture condition for the
 * transform: take knockback (hit by a mob / damage) during the window so a
 * velocity packet targets the local player — then aSx's returns pin the formula
 * and aSy's mutation becomes observable.
 */
public class Velocity extends Module {
	private final DoubleSetting horizontal = register(new DoubleSetting("horizontal", 1.0, 0.0, 100.0, 100.0, " %"));
	private final DoubleSetting vertical = register(new DoubleSetting("vertical", 1.0, 0.0, 100.0, 100.0, " %"));
	private final BoolSetting disableInFluid = register(new BoolSetting("disable_in_fluid", false));

	public Velocity() {
		super("velocity", "Velocity", "Changes player knockback", ModuleCategory.COMBAT);
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		// trace 2026-10-17: aSw ran the gg.bab() in-game guard (→1) on all 14 calls,
		// then read the Disable-In-Fluid setting (cJ.WF() → 0, exactly once per call,
		// before the gL.bcf() packet read) — the setting read precedes the packet
		// filter (1:1 order).
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		boolean fluidGuard = disableInFluid.getValue();
		if (!(event.packet() instanceof EntityVelocityUpdateS2CPacket velocity)) {
			return;
		}
		if (velocity.getEntityId() != player.getId()) {
			return;
		}
		if (fluidGuard && player.isInLava()) {
			return;
		}
		Vec3d current = velocity.getVelocity();
		double x = transform(current.x, horizontal.getValue(), 0);
		double y = transform(current.y, vertical.getValue(), 1);
		double z = transform(current.z, horizontal.getValue(), 0);
		// The packet type exposes no setter on this stack (getVelocity only);
		// cancel the inbound knockback and apply the rescaled impulse directly,
		// which is the client-visible effect of the original's rewrite
		// (sixtwo.fC#aSy).
		event.setCancelled(true);
		player.setVelocity(new Vec3d(x, y, z));
	}

	private static double transform(double component, double percent, int axis) {
		return component * (percent / 100.0) + axis * 0.0;
	}
}
