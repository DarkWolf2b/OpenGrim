package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dV extends gg {
   private final cC iNKRn;
   private int gShhH;
   private static long pPdLC;
   private static String HnRzm;
   private static long[] iuIKj;
   private static Integer[] zwVyv;
   private static Map NlXtA;

   private static native void _f41f24ca18273d66e52f46718dd5f912();

   public dV() {
      long var1 = pPdLC ^ 107314836984790L;
      super(gf.aZL(53, false, gh.qBzlZ));
      this.iNKRn = new cC(
            this,
            mr.clS(
               new int[]{
                  70, 79, 86
               }
            )
         )
         .Vy(1.0)
         .Vw(30.0)
         .Vx(150.0)
         .VA(90.0)
         .Vz(HnRzm);
      this.gShhH = 70;
   }

   static {
      Loader.doInit(dV.class);
      _f41f24ca18273d66e52f46718dd5f912();
   }

   public native cC aqd();

   @Override
   public native void aaj();

   public native int aqe();

   private static native String aqg(byte[] var0);

   private static native MatchException aqf(MatchException var0);

   private static native int aqi(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aqh(int var0, long var1);

   private static native CallSite aqj(Lookup var0, String var1, MethodType var2);

   @Override
   public native void YO();
}
