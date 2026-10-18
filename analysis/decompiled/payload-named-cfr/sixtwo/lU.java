/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.textures.GpuTexture
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  org.joml.Matrix4f
 */
package sixtwo;

import com.mojang.blaze3d.textures.GpuTexture;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import org.joml.Matrix4f;
import sixtwo.lS;
import sixtwo.lV;
import sixtwo.lW;

public interface lU {
    public void unbindProgram();

    public void copyDepthTexture(GpuTexture var1, GpuTexture var2, int var3, int var4);

    public lW createProgram(VertexFormat var1, lV ... var2);

    public int uniformLocation(lW var1, String var2);

    public void setLineSmoothing(boolean var1);

    public void generateMipmaps(GpuTexture var1);

    public int nativeTextureId(GpuTexture var1);

    public void bindProgram(lW var1);

    public void clearColorBuffer();

    public String name();

    public void setUniform(int var1, float var2, float var3, float var4);

    public void setUniform(int var1, Matrix4f var2);

    public void setUniform(int var1, float var2, float var3);

    public void setUniform(int var1, float var2);

    public void setUniform(int var1, float var2, float var3, float var4, float var5);

    public void setUniform(int var1, float[] var2);

    public void setUniform(int var1, FloatBuffer var2);

    public void setUniform(int var1, int var2);

    public void readPixel(int var1, int var2, ByteBuffer var3);

    public void disableScissor();

    public void copyTextureToTexture(GpuTexture var1, GpuTexture var2, int var3, int var4, int var5, int var6, int var7, int var8, int var9);

    public lV createShader(byte[] var1, lS var2);

    public void clearColor(float var1, float var2, float var3, float var4);
}

