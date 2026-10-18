package mixin.accessors;

import net.minecraft.class_1657;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin(
   value = {class_1657.class},
   remap = false
)
public interface PlayerSprintAccessor {
   @Invoker("method_76458")
   boolean offline$invokeCanSprint();
}
