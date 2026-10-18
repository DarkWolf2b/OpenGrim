package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec3d;

public class op extends os {
   static {
      Loader.doInit(op.class);
   }

   @Override
   public native Vec3d cFU();

   @Override
   public native ov cFT(ov var1, ov var2, Entity var3);
}
