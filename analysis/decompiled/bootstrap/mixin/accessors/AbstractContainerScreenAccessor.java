package mixin.accessors;

import net.minecraft.class_1735;
import net.minecraft.class_465;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;
import org.spongepowered.asm.mixin.gen.Invoker;

@Mixin({class_465.class})
public interface AbstractContainerScreenAccessor {
   @Accessor("field_2776")
   int getLeftPos();

   @Accessor("field_2800")
   int getTopPos();

   @Invoker("method_64240")
   class_1735 invokeGetHoveredSlot(double var1, double var3);

   @Accessor("field_2798")
   void setSkipNextRelease(boolean var1);

   @Accessor("field_2787")
   class_1735 getHoveredSlot();
}
