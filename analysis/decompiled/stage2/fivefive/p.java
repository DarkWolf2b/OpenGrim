package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import natives.Loader;

public class p {
   private String Oxwqs;
   private static int ZAlbA;
   private static long pjGBl;
   private static String[] SHFby;
   private static String[] wChbX;
   private static Map siUaj;
   private static long[] AmLpV;
   private static Integer[] phapE;
   private static Map ziDJP;

   public p() {
   }

   static {
      Loader.doInit(p.class);
      _4197f3747c32c88c6cae9b28955615d4();
   }

   private static native String cs(int var0, long var1);

   @Override
   public native boolean equals(Object var1);

   @Override
   public native String toString();

   @Override
   public native int hashCode();

   private static native String cr(byte[] var0);

   public native void cl(Object[] var1);

   public static native void cn(int var0);

   private static native Object ct(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native void cj(Object[] var1);

   public static native int cp();

   private static native int cv(int var0, long var1);

   public native String ck(Object[] var1);

   private static native int cw(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite cu(Lookup var0, String var1, MethodType var2);

   private static native CallSite cx(Lookup var0, String var1, MethodType var2);

   public static native int co();

   protected native boolean cm(Object[] var1);

   private static native void _4197f3747c32c88c6cae9b28955615d4();

   private static native RuntimeException cq(RuntimeException var0);
}
