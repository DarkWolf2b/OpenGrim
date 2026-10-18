package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

record fb$sM(BlockPos railPos, BlockHitResult cartHitResult, List<Vec3d> arrowPath) {
   static {
      Loader.doInit(fb$sM.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native List<Vec3d> arrowPath();

   public native BlockPos railPos();

   public native BlockHitResult cartHitResult();
}
