package mixin.accessors;

import com.mojang.blaze3d.pipeline.RenderPipeline.Builder;
import java.util.Optional;
import net.minecraft.class_2960;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.Mutable;
import org.spongepowered.asm.mixin.gen.Accessor;

@Mixin({Builder.class})
public interface RenderPipelineBuilderAccessor {
   @Accessor("vertexShader")
   Optional<class_2960> getVertexShader();

   @Accessor("fragmentShader")
   Optional<class_2960> getFragmentShader();

   @Mutable
   @Accessor("vertexShader")
   void setVertexShader(Optional<class_2960> var1);

   @Mutable
   @Accessor("fragmentShader")
   void setFragmentShader(Optional<class_2960> var1);
}
