package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import native.Loader;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.Packet;

public class fs extends gg {
   private final ct IcLmm;
   private final cu oBzcq;
   private final cu YyudN;
   private final ct xtaAk;
   private final cu HIGji;
   private final cu FXNOb;
   private final ct wyZEk;
   private final cu lOgKN;
   private final cD LjfJW;
   private final cC hyauK;
   private final cu clxNa;
   private final cC jJzSe;
   private final cJ DtLvL;
   private float LypUB;
   private float PnWns;
   private Entity QOpIL;
   private int TvEdE;
   private boolean btLpD;
   private boolean VOVop;
   private double FFrtc;
   private boolean bYXHg;
   private boolean URrjv;
   private final Queue<Packet<?>> bapCK;
   private static long KMued;
   private static String aRvFo;
   private static long[] zEEgk;
   private static Integer[] RYkpV;
   private static Map ZmIgj;

   @hG(
      priority = mw.CRUCIAL
   )
   public native void aPg(gL$tj var1);

   @hG
   public native void aPh(gA var1);

   private native void aPl(float var1);

   private native boolean aPm(KeyBinding var1, KeyBinding var2);

   private native boolean aPn(Entity var1, double var2, boolean var4, int var5);

   private native void aPr();

   public native cu aPw();

   public native cC aPD();

   public native cu aPx();

   private static native MatchException aPP(MatchException var0);

   public native boolean aPi(Entity var1, float var2, boolean var3);

   public native ct aPs();

   public native boolean aPM();

   @hG
   public native void aPf(gH$th var1);

   public native boolean aPJ();

   public native float aPG();

   public native boolean aPK();

   private native void aPo(float var1);

   private native void aPq();

   public native cJ aPE();

   private static native int aPR(int var0, long var1);

   public native int aPI();

   private native boolean aPp(gL$tj var1);

   private static native String aPQ(byte[] var0);

   private native float aPj();

   public native cu aPu();

   private static native int aPS(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aPk();

   @hG
   public native void aPd(gZ$tt var1);

   public native ct aPy();

   @hG
   public native void aPc(gM var1);

   private static native CallSite aPT(Lookup var0, String var1, MethodType var2);

   public native cu aPt();

   public native cD aPA();

   public native float aPF();

   public native ct aPv();

   @hG
   public native void aPe(gv var1);

   public native cu aPC();

   public native double aPL();

   public native Queue<Packet<?>> aPO();

   public native cu aPz();

   public native Entity aPH();

   public native boolean aPN();

   public native cC aPB();

   public fs() {
      long var1 = KMued ^ 10830137718686L;
      super(gf.aZL(151, false, gh.xwjCw));
      this.IcLmm = new ct(
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
      ct var10003 = this.IcLmm;
      int[] var10004 = new int[8];
      var10004[0] = 82;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 97;
      var10004[4] = 116;
      var10004[5] = 105;
      var10004[6] = 111;
      var10004[7] = 110;
      this.oBzcq = new cu(var10003, mr.clS(var10004));
      var10003 = this.IcLmm;
      var10004 = new int[7];
      var10004[0] = 73;
      var10004[1] = 110;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 116;
      this.YyudN = new cu(var10003, mr.clS(var10004));
      var10004 = new int[8];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 112;
      var10004[4] = 108;
      var10004[5] = 97;
      var10004[6] = 99;
      var10004[7] = 101;
      this.xtaAk = new ct(this, mr.clS(var10004));
      var10003 = this.xtaAk;
      var10004 = new int[6];
      var10004[0] = 65;
      var10004[1] = 108;
      var10004[2] = 119;
      var10004[3] = 97;
      var10004[4] = 121;
      var10004[5] = 115;
      this.HIGji = new cu(var10003, mr.clS(var10004));
      var10003 = this.xtaAk;
      var10004 = new int[19];
      var10004[0] = 87;
      var10004[1] = 105;
      var10004[2] = 116;
      var10004[3] = 104;
      var10004[4] = 32;
      var10004[5] = 75;
      var10004[6] = 110;
      var10004[7] = 111;
      var10004[8] = 99;
      var10004[9] = 107;
      var10004[10] = 98;
      var10004[11] = 97;
      var10004[12] = 99;
      var10004[13] = 107;
      var10004[14] = 32;
      var10004[15] = 79;
      var10004[16] = 110;
      var10004[17] = 108;
      var10004[18] = 121;
      this.FXNOb = new cu(var10003, mr.clS(var10004));
      var10004 = new int[19];
      var10004[0] = 75;
      var10004[1] = 110;
      var10004[2] = 111;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 98;
      var10004[6] = 97;
      var10004[7] = 99;
      var10004[8] = 107;
      var10004[9] = 32;
      var10004[10] = 68;
      var10004[11] = 105;
      var10004[12] = 114;
      var10004[13] = 101;
      var10004[14] = 99;
      var10004[15] = 116;
      var10004[16] = 105;
      var10004[17] = 111;
      var10004[18] = 110;
      this.wyZEk = new ct(this, mr.clS(var10004)).SO(0);
      var10003 = this.wyZEk;
      var10004 = new int[7];
      var10004[0] = 68;
      var10004[1] = 121;
      var10004[2] = 110;
      var10004[3] = 97;
      var10004[4] = 109;
      var10004[5] = 105;
      var10004[6] = 99;
      this.lOgKN = new cu(var10003, mr.clS(var10004));
      var10004 = new int[16];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 65;
      var10004[8] = 110;
      var10004[9] = 103;
      var10004[10] = 108;
      var10004[11] = 101;
      var10004[12] = 32;
      var10004[13] = 75;
      var10004[14] = 101;
      var10004[15] = 121;
      this.LjfJW = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[10];
      var10004[0] = 65;
      var10004[1] = 110;
      var10004[2] = 103;
      var10004[3] = 108;
      var10004[4] = 101;
      var10004[5] = 32;
      var10004[6] = 83;
      var10004[7] = 116;
      var10004[8] = 101;
      var10004[9] = 112;
      this.hyauK = new cC(this, mr.clS(var10004)).Vy(1.0).VA(90.0).Vw(1.0).Vx(180.0);
      var10003 = this.wyZEk;
      var10004 = new int[9];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 114;
      var10004[3] = 101;
      var10004[4] = 99;
      var10004[5] = 116;
      var10004[6] = 105;
      var10004[7] = 111;
      var10004[8] = 110;
      this.clxNa = new cu(var10003, mr.clS(var10004));
      var10004 = new int[15];
      var10004[0] = 71;
      var10004[1] = 105;
      var10004[2] = 118;
      var10004[3] = 101;
      var10004[4] = 110;
      var10004[5] = 32;
      var10004[6] = 68;
      var10004[7] = 105;
      var10004[8] = 114;
      var10004[9] = 101;
      var10004[10] = 99;
      var10004[11] = 116;
      var10004[12] = 105;
      var10004[13] = 111;
      var10004[14] = 110;
      this.jJzSe = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(-180.0).Vx(180.0).VA(180.0).Vz(aRvFo);
      var10004 = new int[13];
      var10004[0] = 72;
      var10004[1] = 105;
      var10004[2] = 100;
      var10004[3] = 101;
      var10004[4] = 32;
      var10004[5] = 82;
      var10004[6] = 111;
      var10004[7] = 116;
      var10004[8] = 97;
      var10004[9] = 116;
      var10004[10] = 105;
      var10004[11] = 111;
      var10004[12] = 110;
      this.DtLvL = new cJ(this, mr.clS(var10004));
      this.LypUB = 180.0F;
      this.bapCK = new ConcurrentLinkedQueue<>();
      this.LjfJW.Vf(this.lOgKN::SZ);
      this.hyauK.Vf(this.lOgKN::SZ);
      this.jJzSe.Vf(this.clxNa::SZ);
      this.DtLvL.Vf(this.oBzcq::SZ);
   }

   static {
      Loader.doInit(fs.class);
      _c0e223c9674381b1589f1c334bd979ed();
   }

   private static native void _c0e223c9674381b1589f1c334bd979ed();

   @Override
   public native void YO();
}
