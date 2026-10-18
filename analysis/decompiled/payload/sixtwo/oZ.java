package sixtwo;

import java.util.function.BooleanSupplier;
import native.Loader;
import net.minecraft.class_1297;

public final class oZ {
   private static ThreadLocal<Integer> LgQsP;
   private static long CtJsB;

   static {
      Loader.doInit(oZ.class);
      _1594225129314a4e9a9c0d42ad8fbeab();
   }

   private static native void _1594225129314a4e9a9c0d42ad8fbeab();

   public static native boolean cMl();

   public static native boolean cMk(class_1297 var0, BooleanSupplier var1);

   private static native MatchException cMn(MatchException var0);
}
