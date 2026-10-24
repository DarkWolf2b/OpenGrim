package dev.opengrim.modules.render;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.CameraUpdateEvent;
import dev.opengrim.mixin.CameraAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.option.Perspective;
import net.minecraft.client.render.Camera;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

/**
 * Freecam (registry sixtwo.dW): "Detaches camera allowing free movement".
 *
 * <p>Port of sixtwo.dW (payload-decrypted/sixtwo/dW.java:35-96 constructor,
 * :103-194 native surface; spec analysis/specs/handlers/dW.md). Settings in
 * declaration order: Speed (dW.java:38-53), Rotate (dW.java:61), Disable on
 * Damage (dW.java:80), Render Hand (dW.java:93). Bind 71 wired from the
 * registry metadata (dW.md:4-7 "key 76, bind 71"); category gh.qBzlZ.
 *
 * <p>Freecam detaches the camera from the player entity, allowing the user
 * to fly around and inspect the surroundings while the real player remains
 * stationary in place. The player's perspective is preserved without forcing
 * third-person back in client options; instead, the detached camera position
 * and rotation are applied directly to {@link Camera} via {@link CameraAccessor},
 * and thirdPerson is flagged on the camera so the player entity is rendered
 * in the world.
 */
public class Freecam extends Module {
	private final DoubleSetting speed = register(new DoubleSetting("speed", 0.1, 1.0, 10.0, 3.0, null));
	private final BoolSetting rotate = register(new BoolSetting("rotate", false));
	private final BoolSetting disableOnDamage = register(new BoolSetting("disable_on_damage", false));
	private final BoolSetting renderHand = register(new BoolSetting("render_hand", false));

	private Perspective savedPerspective;
	private Vec3d freecamPos;
	private Vec3d prevFreecamPos;
	private float freecamYaw;
	private float freecamPitch;

	public Freecam() {
		super("freecam", "Freecam", "Detaches camera allowing free movement", ModuleCategory.PLAYER);
		setBind(71);
	}

	@Override
	protected void onEnable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null) {
			setEnabled(false);
			return;
		}
		savedPerspective = client.options.getPerspective();
		freecamPos = client.player.getEyePos();
		prevFreecamPos = freecamPos;
		freecamYaw = client.player.getYaw();
		freecamPitch = client.player.getPitch();
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
		prevFreecamPos = freecamPos;
		if (client.currentScreen == null) {
			freecamPos = freecamPos.add(moveDelta());
		}
	}

	/**
	 * Handles mouse looking while freecam is active.
	 *
	 * @param cursorDeltaX horizontal mouse delta (sensitivity and inversion already applied)
	 * @param cursorDeltaY vertical mouse delta (sensitivity and inversion already applied)
	 */
	public void onMouseTurn(double cursorDeltaX, double cursorDeltaY) {
		float pitchDelta = (float) cursorDeltaY * 0.15f;
		float yawDelta = (float) cursorDeltaX * 0.15f;
		this.freecamPitch = MathHelper.clamp(this.freecamPitch + pitchDelta, -90.0f, 90.0f);
		this.freecamYaw += yawDelta;
	}

	@Subscribe
	private void onCameraUpdate(CameraUpdateEvent event) {
		if (!isEnabled() || freecamPos == null) {
			return;
		}
		Camera camera = event.camera();
		Vec3d pos = prevFreecamPos != null
				? prevFreecamPos.lerp(freecamPos, event.tickProgress())
				: freecamPos;
		((CameraAccessor) camera).opengrim$callSetPos(pos);
		((CameraAccessor) camera).opengrim$callSetRotation(freecamYaw, freecamPitch);
		((CameraAccessor) camera).opengrim$setThirdPerson(true);
	}

	@Override
	protected void onDisable() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (savedPerspective != null && client.options != null) {
			client.options.setPerspective(savedPerspective);
			savedPerspective = null;
		}
		freecamPos = null;
		prevFreecamPos = null;
	}

	private Vec3d moveDelta() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.options == null) {
			return Vec3d.ZERO;
		}

		double forward = (client.options.forwardKey.isPressed() ? 1.0 : 0.0)
				- (client.options.backKey.isPressed() ? 1.0 : 0.0);
		double strafe = (client.options.rightKey.isPressed() ? 1.0 : 0.0)
				- (client.options.leftKey.isPressed() ? 1.0 : 0.0);
		double vertical = (client.options.jumpKey.isPressed() ? 1.0 : 0.0)
				- (client.options.sneakKey.isPressed() ? 1.0 : 0.0);

		if (forward == 0.0 && strafe == 0.0 && vertical == 0.0) {
			return Vec3d.ZERO;
		}

		double speedVal = speed.getValue();
		if (client.options.sprintKey.isPressed()) {
			speedVal *= 1.5;
		}
		double perTick = speedVal * 0.25;

		float yaw = MathHelper.RADIANS_PER_DEGREE * freecamYaw;
		double dx = -MathHelper.sin(yaw) * forward + MathHelper.cos(yaw) * strafe;
		double dz = MathHelper.cos(yaw) * forward + MathHelper.sin(yaw) * strafe;

		double horizontalDist = Math.hypot(dx, dz);
		if (horizontalDist > 1.0e-5) {
			double scale = Math.max(Math.abs(forward), Math.abs(strafe)) / horizontalDist;
			dx *= scale;
			dz *= scale;
		}

		return new Vec3d(dx * perTick, vertical * perTick, dz * perTick);
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
