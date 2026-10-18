package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.file.Path;
import java.util.Map;
import java.util.Optional;
import native.Loader;

public class iY {
   private static long YDKhe;
   private static String[] zULzJ;
   private static String[] OmWGy;
   private static Map YUgmI;

   static {
      Loader.doInit(iY.class);
      _4ffb8f50e653e19b186ba14bd9ff99ab();
   }

   public static native boolean bya();

   public static native boolean bxY();

   public static native void bye(String var0);

   public static native void byg(Class<?> var0);

   public static native boolean byb();

   private static native String byj(byte[] var0);

   private static native String byk(int var0, long var1);

   private static native CallSite bym(Lookup var0, String var1, MethodType var2);

   private static native Object byl(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native boolean bxZ();

   public static native Optional<Path> byd(String var0);

   private static native ClassNotFoundException byi(ClassNotFoundException var0);

   public static native String bxX();

   public static native boolean byc(String var0);

   public static native void byf(String var0);

   private static native void _4ffb8f50e653e19b186ba14bd9ff99ab();
}
