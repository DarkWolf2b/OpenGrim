package dev.opengrim.mixin;

import net.minecraft.client.render.Camera;
import net.minecraft.util.math.Vec3d;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin(Camera.class)
public interface CameraAccessor {
	@Invoker("setPos")
	void opengrim$callSetPos(Vec3d pos);

	@Invoker("setPos")
	void opengrim$callSetPos(double x, double y, double z);

	@Invoker("setRotation")
	void opengrim$callSetRotation(float yaw, float pitch);

	@Accessor("thirdPerson")
	void opengrim$setThirdPerson(boolean thirdPerson);

	@Accessor("thirdPerson")
	boolean opengrim$isThirdPerson();
}
