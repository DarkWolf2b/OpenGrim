package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;

public class eX extends gg {
   private final ct tGIRe;
   private final cu ctwjT;
   private final cu Jtsgl;
   private final cJ ikcZw;
   private final cA qSoHb;
   private final cJ mmJaL;
   private final cA xdsyS;
   private final cA GIPFr;
   private final cC ymWjd;
   private final cA QJeGA;
   private final cJ JeboL;
   private final cJ JCATM;
   private final cJ KfwhF;
   private final cJ RGmUw;
   private final cD hPUWA;
   private final cK kecKJ;
   private final ct KUvew;
   private final cu EYjJv;
   private final cu lxmFM;
   private final cJ NZxVb;
   private final mT iWmfO;
   private final mT lFxwN;
   private final mT ipGCv;
   private final mT UviIK;
   private final List<BlockPos> FfayM;
   private boolean qMxUf;
   private boolean FjOEe;
   private BlockPos UmOLR;
   private static long syGtg;
   private static String[] ABdpa;
   private static String[] roBjv;
   private static Map hKmNH;
   private static long[] NcYvz;
   private static Integer[] lgFAc;
   private static Map tIAEm;

   private static native void _ba55b7ccc8fde006d5a9a6820279775e();

   public eX() {
      long var1 = syGtg ^ 85676081670611L;
      super(gf.aZL(27, false, gh.xwjCw));
      this.tGIRe = new ct(
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
      this.ctwjT = new cu(
         this.tGIRe,
         mr.clS(
            new int[]{
               80,
               114,
               101,
               115,
               115
            }
         )
      );
      this.Jtsgl = new cu(
         this.tGIRe,
         mr.clS(
            new int[]{
               72,
               111,
               108,
               100
            }
         )
      );
      int[] var10004 = new int[14];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 114;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 65;
      var10004[8] = 110;
      var10004[9] = 99;
      var10004[10] = 104;
      var10004[11] = 111;
      var10004[12] = 114;
      var10004[13] = 115;
      this.ikcZw = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[12];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 114;
      var10004[4] = 103;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.qSoHb = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks");
      var10004 = new int[16];
      var10004[0] = 68;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 111;
      var10004[4] = 110;
      var10004[5] = 97;
      var10004[6] = 116;
      var10004[7] = 101;
      var10004[8] = 32;
      var10004[9] = 65;
      var10004[10] = 110;
      var10004[11] = 99;
      var10004[12] = 104;
      var10004[13] = 111;
      var10004[14] = 114;
      var10004[15] = 115;
      this.mmJaL = new cJ(this, mr.clS(var10004)).WE(true);
      boolean var10000 = eV.aEq();
      int[] var10005 = new int[14];
      var10005[0] = 68;
      var10005[1] = 101;
      var10005[2] = 116;
      var10005[3] = 111;
      var10005[4] = 110;
      var10005[5] = 97;
      var10005[6] = 116;
      var10005[7] = 101;
      var10005[8] = 32;
      var10005[9] = 68;
      var10005[10] = 101;
      var10005[11] = 108;
      var10005[12] = 97;
      var10005[13] = 121;
      this.xdsyS = new cA(this, mr.clS(var10005)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks");
      var10005 = new int[12];
      var10005[0] = 65;
      var10005[1] = 110;
      var10005[2] = 99;
      var10005[3] = 104;
      var10005[4] = 111;
      var10005[5] = 114;
      var10005[6] = 32;
      var10005[7] = 68;
      var10005[8] = 101;
      var10005[9] = 108;
      var10005[10] = 97;
      var10005[11] = 121;
      this.GIPFr = new cA(this, mr.clS(var10005)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks");
      var10005 = new int[13];
      var10005[0] = 68;
      var10005[1] = 101;
      var10005[2] = 116;
      var10005[3] = 111;
      var10005[4] = 110;
      var10005[5] = 97;
      var10005[6] = 116;
      var10005[7] = 101;
      var10005[8] = 32;
      var10005[9] = 73;
      var10005[10] = 116;
      var10005[11] = 101;
      var10005[12] = 109;
      this.ymWjd = new cC(this, mr.clS(var10005)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(" slot");
      var10005 = new int[12];
      var10005[0] = 83;
      var10005[1] = 119;
      var10005[2] = 105;
      var10005[3] = 116;
      var10005[4] = 99;
      var10005[5] = 104;
      var10005[6] = 32;
      var10005[7] = 68;
      var10005[8] = 101;
      var10005[9] = 108;
      var10005[10] = 97;
      var10005[11] = 121;
      this.QJeGA = new cA(this, mr.clS(var10005)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(" ticks");
      var10005 = new int[12];
      var10005[0] = 79;
      var10005[1] = 110;
      var10005[2] = 108;
      var10005[3] = 121;
      var10005[4] = 32;
      var10005[5] = 70;
      var10005[6] = 111;
      var10005[7] = 114;
      var10005[8] = 32;
      var10005[9] = 79;
      var10005[10] = 119;
      var10005[11] = 110;
      this.JeboL = new cJ(this, mr.clS(var10005)).WE(false);
      var10005 = new int[13];
      var10005[0] = 67;
      var10005[1] = 97;
      var10005[2] = 110;
      var10005[3] = 99;
      var10005[4] = 101;
      var10005[5] = 108;
      var10005[6] = 32;
      var10005[7] = 79;
      var10005[8] = 110;
      var10005[9] = 32;
      var10005[10] = 85;
      var10005[11] = 115;
      var10005[12] = 101;
      this.JCATM = new cJ(this, mr.clS(var10005)).WE(true);
      boolean var3 = var10000;

      try {
         var10004 = new int[11];
         var10004[0] = 83;
         var10004[1] = 97;
         var10004[2] = 102;
         var10004[3] = 101;
         var10004[4] = 32;
         var10004[5] = 65;
         var10004[6] = 110;
         var10004[7] = 99;
         var10004[8] = 104;
         var10004[9] = 111;
         var10004[10] = 114;
         this.KfwhF = new cJ(this, mr.clS(var10004)).WE(false);
         var10004 = new int[16];
         var10004[0] = 83;
         var10004[1] = 97;
         var10004[2] = 102;
         var10004[3] = 101;
         var10004[4] = 32;
         var10004[5] = 65;
         var10004[6] = 110;
         var10004[7] = 99;
         var10004[8] = 104;
         var10004[9] = 111;
         var10004[10] = 114;
         var10004[11] = 32;
         var10004[12] = 72;
         var10004[13] = 111;
         var10004[14] = 108;
         var10004[15] = 100;
         this.RGmUw = new cJ(this, mr.clS(var10004)).WE(false);
         var10004 = new int[8];
         var10004[0] = 72;
         var10004[1] = 111;
         var10004[2] = 108;
         var10004[3] = 100;
         var10004[4] = 32;
         var10004[5] = 75;
         var10004[6] = 101;
         var10004[7] = 121;
         this.hPUWA = new cD(this, mr.clS(var10004)).VO(-999);
         var10004 = new int[18];
         var10004[0] = 83;
         var10004[1] = 97;
         var10004[2] = 102;
         var10004[3] = 101;
         var10004[4] = 32;
         var10004[5] = 65;
         var10004[6] = 110;
         var10004[7] = 99;
         var10004[8] = 104;
         var10004[9] = 111;
         var10004[10] = 114;
         var10004[11] = 32;
         var10004[12] = 66;
         var10004[13] = 108;
         var10004[14] = 111;
         var10004[15] = 99;
         var10004[16] = 107;
         var10004[17] = 115;
         this.kecKJ = new cK(this, mr.clS(var10004)).WM(jc.GjreY).WN(Items.OBSIDIAN, Items.GLOWSTONE);
         this.KUvew = new ct(
            this,
            mr.clS(
               new int[]{
                  87,
                  104,
                  101,
                  110
               }
            )
         );
         ct var10003 = this.KUvew;
         var10004 = new int[13];
         var10004[0] = 66;
         var10004[1] = 101;
         var10004[2] = 102;
         var10004[3] = 111;
         var10004[4] = 114;
         var10004[5] = 101;
         var10004[6] = 32;
         var10004[7] = 67;
         var10004[8] = 104;
         var10004[9] = 97;
         var10004[10] = 114;
         var10004[11] = 103;
         var10004[12] = 101;
         this.EYjJv = new cu(var10003, mr.clS(var10004));
         var10003 = this.KUvew;
         var10004 = new int[12];
         var10004[0] = 65;
         var10004[1] = 102;
         var10004[2] = 116;
         var10004[3] = 101;
         var10004[4] = 114;
         var10004[5] = 32;
         var10004[6] = 67;
         var10004[7] = 104;
         var10004[8] = 97;
         var10004[9] = 114;
         var10004[10] = 103;
         var10004[11] = 101;
         this.lxmFM = new cu(var10003, mr.clS(var10004));
         var10004 = new int[8];
         var10004[0] = 68;
         var10004[1] = 105;
         var10004[2] = 97;
         var10004[3] = 103;
         var10004[4] = 111;
         var10004[5] = 110;
         var10004[6] = 97;
         var10004[7] = 108;
         this.NZxVb = new cJ(this, mr.clS(var10004)).WE(true);
         this.iWmfO = mT.cpz();
         this.lFxwN = mT.cpz();
         this.ipGCv = mT.cpz();
         this.UviIK = mT.cpz();
         this.FfayM = new ArrayList<>();
         this.qSoHb.Vf(this.ikcZw::WF);
         this.xdsyS.Vf(this.mmJaL::WF);
         this.hPUWA.Vf(this.RGmUw::WF);
         this.kecKJ.Vf(this.KfwhF::WF);
         this.KUvew.Vf(this.KfwhF::WF);
         this.NZxVb.Vf(this.KfwhF::WF);
         if (var3) {
            iS.bwK("T2qMoc");
         }
      } catch (MatchException var4) {
         throw aFw(var4);
      }
   }

   static {
      Loader.doInit(eX.class);
      _ba55b7ccc8fde006d5a9a6820279775e();
   }

   public native cu aEV();

   public native cJ aEW();

   public native cA aEX();

   public native cJ aEY();

   private native void aEQ();

   public native ct aET();

   private native void aER();

   private native void aES(BlockHitResult var1);

   public native cu aEU();

   @hG
   public native void aEP(gW$tq var1);

   public native cJ aFe();

   public native cD aFh();

   public native mT aFn();

   public native BlockPos aFu();

   public native cK aFi();

   public native cJ aFf();

   public native boolean aFs();

   public native cJ aFm();

   public native ct aFj();

   private static native String aFx(byte[] var0);

   public native cJ aFd();

   public native cA aFc();

   public native mT aFp();

   private static native int aFC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aFy(int var0, long var1);

   public native cu aFk();

   public native cA aEZ();

   public native cA aFa();

   public native boolean aFt();

   public native cC aFb();

   public native mT aFo();

   private static native Object aFz(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aFB(int var0, long var1);

   public native cJ aFg();

   public native cu aFl();

   public native List<BlockPos> aFr();

   public native mT aFq();

   private static native CallSite aFD(Lookup var0, String var1, MethodType var2);

   private static native CallSite aFA(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aEM(gH$th var1);

   @hG
   public native void aEN(gv var1);

   private static native MatchException aFw(MatchException var0);

   @hG
   public native void aEO(gO$tm var1);

   @Override
   public native void YO();
}
