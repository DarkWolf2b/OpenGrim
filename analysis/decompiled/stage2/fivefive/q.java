package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class q {
   private String YGtOZ;
   private static int hNLkf;
   private static long danVV;
   private static String[] McKMT;
   private static String[] urjdw;
   private static Map dIxYJ;
   private static long[] NDoVz;
   private static Integer[] RUzQi;
   private static Map cOaym;

   public q() {
   }

   static {
      Loader.doInit(q.class);
      _f954973078b6e2ded2ad10d9cec0870e();
   }

   @Override
   public native boolean equals(Object var1);

   @Override
   public native String toString();

   @Override
   public native int hashCode();

   private static native int cK(int var0, long var1);

   private static native CallSite cJ(Lookup var0, String var1, MethodType var2);

   public native void cy(Object[] var1);

   public static native int cD();

   public native void cA(Object[] var1);

   public static native void cC(int var0);

   private static native RuntimeException cF(RuntimeException var0);

   private static native int cL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native String cz(Object[] var1);

   public static native int cE();

   private static native String cH(int var0, long var1);

   private static native CallSite cM(Lookup var0, String var1, MethodType var2);

   protected native boolean cB(Object[] var1);

   private static native Object cI(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String cG(byte[] var0);

   private static native void _f954973078b6e2ded2ad10d9cec0870e();
}
