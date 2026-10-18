package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class al extends az {
   private final rk YwcCr;
   private final rk bVDav;
   private final Y AAiYe;
   private static long fZIcG;
   private static long[] KtGNT;
   private static Integer[] dqbdU;
   private static Map cEnnF;

   public al() {
      long var1 = fZIcG ^ 67124539685794L;
      super();
      this.YwcCr = new rk(oW<"z">(2131, 7826574004076115188L ^ var1)).dhs(rj.UPXqT);
      this.bVDav = new rk(oW<"z">(20498, 6406283320102300852L ^ var1)).dhs(rj.UPXqT);
      this.AAiYe = new Y().kf(lE.WTzbi.bYM(8.0F)).kg(bl.Ex().EB().wp().vD()).ki(5.0F).kj(oW<"z">(20498, 6406283320102300852L ^ var1)).kk(rj.UPXqT);
   }

   static {
      Loader.doInit(al.class);
      _bf34f1a8893d163f659ad88c81e89d47();
   }

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native void _bf34f1a8893d163f659ad88c81e89d47();

   public native rk oQ();

   public native rk oR();

   public native Y oS();

   private static native CallSite oW(Lookup var0, String var1, MethodType var2);

   private static native MatchException oT(MatchException var0);

   private static native int oU(int var0, long var1);

   private static native int oV(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
