package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.class_1309;

public class oO extends oQ<oJ> {
   private static long zqJZQ;

   public oO() {
      super(cJk(null));
   }

   public oO(class_1309 var1) {
      super(cJk(var1));
   }

   static {
      Loader.doInit(oO.class);
      _53f51fbbb307634e59739844064c8b34();
   }

   private static native void _53f51fbbb307634e59739844064c8b34();

   private static native List<oJ> cJk(class_1309 var0);

   private static native MatchException cJl(MatchException var0);
}
