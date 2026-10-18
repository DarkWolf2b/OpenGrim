package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class lY {
   private static long PbnOg;
   private static long[] oxaHl;
   private static Integer[] LETXZ;
   private static Map HwyVF;

   static {
      Loader.doInit(lY.class);
      _5fdd9d51e0aa39ef8f24fe2dafe3a360();
   }

   private static native int cjl(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int cjk(int var0, long var1);

   public static native void cjg();

   private static native MatchException cjj(MatchException var0);

   private static native CallSite cjm(Lookup var0, String var1, MethodType var2);

   private static native void _5fdd9d51e0aa39ef8f24fe2dafe3a360();
}
