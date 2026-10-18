/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.systems.RenderPass
 *  net.minecraft.client.render.BuiltBuffer
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import java.lang.invoke.MethodHandles;
import java.util.function.Consumer;
import net.minecraft.client.render.BuiltBuffer;
import sixtwo.gb;
import sixtwo.lB;
import sixtwo.lC;
import sixtwo.lF;
import sixtwo.lI;
import sixtwo.lN;

record lD(lB renderSpace, RenderPipeline pipeline, BuiltBuffer meshData, Integer vertexCount, Consumer<RenderPass> uniformSetter) implements lI
{
    private static final long a = gb.aYR(-7782313630929861887L, 3835919307989803911L, MethodHandles.lookup().lookupClass()).a(225270233700859L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    lD(lB lB2, RenderPipeline renderPipeline, BuiltBuffer builtBuffer, Consumer<RenderPass> consumer) {
        this(lB2, renderPipeline, builtBuffer, null, consumer);
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    @Override
    public void execute() {
        lD lD2;
        block4: {
            block5: {
                long l2 = a ^ 0x2282A30ADCEEL;
                String[] stringArray = lC.cfk();
                try {
                    try {
                        lD2 = this;
                        if (stringArray != null) break block4;
                        if (lD2.vertexCount != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw lD.a(matchException);
                    }
                    lF.cfT(this.renderSpace, this.pipeline, this.meshData, this.uniformSetter);
                    return;
                }
                catch (MatchException matchException) {
                    throw lD.a(matchException);
                }
            }
            lD2 = this;
        }
        lF.cfO(lD2.renderSpace, this.pipeline, this.meshData, this.vertexCount, this.uniformSetter);
    }

    @Override
    public lN batchKey() {
        return lN.immediate();
    }
}

