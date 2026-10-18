package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fR extends gg {
   private final ct foDkU;
   private final cu sxltZ;
   private final cu uLWvr;
   private final cC ZvuAA;
   private static long rOGIl;
   private static String ymMTJ;
   private static long[] aChQX;
   private static Integer[] KCbXY;
   private static Map QkNsh;

   public fR() {
      long var1 = rOGIl ^ 12271598854892L;
      super(gf.aZL(103, true, gh.KfAlY));
      int[] var10004 = new int[10];
      var10004[0] = 83;
      var10004[1] = 111;
      var10004[2] = 117;
      var10004[3] = 110;
      var10004[4] = 100;
      var10004[5] = 32;
      var10004[6] = 84;
      var10004[7] = 121;
      var10004[8] = 112;
      var10004[9] = 101;
      this.foDkU = new ct(this, mr.clS(var10004));
      ct var10003 = this.foDkU;
      var10004 = new int[6];
      var10004[0] = 78;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 109;
      var10004[4] = 97;
      var10004[5] = 108;
      this.sxltZ = new cu(var10003, mr.clS(var10004));
      var10003 = this.foDkU;
      var10004 = new int[6];
      var10004[0] = 66;
      var10004[1] = 117;
      var10004[2] = 98;
      var10004[3] = 98;
      var10004[4] = 108;
      var10004[5] = 101;
      this.uLWvr = new cu(var10003, mr.clS(var10004));
      var10004 = new int[12];
      var10004[0] = 83;
      var10004[1] = 111;
      var10004[2] = 117;
      var10004[3] = 110;
      var10004[4] = 100;
      var10004[5] = 32;
      var10004[6] = 86;
      var10004[7] = 111;
      var10004[8] = 108;
      var10004[9] = 117;
      var10004[10] = 109;
      var10004[11] = 101;
      this.ZvuAA = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(70.0).Vz(ymMTJ);
   }

   static {
      Loader.doInit(fR.class);
      _be8876597688c4e993e11acafd73b0dc();
   }

   private static native int aWM(int var0, long var1);

   private static native String aWL(byte[] var0);

   public native cu aWI();

   public native ct aWH();

   public native cu aWJ();

   public native cC aWK();

   private static native CallSite aWO(Lookup var0, String var1, MethodType var2);

   private static native int aWN(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _be8876597688c4e993e11acafd73b0dc();
}
