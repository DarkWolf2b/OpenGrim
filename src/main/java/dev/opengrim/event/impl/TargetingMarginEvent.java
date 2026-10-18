package dev.opengrim.event.impl;

import net.minecraft.entity.Entity;

/**
 * Fired at the return of {@code Entity#getTargetingMargin()} — the vanilla
 * hook that widens an entity's crosshair-target box ("invisible hitboxes").
 * Mirrors the original client's {@code sixtwo.hr} callback event (an entity
 * plus a {@code CallbackInfoReturnable<Float>}); Target Margin (sixtwo.fJ)
 * overwrites the value while enabled (fJ.java:78-89 aUO).
 */
public class TargetingMarginEvent {
	private final Entity entity;
	private float value;

	public TargetingMarginEvent(Entity entity, float value) {
		this.entity = entity;
		this.value = value;
	}

	public Entity entity() {
		return entity;
	}

	public float value() {
		return value;
	}

	public void setValue(float value) {
		this.value = value;
	}
}
