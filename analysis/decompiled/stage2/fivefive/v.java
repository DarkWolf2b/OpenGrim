package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class v implements x {
   private static String[] VhjVf;
   private static long jNVEk;
   private static long[] uajXJ;
   private static Integer[] AAyAa;
   private static Map lSEWz;

   private static native RuntimeException dP(RuntimeException var0);

   private static native int dQ(int var0, long var1);

   public v() {
   }

   static {
      Loader.doInit(v.class);
      _1b61daa180ac944c55de80e35114346f();
   }

   @Override
   public native void a();

   private static native CallSite dS(Lookup var0, String var1, MethodType var2);

   public static native String[] dO();

   public static native void dN(String[] var0);

   public static native String dK(Object[] var0);

   private static native int dR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _1b61daa180ac944c55de80e35114346f();
}
