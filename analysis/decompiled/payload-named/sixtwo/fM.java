package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fM extends gg {
   private final cC dGwjW;
   private final cJ YSNTj;
   private final ct Btadw;
   private final cu tKkYu;
   private final cu AleCL;
   private final cu rDsyy;
   private final cu ZBrrX;
   private final cu fFjCr;
   private final cu EDXTP;
   private static long vSOfS;
   private static String GgimX;
   private static long[] nJRgq;
   private static Integer[] quYDv;
   private static Map FffRs;

   private static native void _29ee64b3edc59393a3bb896a1fd427c8();

   public fM() {
      long var1 = vSOfS ^ 40377846940122L;
      super(gf.aZL(aVv<"j">(4519, 6472099665691068569L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aVv<"j">(1792, 3188435619213925891L ^ var1)];
      var10004[0] = aVv<"j">(31890, 1778721169221133701L ^ var1);
      var10004[1] = aVv<"j">(8045, 1236464081971201654L ^ var1);
      var10004[2] = aVv<"j">(24539, 5595538716610430687L ^ var1);
      var10004[3] = aVv<"j">(12640, 1740218092887533638L ^ var1);
      var10004[4] = aVv<"j">(13135, 5263898542355245678L ^ var1);
      var10004[5] = aVv<"j">(17495, 7454515540832427330L ^ var1);
      var10004[aVv<"j">(22463, 8607726813989506708L ^ var1)] = aVv<"j">(20327, 3630726439622907486L ^ var1);
      var10004[aVv<"j">(6554, 6722703585209729155L ^ var1)] = aVv<"j">(23949, 1225505001073673397L ^ var1);
      var10004[aVv<"j">(31643, 285423002971775641L ^ var1)] = aVv<"j">(29470, 3998414746655566397L ^ var1);
      this.dGwjW = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(3.0).Vx(15.0).VA(4.0).Vz(GgimX);
      var10004 = new int[aVv<"j">(4364, 4283420543094016030L ^ var1)];
      var10004[0] = aVv<"j">(22329, 8995682902857616923L ^ var1);
      var10004[1] = aVv<"j">(22168, 9217264200752041898L ^ var1);
      var10004[2] = aVv<"j">(19571, 3131620231780177220L ^ var1);
      var10004[3] = aVv<"j">(17495, 7454515540832427330L ^ var1);
      var10004[4] = aVv<"j">(28180, 9090161335085643554L ^ var1);
      var10004[5] = aVv<"j">(16678, 5571900260332378113L ^ var1);
      var10004[aVv<"j">(23585, 461931912961426749L ^ var1)] = aVv<"j">(2953, 6970596281011524285L ^ var1);
      var10004[aVv<"j">(30800, 3903264177064059201L ^ var1)] = aVv<"j">(24712, 3033664310694984102L ^ var1);
      var10004[aVv<"j">(20090, 6372864896397449030L ^ var1)] = aVv<"j">(21281, 7892978721834469896L ^ var1);
      var10004[aVv<"j">(5693, 5877227871600955182L ^ var1)] = aVv<"j">(12755, 5842678266388998350L ^ var1);
      var10004[aVv<"j">(3476, 2099722090555790526L ^ var1)] = aVv<"j">(24240, 8335510144794036132L ^ var1);
      var10004[aVv<"j">(9303, 293243431982464338L ^ var1)] = aVv<"j">(26315, 3242429014311026670L ^ var1);
      var10004[aVv<"j">(32698, 8162415055560550037L ^ var1)] = aVv<"j">(16678, 5571900260332378113L ^ var1);
      this.YSNTj = new cJ(this, mr.clS(var10004)).WE(false);
      this.Btadw = new ct(
         this,
         mr.clS(
            new int[]{
               aVv<"j">(9076, 1386555750441810500L ^ var1),
               aVv<"j">(28180, 9090161335085643554L ^ var1),
               aVv<"j">(28956, 6210769439536425001L ^ var1),
               aVv<"j">(26315, 3242429014311026670L ^ var1)
            }
         )
      );
      ct var10003 = this.Btadw;
      var10004 = new int[aVv<"j">(23585, 461931912961426749L ^ var1)];
      var10004[0] = aVv<"j">(15650, 5943206740343940115L ^ var1);
      var10004[1] = aVv<"j">(14723, 4063397605167325358L ^ var1);
      var10004[2] = aVv<"j">(8195, 7469180612066638142L ^ var1);
      var10004[3] = aVv<"j">(8848, 1515291821496662972L ^ var1);
      var10004[4] = aVv<"j">(26315, 3242429014311026670L ^ var1);
      var10004[5] = aVv<"j">(8691, 5111994298241284325L ^ var1);
      this.tKkYu = new cu(var10003, mr.clS(var10004));
      this.AleCL = new cu(
         this.Btadw,
         mr.clS(
            new int[]{
               aVv<"j">(27612, 1834894429467062979L ^ var1),
               aVv<"j">(21281, 7892978721834469896L ^ var1),
               aVv<"j">(126, 4048522153101613406L ^ var1),
               aVv<"j">(15592, 1528857331694593472L ^ var1),
               aVv<"j">(26315, 3242429014311026670L ^ var1)
            }
         )
      );
      this.rDsyy = new cu(
         this.Btadw,
         mr.clS(
            new int[]{
               aVv<"j">(28187, 1770945197602223901L ^ var1),
               aVv<"j">(28180, 9090161335085643554L ^ var1),
               aVv<"j">(24578, 7100200059105098022L ^ var1),
               aVv<"j">(26315, 3242429014311026670L ^ var1),
               aVv<"j">(19139, 3801898586907579388L ^ var1)
            }
         )
      );
      var10003 = this.Btadw;
      var10004 = new int[aVv<"j">(23585, 461931912961426749L ^ var1)];
      var10004[0] = aVv<"j">(12404, 1558901672826759534L ^ var1);
      var10004[1] = aVv<"j">(28180, 9090161335085643554L ^ var1);
      var10004[2] = aVv<"j">(29639, 4098515048079895255L ^ var1);
      var10004[3] = aVv<"j">(26006, 542860896393804942L ^ var1);
      var10004[4] = aVv<"j">(26315, 3242429014311026670L ^ var1);
      var10004[5] = aVv<"j">(13705, 6376547493870103738L ^ var1);
      this.ZBrrX = new cu(var10003, mr.clS(var10004));
      var10003 = this.Btadw;
      var10004 = new int[aVv<"j">(30800, 3903264177064059201L ^ var1)];
      var10004[0] = aVv<"j">(1703, 3004930251362656157L ^ var1);
      var10004[1] = aVv<"j">(9582, 8216437141041773680L ^ var1);
      var10004[2] = aVv<"j">(19139, 3801898586907579388L ^ var1);
      var10004[3] = aVv<"j">(10175, 3143475357198777988L ^ var1);
      var10004[4] = aVv<"j">(9582, 8216437141041773680L ^ var1);
      var10004[5] = aVv<"j">(21281, 7892978721834469896L ^ var1);
      var10004[aVv<"j">(23585, 461931912961426749L ^ var1)] = aVv<"j">(26315, 3242429014311026670L ^ var1);
      this.fFjCr = new cu(var10003, mr.clS(var10004));
      var10003 = this.Btadw;
      var10004 = new int[aVv<"j">(23585, 461931912961426749L ^ var1)];
      var10004[0] = aVv<"j">(14598, 528370539893186561L ^ var1);
      var10004[1] = aVv<"j">(17495, 7454515540832427330L ^ var1);
      var10004[2] = aVv<"j">(26315, 3242429014311026670L ^ var1);
      var10004[3] = aVv<"j">(16678, 5571900260332378113L ^ var1);
      var10004[4] = aVv<"j">(16678, 5571900260332378113L ^ var1);
      var10004[5] = aVv<"j">(19139, 3801898586907579388L ^ var1);
      this.EDXTP = new cu(var10003, mr.clS(var10004));
   }

   static {
      Loader.doInit(fM.class);
      _29ee64b3edc59393a3bb896a1fd427c8();
   }

   private static native CallSite aVv(Lookup var0, String var1, MethodType var2);

   private static native MatchException aVr(MatchException var0);

   private static native int aVu(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aVs(byte[] var0);

   @hG
   public native void aVp(gv var1);

   @hG
   public native void aVq(gH$th var1);

   private static native int aVt(int var0, long var1);
}
