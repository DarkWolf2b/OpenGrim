package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class s {
   private final String XAuRF;
   private static String WTfCS;
   private static long ykvZp;
   private static String[] AOoWV;
   private static String[] SYwYr;
   private static Map FVDaj;
   private static long[] mTQNC;
   private static Integer[] TWWBX;
   private static Map VxCLM;

   public s(String var1) {
      this.XAuRF = var1;
   }

   static {
      Loader.doInit(s.class);
      _5fb6f4801c1500007801efb7f2190cd5();
   }

   @Override
   public native boolean equals(Object var1);

   @Override
   public native String toString();

   @Override
   public native int hashCode();

   public native String dc(Object[] var1);

   private static native int dn(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite dl(Lookup var0, String var1, MethodType var2);

   private static native String di(byte[] var0);

   private static native RuntimeException dh(RuntimeException var0);

   public static native void df(String var0);

   private static native int dm(int var0, long var1);

   private static native Object dk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite do(Lookup var0, String var1, MethodType var2);

   protected native boolean de(Object[] var1);

   private static native void _5fb6f4801c1500007801efb7f2190cd5();

   public static native String dg();

   public native String dd(Object[] var1);

   private static native String dj(int var0, long var1);
}
