package mixin.accessors;

import net.minecraft.class_11658;
import net.minecraft.class_11661;
import net.minecraft.class_11684;
import net.minecraft.class_4604;
import net.minecraft.class_761;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({class_761.class})
public interface LevelRendererAccessor {
   @Accessor("field_61739")
   class_11684 getFeatureRenderDispatcher();

   @Accessor("field_61738")
   class_11661 getSubmitNodeStorage();

   @Accessor("field_61737")
   class_11658 getLevelRenderState();

   @Accessor("field_4056")
   class_4604 getCapturedFrustum();
}
