package main;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;

public class Loader {
   private static String b;
   private static long a;
   private static long[] c;
   private static Integer[] d;
   private static Map e;

   public Loader() {
   }

   static {
      natives.Loader.doInit(Loader.class);
      _a8270140e7e75fa693c35fba85e6a8f4();
   }

   public static native String b();

   public static native void b(String var0);

   private static native CallSite a(Lookup var0, String var1, MethodType var2);

   private static native int a(int var0, long var1);

   private static native int a(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Exception a(Exception var0);

   public native void init();

   public native void postInit();

   private static native void _a8270140e7e75fa693c35fba85e6a8f4();
}
