package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eO extends gg {
   private final cD UHgUi;
   private final cC aQBZI;
   private final cJ GzaZR;
   private final cA ecyXJ;
   private final ol vLCax;
   private final mT QiVfT;
   private boolean ARHoZ;
   private static long xDmfA;
   private static long[] xwImt;
   private static Integer[] LFPuL;
   private static Map kperY;
   private static long UGXfF;

   public eO() {
      long var1 = xDmfA ^ 123647598381923L;
      super(gf.aZL(118, false, gh.xwjCw));
      int[] var10004 = new int[14];
      var10004[0] = 65;
      var10004[1] = 99;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 118;
      var10004[5] = 97;
      var10004[6] = 116;
      var10004[7] = 105;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 75;
      var10004[12] = 101;
      var10004[13] = 121;
      this.UHgUi = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[17];
      var10004[0] = 87;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 32;
      var10004[5] = 67;
      var10004[6] = 104;
      var10004[7] = 97;
      var10004[8] = 114;
      var10004[9] = 103;
      var10004[10] = 101;
      var10004[11] = 32;
      var10004[12] = 68;
      var10004[13] = 101;
      var10004[14] = 108;
      var10004[15] = 97;
      var10004[16] = 121;
      this.aQBZI = new cC(this, mr.clS(var10004)).Vy(10.0).Vw(150.0).Vx(500.0).VA(250.0);
      var10004 = new int[11];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 117;
      var10004[4] = 114;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 83;
      var10004[8] = 108;
      var10004[9] = 111;
      var10004[10] = 116;
      this.GzaZR = new cJ(this, mr.clS(var10004)).WE(true);
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
      this.ecyXJ = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0);
      this.vLCax = new ol(this);
      this.QiVfT = mT.cpz();
      this.ecyXJ.Vf(this.GzaZR::WF);
   }

   static {
      Loader.doInit(eO.class);
      _bd3b7df63a6bf9bfb887cf3169c6ebf3();
   }

   private static native void _bd3b7df63a6bf9bfb887cf3169c6ebf3();

   private static native CallSite aBz(Lookup var0, String var1, MethodType var2);

   private static native MatchException aBw(MatchException var0);

   private static native int aBx(int var0, long var1);

   @hG
   public native void aBt(gA var1);

   @hG
   public native void aBu(gv var1);

   @hG
   public native void aBv(gH$th var1);

   private static native int aBy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native void YO();
}
