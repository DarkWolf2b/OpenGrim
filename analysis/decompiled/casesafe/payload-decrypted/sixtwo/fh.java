package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fh extends gg {
   cC aYWtO;
   cA bQVAY;
   ol nJGrs;
   private static long ZCUlU;
   private static String NXMEC;
   private static long[] Iwfrf;
   private static Integer[] wouum;
   private static Map KDvfW;

   @hG
   public native void aJg(hw$tv var1);

   private static native String aJi(byte[] var0);

   private static native int aJj(int var0, long var1);

   @hG
   public native void aJf(gH$th var1);

   private static native int aJk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aJl(Lookup var0, String var1, MethodType var2);

   private static native MatchException aJh(MatchException var0);

   public fh() {
      long var1 = ZCUlU ^ 89779190563974L;
      super(gf.aZL(139, false, gh.xwjCw));
      int[] var10004 = new int[11];
      var10004[0] = 84;
      var10004[1] = 97;
      var10004[2] = 114;
      var10004[3] = 103;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 83;
      var10004[8] = 108;
      var10004[9] = 111;
      var10004[10] = 116;
      this.aYWtO = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0);
      var10004 = new int[12];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 117;
      var10004[4] = 114;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.bQVAY = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(NXMEC);
      this.nJGrs = new ol(this);
   }

   static {
      Loader.doInit(fh.class);
      _b58c3a1e6fcffbd8ed7b7af2a9e6b5d0();
   }

   private static native void _b58c3a1e6fcffbd8ed7b7af2a9e6b5d0();
}
