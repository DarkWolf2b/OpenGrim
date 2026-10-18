package sixtwo;

import native.Loader;
import net.minecraft.class_1299;

class L$rK extends az {
   private final class_1299<?> QFiUg;
   private final au hokMP;
   private static long ajRbq;

   public L$rK(class_1299<?> var1) {
      this.QFiUg = var1;
      this.hokMP = new au(8.0F);
   }

   static {
      Loader.doInit(L$rK.class);
      _a1cf686d069959edb3f5bdf9a8293eeb();
   }

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private static native void _a1cf686d069959edb3f5bdf9a8293eeb();

   public native au dmE();

   @Override
   protected native void bV(lC var1);

   public native class_1299<?> dmD();

   private static native MatchException dmF(MatchException var0);
}
