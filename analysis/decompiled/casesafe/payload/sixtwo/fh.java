package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fh extends gg {
   cC aYWtO;
   cA bQVAY;
   ol nJGrs;
   private static long ZCUlU;
   private static String NXMEC;
   private static long[] Iwfrf;
   private static Integer[] wouum;
   private static Map KDvfW;

   @hG
   public native void aJg(hw$tv var1);

   private static native String aJi(byte[] var0);

   private static native int aJj(int var0, long var1);

   @hG
   public native void aJf(gH$th var1);

   private static native int aJk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aJl(Lookup var0, String var1, MethodType var2);

   private static native MatchException aJh(MatchException var0);

   public fh() {
      long var1 = ZCUlU ^ 89779190563974L;
      super(gf.aZL(aJl<"e">(20227, 8919003628580958280L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aJl<"e">(18741, 9066690468079793788L ^ var1)];
      var10004[0] = aJl<"e">(13397, 2721493735428033290L ^ var1);
      var10004[1] = aJl<"e">(718, 7827458726298795415L ^ var1);
      var10004[2] = aJl<"e">(4388, 8362296366909206140L ^ var1);
      var10004[3] = aJl<"e">(14942, 7052481298510578946L ^ var1);
      var10004[4] = aJl<"e">(18667, 4508251680265762735L ^ var1);
      var10004[5] = aJl<"e">(28299, 1596429106627170786L ^ var1);
      var10004[aJl<"e">(15109, 6013520236756010094L ^ var1)] = aJl<"e">(16629, 2556688152046862269L ^ var1);
      var10004[aJl<"e">(18293, 5020391584412792865L ^ var1)] = aJl<"e">(3010, 8254179977157883016L ^ var1);
      var10004[aJl<"e">(3055, 1276966617148306593L ^ var1)] = aJl<"e">(13899, 1909028884701677833L ^ var1);
      var10004[aJl<"e">(29254, 5827701779993742611L ^ var1)] = aJl<"e">(2899, 6273439143262073875L ^ var1);
      var10004[aJl<"e">(7456, 3422063116450079357L ^ var1)] = aJl<"e">(29875, 3204169711105166325L ^ var1);
      this.aYWtO = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0);
      var10004 = new int[aJl<"e">(27502, 7435866759233786933L ^ var1)];
      var10004[0] = aJl<"e">(18941, 3486083927135418031L ^ var1);
      var10004[1] = aJl<"e">(4961, 5990760960283946043L ^ var1);
      var10004[2] = aJl<"e">(29875, 3204169711105166325L ^ var1);
      var10004[3] = aJl<"e">(24133, 2614469278383726869L ^ var1);
      var10004[4] = aJl<"e">(17526, 8882074379617106720L ^ var1);
      var10004[5] = aJl<"e">(23897, 5513920648658936344L ^ var1);
      var10004[aJl<"e">(4523, 8452535848603234020L ^ var1)] = aJl<"e">(1842, 1488717288939337825L ^ var1);
      var10004[aJl<"e">(8892, 9006434949685157361L ^ var1)] = aJl<"e">(10030, 443822437931227257L ^ var1);
      var10004[aJl<"e">(22764, 170637830901491631L ^ var1)] = aJl<"e">(4961, 5990760960283946043L ^ var1);
      var10004[aJl<"e">(7631, 51208046058119847L ^ var1)] = aJl<"e">(20597, 7227962441368006436L ^ var1);
      var10004[aJl<"e">(26755, 5132704711258101711L ^ var1)] = aJl<"e">(15876, 3407028885836890458L ^ var1);
      var10004[aJl<"e">(25287, 3060962613129895296L ^ var1)] = aJl<"e">(1781, 5847317997344733616L ^ var1);
      this.bQVAY = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(NXMEC);
      this.nJGrs = new ol(this);
   }

   static {
      Loader.doInit(fh.class);
      _b58c3a1e6fcffbd8ed7b7af2a9e6b5d0();
   }

   private static native void _b58c3a1e6fcffbd8ed7b7af2a9e6b5d0();
}
