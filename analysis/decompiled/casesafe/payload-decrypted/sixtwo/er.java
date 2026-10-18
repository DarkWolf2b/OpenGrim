package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class er extends gg {
   private final ct zVsNl;
   private final cu rJcqT;
   private final cu hqvXq;
   private final cu VEzGB;
   private final cJ HJQND;
   private final ct QVAYj;
   private final cu ylthu;
   private final cu CUcNd;
   private final cu aqeay;
   private final cC oxsCR;
   private final cC LjlKg;
   private final cC SdfDA;
   private final cC wCnjW;
   private final cC ZdKpi;
   private final cC qMlRb;
   private final cC eCLmu;
   private static ou UGcHq;
   private float tmlzg;
   private static long JyNdk;
   private static String[] qjOuA;
   private static String[] GPmbA;
   private static Map rxcxT;
   private static long[] uyklF;
   private static Integer[] WEdTE;
   private static Map fmmgC;

   public er() {
      long var1 = JyNdk ^ 138083604100241L;
      super(gf.aZL(133, false, gh.xgeEn));
      this.zVsNl = new ct(
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
      ct var10003 = this.zVsNl;
      int[] var10004 = new int[9];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 105;
      var10004[5] = 115;
      var10004[6] = 105;
      var10004[7] = 111;
      var10004[8] = 110;
      this.rJcqT = new cu(var10003, mr.clS(var10004));
      var10003 = this.zVsNl;
      var10004 = new int[16];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 105;
      var10004[5] = 115;
      var10004[6] = 105;
      var10004[7] = 111;
      var10004[8] = 110;
      var10004[9] = 32;
      var10004[10] = 84;
      var10004[11] = 97;
      var10004[12] = 114;
      var10004[13] = 103;
      var10004[14] = 101;
      var10004[15] = 116;
      this.hqvXq = new cu(var10003, mr.clS(var10004));
      var10003 = this.zVsNl;
      var10004 = new int[6];
      var10004[0] = 77;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 114;
      var10004[4] = 105;
      var10004[5] = 120;
      this.VEzGB = new cu(var10003, mr.clS(var10004));
      var10004 = new int[10];
      var10004[0] = 89;
      var10004[1] = 97;
      var10004[2] = 119;
      var10004[3] = 32;
      var10004[4] = 79;
      var10004[5] = 102;
      var10004[6] = 102;
      var10004[7] = 115;
      var10004[8] = 101;
      var10004[9] = 116;
      this.HJQND = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[15];
      var10004[0] = 89;
      var10004[1] = 97;
      var10004[2] = 119;
      var10004[3] = 32;
      var10004[4] = 79;
      var10004[5] = 102;
      var10004[6] = 102;
      var10004[7] = 115;
      var10004[8] = 101;
      var10004[9] = 116;
      var10004[10] = 32;
      var10004[11] = 77;
      var10004[12] = 111;
      var10004[13] = 100;
      var10004[14] = 101;
      this.QVAYj = new ct(this, mr.clS(var10004)).SO(1);
      var10003 = this.QVAYj;
      var10004 = new int[6];
      var10004[0] = 71;
      var10004[1] = 114;
      var10004[2] = 111;
      var10004[3] = 117;
      var10004[4] = 110;
      var10004[5] = 100;
      this.ylthu = new cu(var10003, mr.clS(var10004));
      String[] var10000 = eB.avS();
      this.CUcNd = new cu(
         this.QVAYj,
         mr.clS(
            new int[]{65, 105, 114}
         )
      );
      ct var13 = this.QVAYj;
      int[] var10005 = new int[8];
      var10005[0] = 67;
      var10005[1] = 111;
      var10005[2] = 110;
      var10005[3] = 115;
      var10005[4] = 116;
      var10005[5] = 97;
      var10005[6] = 110;
      var10005[7] = 116;
      this.aqeay = new cu(var13, mr.clS(var10005));
      var10005 = new int[8];
      var10005[0] = 68;
      var10005[1] = 105;
      var10005[2] = 115;
      var10005[3] = 116;
      var10005[4] = 97;
      var10005[5] = 110;
      var10005[6] = 99;
      var10005[7] = 101;
      this.oxsCR = new cC(this, mr.clS(var10005)).Vy(0.05).Vw(0.05).Vx(2.0).VA(0.3).Vz(" blocks");
      var10005 = new int[9];
      var10005[0] = 79;
      var10005[1] = 110;
      var10005[2] = 32;
      var10005[3] = 71;
      var10005[4] = 114;
      var10005[5] = 111;
      var10005[6] = 117;
      var10005[7] = 110;
      var10005[8] = 100;
      this.LjlKg = new cC(this, mr.clS(var10005)).Vy(0.05).Vw(0.5).Vx(3.0).VA(1.1);
      var10005 = new int[7];
      var10005[0] = 79;
      var10005[1] = 110;
      var10005[2] = 32;
      var10005[3] = 74;
      var10005[4] = 117;
      var10005[5] = 109;
      var10005[6] = 112;
      this.SdfDA = new cC(this, mr.clS(var10005)).Vy(0.05).Vw(0.5).Vx(3.0).VA(1.1);
      var10005 = new int[7];
      var10005[0] = 79;
      var10005[1] = 110;
      var10005[2] = 32;
      var10005[3] = 70;
      var10005[4] = 97;
      var10005[5] = 108;
      var10005[6] = 108;
      this.wCnjW = new cC(this, mr.clS(var10005)).Vy(0.05).Vw(0.5).Vx(3.0).VA(1.1);
      this.ZdKpi = new cC(
            this,
            mr.clS(
               new int[]{
                  80,
                  111,
                  119,
                  101,
                  114
               }
            )
         )
         .Vy(0.01)
         .Vw(0.01)
         .Vx(0.1)
         .VA(0.06);
      String[] var3 = var10000;

      try {
         var10004 = new int[11];
         var10004[0] = 66;
         var10004[1] = 111;
         var10004[2] = 111;
         var10004[3] = 115;
         var10004[4] = 116;
         var10004[5] = 32;
         var10004[6] = 82;
         var10004[7] = 97;
         var10004[8] = 110;
         var10004[9] = 103;
         var10004[10] = 101;
         this.qMlRb = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.0).Vx(2.0).VA(1.0).Vz(" blocks");
         var10004 = new int[7];
         var10004[0] = 80;
         var10004[1] = 114;
         var10004[2] = 101;
         var10004[3] = 100;
         var10004[4] = 105;
         var10004[5] = 99;
         var10004[6] = 116;
         this.eCLmu = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(10.0).VA(5.0).Vz(" ticks");
         this.oxsCR.Vf(this.rJcqT::SZ);
         this.LjlKg.Vf(this.rJcqT::SZ);
         this.SdfDA.Vf(this.rJcqT::SZ);
         this.wCnjW.Vf(this.rJcqT::SZ);
         this.ZdKpi.Vf(this.hqvXq::SZ);
         this.qMlRb.Vf(this.hqvXq::SZ);
         this.eCLmu.Vf(this.hqvXq::SZ);
         this.QVAYj.Vf(this.HJQND::WF);
         if (var3 == null) {
            iS.bwK("bTPgDb");
         }
      } catch (MatchException var4) {
         throw auh(var4);
      }
   }

   static {
      Loader.doInit(er.class);
      _9ef051d9baa5318468933a355ecc175b();
   }

   private native void aue();

   private static native void _9ef051d9baa5318468933a355ecc175b();

   private static native int aum(int var0, long var1);

   private static native CallSite aul(Lookup var0, String var1, MethodType var2);

   private static native CallSite auo(Lookup var0, String var1, MethodType var2);

   @hG
   public native void auc(gH$th var1);

   @hG
   public native void aud(gw var1);

   private native void aug();

   private static native String aui(byte[] var0);

   private static native int aun(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String auj(int var0, long var1);

   private static native Object auk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aub(gv var1);

   private native void auf();

   private static native MatchException auh(MatchException var0);
}
