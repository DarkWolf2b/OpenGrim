/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.OutlineVertexConsumerProvider
 *  net.minecraft.client.render.VertexConsumerProvider$Immediate
 *  net.minecraft.client.render.command.OrderedRenderCommandQueueImpl
 *  net.minecraft.client.render.command.RenderDispatcher
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.OutlineVertexConsumerProvider;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.command.OrderedRenderCommandQueueImpl;
import net.minecraft.client.render.command.RenderDispatcher;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ju;
import sixtwo.kJ;

public record jx(OrderedRenderCommandQueueImpl submitNodeStorage, VertexConsumerProvider.Immediate bufferSource, OutlineVertexConsumerProvider outlineBufferSource, VertexConsumerProvider.Immediate crumblingBufferSource, RenderDispatcher featureRenderDispatcher, kJ textBatch) {
    private static final long a = gb.aYR(4057888368728632929L, 4351856996389973477L, MethodHandles.lookup().lookupClass()).a(241857473023105L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public jx(OrderedRenderCommandQueueImpl orderedRenderCommandQueueImpl, VertexConsumerProvider.Immediate immediate, OutlineVertexConsumerProvider outlineVertexConsumerProvider, VertexConsumerProvider.Immediate immediate2, RenderDispatcher renderDispatcher, kJ kJ2) {
        long l2 = a ^ 0x6ADA9D168C7FL;
        this.submitNodeStorage = orderedRenderCommandQueueImpl;
        this.bufferSource = immediate;
        String string = ju.bGn();
        try {
            this.outlineBufferSource = outlineVertexConsumerProvider;
            this.crumblingBufferSource = immediate2;
            this.featureRenderDispatcher = renderDispatcher;
            this.textBatch = kJ2;
            if (iS.bwL() == null) {
                ju.bGm("o0ip8");
            }
        }
        catch (MatchException matchException) {
            throw jx.a(matchException);
        }
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }
}

