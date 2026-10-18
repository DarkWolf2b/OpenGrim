package sixtwo;

import native.Loader;
import net.minecraft.class_591;

public final class pQ extends qa {
   private static long gCXWd;
   private static String ZrmRi;

   public pQ() {
      long var1 = gCXWd ^ 108091003360583L;
      super(ZrmRi);
   }

   static {
      Loader.doInit(pQ.class);
      _888961dce559f3ba5c0aa51caf2e3526();
   }

   @Override
   public native pX createInstance();

   private static native String cTJ(byte[] var0);

   @Override
   public native void applyPreviewKeyframe(class_591 var1);

   private static native void _888961dce559f3ba5c0aa51caf2e3526();
}
