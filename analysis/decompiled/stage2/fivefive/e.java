package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public final class e {
   public static int NhcVM;
   public static int QFKGJ;
   public static int ibysK;
   public static int neWMM;
   public static int zHPxC;
   public static int BAGGT;
   public static int sPafI;
   public static int qvAto;
   public static int yWzlA;
   public static int PiLLx;
   public static int ArGDG;
   public static int SNRBP;
   public static int eDlKs;
   public static String xMnyK;
   public static int OLMaA;
   public static String udnEZ;
   public static String beRmB;
   private static String dyLHs;
   private static long NyhAv;
   private static String[] ZOijb;
   private static String[] vqUKh;
   private static Map jeGzl;

   private e() {
   }

   static {
      Loader.doInit(e.class);
      _34159bc0f9f08bee2d37855054c87d11();
   }

   private static native String B(byte[] var0);

   private static native String C(int var0, long var1);

   private static native Object D(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   static native String x(Object[] var0);

   static native String v(Object[] var0);

   public static native String z();

   static native String w(Object[] var0);

   public static native void y(String var0);

   private static native CallSite E(Lookup var0, String var1, MethodType var2);

   private static native RuntimeException A(RuntimeException var0);

   private static native void _34159bc0f9f08bee2d37855054c87d11();
}
