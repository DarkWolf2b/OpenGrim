package mixin.accessors;

import net.minecraft.class_10584;
import net.minecraft.class_241;
import net.minecraft.class_243;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_10584.class})
public interface InterpolationHandlerAccessor {
   @Accessor("field_55668")
   class_241 getPreviousTickRot();

   @Accessor("field_55667")
   class_243 getPreviousTickPosition();
}
