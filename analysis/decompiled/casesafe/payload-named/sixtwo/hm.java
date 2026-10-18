package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.shape.VoxelShape;

public class hm extends hH {
   private BlockState LCeGi;
   private BlockPos GvLRo;
   private VoxelShape nmQxT;

   public hm(BlockState var1, BlockPos var2, VoxelShape var3) {
      this.LCeGi = var1;
      this.GvLRo = var2;
      this.nmQxT = var3;
   }

   public void bcS(VoxelShape var1) {
      this.nmQxT = var1;
   }

   public BlockState bcN() {
      return this.LCeGi;
   }

   public BlockPos bcO() {
      return this.GvLRo;
   }

   public VoxelShape bcP() {
      return this.nmQxT;
   }

   public void bcQ(BlockState var1) {
      this.LCeGi = var1;
   }

   public void bcR(BlockPos var1) {
      this.GvLRo = var1;
   }
}
