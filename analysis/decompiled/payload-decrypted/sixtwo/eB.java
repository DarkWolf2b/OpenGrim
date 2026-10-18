package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;

public class eB extends gg {
   private final cJ xPGtf;
   private final cJ hojzx;
   private final cC VCxLS;
   private final cC fjDMc;
   private final cC wBCaT;
   private final ct Kqwum;
   private final cu YqWYM;
   private final cu wKOWY;
   private final ct MoNPF;
   private final cu PgiSy;
   private final cu TJdZl;
   private final cu fklcz;
   private boolean LSmOj;
   private int EKwun;
   private int raYeS;
   private float xVfhc;
   private double dHwGI;
   private static String[] eDmGk;
   private static long XiPDK;
   private static String[] vIQhT;
   private static String[] qgidc;
   private static Map xsTyw;
   private static long[] APZUd;
   private static Integer[] NtVBJ;
   private static Map rueqY;

   public eB() {
      long var1 = XiPDK ^ 117206888547190L;
      super(gf.aZL(44, false, gh.xgeEn).aZS(false));
      int[] var10004 = new int[9];
      var10004[0] = 65;
      var10004[1] = 110;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 32;
      var10004[5] = 75;
      var10004[6] = 105;
      var10004[7] = 99;
      var10004[8] = 107;
      this.xPGtf = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[20];
      var10004[0] = 86;
      var10004[1] = 101;
      var10004[2] = 114;
      var10004[3] = 116;
      var10004[4] = 105;
      var10004[5] = 99;
      var10004[6] = 97;
      var10004[7] = 108;
      var10004[8] = 32;
      var10004[9] = 83;
      var10004[10] = 112;
      var10004[11] = 101;
      var10004[12] = 101;
      var10004[13] = 100;
      var10004[14] = 32;
      var10004[15] = 77;
      var10004[16] = 97;
      var10004[17] = 116;
      var10004[18] = 99;
      var10004[19] = 104;
      this.hojzx = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[8];
      var10004[0] = 79;
      var10004[1] = 102;
      var10004[2] = 102;
      var10004[3] = 32;
      var10004[4] = 84;
      var10004[5] = 105;
      var10004[6] = 109;
      var10004[7] = 101;
      this.VCxLS = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(20.0).VA(1.0).Vz(" ticks");
      this.fjDMc = new cC(
            this,
            mr.clS(
               new int[]{
                  68,
                  101,
                  108,
                  97,
                  121
               }
            )
         )
         .Vy(1.0)
         .Vw(1.0)
         .Vx(200.0)
         .VA(20.0)
         .Vz(" ticks");
      this.wBCaT = new cC(
            this,
            mr.clS(
               new int[]{
                  83,
                  112,
                  101,
                  101,
                  100
               }
            )
         )
         .Vy(0.01)
         .Vw(0.01)
         .Vx(3.0)
         .VA(0.05);
      this.Kqwum = new ct(
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
      ct var10003 = this.Kqwum;
      var10004 = new int[9];
      var10004[0] = 65;
      var10004[1] = 98;
      var10004[2] = 105;
      var10004[3] = 108;
      var10004[4] = 105;
      var10004[5] = 116;
      var10004[6] = 105;
      var10004[7] = 101;
      var10004[8] = 115;
      this.YqWYM = new cu(var10003, mr.clS(var10004));
      var10003 = this.Kqwum;
      var10004 = new int[8];
      var10004[0] = 86;
      var10004[1] = 101;
      var10004[2] = 108;
      var10004[3] = 111;
      var10004[4] = 99;
      var10004[5] = 105;
      var10004[6] = 116;
      var10004[7] = 121;
      this.wKOWY = new cu(var10003, mr.clS(var10004));
      var10004 = new int[14];
      var10004[0] = 65;
      var10004[1] = 110;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 32;
      var10004[5] = 75;
      var10004[6] = 105;
      var10004[7] = 99;
      var10004[8] = 107;
      var10004[9] = 32;
      var10004[10] = 77;
      var10004[11] = 111;
      var10004[12] = 100;
      var10004[13] = 101;
      this.MoNPF = new ct(this, mr.clS(var10004));
      var10003 = this.MoNPF;
      var10004 = new int[6];
      var10004[0] = 78;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 109;
      var10004[4] = 97;
      var10004[5] = 108;
      this.PgiSy = new cu(var10003, mr.clS(var10004));
      var10003 = this.MoNPF;
      var10004 = new int[6];
      var10004[0] = 80;
      var10004[1] = 97;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 116;
      this.TJdZl = new cu(var10003, mr.clS(var10004));
      this.fklcz = new cu(
         this.MoNPF,
         mr.clS(
            new int[]{
               78,
               111,
               110,
               101
            }
         )
      );
      this.dHwGI = Double.MAX_VALUE;
   }

   static {
      Loader.doInit(eB.class);
      _de0ae3af65923086fea10ac7aa83e497();
   }

   @Override
   public native void aaj();

   private static native void _de0ae3af65923086fea10ac7aa83e497();

   public native float avz();

   public static native String[] avS();

   private native void avx();

   public native cC avC();

   public native cC avD();

   public native cu avH();

   private native boolean avy(Entity var1);

   public native cJ avB();

   public native cu avG();

   public native ct avI();

   public native cC avE();

   public native cu avJ();

   public native boolean avM();

   private static native CallSite awa(Lookup var0, String var1, MethodType var2);

   private static native CallSite avX(Lookup var0, String var1, MethodType var2);

   public native cu avL();

   public native int avN();

   @hG
   public native void avr(gH$th var1);

   @hG
   public native void avu(gL$tj var1);

   public native ct avF();

   public native cu avK();

   private native boolean avv(double var1, double var3);

   public native cJ avA();

   private native void avt(PlayerMoveC2SPacket var1, double var2);

   private native void avw();

   @hG
   public native void avs(gH$ti var1);

   public native double avQ();

   public static native void avR(String[] var0);

   private static native MatchException avT(MatchException var0);

   public native float avP();

   private static native String avV(int var0, long var1);

   private static native String avU(byte[] var0);

   private static native int avZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int avY(int var0, long var1);

   private static native Object avW(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native int avO();

   @Override
   public native void YO();
}
