package sixtwo;

import native.Loader;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;

record fd$sO(BlockPos dripstonePos, BlockPos trapdoorPos, BlockHitResult placeHitResult, boolean secondaryUse) {
   static {
      Loader.doInit(fd$sO.class);
   }

   @Override
   public final native boolean equals(Object var1);

   @Override
   public final native String toString();

   @Override
   public final native int hashCode();

   public native BlockPos dripstonePos();

   public native BlockPos trapdoorPos();

   public native boolean secondaryUse();

   public native BlockHitResult placeHitResult();
}
