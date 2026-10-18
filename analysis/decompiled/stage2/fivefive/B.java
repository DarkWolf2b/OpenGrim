package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.net.http.HttpRequest.Builder;
import java.util.Map;
import natives.Loader;

public class B {
   private static String xRuoM;
   private static C[] xxhWN;
   private static long eLUpK;
   private static String[] HTMrv;
   private static String[] bYpre;
   private static Map EPWsc;

   public B() {
   }

   static {
      Loader.doInit(B.class);
      _4c58d112ca745ba20cca3fe7be82693e();
   }

   private static native void _4c58d112ca745ba20cca3fe7be82693e();

   public static native C[] eF();

   public static native void eE(C[] var0);

   private static native String eI(int var0, long var1);

   public static native Builder eC(Object[] var0);

   public static native void eD(Object[] var0);

   private static native CallSite eK(Lookup var0, String var1, MethodType var2);

   private static native String eH(byte[] var0);

   private static native Object eJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native RuntimeException eG(RuntimeException var0);

   public static native boolean eB(Object[] var0);

   public static native String eA(Object[] var0);
}
