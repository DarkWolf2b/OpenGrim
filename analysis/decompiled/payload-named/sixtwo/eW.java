package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class eW extends gg {
   private final cA oYVcq;
   private final cA mwZKu;
   private final cJ QUOiu;
   private final cD VBJFM;
   private final cK vhDcM;
   private final cJ NbNqt;
   private final ct wjYZb;
   private final cu IMMQw;
   private final cu IAuqT;
   private final cu ABaQX;
   private final cJ AYUNa;
   private final mT qcmQt;
   private final mT cCsEl;
   private final ol LSGzZ;
   private boolean gdpqr;
   private boolean salDh;
   private boolean sXTCM;
   private int eresX;
   private static long hkKrh;
   private static String[] viwpz;
   private static String[] sdKFC;
   private static Map sbnXU;
   private static long[] macbe;
   private static Integer[] UnlEh;
   private static Map CdQxi;

   public eW() {
      long var1 = hkKrh ^ 135693419378867L;
      super(gf.aZL(aEL<"i">(21841, 3141204240663824828L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aEL<"i">(19788, 3218869209243275695L ^ var1)];
      var10004[0] = aEL<"i">(30189, 1298420348674107704L ^ var1);
      var10004[1] = aEL<"i">(1780, 6039390930591324673L ^ var1);
      var10004[2] = aEL<"i">(2370, 7100999041254135250L ^ var1);
      var10004[3] = aEL<"i">(23205, 3333041764435969573L ^ var1);
      var10004[4] = aEL<"i">(25465, 3016690698834837397L ^ var1);
      var10004[5] = aEL<"i">(22362, 2097268157291023288L ^ var1);
      var10004[aEL<"i">(12681, 1631748754594114910L ^ var1)] = aEL<"i">(21794, 1975584436620184010L ^ var1);
      var10004[aEL<"i">(22878, 3229968358570149262L ^ var1)] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      var10004[aEL<"i">(1418, 7502329377347148112L ^ var1)] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      var10004[aEL<"i">(14947, 2985445767899293357L ^ var1)] = aEL<"i">(565, 9194881713863696124L ^ var1);
      var10004[aEL<"i">(2298, 8016869821791638639L ^ var1)] = aEL<"i">(7373, 4873508532954333212L ^ var1);
      this.oYVcq = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(aEI<"v">(12891, 3225303592420374186L ^ var1));
      var10004 = new int[aEL<"i">(16916, 2783791759140052702L ^ var1)];
      var10004[0] = aEL<"i">(26347, 6817067958657383039L ^ var1);
      var10004[1] = aEL<"i">(1430, 4313143739175213386L ^ var1);
      var10004[2] = aEL<"i">(7874, 1493077124531323457L ^ var1);
      var10004[3] = aEL<"i">(32245, 2694107768138457450L ^ var1);
      var10004[4] = aEL<"i">(9057, 738842048323501976L ^ var1);
      var10004[5] = aEL<"i">(28514, 296105686935303094L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(32308, 297060660128244434L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      var10004[aEL<"i">(5056, 2725817964624252690L ^ var1)] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      var10004[aEL<"i">(1027, 5625939667838638329L ^ var1)] = aEL<"i">(565, 9194881713863696124L ^ var1);
      var10004[aEL<"i">(9477, 6266279079323023766L ^ var1)] = aEL<"i">(24513, 5611017465448219459L ^ var1);
      this.mwZKu = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(20.0).UI(0.0, 0.0).UH(aEI<"v">(1998, 8466384082846171966L ^ var1));
      var10004 = new int[aEL<"i">(5056, 2725817964624252690L ^ var1)];
      var10004[0] = aEL<"i">(5284, 6038235458000291967L ^ var1);
      var10004[1] = aEL<"i">(10665, 5535420683136316739L ^ var1);
      var10004[2] = aEL<"i">(20226, 6680476770518389745L ^ var1);
      var10004[3] = aEL<"i">(10876, 8112536783887578759L ^ var1);
      var10004[4] = aEL<"i">(10363, 757361947798123653L ^ var1);
      var10004[5] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(8573, 7444594224796188034L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(2090, 4610257832747767009L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(5284, 6038235458000291967L ^ var1);
      this.QUOiu = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aEL<"i">(27443, 1946400581042010076L ^ var1)];
      var10004[0] = aEL<"i">(11367, 5494496869115211960L ^ var1);
      var10004[1] = aEL<"i">(9057, 738842048323501976L ^ var1);
      var10004[2] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[3] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[4] = aEL<"i">(4714, 3359208910500531953L ^ var1);
      var10004[5] = aEL<"i">(565, 9194881713863696124L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(10876, 8112536783887578759L ^ var1);
      var10004[aEL<"i">(5056, 2725817964624252690L ^ var1)] = aEL<"i">(3690, 6685125408981324453L ^ var1);
      var10004[aEL<"i">(1027, 5625939667838638329L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(9477, 6266279079323023766L ^ var1)] = aEL<"i">(22882, 8037364352341460357L ^ var1);
      var10004[aEL<"i">(3754, 130714849785909866L ^ var1)] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      var10004[aEL<"i">(27440, 621408174916171712L ^ var1)] = aEL<"i">(24513, 5611017465448219459L ^ var1);
      this.VBJFM = new cD(this, mr.clS(var10004)).VO(1);
      var10004 = new int[aEL<"i">(23851, 1254055089914134970L ^ var1)];
      var10004[0] = aEL<"i">(4266, 4317969307762494572L ^ var1);
      var10004[1] = aEL<"i">(10876, 8112536783887578759L ^ var1);
      var10004[2] = aEL<"i">(7416, 2762660008531361844L ^ var1);
      var10004[3] = aEL<"i">(14325, 6597552469070981997L ^ var1);
      var10004[4] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[5] = aEL<"i">(3112, 8843645506274463973L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(9948, 2251796378689550858L ^ var1);
      var10004[aEL<"i">(5056, 2725817964624252690L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(1027, 5625939667838638329L ^ var1)] = aEL<"i">(15789, 6595758599427957041L ^ var1);
      var10004[aEL<"i">(9477, 6266279079323023766L ^ var1)] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[aEL<"i">(3754, 130714849785909866L ^ var1)] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      var10004[aEL<"i">(3083, 7633076356907012245L ^ var1)] = aEL<"i">(19745, 1773662890861318607L ^ var1);
      var10004[aEL<"i">(30577, 4435532097975708549L ^ var1)] = aEL<"i">(2192, 6221824657697444866L ^ var1);
      cK var10001 = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      Item[] var10002 = new Item[aEL<"i">(17933, 7713108408825535189L ^ var1)];
      var10002[0] = Items.NETHERITE_SWORD;
      var10002[1] = Items.DIAMOND_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.STONE_SWORD;
      var10002[4] = Items.GOLDEN_SWORD;
      var10002[5] = Items.WOODEN_SWORD;
      this.vhDcM = var10001.WN(var10002);
      var10004 = new int[aEL<"i">(29810, 2700275636753230052L ^ var1)];
      var10004[0] = aEL<"i">(5284, 6038235458000291967L ^ var1);
      var10004[1] = aEL<"i">(1330, 5198019684577024473L ^ var1);
      var10004[2] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[3] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[4] = aEL<"i">(9057, 738842048323501976L ^ var1);
      var10004[5] = aEL<"i">(9948, 2251796378689550858L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(4743, 4070704069393911364L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(565, 9194881713863696124L ^ var1);
      var10004[aEL<"i">(5056, 2725817964624252690L ^ var1)] = aEL<"i">(9057, 738842048323501976L ^ var1);
      var10004[aEL<"i">(1027, 5625939667838638329L ^ var1)] = aEL<"i">(239, 98893198271519750L ^ var1);
      var10004[aEL<"i">(9477, 6266279079323023766L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(3754, 130714849785909866L ^ var1)] = aEL<"i">(6761, 3262849018648561332L ^ var1);
      var10004[aEL<"i">(3083, 7633076356907012245L ^ var1)] = aEL<"i">(10876, 8112536783887578759L ^ var1);
      var10004[aEL<"i">(30577, 4435532097975708549L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(7855, 6568296120769610314L ^ var1)] = aEL<"i">(5284, 6038235458000291967L ^ var1);
      var10004[aEL<"i">(31333, 8879413981490243327L ^ var1)] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      var10004[aEL<"i">(19524, 6742686592139677907L ^ var1)] = aEL<"i">(10876, 8112536783887578759L ^ var1);
      var10004[aEL<"i">(18436, 4996545447939396829L ^ var1)] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      this.NbNqt = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aEL<"i">(3083, 7633076356907012245L ^ var1)];
      var10004[0] = aEL<"i">(9703, 2742595276368427386L ^ var1);
      var10004[1] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[2] = aEL<"i">(3356, 1669879940329902555L ^ var1);
      var10004[3] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[4] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[5] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(15571, 8333238238211121170L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(19032, 7530160979000481449L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(24513, 5611017465448219459L ^ var1);
      var10004[aEL<"i">(5056, 2725817964624252690L ^ var1)] = aEL<"i">(7627, 789241669786009907L ^ var1);
      var10004[aEL<"i">(1027, 5625939667838638329L ^ var1)] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[aEL<"i">(9477, 6266279079323023766L ^ var1)] = aEL<"i">(565, 9194881713863696124L ^ var1);
      var10004[aEL<"i">(3754, 130714849785909866L ^ var1)] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      this.wjYZb = new ct(this, mr.clS(var10004)).SO(2);
      ct var10003 = this.wjYZb;
      var10004 = new int[aEL<"i">(17933, 7713108408825535189L ^ var1)];
      var10004[0] = aEL<"i">(5284, 6038235458000291967L ^ var1);
      var10004[1] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[2] = aEL<"i">(23388, 3644333431670884256L ^ var1);
      var10004[3] = aEL<"i">(8916, 5976014667432869386L ^ var1);
      var10004[4] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      var10004[5] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      this.IMMQw = new cu(var10003, mr.clS(var10004));
      var10003 = this.wjYZb;
      var10004 = new int[aEL<"i">(17933, 7713108408825535189L ^ var1)];
      var10004[0] = aEL<"i">(32308, 297060660128244434L ^ var1);
      var10004[1] = aEL<"i">(10876, 8112536783887578759L ^ var1);
      var10004[2] = aEL<"i">(2964, 8118955650991855458L ^ var1);
      var10004[3] = aEL<"i">(8100, 6745357188563501920L ^ var1);
      var10004[4] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      var10004[5] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      this.IAuqT = new cu(var10003, mr.clS(var10004));
      var10003 = this.wjYZb;
      var10004 = new int[aEL<"i">(30856, 3753904244586210426L ^ var1)];
      var10004[0] = aEL<"i">(18029, 9053122203615779469L ^ var1);
      var10004[1] = aEL<"i">(23388, 3644333431670884256L ^ var1);
      var10004[2] = aEL<"i">(30670, 844749052763663115L ^ var1);
      var10004[3] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[4] = aEL<"i">(23388, 3644333431670884256L ^ var1);
      var10004[5] = aEL<"i">(29845, 1769368004324518001L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(8675, 2515753307745566000L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      this.ABaQX = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aEL<"i">(3083, 7633076356907012245L ^ var1)];
      var10004[0] = aEL<"i">(15571, 8333238238211121170L ^ var1);
      var10004[1] = aEL<"i">(565, 9194881713863696124L ^ var1);
      var10004[2] = aEL<"i">(23388, 3644333431670884256L ^ var1);
      var10004[3] = aEL<"i">(9057, 738842048323501976L ^ var1);
      var10004[4] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      var10004[5] = aEL<"i">(9947, 1411038048219249218L ^ var1);
      var10004[aEL<"i">(17933, 7713108408825535189L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(30719, 1745563375694179133L ^ var1)] = aEL<"i">(8391, 2794405870148533263L ^ var1);
      var10004[aEL<"i">(30856, 3753904244586210426L ^ var1)] = aEL<"i">(23388, 3644333431670884256L ^ var1);
      var10004[aEL<"i">(5056, 2725817964624252690L ^ var1)] = aEL<"i">(21329, 151077460607553456L ^ var1);
      var10004[aEL<"i">(1027, 5625939667838638329L ^ var1)] = aEL<"i">(19358, 796106465282119523L ^ var1);
      var10004[aEL<"i">(9477, 6266279079323023766L ^ var1)] = aEL<"i">(7627, 789241669786009907L ^ var1);
      var10004[aEL<"i">(3754, 130714849785909866L ^ var1)] = aEL<"i">(20027, 8579373978586665676L ^ var1);
      this.AYUNa = new cJ(this, mr.clS(var10004)).WE(true);
      this.qcmQt = mT.cpA();
      this.cCsEl = mT.cpA();
      this.LSGzZ = new ol(this);
   }

   static {
      Loader.doInit(eW.class);
      _5fb21971896da5bd6ff915283c37e890();
   }

   @Override
   public native void aaj();

   private static native void _5fb21971896da5bd6ff915283c37e890();

   private static native MatchException aEE(MatchException var0);

   private static native String aEF(byte[] var0);

   private static native CallSite aEL(Lookup var0, String var1, MethodType var2);

   private static native int aEJ(int var0, long var1);

   @hG
   public native void aEA(gO$tm var1);

   private native void aED();

   private static native Object aEH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aEz(gH$th var1);

   private static native CallSite aEI(Lookup var0, String var1, MethodType var2);

   public native boolean aEB();

   public native void aEC();

   private static native int aEK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aEG(int var0, long var1);
}
