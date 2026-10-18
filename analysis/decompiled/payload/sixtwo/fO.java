package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fO extends gg {
   static qn BkQJI;
   private static long RaFvq;
   private static String[] ofIip;
   private static String[] lEAyT;
   private static Map vWbJl;
   private static long JLbAF;
   private static long zATNU;

   public fO() {
      long var1 = RaFvq ^ 78226410407427L;
      super(gf.aZL((int)JLbAF, true, gh.KfAlY));
   }

   static {
      Loader.doInit(fO.class);
      _f119d8f6a1bb3ad0f1fb0c30292c429a();
   }

   @Override
   public native void aaj();

   private static native String aWm(int var0, long var1);

   private static native CallSite aWo(Lookup var0, String var1, MethodType var2);

   private static native MatchException aWk(MatchException var0);

   private static native String aWl(byte[] var0);

   private native void aWj();

   private static native Object aWn(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _f119d8f6a1bb3ad0f1fb0c30292c429a();

   @Override
   public native void YO();
}
