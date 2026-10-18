package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class r {
   private final String hkClQ;
   private final String pbtLI;
   private final String pmAgt;
   private static String tdhSN;
   private static long pdlSE;
   private static String[] ATxeU;
   private static String[] cyhpF;
   private static Map BjZBT;
   private static long[] hHJLd;
   private static Integer[] RfhVi;
   private static Map HjbBo;

   public r(String var1, String var2, String var3) {
      this.hkClQ = var1;
      this.pbtLI = var2;
      this.pmAgt = var3;
   }

   static {
      Loader.doInit(r.class);
      _082f438db36a3c8c8784360088999ac6();
   }

   @Override
   public native boolean equals(Object var1);

   @Override
   public native String toString();

   @Override
   public native int hashCode();

   private static native int da(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite db(Lookup var0, String var1, MethodType var2);

   public native String cN(Object[] var1);

   public native String cO(Object[] var1);

   public native String cP(Object[] var1);

   protected native boolean cR(Object[] var1);

   public static native void cS(String var0);

   private static native RuntimeException cU(RuntimeException var0);

   public native String cQ(Object[] var1);

   private static native String cV(byte[] var0);

   public static native String cT();

   private static native String cW(int var0, long var1);

   private static native int cZ(int var0, long var1);

   private static native CallSite cY(Lookup var0, String var1, MethodType var2);

   private static native Object cX(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _082f438db36a3c8c8784360088999ac6();
}
