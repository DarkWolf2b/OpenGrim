package sixtwo;

import net.minecraft.util.math.random.Random;
import net.minecraft.util.math.random.RandomSplitter;

class mk$uI$wj implements RandomSplitter {
   final mk$uI ZKdRM;

   mk$uI$wj(mk$uI var1) {
      this.ZKdRM = var1;
   }

   @Override
   public Random split(String seed) {
      return this.ZKdRM.dIXSX;
   }

   @Override
   public Random split(int x, int y, int z) {
      return this.ZKdRM.dIXSX;
   }

   @Override
   public Random split(long seed) {
      return this.ZKdRM.dIXSX;
   }

   @Override
   public void addDebugInfo(StringBuilder info) {
   }
}
