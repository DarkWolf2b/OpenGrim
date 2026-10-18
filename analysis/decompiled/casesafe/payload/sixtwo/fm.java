package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1684;
import net.minecraft.class_2338;
import net.minecraft.class_243;

public class fm extends gg {
   private final cC xGUzz;
   private final cJ HtBNt;
   static double vlFZY;
   private final mT ERRVP;
   private final mT OivbA;
   private class_2338 zPgOp;
   private int EnrbM;
   private int nHFuo;
   private ov wPysa;
   private int vfWoI;
   private boolean gwiUw;
   private int QVPeQ;
   private static long PoXVa;
   private static long[] wJsUx;
   private static Integer[] nGYPn;
   private static Map TspBo;
   private static long[] fLgmv;
   private static Long[] mMfNq;
   private static Map QeCTb;

   private static native void _a79e8a844e8815af838bfc52c5fb090e();

   public fm() {
      long var1 = PoXVa ^ 122297706730619L;
      super(gf.aZL(aKI<"i">(26702, 2779634693221780855L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aKI<"i">(27928, 6361569944040867888L ^ var1)];
      var10004[0] = aKI<"i">(1370, 6124449213762101322L ^ var1);
      var10004[1] = aKI<"i">(27284, 4000729303794618254L ^ var1);
      var10004[2] = aKI<"i">(15301, 9050679727870566127L ^ var1);
      var10004[3] = aKI<"i">(26908, 4688697389174164490L ^ var1);
      var10004[4] = aKI<"i">(7083, 1297253614921842360L ^ var1);
      var10004[5] = aKI<"i">(29790, 2266893776226062682L ^ var1);
      var10004[aKI<"i">(10018, 8475893989363499556L ^ var1)] = aKI<"i">(7908, 2362097093679250377L ^ var1);
      var10004[aKI<"i">(20093, 352558134098013055L ^ var1)] = aKI<"i">(13382, 411007658104017271L ^ var1);
      var10004[aKI<"i">(10718, 4006715115181296849L ^ var1)] = aKI<"i">(22622, 4414838049609530749L ^ var1);
      var10004[aKI<"i">(22366, 7179584846426944086L ^ var1)] = aKI<"i">(6456, 169911180677119020L ^ var1);
      var10004[aKI<"i">(12946, 2227681108770248586L ^ var1)] = aKI<"i">(727, 6709733237476288508L ^ var1);
      var10004[aKI<"i">(9067, 4763947001137284727L ^ var1)] = aKI<"i">(24497, 3077725104426302136L ^ var1);
      var10004[aKI<"i">(7987, 7742196556752419339L ^ var1)] = aKI<"i">(7077, 9179227743496830624L ^ var1);
      var10004[aKI<"i">(29505, 6566431515516966490L ^ var1)] = aKI<"i">(31869, 1633495105922046274L ^ var1);
      var10004[aKI<"i">(16110, 5978523275328019404L ^ var1)] = aKI<"i">(17315, 6178908334063560324L ^ var1);
      var10004[aKI<"i">(26382, 4892736734207017533L ^ var1)] = aKI<"i">(27258, 1529900936350568305L ^ var1);
      var10004[aKI<"i">(10344, 6285244461718719830L ^ var1)] = aKI<"i">(26776, 975162902532590991L ^ var1);
      var10004[aKI<"i">(14720, 1148568961318411406L ^ var1)] = aKI<"i">(17315, 6178908334063560324L ^ var1);
      var10004[aKI<"i">(18557, 518747142312996178L ^ var1)] = aKI<"i">(1406, 7860193119627960428L ^ var1);
      var10004[aKI<"i">(17311, 4599969449551522L ^ var1)] = aKI<"i">(7011, 191325883704311367L ^ var1);
      var10004[aKI<"i">(17878, 2040805894629531876L ^ var1)] = aKI<"i">(13949, 8508036007282463592L ^ var1);
      var10004[aKI<"i">(19029, 8089864118211555188L ^ var1)] = aKI<"i">(22657, 7406722601333276079L ^ var1);
      var10004[aKI<"i">(17501, 8576779961742729565L ^ var1)] = aKI<"i">(20640, 906969979648718241L ^ var1);
      this.xGUzz = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(2.0).Vx(20.0).VA(5.0);
      var10004 = new int[aKI<"i">(29263, 7814549668870231875L ^ var1)];
      var10004[0] = aKI<"i">(17117, 961577091445991360L ^ var1);
      var10004[1] = aKI<"i">(27759, 1826998603396712805L ^ var1);
      var10004[2] = aKI<"i">(13291, 6321339087652869882L ^ var1);
      var10004[3] = aKI<"i">(22657, 7406722601333276079L ^ var1);
      var10004[4] = aKI<"i">(7467, 4892488867426891790L ^ var1);
      var10004[5] = aKI<"i">(18975, 2285120658798194467L ^ var1);
      var10004[aKI<"i">(11722, 3682948782739015891L ^ var1)] = aKI<"i">(17315, 6178908334063560324L ^ var1);
      var10004[aKI<"i">(13277, 477319383446247149L ^ var1)] = aKI<"i">(8673, 8255391016683357414L ^ var1);
      var10004[aKI<"i">(8466, 1481125441288258619L ^ var1)] = aKI<"i">(7467, 4892488867426891790L ^ var1);
      var10004[aKI<"i">(4397, 2224933714793329714L ^ var1)] = aKI<"i">(26908, 4688697389174164490L ^ var1);
      var10004[aKI<"i">(12925, 7359241813308626779L ^ var1)] = aKI<"i">(18975, 2285120658798194467L ^ var1);
      var10004[aKI<"i">(12734, 6686599648507745469L ^ var1)] = aKI<"i">(13291, 6321339087652869882L ^ var1);
      var10004[aKI<"i">(4391, 2664063500286260235L ^ var1)] = aKI<"i">(26841, 1939819501139365347L ^ var1);
      var10004[aKI<"i">(22399, 8685769109375398514L ^ var1)] = aKI<"i">(14210, 1475417686032470690L ^ var1);
      this.HtBNt = new cJ(this, mr.clS(var10004)).WE(true);
      this.ERRVP = mT.cpz();
      this.OivbA = mT.cpz();
      this.wPysa = ov.cGv(0.0F, 0.0F);
   }

   static {
      Loader.doInit(fm.class);
      _a79e8a844e8815af838bfc52c5fb090e();
   }

   private native void aKr();

   private native void aKv();

   private native class_2338 aKw(class_1684 var1);

   private native void aKt();

   private native void aKu();

   private native double aKx(class_2338 var1);

   private native float aKy(class_2338 var1);

   private native class_2338 aKz();

   @hG
   public native void aKq(gH$th var1);

   private static native CallSite aKI(Lookup var0, String var1, MethodType var2);

   private native boolean aKs();

   @hG
   public native void aKp(gv var1);

   private static native long aKK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean aKA(List<class_243> var1, boolean var2, boolean var3);

   private native class_243 aKB(class_243 var1, class_243 var2);

   private static native MatchException aKF(MatchException var0);

   private static native int aKG(int var0, long var1);

   private static native CallSite aKL(Lookup var0, String var1, MethodType var2);

   private static native long aKJ(int var0, long var1);

   private static native int aKH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
