package dev.opengrim.modules.movement;

import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.vehicle.BoatEntity;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.Box;

/**
 * Collision Long Jump (registry sixtwo.ev, module id 48): "Jumps when colliding with boat".
 *
 * <p>Recovered contract (handlers/ev.md "Runtime model"): on the {@code hq} entity-pair
 * collision event (auR, ev.java:34-35) type-test the partner against BoatEntity
 * (class_1690) and measure distanceTo (method_5739); the jump mechanism itself has no pool
 * token — VM-resident. The tick scan below replaces the hq event (no rebuild counterpart).
 * The 0.6 AABB expansion, the 2.0f distance threshold, and the PlayerInput-jump + player.jump()
 * trigger are discretionary stand-ins — none of them is evidenced by the decompile.
 *
 * <p>Trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/ev.jsonl, window
 * [170827.2,170868.1]): {@code aaj()} entered 1× on enable — its body called the base
 * {@code gg.aaj()} → {@code hF.bdI(this)} (listener registration; gg.java:375-376), matching
 * the base setEnabled registration in our port. {@code auR(hq)} did NOT trigger: the hq
 * event was never constructed in the whole session (zero {@code hq} events) — no boat was
 * nearby. Capture condition: enable ev and walk/sprint into a BoatEntity (singleplayer
 * boat-on-ice style collision) so the hq event fires with a boat in the pair.
 */
public class CollisionLongJump extends Module {
	public CollisionLongJump() {
		super("collision_long_jump", "Collision Long Jump", "Jumps when colliding with boat", ModuleCategory.MOVEMENT);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		Box search = player.getBoundingBox().expand(0.6);
		List<Entity> nearby = client.world.getOtherEntities(player, search, e -> e instanceof BoatEntity);
		boolean colliding = false;
		for (Entity boat : nearby) {
			if (player.distanceTo(boat) < 2.0f) {
				colliding = true;
				break;
			}
		}
		if (!colliding) {
			return;
		}
		PlayerInput current = player.input.playerInput;
		player.input.playerInput = new PlayerInput(current.forward(), current.backward(), current.left(),
				current.right(), true, current.sneak(), current.sprint());
		player.jump();
	}
}
