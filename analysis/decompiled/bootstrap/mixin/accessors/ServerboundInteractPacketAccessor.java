package mixin.accessors;

import net.minecraft.class_2824;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_2824.class})
public interface ServerboundInteractPacketAccessor {
   @Accessor("field_12870")
   int getEntityId();
}
