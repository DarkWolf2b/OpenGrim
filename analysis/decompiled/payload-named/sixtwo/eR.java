package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eR extends gg {
   private final cD woKJb;
   private final cJ aBhOM;
   private final mT OahHn;
   private boolean qdiLm;
   private static long BatsP;
   private static long[] xMZKo;
   private static Integer[] PeQZj;
   private static Map KmTJA;
   private static long MYLev;

   public eR() {
      long var1 = BatsP ^ 71796501269345L;
      super(gf.aZL(aCM<"e">(31128, 6561752877688158582L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aCM<"e">(28314, 5343584431003332175L ^ var1)];
      var10004[0] = aCM<"e">(20040, 9207401432416800432L ^ var1);
      var10004[1] = aCM<"e">(2414, 4360098466839562642L ^ var1);
      var10004[2] = aCM<"e">(22518, 2673186520904292132L ^ var1);
      var10004[3] = aCM<"e">(31390, 8764031654474512964L ^ var1);
      var10004[4] = aCM<"e">(22770, 5337188514204801046L ^ var1);
      var10004[5] = aCM<"e">(31328, 6055629922624862877L ^ var1);
      var10004[aCM<"e">(9168, 715453119457272576L ^ var1)] = aCM<"e">(25814, 3082747447121110060L ^ var1);
      var10004[aCM<"e">(21875, 4869831298979190189L ^ var1)] = aCM<"e">(9062, 8339003604534207389L ^ var1);
      var10004[aCM<"e">(18218, 6095635180553390043L ^ var1)] = aCM<"e">(10225, 1795085907902768926L ^ var1);
      var10004[aCM<"e">(12839, 5713517336792183502L ^ var1)] = aCM<"e">(31850, 8473254523374140569L ^ var1);
      var10004[aCM<"e">(29077, 6206719074726146402L ^ var1)] = aCM<"e">(28901, 8042880737552068668L ^ var1);
      var10004[aCM<"e">(26110, 1202998264552088879L ^ var1)] = aCM<"e">(30892, 251345632449919044L ^ var1);
      var10004[aCM<"e">(21041, 1880413724871709402L ^ var1)] = aCM<"e">(6046, 5829212092729399156L ^ var1);
      var10004[aCM<"e">(20496, 4584440398280347889L ^ var1)] = aCM<"e">(19042, 5979938468976446108L ^ var1);
      this.woKJb = new cD(this, mr.clS(var10004)).VO(aCM<"e">(1362, 8064683282966676873L ^ var1));
      var10004 = new int[aCM<"e">(10387, 661423163626858560L ^ var1)];
      var10004[0] = aCM<"e">(1010, 4270885896948122384L ^ var1);
      var10004[1] = aCM<"e">(11218, 6604456574563527467L ^ var1);
      var10004[2] = aCM<"e">(31082, 4288481360894065045L ^ var1);
      var10004[3] = aCM<"e">(30859, 7493440722141771903L ^ var1);
      var10004[4] = aCM<"e">(25165, 1398314319894930090L ^ var1);
      var10004[5] = aCM<"e">(31559, 6080107080845818795L ^ var1);
      var10004[aCM<"e">(30781, 6940596981632334027L ^ var1)] = aCM<"e">(11218, 6604456574563527467L ^ var1);
      var10004[aCM<"e">(21860, 929371903845062023L ^ var1)] = aCM<"e">(25165, 1398314319894930090L ^ var1);
      var10004[aCM<"e">(19620, 1239292503482551380L ^ var1)] = aCM<"e">(29614, 256241813436461899L ^ var1);
      var10004[aCM<"e">(18921, 8869382189886818621L ^ var1)] = aCM<"e">(26049, 8953758838159959347L ^ var1);
      var10004[aCM<"e">(21825, 1012865578667660697L ^ var1)] = aCM<"e">(22097, 7609057529451861639L ^ var1);
      var10004[aCM<"e">(2282, 7329195507158714378L ^ var1)] = aCM<"e">(2635, 3053974093433047725L ^ var1);
      var10004[aCM<"e">(14337, 6474472435694450932L ^ var1)] = aCM<"e">(11218, 6604456574563527467L ^ var1);
      var10004[aCM<"e">(26840, 814717555656452111L ^ var1)] = aCM<"e">(22058, 5349255691293808327L ^ var1);
      this.aBhOM = new cJ(this, mr.clS(var10004)).WE(true);
      this.OahHn = mT.cpz();
   }

   static {
      Loader.doInit(eR.class);
      _1b1ad07ec9b5fb283d5bab13b747fd08();
   }

   private static native void _1b1ad07ec9b5fb283d5bab13b747fd08();

   @hG
   public native void aCG(gv var1);

   private static native int aCL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aCM(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aCH(gH$th var1);

   private static native MatchException aCJ(MatchException var0);

   private static native int aCK(int var0, long var1);

   @hG
   public native void aCF(gA var1);

   @Override
   public native void YO();
}
