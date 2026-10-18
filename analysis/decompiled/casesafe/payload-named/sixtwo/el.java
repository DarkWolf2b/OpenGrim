package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class el extends gg {
   private static long zseOG;
   private static long[] XPejI;
   private static Integer[] fDoMv;
   private static Map ItRIN;

   public el() {
      long var1 = zseOG ^ 10392063716592L;
      super(gf.aZL(ath<"f">(29397, 8117311348553739044L ^ var1), false, gh.xgeEn));
   }

   static {
      Loader.doInit(el.class);
      _e46056dffe9d6e6edddd85a8c13dc18b();
   }

   private native void atc();

   private static native void _e46056dffe9d6e6edddd85a8c13dc18b();

   @hG
   public native void atb(gH$th var1);

   private static native MatchException ate(MatchException var0);

   private static native int atg(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int atf(int var0, long var1);

   private native void atd();

   private static native CallSite ath(Lookup var0, String var1, MethodType var2);
}
