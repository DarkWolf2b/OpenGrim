/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.textures.FilterMode
 *  net.minecraft.client.gl.GpuSampler
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.FilterMode;
import net.minecraft.client.gl.GpuSampler;
import sixtwo.iS;

public final class lt {
    private static iS[] lwCsg;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        if (lt.cbc() != null) {
            lt.cbb(new iS[5]);
        }
    }

    public static iS[] cbc() {
        return lwCsg;
    }

    public static GpuSampler caX() {
        return RenderSystem.getSamplerCache().get(FilterMode.LINEAR);
    }

    public static GpuSampler caW(boolean bl2) {
        return RenderSystem.getSamplerCache().getRepeated(FilterMode.LINEAR, bl2);
    }

    public static GpuSampler caZ(boolean bl2) {
        return RenderSystem.getSamplerCache().getRepeated(FilterMode.NEAREST, bl2);
    }

    public static GpuSampler cba() {
        return RenderSystem.getSamplerCache().get(FilterMode.NEAREST);
    }

    public static GpuSampler caY(boolean bl2) {
        return RenderSystem.getSamplerCache().get(FilterMode.LINEAR, bl2);
    }

    public static void cbb(iS[] iSArray) {
        lwCsg = iSArray;
    }
}

