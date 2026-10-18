package sixtwo;

import native.Loader;
import net.minecraft.client.render.entity.model.PlayerEntityModel;

public final class pR extends qa {
   private static long ebYym;
   private static String RpCnE;

   public pR() {
      long var1 = ebYym ^ 50498933115855L;
      super(RpCnE);
   }

   static {
      Loader.doInit(pR.class);
      _a3fc9423ef433933fac5956e093b555c();
   }

   @Override
   public native pX createInstance();

   private static native String cTK(byte[] var0);

   @Override
   public native void applyPreviewKeyframe(PlayerEntityModel var1);

   private static native void _a3fc9423ef433933fac5956e093b555c();
}
