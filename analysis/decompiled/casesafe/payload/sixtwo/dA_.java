package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1309;

public class dA extends gg {
   private final cC RaxVQ;
   private final ct woeNK;
   private final cu sGPoP;
   private final cu thWij;
   private final cu QVTVw;
   private final cC mFDgP;
   private final cD pWbaz;
   private final cJ srWas;
   private final cJ MQFiv;
   private final cC qWvkv;
   private final mT akfwU;
   private boolean NevtZ;
   private static long wsPfp;
   private static String[] WJnaE;
   private static String[] dhjwW;
   private static Map UYfhE;
   private static long[] aBJpx;
   private static Integer[] ZujIH;
   private static Map oahUV;

   private static native void _b817883ed9e0e146850884010237390b();

   private static native MatchException aki(MatchException var0);

   public dA() {
      long var1 = wsPfp ^ 65854684705015L;
      super(gf.aZL(akp<"p">(22137, 1049999829858674947L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[akp<"p">(6360, 5552553103874500603L ^ var1)];
      var10004[0] = akp<"p">(10702, 1870471800668755640L ^ var1);
      var10004[1] = akp<"p">(15408, 4185677796974986002L ^ var1);
      var10004[2] = akp<"p">(24910, 225648826593730172L ^ var1);
      var10004[3] = akp<"p">(26891, 7098111234846053915L ^ var1);
      var10004[4] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[5] = akp<"p">(9689, 861952653212588737L ^ var1);
      var10004[akp<"p">(19899, 2262224135982051990L ^ var1)] = akp<"p">(30648, 8574027706189170833L ^ var1);
      var10004[akp<"p">(5525, 5473420773043874450L ^ var1)] = akp<"p">(31285, 4850738075716863279L ^ var1);
      var10004[akp<"p">(16312, 6227153979865366717L ^ var1)] = akp<"p">(1534, 3832263830085745381L ^ var1);
      var10004[akp<"p">(2025, 5827793950359992470L ^ var1)] = akp<"p">(2653, 2981292842541790502L ^ var1);
      var10004[akp<"p">(5299, 2587082931298872270L ^ var1)] = akp<"p">(23564, 5600913174807077644L ^ var1);
      var10004[akp<"p">(15460, 8396497484917277548L ^ var1)] = akp<"p">(7072, 4069882221116630168L ^ var1);
      var10004[akp<"p">(27851, 4042443001017586687L ^ var1)] = akp<"p">(15523, 222192940811387863L ^ var1);
      var10004[akp<"p">(841, 2073552882487245946L ^ var1)] = akp<"p">(26502, 4513424031788128393L ^ var1);
      var10004[akp<"p">(28184, 5037645914791891246L ^ var1)] = akp<"p">(23208, 6974986060237956542L ^ var1);
      this.RaxVQ = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(10.0).Vz(akm<"x">(1203, 2131115762473815021L ^ var1));
      var10004 = new int[akp<"p">(21266, 8656154568314874938L ^ var1)];
      var10004[0] = akp<"p">(15591, 7978675546287571904L ^ var1);
      var10004[1] = akp<"p">(23699, 5653601870085415834L ^ var1);
      var10004[2] = akp<"p">(1732, 5571966485572008391L ^ var1);
      var10004[3] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[4] = akp<"p">(30536, 4928926485788870774L ^ var1);
      var10004[5] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[akp<"p">(11994, 2335779751974343128L ^ var1)] = akp<"p">(19823, 6510633541318079075L ^ var1);
      var10004[akp<"p">(13336, 8951662353615686502L ^ var1)] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[akp<"p">(26696, 5335641780517951313L ^ var1)] = akp<"p">(28511, 423051552168398915L ^ var1);
      var10004[akp<"p">(4283, 5364648224195260292L ^ var1)] = akp<"p">(31111, 2190803442109728423L ^ var1);
      var10004[akp<"p">(17438, 8556219295674923834L ^ var1)] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[akp<"p">(10758, 4640927725844010298L ^ var1)] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[akp<"p">(3940, 5103431274778112019L ^ var1)] = akp<"p">(1223, 8929874126581316585L ^ var1);
      var10004[akp<"p">(2586, 3577752730876851516L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(5702, 6770479459565676884L ^ var1)] = akp<"p">(18191, 4965356524894484494L ^ var1);
      var10004[akp<"p">(7757, 7146697228911092029L ^ var1)] = akp<"p">(23790, 5829898471428580311L ^ var1);
      this.woeNK = new ct(this, mr.clS(var10004));
      this.sGPoP = new cu(
         this.woeNK,
         mr.clS(
            new int[]{
               akp<"p">(9275, 4565760146210986764L ^ var1),
               akp<"p">(7893, 6004167155032138153L ^ var1),
               akp<"p">(2276, 8751318543507371976L ^ var1),
               akp<"p">(23790, 5829898471428580311L ^ var1)
            }
         )
      );
      ct var10003 = this.woeNK;
      var10004 = new int[akp<"p">(11994, 2335779751974343128L ^ var1)];
      var10004[0] = akp<"p">(2972, 8754457172680684705L ^ var1);
      var10004[1] = akp<"p">(2276, 8751318543507371976L ^ var1);
      var10004[2] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[3] = akp<"p">(28340, 3079136249093771683L ^ var1);
      var10004[4] = akp<"p">(23699, 5653601870085415834L ^ var1);
      var10004[5] = akp<"p">(2276, 8751318543507371976L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(11616, 2664940970016641642L ^ var1);
      this.thWij = new cu(var10003, mr.clS(var10004));
      this.QVTVw = new cu(
            this.woeNK,
            mr.clS(
               new int[]{
                  akp<"p">(15762, 3396820227831661204L ^ var1),
                  akp<"p">(18789, 6712368091087599227L ^ var1),
                  akp<"p">(30483, 7310986628902897766L ^ var1),
                  akp<"p">(7893, 6004167155032138153L ^ var1)
               }
            )
         )
         .SY();
      var10004 = new int[akp<"p">(28093, 2762144717052695214L ^ var1)];
      var10004[0] = akp<"p">(15591, 7978675546287571904L ^ var1);
      var10004[1] = akp<"p">(23699, 5653601870085415834L ^ var1);
      var10004[2] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[3] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[4] = akp<"p">(30536, 4928926485788870774L ^ var1);
      var10004[5] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[akp<"p">(11994, 2335779751974343128L ^ var1)] = akp<"p">(2575, 1802299935965984119L ^ var1);
      var10004[akp<"p">(13336, 8951662353615686502L ^ var1)] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[akp<"p">(26696, 5335641780517951313L ^ var1)] = akp<"p">(7549, 1777693873822442061L ^ var1);
      var10004[akp<"p">(4283, 5364648224195260292L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(17438, 8556219295674923834L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(10758, 4640927725844010298L ^ var1)] = akp<"p">(26891, 7098111234846053915L ^ var1);
      var10004[akp<"p">(3940, 5103431274778112019L ^ var1)] = akp<"p">(11616, 2664940970016641642L ^ var1);
      var10004[akp<"p">(2586, 3577752730876851516L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(5702, 6770479459565676884L ^ var1)] = akp<"p">(30536, 4928926485788870774L ^ var1);
      var10004[akp<"p">(23937, 8374291220319298188L ^ var1)] = akp<"p">(2276, 8751318543507371976L ^ var1);
      this.mFDgP = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(60.0).VA(2.0).Vz(akm<"x">(18609, 2274318960335456237L ^ var1));
      var10004 = new int[akp<"p">(10758, 4640927725844010298L ^ var1)];
      var10004[0] = akp<"p">(15591, 7978675546287571904L ^ var1);
      var10004[1] = akp<"p">(23699, 5653601870085415834L ^ var1);
      var10004[2] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[3] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[4] = akp<"p">(30536, 4928926485788870774L ^ var1);
      var10004[5] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[akp<"p">(11994, 2335779751974343128L ^ var1)] = akp<"p">(2575, 1802299935965984119L ^ var1);
      var10004[akp<"p">(13336, 8951662353615686502L ^ var1)] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[akp<"p">(26696, 5335641780517951313L ^ var1)] = akp<"p">(1820, 249727334983350326L ^ var1);
      var10004[akp<"p">(4283, 5364648224195260292L ^ var1)] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[akp<"p">(17438, 8556219295674923834L ^ var1)] = akp<"p">(25407, 3447799412801559594L ^ var1);
      this.pWbaz = new cD(this, mr.clS(var10004)).VO(akp<"p">(11413, 3610380058365563777L ^ var1));
      var10004 = new int[akp<"p">(3940, 5103431274778112019L ^ var1)];
      var10004[0] = akp<"p">(6336, 4070108128515925989L ^ var1);
      var10004[1] = akp<"p">(26891, 7098111234846053915L ^ var1);
      var10004[2] = akp<"p">(5548, 3624493185851435709L ^ var1);
      var10004[3] = akp<"p">(30483, 7310986628902897766L ^ var1);
      var10004[4] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[5] = akp<"p">(17529, 3771158381087980388L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[akp<"p">(11994, 2335779751974343128L ^ var1)] = akp<"p">(5905, 3234821881345058878L ^ var1);
      var10004[akp<"p">(13336, 8951662353615686502L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(26696, 5335641780517951313L ^ var1)] = akp<"p">(30589, 513599044646979655L ^ var1);
      var10004[akp<"p">(4283, 5364648224195260292L ^ var1)] = akp<"p">(2276, 8751318543507371976L ^ var1);
      var10004[akp<"p">(17438, 8556219295674923834L ^ var1)] = akp<"p">(7400, 2553242953580356579L ^ var1);
      var10004[akp<"p">(10758, 4640927725844010298L ^ var1)] = akp<"p">(23790, 5829898471428580311L ^ var1);
      this.srWas = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[akp<"p">(26696, 5335641780517951313L ^ var1)];
      var10004[0] = akp<"p">(25629, 2410501218384927513L ^ var1);
      var10004[1] = akp<"p">(7600, 5752307582463189679L ^ var1);
      var10004[2] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[3] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[4] = akp<"p">(31111, 2190803442109728423L ^ var1);
      var10004[5] = akp<"p">(27001, 1737085573369091703L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(11994, 2335779751974343128L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(13336, 8951662353615686502L ^ var1)] = akp<"p">(30483, 7310986628902897766L ^ var1);
      this.MQFiv = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[akp<"p">(5702, 6770479459565676884L ^ var1)];
      var10004[0] = akp<"p">(25629, 2410501218384927513L ^ var1);
      var10004[1] = akp<"p">(3358, 1263206339434033701L ^ var1);
      var10004[2] = akp<"p">(23790, 5829898471428580311L ^ var1);
      var10004[3] = akp<"p">(23767, 1018397884915409890L ^ var1);
      var10004[4] = akp<"p">(31111, 2190803442109728423L ^ var1);
      var10004[5] = akp<"p">(17219, 2285679324273867834L ^ var1);
      var10004[akp<"p">(2939, 4129751784273589328L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(11994, 2335779751974343128L ^ var1)] = akp<"p">(7893, 6004167155032138153L ^ var1);
      var10004[akp<"p">(13336, 8951662353615686502L ^ var1)] = akp<"p">(30483, 7310986628902897766L ^ var1);
      var10004[akp<"p">(26696, 5335641780517951313L ^ var1)] = akp<"p">(3536, 6991162733206156001L ^ var1);
      var10004[akp<"p">(4283, 5364648224195260292L ^ var1)] = akp<"p">(14405, 6836328125260367716L ^ var1);
      var10004[akp<"p">(17438, 8556219295674923834L ^ var1)] = akp<"p">(17529, 3771158381087980388L ^ var1);
      var10004[akp<"p">(10758, 4640927725844010298L ^ var1)] = akp<"p">(26891, 7098111234846053915L ^ var1);
      var10004[akp<"p">(3940, 5103431274778112019L ^ var1)] = akp<"p">(30589, 513599044646979655L ^ var1);
      var10004[akp<"p">(2586, 3577752730876851516L ^ var1)] = akp<"p">(23790, 5829898471428580311L ^ var1);
      this.qWvkv = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(0.0).Vx(5.0).VA(3.0).Vz(akm<"x">(10134, 5610899355960469705L ^ var1));
      this.akfwU = mT.cpz();
      this.pWbaz.Vf(this.thWij::SZ);
      this.mFDgP.Vf(this.QVTVw::SZ);
   }

   static {
      Loader.doInit(dA.class);
      _b817883ed9e0e146850884010237390b();
   }

   public native cu aka();

   private static native CallSite akp(Lookup var0, String var1, MethodType var2);

   public native mT akg();

   public native ct ajX();

   private static native CallSite akm(Lookup var0, String var1, MethodType var2);

   public native boolean akh();

   private static native String akk(int var0, long var1);

   public native cC ajW();

   private static native String akj(byte[] var0);

   private static native Object akl(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native cJ ake();

   private static native int ako(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native cu ajY();

   public native cC akb();

   public native boolean ajV(class_1309 var1);

   @hG
   public native void ajT(gH$th var1);

   public native cu ajZ();

   @hG
   public native void ajU(gA var1);

   public native cC akf();

   private static native int akn(int var0, long var1);

   public native cD akc();

   public native cJ akd();

   @Override
   public native void YO();
}
