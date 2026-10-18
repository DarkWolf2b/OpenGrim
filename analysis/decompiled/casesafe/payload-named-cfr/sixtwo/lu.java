/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.textures.GpuTexture
 *  net.minecraft.client.gl.Framebuffer
 */
package sixtwo;

import com.mojang.blaze3d.textures.GpuTexture;
import native.Loader;
import net.minecraft.client.gl.Framebuffer;

public final class lu {
    private static long DXIsq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _9ac1c8c582e625bd723ac34124cdc17f();

    public static native void cbf(GpuTexture var0, GpuTexture var1, int var2, int var3, int var4, int var5, int var6, int var7, int var8);

    static {
        Loader.doInit(lu.class);
        lu._9ac1c8c582e625bd723ac34124cdc17f();
    }

    private static native MatchException cbg(MatchException var0);

    public static native void cbd(Framebuffer var0);

    public static native void cbe(GpuTexture var0);
}

