package sixtwo;

import native.Loader;
import net.minecraft.util.math.Vec2f;

public final class mv {
   public float vGEel;
   public float mgoqe;
   public boolean GgKkk;
   public boolean SuYKY;

   public mv(float var1, float var2) {
      this.vGEel = var1;
      this.mgoqe = var2;
   }

   static {
      Loader.doInit(mv.class);
   }

   public native Vec2f cmC();
}
