package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Supplier;
import native.Loader;
import oshi.util.Memoizer;
import oshi.util.tuples.Pair;

public class rt$wf {
   private final Supplier<Pair<String, String>> uVYHQ = Memoizer.memoize(rt$wf::dyO);
   private final Supplier<Pair<String, String>> kWSVo = Memoizer.memoize(rt$wf::dyP);
   private static long nvNsN;
   private static String[] quYMT;
   private static String[] egEjI;
   private static Map sXedh;

   static {
      Loader.doInit(rt$wf.class);
      _ab3338895fe338557a84ecb14a3c6a1c();
   }

   private static native String dyQ();

   public native String dyS();

   public native String dyU(boolean var1);

   private static native String dyX(int var0, long var1);

   public native String dyT();

   private static native Pair<String, String> dyP();

   private static native Pair<String, String> dyO();

   private static native MatchException dyV(MatchException var0);

   private static native String dyW(byte[] var0);

   private static native CallSite dyZ(Lookup var0, String var1, MethodType var2);

   public native String dyR();

   private static native Object dyY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _ab3338895fe338557a84ecb14a3c6a1c();
}
