package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dU extends gg {
   private final cJ jjTmy;
   private final cJ OZKKQ;
   private final cC ytUYv;
   private final cC AERRL;
   private final cC ouAAg;
   private final cJ eKQLo;
   private final cC ilNfZ;
   private final cJ LBRwP;
   private boolean dneZD;
   private boolean kzZLu;
   private int nzBUx;
   private int DiDCD;
   private int TcAon;
   private int gipBo;
   private static long BxkdK;
   private static String[] HZHUw;
   private static String[] jqbGc;
   private static Map DMhNd;
   private static long[] pKQBa;
   private static Integer[] ABJVr;
   private static Map kEYSY;
   private static long[] rYgca;
   private static Long[] nnzAd;
   private static Map KfSMK;

   private static native void _57da09db4593384f0fb278b0dd98a331();

   public dU() {
      long var1 = BxkdK ^ 33703403512288L;
      super(gf.aZL(66, false, gh.qBzlZ));
      int[] var10004 = new int[10];
      var10004[0] = 65;
      var10004[1] = 110;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 32;
      var10004[5] = 66;
      var10004[6] = 114;
      var10004[7] = 101;
      var10004[8] = 97;
      var10004[9] = 107;
      this.jjTmy = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[9];
      var10004[0] = 65;
      var10004[1] = 117;
      var10004[2] = 116;
      var10004[3] = 111;
      var10004[4] = 32;
      var10004[5] = 67;
      var10004[6] = 97;
      var10004[7] = 115;
      var10004[8] = 116;
      this.OZKKQ = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[12];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 99;
      var10004[3] = 97;
      var10004[4] = 115;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.ytUYv = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(15.0).Vz(" ticks");
      var10004 = new int[11];
      var10004[0] = 67;
      var10004[1] = 97;
      var10004[2] = 116;
      var10004[3] = 99;
      var10004[4] = 104;
      var10004[5] = 32;
      var10004[6] = 68;
      var10004[7] = 101;
      var10004[8] = 108;
      var10004[9] = 97;
      var10004[10] = 121;
      this.AERRL = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(60.0).VA(5.0).Vz(" ticks");
      var10004 = new int[11];
      var10004[0] = 84;
      var10004[1] = 104;
      var10004[2] = 114;
      var10004[3] = 111;
      var10004[4] = 119;
      var10004[5] = 32;
      var10004[6] = 68;
      var10004[7] = 101;
      var10004[8] = 108;
      var10004[9] = 97;
      var10004[10] = 121;
      this.ouAAg = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(60.0).VA(5.0).Vz(" ticks");
      var10004 = new int[22];
      var10004[0] = 83;
      var10004[1] = 112;
      var10004[2] = 108;
      var10004[3] = 97;
      var10004[4] = 115;
      var10004[5] = 104;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 116;
      var10004[10] = 101;
      var10004[11] = 99;
      var10004[12] = 116;
      var10004[13] = 105;
      var10004[14] = 111;
      var10004[15] = 110;
      var10004[16] = 32;
      var10004[17] = 82;
      var10004[18] = 97;
      var10004[19] = 110;
      var10004[20] = 103;
      var10004[21] = 101;
      this.eKQLo = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[17];
      var10004[0] = 83;
      var10004[1] = 112;
      var10004[2] = 108;
      var10004[3] = 97;
      var10004[4] = 115;
      var10004[5] = 104;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 116;
      var10004[10] = 101;
      var10004[11] = 99;
      var10004[12] = 116;
      var10004[13] = 105;
      var10004[14] = 111;
      var10004[15] = 110;
      var10004[16] = 32;
      this.ilNfZ = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.0).Vx(10.0).VA(5.0).Vz(" blocks");
      var10004 = new int[6];
      var10004[0] = 73;
      var10004[1] = 110;
      var10004[2] = 32;
      var10004[3] = 71;
      var10004[4] = 117;
      var10004[5] = 105;
      this.LBRwP = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(dU.class);
      _57da09db4593384f0fb278b0dd98a331();
   }

   @Override
   public native void aaj();

   @hG
   public native void apL(gH$th var1);

   private static native int apY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object apV(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native long aqa(int var0, long var1);

   private static native int apX(int var0, long var1);

   @hG
   public native void apM(gz var1);

   private static native CallSite aqc(Lookup var0, String var1, MethodType var2);

   private static native MatchException apS(MatchException var0);

   private static native CallSite apW(Lookup var0, String var1, MethodType var2);

   @hG
   public native void apK(gI var1);

   private static native String apT(byte[] var0);

   private static native long aqb(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite apZ(Lookup var0, String var1, MethodType var2);

   private static native String apU(int var0, long var1);
}
