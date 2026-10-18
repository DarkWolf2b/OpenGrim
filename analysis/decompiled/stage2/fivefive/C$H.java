package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Supplier;
import natives.Loader;
import oshi.util.Memoizer;
import oshi.util.tuples.Quartet;

public class C$H {
   private final Supplier<Quartet<String, String, String, String>> jprWH = Memoizer.memoize(C$H::fN);
   private static String KcftU;
   private static long xAIdP;
   private static String[] bpgwf;
   private static String[] AIsbR;
   private static Map NyGQJ;

   public C$H() {
   }

   static {
      Loader.doInit(C$H.class);
      _71102641d62c0dc3c2174ec88b736c0c();
   }

   private static native void _71102641d62c0dc3c2174ec88b736c0c();

   private static native RuntimeException fQ(RuntimeException var0);

   private static native Quartet<String, String, String, String> fN();

   private static native String fS(int var0, long var1);

   public static native void fO(String var0);

   public static native String fP();

   private static native String fR(byte[] var0);

   private static native Object fT(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite fU(Lookup var0, String var1, MethodType var2);

   public native String fM(Object[] var1);
}
