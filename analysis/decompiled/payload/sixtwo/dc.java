package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class dc extends gg implements lG {
   private final ct ywyjh;
   private final cu kirnI;
   private final cu yDJQw;
   private final cu NaIhp;
   private final cu yMEZd;
   private final cu loDyv;
   private final cu INfLO;
   private final cu kXJCI;
   private final cu QDJQf;
   private final cG dJxLo;
   private final ct usOjR;
   private final cu aAYug;
   private final cu fcvsC;
   private final cu dWMfZ;
   private final cu fkost;
   private final cC SynzG;
   private final cC FsyXs;
   private final cC QbLID;
   private final cC yEhAI;
   private final cJ gyzDI;
   private final cA rGtqd;
   private final cA MrfWt;
   private final cJ zbbPv;
   private final List<mq> DaBEE;
   private static final long ywjdm = gb.aYR(4097073876904424115L, 4511481378242365955L, MethodHandles.lookup().lookupClass()).a(250475473836201L);
   private static final String[] hyeMf;
   private static final String[] pNJCb;
   private static final Map JdRzc = new HashMap(13);
   private static final long[] bhalo;
   private static final Integer[] ZVvmZ;
   private static final Map ytqFW;

   public dc() {
      long var1 = ywjdm ^ 110114135891880L;
      super(gf.aZL(ach<"x">(20185, 291695075526441849L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ach<"x">(30187, 3282994054707527750L ^ var1)];
      var10004[0] = ach<"x">(6, 2468801219423155701L ^ var1);
      var10004[1] = ach<"x">(29819, 8271128992864649694L ^ var1);
      var10004[2] = ach<"x">(30050, 6559420714955784416L ^ var1);
      var10004[3] = ach<"x">(30125, 6681387121825660943L ^ var1);
      var10004[4] = ach<"x">(21891, 5595688938617921572L ^ var1);
      var10004[5] = ach<"x">(8874, 1988517670389061440L ^ var1);
      var10004[ach<"x">(27247, 5406272868411989891L ^ var1)] = ach<"x">(19179, 8448851249080139634L ^ var1);
      var10004[ach<"x">(2095, 2696254999114431897L ^ var1)] = ach<"x">(27760, 7460128503107344769L ^ var1);
      var10004[ach<"x">(9458, 1193130660125315347L ^ var1)] = ach<"x">(5738, 6726509645834822554L ^ var1);
      this.ywyjh = new ct(this, mr.clS(var10004));
      this.kirnI = new cu(
         this.ywyjh,
         mr.clS(
            new int[]{
               ach<"x">(24978, 5133272724406686766L ^ var1),
               ach<"x">(10792, 4075446748215451529L ^ var1),
               ach<"x">(24297, 2561423915507051295L ^ var1),
               ach<"x">(31593, 3868800850673356486L ^ var1),
               ach<"x">(14945, 1349275439634681809L ^ var1)
            }
         )
      );
      ct var10003 = this.ywyjh;
      var10004 = new int[ach<"x">(15142, 3216914242302906038L ^ var1)];
      var10004[0] = ach<"x">(14539, 5523099740966456673L ^ var1);
      var10004[1] = ach<"x">(18849, 3610753639673723970L ^ var1);
      var10004[2] = ach<"x">(634, 3577295782710491129L ^ var1);
      var10004[3] = ach<"x">(14368, 5461552366760267209L ^ var1);
      var10004[4] = ach<"x">(23005, 8753722901936991280L ^ var1);
      var10004[5] = ach<"x">(13388, 1375995836707144178L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(26768, 8178837078667549956L ^ var1);
      var10004[ach<"x">(9947, 3964083500382753593L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(6648, 249897538087005299L ^ var1)] = ach<"x">(14945, 1349275439634681809L ^ var1);
      this.yDJQw = new cu(var10003, mr.clS(var10004));
      this.NaIhp = new cu(
         this.ywyjh,
         mr.clS(
            new int[]{
               ach<"x">(8181, 1467174397848398410L ^ var1),
               ach<"x">(19425, 3231624253121068654L ^ var1),
               ach<"x">(12980, 2759699371140056850L ^ var1),
               ach<"x">(14945, 1349275439634681809L ^ var1),
               ach<"x">(10792, 4075446748215451529L ^ var1)
            }
         )
      );
      var10003 = this.ywyjh;
      var10004 = new int[ach<"x">(8468, 5581512690529473699L ^ var1)];
      var10004[0] = ach<"x">(17891, 7115216050780598393L ^ var1);
      var10004[1] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[2] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[3] = ach<"x">(31593, 3868800850673356486L ^ var1);
      var10004[4] = ach<"x">(10792, 4075446748215451529L ^ var1);
      var10004[5] = ach<"x">(14945, 1349275439634681809L ^ var1);
      this.yMEZd = new cu(var10003, mr.clS(var10004));
      var10003 = this.ywyjh;
      var10004 = new int[ach<"x">(9947, 3964083500382753593L ^ var1)];
      var10004[0] = ach<"x">(5008, 4586423075469796884L ^ var1);
      var10004[1] = ach<"x">(15179, 2044390141697822458L ^ var1);
      var10004[2] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[3] = ach<"x">(19055, 8052428071143407601L ^ var1);
      var10004[4] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[5] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(30882, 6999915750072503575L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(14945, 1349275439634681809L ^ var1);
      this.loDyv = new cu(var10003, mr.clS(var10004));
      var10003 = this.ywyjh;
      var10004 = new int[ach<"x">(9947, 3964083500382753593L ^ var1)];
      var10004[0] = ach<"x">(21147, 3578136665760327535L ^ var1);
      var10004[1] = ach<"x">(15302, 9171396852618759754L ^ var1);
      var10004[2] = ach<"x">(27943, 5639253692696221845L ^ var1);
      var10004[3] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[4] = ach<"x">(11978, 7592037135483280191L ^ var1);
      var10004[5] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(31593, 3868800850673356486L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(14945, 1349275439634681809L ^ var1);
      this.INfLO = new cu(var10003, mr.clS(var10004));
      this.kXJCI = new cu(
         this.ywyjh,
         mr.clS(
            new int[]{
               ach<"x">(15950, 3294867607603350503L ^ var1),
               ach<"x">(12980, 2759699371140056850L ^ var1),
               ach<"x">(12980, 2759699371140056850L ^ var1),
               ach<"x">(16307, 8254831702519482971L ^ var1),
               ach<"x">(14945, 1349275439634681809L ^ var1)
            }
         )
      );
      var10003 = this.ywyjh;
      var10004 = new int[ach<"x">(8468, 5581512690529473699L ^ var1)];
      var10004[0] = ach<"x">(10659, 8172175107858963510L ^ var1);
      var10004[1] = ach<"x">(13388, 1375995836707144178L ^ var1);
      var10004[2] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[3] = ach<"x">(26790, 5133654016002645286L ^ var1);
      var10004[4] = ach<"x">(11978, 7592037135483280191L ^ var1);
      var10004[5] = ach<"x">(14945, 1349275439634681809L ^ var1);
      this.QDJQf = new cu(var10003, mr.clS(var10004));
      this.dJxLo = new cG(
            this,
            mr.clS(
               new int[]{
                  ach<"x">(10326, 8057426959417449933L ^ var1),
                  ach<"x">(12980, 2759699371140056850L ^ var1),
                  ach<"x">(13388, 1375995836707144178L ^ var1),
                  ach<"x">(12980, 2759699371140056850L ^ var1),
                  ach<"x">(31593, 3868800850673356486L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[ach<"x">(17877, 2912004585933205553L ^ var1)];
      var10004[0] = ach<"x">(22620, 3004508016894701012L ^ var1);
      var10004[1] = ach<"x">(15302, 9171396852618759754L ^ var1);
      var10004[2] = ach<"x">(16983, 6531989711696721892L ^ var1);
      var10004[3] = ach<"x">(14945, 1349275439634681809L ^ var1);
      var10004[4] = ach<"x">(15179, 2044390141697822458L ^ var1);
      var10004[5] = ach<"x">(22846, 7304665988205505723L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(14945, 1349275439634681809L ^ var1);
      this.usOjR = new ct(this, mr.clS(var10004));
      this.aAYug = new cu(
         this.usOjR,
         mr.clS(
            new int[]{
               ach<"x">(19754, 5621492914069534903L ^ var1),
               ach<"x">(24297, 2561423915507051295L ^ var1),
               ach<"x">(13388, 1375995836707144178L ^ var1),
               ach<"x">(13388, 1375995836707144178L ^ var1)
            }
         )
      );
      this.fcvsC = new cu(
         this.usOjR,
         mr.clS(
            new int[]{
               ach<"x">(2883, 8088498138399588034L ^ var1),
               ach<"x">(15179, 2044390141697822458L ^ var1),
               ach<"x">(14945, 1349275439634681809L ^ var1),
               ach<"x">(8651, 7784187499994813517L ^ var1)
            }
         )
      );
      this.dWMfZ = new cu(
         this.usOjR,
         mr.clS(
            new int[]{
               ach<"x">(13672, 7487445868203573451L ^ var1),
               ach<"x">(26790, 5133654016002645286L ^ var1),
               ach<"x">(31593, 3868800850673356486L ^ var1),
               ach<"x">(14945, 1349275439634681809L ^ var1),
               ach<"x">(10792, 4075446748215451529L ^ var1)
            }
         )
      );
      this.fkost = new cu(
         this.usOjR,
         mr.clS(
            new int[]{ach<"x">(18342, 6436677443337777721L ^ var1), ach<"x">(13388, 1375995836707144178L ^ var1), ach<"x">(14720, 3554220382289103885L ^ var1)}
         )
      );
      this.SynzG = new cC(
            this,
            mr.clS(
               new int[]{
                  ach<"x">(14539, 5523099740966456673L ^ var1),
                  ach<"x">(22846, 7304665988205505723L ^ var1),
                  ach<"x">(24297, 2561423915507051295L ^ var1),
                  ach<"x">(13388, 1375995836707144178L ^ var1),
                  ach<"x">(8651, 7784187499994813517L ^ var1)
               }
            )
         )
         .Vy(0.01)
         .Vw(1.0)
         .Vx(10.0)
         .VA(3.0);
      this.FsyXs = new cC(
            this,
            mr.clS(
               new int[]{
                  ach<"x">(14539, 5523099740966456673L ^ var1),
                  ach<"x">(29649, 8439483656279967354L ^ var1),
                  ach<"x">(8651, 7784187499994813517L ^ var1),
                  ach<"x">(8651, 7784187499994813517L ^ var1),
                  ach<"x">(11978, 7592037135483280191L ^ var1)
               }
            )
         )
         .Vy(0.01)
         .Vw(1.0)
         .Vx(15.0)
         .VA(3.0);
      var10004 = new int[ach<"x">(8468, 5581512690529473699L ^ var1)];
      var10004[0] = ach<"x">(10207, 8336058825457308238L ^ var1);
      var10004[1] = ach<"x">(3013, 5056899658002546289L ^ var1);
      var10004[2] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[3] = ach<"x">(26790, 5133654016002645286L ^ var1);
      var10004[4] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[5] = ach<"x">(10792, 4075446748215451529L ^ var1);
      this.QbLID = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(5.0).VA(2.0);
      var10004 = new int[ach<"x">(7623, 3764992188107073627L ^ var1)];
      var10004[0] = ach<"x">(23155, 7176814233644199881L ^ var1);
      var10004[1] = ach<"x">(15179, 2044390141697822458L ^ var1);
      var10004[2] = ach<"x">(3013, 5056899658002546289L ^ var1);
      var10004[3] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[4] = ach<"x">(27289, 6531962537261096831L ^ var1);
      var10004[5] = ach<"x">(2667, 9022173621971435396L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(22803, 3938652368845434043L ^ var1);
      var10004[ach<"x">(9947, 3964083500382753593L ^ var1)] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[ach<"x">(6648, 249897538087005299L ^ var1)] = ach<"x">(31593, 3868800850673356486L ^ var1);
      var10004[ach<"x">(23938, 4590109638876457063L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(30250, 274037500280456132L ^ var1)] = ach<"x">(11581, 2131819423137798291L ^ var1);
      var10004[ach<"x">(28803, 6617094189249021223L ^ var1)] = ach<"x">(12354, 2414462044560590331L ^ var1);
      var10004[ach<"x">(17347, 5258538190175565347L ^ var1)] = ach<"x">(15179, 2044390141697822458L ^ var1);
      var10004[ach<"x">(21812, 7593190148739850463L ^ var1)] = ach<"x">(14945, 1349275439634681809L ^ var1);
      var10004[ach<"x">(29600, 2925658273734477400L ^ var1)] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[ach<"x">(1378, 2825713317510819989L ^ var1)] = ach<"x">(2718, 2216495113588031244L ^ var1);
      var10004[ach<"x">(1306, 6203006221044691176L ^ var1)] = ach<"x">(2718, 2216495113588031244L ^ var1);
      var10004[ach<"x">(14259, 6056210668549079604L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(14106, 8658842799700050593L ^ var1)] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[ach<"x">(12627, 2898481338236634350L ^ var1)] = ach<"x">(31593, 3868800850673356486L ^ var1);
      this.yEhAI = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(10.0).VA(3.0).Vz(ace<"u">(16789, 3635719684320315416L ^ var1));
      var10004 = new int[ach<"x">(6648, 249897538087005299L ^ var1)];
      var10004[0] = ach<"x">(16499, 5531205567185483211L ^ var1);
      var10004[1] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[2] = ach<"x">(13388, 1375995836707144178L ^ var1);
      var10004[3] = ach<"x">(14720, 3554220382289103885L ^ var1);
      var10004[4] = ach<"x">(11581, 2131819423137798291L ^ var1);
      var10004[5] = ach<"x">(14539, 5523099740966456673L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(13388, 1375995836707144178L ^ var1);
      var10004[ach<"x">(9947, 3964083500382753593L ^ var1)] = ach<"x">(22803, 3938652368845434043L ^ var1);
      this.gyzDI = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[ach<"x">(24828, 4400171844477146485L ^ var1)];
      var10004[0] = ach<"x">(6236, 6726642497693855178L ^ var1);
      var10004[1] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[2] = ach<"x">(10792, 4075446748215451529L ^ var1);
      var10004[3] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[4] = ach<"x">(10792, 4075446748215451529L ^ var1);
      var10004[5] = ach<"x">(15179, 2044390141697822458L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[ach<"x">(9947, 3964083500382753593L ^ var1)] = ach<"x">(11581, 2131819423137798291L ^ var1);
      var10004[ach<"x">(6648, 249897538087005299L ^ var1)] = ach<"x">(6107, 8585666402259739203L ^ var1);
      var10004[ach<"x">(23938, 4590109638876457063L ^ var1)] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[ach<"x">(20407, 1336405539369253433L ^ var1)] = ach<"x">(17566, 709353323253133588L ^ var1);
      var10004[ach<"x">(11243, 1018462960409976332L ^ var1)] = ach<"x">(13388, 1375995836707144178L ^ var1);
      var10004[ach<"x">(23198, 215128834451566386L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      this.rGtqd = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(360.0).UI(0.0, 180.0).UH(ace<"u">(31229, 8398905141763141747L ^ var1));
      var10004 = new int[ach<"x">(24828, 4400171844477146485L ^ var1)];
      var10004[0] = ach<"x">(6236, 6726642497693855178L ^ var1);
      var10004[1] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[2] = ach<"x">(10792, 4075446748215451529L ^ var1);
      var10004[3] = ach<"x">(24297, 2561423915507051295L ^ var1);
      var10004[4] = ach<"x">(10792, 4075446748215451529L ^ var1);
      var10004[5] = ach<"x">(15179, 2044390141697822458L ^ var1);
      var10004[ach<"x">(8468, 5581512690529473699L ^ var1)] = ach<"x">(12980, 2759699371140056850L ^ var1);
      var10004[ach<"x">(17877, 2912004585933205553L ^ var1)] = ach<"x">(16307, 8254831702519482971L ^ var1);
      var10004[ach<"x">(9947, 3964083500382753593L ^ var1)] = ach<"x">(11581, 2131819423137798291L ^ var1);
      var10004[ach<"x">(6648, 249897538087005299L ^ var1)] = ach<"x">(14539, 5523099740966456673L ^ var1);
      var10004[ach<"x">(23938, 4590109638876457063L ^ var1)] = ach<"x">(2718, 2216495113588031244L ^ var1);
      var10004[ach<"x">(20407, 1336405539369253433L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(11243, 1018462960409976332L ^ var1)] = ach<"x">(8651, 7784187499994813517L ^ var1);
      var10004[ach<"x">(23198, 215128834451566386L ^ var1)] = ach<"x">(11978, 7592037135483280191L ^ var1);
      this.MrfWt = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(60.0).UI(0.0, 60.0).UH(ace<"u">(24681, 2610217824134916582L ^ var1));
      this.zbbPv = new cJ(
            this,
            mr.clS(
               new int[]{
                  ach<"x">(31483, 7619893751315844968L ^ var1),
                  ach<"x">(13388, 1375995836707144178L ^ var1),
                  ach<"x">(12980, 2759699371140056850L ^ var1),
                  ach<"x">(10786, 1179168747151892405L ^ var1)
               }
            )
         )
         .WE(true);
      this.DaBEE = new ArrayList<>();
   }

   static {
      long var11 = ywjdm ^ 128430701822263L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "Ð«ªòp\u0095ej\u000f\u001f¥¦²\u0010ðí\u0010\u008c\u008aã\u001aÊPÄÀ¢+aJèÐªL";
      int var19 = "Ð«ªòp\u0095ej\u000f\u001f¥¦²\u0010ðí\u0010\u008c\u008aã\u001aÊPÄÀ¢+aJèÐªL".length();
      char var16 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = acb(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     hyeMf = var20;
                     pNJCb = new String[4];
                     ytqFW = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[89];
                     int var3 = 0;
                     String var4 = "Ù÷ÜÿBHRæö°\u0000ï3îæ\u0013e \u008f\u008b£¬\u0081¿)\u000bþ\b\u0091'·Z>ä\u0013\u0002gïª\u009föñpó»ØÀÜ±\u0006\rÜb\u008aâ¶²ºÃ¾\u008dA:æ\u008e¥j+íÍ°SZF\u00ado¬Nûïu\u008bûníEëý*µ\u008f\" dÛèªAó\u0007\\\u0015ª\u0017j\u0015\b³4Õ3òîuò½(ß\u0085g0\n£èsm\\Î\u0090\u0085¬\u0006\u0080¶\u0015úã ³z\t».¦ýUjF\nM÷èä\u0094\u000bwòO²´¿\u001e£z<ònüTÆ\u0086cX-/âÐh\u0016\u0080\u009a\u0082\u0016ã]ç\u009aB\u000eþ¡>'\u001a\u0080[úáÐ1½\u0012Àâ\u001cÓ7G¶ \u0081?etcêÎT¢81W\u0013ÛÖ¶\\V¹\u0092\u0014Î\u0015eDÿ\u008aäóxEÞ6\u0019b2´^9y@ üã6k½y\u001aê\u001d\u0019d\u0000\t\u0001]\u0015m[D·;\u0004\u0002K£Ó\u009aqÊMcV\u0084\u0005\u0089Ìt³U3Jk#\u009cÁYÝÜ·;ï\u0088JN[ÃÆ\u0012\f«ü¹ÓGäá8µÿ]i\u00940\u0095\u0004\u0019µ¹\u0094\u0097\u009bâeM\u009dwWï\u0011éò\u008a\u008dÏÏÆn\u0082µôr\u0019Sããð¬\u0082Æ¨\u0098\u009c©j\u0086.u\u0015#þéàâoÃ£Í\u009f6ò¯8\u0019Ö³\u0014Dz·¼×\u0089SþD{®O\u0018]à9/k\u0007æU¾P³ÈÐ\u001bñ\\¬P¥üç\u008d\u009bÒvµ\u001187\fÛù\u0082\u0099)\u0096+f\u0012\u009b·H\u0081Øj\u009b\u001f~ø <&äfþóe\u0097ò³\u0004fÑëW.\u009côÀäõ\u009eD9\u0019¹\u0006-d¶\u009f\u0015ë\u0090\u0017·¥\u0095>PÔUÙ»¡Q\u0091é\u0087\u009dz¿O/\u009d\u0014=Ì\"â\u0097åÿYÐÛ__zò\b¤ÄÃ\u0014ÓM½Id§-\u001cämªÈ9\u008f&\u000b\tò\u0005)\u009ff\u008a¢åÑSs;fsµu\u000e\u008c©¢\u0096È\u001a|\u008eÀ\u0003Df_\u0018üB\f\u0002°Ñá\u0093\u0097Fë«Ô\n7G\u0015¶)\u0006úG\u0007\u008f5â·Á&ÛÁÃ+ZèyBkÆ\tiàq¤Ý46lfp(þ\u001ck+;®W±\u000bÍ}b/6\u009aÖÁ.ûhêfÅ\u001eó^Ï>\u0095 7\u0085\u0018ðó-\u00016¸`K\u0083Çüv\u009e;µ\u0004Ä:\u0011@©1\u0000]!\u0000£±T«A\u0006KtÛL<[";
                     int var5 = "Ù÷ÜÿBHRæö°\u0000ï3îæ\u0013e \u008f\u008b£¬\u0081¿)\u000bþ\b\u0091'·Z>ä\u0013\u0002gïª\u009föñpó»ØÀÜ±\u0006\rÜb\u008aâ¶²ºÃ¾\u008dA:æ\u008e¥j+íÍ°SZF\u00ado¬Nûïu\u008bûníEëý*µ\u008f\" dÛèªAó\u0007\\\u0015ª\u0017j\u0015\b³4Õ3òîuò½(ß\u0085g0\n£èsm\\Î\u0090\u0085¬\u0006\u0080¶\u0015úã ³z\t».¦ýUjF\nM÷èä\u0094\u000bwòO²´¿\u001e£z<ònüTÆ\u0086cX-/âÐh\u0016\u0080\u009a\u0082\u0016ã]ç\u009aB\u000eþ¡>'\u001a\u0080[úáÐ1½\u0012Àâ\u001cÓ7G¶ \u0081?etcêÎT¢81W\u0013ÛÖ¶\\V¹\u0092\u0014Î\u0015eDÿ\u008aäóxEÞ6\u0019b2´^9y@ üã6k½y\u001aê\u001d\u0019d\u0000\t\u0001]\u0015m[D·;\u0004\u0002K£Ó\u009aqÊMcV\u0084\u0005\u0089Ìt³U3Jk#\u009cÁYÝÜ·;ï\u0088JN[ÃÆ\u0012\f«ü¹ÓGäá8µÿ]i\u00940\u0095\u0004\u0019µ¹\u0094\u0097\u009bâeM\u009dwWï\u0011éò\u008a\u008dÏÏÆn\u0082µôr\u0019Sããð¬\u0082Æ¨\u0098\u009c©j\u0086.u\u0015#þéàâoÃ£Í\u009f6ò¯8\u0019Ö³\u0014Dz·¼×\u0089SþD{®O\u0018]à9/k\u0007æU¾P³ÈÐ\u001bñ\\¬P¥üç\u008d\u009bÒvµ\u001187\fÛù\u0082\u0099)\u0096+f\u0012\u009b·H\u0081Øj\u009b\u001f~ø <&äfþóe\u0097ò³\u0004fÑëW.\u009côÀäõ\u009eD9\u0019¹\u0006-d¶\u009f\u0015ë\u0090\u0017·¥\u0095>PÔUÙ»¡Q\u0091é\u0087\u009dz¿O/\u009d\u0014=Ì\"â\u0097åÿYÐÛ__zò\b¤ÄÃ\u0014ÓM½Id§-\u001cämªÈ9\u008f&\u000b\tò\u0005)\u009ff\u008a¢åÑSs;fsµu\u000e\u008c©¢\u0096È\u001a|\u008eÀ\u0003Df_\u0018üB\f\u0002°Ñá\u0093\u0097Fë«Ô\n7G\u0015¶)\u0006úG\u0007\u008f5â·Á&ÛÁÃ+ZèyBkÆ\tiàq¤Ý46lfp(þ\u001ck+;®W±\u000bÍ}b/6\u009aÖÁ.ûhêfÅ\u001eó^Ï>\u0095 7\u0085\u0018ðó-\u00016¸`K\u0083Çüv\u009e;µ\u0004Ä:\u0011@©1\u0000]!\u0000£±T«A\u0006KtÛL<["
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
                           byte[] var10 = var0.doFinal(
                              new byte[]{
                                 (byte)(var8 >>> 56),
                                 (byte)(var8 >>> 48),
                                 (byte)(var8 >>> 40),
                                 (byte)(var8 >>> 32),
                                 (byte)(var8 >>> 24),
                                 (byte)(var8 >>> 16),
                                 (byte)(var8 >>> 8),
                                 (byte)var8
                              }
                           );
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    bhalo = var6;
                                    ZVvmZ = new Integer[89];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "YÆ§\\\u0088@òù\u009f\u008f\u0099\u008b¦Þñk";
                                 var5 = "YÆ§\\\u0088@òù\u009f\u008f\u0099\u008b¦Þñk".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "rÄÛ\u009fwÌ\u0002õ\u008eB\u0095`ÿÛ¬W\u0010jzE\u0004êÒ\"´\u0089ÐÔÈ\u0081}]Ó";
                  var19 = "rÄÛ\u009fwÌ\u0002õ\u008eB\u0095`ÿÛ¬W\u0010jzE\u0004êÒ\"´\u0089ÐÔÈ\u0081}]Ó".length();
                  var16 = 16;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   private static String acc(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 15269;
      if (pNJCb[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])JdRzc.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JdRzc.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dc", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = hyeMf[var5].getBytes("ISO-8859-1");
         pNJCb[var5] = acb(((Cipher)var4[0]).doFinal(var9));
      }

      return pNJCb[var5];
   }

   private static CallSite ace(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("acd".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite ach(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("acg".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object acd(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = acc(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int acf(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 1930;
      if (ZVvmZ[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = bhalo[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])ytqFW.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ytqFW.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dc", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ZVvmZ[var3] = var15;
      }

      return ZVvmZ[var3];
   }

   private static int acg(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = acf(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException aca(MatchException var0) {
      return var0;
   }

   private static String acb(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   @hG
   public void abZ(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dc.ywjdm J
      // 003: ldc2_w 48641105943143
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dc.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 02a
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/dc.DaBEE Ljava/util/List;
      // 025: invokeinterface java/util/List.isEmpty ()Z 1
      // 02a: ifeq 02e
      // 02d: return
      // 02e: aload 1
      // 02f: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 032: astore 5
      // 034: aload 1
      // 035: invokevirtual sixtwo/go$sX.bbi ()F
      // 038: fstore 6
      // 03a: aload 0
      // 03b: getfield sixtwo/dc.dJxLo Lsixtwo/cG;
      // 03e: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 041: astore 7
      // 043: aload 0
      // 044: getfield sixtwo/dc.ywyjh Lsixtwo/ct;
      // 047: invokevirtual sixtwo/ct.ST ()I
      // 04a: tableswitch 88 1 7 42 52 58 64 70 76 82
      // 074: getstatic sixtwo/mo.KePbo Lsixtwo/mo;
      // 077: goto 0a5
      // 07a: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07d: athrow
      // 07e: getstatic sixtwo/mo.Vflfx Lsixtwo/mo;
      // 081: goto 0a5
      // 084: getstatic sixtwo/mo.bkxjV Lsixtwo/mo;
      // 087: goto 0a5
      // 08a: getstatic sixtwo/mo.kbKRO Lsixtwo/mo;
      // 08d: goto 0a5
      // 090: getstatic sixtwo/mo.mDCeI Lsixtwo/mo;
      // 093: goto 0a5
      // 096: getstatic sixtwo/mo.KyziQ Lsixtwo/mo;
      // 099: goto 0a5
      // 09c: getstatic sixtwo/mo.KyHOi Lsixtwo/mo;
      // 09f: goto 0a5
      // 0a2: getstatic sixtwo/mo.TcnVB Lsixtwo/mo;
      // 0a5: astore 8
      // 0a7: getstatic sixtwo/dc.XSRvt Lsixtwo/kM;
      // 0aa: aload 8
      // 0ac: invokevirtual sixtwo/mo.clD ()Lnet/minecraft/class_1044;
      // 0af: getstatic sixtwo/dc.XSRvt Lsixtwo/kM;
      // 0b2: invokevirtual sixtwo/kM.defaultState ()Lsixtwo/kS;
      // 0b5: getstatic com/mojang/blaze3d/platform/DepthTestFunction.LEQUAL_DEPTH_TEST Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 0b8: invokevirtual sixtwo/kS.bVG (Lcom/mojang/blaze3d/platform/DepthTestFunction;)Lsixtwo/kS;
      // 0bb: invokevirtual sixtwo/kM.startBatch (Lnet/minecraft/class_1044;Lsixtwo/kS;)V
      // 0be: new java/util/ArrayList
      // 0c1: dup
      // 0c2: aload 0
      // 0c3: getfield sixtwo/dc.DaBEE Ljava/util/List;
      // 0c6: invokeinterface java/util/List.size ()I 1
      // 0cb: invokespecial java/util/ArrayList.<init> (I)V
      // 0ce: astore 9
      // 0d0: aload 0
      // 0d1: getfield sixtwo/dc.DaBEE Ljava/util/List;
      // 0d4: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0d9: astore 10
      // 0db: aload 10
      // 0dd: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0e2: ifeq 13c
      // 0e5: aload 10
      // 0e7: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0ec: checkcast sixtwo/mq
      // 0ef: astore 11
      // 0f1: aload 11
      // 0f3: fload 6
      // 0f5: invokevirtual sixtwo/mq.clL (F)Lnet/minecraft/class_243;
      // 0f8: invokestatic sixtwo/jJ.bIA (Lnet/minecraft/class_243;)Z
      // 0fb: aload 4
      // 0fd: ifnonnull 143
      // 100: aload 4
      // 102: ifnonnull 12b
      // 105: goto 10c
      // 108: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10b: athrow
      // 10c: ifne 122
      // 10f: goto 116
      // 112: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 115: athrow
      // 116: aload 4
      // 118: ifnull 0db
      // 11b: goto 122
      // 11e: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 121: athrow
      // 122: aload 9
      // 124: aload 11
      // 126: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 12b: pop
      // 12c: aload 11
      // 12e: aload 5
      // 130: fload 6
      // 132: aload 7
      // 134: invokevirtual sixtwo/mq.clq (Lnet/minecraft/class_4587;FLsixtwo/mG;)V
      // 137: aload 4
      // 139: ifnull 0db
      // 13c: aload 0
      // 13d: getfield sixtwo/dc.zbbPv Lsixtwo/cJ;
      // 140: invokevirtual sixtwo/cJ.WF ()Z
      // 143: ifeq 19d
      // 146: getstatic sixtwo/dc.XSRvt Lsixtwo/kM;
      // 149: invokevirtual sixtwo/kM.flush ()V
      // 14c: getstatic sixtwo/dc.XSRvt Lsixtwo/kM;
      // 14f: sipush 6951
      // 152: ldc2_w 1628447878010967908
      // 155: lload 2
      // 156: lxor
      // 157: invokedynamic u (IJ)Ljava/lang/String; bsm=sixtwo/dc.ace (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15c: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 15f: invokevirtual sixtwo/kM.swapTexture (Lnet/minecraft/class_1044;)V
      // 162: aload 9
      // 164: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 169: astore 10
      // 16b: aload 10
      // 16d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 172: ifeq 19d
      // 175: aload 10
      // 177: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 17c: checkcast sixtwo/mq
      // 17f: astore 11
      // 181: aload 11
      // 183: aload 5
      // 185: fload 6
      // 187: aload 7
      // 189: invokevirtual sixtwo/mq.clr (Lnet/minecraft/class_4587;FLsixtwo/mG;)V
      // 18c: aload 4
      // 18e: ifnonnull 1a3
      // 191: aload 4
      // 193: ifnull 16b
      // 196: goto 19d
      // 199: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19c: athrow
      // 19d: getstatic sixtwo/dc.XSRvt Lsixtwo/kM;
      // 1a0: invokevirtual sixtwo/kM.endBatch ()V
      // 1a3: goto 1b1
      // 1a6: astore 12
      // 1a8: getstatic sixtwo/dc.XSRvt Lsixtwo/kM;
      // 1ab: invokevirtual sixtwo/kM.endBatch ()V
      // 1ae: aload 12
      // 1b0: athrow
      // 1b1: return
   }

   @hG
   public void abY(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dc.ywjdm J
      // 003: ldc2_w 118743962694660
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dc.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 037
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/dc.DaBEE Ljava/util/List;
      // 025: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/mq.clp ()Z, (Lsixtwo/mq;)Z ]
      // 02a: invokeinterface java/util/List.removeIf (Ljava/util/function/Predicate;)Z 2
      // 02f: pop
      // 030: aload 0
      // 031: getfield sixtwo/dc.usOjR Lsixtwo/ct;
      // 034: invokevirtual sixtwo/ct.ST ()I
      // 037: tableswitch 47 1 3 25 35 41
      // 050: getstatic sixtwo/mp.YeaJV Lsixtwo/mp;
      // 053: goto 069
      // 056: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 059: athrow
      // 05a: getstatic sixtwo/mp.czXTa Lsixtwo/mp;
      // 05d: goto 069
      // 060: getstatic sixtwo/mp.qIoJG Lsixtwo/mp;
      // 063: goto 069
      // 066: getstatic sixtwo/mp.vWdBW Lsixtwo/mp;
      // 069: astore 5
      // 06b: aload 0
      // 06c: getfield sixtwo/dc.FsyXs Lsixtwo/cC;
      // 06f: invokevirtual sixtwo/cC.VB ()F
      // 072: fstore 6
      // 074: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 077: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 07a: invokevirtual net/minecraft/class_638.method_18456 ()Ljava/util/List;
      // 07d: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 082: astore 7
      // 084: aload 7
      // 086: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 08b: ifeq 1a2
      // 08e: aload 7
      // 090: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 095: checkcast net/minecraft/class_1657
      // 098: astore 8
      // 09a: aload 0
      // 09b: getfield sixtwo/dc.gyzDI Lsixtwo/cJ;
      // 09e: invokevirtual sixtwo/cJ.WF ()Z
      // 0a1: aload 4
      // 0a3: ifnonnull 0df
      // 0a6: ifeq 0da
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 8
      // 0b2: aload 4
      // 0b4: ifnonnull 0dc
      // 0b7: goto 0be
      // 0ba: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bd: athrow
      // 0be: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0c1: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0c4: if_acmpeq 0da
      // 0c7: goto 0ce
      // 0ca: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cd: athrow
      // 0ce: aload 4
      // 0d0: ifnull 084
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: aload 8
      // 0dc: getfield net/minecraft/class_1657.field_6235 I
      // 0df: aload 4
      // 0e1: ifnonnull 0ef
      // 0e4: ifle 19d
      // 0e7: goto 0ee
      // 0ea: invokestatic sixtwo/dc.aca (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ed: athrow
      // 0ee: bipush 0
      // 0ef: istore 9
      // 0f1: iload 9
      // 0f3: aload 0
      // 0f4: getfield sixtwo/dc.QbLID Lsixtwo/cC;
      // 0f7: invokevirtual sixtwo/cC.VC ()I
      // 0fa: if_icmpge 19d
      // 0fd: new net/minecraft/class_243
      // 100: dup
      // 101: aload 8
      // 103: invokevirtual net/minecraft/class_1657.method_23317 ()D
      // 106: aload 8
      // 108: invokevirtual net/minecraft/class_1657.method_23318 ()D
      // 10b: aload 8
      // 10d: invokevirtual net/minecraft/class_1657.method_17682 ()F
      // 110: f2d
      // 111: dadd
      // 112: d2f
      // 113: aload 8
      // 115: invokevirtual net/minecraft/class_1657.method_23318 ()D
      // 118: d2f
      // 119: invokestatic sixtwo/mU.cpQ (FF)F
      // 11c: f2d
      // 11d: aload 8
      // 11f: invokevirtual net/minecraft/class_1657.method_23321 ()D
      // 122: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 125: astore 10
      // 127: new net/minecraft/class_243
      // 12a: dup
      // 12b: fload 6
      // 12d: fneg
      // 12e: ldc_w 50.0
      // 131: fdiv
      // 132: fload 6
      // 134: ldc_w 50.0
      // 137: fdiv
      // 138: invokestatic sixtwo/mU.cpQ (FF)F
      // 13b: f2d
      // 13c: fload 6
      // 13e: fneg
      // 13f: ldc_w 50.0
      // 142: fdiv
      // 143: fload 6
      // 145: ldc_w 50.0
      // 148: fdiv
      // 149: invokestatic sixtwo/mU.cpQ (FF)F
      // 14c: f2d
      // 14d: fload 6
      // 14f: fneg
      // 150: ldc_w 50.0
      // 153: fdiv
      // 154: fload 6
      // 156: ldc_w 50.0
      // 159: fdiv
      // 15a: invokestatic sixtwo/mU.cpQ (FF)F
      // 15d: f2d
      // 15e: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 161: astore 11
      // 163: aload 0
      // 164: getfield sixtwo/dc.DaBEE Ljava/util/List;
      // 167: new sixtwo/mm
      // 16a: dup
      // 16b: aload 10
      // 16d: aload 11
      // 16f: aload 5
      // 171: aload 0
      // 172: getfield sixtwo/dc.SynzG Lsixtwo/cC;
      // 175: invokevirtual sixtwo/cC.VB ()F
      // 178: aload 0
      // 179: getfield sixtwo/dc.yEhAI Lsixtwo/cC;
      // 17c: invokevirtual sixtwo/cC.VC ()I
      // 17f: aload 0
      // 180: getfield sixtwo/dc.rGtqd Lsixtwo/cA;
      // 183: aload 0
      // 184: getfield sixtwo/dc.MrfWt Lsixtwo/cA;
      // 187: invokespecial sixtwo/mm.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lsixtwo/mp;FILsixtwo/cA;Lsixtwo/cA;)V
      // 18a: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 18f: pop
      // 190: iinc 9 1
      // 193: aload 4
      // 195: ifnonnull 084
      // 198: aload 4
      // 19a: ifnull 0f1
      // 19d: aload 4
      // 19f: ifnull 084
      // 1a2: return
   }
}
