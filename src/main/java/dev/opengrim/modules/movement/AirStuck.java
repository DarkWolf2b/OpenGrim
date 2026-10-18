package dev.opengrim.modules.movement;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.rotation.RotationManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.util.math.Vec3d;

/**
 * Air Stuck (registry sixtwo.ej, module id 43, bind 86): "Freezes all movement".
 *
 * <p>parity: 1:1 on the traced surface. Sources:
 * analysis/decompiled/casesafe/payload-named-cfr/sixtwo/ej.java:24-28 ctor with
 * {@code mT.cpz()} timer, asP(gM) :35-36, asQ(hv) :38-39, asR(hc) :41-42 (the
 * un-prefixed payload trees declare sixtwo.eJ (Auto Trap) on this checkout —
 * case-collision twins); iV.bxl(ov) sender iV.java:106-117; spec
 * analysis/specs/casesafe/handlers/ej.md. Registry bind 86 (metadata.txt:71).
 *
 * <p>Trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/ej.jsonl,
 * window [170263.6,170304.1]): asR(hc) entered 2× — once per client tick (the
 * hc event is constructed ~40 ms after every gH$th dispatch; hc was never
 * canceled by anything else). Recovered body order per tick:
 * <ol>
 *   <li>{@code gg.bab()} → 1 — in-world guard (player/world/interactionManager/
 *       networkHandler non-null; gg.java:393-459);</li>
 *   <li>{@code UqlCk.cpC(l2)} → 1 — mT timer "elapsed &gt; l2" gate
 *       (mT.java:60-81), nested {@code mT.cpK()} static read;</li>
 *   <li>{@code qL.dbC()} — current rotation: {@code player.getRotationClient()}
 *       unless a silent override is stored ({@code qkMAI} non-null and
 *       {@code qL.dcb()} true; qL.java:145-176);</li>
 *   <li>{@code iV.bxl(ov)} — sends {@code PlayerMoveC2SPacket.Full} with the
 *       player's live X/Y/Z at call time, the rotation, the real
 *       {@code isOnGround()} and {@code horizontalCollision} (iV.java:106-117;
 *       trace: ov.cGI()→0, ov.cGJ()→0, then the gL$tj send dispatch);</li>
 *   <li>{@code UqlCk.cpB()} — timer reset (mT.java:118-120);</li>
 *   <li>{@code var1.bdX(true)} — the hc event is CANCELED (hH.java:14-16; the
 *       native producer's post-dispatch {@code bdW()} read returned 1). The
 *       cancel's consumer is native; suppressing the tick's movement step is the
 *       reading that matches "Freezes all movement" (hc = the per-tick movement
 *       notification the native layer produces after every gH$th dispatch).</li>
 * </ol>
 *
 * <p>Port adaptations (labeled): our bus has no hc counterpart, so the native
 * cancel is approximated by pinning the local position + zero velocity each
 * tick (the position the packet carries stays the live player position, exactly
 * as in iV.bxl). The {@code l2} timer constant is VM-resident and unrecovered;
 * both observed ticks passed the gate (~1.69 s apart), so the port sends every
 * tick (equivalent for any l2 ≤ the tick interval). The silent-rotation
 * readout is routed through {@link RotationManager} (framework convention;
 * original: qL.dbC/qkMAI).
 *
 * <p>asP(gM) and asQ(hv) never triggered: gM/hv were never constructed in the
 * whole session (capture conditions: gM = movement/action notification —
 * producer unknown; hv = damage — take damage while the module is enabled).
 */
public class AirStuck extends Module {
	private Vec3d frozenPos;
	private boolean captured;

	public AirStuck() {
		super("air_stuck", "Air Stuck", "Freezes all movement", ModuleCategory.MOVEMENT);
		setBind(86);
	}

	@Override
	protected void onEnable() {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player != null) {
			frozenPos = player.getEntityPos();
			captured = true;
		} else {
			captured = false;
		}
	}

	@Override
	protected void onDisable() {
		captured = false;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.getNetworkHandler() == null) {
			return;
		}
		if (!captured || frozenPos == null) {
			frozenPos = player.getEntityPos();
			captured = true;
		}
		player.setPos(frozenPos.x, frozenPos.y, frozenPos.z);
		player.setVelocity(Vec3d.ZERO);
		player.fallDistance = 0.0f;
		float yaw = RotationManager.get().effectiveRotation().getYaw();
		float pitch = RotationManager.get().effectiveRotation().getPitch();
		// iV.bxl: player.getX()/getY()/getZ() at call time (trace 2026-10-17)
		client.getNetworkHandler().sendPacket(new PlayerMoveC2SPacket.Full(
				player.getEntityPos(), yaw, pitch, player.isOnGround(), player.horizontalCollision));
	}
}
