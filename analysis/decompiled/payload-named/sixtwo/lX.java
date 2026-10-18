package sixtwo;

import java.io.File;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class lX {
   private static String jCYpF;
   private static long NygCJ;
   private static String[] fejko;
   private static String[] mUMiA;
   private static Map TIamb;
   private static long jHJXO;

   static {
      Loader.doInit(lX.class);
      _0fb2052426535810ba11092739fc8b46();
   }

   private static native Object cje(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void ciZ(String var0);

   private static native boolean ciY(File var0);

   private static native String cjc(byte[] var0);

   private static native CallSite cjf(Lookup var0, String var1, MethodType var2);

   public static native void ciX();

   private static native String cjd(int var0, long var1);

   private static native Throwable cjb(Throwable var0);

   public static native String cja();

   private static native void _0fb2052426535810ba11092739fc8b46();
}
