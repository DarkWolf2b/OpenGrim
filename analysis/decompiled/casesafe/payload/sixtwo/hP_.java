package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class hP {
   private static long kLlEH;
   private static String[] rcZSe;
   private static String[] jHaUf;
   private static Map rfCXf;

   static {
      Loader.doInit(hP.class);
      _e0f3161248b7711ce6ad0a0ff262febd();
   }

   private static native void _e0f3161248b7711ce6ad0a0ff262febd();

   public native hZ beC();

   private static native String beG(byte[] var0);

   private static native MatchException beF(MatchException var0);

   private static native Object beI(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite beJ(Lookup var0, String var1, MethodType var2);

   private static native String beH(int var0, long var1);
}
