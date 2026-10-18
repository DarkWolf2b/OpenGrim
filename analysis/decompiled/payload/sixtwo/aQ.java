package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Consumer;
import java.util.function.Supplier;
import native.Loader;

public class aQ extends az {
   private static float hreJU;
   private static float eHeVG;
   private static float RdBvg;
   private static float XLRfk;
   private static float OSudz;
   private final rk dBTyX;
   private final rk ydHvt;
   private final rk GRHtk;
   private final rk uEFtu;
   private final Supplier<pF> EisLc;
   private final Consumer<pF> GVlEe;
   private final lc lGyOR;
   private final lc GDfoc;
   private static long vagoX;
   private static long[] CTEUW;
   private static Integer[] XGqWO;
   private static Map oONiw;

   public aQ(Supplier<pF> var1, Consumer<pF> var2) {
      long var3 = vagoX ^ 21712322559505L;
      super();
      this.dBTyX = new rk(xU<"g">(15972, 2906541966459250013L ^ var3)).dhs(rj.UPXqT);
      this.ydHvt = new rk(xU<"g">(13342, 7051098414270754598L ^ var3)).dhs(rj.UPXqT);
      this.GRHtk = new rk(xU<"g">(13342, 7051098414270754598L ^ var3)).dhs(rj.UPXqT);
      this.uEFtu = new rk(xU<"g">(13342, 7051098414270754598L ^ var3)).dhs(rj.UPXqT);
      this.lGyOR = new lc(0.0F, 0.0F, 0.0F, 0.0F);
      this.GDfoc = new lc(0.0F, 0.0F, 0.0F, 0.0F);
      this.EisLc = var1;
      this.GVlEe = var2;
   }

   static {
      Loader.doInit(aQ.class);
      _1c050f99bf3b127a20c32d9ec8cc6a4b();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private static native void _1c050f99bf3b127a20c32d9ec8cc6a4b();

   @Override
   protected native void bV(lC var1);

   public native float xO();

   private static native MatchException xR(MatchException var0);

   private static native int xT(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native float xQ(lq var1, String var2, float var3);

   private static native int xS(int var0, long var1);

   private native void xP(lC var1, lq var2, lc var3, pF var4, lf var5, float var6, float var7);

   private static native CallSite xU(Lookup var0, String var1, MethodType var2);
}
