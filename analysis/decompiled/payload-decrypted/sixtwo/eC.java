package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eC extends gg {
   private final cv DpuAv;
   private final cw ZxBxP;
   private final cw vCPTc;
   private final cw AublY;
   private final cv ldLRq;
   private final cw MeYau;
   private final cw OqeVu;
   private final cJ AjuCa;
   private final cA paKVr;
   private final cA KmNkh;
   private final cA BgMhY;
   private final cC qFLIZ;
   private boolean dhEgs;
   private static long micYo;
   private static String[] iOWmB;
   private static String[] UrMwr;
   private static Map FkUjg;
   private static long[] DjFuE;
   private static Integer[] dFmQY;
   private static Map OVOKz;

   public eC() {
      long var1 = micYo ^ 89550695304652L;
      super(gf.aZL(34, false, gh.xgeEn));
      int[] var10004 = new int[6];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      this.DpuAv = new cv(this, mr.clS(var10004));
      cv var10003 = this.DpuAv;
      var10004 = new int[9];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 105;
      var10004[3] = 110;
      var10004[4] = 100;
      var10004[5] = 110;
      var10004[6] = 101;
      var10004[7] = 115;
      var10004[8] = 115;
      this.ZxBxP = new cw(var10003, mr.clS(var10004));
      var10003 = this.DpuAv;
      var10004 = new int[6];
      var10004[0] = 72;
      var10004[1] = 117;
      var10004[2] = 110;
      var10004[3] = 103;
      var10004[4] = 101;
      var10004[5] = 114;
      this.vCPTc = new cw(var10003, mr.clS(var10004));
      var10003 = this.DpuAv;
      var10004 = new int[9];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 105;
      var10004[5] = 115;
      var10004[6] = 105;
      var10004[7] = 111;
      var10004[8] = 110;
      this.AublY = new cw(var10003, mr.clS(var10004));
      var10004 = new int[7];
      var10004[0] = 83;
      var10004[1] = 116;
      var10004[2] = 111;
      var10004[3] = 112;
      var10004[4] = 32;
      var10004[5] = 79;
      var10004[6] = 110;
      this.ldLRq = new cv(this, mr.clS(var10004));
      var10003 = this.ldLRq;
      var10004 = new int[6];
      var10004[0] = 71;
      var10004[1] = 114;
      var10004[2] = 111;
      var10004[3] = 117;
      var10004[4] = 110;
      var10004[5] = 100;
      this.MeYau = new cw(var10003, mr.clS(var10004));
      this.OqeVu = new cw(
         this.ldLRq,
         mr.clS(
            new int[]{65, 105, 114}
         )
      );
      var10004 = new int[11];
      var10004[0] = 75;
      var10004[1] = 101;
      var10004[2] = 101;
      var10004[3] = 112;
      var10004[4] = 32;
      var10004[5] = 83;
      var10004[6] = 112;
      var10004[7] = 114;
      var10004[8] = 105;
      var10004[9] = 110;
      var10004[10] = 116;
      this.AjuCa = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[6];
      var10004[0] = 77;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 111;
      var10004[5] = 110;
      this.paKVr = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %");
      var10004 = new int[16];
      var10004[0] = 77;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 111;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 87;
      var10004[8] = 104;
      var10004[9] = 101;
      var10004[10] = 110;
      var10004[11] = 32;
      var10004[12] = 72;
      var10004[13] = 117;
      var10004[14] = 114;
      var10004[15] = 116;
      this.KmNkh = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %");
      var10004 = new int[9];
      var10004[0] = 72;
      var10004[1] = 117;
      var10004[2] = 114;
      var10004[3] = 116;
      var10004[4] = 32;
      var10004[5] = 84;
      var10004[6] = 105;
      var10004[7] = 109;
      var10004[8] = 101;
      this.BgMhY = new cA(this, mr.clS(var10004)).UG(1.0).UE(1.0).UF(10.0).UI(1.0, 10.0);
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 99;
      var10004[5] = 101;
      this.qFLIZ = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(100.0).Vz(" %");
      this.paKVr.Vf(this.AjuCa::WF);
      this.KmNkh.Vf(this.AjuCa::WF);
      this.BgMhY.Vf(this.AjuCa::WF);
      this.qFLIZ.Vf(this.AjuCa::WF);
   }

   static {
      Loader.doInit(eC.class);
      _c3fd5360cf80fc59f0809cb2d98aa0f3();
   }

   private static native void _c3fd5360cf80fc59f0809cb2d98aa0f3();

   public native boolean awg();

   public native boolean awe();

   public native boolean awf();

   @hG
   public native void awc(hk var1);

   private static native CallSite aws(Lookup var0, String var1, MethodType var2);

   @hG
   public native void awb(gH$ti var1);

   private static native String awn(int var0, long var1);

   private static native int awq(int var0, long var1);

   private native boolean awh();

   public native boolean awd(mF var1);

   private native double awk();

   private static native MatchException awl(MatchException var0);

   private static native String awm(byte[] var0);

   private static native Object awo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite awp(Lookup var0, String var1, MethodType var2);

   private native boolean awi(mF var1);

   private static native int awr(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean awj();

   @Override
   public native void YO();
}
