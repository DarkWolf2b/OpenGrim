package sixtwo;

import native.Loader;
import net.minecraft.client.render.entity.model.PlayerEntityModel;

public abstract class qa implements pY {
   private final String aWHCP;
   private static String[] fOgTO;
   private static long JCLVB;

   protected qa(String var1) {
      this.aWHCP = var1;
   }

   static {
      Loader.doInit(qa.class);
      _44afa7c9f56966ebc7f3f497ba8783bb();
   }

   @Override
   public final native String id();

   public static native void cUd(String[] var0);

   public static native String[] cUe();

   private static native MatchException cUf(MatchException var0);

   @Override
   public native void applyPreviewKeyframe(PlayerEntityModel var1);

   private static native void _44afa7c9f56966ebc7f3f497ba8783bb();
}
