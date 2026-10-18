package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.OutlineVertexConsumerProvider;
import net.minecraft.client.render.VertexConsumerProvider.Immediate;
import net.minecraft.client.render.command.OrderedRenderCommandQueueImpl;
import net.minecraft.client.render.command.RenderDispatcher;

public record jx(
   OrderedRenderCommandQueueImpl submitNodeStorage,
   Immediate bufferSource,
   OutlineVertexConsumerProvider outlineBufferSource,
   Immediate crumblingBufferSource,
   RenderDispatcher featureRenderDispatcher,
   kJ textBatch
) {
   private static final long a = gb.aYR(4057888368728632929L, 4351856996389973477L, MethodHandles.lookup().lookupClass()).a(241857473023105L);

   public jx(
      OrderedRenderCommandQueueImpl submitNodeStorage,
      Immediate bufferSource,
      OutlineVertexConsumerProvider outlineBufferSource,
      Immediate crumblingBufferSource,
      RenderDispatcher featureRenderDispatcher,
      kJ textBatch
   ) {
      long var7 = a ^ 117487170915455L;
      super();
      ju.bGn();
      this.submitNodeStorage = submitNodeStorage;
      this.bufferSource = bufferSource;

      try {
         this.outlineBufferSource = outlineBufferSource;
         this.crumblingBufferSource = crumblingBufferSource;
         this.featureRenderDispatcher = featureRenderDispatcher;
         this.textBatch = textBatch;
         if (iS.bwL() == null) {
            ju.bGm("o0ip8");
         }
      } catch (MatchException var10) {
         throw a(var10);
      }
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }
}
