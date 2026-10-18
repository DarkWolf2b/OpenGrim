package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class i {
   private static C[] EatEL;
   private static long hrVjp;
   private static String[] sXXoo;
   private static String[] xTWko;
   private static Map hUVeU;

   public i() {
   }

   public static native void aT(Object[] var0);

   public static native void aV(C[] var0);

   public static native C[] aW();

   static {
      Loader.doInit(i.class);
      _d43881e904f804095b064e5ec6cc1161();
   }

   private static native RuntimeException aX(RuntimeException var0);

   private static native String aY(byte[] var0);

   private static native String aZ(int var0, long var1);

   private static native Object ba(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite bb(Lookup var0, String var1, MethodType var2);

   private static native void _d43881e904f804095b064e5ec6cc1161();
}
