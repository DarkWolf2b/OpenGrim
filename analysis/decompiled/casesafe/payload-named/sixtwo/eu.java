package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eu extends gg {
   private final cC OBGxe;
   private final cJ SDRyJ;
   private static long QJqHC;
   private static String yJtAG;
   private static long[] fBBZY;
   private static Integer[] qLIIU;
   private static Map dmOfg;

   public eu() {
      long var1 = QJqHC ^ 52248152359470L;
      super(gf.aZL(auQ<"b">(19899, 5050292333053301544L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[auQ<"b">(7155, 5525399321402836309L ^ var1)];
      var10004[0] = auQ<"b">(13950, 7958865275779557572L ^ var1);
      var10004[1] = auQ<"b">(16161, 594237687789461908L ^ var1);
      var10004[2] = auQ<"b">(27240, 9101940943318906053L ^ var1);
      var10004[3] = auQ<"b">(6412, 4133470072131258267L ^ var1);
      var10004[4] = auQ<"b">(29152, 644941520128438085L ^ var1);
      var10004[5] = auQ<"b">(15785, 8823786892380906245L ^ var1);
      var10004[auQ<"b">(31498, 68662150323824042L ^ var1)] = auQ<"b">(25907, 3503891105198111626L ^ var1);
      var10004[auQ<"b">(1928, 4614622232422947101L ^ var1)] = auQ<"b">(27240, 9101940943318906053L ^ var1);
      var10004[auQ<"b">(14834, 6096753555787655002L ^ var1)] = auQ<"b">(27240, 9101940943318906053L ^ var1);
      var10004[auQ<"b">(29651, 7197032795489267056L ^ var1)] = auQ<"b">(2944, 5846383989894026544L ^ var1);
      var10004[auQ<"b">(20448, 449708929298157930L ^ var1)] = auQ<"b">(1884, 8580938356361599434L ^ var1);
      var10004[auQ<"b">(2514, 3323178355812243295L ^ var1)] = auQ<"b">(27240, 9101940943318906053L ^ var1);
      var10004[auQ<"b">(7349, 4053177447404864033L ^ var1)] = auQ<"b">(13321, 8386538025691810L ^ var1);
      var10004[auQ<"b">(16907, 996540027054185604L ^ var1)] = auQ<"b">(17116, 8458814038508395638L ^ var1);
      this.OBGxe = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(20.0).VA(10.0).Vz(yJtAG);
      var10004 = new int[auQ<"b">(29376, 6011993629651332174L ^ var1)];
      var10004[0] = auQ<"b">(22499, 1783269108947470663L ^ var1);
      var10004[1] = auQ<"b">(11921, 6277499221606281236L ^ var1);
      var10004[2] = auQ<"b">(11921, 6277499221606281236L ^ var1);
      var10004[3] = auQ<"b">(27240, 9101940943318906053L ^ var1);
      var10004[4] = auQ<"b">(27803, 6597522338374775305L ^ var1);
      var10004[5] = auQ<"b">(2233, 636126988000040475L ^ var1);
      var10004[auQ<"b">(25535, 2615638685905517836L ^ var1)] = auQ<"b">(15766, 3355350548785701664L ^ var1);
      var10004[auQ<"b">(28220, 3357968478941114554L ^ var1)] = auQ<"b">(16749, 2432952227747585988L ^ var1);
      var10004[auQ<"b">(27186, 7917461949907072157L ^ var1)] = auQ<"b">(26603, 728547806123784561L ^ var1);
      var10004[auQ<"b">(29429, 1434209492475243598L ^ var1)] = auQ<"b">(22449, 1271163671903357199L ^ var1);
      var10004[auQ<"b">(19732, 52373049825547147L ^ var1)] = auQ<"b">(616, 9165027631971867893L ^ var1);
      var10004[auQ<"b">(1402, 597818747419171782L ^ var1)] = auQ<"b">(24331, 372088953211503020L ^ var1);
      var10004[auQ<"b">(1350, 312320590058363902L ^ var1)] = auQ<"b">(24061, 702757301517534069L ^ var1);
      var10004[auQ<"b">(23731, 4205644771411739185L ^ var1)] = auQ<"b">(2233, 636126988000040475L ^ var1);
      var10004[auQ<"b">(28438, 6847316869758251402L ^ var1)] = auQ<"b">(27311, 7254568761211417663L ^ var1);
      var10004[auQ<"b">(25636, 5494756952869829267L ^ var1)] = auQ<"b">(31877, 5162496446282064504L ^ var1);
      var10004[auQ<"b">(18986, 2742009657645487265L ^ var1)] = auQ<"b">(26603, 728547806123784561L ^ var1);
      var10004[auQ<"b">(8646, 5007900352251346809L ^ var1)] = auQ<"b">(9762, 273013889464875169L ^ var1);
      var10004[auQ<"b">(21774, 7919568458479291280L ^ var1)] = auQ<"b">(5269, 1564684313170053644L ^ var1);
      var10004[auQ<"b">(23712, 379400782055490065L ^ var1)] = auQ<"b">(2233, 636126988000040475L ^ var1);
      var10004[auQ<"b">(26367, 5407273324869908574L ^ var1)] = auQ<"b">(1193, 7196980676485618208L ^ var1);
      var10004[auQ<"b">(23077, 5850526344810742923L ^ var1)] = auQ<"b">(24729, 4188473088402456072L ^ var1);
      var10004[auQ<"b">(29312, 4386653949774556210L ^ var1)] = auQ<"b">(2233, 636126988000040475L ^ var1);
      var10004[auQ<"b">(24485, 4219226337485078821L ^ var1)] = auQ<"b">(13096, 7831188881720454549L ^ var1);
      var10004[auQ<"b">(15507, 3568092846548754983L ^ var1)] = auQ<"b">(19923, 714321591319286610L ^ var1);
      var10004[auQ<"b">(12419, 797157092909461007L ^ var1)] = auQ<"b">(9623, 7009264402193529615L ^ var1);
      var10004[auQ<"b">(8605, 11281936836280070L ^ var1)] = auQ<"b">(6701, 9160936203819943082L ^ var1);
      this.SDRyJ = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(eu.class);
      _29c2deca7b712c7c8ef896e4f7d76233();
   }

   private static native String auN(byte[] var0);

   private static native CallSite auQ(Lookup var0, String var1, MethodType var2);

   @hG
   public native void auJ(gD var1);

   private static native MatchException auM(MatchException var0);

   private static native int auP(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int auO(int var0, long var1);

   public native cC auK();

   private static native void _29c2deca7b712c7c8ef896e4f7d76233();

   public native cJ auL();
}
