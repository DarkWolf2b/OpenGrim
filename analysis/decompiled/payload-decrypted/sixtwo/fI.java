package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.projectile.ProjectileEntity;

public class fI extends gg {
   private final cC saZPV;
   private final cv ZnFGj;
   private final cw btcIN;
   private final cw aVerA;
   private final cw cGEiM;
   private final cw iXQno;
   private final cw xlSxX;
   private final cJ qrTWi;
   private final cJ MXFNE;
   private final cy TceCO;
   private final cJ yfLPs;
   private final cD CLGoi;
   private final cJ icZIc;
   private static long hhjHN;
   private static String[] gftdG;
   private static String[] tqwJQ;
   private static Map sDjcB;
   private static long[] XvFOI;
   private static Integer[] jcHIy;
   private static Map AWYJz;

   private static native void _f77c9f3042371eaf0e4288a4283006be();

   public fI() {
      long var1 = hhjHN ^ 121247331531019L;
      super(gf.aZL(2, false, gh.xwjCw));
      int[] var10004 = new int[8];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 99;
      var10004[7] = 101;
      this.saZPV = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(16.0).Vz(" blocks");
      var10004 = new int[11];
      var10004[0] = 76;
      var10004[1] = 111;
      var10004[2] = 103;
      var10004[3] = 111;
      var10004[4] = 117;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 70;
      var10004[8] = 114;
      var10004[9] = 111;
      var10004[10] = 109;
      this.ZnFGj = new cv(this, mr.clS(var10004));
      cv var10003 = this.ZnFGj;
      var10004 = new int[6];
      var10004[0] = 80;
      var10004[1] = 101;
      var10004[2] = 97;
      var10004[3] = 114;
      var10004[4] = 108;
      var10004[5] = 115;
      this.btcIN = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[9];
      var10004[0] = 83;
      var10004[1] = 110;
      var10004[2] = 111;
      var10004[3] = 119;
      var10004[4] = 98;
      var10004[5] = 97;
      var10004[6] = 108;
      var10004[7] = 108;
      var10004[8] = 115;
      this.aVerA = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[6];
      var10004[0] = 65;
      var10004[1] = 114;
      var10004[2] = 114;
      var10004[3] = 111;
      var10004[4] = 119;
      var10004[5] = 115;
      this.cGEiM = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[9];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 104;
      var10004[4] = 32;
      var10004[5] = 82;
      var10004[6] = 111;
      var10004[7] = 100;
      var10004[8] = 115;
      this.iXQno = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[7];
      var10004[0] = 80;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 111;
      var10004[5] = 110;
      var10004[6] = 115;
      this.xlSxX = new cw(var10003, mr.clS(var10004)).Tz();
      var10004 = new int[14];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 70;
      var10004[8] = 114;
      var10004[9] = 105;
      var10004[10] = 101;
      var10004[11] = 110;
      var10004[12] = 100;
      var10004[13] = 115;
      this.qrTWi = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[9];
      var10004[0] = 73;
      var10004[1] = 110;
      var10004[2] = 118;
      var10004[3] = 105;
      var10004[4] = 115;
      var10004[5] = 105;
      var10004[6] = 98;
      var10004[7] = 108;
      var10004[8] = 101;
      this.MXFNE = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[18];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 99;
      var10004[4] = 111;
      var10004[5] = 110;
      var10004[6] = 110;
      var10004[7] = 101;
      var10004[8] = 99;
      var10004[9] = 116;
      var10004[10] = 32;
      var10004[11] = 77;
      var10004[12] = 101;
      var10004[13] = 115;
      var10004[14] = 115;
      var10004[15] = 97;
      var10004[16] = 103;
      var10004[17] = 101;
      this.TceCO = new cy(this, mr.clS(var10004)).Un(32).Up("Disconnected");
      var10004 = new int[13];
      var10004[0] = 76;
      var10004[1] = 111;
      var10004[2] = 103;
      var10004[3] = 111;
      var10004[4] = 117;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 111;
      var10004[8] = 110;
      var10004[9] = 32;
      var10004[10] = 75;
      var10004[11] = 101;
      var10004[12] = 121;
      this.yfLPs = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[10];
      var10004[0] = 76;
      var10004[1] = 111;
      var10004[2] = 103;
      var10004[3] = 111;
      var10004[4] = 117;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 75;
      var10004[8] = 101;
      var10004[9] = 121;
      this.CLGoi = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[17];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 97;
      var10004[4] = 98;
      var10004[5] = 108;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 79;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 76;
      var10004[12] = 111;
      var10004[13] = 103;
      var10004[14] = 111;
      var10004[15] = 117;
      var10004[16] = 116;
      this.icZIc = new cJ(this, mr.clS(var10004)).WE(false);
      this.CLGoi.Vf(this.yfLPs::WF);
   }

   static {
      Loader.doInit(fI.class);
      _f77c9f3042371eaf0e4288a4283006be();
   }

   @hG
   public native void aUC(gA var1);

   private native boolean aUD(ProjectileEntity var1);

   private static native String aUG(byte[] var0);

   private static native String aUH(int var0, long var1);

   private static native int aUK(int var0, long var1);

   private static native Object aUI(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aUJ(Lookup var0, String var1, MethodType var2);

   private static native int aUL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aUM(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aUB(gH$th var1);

   private native void aUE();

   private static native MatchException aUF(MatchException var0);
}
