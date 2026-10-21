package dev.opengrim.modules.render;

import java.lang.reflect.Method;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.option.Perspective;
import net.minecraft.client.render.Camera;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.CameraUpdateEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;

/**
 * Freecam (registry sixtwo.dW): "Detaches camera allowing free movement".
 *
 * <p>Port of sixtwo.dW (payload-decrypted/sixtwo/dW.java:35-96 constructor,
 * :103-194 native surface; spec analysis/specs/handlers/dW.md). Settings in
 * declaration order: Speed (dW.java:38-53), Rotate (dW.java:61), Disable on
 * Damage (dW.java:80), Render Hand (dW.java:93). Bind 71 wired from the
 * registry metadata (dW.md:4-7 "key 76, bind 71"); category gh.qBzlZ.
 *
 * <p><b>High-probability guesses</b> (labeled, unrecovered per dW.md
 * "Unrecovered"): the first slider's display name ("Speed" — 5-char name not
 * in the decrypted list, dW.md #6); the forced perspective
 * THIRD_PERSON_BACK (dW.md #5 — the window carries Perspective /
 * THIRD_PERSON_FRONT tokens but whether the module forces front or merely
 * saves/restores is native); the movement basis (input × Speed / 20 per tick
 * from the Vec3d multiply/add/subtract tokens, dW.md #1).
 *
 * <p>Enable saves the perspective and seeds the detached point at the eye;
 * tick steers it from movement input scaled by Speed; disable restores the
 * perspective. The point and rotation are applied in
 * {@link CameraUpdateEvent} (the original applies them in the tick/render
 * windows, aqk(gH$ti)/aqs(go$sX), and exposes aqx(float) → ov lerped camera
 * rotation — trace 2026-10-17: aqn on enable, aqt per tick, aqk post-motion
 * (14.5 µs), YO on disable).
 *
 * <p>Not implemented (unrecovered / needs a stack hook): the aql(gA) LOWEST
 * input grab (the real player keeps moving — our bus has no pre-movement input
 * event), the kr spoof-player panel (kw.bRK().bRN(true), ghost rendering of
 * the real player), and Render Hand's render-window effect (dW.md "Event
 * wiring").
 */
public class Freecam extends Module {
	private final DoubleSetting speed = register(new DoubleSetting("speed", 0.1, 1.0, 10.0, 3.0, null));
	private final BoolSetting rotate = register(new BoolSetting("rotate", false));
	private final BoolSetting disableOnDamage = register(new BoolSetting("disable_on_damage", false));
	private final BoolSetting renderHand = register(new BoolSetting("render_hand", false));

	private Perspective savedPerspective;
	private Vec3d freecamPos;
	private float freecamYaw;
	private float freecamPitch;
	private Method cameraSetPos;
	private Method cameraSetRotation;

	public Freecam() {
		super("freecam", "Freecam", "Detaches camera allowing free movement", ModuleCategory.PLAYER);
		setBind(71);
	}

	@Override
	protected void onEnable() {
		MinecraftClient client = MinecraftClient.getInstance();
		savedPerspective = client.options.getPerspective();
		client.options.setPerspective(Perspective.THIRD_PERSON_BACK);
		if (client.player != null) {
			freecamPos = client.player.getEyePos();
			freecamYaw = client.player.getYaw();
			freecamPitch = client.player.getPitch();
		} else {
			freecamPos = null;
		}
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || freecamPos == null) {
			return;
		}
		if (disableOnDamage.getValue() && player.hurtTime > 0) {
			setEnabled(false);
			return;
		}
		if (rotate.getValue()) {
			freecamYaw = player.getYaw();
			freecamPitch = player.getPitch();
		}
		freecamPos = freecamPos.add(moveDelta(player));
	}

	@Subscribe
	private void onCameraUpdate(CameraUpdateEvent event) {
		if (!isEnabled() || freecamPos == null) {
			return;
		}
		setCameraPos(event.camera(), freecamPos);
		setCameraRotation(event.camera(), freecamYaw, freecamPitch);
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (savedPerspective != null && client.options != null) {
			client.options.setPerspective(savedPerspective);
			savedPerspective = null;
		}
		freecamPos = null;
	}

	private Vec3d moveDelta(ClientPlayerEntity player) {
		PlayerInput input = player.input.playerInput;
		float yaw = MathHelper.RADIANS_PER_DEGREE * freecamYaw;
		double forward = (input.forward() ? 1 : 0) - (input.backward() ? 1 : 0);
		double strafe = (input.right() ? 1 : 0) - (input.left() ? 1 : 0);
		double vertical = (input.jump() ? 1 : 0) - (input.sneak() ? 1 : 0);
		double perTick = speed.getValue() / 20.0;
		double dx = -MathHelper.sin(yaw) * forward + MathHelper.cos(yaw) * strafe;
		double dz = MathHelper.cos(yaw) * forward + MathHelper.sin(yaw) * strafe;
		return new Vec3d(dx * perTick, vertical * perTick, dz * perTick);
	}

	private void setCameraPos(Camera camera, Vec3d pos) {
		try {
			if (cameraSetPos == null) {
				cameraSetPos = Camera.class.getDeclaredMethod("setPos", double.class, double.class, double.class);
				cameraSetPos.setAccessible(true);
			}
			cameraSetPos.invoke(camera, pos.x, pos.y, pos.z);
		} catch (ReflectiveOperationException ignored) {
		}
	}

	/**
	 * Applies the detached rotation (aqx(float) → ov, the lerped camera
	 * rotation of dW.md "Public getters"). Camera.setRotation(float, float) is
	 * protected; reflection mirrors the setPos surface above.
	 */
	private void setCameraRotation(Camera camera, float yaw, float pitch) {
		try {
			if (cameraSetRotation == null) {
				cameraSetRotation = Camera.class.getDeclaredMethod("setRotation", float.class, float.class);
				cameraSetRotation.setAccessible(true);
			}
			cameraSetRotation.invoke(camera, yaw, pitch);
		} catch (ReflectiveOperationException ignored) {
		}
	}

	public double getSpeed() {
		return speed.getValue();
	}

	public boolean isRotate() {
		return rotate.getValue();
	}

	public boolean isDisableOnDamage() {
		return disableOnDamage.getValue();
	}

	public boolean isRenderHand() {
		return renderHand.getValue();
	}

	/** Detached camera position seeded at the eye on enable. */
	public Vec3d getFreecamPos() {
		return freecamPos;
	}

	public float getFreecamYaw() {
		return freecamYaw;
	}

	public float getFreecamPitch() {
		return freecamPitch;
	}
}
