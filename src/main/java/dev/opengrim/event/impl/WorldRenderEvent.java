package dev.opengrim.event.impl;

import net.fabricmc.fabric.api.client.rendering.v1.world.WorldRenderContext;
import net.minecraft.client.render.Camera;

/**
 * Fired during world rendering, wrapping Fabric's {@link WorldRenderContext}.
 * {@code phase} distinguishes pass points so modules can pick where their
 * overlays draw relative to world geometry.
 */
public class WorldRenderEvent {
	public enum Phase {
		AFTER_ENTITIES,
		BEFORE_TRANSLUCENT,
		END_MAIN
	}

	private final WorldRenderContext context;
	private final Camera camera;
	private final Phase phase;

	public WorldRenderEvent(WorldRenderContext context, Camera camera, Phase phase) {
		this.context = context;
		this.camera = camera;
		this.phase = phase;
	}

	public WorldRenderContext context() {
		return context;
	}

	/** @deprecated use {@link #context()} — kept for module convenience. */
	public net.minecraft.client.util.math.MatrixStack matrices() {
		return context.matrices();
	}

	public Camera camera() {
		return camera;
	}

	public Phase phase() {
		return phase;
	}
}
