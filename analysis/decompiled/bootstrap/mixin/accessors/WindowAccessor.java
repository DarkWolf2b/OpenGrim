package mixin.accessors;

import net.minecraft.class_1041;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_1041.class})
public interface WindowAccessor {
   @Accessor("field_5187")
   long getHandle();
}
