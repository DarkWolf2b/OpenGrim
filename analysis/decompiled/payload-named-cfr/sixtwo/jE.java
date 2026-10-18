/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap
 *  net.minecraft.client.render.RenderLayer
 *  net.minecraft.client.render.RenderLayers
 *  net.minecraft.client.util.BufferAllocator
 */
package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.util.BufferAllocator;

public final class jE {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static void bHv(Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> object2ObjectLinkedOpenHashMap, RenderLayer renderLayer) {
        object2ObjectLinkedOpenHashMap.put((Object)renderLayer, (Object)new BufferAllocator(renderLayer.getExpectedBufferSize()));
    }

    public static void bHu(Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> object2ObjectLinkedOpenHashMap) {
        jE.bHv(object2ObjectLinkedOpenHashMap, RenderLayers.armorEntityGlint());
        jE.bHv(object2ObjectLinkedOpenHashMap, RenderLayers.glint());
        jE.bHv(object2ObjectLinkedOpenHashMap, RenderLayers.glintTranslucent());
        jE.bHv(object2ObjectLinkedOpenHashMap, RenderLayers.entityGlint());
    }
}

