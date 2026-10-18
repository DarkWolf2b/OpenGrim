package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Supplier;
import native.Loader;
import oshi.util.Memoizer;

public class rt$wh {
   private final Supplier<String> iWRiX = Memoizer.memoize(rt$wh::dzk);
   private final Supplier<String> LUzGX = Memoizer.memoize(rt$wh::dzl);
   private final Supplier<String> OgFhW = Memoizer.memoize(rt$wh::dzm);
   private final Supplier<String> ZydwF = Memoizer.memoize(rt$wh::dzn);
   private static long ALlKg;
   private static String[] jLkEN;
   private static String[] YeNSy;
   private static Map EHCKd;

   static {
      Loader.doInit(rt$wh.class);
      _3e7728c6d4562940e961af0616108775();
   }

   private static native String dzm();

   private static native String dzk();

   private static native String dzl();

   public native String dzp();

   public native String dzq();

   public native String dzr(boolean var1);

   private static native Object dzv(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native String dzo();

   private static native String dzu(int var0, long var1);

   private static native String dzn();

   private static native MatchException dzs(MatchException var0);

   private static native String dzt(byte[] var0);

   private static native CallSite dzw(Lookup var0, String var1, MethodType var2);

   private static native void _3e7728c6d4562940e961af0616108775();
}
