package sixtwo;

import java.util.function.Supplier;
import native.Loader;

public final class oX {
   private static ThreadLocal<Integer> CgfTI;
   private static long KXLkR;

   static {
      Loader.doInit(oX.class);
      _0e8e51db2b4c6381c538fbd58cdfcac4();
   }

   private static native void _0e8e51db2b4c6381c538fbd58cdfcac4();

   private static native MatchException cLN(MatchException var0);

   public static native <T> T cLL(Supplier<T> var0);

   public static native boolean cLK();
}
