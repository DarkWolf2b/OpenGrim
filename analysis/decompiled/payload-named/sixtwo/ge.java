package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;

public class ge {
   private Map<Class<? extends gg>, gg> apUTc;
   private static boolean ETFQC;
   private static long VYEoF;
   private static String[] tNmEx;
   private static String[] SYVIY;
   private static Map gPDHA;
   private static long[] SOFUQ;
   private static Integer[] tqrBW;
   private static Map XnczB;

   static {
      Loader.doInit(ge.class);
      _a98ef9fceb6c88f8af19b70052dc846c();
   }

   public native fo aZv();

   public native void aZu(gg var1);

   private static native String aZF(int var0, long var1);

   private static native int aZI(int var0, long var1);

   private native void aZs();

   private static native Object aZG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aZJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG(
      priority = mw.CRITICAL
   )
   public native void aZt(gA var1);

   public native gg aZy(int var1);

   public native Map<Class<? extends gg>, gg> aZz();

   public static native boolean aZC();

   private static native String aZE(byte[] var0);

   public native List<gg> aZw(Predicate<gg> var1);

   private static native CallSite aZH(Lookup var0, String var1, MethodType var2);

   public native void aZq(String var1);

   private native void aZr(String var1);

   public static native void aZA(boolean var0);

   public static native boolean aZB();

   private static native Exception aZD(Exception var0);

   private static native CallSite aZK(Lookup var0, String var1, MethodType var2);

   private static native void _a98ef9fceb6c88f8af19b70052dc846c();

   public <T extends gg> T aZx(Class<T> var1) {
      return (T)var1.cast(this.apUTc.get(var1));
   }
}
