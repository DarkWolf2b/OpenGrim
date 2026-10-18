/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.BufferBuilder
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import net.minecraft.client.render.BufferBuilder;
import org.joml.Matrix3x2fStack;
import sixtwo.la;
import sixtwo.mG;

public interface kc {
    public void uv_quad_region_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, float var10, mG var11);

    public void uv_quad(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6);

    public void quad(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6);

    public void quad_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, mG var7);

    public void quad_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, la var7);

    public void uv_quad_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, mG var7);
}

