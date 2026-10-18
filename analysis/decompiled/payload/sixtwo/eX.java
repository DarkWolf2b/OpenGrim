package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1802;
import net.minecraft.class_2338;
import net.minecraft.class_3965;

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
   private final List<class_2338> FfayM;
   private boolean qMxUf;
   private boolean FjOEe;
   private class_2338 UmOLR;
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
      super(gf.aZL(aFD<"m">(13673, 1506227542756782795L ^ var1), false, gh.xwjCw));
      this.tGIRe = new ct(
         this,
         mr.clS(
            new int[]{
               aFD<"m">(5262, 1934881270365934365L ^ var1),
               aFD<"m">(5694, 5018868568768958881L ^ var1),
               aFD<"m">(10506, 7543980678698626719L ^ var1),
               aFD<"m">(8576, 7878313955330876939L ^ var1)
            }
         )
      );
      this.ctwjT = new cu(
         this.tGIRe,
         mr.clS(
            new int[]{
               aFD<"m">(11852, 5314775108014828023L ^ var1),
               aFD<"m">(5785, 1245124818866884864L ^ var1),
               aFD<"m">(29863, 8875546972082615079L ^ var1),
               aFD<"m">(7481, 118773000714607235L ^ var1),
               aFD<"m">(32630, 3912755187856029930L ^ var1)
            }
         )
      );
      this.Jtsgl = new cu(
         this.tGIRe,
         mr.clS(
            new int[]{
               aFD<"m">(5308, 4663617297667052300L ^ var1),
               aFD<"m">(27867, 4135091434989661010L ^ var1),
               aFD<"m">(28700, 4222128343196448660L ^ var1),
               aFD<"m">(14382, 1506233578136371089L ^ var1)
            }
         )
      );
      int[] var10004 = new int[aFD<"m">(27349, 1806245596156341526L ^ var1)];
      var10004[0] = aFD<"m">(8692, 7814937482289276493L ^ var1);
      var10004[1] = aFD<"m">(30025, 2426209874426901220L ^ var1);
      var10004[2] = aFD<"m">(29194, 7984140915751335338L ^ var1);
      var10004[3] = aFD<"m">(16758, 4900545739929388769L ^ var1);
      var10004[4] = aFD<"m">(6389, 2880885498531340112L ^ var1);
      var10004[5] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10004[aFD<"m">(20116, 5631936065025149235L ^ var1)] = aFD<"m">(10404, 8554120355239685900L ^ var1);
      var10004[aFD<"m">(29218, 8205390720706852243L ^ var1)] = aFD<"m">(4957, 1597997311946904815L ^ var1);
      var10004[aFD<"m">(28257, 1288185763067111858L ^ var1)] = aFD<"m">(14067, 2585783964306698614L ^ var1);
      var10004[aFD<"m">(10200, 7192785528329068610L ^ var1)] = aFD<"m">(17938, 5990942832016785829L ^ var1);
      var10004[aFD<"m">(2269, 2602101683902992242L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
      var10004[aFD<"m">(22238, 913393698008895834L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10004[aFD<"m">(17150, 6896432926144464161L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
      var10004[aFD<"m">(24205, 3840202338426231040L ^ var1)] = aFD<"m">(32630, 3912755187856029930L ^ var1);
      this.ikcZw = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aFD<"m">(13304, 4757112770267640890L ^ var1)];
      var10004[0] = aFD<"m">(10256, 2750224393749426062L ^ var1);
      var10004[1] = aFD<"m">(16516, 8428637357346293515L ^ var1);
      var10004[2] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10004[3] = aFD<"m">(16758, 4900545739929388769L ^ var1);
      var10004[4] = aFD<"m">(3091, 5878408575649532831L ^ var1);
      var10004[5] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(9628, 8466120684786082360L ^ var1);
      var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
      var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10004[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(9112, 3616817548955477017L ^ var1);
      this.qSoHb = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(aFA<"h">(6461, 3339394494338561365L ^ var1));
      var10004 = new int[aFD<"m">(15825, 1715014306409708099L ^ var1)];
      var10004[0] = aFD<"m">(12691, 4838830298318272016L ^ var1);
      var10004[1] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10004[2] = aFD<"m">(19308, 7272056725823786202L ^ var1);
      var10004[3] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10004[4] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10004[5] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(26966, 889046334354304706L ^ var1);
      var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10004[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(2990, 6872150767396277264L ^ var1);
      var10004[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
      var10004[aFD<"m">(21135, 224286362831361293L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10004[aFD<"m">(21843, 601300147338580693L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
      var10004[aFD<"m">(30391, 589422815472103727L ^ var1)] = aFD<"m">(32630, 3912755187856029930L ^ var1);
      this.mmJaL = new cJ(this, mr.clS(var10004)).WE(true);
      boolean var10000 = eV.aEq();
      int[] var10005 = new int[aFD<"m">(21843, 601300147338580693L ^ var1)];
      var10005[0] = aFD<"m">(12691, 4838830298318272016L ^ var1);
      var10005[1] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[2] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10005[3] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10005[4] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10005[5] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10005[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10005[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(12691, 4838830298318272016L ^ var1);
      var10005[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
      var10005[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10005[aFD<"m">(21135, 224286362831361293L ^ var1)] = aFD<"m">(14546, 7531418576223108872L ^ var1);
      this.xdsyS = new cA(this, mr.clS(var10005)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(aFA<"h">(14618, 5330862235145786739L ^ var1));
      var10005 = new int[aFD<"m">(13304, 4757112770267640890L ^ var1)];
      var10005[0] = aFD<"m">(26966, 889046334354304706L ^ var1);
      var10005[1] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10005[2] = aFD<"m">(2990, 6872150767396277264L ^ var1);
      var10005[3] = aFD<"m">(16516, 8428637357346293515L ^ var1);
      var10005[4] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10005[5] = aFD<"m">(16758, 4900545739929388769L ^ var1);
      var10005[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(12691, 4838830298318272016L ^ var1);
      var10005[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
      var10005[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10005[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(14546, 7531418576223108872L ^ var1);
      this.GIPFr = new cA(this, mr.clS(var10005)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(aFA<"h">(14618, 5330862235145786739L ^ var1));
      var10005 = new int[aFD<"m">(21135, 224286362831361293L ^ var1)];
      var10005[0] = aFD<"m">(12691, 4838830298318272016L ^ var1);
      var10005[1] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[2] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10005[3] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10005[4] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10005[5] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10005[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10005[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(31791, 8191857056289831929L ^ var1);
      var10005[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10005[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(30396, 3120277543235760509L ^ var1);
      this.ymWjd = new cC(this, mr.clS(var10005)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(aFA<"h">(15178, 3144157444254291745L ^ var1));
      var10005 = new int[aFD<"m">(13304, 4757112770267640890L ^ var1)];
      var10005[0] = aFD<"m">(3974, 788045437451159592L ^ var1);
      var10005[1] = aFD<"m">(23072, 5650624537862479253L ^ var1);
      var10005[2] = aFD<"m">(17359, 525535957286356068L ^ var1);
      var10005[3] = aFD<"m">(17103, 6987994576421946729L ^ var1);
      var10005[4] = aFD<"m">(2990, 6872150767396277264L ^ var1);
      var10005[5] = aFD<"m">(16516, 8428637357346293515L ^ var1);
      var10005[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(12691, 4838830298318272016L ^ var1);
      var10005[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
      var10005[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10005[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(14546, 7531418576223108872L ^ var1);
      this.QJeGA = new cA(this, mr.clS(var10005)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH(aFA<"h">(14618, 5330862235145786739L ^ var1));
      var10005 = new int[aFD<"m">(13304, 4757112770267640890L ^ var1)];
      var10005[0] = aFD<"m">(2831, 2729947901362719916L ^ var1);
      var10005[1] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10005[2] = aFD<"m">(19783, 7199182049651755729L ^ var1);
      var10005[3] = aFD<"m">(14546, 7531418576223108872L ^ var1);
      var10005[4] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[5] = aFD<"m">(12992, 402955522704995601L ^ var1);
      var10005[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
      var10005[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
      var10005[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(20712, 8509384646429185858L ^ var1);
      var10005[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(26061, 1882667689857950228L ^ var1);
      var10005[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      this.JeboL = new cJ(this, mr.clS(var10005)).WE(false);
      var10005 = new int[aFD<"m">(21135, 224286362831361293L ^ var1)];
      var10005[0] = aFD<"m">(10256, 2750224393749426062L ^ var1);
      var10005[1] = aFD<"m">(5462, 534188721718743786L ^ var1);
      var10005[2] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10005[3] = aFD<"m">(2990, 6872150767396277264L ^ var1);
      var10005[4] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      var10005[5] = aFD<"m">(19783, 7199182049651755729L ^ var1);
      var10005[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(20712, 8509384646429185858L ^ var1);
      var10005[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(15987, 9213396359395604974L ^ var1);
      var10005[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
      var10005[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(20299, 2307037262081722611L ^ var1);
      var10005[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(32630, 3912755187856029930L ^ var1);
      var10005[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
      this.JCATM = new cJ(this, mr.clS(var10005)).WE(true);
      boolean var3 = var10000;

      try {
         var10004 = new int[aFD<"m">(9234, 6124544803690537932L ^ var1)];
         var10004[0] = aFD<"m">(21781, 5450033601957761721L ^ var1);
         var10004[1] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[2] = aFD<"m">(13993, 5753584449752101128L ^ var1);
         var10004[3] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[4] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[5] = aFD<"m">(26966, 889046334354304706L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(15987, 9213396359395604974L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(2990, 6872150767396277264L ^ var1);
         var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
         var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         this.KfwhF = new cJ(this, mr.clS(var10004)).WE(false);
         var10004 = new int[aFD<"m">(26256, 2196014611788767523L ^ var1)];
         var10004[0] = aFD<"m">(21781, 5450033601957761721L ^ var1);
         var10004[1] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[2] = aFD<"m">(9685, 1918283164506219112L ^ var1);
         var10004[3] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[4] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[5] = aFD<"m">(26966, 889046334354304706L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(15987, 9213396359395604974L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(2990, 6872150767396277264L ^ var1);
         var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
         var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         var10004[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(23845, 1369034763728657076L ^ var1);
         var10004[aFD<"m">(21135, 224286362831361293L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[aFD<"m">(21843, 601300147338580693L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
         var10004[aFD<"m">(2891, 8784977704592100505L ^ var1)] = aFD<"m">(14382, 1506233578136371089L ^ var1);
         this.RGmUw = new cJ(this, mr.clS(var10004)).WE(false);
         var10004 = new int[aFD<"m">(18022, 185785855379177953L ^ var1)];
         var10004[0] = aFD<"m">(23845, 1369034763728657076L ^ var1);
         var10004[1] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[2] = aFD<"m">(19783, 7199182049651755729L ^ var1);
         var10004[3] = aFD<"m">(14382, 1506233578136371089L ^ var1);
         var10004[4] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[5] = aFD<"m">(5742, 1402655514482364926L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(14546, 7531418576223108872L ^ var1);
         this.hPUWA = new cD(this, mr.clS(var10004)).VO(aFD<"m">(13239, 5540116254198527082L ^ var1));
         var10004 = new int[aFD<"m">(12017, 2164507354477652293L ^ var1)];
         var10004[0] = aFD<"m">(21781, 5450033601957761721L ^ var1);
         var10004[1] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[2] = aFD<"m">(9685, 1918283164506219112L ^ var1);
         var10004[3] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[4] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[5] = aFD<"m">(26966, 889046334354304706L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(15987, 9213396359395604974L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(2990, 6872150767396277264L ^ var1);
         var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
         var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         var10004[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(2700, 9094660564450757890L ^ var1);
         var10004[aFD<"m">(21135, 224286362831361293L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
         var10004[aFD<"m">(21843, 601300147338580693L ^ var1)] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[aFD<"m">(2891, 8784977704592100505L ^ var1)] = aFD<"m">(2990, 6872150767396277264L ^ var1);
         var10004[aFD<"m">(26256, 2196014611788767523L ^ var1)] = aFD<"m">(836, 1921140890868401375L ^ var1);
         var10004[aFD<"m">(19186, 7174587005756640546L ^ var1)] = aFD<"m">(32630, 3912755187856029930L ^ var1);
         this.kecKJ = new cK(this, mr.clS(var10004)).WM(jc.GjreY).WN(class_1802.field_8281, class_1802.field_8801);
         this.KUvew = new ct(
            this,
            mr.clS(
               new int[]{
                  aFD<"m">(18768, 730184937191149305L ^ var1),
                  aFD<"m">(16516, 8428637357346293515L ^ var1),
                  aFD<"m">(29863, 8875546972082615079L ^ var1),
                  aFD<"m">(15987, 9213396359395604974L ^ var1)
               }
            )
         );
         ct var10003 = this.KUvew;
         var10004 = new int[aFD<"m">(21135, 224286362831361293L ^ var1)];
         var10004[0] = aFD<"m">(24956, 7260468748784543400L ^ var1);
         var10004[1] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[2] = aFD<"m">(9685, 1918283164506219112L ^ var1);
         var10004[3] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[4] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         var10004[5] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(10256, 2750224393749426062L ^ var1);
         var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
         var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         var10004[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(3091, 5878408575649532831L ^ var1);
         var10004[aFD<"m">(13304, 4757112770267640890L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         this.EYjJv = new cu(var10003, mr.clS(var10004));
         var10003 = this.KUvew;
         var10004 = new int[aFD<"m">(13304, 4757112770267640890L ^ var1)];
         var10004[0] = aFD<"m">(26966, 889046334354304706L ^ var1);
         var10004[1] = aFD<"m">(9685, 1918283164506219112L ^ var1);
         var10004[2] = aFD<"m">(17103, 6987994576421946729L ^ var1);
         var10004[3] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         var10004[4] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         var10004[5] = aFD<"m">(5454, 835988030156591766L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(10256, 2750224393749426062L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(16516, 8428637357346293515L ^ var1);
         var10004[aFD<"m">(18022, 185785855379177953L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[aFD<"m">(3094, 8017035669386480540L ^ var1)] = aFD<"m">(16758, 4900545739929388769L ^ var1);
         var10004[aFD<"m">(16261, 7889169798075906128L ^ var1)] = aFD<"m">(3091, 5878408575649532831L ^ var1);
         var10004[aFD<"m">(9234, 6124544803690537932L ^ var1)] = aFD<"m">(29863, 8875546972082615079L ^ var1);
         this.lxmFM = new cu(var10003, mr.clS(var10004));
         var10004 = new int[aFD<"m">(18022, 185785855379177953L ^ var1)];
         var10004[0] = aFD<"m">(12691, 4838830298318272016L ^ var1);
         var10004[1] = aFD<"m">(7626, 7173321973838600721L ^ var1);
         var10004[2] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[3] = aFD<"m">(3091, 5878408575649532831L ^ var1);
         var10004[4] = aFD<"m">(27867, 4135091434989661010L ^ var1);
         var10004[5] = aFD<"m">(15987, 9213396359395604974L ^ var1);
         var10004[aFD<"m">(14504, 785900735829868415L ^ var1)] = aFD<"m">(5462, 534188721718743786L ^ var1);
         var10004[aFD<"m">(9290, 1139990818533434262L ^ var1)] = aFD<"m">(19783, 7199182049651755729L ^ var1);
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

   private native void aES(class_3965 var1);

   public native cu aEU();

   @hG
   public native void aEP(gW$tq var1);

   public native cJ aFe();

   public native cD aFh();

   public native mT aFn();

   public native class_2338 aFu();

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

   public native List<class_2338> aFr();

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
