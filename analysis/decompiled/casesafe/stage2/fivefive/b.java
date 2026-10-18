package fivefive;

import java.util.List;
import java.util.Optional;
import natives.Loader;

public class b {
   private static List<d> DecLE;
   private static String VQJaW;

   public b() {
   }

   public native void j(Object[] var1);

   public native Optional k(Object[] var1);

   static {
      Loader.doInit(b.class);
      _cf84acff53055d869410688fa222d853();
   }

   public static native void l(String var0);

   public static native String m();

   private static native RuntimeException n(RuntimeException var0);

   private static native void _cf84acff53055d869410688fa222d853();
}
