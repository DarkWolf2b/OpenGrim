package mixin.accessors;

import net.minecraft.class_2828;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Mutable;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_2828.class})
public interface ServerboundMovePlayerPacketAccessor {
   @Mutable
   @Accessor("field_29179")
   void setOnGround(boolean var1);

   @Mutable
   @Accessor("field_12886")
   void setY(double var1);

   @Mutable
   @Accessor("field_12887")
   void setYRot(float var1);

   @Mutable
   @Accessor("field_12885")
   void setXRot(float var1);
}
