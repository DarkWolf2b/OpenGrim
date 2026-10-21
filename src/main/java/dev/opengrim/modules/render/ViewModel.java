package dev.opengrim.modules.render;

import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.Hand;
import net.minecraft.util.math.RotationAxis;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.HandRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;

/**
 * View Model (registry sixtwo.dC): "Changes player View Model".
 * Original decompile: analysis/decompiled/payload-decrypted/sixtwo/dC.java (lines 42-412 constructor with 21 settings, 430-435 native handler declarations aks/akr).
 * Native handlers: analysis/ghidra/handlers-full/sixtwo_dC.c and pool window 0x910a,0x19a.
 * Spec: analysis/specs/handlers/dC.md.
 *
 * <p>Configures first-person hand and arm model translations, rotations and scale.
 * The original executed its matrix stack transformations within native VM-dispatched
 * handlers (aks for MatrixStack arm transforms, akr for first-person hand transforms).
 * This module reconstructs the complete decrypted 21-setting tree and provides the
 * exact transformation operations for first-person hand and arm rendering.
 *
 * <p>Visibility wiring (dC.java:384-405): Scale / Main Position+Rotation / Off
 * Position+Rotation ← Work On Items; Arm Position+Rotation ← Work On Arm.
 *
 * <p>The original applied the transforms from the {@code gl} (Hand + MatrixStack,
 * akr) and {@code gt} (MatrixStack, aks) render events; this rebuild mirrors
 * that with {@link HandRenderEvent}, posted by HeldItemRendererMixin at the
 * same injection points (immediately before the held-item render and at the
 * head of renderArmHoldingItem). Transform order (translate → X → Y → Z →
 * scale) is a designer choice — the native bodies are VM-blocked (spec
 * "Blockers / unknowns").
 */
public class ViewModel extends Module {
	private final BoolSetting workOnItems = register(new BoolSetting("work_on_items", true));
	private final DoubleSetting scale = register(new DoubleSetting("scale", 0.01, 0.0, 2.0, 1.0, null));

	private final DoubleSetting mainPositionX = register(new DoubleSetting("main_position_x", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting mainPositionY = register(new DoubleSetting("main_position_y", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting mainPositionZ = register(new DoubleSetting("main_position_z", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting mainRotationX = register(new DoubleSetting("main_rotation_x", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final DoubleSetting mainRotationY = register(new DoubleSetting("main_rotation_y", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final DoubleSetting mainRotationZ = register(new DoubleSetting("main_rotation_z", 1.0, -180.0, 180.0, 0.0, " deg"));

	private final DoubleSetting offPositionX = register(new DoubleSetting("off_position_x", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting offPositionY = register(new DoubleSetting("off_position_y", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting offPositionZ = register(new DoubleSetting("off_position_z", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting offRotationX = register(new DoubleSetting("off_rotation_x", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final DoubleSetting offRotationY = register(new DoubleSetting("off_rotation_y", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final DoubleSetting offRotationZ = register(new DoubleSetting("off_rotation_z", 1.0, -180.0, 180.0, 0.0, " deg"));

	private final BoolSetting workOnArm = register(new BoolSetting("work_on_arm", false));
	private final DoubleSetting armPositionX = register(new DoubleSetting("arm_position_x", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting armPositionY = register(new DoubleSetting("arm_position_y", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting armPositionZ = register(new DoubleSetting("arm_position_z", 0.01, -3.0, 3.0, 0.0, null));
	private final DoubleSetting armRotationX = register(new DoubleSetting("arm_rotation_x", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final DoubleSetting armRotationY = register(new DoubleSetting("arm_rotation_y", 1.0, -180.0, 180.0, 0.0, " deg"));
	private final DoubleSetting armRotationZ = register(new DoubleSetting("arm_rotation_z", 1.0, -180.0, 180.0, 0.0, " deg"));

	public ViewModel() {
		super("view_model", "View Model", "Changes player View Model", ModuleCategory.VISUALS);
	}

	@Override
	public void onTick() {
		// Visibility wiring, dC.java:384-405.
		boolean items = workOnItems.getValue();
		scale.setVisible(items);
		mainPositionX.setVisible(items);
		mainPositionY.setVisible(items);
		mainPositionZ.setVisible(items);
		mainRotationX.setVisible(items);
		mainRotationY.setVisible(items);
		mainRotationZ.setVisible(items);
		offPositionX.setVisible(items);
		offPositionY.setVisible(items);
		offPositionZ.setVisible(items);
		offRotationX.setVisible(items);
		offRotationY.setVisible(items);
		offRotationZ.setVisible(items);
		boolean arm = workOnArm.getValue();
		armPositionX.setVisible(arm);
		armPositionY.setVisible(arm);
		armPositionZ.setVisible(arm);
		armRotationX.setVisible(arm);
		armRotationY.setVisible(arm);
		armRotationZ.setVisible(arm);
	}

	/**
	 * Original akr(gl) / aks(gt) listeners: apply the configured transforms to
	 * the live first-person render stack (the mixin bridge posts
	 * {@link HandRenderEvent} from HeldItemRenderer).
	 */
	@Subscribe
	public void onHandRender(HandRenderEvent event) {
		if (event.part() == HandRenderEvent.Part.ARM) {
			transformArm(event.matrices());
		} else if (event.hand() != null) {
			transformHand(event.matrices(), event.hand());
		}
	}

	public void transformHand(MatrixStack matrices, Hand hand) {
		if (!isEnabled() || !workOnItems.getValue()) {
			return;
		}
		if (hand == Hand.MAIN_HAND) {
			matrices.translate(
					mainPositionX.getValue().floatValue(),
					mainPositionY.getValue().floatValue(),
					mainPositionZ.getValue().floatValue()
			);
			matrices.multiply(RotationAxis.POSITIVE_X.rotationDegrees(mainRotationX.getValue().floatValue()));
			matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(mainRotationY.getValue().floatValue()));
			matrices.multiply(RotationAxis.POSITIVE_Z.rotationDegrees(mainRotationZ.getValue().floatValue()));
		} else if (hand == Hand.OFF_HAND) {
			matrices.translate(
					offPositionX.getValue().floatValue(),
					offPositionY.getValue().floatValue(),
					offPositionZ.getValue().floatValue()
			);
			matrices.multiply(RotationAxis.POSITIVE_X.rotationDegrees(offRotationX.getValue().floatValue()));
			matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(offRotationY.getValue().floatValue()));
			matrices.multiply(RotationAxis.POSITIVE_Z.rotationDegrees(offRotationZ.getValue().floatValue()));
		}
		float s = scale.getValue().floatValue();
		matrices.scale(s, s, s);
	}

	public void transformArm(MatrixStack matrices) {
		if (!isEnabled() || !workOnArm.getValue()) {
			return;
		}
		matrices.translate(
				armPositionX.getValue().floatValue(),
				armPositionY.getValue().floatValue(),
				armPositionZ.getValue().floatValue()
		);
		matrices.multiply(RotationAxis.POSITIVE_X.rotationDegrees(armRotationX.getValue().floatValue()));
		matrices.multiply(RotationAxis.POSITIVE_Y.rotationDegrees(armRotationY.getValue().floatValue()));
		matrices.multiply(RotationAxis.POSITIVE_Z.rotationDegrees(armRotationZ.getValue().floatValue()));
	}

	public boolean isWorkOnItems() {
		return workOnItems.getValue();
	}

	public boolean isWorkOnArm() {
		return workOnArm.getValue();
	}

	public double getScale() {
		return scale.getValue();
	}

	public double getMainPositionX() {
		return mainPositionX.getValue();
	}

	public double getMainPositionY() {
		return mainPositionY.getValue();
	}

	public double getMainPositionZ() {
		return mainPositionZ.getValue();
	}

	public double getMainRotationX() {
		return mainRotationX.getValue();
	}

	public double getMainRotationY() {
		return mainRotationY.getValue();
	}

	public double getMainRotationZ() {
		return mainRotationZ.getValue();
	}

	public double getOffPositionX() {
		return offPositionX.getValue();
	}

	public double getOffPositionY() {
		return offPositionY.getValue();
	}

	public double getOffPositionZ() {
		return offPositionZ.getValue();
	}

	public double getOffRotationX() {
		return offRotationX.getValue();
	}

	public double getOffRotationY() {
		return offRotationY.getValue();
	}

	public double getOffRotationZ() {
		return offRotationZ.getValue();
	}

	public double getArmPositionX() {
		return armPositionX.getValue();
	}

	public double getArmPositionY() {
		return armPositionY.getValue();
	}

	public double getArmPositionZ() {
		return armPositionZ.getValue();
	}

	public double getArmRotationX() {
		return armRotationX.getValue();
	}

	public double getArmRotationY() {
		return armRotationY.getValue();
	}

	public double getArmRotationZ() {
		return armRotationZ.getValue();
	}
}