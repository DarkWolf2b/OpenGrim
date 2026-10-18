package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class u implements c {
   private static int[] erKTG;
   private static long MGioS;
   private static String[] FasDt;
   private static String[] REzfk;
   private static Map jSuge;
   private static long[] qhnHW;
   private static Integer[] vFknd;
   private static Map uQfxQ;

   public u() {
   }

   static {
      Loader.doInit(u.class);
      _d87dd7d00113e15f3fe759e5a4438d13();
   }

   public static native char dw(Object[] var0);

   public static native boolean dv(Object[] var0);

   private static native byte dz(Object[] var0);

   private static native void _d87dd7d00113e15f3fe759e5a4438d13();

   public static native boolean dx(Object[] var0);

   private static native byte dy(Object[] var0);

   private static native String dD(byte[] var0);

   private static native int dH(int var0, long var1);

   private static native String dE(int var0, long var1);

   private static native CallSite dJ(Lookup var0, String var1, MethodType var2);

   private static native CallSite dG(Lookup var0, String var1, MethodType var2);

   private static native RuntimeException dC(RuntimeException var0);

   private static native int dI(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native int[] dB();

   private static native Object dF(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void dA(int[] var0);
}
