package dev.opengrim.event.impl;

import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;

/**
 * Fired after the client interaction manager completes
 * {@code attackEntity(PlayerEntity, Entity)} (Yarn
 * {@code ClientPlayerInteractionManager#method_2918}).
 *
 * <p>Mirrors the original shell's attack-<em>post</em> event {@code hw$tw}
 * (bootstrap {@code mixin.accessors.InteractionEventBridgeMixin#offline$attackPost},
 * analysis/decompiled/bootstrap/mixin/accessors/InteractionEventBridgeMixin.java
 * :40-53, injected at {@code @At("TAIL")} of the interaction manager's attack).
 * Fake Lag (sixtwo.ff) consumes it in {@code aIk(hw$tw)} (ff.java:1030-1064) to
 * set its Lag Range latch.
 */
public class AttackEntityPostEvent {
	private final PlayerEntity player;
	private final Entity target;

	public AttackEntityPostEvent(PlayerEntity player, Entity target) {
		this.player = player;
		this.target = target;
	}

	public PlayerEntity player() {
		return player;
	}

	public Entity target() {
		return target;
	}
}
