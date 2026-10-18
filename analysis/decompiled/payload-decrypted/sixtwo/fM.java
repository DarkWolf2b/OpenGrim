package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fM extends gg {
   private final cC dGwjW;
   private final cJ YSNTj;
   private final ct Btadw;
   private final cu tKkYu;
   private final cu AleCL;
   private final cu rDsyy;
   private final cu ZBrrX;
   private final cu fFjCr;
   private final cu EDXTP;
   private static long vSOfS;
   private static String GgimX;
   private static long[] nJRgq;
   private static Integer[] quYDv;
   private static Map FffRs;

   private static native void _29ee64b3edc59393a3bb896a1fd427c8();

   public fM() {
      long var1 = vSOfS ^ 40377846940122L;
      super(gf.aZL(21, false, gh.xwjCw));
      int[] var10004 = new int[9];
      var10004[0] = 84;
      var10004[1] = 104;
      var10004[2] = 114;
      var10004[3] = 101;
      var10004[4] = 115;
      var10004[5] = 104;
      var10004[6] = 111;
      var10004[7] = 108;
      var10004[8] = 100;
      this.dGwjW = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(3.0).Vx(15.0).VA(4.0).Vz(GgimX);
      var10004 = new int[13];
      var10004[0] = 65;
      var10004[1] = 110;
      var10004[2] = 99;
      var10004[3] = 104;
      var10004[4] = 111;
      var10004[5] = 114;
      var10004[6] = 32;
      var10004[7] = 80;
      var10004[8] = 108;
      var10004[9] = 97;
      var10004[10] = 121;
      var10004[11] = 101;
      var10004[12] = 114;
      this.YSNTj = new cJ(this, mr.clS(var10004)).WE(false);
      this.Btadw = new ct(
         this,
         mr.clS(
            new int[]{
               77,
               111,
               100,
               101
            }
         )
      );
      ct var10003 = this.Btadw;
      var10004 = new int[6];
      var10004[0] = 66;
      var10004[1] = 117;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      this.tKkYu = new cu(var10003, mr.clS(var10004));
      this.AleCL = new cu(
         this.Btadw,
         mr.clS(
            new int[]{
               83,
               108,
               105,
               109,
               101
            }
         )
      );
      this.rDsyy = new cu(
         this.Btadw,
         mr.clS(
            new int[]{
               72,
               111,
               110,
               101,
               121
            }
         )
      );
      var10003 = this.Btadw;
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 98;
      var10004[3] = 119;
      var10004[4] = 101;
      var10004[5] = 98;
      this.ZBrrX = new cu(var10003, mr.clS(var10004));
      var10003 = this.Btadw;
      var10004 = new int[7];
      var10004[0] = 72;
      var10004[1] = 97;
      var10004[2] = 121;
      var10004[3] = 66;
      var10004[4] = 97;
      var10004[5] = 108;
      var10004[6] = 101;
      this.fFjCr = new cu(var10003, mr.clS(var10004));
      var10003 = this.Btadw;
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 101;
      var10004[3] = 114;
      var10004[4] = 114;
      var10004[5] = 121;
      this.EDXTP = new cu(var10003, mr.clS(var10004));
   }

   static {
      Loader.doInit(fM.class);
      _29ee64b3edc59393a3bb896a1fd427c8();
   }

   private static native CallSite aVv(Lookup var0, String var1, MethodType var2);

   private static native MatchException aVr(MatchException var0);

   private static native int aVu(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aVs(byte[] var0);

   @hG
   public native void aVp(gv var1);

   @hG
   public native void aVq(gH$th var1);

   private static native int aVt(int var0, long var1);
}
