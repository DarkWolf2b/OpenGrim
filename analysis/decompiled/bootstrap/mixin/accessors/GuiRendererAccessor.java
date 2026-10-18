package mixin.accessors;

import net.minecraft.class_11228;
import net.minecraft.class_11246;
import net.minecraft.class_11659;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_11228.class})
public interface GuiRendererAccessor {
   @Accessor("field_62147")
   class_11659 getSubmitNodeCollector();

   @Accessor("field_59914")
   class_11246 getRenderState();
}
