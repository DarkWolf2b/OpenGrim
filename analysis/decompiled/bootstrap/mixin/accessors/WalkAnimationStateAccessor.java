package mixin.accessors;

import net.minecraft.class_8080;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_8080.class})
public interface WalkAnimationStateAccessor {
   @Accessor("field_42111")
   void setPosition(float var1);

   @Accessor("field_42111")
   float getPosition();
}
