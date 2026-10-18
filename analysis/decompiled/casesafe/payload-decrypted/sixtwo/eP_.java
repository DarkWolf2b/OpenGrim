package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;

public class eP extends gg {
   private final cC NAanF;
   private final cF ODZUf;
   private final cv OqtQM;
   private final cw AGzRp;
   private final cw GJMaG;
   private final cw OwGUK;
   private final ct PVTLs;
   private final cu lRWug;
   private final cu xKdBS;
   private final ct AyJJM;
   private final cu zhiUo;
   private final cu oGBUC;
   private final cC AZdEq;
   private final cJ gXxAz;
   private final cJ KSprU;
   private final cJ OWsAx;
   private final cC rJCaB;
   private final og AoABv;
   private final pe NCCFN;
   private final mT tORnN;
   static float SKXmj;
   private boolean NTGZO;
   private boolean rqlbi;
   private LivingEntity ZpjWv;
   private static int[] LuzRg;
   private static long zBBpC;
   private static String[] UsgGq;
   private static String[] TnuSz;
   private static Map CqHSl;
   private static long[] orqhR;
   private static Integer[] zWPlL;
   private static Map AutBw;
   private static long QZFQM;

   public static native void aBT(int[] var0);

   public static native int[] aBU();

   private static native MatchException aBV(MatchException var0);

   private static native CallSite aCc(Lookup var0, String var1, MethodType var2);

   private static native CallSite aBZ(Lookup var0, String var1, MethodType var2);

   public eP() {
      long var1 = zBBpC ^ 30746758989336L;
      super(gf.aZL(120, false, gh.xwjCw));
      int[] var10004 = new int[17];
      var10004[0] = 77;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 32;
      var10004[4] = 70;
      var10004[5] = 97;
      var10004[6] = 108;
      var10004[7] = 108;
      var10004[8] = 32;
      var10004[9] = 68;
      var10004[10] = 105;
      var10004[11] = 115;
      var10004[12] = 116;
      var10004[13] = 97;
      var10004[14] = 110;
      var10004[15] = 99;
      var10004[16] = 101;
      this.NAanF = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.5).Vx(12.0).VA(4.0).Vz(" blocks");
      var10004 = new int[7];
      var10004[0] = 84;
      var10004[1] = 97;
      var10004[2] = 114;
      var10004[3] = 103;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 115;
      this.ODZUf = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM);
      var10004 = new int[14];
      var10004[0] = 84;
      var10004[1] = 97;
      var10004[2] = 114;
      var10004[3] = 103;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 79;
      var10004[8] = 112;
      var10004[9] = 116;
      var10004[10] = 105;
      var10004[11] = 111;
      var10004[12] = 110;
      var10004[13] = 115;
      this.OqtQM = new cv(this, mr.clS(var10004));
      cv var10003 = this.OqtQM;
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
      this.AGzRp = new cw(var10003, mr.clS(var10004));
      var10003 = this.OqtQM;
      var10004 = new int[12];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 78;
      var10004[8] = 97;
      var10004[9] = 107;
      var10004[10] = 101;
      var10004[11] = 100;
      this.GJMaG = new cw(var10003, mr.clS(var10004));
      var10003 = this.OqtQM;
      var10004 = new int[21];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 73;
      var10004[8] = 110;
      var10004[9] = 32;
      var10004[10] = 68;
      var10004[11] = 97;
      var10004[12] = 109;
      var10004[13] = 97;
      var10004[14] = 103;
      var10004[15] = 101;
      var10004[16] = 32;
      var10004[17] = 84;
      var10004[18] = 105;
      var10004[19] = 99;
      var10004[20] = 107;
      this.OwGUK = new cw(var10003, mr.clS(var10004));
      var10004 = new int[15];
      var10004[0] = 84;
      var10004[1] = 97;
      var10004[2] = 114;
      var10004[3] = 103;
      var10004[4] = 101;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 80;
      var10004[8] = 114;
      var10004[9] = 105;
      var10004[10] = 111;
      var10004[11] = 114;
      var10004[12] = 105;
      var10004[13] = 116;
      var10004[14] = 121;
      this.PVTLs = new ct(this, mr.clS(var10004));
      ct var7 = this.PVTLs;
      var10004 = new int[8];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 99;
      var10004[7] = 101;
      this.lRWug = new cu(var7, mr.clS(var10004));
      ct var8 = this.PVTLs;
      var10004 = new int[6];
      var10004[0] = 72;
      var10004[1] = 101;
      var10004[2] = 97;
      var10004[3] = 108;
      var10004[4] = 116;
      var10004[5] = 104;
      this.xKdBS = new cu(var8, mr.clS(var10004));
      var10004 = new int[12];
      var10004[0] = 65;
      var10004[1] = 116;
      var10004[2] = 116;
      var10004[3] = 97;
      var10004[4] = 99;
      var10004[5] = 107;
      var10004[6] = 32;
      var10004[7] = 80;
      var10004[8] = 111;
      var10004[9] = 105;
      var10004[10] = 110;
      var10004[11] = 116;
      this.AyJJM = new ct(this, mr.clS(var10004));
      ct var9 = this.AyJJM;
      var10004 = new int[11];
      var10004[0] = 66;
      var10004[1] = 101;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 32;
      var10004[5] = 86;
      var10004[6] = 101;
      var10004[7] = 99;
      var10004[8] = 116;
      var10004[9] = 111;
      var10004[10] = 114;
      this.zhiUo = new cu(var9, mr.clS(var10004));
      ct var10 = this.AyJJM;
      var10004 = new int[14];
      var10004[0] = 78;
      var10004[1] = 101;
      var10004[2] = 97;
      var10004[3] = 114;
      var10004[4] = 101;
      var10004[5] = 115;
      var10004[6] = 116;
      var10004[7] = 32;
      var10004[8] = 86;
      var10004[9] = 101;
      var10004[10] = 99;
      var10004[11] = 116;
      var10004[12] = 111;
      var10004[13] = 114;
      this.oGBUC = new cu(var10, mr.clS(var10004));
      var10004 = new int[12];
      var10004[0] = 72;
      var10004[1] = 105;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 68;
      var10004[5] = 105;
      var10004[6] = 115;
      var10004[7] = 116;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 99;
      var10004[11] = 101;
      this.AZdEq = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(2.5).Vx(5.0).VA(3.0).Vz(" blocks");
      var10004 = new int[12];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 65;
      var10004[8] = 114;
      var10004[9] = 109;
      var10004[10] = 111;
      var10004[11] = 114;
      this.gXxAz = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[11];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 86;
      var10004[8] = 105;
      var10004[9] = 101;
      var10004[10] = 119;
      this.KSprU = new cJ(this, mr.clS(var10004)).WE(false);
      int[] var10000 = aBU();
      int[] var10005 = new int[9];
      var10005[0] = 76;
      var10005[1] = 105;
      var10005[2] = 109;
      var10005[3] = 105;
      var10005[4] = 116;
      var10005[5] = 32;
      var10005[6] = 70;
      var10005[7] = 79;
      var10005[8] = 86;
      this.OWsAx = new cJ(this, mr.clS(var10005)).WE(false);
      this.rJCaB = new cC(
            this,
            mr.clS(
               new int[]{
                  70, 79, 86
               }
            )
         )
         .Vy(1.0)
         .Vw(10.0)
         .Vx(360.0)
         .VA(180.0)
         .Vz(" deg");
      this.tORnN = mT.cpz();
      this.AoABv = new og();
      int[] var3 = var10000;

      try {
         this.NCCFN = new pe();
         if (var3 != null) {
            iS.bwK("D1dXbc");
         }
      } catch (MatchException var4) {
         throw aBV(var4);
      }
   }

   static {
      Loader.doInit(eP.class);
      _0a8c9c238fa83059f98b98698224cc7d();
   }

   private static native void _0a8c9c238fa83059f98b98698224cc7d();

   @Override
   public native void YO();

   private native float aBQ();

   private native void aBI(oW var1, qP var2);

   private native boolean aBL();

   private native boolean aBM();

   @hG
   public native void aBC(gH$th var1);

   private native void aBR();

   @hG
   public native void aBB(gv var1);

   private native oW aBH(LivingEntity var1);

   private native LivingEntity aBP();

   private native void aBJ(oW var1, qP var2);

   private native void aBO(LivingEntity var1, ov var2, qL var3);

   private native void aBD(eQ var1);

   private static native String aBW(byte[] var0);

   private native void aBK(oW var1, qP var2);

   private native void aBG(LivingEntity var1, eQ var2);

   private native boolean aBN();

   private static native int aCb(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aBA(gM var1);

   public native LivingEntity aBS();

   private static native int aCa(int var0, long var1);

   private native ov aBF(eQ var1, boolean var2, qL var3);

   private static native Object aBY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aBX(int var0, long var1);

   private native void aBE(boolean var1, eQ var2);
}
