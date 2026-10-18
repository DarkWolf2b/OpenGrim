package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ed extends gg {
   private final cC BpiUS;
   private final cJ HfVsU;
   private static long PQbtp;
   private static String XgLBB;
   private static long[] fokqH;
   private static Integer[] RqWGM;
   private static Map TVqrW;

   public ed() {
      long var1 = PQbtp ^ 24714996094914L;
      super(gf.aZL(74, false, gh.qBzlZ));
      int[] var10004 = new int[8];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 99;
      var10004[7] = 101;
      this.BpiUS = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(4.0).Vx(100.0).VA(4.0).Vz(XgLBB);
      var10004 = new int[7];
      var10004[0] = 78;
      var10004[1] = 111;
      var10004[2] = 32;
      var10004[3] = 67;
      var10004[4] = 108;
      var10004[5] = 105;
      var10004[6] = 112;
      this.HfVsU = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ed.class);
      _a79940e05944d2ef07f1382edf83c8fc();
   }

   @Override
   public native void aaj();

   public native cJ arC();

   public native cC arB();

   private static native void _a79940e05944d2ef07f1382edf83c8fc();

   private static native CallSite arH(Lookup var0, String var1, MethodType var2);

   private static native MatchException arD(MatchException var0);

   private static native int arF(int var0, long var1);

   private static native int arG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String arE(byte[] var0);
}
