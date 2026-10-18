package sixtwo;

import native.Loader;
import net.minecraft.client.render.entity.model.PlayerEntityModel;

public final class pS extends qa {
   private static long izzuT;
   private static String drfyR;

   public pS() {
      long var1 = izzuT ^ 41306697058850L;
      super(drfyR);
   }

   static {
      Loader.doInit(pS.class);
      _fc259baf34a9df496a9134aa0ed57a74();
   }

   @Override
   public native pX createInstance();

   private static native String cTL(byte[] var0);

   @Override
   public native void applyPreviewKeyframe(PlayerEntityModel var1);

   private static native void _fc259baf34a9df496a9134aa0ed57a74();
}
