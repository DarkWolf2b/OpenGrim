package dev.opengrim.modules.movement;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.util.math.Vec3d;

/**
 * No Fall (registry sixtwo.ez, module id 36): "Attempts to prevent you from taking fall damage".
 *
 * <p>Sources:
 * <ul>
 * <li>analysis/decompiled/payload-named-cfr/sixtwo/ez.java:13-36 (constructor ez.java:19-22;
 *     native listener avk(gL$tj) ez.java:31-32)</li>
 * <li>analysis/specs/casesafe/handlers/ez.md (pool run POOL[0xdd00,0x7a):
 *     mixin/accessors/ServerboundMovePlayerPacketAccessor#setOnGround — the original rewrote
 *     the class_29179 onGround flag of outgoing movement packets in place; our stack replaces
 *     the packet instead, which is stack-required but idempotent: the replacement only fires
 *     when isOnGround() is false (mirroring the accessor write's no-op when already true).</li>
 * </ul>
 *
 * <p>Settings: zero settings constructed in the original class (ez.md v53).
 *
 * <p>Behavior: while falling, the outbound C2S packet listener (avk, gL$tj) forces the onGround
 * wire flag to true on ServerboundMovePlayerPacket subtypes so the server never credits fall
 * distance. The spoofing gate (falling state) is a discretionary stand-in — the original's
 * condition is VM-resident (ez unrecovered list item 2). Local fall-distance zeroing is NOT
 * mirrored: it is unrecovered in the decompile, so it is not implemented.
 *
 * <p>Trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/ez.jsonl, window
 * [171002.7,171045.9]): avk entered 3× — once per outbound packet (two movement-packet
 * sends in the first tick, one in the second; gL$tj dispatch → avk). The body's only
 * visible sixtwo call was
 * the in-world guard {@code gg.bab()} → 1; the rewrite itself is an invisible MC-accessor
 * write. The gL$tj event was NOT canceled (post-dispatch {@code bdW()} → 0), confirming the
 * in-place accessor-write reading over any packet-cancel/hold design. Capture condition for
 * the gate: be airborne (velocity.y &lt; 0, onGround false) while the client is sending
 * movement packets — the traced window had the gate outcome unobservable (no numeric
 * evidence), so the port's falling gate stays a labeled stand-in.
 */
public class NoFall extends Module {
	public NoFall() {
		super("no_fall", "No Fall", "Attempts to prevent you from taking fall damage", ModuleCategory.MOVEMENT);
	}

	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player == null) {
			return;
		}
		if (player.isOnGround() || player.getVelocity().y >= 0.0 || player.isTouchingWaterOrRain()) {
			return;
		}
		if (!(event.packet() instanceof PlayerMoveC2SPacket packet) || packet.isOnGround()) {
			return;
		}
		Vec3d pos = player.getEntityPos();
		if (packet instanceof PlayerMoveC2SPacket.Full full) {
			event.setPacket(new PlayerMoveC2SPacket.Full(
					new Vec3d(full.getX(pos.x), full.getY(pos.y), full.getZ(pos.z)),
					full.getYaw(player.getYaw()), full.getPitch(player.getPitch()), true, full.horizontalCollision()));
		} else if (packet instanceof PlayerMoveC2SPacket.PositionAndOnGround position) {
			event.setPacket(new PlayerMoveC2SPacket.PositionAndOnGround(
					position.getX(pos.x), position.getY(pos.y), position.getZ(pos.z), true, position.horizontalCollision()));
		} else if (packet instanceof PlayerMoveC2SPacket.LookAndOnGround look) {
			event.setPacket(new PlayerMoveC2SPacket.LookAndOnGround(
					look.getYaw(player.getYaw()), look.getPitch(player.getPitch()), true, look.horizontalCollision()));
		} else if (packet instanceof PlayerMoveC2SPacket.OnGroundOnly ground) {
			event.setPacket(new PlayerMoveC2SPacket.OnGroundOnly(true, ground.horizontalCollision()));
		}
	}
}
