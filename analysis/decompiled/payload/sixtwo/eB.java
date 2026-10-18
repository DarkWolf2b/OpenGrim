package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1297;
import net.minecraft.class_2828;

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
      super(gf.aZL(awa<"y">(21999, 6724559286194045779L ^ var1), false, gh.xgeEn).aZS(false));
      int[] var10004 = new int[awa<"y">(22877, 7477865983631101858L ^ var1)];
      var10004[0] = awa<"y">(15187, 1628430300273634780L ^ var1);
      var10004[1] = awa<"y">(8330, 1660211888977212942L ^ var1);
      var10004[2] = awa<"y">(26434, 100783015730098651L ^ var1);
      var10004[3] = awa<"y">(25797, 39993403666281023L ^ var1);
      var10004[4] = awa<"y">(13624, 4479407193292202953L ^ var1);
      var10004[5] = awa<"y">(1334, 2621709556303516584L ^ var1);
      var10004[awa<"y">(15376, 4072043727571774115L ^ var1)] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[awa<"y">(9989, 4561545969463619972L ^ var1)] = awa<"y">(7885, 4110237958052792382L ^ var1);
      var10004[awa<"y">(32718, 1832989871182981471L ^ var1)] = awa<"y">(16846, 8921260559275071326L ^ var1);
      this.xPGtf = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[awa<"y">(9471, 3215178424982565489L ^ var1)];
      var10004[0] = awa<"y">(18370, 2642251760446017870L ^ var1);
      var10004[1] = awa<"y">(31243, 7614358696688626825L ^ var1);
      var10004[2] = awa<"y">(28971, 7057112789800232854L ^ var1);
      var10004[3] = awa<"y">(13365, 1131764489379898013L ^ var1);
      var10004[4] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[5] = awa<"y">(23395, 8204191876437872065L ^ var1);
      var10004[awa<"y">(2293, 6898197245130006114L ^ var1)] = awa<"y">(12703, 3051457752841086780L ^ var1);
      var10004[awa<"y">(31627, 5485576898041195837L ^ var1)] = awa<"y">(10039, 498799674330345889L ^ var1);
      var10004[awa<"y">(3286, 5536819383193164381L ^ var1)] = awa<"y">(9899, 4838252992435023887L ^ var1);
      var10004[awa<"y">(8423, 2264390228978955856L ^ var1)] = awa<"y">(2343, 4141856865494392763L ^ var1);
      var10004[awa<"y">(31486, 1972321238372494348L ^ var1)] = awa<"y">(14394, 7032062136872922773L ^ var1);
      var10004[awa<"y">(30456, 7736808477080526914L ^ var1)] = awa<"y">(17607, 4397492552495895143L ^ var1);
      var10004[awa<"y">(16052, 2753239783142221825L ^ var1)] = awa<"y">(17607, 4397492552495895143L ^ var1);
      var10004[awa<"y">(14556, 3015864925973966408L ^ var1)] = awa<"y">(26659, 8002848027260665498L ^ var1);
      var10004[awa<"y">(31752, 2892749476924041872L ^ var1)] = awa<"y">(9899, 4838252992435023887L ^ var1);
      var10004[awa<"y">(20286, 3040708616947210645L ^ var1)] = awa<"y">(22833, 1778492826434736065L ^ var1);
      var10004[awa<"y">(31640, 919279659152616756L ^ var1)] = awa<"y">(16401, 2164768648835045094L ^ var1);
      var10004[awa<"y">(30584, 7440876616661213649L ^ var1)] = awa<"y">(13365, 1131764489379898013L ^ var1);
      var10004[awa<"y">(12424, 6795194889422038542L ^ var1)] = awa<"y">(23395, 8204191876437872065L ^ var1);
      var10004[awa<"y">(15728, 3144413277781650315L ^ var1)] = awa<"y">(22075, 8157902154937991345L ^ var1);
      this.hojzx = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[awa<"y">(3286, 5536819383193164381L ^ var1)];
      var10004[0] = awa<"y">(5673, 3729655514699776151L ^ var1);
      var10004[1] = awa<"y">(6585, 3050523297736675103L ^ var1);
      var10004[2] = awa<"y">(14416, 4473299556771262169L ^ var1);
      var10004[3] = awa<"y">(9899, 4838252992435023887L ^ var1);
      var10004[4] = awa<"y">(17363, 608403122185672061L ^ var1);
      var10004[5] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[awa<"y">(2293, 6898197245130006114L ^ var1)] = awa<"y">(9799, 379636906314264753L ^ var1);
      var10004[awa<"y">(31627, 5485576898041195837L ^ var1)] = awa<"y">(17607, 4397492552495895143L ^ var1);
      this.VCxLS = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(20.0).VA(1.0).Vz(avX<"b">(9465, 1884569029540277762L ^ var1));
      this.fjDMc = new cC(
            this,
            mr.clS(
               new int[]{
                  awa<"y">(63, 8730450935818933901L ^ var1),
                  awa<"y">(17607, 4397492552495895143L ^ var1),
                  awa<"y">(5123, 5553727715827827450L ^ var1),
                  awa<"y">(16401, 2164768648835045094L ^ var1),
                  awa<"y">(306, 6233317701997909927L ^ var1)
               }
            )
         )
         .Vy(1.0)
         .Vw(1.0)
         .Vx(200.0)
         .VA(20.0)
         .Vz(avX<"b">(19980, 8232218561431176438L ^ var1));
      this.wBCaT = new cC(
            this,
            mr.clS(
               new int[]{
                  awa<"y">(25243, 2898954899664417854L ^ var1),
                  awa<"y">(13331, 4030405847165198990L ^ var1),
                  awa<"y">(17607, 4397492552495895143L ^ var1),
                  awa<"y">(17607, 4397492552495895143L ^ var1),
                  awa<"y">(7967, 2545104790688057760L ^ var1)
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
               awa<"y">(6314, 8077856656003255808L ^ var1),
               awa<"y">(14495, 8842853344186592781L ^ var1),
               awa<"y">(7967, 2545104790688057760L ^ var1),
               awa<"y">(17607, 4397492552495895143L ^ var1)
            }
         )
      );
      ct var10003 = this.Kqwum;
      var10004 = new int[awa<"y">(8423, 2264390228978955856L ^ var1)];
      var10004[0] = awa<"y">(29853, 693593301554471482L ^ var1);
      var10004[1] = awa<"y">(28198, 6691158805929310389L ^ var1);
      var10004[2] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[3] = awa<"y">(5123, 5553727715827827450L ^ var1);
      var10004[4] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[5] = awa<"y">(13365, 1131764489379898013L ^ var1);
      var10004[awa<"y">(2293, 6898197245130006114L ^ var1)] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[awa<"y">(31627, 5485576898041195837L ^ var1)] = awa<"y">(17607, 4397492552495895143L ^ var1);
      var10004[awa<"y">(3286, 5536819383193164381L ^ var1)] = awa<"y">(14938, 7889352401477102809L ^ var1);
      this.YqWYM = new cu(var10003, mr.clS(var10004));
      var10003 = this.Kqwum;
      var10004 = new int[awa<"y">(3286, 5536819383193164381L ^ var1)];
      var10004[0] = awa<"y">(17854, 259902661879829307L ^ var1);
      var10004[1] = awa<"y">(17607, 4397492552495895143L ^ var1);
      var10004[2] = awa<"y">(5123, 5553727715827827450L ^ var1);
      var10004[3] = awa<"y">(13461, 7805255004096455277L ^ var1);
      var10004[4] = awa<"y">(23395, 8204191876437872065L ^ var1);
      var10004[5] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[awa<"y">(2293, 6898197245130006114L ^ var1)] = awa<"y">(13365, 1131764489379898013L ^ var1);
      var10004[awa<"y">(31627, 5485576898041195837L ^ var1)] = awa<"y">(11525, 5781127905509145508L ^ var1);
      this.wKOWY = new cu(var10003, mr.clS(var10004));
      var10004 = new int[awa<"y">(12452, 7951204230681159189L ^ var1)];
      var10004[0] = awa<"y">(29853, 693593301554471482L ^ var1);
      var10004[1] = awa<"y">(26093, 5471029440696660761L ^ var1);
      var10004[2] = awa<"y">(13365, 1131764489379898013L ^ var1);
      var10004[3] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[4] = awa<"y">(9899, 4838252992435023887L ^ var1);
      var10004[5] = awa<"y">(19245, 8651531344212663705L ^ var1);
      var10004[awa<"y">(2293, 6898197245130006114L ^ var1)] = awa<"y">(5396, 8003985005082919827L ^ var1);
      var10004[awa<"y">(31627, 5485576898041195837L ^ var1)] = awa<"y">(23395, 8204191876437872065L ^ var1);
      var10004[awa<"y">(3286, 5536819383193164381L ^ var1)] = awa<"y">(1587, 2554211843379941574L ^ var1);
      var10004[awa<"y">(8423, 2264390228978955856L ^ var1)] = awa<"y">(9899, 4838252992435023887L ^ var1);
      var10004[awa<"y">(16699, 1061584146400057238L ^ var1)] = awa<"y">(6314, 8077856656003255808L ^ var1);
      var10004[awa<"y">(3488, 515262898918546235L ^ var1)] = awa<"y">(13461, 7805255004096455277L ^ var1);
      var10004[awa<"y">(19502, 7746829261890394798L ^ var1)] = awa<"y">(7967, 2545104790688057760L ^ var1);
      var10004[awa<"y">(26255, 4807411170803757063L ^ var1)] = awa<"y">(17607, 4397492552495895143L ^ var1);
      this.MoNPF = new ct(this, mr.clS(var10004));
      var10003 = this.MoNPF;
      var10004 = new int[awa<"y">(2293, 6898197245130006114L ^ var1)];
      var10004[0] = awa<"y">(3134, 910332629033572997L ^ var1);
      var10004[1] = awa<"y">(13461, 7805255004096455277L ^ var1);
      var10004[2] = awa<"y">(1867, 8465232901956489681L ^ var1);
      var10004[3] = awa<"y">(19701, 7579465419598797381L ^ var1);
      var10004[4] = awa<"y">(16401, 2164768648835045094L ^ var1);
      var10004[5] = awa<"y">(5123, 5553727715827827450L ^ var1);
      this.PgiSy = new cu(var10003, mr.clS(var10004));
      var10003 = this.MoNPF;
      var10004 = new int[awa<"y">(2293, 6898197245130006114L ^ var1)];
      var10004[0] = awa<"y">(6974, 2174794544691269025L ^ var1);
      var10004[1] = awa<"y">(16401, 2164768648835045094L ^ var1);
      var10004[2] = awa<"y">(23395, 8204191876437872065L ^ var1);
      var10004[3] = awa<"y">(1587, 2554211843379941574L ^ var1);
      var10004[4] = awa<"y">(17607, 4397492552495895143L ^ var1);
      var10004[5] = awa<"y">(13365, 1131764489379898013L ^ var1);
      this.TJdZl = new cu(var10003, mr.clS(var10004));
      this.fklcz = new cu(
         this.MoNPF,
         mr.clS(
            new int[]{
               awa<"y">(22717, 3292403745229377029L ^ var1),
               awa<"y">(13461, 7805255004096455277L ^ var1),
               awa<"y">(26093, 5471029440696660761L ^ var1),
               awa<"y">(17607, 4397492552495895143L ^ var1)
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

   private native boolean avy(class_1297 var1);

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

   private native void avt(class_2828 var1, double var2);

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
