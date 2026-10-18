package sixtwo;

import native.Loader;
import net.minecraft.client.render.entity.model.PlayerEntityModel;

public final class pT extends qa {
   private static long IJUuI;
   private static String gXNXY;

   public pT() {
      long var1 = IJUuI ^ 63355491642551L;
      super(gXNXY);
   }

   static {
      Loader.doInit(pT.class);
      _0ecb3d626d60f018c6b822baef33d11e();
   }

   @Override
   public native pX createInstance();

   private static native String cTM(byte[] var0);

   @Override
   public native void applyPreviewKeyframe(PlayerEntityModel var1);

   private static native void _0ecb3d626d60f018c6b822baef33d11e();
}
