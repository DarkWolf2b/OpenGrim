package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Supplier;
import natives.Loader;
import oshi.util.Memoizer;

public class C$I {
   private final Supplier<String> uQALb = Memoizer.memoize(C$I::fW);
   private static int[] AUQAJ;
   private static long CvoLg;
   private static String[] wMzJp;
   private static String[] MRCht;
   private static Map AKKow;

   public C$I() {
   }

   static {
      Loader.doInit(C$I.class);
      _923be697f44ab9103ac59669ad3165f0();
   }

   private static native Object gc(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite gd(Lookup var0, String var1, MethodType var2);

   private static native String ga(byte[] var0);

   private static native String gb(int var0, long var1);

   private static native void _923be697f44ab9103ac59669ad3165f0();

   public static native int[] fY();

   private static native String fW();

   public static native void fX(int[] var0);

   private static native RuntimeException fZ(RuntimeException var0);

   public native String fV(Object[] var1);
}
