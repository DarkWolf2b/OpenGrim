package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.class_1268;
import net.minecraft.class_1792;
import net.minecraft.class_1799;

public class dR extends gg {
   private final cD KnWWg;
   private final cD jdDxa;
   private final cD HOwTg;
   private final cA PiCte;
   private final mT klvjL;
   private final ol MEsln;
   private dR$sI eXNKU;
   private Runnable wSKUO;
   private static long jnLhl;
   private static String gcmeH;
   private static long[] UoJZc;
   private static Integer[] Hsjeq;
   private static Map YVFTe;

   private static native void _ae3be230d1224284befad7f70e5ec09a();

   private native void aps();

   public dR() {
      long var1 = jnLhl ^ 99254914350223L;
      super(gf.aZL(apB<"y">(23036, 2386518351262980538L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[apB<"y">(18885, 5238519745004407202L ^ var1)];
      var10004[0] = apB<"y">(6754, 3505977369818389051L ^ var1);
      var10004[1] = apB<"y">(14679, 3305492451403430157L ^ var1);
      var10004[2] = apB<"y">(10290, 8559312956221450338L ^ var1);
      var10004[3] = apB<"y">(20499, 2460851058160668743L ^ var1);
      var10004[4] = apB<"y">(8753, 5032310795986854506L ^ var1);
      var10004[5] = apB<"y">(136, 9193635417202507990L ^ var1);
      var10004[apB<"y">(12156, 247438329814773532L ^ var1)] = apB<"y">(18450, 5923411596858263631L ^ var1);
      var10004[apB<"y">(14363, 5838748738210855030L ^ var1)] = apB<"y">(23621, 5694142121530235914L ^ var1);
      var10004[apB<"y">(22503, 6412478001943091109L ^ var1)] = apB<"y">(6415, 8435139642267130182L ^ var1);
      this.KnWWg = new cD(this, mr.clS(var10004)).VO(apB<"y">(18571, 4299460267886250205L ^ var1));
      var10004 = new int[apB<"y">(31125, 773412776095824327L ^ var1)];
      var10004[0] = apB<"y">(19751, 1703426185576680800L ^ var1);
      var10004[1] = apB<"y">(21950, 8679174246821271021L ^ var1);
      var10004[2] = apB<"y">(20823, 5028459467193815347L ^ var1);
      var10004[3] = apB<"y">(23621, 5694142121530235914L ^ var1);
      var10004[4] = apB<"y">(25215, 4496089328416891447L ^ var1);
      var10004[5] = apB<"y">(20316, 2958731633884434229L ^ var1);
      var10004[apB<"y">(23287, 2464279528602147477L ^ var1)] = apB<"y">(20823, 5028459467193815347L ^ var1);
      var10004[apB<"y">(30419, 3231685711959832216L ^ var1)] = apB<"y">(21193, 8025076961198838424L ^ var1);
      var10004[apB<"y">(26507, 6566082635308378071L ^ var1)] = apB<"y">(6127, 2516411527934629803L ^ var1);
      var10004[apB<"y">(5835, 7847166368975804033L ^ var1)] = apB<"y">(21009, 8859721542292738681L ^ var1);
      var10004[apB<"y">(31253, 5017855717241174612L ^ var1)] = apB<"y">(23621, 5694142121530235914L ^ var1);
      var10004[apB<"y">(23762, 8426166714118872210L ^ var1)] = apB<"y">(14345, 5560387113289480294L ^ var1);
      this.jdDxa = new cD(this, mr.clS(var10004)).VO(apB<"y">(15383, 4774291413445934144L ^ var1));
      var10004 = new int[apB<"y">(3781, 7281376292454125231L ^ var1)];
      var10004[0] = apB<"y">(13340, 868019333012583549L ^ var1);
      var10004[1] = apB<"y">(14986, 7975369681963121377L ^ var1);
      var10004[2] = apB<"y">(31014, 5189762163317684579L ^ var1);
      var10004[3] = apB<"y">(22545, 7879272845786683506L ^ var1);
      var10004[4] = apB<"y">(14986, 7975369681963121377L ^ var1);
      var10004[5] = apB<"y">(1710, 8464826341339809504L ^ var1);
      var10004[apB<"y">(23287, 2464279528602147477L ^ var1)] = apB<"y">(6127, 2516411527934629803L ^ var1);
      var10004[apB<"y">(30419, 3231685711959832216L ^ var1)] = apB<"y">(21009, 8859721542292738681L ^ var1);
      var10004[apB<"y">(26507, 6566082635308378071L ^ var1)] = apB<"y">(23621, 5694142121530235914L ^ var1);
      var10004[apB<"y">(5835, 7847166368975804033L ^ var1)] = apB<"y">(14345, 5560387113289480294L ^ var1);
      this.HOwTg = new cD(this, mr.clS(var10004)).VO(apB<"y">(15383, 4774291413445934144L ^ var1));
      var10004 = new int[apB<"y">(31367, 4279615517690215147L ^ var1)];
      var10004[0] = apB<"y">(15955, 8819942017108311564L ^ var1);
      var10004[1] = apB<"y">(23621, 5694142121530235914L ^ var1);
      var10004[2] = apB<"y">(9079, 7104402525988545338L ^ var1);
      var10004[3] = apB<"y">(17003, 7192962179705963022L ^ var1);
      var10004[4] = apB<"y">(20823, 5028459467193815347L ^ var1);
      var10004[5] = apB<"y">(29973, 1535777630412027251L ^ var1);
      var10004[apB<"y">(23287, 2464279528602147477L ^ var1)] = apB<"y">(6127, 2516411527934629803L ^ var1);
      var10004[apB<"y">(30419, 3231685711959832216L ^ var1)] = apB<"y">(3105, 5271591784763018361L ^ var1);
      var10004[apB<"y">(26507, 6566082635308378071L ^ var1)] = apB<"y">(23621, 5694142121530235914L ^ var1);
      var10004[apB<"y">(5835, 7847166368975804033L ^ var1)] = apB<"y">(29297, 466623618008986162L ^ var1);
      var10004[apB<"y">(3781, 7281376292454125231L ^ var1)] = apB<"y">(13852, 6409538089655563849L ^ var1);
      var10004[apB<"y">(2795, 6805567164996143783L ^ var1)] = apB<"y">(14345, 5560387113289480294L ^ var1);
      this.PiCte = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(gcmeH);
      this.klvjL = mT.cpz();
      this.MEsln = new ol(this);
      this.eXNKU = dR$sI.qWbQG;
   }

   static {
      Loader.doInit(dR.class);
      _ae3be230d1224284befad7f70e5ec09a();
   }

   private native void app(int var1, class_1268 var2, qL var3, class_1792 var4);

   @hG
   public native void apj(gA var1);

   private native void apq(class_1268 var1);

   private native void apo(class_1792 var1, Predicate<class_1799> var2);

   private static native MatchException apx(MatchException var0);

   private native void apn(class_1792 var1, Predicate<class_1799> var2);

   private static native String apy(byte[] var0);

   private static native CallSite apB(Lookup var0, String var1, MethodType var2);

   private static native int apA(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void apk(gH$th var1);

   private native boolean apl(class_1799 var1);

   private native class_1799 apm(Predicate<class_1799> var1);

   private static native int apz(int var0, long var1);

   private native void apr();

   @Override
   public native void YO();
}
