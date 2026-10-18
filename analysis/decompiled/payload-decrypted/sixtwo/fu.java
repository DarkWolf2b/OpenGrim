package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import native.Loader;
import net.minecraft.network.packet.Packet;

public class fu extends gg {
   private final ct OZwTl;
   private final cu HWcZh;
   private final cu hWgcS;
   private final cu nImvb;
   private final cu oExgz;
   private final cA LaROb;
   private final cJ PmsBY;
   private final cJ BkSRE;
   private final cJ RLDCA;
   private final cC kUuPI;
   private final cH pGiTh;
   private final cJ cKQhx;
   private final cJ KnAho;
   private final cJ TOKrl;
   private final cC TKJLd;
   private final cH GTOqc;
   private final cJ FxYCf;
   private final cJ iIlaN;
   private final cJ LWIOL;
   private final cC DfcnL;
   private final cH fsosg;
   private final cJ TnuIy;
   private final cJ yYAVi;
   private final cJ Vzyof;
   private final cC yUhFU;
   private final cH dCnGA;
   private final cJ NGzOC;
   private final cJ IiAXY;
   private final cJ xaWdH;
   private final cC IlDeC;
   private final cH ASVuR;
   private final Queue<Packet<?>> bvNPi;
   private final mT qmOOk;
   private boolean HiBun;
   private int zHVGe;
   private static long BKGTH;
   private static String[] OPeMM;
   private static String[] EsiEj;
   private static Map oYwxV;
   private static long[] wkefr;
   private static Integer[] fJTkl;
   private static Map pFjbu;

   private static native CallSite aQw(Lookup var0, String var1, MethodType var2);

   private static native CallSite aQz(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aQl(gM var1);

   @hG
   public native void aQo(gL$tj var1);

   private static native MatchException aQs(MatchException var0);

   private static native String aQu(int var0, long var1);

   private static native int aQx(int var0, long var1);

   @hG
   public native void aQm(hw$tv var1);

   private native void aQp(double var1, boolean var3, boolean var4);

   private static native Object aQv(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aQn(gH$th var1);

   private native void aQr();

   private static native String aQt(byte[] var0);

   private static native int aQy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aQq();

   public fu() {
      long var1 = BKGTH ^ 75494749283425L;
      super(gf.aZL(135, false, gh.xwjCw));
      this.OZwTl = new ct(
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
      ct var10003 = this.OZwTl;
      int[] var10004 = new int[7];
      var10004[0] = 86;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 105;
      var10004[4] = 108;
      var10004[5] = 108;
      var10004[6] = 97;
      this.HWcZh = new cu(var10003, mr.clS(var10004));
      var10003 = this.OZwTl;
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 117;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 111;
      var10004[5] = 109;
      this.hWgcS = new cu(var10003, mr.clS(var10004));
      var10003 = this.OZwTl;
      var10004 = new int[6];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      this.nImvb = new cu(var10003, mr.clS(var10004));
      var10003 = this.OZwTl;
      var10004 = new int[7];
      var10004[0] = 87;
      var10004[1] = 101;
      var10004[2] = 98;
      var10004[3] = 32;
      var10004[4] = 76;
      var10004[5] = 97;
      var10004[6] = 103;
      this.oExgz = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[9];
      var10004[0] = 76;
      var10004[1] = 97;
      var10004[2] = 103;
      var10004[3] = 32;
      var10004[4] = 68;
      var10004[5] = 101;
      var10004[6] = 108;
      var10004[7] = 97;
      var10004[8] = 121;
      this.LaROb = new cA(this, mr.clS(var10004)).UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH(" ms");
      int[] var6 = new int[13];
      var6[0] = 83;
      var6[1] = 101;
      var6[2] = 110;
      var6[3] = 100;
      var6[4] = 32;
      var6[5] = 80;
      var6[6] = 97;
      var6[7] = 99;
      var6[8] = 107;
      var6[9] = 101;
      var6[10] = 116;
      var6[11] = 32;
      var6[12] = 49;
      this.PmsBY = new cJ(mr.clS(var6)).WE(true);
      int[] var7 = new int[8];
      var7[0] = 71;
      var7[1] = 114;
      var7[2] = 111;
      var7[3] = 117;
      var7[4] = 110;
      var7[5] = 100;
      var7[6] = 32;
      var7[7] = 49;
      this.BkSRE = new cJ(mr.clS(var7)).WE(true);
      int[] var8 = new int[6];
      var8[0] = 70;
      var8[1] = 117;
      var8[2] = 108;
      var8[3] = 108;
      var8[4] = 32;
      var8[5] = 49;
      this.RLDCA = new cJ(mr.clS(var8)).WE(true);
      int[] var9 = new int[8];
      var9[0] = 79;
      var9[1] = 102;
      var9[2] = 102;
      var9[3] = 115;
      var9[4] = 101;
      var9[5] = 116;
      var9[6] = 32;
      var9[7] = 49;
      this.kUuPI = new cC(mr.clS(var9)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0).Vz(" blocks");
      var10004 = new int[8];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 49;
      this.pGiTh = new cH(this, mr.clS(var10004)).Wu(this.PmsBY, this.BkSRE, this.RLDCA, this.kUuPI);
      int[] var10 = new int[13];
      var10[0] = 83;
      var10[1] = 101;
      var10[2] = 110;
      var10[3] = 100;
      var10[4] = 32;
      var10[5] = 80;
      var10[6] = 97;
      var10[7] = 99;
      var10[8] = 107;
      var10[9] = 101;
      var10[10] = 116;
      var10[11] = 32;
      var10[12] = 50;
      this.cKQhx = new cJ(mr.clS(var10)).WE(true);
      int[] var11 = new int[8];
      var11[0] = 71;
      var11[1] = 114;
      var11[2] = 111;
      var11[3] = 117;
      var11[4] = 110;
      var11[5] = 100;
      var11[6] = 32;
      var11[7] = 50;
      this.KnAho = new cJ(mr.clS(var11)).WE(false);
      int[] var12 = new int[6];
      var12[0] = 70;
      var12[1] = 117;
      var12[2] = 108;
      var12[3] = 108;
      var12[4] = 32;
      var12[5] = 50;
      this.TOKrl = new cJ(mr.clS(var12)).WE(true);
      int[] var13 = new int[8];
      var13[0] = 79;
      var13[1] = 102;
      var13[2] = 102;
      var13[3] = 115;
      var13[4] = 101;
      var13[5] = 116;
      var13[6] = 32;
      var13[7] = 50;
      this.TKJLd = new cC(mr.clS(var13)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0625).Vz(" blocks");
      var10004 = new int[8];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 50;
      this.GTOqc = new cH(this, mr.clS(var10004)).Wu(this.cKQhx, this.KnAho, this.TOKrl, this.TKJLd);
      int[] var14 = new int[13];
      var14[0] = 83;
      var14[1] = 101;
      var14[2] = 110;
      var14[3] = 100;
      var14[4] = 32;
      var14[5] = 80;
      var14[6] = 97;
      var14[7] = 99;
      var14[8] = 107;
      var14[9] = 101;
      var14[10] = 116;
      var14[11] = 32;
      var14[12] = 51;
      this.FxYCf = new cJ(mr.clS(var14)).WE(true);
      int[] var15 = new int[8];
      var15[0] = 71;
      var15[1] = 114;
      var15[2] = 111;
      var15[3] = 117;
      var15[4] = 110;
      var15[5] = 100;
      var15[6] = 32;
      var15[7] = 51;
      this.iIlaN = new cJ(mr.clS(var15)).WE(false);
      int[] var16 = new int[6];
      var16[0] = 70;
      var16[1] = 117;
      var16[2] = 108;
      var16[3] = 108;
      var16[4] = 32;
      var16[5] = 51;
      this.LWIOL = new cJ(mr.clS(var16)).WE(false);
      int[] var17 = new int[8];
      var17[0] = 79;
      var17[1] = 102;
      var17[2] = 102;
      var17[3] = 115;
      var17[4] = 101;
      var17[5] = 116;
      var17[6] = 32;
      var17[7] = 51;
      this.DfcnL = new cC(mr.clS(var17)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.04535).Vz(" blocks");
      var10004 = new int[8];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 51;
      this.fsosg = new cH(this, mr.clS(var10004)).Wu(this.FxYCf, this.iIlaN, this.LWIOL, this.DfcnL);
      int[] var18 = new int[13];
      var18[0] = 83;
      var18[1] = 101;
      var18[2] = 110;
      var18[3] = 100;
      var18[4] = 32;
      var18[5] = 80;
      var18[6] = 97;
      var18[7] = 99;
      var18[8] = 107;
      var18[9] = 101;
      var18[10] = 116;
      var18[11] = 32;
      var18[12] = 52;
      this.TnuIy = new cJ(mr.clS(var18)).WE(false);
      int[] var19 = new int[8];
      var19[0] = 71;
      var19[1] = 114;
      var19[2] = 111;
      var19[3] = 117;
      var19[4] = 110;
      var19[5] = 100;
      var19[6] = 32;
      var19[7] = 52;
      this.yYAVi = new cJ(mr.clS(var19)).WE(false);
      int[] var20 = new int[6];
      var20[0] = 70;
      var20[1] = 117;
      var20[2] = 108;
      var20[3] = 108;
      var20[4] = 32;
      var20[5] = 52;
      this.Vzyof = new cJ(mr.clS(var20)).WE(false);
      int[] var21 = new int[8];
      var21[0] = 79;
      var21[1] = 102;
      var21[2] = 102;
      var21[3] = 115;
      var21[4] = 101;
      var21[5] = 116;
      var21[6] = 32;
      var21[7] = 52;
      this.yUhFU = new cC(mr.clS(var21)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0).Vz(" blocks");
      var10004 = new int[8];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 52;
      this.dCnGA = new cH(this, mr.clS(var10004)).Wu(this.TnuIy, this.yYAVi, this.Vzyof, this.yUhFU);
      int[] var22 = new int[13];
      var22[0] = 83;
      var22[1] = 101;
      var22[2] = 110;
      var22[3] = 100;
      var22[4] = 32;
      var22[5] = 80;
      var22[6] = 97;
      var22[7] = 99;
      var22[8] = 107;
      var22[9] = 101;
      var22[10] = 116;
      var22[11] = 32;
      var22[12] = 53;
      this.NGzOC = new cJ(mr.clS(var22)).WE(false);
      int[] var23 = new int[8];
      var23[0] = 71;
      var23[1] = 114;
      var23[2] = 111;
      var23[3] = 117;
      var23[4] = 110;
      var23[5] = 100;
      var23[6] = 32;
      var23[7] = 53;
      this.IiAXY = new cJ(mr.clS(var23)).WE(false);
      int[] var24 = new int[6];
      var24[0] = 70;
      var24[1] = 117;
      var24[2] = 108;
      var24[3] = 108;
      var24[4] = 32;
      var24[5] = 53;
      this.xaWdH = new cJ(mr.clS(var24)).WE(false);
      int[] var25 = new int[8];
      var25[0] = 79;
      var25[1] = 102;
      var25[2] = 102;
      var25[3] = 115;
      var25[4] = 101;
      var25[5] = 116;
      var25[6] = 32;
      var25[7] = 53;
      this.IlDeC = new cC(mr.clS(var25)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0).Vz(" blocks");
      var10004 = new int[8];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 53;
      this.ASVuR = new cH(this, mr.clS(var10004)).Wu(this.NGzOC, this.IiAXY, this.xaWdH, this.IlDeC);
      this.bvNPi = new ConcurrentLinkedQueue<>();
      this.qmOOk = mT.cpz();
      this.LaROb.Vf(this.oExgz::SZ);
      this.pGiTh.Vf(this.hWgcS::SZ);
      this.GTOqc.Vf(this.hWgcS::SZ);
      this.fsosg.Vf(this.hWgcS::SZ);
      this.dCnGA.Vf(this.hWgcS::SZ);
      this.ASVuR.Vf(this.hWgcS::SZ);
   }

   static {
      Loader.doInit(fu.class);
      _9a119123c9a8e162a81dc5f2c5ec9c0f();
   }

   @Override
   public native void aaj();

   private static native void _9a119123c9a8e162a81dc5f2c5ec9c0f();

   @Override
   public native void YO();
}
