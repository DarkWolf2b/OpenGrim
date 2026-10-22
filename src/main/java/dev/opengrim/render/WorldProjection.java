package dev.opengrim.render;

import net.minecraft.client.MinecraftClient;
import org.joml.Matrix4f;

/**
 * Capture point for the frame's world projection — the port of the projection
 * half of the original's {@code jI.bIj} bridge.
 *
 * <p>The original's bootstrap recomputes the projection at the world-pre-hand
 * point as {@code GameRenderer#getBasicProjectionMatrix(getFov(camera, tick,
 * true))} (analysis/decompiled/bootstrap/mixin/accessors/WorldRenderEventBridgeMixin.java:94-95;
 * {@code method_22973} = {@code getBasicProjectionMatrix}, {@code method_3196} =
 * {@code getFov} in Yarn 1.21.11). {@code jI.bIw} then evaluates
 * {@code P * MV * PS * v}, with the modelview identity at that point.
 *
 * <p>{@code GameRenderer#getFov} is private, so a mixin captures its return
 * value for the {@code changingFov = true} path (the world pass and
 * {@code GameRenderer.project} both use it; the HUD pass uses {@code false} and
 * is ignored). This keeps the overlays on the exact projection the world was
 * rendered with when the FOV is modulated — sprinting, water/lava, death — and
 * deliberately avoids re-implementing the private FOV logic.
 *
 * <p>Written on the render thread during the world pass and read later in the
 * same frame by the HUD overlays. The fallback only covers a frame before the
 * first world projection has been captured.
 */
public final class WorldProjection {
	private static volatile Float frameFov;

	private WorldProjection() {
	}

	/** GameRendererMixin: value returned by {@code getFov(camera, tick, true)}. */
	public static void captureFov(float fov) {
		frameFov = fov;
	}

	/**
	 * The projection the original captured: {@code getBasicProjectionMatrix} at
	 * the live world FOV, or the configured FOV before the first world frame.
	 */
	public static Matrix4f get(MinecraftClient client) {
		Float captured = frameFov;
		float fov = captured != null ? captured : client.options.getFov().getValue().floatValue();
		return client.gameRenderer.getBasicProjectionMatrix(fov);
	}
}
