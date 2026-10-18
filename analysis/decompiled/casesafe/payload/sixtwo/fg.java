package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1297;
import net.minecraft.class_1657;

public class fg extends gg {
   private final cD vJxZS;
   private final cC bkcAZ;
   private final cJ VEiCg;
   private class_1657 jhTSv;
   private static int[] rThNx;
   private static long pUjym;
   private static String[] OHbUD;
   private static String[] sgzRQ;
   private static Map dwOGE;
   private static long[] ITvOw;
   private static Integer[] pvmGK;
   private static Map oOvPJ;

   public fg() {
      long var1 = pUjym ^ 44985935182496L;
      super(gf.aZL(aJe<"x">(12954, 2054206848189656114L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aJe<"x">(11788, 4673825647911727272L ^ var1)];
      var10004[0] = aJe<"x">(5187, 6897213593291934431L ^ var1);
      var10004[1] = aJe<"x">(22270, 149905669723818090L ^ var1);
      var10004[2] = aJe<"x">(17141, 3256329187056753772L ^ var1);
      var10004[3] = aJe<"x">(10669, 1284131650201220892L ^ var1);
      var10004[4] = aJe<"x">(10185, 312786956826409306L ^ var1);
      var10004[5] = aJe<"x">(32081, 2161326268008571890L ^ var1);
      var10004[aJe<"x">(14556, 1534982012505056889L ^ var1)] = aJe<"x">(23538, 7858284002019149169L ^ var1);
      var10004[aJe<"x">(23993, 1645418459875705644L ^ var1)] = aJe<"x">(30831, 6217528281532180203L ^ var1);
      var10004[aJe<"x">(22164, 8820565118298654761L ^ var1)] = aJe<"x">(8055, 8592902686285545981L ^ var1);
      var10004[aJe<"x">(13321, 3616258598869101245L ^ var1)] = aJe<"x">(9620, 4349770920607644450L ^ var1);
      var10004[aJe<"x">(25225, 6443244638660836384L ^ var1)] = aJe<"x">(8049, 2580756792663196127L ^ var1);
      var10004[aJe<"x">(14214, 2115883797466769708L ^ var1)] = aJe<"x">(6906, 8836832093247816810L ^ var1);
      this.vJxZS = new cD(this, mr.clS(var10004)).VO(aJe<"x">(5118, 6565155620573629791L ^ var1));
      var10004 = new int[aJe<"x">(11799, 322105470531825847L ^ var1)];
      var10004[0] = aJe<"x">(32341, 6359135410734604517L ^ var1);
      var10004[1] = aJe<"x">(10434, 5279596419368089207L ^ var1);
      var10004[2] = aJe<"x">(9431, 3379054097853512261L ^ var1);
      var10004[3] = aJe<"x">(10434, 5279596419368089207L ^ var1);
      var10004[4] = aJe<"x">(28021, 3729908647169438706L ^ var1);
      var10004[5] = aJe<"x">(26683, 2639711743206799038L ^ var1);
      var10004[aJe<"x">(3633, 8015775705193763006L ^ var1)] = aJe<"x">(27407, 215498256284136877L ^ var1);
      var10004[aJe<"x">(1328, 81766645762317186L ^ var1)] = aJe<"x">(32534, 2932038252306309526L ^ var1);
      var10004[aJe<"x">(26819, 5494515756854490735L ^ var1)] = aJe<"x">(4046, 8190443842184466777L ^ var1);
      var10004[aJe<"x">(5649, 4296851426207385756L ^ var1)] = aJe<"x">(8145, 7705819145259794814L ^ var1);
      var10004[aJe<"x">(13552, 1975528450711382641L ^ var1)] = aJe<"x">(5871, 2464925897951430739L ^ var1);
      var10004[aJe<"x">(10721, 5793366323320747852L ^ var1)] = aJe<"x">(10434, 5279596419368089207L ^ var1);
      this.bkcAZ = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(3.0).Vx(10.0).VA(5.0).Vz(aJb<"a">(11457, 8363091944548831513L ^ var1));
      var10004 = new int[aJe<"x">(15065, 1711620205567632511L ^ var1)];
      var10004[0] = aJe<"x">(15274, 5733998668931097876L ^ var1);
      var10004[1] = aJe<"x">(10434, 5279596419368089207L ^ var1);
      var10004[2] = aJe<"x">(21897, 2740795537573350145L ^ var1);
      var10004[3] = aJe<"x">(10434, 5279596419368089207L ^ var1);
      var10004[4] = aJe<"x">(28021, 3729908647169438706L ^ var1);
      var10004[5] = aJe<"x">(21150, 5918476260339026944L ^ var1);
      var10004[aJe<"x">(3633, 8015775705193763006L ^ var1)] = aJe<"x">(27407, 215498256284136877L ^ var1);
      var10004[aJe<"x">(1328, 81766645762317186L ^ var1)] = aJe<"x">(13211, 6920830230716050692L ^ var1);
      var10004[aJe<"x">(26819, 5494515756854490735L ^ var1)] = aJe<"x">(8520, 3434747667222659018L ^ var1);
      var10004[aJe<"x">(5649, 4296851426207385756L ^ var1)] = aJe<"x">(17286, 8244383935826402590L ^ var1);
      var10004[aJe<"x">(13552, 1975528450711382641L ^ var1)] = aJe<"x">(4289, 5762696291192721010L ^ var1);
      var10004[aJe<"x">(10721, 5793366323320747852L ^ var1)] = aJe<"x">(26580, 6260413922518055258L ^ var1);
      var10004[aJe<"x">(11799, 322105470531825847L ^ var1)] = aJe<"x">(15373, 4801874907478581892L ^ var1);
      var10004[aJe<"x">(12071, 3509682630798176694L ^ var1)] = aJe<"x">(1189, 6808519368347867662L ^ var1);
      var10004[aJe<"x">(6358, 8067127711695226461L ^ var1)] = aJe<"x">(27407, 215498256284136877L ^ var1);
      var10004[aJe<"x">(23675, 3508453974528983799L ^ var1)] = aJe<"x">(27549, 848579788154483974L ^ var1);
      var10004[aJe<"x">(25510, 5577846912138231088L ^ var1)] = aJe<"x">(31018, 1980114948939786160L ^ var1);
      var10004[aJe<"x">(17135, 1291709961253985385L ^ var1)] = aJe<"x">(21897, 2740795537573350145L ^ var1);
      var10004[aJe<"x">(29945, 3448552483387714142L ^ var1)] = aJe<"x">(21897, 2740795537573350145L ^ var1);
      var10004[aJe<"x">(5595, 5029957795851619180L ^ var1)] = aJe<"x">(18307, 7306049078833092894L ^ var1);
      this.VEiCg = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(fg.class);
      _c2d16b45399409694f8093f4da338ef6();
   }

   public native class_1657 aIU();

   @hG
   public native void aIS(gA var1);

   private static native int aJc(int var0, long var1);

   public native boolean aIT(class_1297 var1);

   private static native String aIY(byte[] var0);

   private static native MatchException aIX(MatchException var0);

   private static native String aIZ(int var0, long var1);

   private static native Object aJa(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aJd(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void aIV(int[] var0);

   private static native CallSite aJe(Lookup var0, String var1, MethodType var2);

   private static native CallSite aJb(Lookup var0, String var1, MethodType var2);

   private static native void _c2d16b45399409694f8093f4da338ef6();

   public static native int[] aIW();
}
