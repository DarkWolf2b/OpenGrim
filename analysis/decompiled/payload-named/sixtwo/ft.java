package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;

public class ft extends gg {
   private final cC VLpcw;
   private final ct elFbq;
   private final cu wztVz;
   private final cu uaqBp;
   private final cC jOgPB;
   private final cu DExMY;
   private final cJ ZEypD;
   private final cJ CcIwq;
   private final cC ZskBX;
   private final ol xQcjf;
   private boolean dYjds;
   private boolean cDIyq;
   private int bxQEh;
   private Item gyalZ;
   private boolean YmGIh;
   private int ZpJKG;
   private static long bDphN;
   private static long[] RtVVv;
   private static Integer[] QXBqm;
   private static Map jqCWG;

   private static native void _1846d37df278f08b3899a429f067ffc2();

   public ft() {
      long var1 = bDphN ^ 28450188321897L;
      super(gf.aZL(aQk<"u">(9328, 5904372367868025532L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aQk<"u">(5620, 7028343393884203826L ^ var1)];
      var10004[0] = aQk<"u">(19071, 3977424106123310221L ^ var1);
      var10004[1] = aQk<"u">(12570, 7612041547496345555L ^ var1);
      var10004[2] = aQk<"u">(24887, 2181709156913291214L ^ var1);
      var10004[3] = aQk<"u">(2358, 2808395647803815924L ^ var1);
      var10004[4] = aQk<"u">(7533, 6626918529622401930L ^ var1);
      var10004[5] = aQk<"u">(24195, 1610170009060220956L ^ var1);
      var10004[aQk<"u">(7823, 3524148266952384596L ^ var1)] = aQk<"u">(26735, 5069342528526096015L ^ var1);
      var10004[aQk<"u">(47, 6072532194176138968L ^ var1)] = aQk<"u">(29832, 4543635908143352412L ^ var1);
      var10004[aQk<"u">(618, 7295906808677072060L ^ var1)] = aQk<"u">(1095, 7934358740964735659L ^ var1);
      this.VLpcw = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(100.0).VA(40.0).Vz("%");
      var10004 = new int[aQk<"u">(17962, 317085576447473871L ^ var1)];
      var10004[0] = aQk<"u">(25574, 6114427243821931903L ^ var1);
      var10004[1] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[2] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[3] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[4] = aQk<"u">(6897, 2828591613991085067L ^ var1);
      var10004[5] = aQk<"u">(3275, 4825114162505413135L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(24646, 3818158306024267431L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      this.elFbq = new ct(this, mr.clS(var10004));
      ct var10003 = this.elFbq;
      var10004 = new int[aQk<"u">(9061, 4604439617687936509L ^ var1)];
      var10004[0] = aQk<"u">(25574, 6114427243821931903L ^ var1);
      var10004[1] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[2] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[3] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[4] = aQk<"u">(19337, 3885149619508622670L ^ var1);
      var10004[5] = aQk<"u">(11777, 117383102596370640L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      this.wztVz = new cu(var10003, mr.clS(var10004));
      var10003 = this.elFbq;
      var10004 = new int[aQk<"u">(9224, 3866609232605928082L ^ var1)];
      var10004[0] = aQk<"u">(7167, 743376122958013735L ^ var1);
      var10004[1] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[2] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[3] = aQk<"u">(20644, 5069025440049376857L ^ var1);
      var10004[4] = aQk<"u">(3447, 7342552306259358623L ^ var1);
      var10004[5] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(9530, 2904764052355865561L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(21869, 4161901863441116038L ^ var1);
      var10004[aQk<"u">(17962, 317085576447473871L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(28935, 2570996872334577640L ^ var1)] = aQk<"u">(30993, 3218135985375840218L ^ var1);
      var10004[aQk<"u">(10652, 3539216072969934705L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(32382, 4336785133103186100L ^ var1)] = aQk<"u">(26136, 8477575547957909718L ^ var1);
      var10004[aQk<"u">(19610, 1372066964031058504L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(23161, 8438743523295208583L ^ var1)] = aQk<"u">(16896, 4564226914045934836L ^ var1);
      var10004[aQk<"u">(19345, 4590748208560977257L ^ var1)] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[aQk<"u">(13936, 5255369640387528844L ^ var1)] = aQk<"u">(31231, 852588097667958583L ^ var1);
      this.uaqBp = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[aQk<"u">(18728, 1882172478962743291L ^ var1)];
      var10004[0] = aQk<"u">(25574, 6114427243821931903L ^ var1);
      var10004[1] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[2] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[3] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[4] = aQk<"u">(1422, 987126140495756157L ^ var1);
      var10004[5] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(30310, 7361747918104856764L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(26136, 8477575547957909718L ^ var1);
      var10004[aQk<"u">(17962, 317085576447473871L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(29123, 9033205843445190428L ^ var1)] = aQk<"u">(16896, 4564226914045934836L ^ var1);
      var10004[aQk<"u">(15725, 7084882954515399592L ^ var1)] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[aQk<"u">(6580, 7721005284615710564L ^ var1)] = aQk<"u">(7907, 7291695472543817786L ^ var1);
      this.jOgPB = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
      var10003 = this.elFbq;
      var10004 = new int[aQk<"u">(15725, 7084882954515399592L ^ var1)];
      var10004[0] = aQk<"u">(25212, 1561531868307987602L ^ var1);
      var10004[1] = aQk<"u">(13093, 2462177467330121178L ^ var1);
      var10004[2] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[3] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[4] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[5] = aQk<"u">(21969, 4696688344161463093L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[aQk<"u">(17962, 317085576447473871L ^ var1)] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[aQk<"u">(29123, 9033205843445190428L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      this.DExMY = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aQk<"u">(18728, 1882172478962743291L ^ var1)];
      var10004[0] = aQk<"u">(25574, 6114427243821931903L ^ var1);
      var10004[1] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[2] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[3] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[4] = aQk<"u">(25574, 6114427243821931903L ^ var1);
      var10004[5] = aQk<"u">(11777, 117383102596370640L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(24665, 2688911960324251268L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[aQk<"u">(17962, 317085576447473871L ^ var1)] = aQk<"u">(11777, 117383102596370640L ^ var1);
      var10004[aQk<"u">(29123, 9033205843445190428L ^ var1)] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[aQk<"u">(15725, 7084882954515399592L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(6580, 7721005284615710564L ^ var1)] = aQk<"u">(7907, 7291695472543817786L ^ var1);
      this.ZEypD = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aQk<"u">(27200, 7727261430613349504L ^ var1)];
      var10004[0] = aQk<"u">(758, 6361840789775154204L ^ var1);
      var10004[1] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[2] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[3] = aQk<"u">(11777, 117383102596370640L ^ var1);
      var10004[4] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[5] = aQk<"u">(11080, 8294731379369039265L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(9612, 7797616760347450222L ^ var1);
      var10004[aQk<"u">(17962, 317085576447473871L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(29123, 9033205843445190428L ^ var1)] = aQk<"u">(30310, 7361747918104856764L ^ var1);
      var10004[aQk<"u">(15725, 7084882954515399592L ^ var1)] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[aQk<"u">(6580, 7721005284615710564L ^ var1)] = aQk<"u">(12469, 6806639361241239136L ^ var1);
      var10004[aQk<"u">(18728, 1882172478962743291L ^ var1)] = aQk<"u">(7438, 8382395848350950337L ^ var1);
      var10004[aQk<"u">(31010, 5677521723048789951L ^ var1)] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[aQk<"u">(19738, 5502936031712031620L ^ var1)] = aQk<"u">(19785, 4651131325353472917L ^ var1);
      this.CcIwq = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aQk<"u">(4419, 6349717653909335973L ^ var1)];
      var10004[0] = aQk<"u">(19782, 4165493382257226685L ^ var1);
      var10004[1] = aQk<"u">(21832, 8113292375931136918L ^ var1);
      var10004[2] = aQk<"u">(26136, 8477575547957909718L ^ var1);
      var10004[3] = aQk<"u">(18534, 8594820051126597370L ^ var1);
      var10004[4] = aQk<"u">(2498, 6846885430548002611L ^ var1);
      var10004[5] = aQk<"u">(11777, 117383102596370640L ^ var1);
      var10004[aQk<"u">(8799, 5619220094205090952L ^ var1)] = aQk<"u">(24665, 2688911960324251268L ^ var1);
      var10004[aQk<"u">(9061, 4604439617687936509L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(11756, 8900684707083473697L ^ var1)] = aQk<"u">(18881, 9191180280344950580L ^ var1);
      var10004[aQk<"u">(17962, 317085576447473871L ^ var1)] = aQk<"u">(1422, 987126140495756157L ^ var1);
      var10004[aQk<"u">(29123, 9033205843445190428L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(15725, 7084882954515399592L ^ var1)] = aQk<"u">(30310, 7361747918104856764L ^ var1);
      var10004[aQk<"u">(6580, 7721005284615710564L ^ var1)] = aQk<"u">(14359, 2472984873110849249L ^ var1);
      var10004[aQk<"u">(18728, 1882172478962743291L ^ var1)] = aQk<"u">(26136, 8477575547957909718L ^ var1);
      var10004[aQk<"u">(31010, 5677521723048789951L ^ var1)] = aQk<"u">(29807, 4835770165465516718L ^ var1);
      var10004[aQk<"u">(19738, 5502936031712031620L ^ var1)] = aQk<"u">(16896, 4564226914045934836L ^ var1);
      var10004[aQk<"u">(27200, 7727261430613349504L ^ var1)] = aQk<"u">(1158, 8756996015648766533L ^ var1);
      var10004[aQk<"u">(27166, 5613423043308917998L ^ var1)] = aQk<"u">(7907, 7291695472543817786L ^ var1);
      this.ZskBX = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(30.0).VA(6.0);
      this.xQcjf = new ol(this);
      this.bxQEh = -1;
      this.ZpJKG = -1;
      this.jOgPB.Vf(this.uaqBp::SZ);
      this.ZskBX.Vf(this.CcIwq::WF);
   }

   static {
      Loader.doInit(ft.class);
      _1846d37df278f08b3899a429f067ffc2();
   }

   private native void aPV(boolean var1);

   private native void aPX();

   private native void aQd(float var1);

   private static native MatchException aQh(MatchException var0);

   private native boolean aPZ(float var1);

   private native oI aQa();

   private static native int aQi(int var0, long var1);

   private static native CallSite aQk(Lookup var0, String var1, MethodType var2);

   private static native int aQj(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean aPY(float var1);

   private native void aQc();

   private native boolean aQb(ItemStack var1);

   private native void aPW();

   private native ItemStack aQf(boolean var1);

   private native void aQe();

   @hG
   public native void aPU(gH$th var1);

   @Override
   public native void YO();
}
