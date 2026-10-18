package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eE extends gg {
   private final cJ iQpCa;
   private final cA OTTMg;
   private static long ooppM;
   private static long[] EWJat;
   private static Integer[] chvgy;
   private static Map iJToP;

   public eE() {
      long var1 = ooppM ^ 52430184874285L;
      super(gf.aZL(awD<"z">(5208, 5954151121269430615L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[awD<"z">(6168, 1993713588555289857L ^ var1)];
      var10004[0] = awD<"z">(27184, 1786921504533997342L ^ var1);
      var10004[1] = awD<"z">(13399, 8214537316639816022L ^ var1);
      var10004[2] = awD<"z">(9791, 8379660565501487898L ^ var1);
      var10004[3] = awD<"z">(31704, 5422261293010908884L ^ var1);
      var10004[4] = awD<"z">(13966, 5409254869931211651L ^ var1);
      var10004[5] = awD<"z">(16817, 1425047215519485115L ^ var1);
      var10004[awD<"z">(15540, 5301946527803257234L ^ var1)] = awD<"z">(19263, 3159141322058090002L ^ var1);
      var10004[awD<"z">(21767, 3755113965748901926L ^ var1)] = awD<"z">(14924, 6484872330777704278L ^ var1);
      var10004[awD<"z">(14363, 706212826806924592L ^ var1)] = awD<"z">(24673, 2673547559258975610L ^ var1);
      var10004[awD<"z">(2224, 5699486243303228848L ^ var1)] = awD<"z">(14924, 6484872330777704278L ^ var1);
      var10004[awD<"z">(30560, 6750260241079827069L ^ var1)] = awD<"z">(1705, 1804076429910510508L ^ var1);
      var10004[awD<"z">(15454, 4290661895256617288L ^ var1)] = awD<"z">(6014, 4365144946000960107L ^ var1);
      var10004[awD<"z">(16624, 8543925743734902262L ^ var1)] = awD<"z">(26646, 8294390837798659377L ^ var1);
      var10004[awD<"z">(6181, 7646570573701649702L ^ var1)] = awD<"z">(32618, 6683861534259999353L ^ var1);
      var10004[awD<"z">(25272, 6363062428244766639L ^ var1)] = awD<"z">(11353, 5991698629333655880L ^ var1);
      var10004[awD<"z">(22181, 3666031211922545546L ^ var1)] = awD<"z">(27295, 4123129170267989912L ^ var1);
      var10004[awD<"z">(18966, 59628324022634302L ^ var1)] = awD<"z">(16848, 5115189009623534814L ^ var1);
      this.iQpCa = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[awD<"z">(1646, 6646567965812231025L ^ var1)];
      var10004[0] = awD<"z">(15530, 5201191500415545761L ^ var1);
      var10004[1] = awD<"z">(32464, 7740912366838674416L ^ var1);
      var10004[2] = awD<"z">(1639, 495926249623554915L ^ var1);
      var10004[3] = awD<"z">(27295, 4123129170267989912L ^ var1);
      var10004[4] = awD<"z">(14924, 6484872330777704278L ^ var1);
      var10004[5] = awD<"z">(19337, 3428910841533286053L ^ var1);
      var10004[awD<"z">(23303, 1421885697483494931L ^ var1)] = awD<"z">(13487, 9107191705390823869L ^ var1);
      var10004[awD<"z">(4374, 2405921143170669618L ^ var1)] = awD<"z">(11353, 5991698629333655880L ^ var1);
      var10004[awD<"z">(22480, 5373573976894331641L ^ var1)] = awD<"z">(10234, 3130980871601072866L ^ var1);
      var10004[awD<"z">(1669, 359122209883884428L ^ var1)] = awD<"z">(13985, 7860790669571537827L ^ var1);
      var10004[awD<"z">(23123, 5109264089753540429L ^ var1)] = awD<"z">(23724, 7458029097818182064L ^ var1);
      var10004[awD<"z">(6713, 8435661034490402601L ^ var1)] = awD<"z">(22097, 9019657920255318907L ^ var1);
      var10004[awD<"z">(18248, 4356979336001997376L ^ var1)] = awD<"z">(27295, 4123129170267989912L ^ var1);
      this.OTTMg = new cA(this, mr.clS(var10004)).UG(0.001).UE(0.001).UF(0.1).UI(0.001, 0.001);
   }

   static {
      Loader.doInit(eE.class);
      _c35a7cb99f43a6344ba13bf140372f4b();
   }

   private static native void _c35a7cb99f43a6344ba13bf140372f4b();

   private static native int awB(int var0, long var1);

   private static native CallSite awD(Lookup var0, String var1, MethodType var2);

   private static native MatchException awA(MatchException var0);

   public native boolean awz();

   private static native int awC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
