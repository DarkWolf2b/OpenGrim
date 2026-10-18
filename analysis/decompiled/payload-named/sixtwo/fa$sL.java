package sixtwo;

import native.Loader;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

record fa$sL(BlockPos railPos, BlockPos firePos, BlockHitResult cartHitResult, Vec3d shotPoint) {
   static {
      Loader.doInit(fa$sL.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native Vec3d shotPoint();

   public native BlockPos railPos();

   public native BlockPos firePos();

   public native BlockHitResult cartHitResult();
}
