package sixtwo;

import com.mojang.blaze3d.textures.GpuTexture;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import org.joml.Matrix4f;

public interface lU {
   void unbindProgram();

   void copyDepthTexture(GpuTexture var1, GpuTexture var2, int var3, int var4);

   lW createProgram(VertexFormat var1, lV... var2);

   int uniformLocation(lW var1, String var2);

   void setLineSmoothing(boolean var1);

   void generateMipmaps(GpuTexture var1);

   int nativeTextureId(GpuTexture var1);

   void bindProgram(lW var1);

   void clearColorBuffer();

   String name();

   void setUniform(int var1, float var2, float var3, float var4);

   void setUniform(int var1, Matrix4f var2);

   void setUniform(int var1, float var2, float var3);

   void setUniform(int var1, float var2);

   void setUniform(int var1, float var2, float var3, float var4, float var5);

   void setUniform(int var1, float[] var2);

   void setUniform(int var1, FloatBuffer var2);

   void setUniform(int var1, int var2);

   void readPixel(int var1, int var2, ByteBuffer var3);

   void disableScissor();

   void copyTextureToTexture(GpuTexture var1, GpuTexture var2, int var3, int var4, int var5, int var6, int var7, int var8, int var9);

   lV createShader(byte[] var1, lS var2);

   void clearColor(float var1, float var2, float var3, float var4);
}
