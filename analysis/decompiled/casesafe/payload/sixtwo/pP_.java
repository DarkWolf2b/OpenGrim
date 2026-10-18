package sixtwo;

import native.Loader;
import net.minecraft.class_591;

public final class pP extends qa {
   private static long jTHTm;
   private static String vYCdO;

   public pP() {
      long var1 = jTHTm ^ 136631541659545L;
      super(vYCdO);
   }

   static {
      Loader.doInit(pP.class);
      _30c3ec361429792e2e8e2cfa391fb8d4();
   }

   @Override
   public native pX createInstance();

   private static native String cTI(byte[] var0);

   @Override
   public native void applyPreviewKeyframe(class_591 var1);

   private static native void _30c3ec361429792e2e8e2cfa391fb8d4();
}
