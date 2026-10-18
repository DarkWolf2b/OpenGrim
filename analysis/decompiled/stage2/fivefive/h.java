package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import natives.Loader;

public class h {
   private final int kSMCm;
   private final long VpqYf;
   private final Throwable HdstN;
   private final String UPHqc;
   private final List<String> Ellao;
   private final String UipNM;
   private static int[] iTAua;
   private static long NzomS;
   private static String[] ivoBc;
   private static String[] srACC;
   private static Map otiyl;
   private static long[] FbEov;
   private static Integer[] shemv;
   private static Map tHhVs;

   public native String ay(Object[] var1);

   private native String az(Object[] var1);

   private native String aA(Object[] var1);

   private native String aB(Object[] var1);

   public native void aC(Object[] var1);

   public native int aD(Object[] var1);

   public native long aE(Object[] var1);

   public native Throwable aF(Object[] var1);

   public native String aG(Object[] var1);

   public native List aH(Object[] var1);

   public native String aI(Object[] var1);

   public h(int var1, long var2, Throwable var4, String var5, List<String> var6, String var7) {
      this.kSMCm = var1;
      this.VpqYf = var2;
      this.HdstN = var4;
      this.UPHqc = var5;
      this.Ellao = var6;
      this.UipNM = var7;
   }

   public static native void aJ(int[] var0);

   public static native int[] aK();

   static {
      Loader.doInit(h.class);
      _9e47ba1c6c79b2bfe0db7421cc17e628();
   }

   private static native RuntimeException aL(RuntimeException var0);

   private static native String aM(byte[] var0);

   private static native String aN(int var0, long var1);

   private static native Object aO(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aP(Lookup var0, String var1, MethodType var2);

   private static native int aQ(int var0, long var1);

   private static native int aR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aS(Lookup var0, String var1, MethodType var2);

   private static native void _9e47ba1c6c79b2bfe0db7421cc17e628();
}
