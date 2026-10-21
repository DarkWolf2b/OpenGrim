package dev.opengrim.modules.render;

import java.lang.reflect.Field;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.CameraUpdateEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.option.Perspective;
import net.minecraft.client.render.Camera;
import net.minecraft.entity.Entity;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;

/**
 * Custom Camera Distance (registry sixtwo.ed, module id 74): "Changes camera
 * distance from player".
 *
 * <p>Port of sixtwo.ed (analysis/decompiled/payload-decrypted/sixtwo/ed.java:
 * 10-66): "Distance" cC step 1.0 min 4.0 max 100.0 default 4.0 with
 * runtime-encrypted suffix XgLBB (value unrecovered — not guessed, ed.java:31)
 * and "No Clip" cJ default false (ed.java:40); the only lifecycle surface is
 * the on-enable hook aaj() (ed.java:49) plus blob-less getters arB()/arC()
 * (ed.java:53/51); spec: analysis/specs/handlers/ed.md (verified as sixtwo.ed —
 * not eD Fast Bridge).
 *
 * <p>The original declares NO event listeners (spec "Listener inventory (0
 * @hG)"): the camera-distance application lives in the framework shell /
 * native camera component, which reads the getters — there is no camera API
 * token anywhere in ed's own pool window (handlers/ed.md "Blockers" #1).
 * This port reuses our existing {@link CameraUpdateEvent} reflection surface
 * as that consumer channel: the application below is a <b>high-probability
 * guess</b> built on the only recovered contracts — the registry description
 * ("Changes camera distance from player") and the slider/checkbox values.
 * Unrecovered items it cannot claim: first-person/front-view handling
 * (handlers/ed.md "Blockers" #3 — skipped: only the detached camera is
 * modified) and the exact vanilla clip interaction for "No Clip" (implemented
 * as a VISUAL-shape ray clamp mirroring vanilla's detached-camera clip shape;
 * "No Clip" bypasses the clamp entirely).
 *
 * <p>trace 2026-10-17: aaj ran 1× on enable (169997260635, ~123ms under trace
 * load) and its only nested sixtwo call was the shared VM tripwire
 * {@code ee.arS()} (null → normal path; the same probe fires in dB.aaj and
 * dM/dR/dF bodies). No camera/render API token surfaced — the application path
 * stays the documented reconstruction. Capture condition: enable the module in
 * third-person and log the camera pos/distance per frame to pin the consumer
 * contract.
 *
 * <p>static re-verify 2026-10-17: ed's own pool run (resolved from
 * jna-decrypted-v2.dll, pool base RVA 0x301ee50) confirms the handler spec's
 * negative finding — the class's declared members ({@code BpiUS/HfVsU/PQbtp/
 * fokqH/RqWGM/TVqrW/arB/arC/arD/arE/arF}) are the only entries besides
 * {@code XgLBB}; there is no Camera/RenderSystem/GameRenderer token, so the
 * {@link CameraUpdateEvent} consumer below remains a high-probability guess.
 *
 * <p>Suffix: the "Distance" unit string ({@code XgLBB}) is native-VM-resident,
 * not a DES literal — ed's class constant pool carries no ciphertext (checked
 * byte-wise) and the class-init stub
 * {@code _a79940e05944d2ef07f1382edf83c8fc} decrypts the class's own pool
 * inside the j2cc VM (its blob is the shared clinit slice 0x226,0xd plus ed's
 * descriptor 0xc377,0x218). Left null, reclassified [N] (native) instead of
 * [V].
 */
public class CustomCameraDistance extends Module {
	private final DoubleSetting distance = register(new DoubleSetting("distance", 1.0, 4.0, 100.0, 4.0, null));
	private final BoolSetting noClip = register(new BoolSetting("no_clip", false));

	private static Field cameraPosField;
	private static boolean cameraPosLookupDone;

	public CustomCameraDistance() {
		super("custom_camera_distance", "Custom Camera Distance", "Changes camera distance from player", ModuleCategory.PLAYER);
	}

	/**
	 * Application point for the recovered Distance/No Clip getters (arB/arC).
	 * Only the detached (third-person back view) camera is touched.
	 */
	@Subscribe
	private void onCameraUpdate(CameraUpdateEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		Camera camera = event.camera();
		if (client.player == null || !camera.isThirdPerson()) {
			return;
		}
		if (client.options.getPerspective().isFrontView()) {
			return;
		}
		Entity focused = camera.getFocusedEntity();
		if (focused == null || client.world == null) {
			return;
		}
		Vec3d anchor = focused.getCameraPosVec(event.tickProgress());
		Vec3d current = camera.getCameraPos();
		Vec3d direction = current.subtract(anchor);
		double currentLength = direction.length();
		if (currentLength < 1.0e-4) {
			return;
		}
		direction = direction.multiply(1.0 / currentLength);
		Vec3d wanted = anchor.add(direction.multiply(distance.getValue()));
		if (!noClip.getValue()) {
			// Vanilla detached-camera clip: VISUAL shapes from anchor toward the
			// wanted position, stopping at the hit point (RaycastContext.ShapeType.VISUAL
			// family; ed's own window holds no camera tokens, so this mirrors the
			// vanilla camera clip contract rather than a recovered constant).
			BlockHitResult hit = client.world.raycast(new RaycastContext(anchor, wanted,
					RaycastContext.ShapeType.VISUAL, RaycastContext.FluidHandling.NONE, focused));
			if (hit.getType() == HitResult.Type.BLOCK) {
				double hitDistance = hit.getPos().subtract(anchor).length();
				wanted = anchor.add(direction.multiply(Math.max(0.0, hitDistance - 1.0 / 16.0)));
			}
		}
		if (!current.equals(wanted)) {
			setCameraPos(camera, wanted);
		}
	}

	/**
	 * Reflection surface for the detached camera position (Camera.pos is
	 * private; CameraMixin exposes the Camera object but not a setter).
	 * Production (intermediary) fallback {@code field_18712} = {@code pos}
	 * (yarn-1.21.11+build.6.tiny: Camera).
	 */
	private static void setCameraPos(Camera camera, Vec3d pos) {
		Field field = cameraPosField();
		if (field == null) {
			return;
		}
		try {
			field.set(camera, pos);
		} catch (IllegalAccessException ignored) {
		}
	}

	private static Field cameraPosField() {
		if (!cameraPosLookupDone) {
			cameraPosLookupDone = true;
			for (String name : new String[] { "pos", "field_18712" }) {
				try {
					Field field = Camera.class.getDeclaredField(name);
					field.setAccessible(true);
					cameraPosField = field;
					break;
				} catch (ReflectiveOperationException ignored) {
				}
			}
		}
		return cameraPosField;
	}

	/** "Distance" slider (ed.java arB, default 4.0 = vanilla camera distance). */
	public double getDistance() {
		return distance.getValue();
	}

	/** "No Clip" checkbox (ed.java arC). */
	public boolean isNoClip() {
		return noClip.getValue();
	}
}
