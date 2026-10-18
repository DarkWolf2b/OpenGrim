package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.client.network.AbstractClientPlayerEntity;

class hR$tB implements hK {
   private static long jZujz;

   hR$tB(hR var1) {
   }

   static {
      Loader.doInit(hR$tB.class);
      _b6c6e7fddd0c13db92fdbad23f161b50();
   }

   @Override
   public native hJ validate(String var1);

   @Override
   public native List<String> suggestions(String var1);

   private static native void _b6c6e7fddd0c13db92fdbad23f161b50();

   private static native boolean dpz(String var0);

   private static native boolean dpy(String var0, String var1);

   private static native String dpA(AbstractClientPlayerEntity var0);

   private static native MatchException dpB(MatchException var0);
}
