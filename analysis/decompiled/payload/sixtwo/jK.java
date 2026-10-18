package sixtwo;

import org.joml.Matrix4f;

public final class jK {
   public static final float qAijK = 0.05F;

   public static Matrix4f bIF(float var0, float var1, float var2) {
      return new Matrix4f().setPerspective((float)Math.toRadians(var0), var1, 0.05F, var2);
   }
}
