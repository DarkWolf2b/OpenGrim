package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class aT extends az {
   private static float neTon;
   private static float xNvRr;
   private final rk dETbP;
   private final ri hbCCQ;
   private final kW zGBCZ;
   private boolean tzvyR;
   private boolean ecHlG;
   private static long HjqKT;
   private static String kgKhi;
   private static long[] iFifw;
   private static Integer[] qtMBd;
   private static Map ukivL;

   public aT() {
      long var1 = HjqKT ^ 56841594492011L;
      super();
      this.dETbP = new rk(za<"v">(4127, 2187395163775871752L ^ var1));
      this.hbCCQ = new ri(za<"v">(24135, 6988600315378951505L ^ var1));
      this.zGBCZ = new kW(mG.UhgnI, mG.UhgnI);
   }

   static {
      Loader.doInit(aT.class);
      _292906081032bf46121a3a79a384cbfd();
   }

   private static native CallSite za(Lookup var0, String var1, MethodType var2);

   private static native void _292906081032bf46121a3a79a384cbfd();

   @Override
   protected native void bV(lC var1);

   public native aT yV(boolean var1, boolean var2);

   private static native MatchException yW(MatchException var0);

   private static native int yY(int var0, long var1);

   private static native String yX(byte[] var0);

   private static native int yZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
