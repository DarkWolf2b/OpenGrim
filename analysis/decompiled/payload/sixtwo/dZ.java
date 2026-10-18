package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1792;

public class dZ extends gg {
   private final cJ Wkwey;
   private final cJ RfFUJ;
   private final cJ whhdh;
   private final cK tfzyX;
   private final cA uafIf;
   private final cJ AKRql;
   private final cJ hSAvy;
   private final cz vmwmS;
   private boolean dxMyh;
   private static long reyBC;
   private static String MCipD;
   private static long[] jJpjG;
   private static Integer[] GXLKq;
   private static Map wJISY;

   private static native void _2f96000a03dc0620ecce8d659f97acb2();

   public dZ() {
      long var1 = reyBC ^ 126376531928876L;
      super(gf.aZL(arh<"b">(30758, 245416714439803151L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[arh<"b">(17574, 132434575713304032L ^ var1)];
      var10004[0] = arh<"b">(17072, 1761420858514439074L ^ var1);
      var10004[1] = arh<"b">(6297, 8510906018047533472L ^ var1);
      var10004[2] = arh<"b">(11903, 5643543892983060317L ^ var1);
      var10004[3] = arh<"b">(24083, 1337242646767462181L ^ var1);
      var10004[4] = arh<"b">(8498, 4174511860823332892L ^ var1);
      var10004[5] = arh<"b">(9885, 1317211976094130086L ^ var1);
      this.Wkwey = new cJ(this, mr.clS(var10004)).WE(true);
      this.RfFUJ = new cJ(
            this,
            mr.clS(
               new int[]{
                  arh<"b">(3958, 3851444222138725950L ^ var1),
                  arh<"b">(9528, 3316300781483531283L ^ var1),
                  arh<"b">(5918, 8304611262429376018L ^ var1),
                  arh<"b">(4305, 7104847111255697865L ^ var1),
                  arh<"b">(7981, 3251112337055065654L ^ var1)
               }
            )
         )
         .WE(false);
      var10004 = new int[arh<"b">(1141, 5889832679775714641L ^ var1)];
      var10004[0] = arh<"b">(16985, 3617030666423794501L ^ var1);
      var10004[1] = arh<"b">(12406, 6374474534551816507L ^ var1);
      var10004[2] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[3] = arh<"b">(23354, 5644052581094122000L ^ var1);
      var10004[4] = arh<"b">(22790, 8222224347497422855L ^ var1);
      var10004[5] = arh<"b">(24106, 7952836200775509787L ^ var1);
      var10004[arh<"b">(16897, 1490893730290858820L ^ var1)] = arh<"b">(24449, 4742861858042799747L ^ var1);
      var10004[arh<"b">(4441, 1625423038434191470L ^ var1)] = arh<"b">(7893, 4991277063504177093L ^ var1);
      var10004[arh<"b">(27732, 7734709046941341019L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(29234, 7022235587845671732L ^ var1)] = arh<"b">(23111, 7770294078064878349L ^ var1);
      var10004[arh<"b">(15570, 1279300725275821526L ^ var1)] = arh<"b">(32122, 8791138716599796850L ^ var1);
      var10004[arh<"b">(10746, 3197835769347641584L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(29145, 7464745634411858151L ^ var1)] = arh<"b">(3101, 4408573820079650132L ^ var1);
      var10004[arh<"b">(17151, 8466236619845925884L ^ var1)] = arh<"b">(17569, 6676139098139295167L ^ var1);
      var10004[arh<"b">(5082, 2218599456576383691L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(23008, 1288494808758018298L ^ var1)] = arh<"b">(4928, 3672519874361928270L ^ var1);
      var10004[arh<"b">(28093, 2337894583110194313L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(19537, 4459272886565533042L ^ var1)] = arh<"b">(24449, 4742861858042799747L ^ var1);
      var10004[arh<"b">(16348, 8658937496175740546L ^ var1)] = arh<"b">(22966, 3105044198098460809L ^ var1);
      var10004[arh<"b">(17829, 4996034554358824112L ^ var1)] = arh<"b">(9651, 7872464564969512078L ^ var1);
      var10004[arh<"b">(18382, 8803397335704633059L ^ var1)] = arh<"b">(7981, 3251112337055065654L ^ var1);
      this.whhdh = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[arh<"b">(6483, 6913601441200250909L ^ var1)];
      var10004[0] = arh<"b">(7810, 184284605954795462L ^ var1);
      var10004[1] = arh<"b">(19107, 8642641999409869701L ^ var1);
      var10004[2] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[3] = arh<"b">(5630, 662414407235480795L ^ var1);
      var10004[4] = arh<"b">(28253, 4009657104342046493L ^ var1);
      var10004[5] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(16897, 1490893730290858820L ^ var1)] = arh<"b">(4928, 3672519874361928270L ^ var1);
      var10004[arh<"b">(3355, 6943637142856414276L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(17630, 5713688456764718591L ^ var1)] = arh<"b">(24449, 4742861858042799747L ^ var1);
      var10004[arh<"b">(27013, 637730806171488429L ^ var1)] = arh<"b">(22966, 3105044198098460809L ^ var1);
      var10004[arh<"b">(27699, 3638974050783122801L ^ var1)] = arh<"b">(9651, 7872464564969512078L ^ var1);
      var10004[arh<"b">(16847, 414091476621162713L ^ var1)] = arh<"b">(7981, 3251112337055065654L ^ var1);
      this.tfzyX = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      var10004 = new int[arh<"b">(9897, 2710153534660157344L ^ var1)];
      var10004[0] = arh<"b">(14293, 171555739158253204L ^ var1);
      var10004[1] = arh<"b">(5630, 662414407235480795L ^ var1);
      var10004[2] = arh<"b">(19590, 7106626837012641190L ^ var1);
      var10004[3] = arh<"b">(1357, 3003526180275174477L ^ var1);
      var10004[4] = arh<"b">(18616, 4796545710349775333L ^ var1);
      var10004[5] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(16897, 1490893730290858820L ^ var1)] = arh<"b">(29565, 7900809979439958582L ^ var1);
      var10004[arh<"b">(3355, 6943637142856414276L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(17630, 5713688456764718591L ^ var1)] = arh<"b">(5630, 662414407235480795L ^ var1);
      var10004[arh<"b">(27013, 637730806171488429L ^ var1)] = arh<"b">(22966, 3105044198098460809L ^ var1);
      var10004[arh<"b">(27699, 3638974050783122801L ^ var1)] = arh<"b">(9651, 7872464564969512078L ^ var1);
      var10004[arh<"b">(16847, 414091476621162713L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(6483, 6913601441200250909L ^ var1)] = arh<"b">(14477, 1816043963976548746L ^ var1);
      var10004[arh<"b">(14887, 6812127803963343667L ^ var1)] = arh<"b">(21308, 4192295490873891L ^ var1);
      var10004[arh<"b">(25791, 5901535393079221642L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(14405, 1885632593195434358L ^ var1)] = arh<"b">(19107, 8642641999409869701L ^ var1);
      var10004[arh<"b">(4070, 4558976772344100597L ^ var1)] = arh<"b">(19526, 6276045834029823258L ^ var1);
      this.uafIf = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(4.0).UI(0.0, 0.0).UH(MCipD);
      var10004 = new int[arh<"b">(23401, 6333091411753034331L ^ var1)];
      var10004[0] = arh<"b">(19725, 4373210614347756570L ^ var1);
      var10004[1] = arh<"b">(11760, 678328135005312223L ^ var1);
      var10004[2] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[3] = arh<"b">(19526, 6276045834029823258L ^ var1);
      var10004[4] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[5] = arh<"b">(20353, 2127281987015734973L ^ var1);
      var10004[arh<"b">(16897, 1490893730290858820L ^ var1)] = arh<"b">(22637, 3585176898488459594L ^ var1);
      var10004[arh<"b">(3355, 6943637142856414276L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(17630, 5713688456764718591L ^ var1)] = arh<"b">(14979, 693081195960337294L ^ var1);
      var10004[arh<"b">(27013, 637730806171488429L ^ var1)] = arh<"b">(24449, 4742861858042799747L ^ var1);
      var10004[arh<"b">(27699, 3638974050783122801L ^ var1)] = arh<"b">(24363, 8888829448603100776L ^ var1);
      var10004[arh<"b">(16847, 414091476621162713L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(6483, 6913601441200250909L ^ var1)] = arh<"b">(22081, 2502206854212513542L ^ var1);
      var10004[arh<"b">(14887, 6812127803963343667L ^ var1)] = arh<"b">(19107, 8642641999409869701L ^ var1);
      var10004[arh<"b">(25791, 5901535393079221642L ^ var1)] = arh<"b">(11760, 678328135005312223L ^ var1);
      var10004[arh<"b">(14405, 1885632593195434358L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(4070, 4558976772344100597L ^ var1)] = arh<"b">(3736, 8208225609884514177L ^ var1);
      var10004[arh<"b">(9897, 2710153534660157344L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(6212, 5498744332159394137L ^ var1)] = arh<"b">(19107, 8642641999409869701L ^ var1);
      var10004[arh<"b">(587, 1804123129250691918L ^ var1)] = arh<"b">(22966, 3105044198098460809L ^ var1);
      var10004[arh<"b">(6690, 5093048314628219689L ^ var1)] = arh<"b">(21308, 4192295490873891L ^ var1);
      this.AKRql = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[arh<"b">(25791, 5901535393079221642L ^ var1)];
      var10004[0] = arh<"b">(19725, 4373210614347756570L ^ var1);
      var10004[1] = arh<"b">(11760, 678328135005312223L ^ var1);
      var10004[2] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[3] = arh<"b">(19526, 6276045834029823258L ^ var1);
      var10004[4] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[5] = arh<"b">(23529, 6295032308672553681L ^ var1);
      var10004[arh<"b">(16897, 1490893730290858820L ^ var1)] = arh<"b">(24449, 4742861858042799747L ^ var1);
      var10004[arh<"b">(3355, 6943637142856414276L ^ var1)] = arh<"b">(21349, 3783148889385134687L ^ var1);
      var10004[arh<"b">(17630, 5713688456764718591L ^ var1)] = arh<"b">(3010, 6763907224829178610L ^ var1);
      var10004[arh<"b">(27013, 637730806171488429L ^ var1)] = arh<"b">(9577, 3578827837354908710L ^ var1);
      var10004[arh<"b">(27699, 3638974050783122801L ^ var1)] = arh<"b">(5873, 1908592742569324477L ^ var1);
      var10004[arh<"b">(16847, 414091476621162713L ^ var1)] = arh<"b">(24449, 4742861858042799747L ^ var1);
      var10004[arh<"b">(6483, 6913601441200250909L ^ var1)] = arh<"b">(18616, 4796545710349775333L ^ var1);
      var10004[arh<"b">(14887, 6812127803963343667L ^ var1)] = arh<"b">(7981, 3251112337055065654L ^ var1);
      this.hSAvy = new cJ(this, mr.clS(var10004)).WE(false);
      this.vmwmS = new cz(
         this,
         mr.clS(
            new int[]{
               arh<"b">(29588, 2192154007872752312L ^ var1),
               arh<"b">(5873, 1908592742569324477L ^ var1),
               arh<"b">(24449, 4742861858042799747L ^ var1),
               arh<"b">(18616, 4796545710349775333L ^ var1),
               arh<"b">(7981, 3251112337055065654L ^ var1)
            }
         )
      );
      this.tfzyX.Vf(this.whhdh::WF);
   }

   static {
      Loader.doInit(dZ.class);
      _2f96000a03dc0620ecce8d659f97acb2();
   }

   private static native int arg(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException ard(MatchException var0);

   private static native String are(byte[] var0);

   @hG
   public native void ara(gO$tl var1);

   private static native int arf(int var0, long var1);

   @hG
   public native void arc(gH$th var1);

   private native boolean arb(class_1792 var1);

   @hG
   public native void aqZ(gO$tm var1);

   private static native CallSite arh(Lookup var0, String var1, MethodType var2);

   @Override
   public native void YO();
}
