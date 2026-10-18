package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;

public class hV {
   private static long CjUfr;
   private static String[] ItxYX;
   private static String[] tMXNc;
   private static Map LnNrY;

   static {
      Loader.doInit(hV.class);
      _9aa1e13785ce9e8c408be64da5d6938f();
   }

   public native hZ bfU();

   private static native Object bgc(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native List<String> bfV();

   private static native CallSite bgd(Lookup var0, String var1, MethodType var2);

   private static native String bga(byte[] var0);

   private static native String bgb(int var0, long var1);

   private static native MatchException bfZ(MatchException var0);

   private static native void _9aa1e13785ce9e8c408be64da5d6938f();
}
