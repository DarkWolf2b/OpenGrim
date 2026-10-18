package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

public record oz(BlockPos blockPos, BlockHitResult blockHitResult) {
   private static String[] a;

   static {
      if (b() != null) {
         b(new String[2]);
      }
   }

   public static String[] b() {
      return a;
   }

   public static void b(String[] var0) {
      a = var0;
   }

   public BlockState blockState() {
      return rD.dlmvG.world.getBlockState(this.blockPos);
   }

   public Vec3d hitPoint() {
      return this.blockHitResult.getPos();
   }
}
