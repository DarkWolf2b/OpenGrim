package sixtwo;

import java.util.ArrayList;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import native.Loader;

public class aV extends az {
   private static float oDtke;
   private final List<aS> TBGre;
   private final Map<py, aS> cxvQr;
   private final rk fwoMR;
   private aU jFVar;
   private static long dTZIw;
   private static long OgGNH;

   public aV() {
      long var1 = dTZIw ^ 51789688241960L;
      super();
      this.TBGre = new ArrayList<>();
      this.cxvQr = new IdentityHashMap<>();
      this.fwoMR = new rk((int)OgGNH).dhs(rj.MBpuQ);
   }

   static {
      Loader.doInit(aV.class);
      _974846e1551efaed4a484217fd409839();
   }

   @Override
   public native float dn();

   public native aV zc(aU var1);

   private static native MatchException zf(MatchException var0);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private native void zd(List<py> var1);

   private static native void _974846e1551efaed4a484217fd409839();

   public native aV zb(List<py> var1);
}
