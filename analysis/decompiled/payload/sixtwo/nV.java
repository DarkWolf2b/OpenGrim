package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;
import native.Loader;

public class nV {
   private static AtomicBoolean ZRQVq;
   private static boolean XtQRI;
   private static long CjJHQ;
   private static String[] SbLkr;
   private static String[] GPiTb;
   private static Map hrVUg;

   static {
      Loader.doInit(nV.class);
      _96420263d4091209bc37877a539d08f6();
   }

   private static native String cAe(int var0, long var1);

   private static native Object cAf(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite cAg(Lookup var0, String var1, MethodType var2);

   public static native void czN(int var0, Throwable var1);

   public static native Throwable czP(int var0, Throwable var1);

   public static native boolean czQ(Throwable var0);

   public static native Throwable czR(Throwable var0);

   private static native nS czT(Throwable var0);

   private static native String czV();

   private static native String czW();

   public static native void czM();

   public static native void czO(Throwable var0);

   public static native Throwable czS(Throwable var0);

   public static native boolean cAa();

   public static native boolean cAb();

   private static native nS cAc(nS var0);

   private static native List<String> czU();

   public static native void czZ(boolean var0);

   private static native String cAd(byte[] var0);

   private static native void _96420263d4091209bc37877a539d08f6();
}
