package sixtwo;

import net.minecraft.util.math.random.Random;
import net.minecraft.util.math.random.RandomSplitter;

class mk$uI implements Random {
   final Random dIXSX;

   mk$uI(Random var1) {
      this.dIXSX = var1;
   }

   @Override
   public void setSeed(long seed) {
   }

   @Override
   public Random split() {
      return this;
   }

   @Override
   public int nextInt() {
      return 0;
   }

   @Override
   public RandomSplitter nextSplitter() {
      return new mk$uI$wj(this);
   }

   @Override
   public boolean nextBoolean() {
      return false;
   }

   @Override
   public int nextInt(int bound) {
      return 0;
   }

   @Override
   public float nextFloat() {
      return 0.0F;
   }

   @Override
   public long nextLong() {
      return 0L;
   }

   @Override
   public double nextDouble() {
      return 0.0;
   }

   @Override
   public double nextGaussian() {
      return 0.0;
   }
}
