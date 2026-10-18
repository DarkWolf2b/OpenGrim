package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class hS {
   private static long xSYcx;
   private static String[] JQxiM;
   private static String[] BVpcG;
   private static Map pGvFx;

   static {
      Loader.doInit(hS.class);
      _295c28c4cfe2461aeff9e32735025125();
   }

   private static native MatchException bfa(MatchException var0);

   private static native String bfb(byte[] var0);

   private static native String bfc(int var0, long var1);

   public native hZ beX();

   private static native Object bfd(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite bfe(Lookup var0, String var1, MethodType var2);

   private static native void _295c28c4cfe2461aeff9e32735025125();
}
