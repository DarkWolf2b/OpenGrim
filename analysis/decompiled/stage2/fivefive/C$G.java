package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Supplier;
import natives.Loader;
import oshi.util.Memoizer;
import oshi.util.tuples.Pair;

public class C$G {
   private final Supplier<Pair<String, String>> WjnhV = Memoizer.memoize(C$G::fD);
   private static C[] zDiaA;
   private static long waZPW;
   private static String[] ywuKC;
   private static String[] dpKej;
   private static Map VXGjR;

   public C$G() {
   }

   static {
      Loader.doInit(C$G.class);
      _b0ea1080505feec551eba9735a4743b6();
   }

   public static native C[] fG();

   public static native void fF(C[] var0);

   private static native String fE(Object[] var0);

   public native String fB(Object[] var1);

   private static native Pair fC(Object[] var0);

   private static native String fJ(int var0, long var1);

   private static native CallSite fL(Lookup var0, String var1, MethodType var2);

   private static native RuntimeException fH(RuntimeException var0);

   private static native String fI(byte[] var0);

   private static native Pair<String, String> fD();

   private static native Object fK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _b0ea1080505feec551eba9735a4743b6();
}
