package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.util.math.BlockPos;

public class gS extends hH {
   private BlockState XpgmN;
   private BlockPos dxjVh;

   public gS(BlockState var1, BlockPos var2) {
      this.XpgmN = var1;
      this.dxjVh = var2;
   }

   public void bci(BlockState var1) {
      this.XpgmN = var1;
   }

   public BlockState bcg() {
      return this.XpgmN;
   }

   public BlockPos bch() {
      return this.dxjVh;
   }
}
