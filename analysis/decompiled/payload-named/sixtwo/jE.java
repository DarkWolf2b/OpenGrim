package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.util.BufferAllocator;

public final class jE {
   private static void bHv(Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> var0, RenderLayer var1) {
      var0.put(var1, new BufferAllocator(var1.getExpectedBufferSize()));
   }

   public static void bHu(Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> var0) {
      bHv(var0, RenderLayers.armorEntityGlint());
      bHv(var0, RenderLayers.glint());
      bHv(var0, RenderLayers.glintTranslucent());
      bHv(var0, RenderLayers.entityGlint());
   }
}
