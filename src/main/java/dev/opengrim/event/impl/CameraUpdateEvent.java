package dev.opengrim.event.impl;

import net.minecraft.client.render.Camera;
import net.minecraft.client.render.GameRenderer;

/**
 * Fired after the camera updates each frame, before world rendering. Modules
 * may adjust the camera through the exposed objects (reflection surface).
 */
public class CameraUpdateEvent {
	private final Camera camera;
	private final GameRenderer renderer;
	private final float tickProgress;

	public CameraUpdateEvent(Camera camera, GameRenderer renderer, float tickProgress) {
		this.camera = camera;
		this.renderer = renderer;
		this.tickProgress = tickProgress;
	}

	public Camera camera() {
		return camera;
	}

	public GameRenderer renderer() {
		return renderer;
	}

	public float tickProgress() {
		return tickProgress;
	}
}
