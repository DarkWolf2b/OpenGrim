package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class w implements x {
   private static String sCzpy;
   private static long ezhGQ;
   private static String[] anREj;
   private static String[] zeWWJ;
   private static Map lvYMG;
   private static long[] SYAMb;
   private static Integer[] shRkt;
   private static Map jdFeZ;

   public w() {
   }

   static {
      Loader.doInit(w.class);
      _98bccc1bc6ad34c8b7d01a389b097aba();
   }

   @Override
   public native void a();

   private static native CallSite ee(Lookup var0, String var1, MethodType var2);

   private static native int ec(int var0, long var1);

   private static native int ed(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object ea(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native boolean dU(Object[] var0) throws Throwable;

   public static native String dW();

   private static native Throwable dX(Throwable var0);

   public static native void dV(String var0);

   private static native String dY(byte[] var0);

   private static native byte[] dT(Object[] var0);

   private static native String dZ(int var0, long var1);

   private static native CallSite eb(Lookup var0, String var1, MethodType var2);

   private static native void _98bccc1bc6ad34c8b7d01a389b097aba();
}
