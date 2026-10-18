package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1268;
import net.minecraft.class_2248;
import net.minecraft.class_2680;

public class dI extends gg implements lA {
   private final cK fEoGq;
   private final cC mHbSn;
   private final cC wLMcW;
   private final ct OEGRT;
   private final cu JsQul;
   private final cu ndzRO;
   private final cu DmJAW;
   private final cD mbblx;
   private final ct SIzNY;
   private final cu iMYFd;
   private final cu nKDKe;
   private final cu cuKBK;
   private final cv OgoNY;
   private final cw RxRpl;
   private final cw QxImU;
   private final cw vbcIH;
   private final cw eBhEo;
   private final cJ uhsFy;
   private final cG fkIYK;
   private final cG kNGru;
   private final cJ YdLcc;
   private final cJ xbrHm;
   private final mT uqcOW;
   private class_2248 jpzPS;
   private mB OXKNB;
   private static final long DAhjX = gb.aYR(-6271476997966633287L, 9013532982248213399L, MethodHandles.lookup().lookupClass()).a(46553429223862L);
   private static final String[] FKuPi;
   private static final String[] FxFSf;
   private static final Map YQIig = new HashMap(13);
   private static final long[] pVcUL;
   private static final Integer[] juWqB;
   private static final Map IUvfm;

   public dI() {
      long var1 = DAhjX ^ 130400815989385L;
      super(gf.aZL(amw<"n">(12325, 319954290053413783L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[amw<"n">(22641, 2430513613301814212L ^ var1)];
      var10004[0] = amw<"n">(27665, 975760760553285564L ^ var1);
      var10004[1] = amw<"n">(24396, 4641029670573380822L ^ var1);
      var10004[2] = amw<"n">(13664, 1947155370230251187L ^ var1);
      var10004[3] = amw<"n">(30308, 6114305262874508737L ^ var1);
      var10004[4] = amw<"n">(24342, 9142688902355948719L ^ var1);
      var10004[5] = amw<"n">(9783, 2645078232832044537L ^ var1);
      this.fEoGq = new cK(this, mr.clS(var10004)).WM(jc.GjreY);
      this.mHbSn = new cC(
            this,
            mr.clS(
               new int[]{
                  amw<"n">(23147, 798008162149011933L ^ var1),
                  amw<"n">(18973, 5131668494889779618L ^ var1),
                  amw<"n">(862, 2214264234165192914L ^ var1),
                  amw<"n">(9134, 1162673249336158254L ^ var1),
                  amw<"n">(12349, 2515776706425289719L ^ var1)
               }
            )
         )
         .Vy(0.1)
         .Vw(2.0)
         .Vx(6.0)
         .VA(4.5)
         .Vz(amt<"q">(21506, 3087040158755627887L ^ var1));
      this.wLMcW = new cC(
            this,
            mr.clS(
               new int[]{
                  amw<"n">(23260, 8401400150800339275L ^ var1),
                  amw<"n">(27873, 240999400626235237L ^ var1),
                  amw<"n">(1549, 6997092236033674663L ^ var1),
                  amw<"n">(21823, 2513184532125261565L ^ var1),
                  amw<"n">(7415, 723099503770883913L ^ var1)
               }
            )
         )
         .Vy(1.0)
         .Vw(0.0)
         .Vx(20.0)
         .VA(0.0)
         .Vz(amt<"q">(23233, 8136428946763460013L ^ var1));
      var10004 = new int[amw<"n">(27970, 6451121665986602640L ^ var1)];
      var10004[0] = amw<"n">(27308, 5224195435698299139L ^ var1);
      var10004[1] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[2] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[3] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[4] = amw<"n">(17528, 719958888324927457L ^ var1);
      var10004[5] = amw<"n">(24632, 600557460035873699L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(30458, 3314589706580802881L ^ var1);
      var10004[amw<"n">(10702, 978941519007834715L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(13054, 608090167277451608L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(16219, 5194603272702948551L ^ var1)] = amw<"n">(32016, 2965024114595870393L ^ var1);
      var10004[amw<"n">(3806, 810517984366249238L ^ var1)] = amw<"n">(8883, 8257283176077519164L ^ var1);
      var10004[amw<"n">(16888, 5805474935608379959L ^ var1)] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[amw<"n">(6407, 4378263401842463430L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      this.OEGRT = new ct(this, mr.clS(var10004));
      ct var10003 = this.OEGRT;
      var10004 = new int[amw<"n">(19828, 1264728354317633252L ^ var1)];
      var10004[0] = amw<"n">(17898, 100727222838758956L ^ var1);
      var10004[1] = amw<"n">(2797, 2557635289021989177L ^ var1);
      var10004[2] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[3] = amw<"n">(30802, 6025181557598467021L ^ var1);
      var10004[4] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[5] = amw<"n">(24076, 2250404378393056711L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(27188, 1122373291750760855L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(12317, 8338097645757299607L ^ var1);
      this.JsQul = new cu(var10003, mr.clS(var10004));
      var10003 = this.OEGRT;
      var10004 = new int[amw<"n">(10524, 2488698728382489301L ^ var1)];
      var10004[0] = amw<"n">(13143, 1741785979974645953L ^ var1);
      var10004[1] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[2] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[3] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[4] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[5] = amw<"n">(28173, 4598776884446995873L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(25163, 782256212282190277L ^ var1);
      this.ndzRO = new cu(var10003, mr.clS(var10004));
      this.DmJAW = new cu(
         this.OEGRT,
         mr.clS(
            new int[]{amw<"n">(31925, 3962334904384698116L ^ var1), amw<"n">(1549, 6997092236033674663L ^ var1), amw<"n">(1549, 6997092236033674663L ^ var1)}
         )
      );
      var10004 = new int[amw<"n">(2452, 7143687297467892260L ^ var1)];
      var10004[0] = amw<"n">(13974, 5344534419679935800L ^ var1);
      var10004[1] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[2] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[3] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[4] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[5] = amw<"n">(28173, 4598776884446995873L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(12984, 2050550296298125609L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(13301, 1449258883615160393L ^ var1)] = amw<"n">(26874, 3146500026077127537L ^ var1);
      this.mbblx = new cD(this, mr.clS(var10004)).VO(amw<"n">(26228, 4262389967580310961L ^ var1));
      var10004 = new int[amw<"n">(13301, 1449258883615160393L ^ var1)];
      var10004[0] = amw<"n">(17233, 8428359838642210966L ^ var1);
      var10004[1] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[2] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[3] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[4] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[5] = amw<"n">(13214, 2050972142874621958L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(13974, 5344534419679935800L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(23186, 3377974313701478713L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(27440, 7021258398816608430L ^ var1);
      this.SIzNY = new ct(this, mr.clS(var10004));
      var10003 = this.SIzNY;
      var10004 = new int[amw<"n">(6670, 6303831824045855198L ^ var1)];
      var10004[0] = amw<"n">(15731, 6347738628167956171L ^ var1);
      var10004[1] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[2] = amw<"n">(29585, 7277557762079176716L ^ var1);
      var10004[3] = amw<"n">(22455, 36244341596232727L ^ var1);
      var10004[4] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[5] = amw<"n">(1549, 6997092236033674663L ^ var1);
      this.iMYFd = new cu(var10003, mr.clS(var10004));
      var10003 = this.SIzNY;
      var10004 = new int[amw<"n">(6670, 6303831824045855198L ^ var1)];
      var10004[0] = amw<"n">(23971, 439931299610596866L ^ var1);
      var10004[1] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[2] = amw<"n">(27188, 1122373291750760855L ^ var1);
      var10004[3] = amw<"n">(28173, 4598776884446995873L ^ var1);
      var10004[4] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[5] = amw<"n">(29585, 7277557762079176716L ^ var1);
      this.nKDKe = new cu(var10003, mr.clS(var10004));
      var10003 = this.SIzNY;
      var10004 = new int[amw<"n">(9174, 7847502961460078610L ^ var1)];
      var10004[0] = amw<"n">(23971, 439931299610596866L ^ var1);
      var10004[1] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[2] = amw<"n">(27188, 1122373291750760855L ^ var1);
      var10004[3] = amw<"n">(28173, 4598776884446995873L ^ var1);
      var10004[4] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[5] = amw<"n">(27188, 1122373291750760855L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(28173, 4598776884446995873L ^ var1);
      this.cuKBK = new cu(var10003, mr.clS(var10004));
      var10004 = new int[amw<"n">(9174, 7847502961460078610L ^ var1)];
      var10004[0] = amw<"n">(32714, 233918680078890093L ^ var1);
      var10004[1] = amw<"n">(13885, 4619996295668825580L ^ var1);
      var10004[2] = amw<"n">(28173, 4598776884446995873L ^ var1);
      var10004[3] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[4] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[5] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(27188, 1122373291750760855L ^ var1);
      this.OgoNY = new cv(this, mr.clS(var10004));
      cv var7 = this.OgoNY;
      var10004 = new int[amw<"n">(2452, 7143687297467892260L ^ var1)];
      var10004[0] = amw<"n">(9085, 5866078835909028046L ^ var1);
      var10004[1] = amw<"n">(11421, 5943429922010687241L ^ var1);
      var10004[2] = amw<"n">(29585, 7277557762079176716L ^ var1);
      var10004[3] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[4] = amw<"n">(2487, 4673609352976024064L ^ var1);
      var10004[5] = amw<"n">(13214, 2050972142874621958L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(9095, 2741245214717503539L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(17972, 7283682032122367411L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[amw<"n">(13301, 1449258883615160393L ^ var1)] = amw<"n">(27188, 1122373291750760855L ^ var1);
      this.RxRpl = new cw(var7, mr.clS(var10004));
      cv var8 = this.OgoNY;
      var10004 = new int[amw<"n">(19828, 1264728354317633252L ^ var1)];
      var10004[0] = amw<"n">(17233, 8428359838642210966L ^ var1);
      var10004[1] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[2] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[3] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[4] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[5] = amw<"n">(23971, 439931299610596866L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(28173, 4598776884446995873L ^ var1);
      this.QxImU = new cw(var8, mr.clS(var10004));
      cv var9 = this.OgoNY;
      var10004 = new int[amw<"n">(17606, 298478011560300372L ^ var1)];
      var10004[0] = amw<"n">(28339, 4098773976827929865L ^ var1);
      var10004[1] = amw<"n">(26694, 5065110073316320251L ^ var1);
      var10004[2] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[3] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[4] = amw<"n">(27440, 7021258398816608430L ^ var1);
      var10004[5] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(5417, 6769581409746083500L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(21926, 7643257858367561230L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(21823, 2513184532125261565L ^ var1);
      this.vbcIH = new cw(var9, mr.clS(var10004));
      cv var10 = this.OgoNY;
      var10004 = new int[amw<"n">(2452, 7143687297467892260L ^ var1)];
      var10004[0] = amw<"n">(29709, 1790247198136647563L ^ var1);
      var10004[1] = amw<"n">(9095, 2741245214717503539L ^ var1);
      var10004[2] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[3] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[4] = amw<"n">(17528, 719958888324927457L ^ var1);
      var10004[5] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(25118, 3054009970438875533L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(26874, 3146500026077127537L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(21823, 2513184532125261565L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(27188, 1122373291750760855L ^ var1);
      var10004[amw<"n">(13301, 1449258883615160393L ^ var1)] = amw<"n">(28173, 4598776884446995873L ^ var1);
      this.eBhEo = new cw(var10, mr.clS(var10004)).Tz();
      var10004 = new int[amw<"n">(13301, 1449258883615160393L ^ var1)];
      var10004[0] = amw<"n">(25118, 3054009970438875533L ^ var1);
      var10004[1] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[2] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[3] = amw<"n">(27440, 7021258398816608430L ^ var1);
      var10004[4] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[5] = amw<"n">(29585, 7277557762079176716L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(27308, 5224195435698299139L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(17528, 719958888324927457L ^ var1);
      this.uhsFy = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[amw<"n">(2452, 7143687297467892260L ^ var1)];
      var10004[0] = amw<"n">(23212, 726901005809094959L ^ var1);
      var10004[1] = amw<"n">(19264, 4716110926422999266L ^ var1);
      var10004[2] = amw<"n">(28173, 4598776884446995873L ^ var1);
      var10004[3] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[4] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[5] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(1878, 6034378828334091413L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(13301, 1449258883615160393L ^ var1)] = amw<"n">(29585, 7277557762079176716L ^ var1);
      this.fkIYK = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis()).Uh(false);
      var10004 = new int[amw<"n">(17606, 298478011560300372L ^ var1)];
      var10004[0] = amw<"n">(23971, 439931299610596866L ^ var1);
      var10004[1] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[2] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[3] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[4] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[5] = amw<"n">(1878, 6034378828334091413L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(361, 2045046710228634317L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(29585, 7277557762079176716L ^ var1);
      this.kNGru = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis().cob(0.5F)).Uh(false);
      var10004 = new int[amw<"n">(6670, 6303831824045855198L ^ var1)];
      var10004[0] = amw<"n">(23971, 439931299610596866L ^ var1);
      var10004[1] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[2] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[3] = amw<"n">(1549, 6997092236033674663L ^ var1);
      var10004[4] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[5] = amw<"n">(27440, 7021258398816608430L ^ var1);
      this.YdLcc = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[amw<"n">(15809, 6410776378451195405L ^ var1)];
      var10004[0] = amw<"n">(17233, 8428359838642210966L ^ var1);
      var10004[1] = amw<"n">(30335, 24767300448009663L ^ var1);
      var10004[2] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[3] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[4] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[5] = amw<"n">(27918, 2322582391829407427L ^ var1);
      var10004[amw<"n">(6670, 6303831824045855198L ^ var1)] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[amw<"n">(9174, 7847502961460078610L ^ var1)] = amw<"n">(28955, 6057502704516545177L ^ var1);
      var10004[amw<"n">(10524, 2488698728382489301L ^ var1)] = amw<"n">(13974, 5344534419679935800L ^ var1);
      var10004[amw<"n">(19828, 1264728354317633252L ^ var1)] = amw<"n">(20239, 8202002232629855366L ^ var1);
      var10004[amw<"n">(17606, 298478011560300372L ^ var1)] = amw<"n">(29585, 7277557762079176716L ^ var1);
      var10004[amw<"n">(2343, 7320478462334288554L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(13301, 1449258883615160393L ^ var1)] = amw<"n">(27873, 240999400626235237L ^ var1);
      var10004[amw<"n">(2452, 7143687297467892260L ^ var1)] = amw<"n">(28064, 2465595112305337889L ^ var1);
      var10004[amw<"n">(11803, 6747483368635426195L ^ var1)] = amw<"n">(27188, 1122373291750760855L ^ var1);
      this.xbrHm = new cJ(this, mr.clS(var10004)).WE(false);
      this.uqcOW = mT.cpz();
      this.mbblx.Vf(() -> this.OEGRT.SQ(1));
      this.fkIYK.Vf(this.uhsFy::WF);
      this.kNGru.Vf(this.uhsFy::WF);
      this.YdLcc.Vf(this.uhsFy::WF);
   }

   static {
      long var11 = DAhjX ^ 64061354542769L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "Áñ\u0098Ò\u0011P¤2\u001d\u0011&|3\u0081WÚ\u0010-\u0016Má\u00adüªC8Ïfz\nÐÑs";
      int var19 = "Áñ\u0098Ò\u0011P¤2\u001d\u0011&|3\u0081WÚ\u0010-\u0016Má\u00adüªC8Ïfz\nÐÑs".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = amq(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            FKuPi = var20;
            FxFSf = new String[2];
            IUvfm = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[85];
            int var3 = 0;
            String var4 = "ä\u001eÁ*»ÌÙQJ\u0082©/SE3+z\u0013»è\u0019kOêÿ\u000f]m\rsúÞ!BüËk \u009b\u001buÑè\u000f?:@N\n¥Î¡1x1%=üô\\»/\u000fÝÇã3\u0003oý\r\u00131PÔ\u001c\u008cý\u0010í¸\u0014r»q\"\u0004d\t\u0007F¥·Ieý@o\t.ÉT\u0013\u0011\u009a\u0017\u0085mÇ\u0002G5_Õ\u0092\u00804\u001då\rHÊ\u001e\u001aO\u0088Ih¨Äãf\u001dy$é?w\u009b£l\u007fµ\u0015Mí\u0081c\u0081\u0019Ý¼¡$\u0088³\u0087\u0085ä\u0096ºbçjéä`Ïù)\u0088\u009a(?\u0092\u0002½Ëx\u008aæ]\u008b\u0004\u0001\u009d|¿Ð¤\u0094\u001aÖ«\u0013ÜF\u008d\u0010\u0084\u008dÏk\u0080\n1±Be\u000fñ\u0018ÑQÙ0\u0094\u001eb\u0010þ>öNËZ\u0090á\u009eZúùÙR\u0014\u009e®µÄ,\u0015þ\bÃ@lÑ\u0082\u0083=\u008bBf_ `L\u0011Ú9|\u0089oÆ×Á ºÃ&û\u0096\u0001\fÖ\u0080/AÔ(Íf³\u000e\u008e\u001fwÃ$÷G\u0092\u0091¿\u007f\\´ÌÑ¼\u007f#\u00163QBµ{\u0094m±\\\u0091¹-æ´\u0001ñ\u001c?§Qì+evl^s\f`¦Í\u001a\u0094ÊEÂ2\rÁ\u008eÒÎ^Óæ®B\u008fâ@©e\u007fúp\u001a8Ð»\u009aÎ.\u001fâÁ5\u009fíh¹Ê\u001f¯Rfªä\u0005ÉB\u0004ÓbW\u008eqI¦J\rÄ©,g`¡gïð¯\u0087Ç\u0098$í÷ \u0085vOè0£Õ&S`¥²¼´óí²tÆä¼w}¾ih\u008eÌ-Â\u0093\u000fýÎ\u0010ËÚ\u0007hIïâ\u0082\u0010\u0016\u0085å\u0016\b\u0092öË>\u0097ÎÒ\u0006<\u0006Í\u009eqvUB¯cP(øí\u0005°\u0095\u0093\u0019HÛ·\u0010î\u0015FÏ¾æF\u008c\u001d\u0089He\u008cPÞTd\u001fQox\u001e\u009dÕh\u0090Y\u000f, /\t\u009eßìaÅ-½î£î\u0090\u0082Ø\u0087RP~o?uÏ\u0000¢E³\u0096«ù\u0005\u0091Ä\n\u0019`SÀs\u001dC\"íLÔÄ.\u009b5¡0\u009b\u0010o¨ÀF±\u0015\u000ezX§´R8âM´\u0016²\u0000j'ùë1Ìà\rÁ® A¾Ñ\u0017®`yK\u0098®\u007fûC$n«Ãw\u0087\u008d¦dÎ 8\\w©¬@\u0095\u0000\u001c:\u0082:Ç\b\u001e\u0010Âº?g`\u001dÜmÝ\bÅÍ¡\u0002\u0096\u0012ry9þq";
            int var5 = "ä\u001eÁ*»ÌÙQJ\u0082©/SE3+z\u0013»è\u0019kOêÿ\u000f]m\rsúÞ!BüËk \u009b\u001buÑè\u000f?:@N\n¥Î¡1x1%=üô\\»/\u000fÝÇã3\u0003oý\r\u00131PÔ\u001c\u008cý\u0010í¸\u0014r»q\"\u0004d\t\u0007F¥·Ieý@o\t.ÉT\u0013\u0011\u009a\u0017\u0085mÇ\u0002G5_Õ\u0092\u00804\u001då\rHÊ\u001e\u001aO\u0088Ih¨Äãf\u001dy$é?w\u009b£l\u007fµ\u0015Mí\u0081c\u0081\u0019Ý¼¡$\u0088³\u0087\u0085ä\u0096ºbçjéä`Ïù)\u0088\u009a(?\u0092\u0002½Ëx\u008aæ]\u008b\u0004\u0001\u009d|¿Ð¤\u0094\u001aÖ«\u0013ÜF\u008d\u0010\u0084\u008dÏk\u0080\n1±Be\u000fñ\u0018ÑQÙ0\u0094\u001eb\u0010þ>öNËZ\u0090á\u009eZúùÙR\u0014\u009e®µÄ,\u0015þ\bÃ@lÑ\u0082\u0083=\u008bBf_ `L\u0011Ú9|\u0089oÆ×Á ºÃ&û\u0096\u0001\fÖ\u0080/AÔ(Íf³\u000e\u008e\u001fwÃ$÷G\u0092\u0091¿\u007f\\´ÌÑ¼\u007f#\u00163QBµ{\u0094m±\\\u0091¹-æ´\u0001ñ\u001c?§Qì+evl^s\f`¦Í\u001a\u0094ÊEÂ2\rÁ\u008eÒÎ^Óæ®B\u008fâ@©e\u007fúp\u001a8Ð»\u009aÎ.\u001fâÁ5\u009fíh¹Ê\u001f¯Rfªä\u0005ÉB\u0004ÓbW\u008eqI¦J\rÄ©,g`¡gïð¯\u0087Ç\u0098$í÷ \u0085vOè0£Õ&S`¥²¼´óí²tÆä¼w}¾ih\u008eÌ-Â\u0093\u000fýÎ\u0010ËÚ\u0007hIïâ\u0082\u0010\u0016\u0085å\u0016\b\u0092öË>\u0097ÎÒ\u0006<\u0006Í\u009eqvUB¯cP(øí\u0005°\u0095\u0093\u0019HÛ·\u0010î\u0015FÏ¾æF\u008c\u001d\u0089He\u008cPÞTd\u001fQox\u001e\u009dÕh\u0090Y\u000f, /\t\u009eßìaÅ-½î£î\u0090\u0082Ø\u0087RP~o?uÏ\u0000¢E³\u0096«ù\u0005\u0091Ä\n\u0019`SÀs\u001dC\"íLÔÄ.\u009b5¡0\u009b\u0010o¨ÀF±\u0015\u000ezX§´R8âM´\u0016²\u0000j'ùë1Ìà\rÁ® A¾Ñ\u0017®`yK\u0098®\u007fûC$n«Ãw\u0087\u008d¦dÎ 8\\w©¬@\u0095\u0000\u001c:\u0082:Ç\b\u001e\u0010Âº?g`\u001dÜmÝ\bÅÍ¡\u0002\u0096\u0012ry9þq"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
                  byte[] var10 = var0.doFinal(
                     new byte[]{
                        (byte)(var8 >>> 56),
                        (byte)(var8 >>> 48),
                        (byte)(var8 >>> 40),
                        (byte)(var8 >>> 32),
                        (byte)(var8 >>> 24),
                        (byte)(var8 >>> 16),
                        (byte)(var8 >>> 8),
                        (byte)var8
                     }
                  );
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           pVcUL = var6;
                           juWqB = new Integer[85];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "Â\f\u009f³\u008aè`Í\u0013ÉrØ\u0003é [";
                        var5 = "Â\f\u009f³\u008aè`Í\u0013ÉrØ\u0003é [".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   private static String amq(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   public cJ ami() {
      return this.YdLcc;
   }

   private static Exception amp(Exception var0) {
      return var0;
   }

   public cw ame() {
      return this.eBhEo;
   }

   public mB amm() {
      return this.OXKNB;
   }

   @hG
   public void alE(gv param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dI.DAhjX J
      // 03: ldc2_w 9392007193847
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dI.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 34
      // 16: ifne 21
      // 19: goto 20
      // 1c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: return
      // 21: aload 0
      // 22: aload 4
      // 24: ifnonnull 4d
      // 27: getfield sixtwo/dI.xbrHm Lsixtwo/cJ;
      // 2a: invokevirtual sixtwo/cJ.WF ()Z
      // 2d: goto 34
      // 30: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 33: athrow
      // 34: ifne 4c
      // 37: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3a: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 3d: ifnull 4c
      // 40: goto 47
      // 43: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 46: athrow
      // 47: return
      // 48: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 4b: athrow
      // 4c: aload 0
      // 4d: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 50: aload 4
      // 52: ifnonnull 70
      // 55: ifnonnull 60
      // 58: goto 5f
      // 5b: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 5e: athrow
      // 5f: return
      // 60: aload 0
      // 61: aload 4
      // 63: ifnonnull 88
      // 66: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 69: goto 70
      // 6c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 6f: athrow
      // 70: invokevirtual sixtwo/mB.cnc ()Lnet/minecraft/class_243;
      // 73: aload 0
      // 74: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 77: invokevirtual sixtwo/cC.VB ()F
      // 7a: invokestatic sixtwo/jg.bBG (Lnet/minecraft/class_243;F)Z
      // 7d: ifne 8d
      // 80: aload 0
      // 81: goto 88
      // 84: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 87: athrow
      // 88: aconst_null
      // 89: putfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 8c: return
      // 8d: invokestatic sixtwo/rD.dlX ()Lsixtwo/qL;
      // 90: astore 5
      // 92: new sixtwo/ou
      // 95: dup
      // 96: new sixtwo/oo
      // 99: dup
      // 9a: invokespecial sixtwo/oo.<init> ()V
      // 9d: bipush 0
      // 9e: bipush 1
      // 9f: bipush 1
      // a0: bipush 3
      // a1: bipush 1
      // a2: invokespecial sixtwo/ou.<init> (Lsixtwo/os;ZZZIZ)V
      // a5: astore 6
      // a7: aload 0
      // a8: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // ab: invokevirtual sixtwo/mB.cnc ()Lnet/minecraft/class_243;
      // ae: astore 7
      // b0: aload 5
      // b2: aload 7
      // b4: aload 6
      // b6: getstatic sixtwo/mw.uWTdl Lsixtwo/mw;
      // b9: aload 0
      // ba: invokevirtual sixtwo/qL.dbI (Lnet/minecraft/class_243;Lsixtwo/ou;Lsixtwo/mw;Lsixtwo/gg;)V
      // bd: return
   }

   private void alK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dI.DAhjX J
      // 003: ldc2_w 23080425493797
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 00c: invokevirtual sixtwo/cC.VC ()I
      // 00f: istore 4
      // 011: new net/minecraft/class_2338
      // 014: dup
      // 015: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 018: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01b: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 01e: invokestatic net/minecraft/class_2338.method_49638 (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338;
      // 021: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 024: invokespecial net/minecraft/class_2338.<init> (Lnet/minecraft/class_2382;)V
      // 027: iload 4
      // 029: iload 4
      // 02b: iload 4
      // 02d: invokestatic net/minecraft/class_2338.method_25996 (Lnet/minecraft/class_2338;III)Ljava/lang/Iterable;
      // 030: astore 5
      // 032: invokestatic sixtwo/ee.arS ()[I
      // 035: aload 5
      // 037: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 03c: astore 6
      // 03e: astore 3
      // 03f: aload 6
      // 041: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 046: ifeq 197
      // 049: aload 6
      // 04b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 050: checkcast net/minecraft/class_2338
      // 053: astore 7
      // 055: aload 7
      // 057: aload 0
      // 058: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 05b: invokevirtual sixtwo/mB.cnb ()Lnet/minecraft/class_2338;
      // 05e: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 061: aload 3
      // 062: ifnonnull 076
      // 065: ifeq 193
      // 068: aload 0
      // 069: getfield sixtwo/dI.RxRpl Lsixtwo/cw;
      // 06c: invokevirtual sixtwo/cw.TC ()Z
      // 06f: goto 076
      // 072: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 075: athrow
      // 076: ifeq 0b1
      // 079: new net/minecraft/class_3959
      // 07c: dup
      // 07d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 080: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 083: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 086: aload 7
      // 088: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 08b: getstatic net/minecraft/class_3959$class_3960.field_17558 Lnet/minecraft/class_3959$class_3960;
      // 08e: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 091: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 094: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 097: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 09a: aload 7
      // 09c: invokestatic sixtwo/ox.cHc (Lnet/minecraft/class_3959;Lnet/minecraft/class_2338;)Lnet/minecraft/class_3965;
      // 09f: astore 8
      // 0a1: aload 0
      // 0a2: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 0a5: aload 8
      // 0a7: invokevirtual net/minecraft/class_3965.method_17780 ()Lnet/minecraft/class_2350;
      // 0aa: invokevirtual sixtwo/mB.cna (Lnet/minecraft/class_2350;)V
      // 0ad: aload 3
      // 0ae: ifnull 193
      // 0b1: fconst_0
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0b8: athrow
      // 0b9: fstore 8
      // 0bb: fload 8
      // 0bd: fconst_1
      // 0be: fcmpg
      // 0bf: ifgt 193
      // 0c2: fconst_0
      // 0c3: aload 3
      // 0c4: ifnonnull 0b9
      // 0c7: fstore 9
      // 0c9: fload 9
      // 0cb: fconst_1
      // 0cc: fcmpg
      // 0cd: ifgt 187
      // 0d0: fconst_0
      // 0d1: aload 3
      // 0d2: ifnonnull 18d
      // 0d5: fstore 10
      // 0d7: fload 10
      // 0d9: fconst_1
      // 0da: fcmpg
      // 0db: ifgt 17b
      // 0de: new net/minecraft/class_243
      // 0e1: dup
      // 0e2: aload 7
      // 0e4: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 0e7: i2f
      // 0e8: fload 8
      // 0ea: fadd
      // 0eb: f2d
      // 0ec: aload 7
      // 0ee: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 0f1: i2f
      // 0f2: fload 9
      // 0f4: fadd
      // 0f5: f2d
      // 0f6: aload 7
      // 0f8: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 0fb: i2f
      // 0fc: fload 10
      // 0fe: fadd
      // 0ff: f2d
      // 100: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 103: astore 11
      // 105: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 108: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 10b: new net/minecraft/class_3959
      // 10e: dup
      // 10f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 112: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 115: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 118: aload 11
      // 11a: getstatic net/minecraft/class_3959$class_3960.field_17559 Lnet/minecraft/class_3959$class_3960;
      // 11d: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 120: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 123: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 126: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 129: invokevirtual net/minecraft/class_638.method_17742 (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;
      // 12c: astore 12
      // 12e: aload 3
      // 12f: ifnonnull 177
      // 132: aload 12
      // 134: invokevirtual net/minecraft/class_3965.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 137: aload 3
      // 138: ifnonnull 050
      // 13b: goto 142
      // 13e: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 141: athrow
      // 142: getstatic net/minecraft/class_239$class_240.field_1332 Lnet/minecraft/class_239$class_240;
      // 145: if_acmpne 16f
      // 148: aload 12
      // 14a: invokevirtual net/minecraft/class_3965.method_17777 ()Lnet/minecraft/class_2338;
      // 14d: aload 7
      // 14f: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 152: ifeq 16f
      // 155: goto 15c
      // 158: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 15b: athrow
      // 15c: aload 0
      // 15d: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 160: aload 12
      // 162: invokevirtual net/minecraft/class_3965.method_17780 ()Lnet/minecraft/class_2350;
      // 165: invokevirtual sixtwo/mB.cna (Lnet/minecraft/class_2350;)V
      // 168: goto 16f
      // 16b: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 16e: athrow
      // 16f: fload 10
      // 171: ldc_w 0.2
      // 174: fadd
      // 175: fstore 10
      // 177: aload 3
      // 178: ifnull 0d7
      // 17b: fload 9
      // 17d: ldc_w 0.2
      // 180: fadd
      // 181: fstore 9
      // 183: aload 3
      // 184: ifnull 0c9
      // 187: fload 8
      // 189: ldc_w 0.2
      // 18c: fadd
      // 18d: fstore 8
      // 18f: aload 3
      // 190: ifnull 0bb
      // 193: aload 3
      // 194: ifnull 03f
      // 197: return
   }

   private void alM() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dI.DAhjX J
      // 03: ldc2_w 43760673369187
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/dI.uqcOW Lsixtwo/mT;
      // 10: aload 0
      // 11: getfield sixtwo/dI.wLMcW Lsixtwo/cC;
      // 14: invokevirtual sixtwo/cC.VC ()I
      // 17: i2l
      // 18: invokevirtual sixtwo/mT.cpD (J)Z
      // 1b: aload 3
      // 1c: ifnonnull 3d
      // 1f: ifne 2a
      // 22: goto 29
      // 25: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 28: athrow
      // 29: return
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 30: aload 0
      // 31: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 34: invokevirtual sixtwo/mB.cnb ()Lnet/minecraft/class_2338;
      // 37: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 3a: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 3d: aload 3
      // 3e: ifnonnull 6a
      // 41: ifeq 58
      // 44: goto 4b
      // 47: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 4a: athrow
      // 4b: aload 0
      // 4c: aload 0
      // 4d: invokevirtual sixtwo/dI.alJ ()Lsixtwo/mB;
      // 50: putfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 53: return
      // 54: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 57: athrow
      // 58: aload 0
      // 59: aload 3
      // 5a: ifnonnull 9e
      // 5d: getfield sixtwo/dI.eBhEo Lsixtwo/cw;
      // 60: invokevirtual sixtwo/cw.TC ()Z
      // 63: goto 6a
      // 66: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 69: athrow
      // 6a: ifeq 99
      // 6d: aload 0
      // 6e: aload 3
      // 6f: ifnonnull 9e
      // 72: goto 79
      // 75: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 78: athrow
      // 79: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 7c: invokevirtual sixtwo/mB.cnb ()Lnet/minecraft/class_2338;
      // 7f: aload 0
      // 80: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 83: invokevirtual sixtwo/cC.VB ()F
      // 86: f2d
      // 87: invokestatic sixtwo/ox.cHa (Lnet/minecraft/class_2338;D)Z
      // 8a: ifne 99
      // 8d: goto 94
      // 90: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 93: athrow
      // 94: return
      // 95: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 98: athrow
      // 99: aload 0
      // 9a: invokevirtual sixtwo/dI.alK ()V
      // 9d: aload 0
      // 9e: invokevirtual sixtwo/dI.alN ()V
      // a1: return
   }

   @hG
   public void alH(gA param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dI.DAhjX J
      // 03: ldc2_w 62527130822349
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dI.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 25
      // 16: ifne 21
      // 19: goto 20
      // 1c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: return
      // 21: aload 1
      // 22: invokevirtual sixtwo/gA.bbQ ()I
      // 25: aload 4
      // 27: ifnonnull 42
      // 2a: bipush 1
      // 2b: if_icmpeq 3a
      // 2e: goto 35
      // 31: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 34: athrow
      // 35: return
      // 36: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/dI.OEGRT Lsixtwo/ct;
      // 3e: bipush 1
      // 3f: invokevirtual sixtwo/ct.SQ (I)Z
      // 42: aload 4
      // 44: ifnonnull 56
      // 47: ifne 52
      // 4a: goto 51
      // 4d: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 50: athrow
      // 51: return
      // 52: aload 1
      // 53: invokevirtual sixtwo/gA.bbP ()I
      // 56: aload 0
      // 57: getfield sixtwo/dI.mbblx Lsixtwo/cD;
      // 5a: invokevirtual sixtwo/cD.VP ()I
      // 5d: if_icmpne cd
      // 60: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 63: getfield net/minecraft/class_310.field_1765 Lnet/minecraft/class_239;
      // 66: astore 5
      // 68: aload 5
      // 6a: aload 4
      // 6c: ifnonnull 7c
      // 6f: ifnonnull 7a
      // 72: goto 79
      // 75: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 78: athrow
      // 79: return
      // 7a: aload 5
      // 7c: aload 4
      // 7e: ifnonnull 9a
      // 81: invokevirtual net/minecraft/class_239.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 84: getstatic net/minecraft/class_239$class_240.field_1332 Lnet/minecraft/class_239$class_240;
      // 87: if_acmpne c1
      // 8a: goto 91
      // 8d: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 90: athrow
      // 91: aload 5
      // 93: goto 9a
      // 96: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 99: athrow
      // 9a: checkcast net/minecraft/class_3965
      // 9d: astore 6
      // 9f: aload 0
      // a0: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // a3: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // a6: aload 6
      // a8: invokevirtual net/minecraft/class_3965.method_17777 ()Lnet/minecraft/class_2338;
      // ab: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // ae: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // b1: putfield sixtwo/dI.jpzPS Lnet/minecraft/class_2248;
      // b4: aload 0
      // b5: aload 0
      // b6: invokevirtual sixtwo/dI.alJ ()Lsixtwo/mB;
      // b9: putfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // bc: aload 4
      // be: ifnull cd
      // c1: aload 0
      // c2: aconst_null
      // c3: putfield sixtwo/dI.jpzPS Lnet/minecraft/class_2248;
      // c6: goto cd
      // c9: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // cc: athrow
      // cd: return
   }

   public ct alR() {
      return this.OEGRT;
   }

   public cC alP() {
      return this.mHbSn;
   }

   public cu alT() {
      return this.ndzRO;
   }

   public cD alV() {
      return this.mbblx;
   }

   public cw amb() {
      return this.RxRpl;
   }

   public cu alZ() {
      return this.cuKBK;
   }

   public cu alU() {
      return this.DmJAW;
   }

   public cv ama() {
      return this.OgoNY;
   }

   private void alN() {
      rD.dlmvG.field_1761.method_2902(this.OXKNB.cnb(), this.OXKNB.cnd());
      rD.dlmvG.field_1724.method_6104(class_1268.field_5808);
   }

   public cu alS() {
      return this.JsQul;
   }

   private mB alJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dI.DAhjX J
      // 003: ldc2_w 115559735570691
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/ee.arS ()[I
      // 00b: aload 0
      // 00c: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 00f: invokevirtual sixtwo/cC.VC ()I
      // 012: istore 4
      // 014: new net/minecraft/class_2338
      // 017: dup
      // 018: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 01b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01e: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 021: invokestatic net/minecraft/class_2338.method_49638 (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338;
      // 024: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 027: invokespecial net/minecraft/class_2338.<init> (Lnet/minecraft/class_2382;)V
      // 02a: iload 4
      // 02c: iload 4
      // 02e: iload 4
      // 030: invokestatic net/minecraft/class_2338.method_25996 (Lnet/minecraft/class_2338;III)Ljava/lang/Iterable;
      // 033: astore 5
      // 035: aload 5
      // 037: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 03c: astore 6
      // 03e: astore 3
      // 03f: aload 6
      // 041: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 046: ifeq 25e
      // 049: aload 6
      // 04b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 050: checkcast net/minecraft/class_2338
      // 053: astore 7
      // 055: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 058: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 05b: aload 7
      // 05d: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 060: astore 8
      // 062: aload 8
      // 064: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 067: aload 3
      // 068: ifnonnull 080
      // 06b: ifeq 079
      // 06e: aload 3
      // 06f: ifnull 03f
      // 072: goto 079
      // 075: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 078: athrow
      // 079: aload 0
      // 07a: getfield sixtwo/dI.QxImU Lsixtwo/cw;
      // 07d: invokevirtual sixtwo/cw.TC ()Z
      // 080: aload 3
      // 081: ifnonnull 0cd
      // 084: ifeq 0be
      // 087: goto 08e
      // 08a: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 08d: athrow
      // 08e: aload 7
      // 090: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 093: i2d
      // 094: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 097: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 09a: invokevirtual net/minecraft/class_746.method_23318 ()D
      // 09d: dcmpg
      // 09e: aload 3
      // 09f: ifnonnull 0cd
      // 0a2: goto 0a9
      // 0a5: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a8: athrow
      // 0a9: ifge 0be
      // 0ac: goto 0b3
      // 0af: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0b2: athrow
      // 0b3: aload 3
      // 0b4: ifnull 03f
      // 0b7: goto 0be
      // 0ba: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0bd: athrow
      // 0be: aload 7
      // 0c0: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 0c3: aload 0
      // 0c4: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 0c7: invokevirtual sixtwo/cC.VB ()F
      // 0ca: invokestatic sixtwo/jg.bBG (Lnet/minecraft/class_243;F)Z
      // 0cd: aload 3
      // 0ce: ifnonnull 0e9
      // 0d1: ifeq 25a
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0da: athrow
      // 0db: aload 0
      // 0dc: getfield sixtwo/dI.vbcIH Lsixtwo/cw;
      // 0df: invokevirtual sixtwo/cw.TC ()Z
      // 0e2: goto 0e9
      // 0e5: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0e8: athrow
      // 0e9: aload 3
      // 0ea: ifnonnull 122
      // 0ed: ifeq 11c
      // 0f0: goto 0f7
      // 0f3: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0f6: athrow
      // 0f7: aload 7
      // 0f9: invokestatic sixtwo/ja.byI (Lnet/minecraft/class_2338;)Z
      // 0fc: aload 3
      // 0fd: ifnonnull 122
      // 100: goto 107
      // 103: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 106: athrow
      // 107: ifeq 11c
      // 10a: goto 111
      // 10d: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 110: athrow
      // 111: aload 3
      // 112: ifnull 03f
      // 115: goto 11c
      // 118: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 11b: athrow
      // 11c: aload 0
      // 11d: aload 8
      // 11f: invokevirtual sixtwo/dI.alL (Lnet/minecraft/class_2680;)Z
      // 122: aload 3
      // 123: ifnonnull 13e
      // 126: ifeq 25a
      // 129: goto 130
      // 12c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 12f: athrow
      // 130: aload 0
      // 131: getfield sixtwo/dI.RxRpl Lsixtwo/cw;
      // 134: invokevirtual sixtwo/cw.TC ()Z
      // 137: goto 13e
      // 13a: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 13d: athrow
      // 13e: ifeq 17d
      // 141: new net/minecraft/class_3959
      // 144: dup
      // 145: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 148: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 14b: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 14e: aload 7
      // 150: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 153: getstatic net/minecraft/class_3959$class_3960.field_17558 Lnet/minecraft/class_3959$class_3960;
      // 156: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 159: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 15c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 15f: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 162: aload 7
      // 164: invokestatic sixtwo/ox.cHc (Lnet/minecraft/class_3959;Lnet/minecraft/class_2338;)Lnet/minecraft/class_3965;
      // 167: astore 9
      // 169: new sixtwo/mB
      // 16c: dup
      // 16d: aload 7
      // 16f: aload 9
      // 171: invokevirtual net/minecraft/class_3965.method_17784 ()Lnet/minecraft/class_243;
      // 174: aload 9
      // 176: invokevirtual net/minecraft/class_3965.method_17780 ()Lnet/minecraft/class_2350;
      // 179: invokespecial sixtwo/mB.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_243;Lnet/minecraft/class_2350;)V
      // 17c: areturn
      // 17d: fconst_0
      // 17e: fstore 9
      // 180: fload 9
      // 182: fconst_1
      // 183: fcmpg
      // 184: ifgt 25a
      // 187: fconst_0
      // 188: aload 3
      // 189: ifnonnull 17e
      // 18c: fstore 10
      // 18e: fload 10
      // 190: fconst_1
      // 191: fcmpg
      // 192: ifgt 24e
      // 195: fconst_0
      // 196: aload 3
      // 197: ifnonnull 254
      // 19a: fstore 11
      // 19c: fload 11
      // 19e: fconst_1
      // 19f: fcmpg
      // 1a0: ifgt 242
      // 1a3: new net/minecraft/class_243
      // 1a6: dup
      // 1a7: aload 7
      // 1a9: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 1ac: i2f
      // 1ad: fload 9
      // 1af: fadd
      // 1b0: f2d
      // 1b1: aload 7
      // 1b3: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 1b6: i2f
      // 1b7: fload 10
      // 1b9: fadd
      // 1ba: f2d
      // 1bb: aload 7
      // 1bd: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 1c0: i2f
      // 1c1: fload 11
      // 1c3: fadd
      // 1c4: f2d
      // 1c5: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 1c8: astore 12
      // 1ca: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1cd: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 1d0: new net/minecraft/class_3959
      // 1d3: dup
      // 1d4: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1d7: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1da: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 1dd: aload 12
      // 1df: getstatic net/minecraft/class_3959$class_3960.field_17559 Lnet/minecraft/class_3959$class_3960;
      // 1e2: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 1e5: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1e8: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1eb: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 1ee: invokevirtual net/minecraft/class_638.method_17742 (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;
      // 1f1: astore 13
      // 1f3: aload 3
      // 1f4: ifnonnull 23e
      // 1f7: aload 13
      // 1f9: invokevirtual net/minecraft/class_3965.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 1fc: aload 3
      // 1fd: ifnonnull 050
      // 200: goto 207
      // 203: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 206: athrow
      // 207: getstatic net/minecraft/class_239$class_240.field_1332 Lnet/minecraft/class_239$class_240;
      // 20a: if_acmpne 236
      // 20d: aload 13
      // 20f: invokevirtual net/minecraft/class_3965.method_17777 ()Lnet/minecraft/class_2338;
      // 212: aload 7
      // 214: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 217: ifeq 236
      // 21a: goto 221
      // 21d: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 220: athrow
      // 221: new sixtwo/mB
      // 224: dup
      // 225: aload 7
      // 227: aload 12
      // 229: aload 13
      // 22b: invokevirtual net/minecraft/class_3965.method_17780 ()Lnet/minecraft/class_2350;
      // 22e: invokespecial sixtwo/mB.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_243;Lnet/minecraft/class_2350;)V
      // 231: areturn
      // 232: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 235: athrow
      // 236: fload 11
      // 238: ldc_w 0.2
      // 23b: fadd
      // 23c: fstore 11
      // 23e: aload 3
      // 23f: ifnull 19c
      // 242: fload 10
      // 244: ldc_w 0.2
      // 247: fadd
      // 248: fstore 10
      // 24a: aload 3
      // 24b: ifnull 18e
      // 24e: fload 9
      // 250: ldc_w 0.2
      // 253: fadd
      // 254: fstore 9
      // 256: aload 3
      // 257: ifnull 180
      // 25a: aload 3
      // 25b: ifnull 03f
      // 25e: aconst_null
      // 25f: areturn
   }

   public cK alO() {
      return this.fEoGq;
   }

   public cu alX() {
      return this.iMYFd;
   }

   public cw amc() {
      return this.QxImU;
   }

   @hG
   public void alI(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dI.DAhjX J
      // 03: ldc2_w 76823339488577
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 26
      // 13: invokevirtual sixtwo/dI.bab ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 24: athrow
      // 25: aload 0
      // 26: aload 4
      // 28: ifnonnull 3e
      // 2b: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 2e: ifnonnull 3d
      // 31: goto 38
      // 34: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 37: athrow
      // 38: return
      // 39: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3c: athrow
      // 3d: aload 0
      // 3e: getfield sixtwo/dI.uhsFy Lsixtwo/cJ;
      // 41: invokevirtual sixtwo/cJ.WF ()Z
      // 44: aload 4
      // 46: ifnonnull 8e
      // 49: ifeq 7a
      // 4c: goto 53
      // 4f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 52: athrow
      // 53: aload 1
      // 54: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 57: astore 5
      // 59: aload 5
      // 5b: aload 0
      // 5c: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 5f: invokevirtual sixtwo/mB.cnb ()Lnet/minecraft/class_2338;
      // 62: aload 0
      // 63: getfield sixtwo/dI.fkIYK Lsixtwo/cG;
      // 66: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 69: aload 0
      // 6a: getfield sixtwo/dI.kNGru Lsixtwo/cG;
      // 6d: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 70: aload 0
      // 71: getfield sixtwo/dI.YdLcc Lsixtwo/cJ;
      // 74: invokevirtual sixtwo/cJ.WF ()Z
      // 77: invokestatic sixtwo/iW.bxp (Lnet/minecraft/class_4587;Lnet/minecraft/class_2338;Lsixtwo/mG;Lsixtwo/mG;Z)V
      // 7a: aload 0
      // 7b: aload 4
      // 7d: ifnonnull 92
      // 80: getfield sixtwo/dI.SIzNY Lsixtwo/ct;
      // 83: bipush 1
      // 84: invokevirtual sixtwo/ct.SQ (I)Z
      // 87: goto 8e
      // 8a: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 8d: athrow
      // 8e: ifeq 95
      // 91: aload 0
      // 92: invokevirtual sixtwo/dI.alM ()V
      // 95: return
   }

   public ct alW() {
      return this.SIzNY;
   }

   @hG
   public void alF(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dI.DAhjX J
      // 003: ldc2_w 43212978329941
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ee.arS ()[I
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/dI.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 034
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: aload 4
      // 024: ifnonnull 04d
      // 027: getfield sixtwo/dI.xbrHm Lsixtwo/cJ;
      // 02a: invokevirtual sixtwo/cJ.WF ()Z
      // 02d: goto 034
      // 030: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 033: athrow
      // 034: ifne 04c
      // 037: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03a: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 03d: ifnull 04c
      // 040: goto 047
      // 043: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 046: athrow
      // 047: return
      // 048: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 04b: athrow
      // 04c: aload 0
      // 04d: aload 4
      // 04f: ifnonnull 06d
      // 052: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 055: ifnonnull 06c
      // 058: goto 05f
      // 05b: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 05e: athrow
      // 05f: aload 0
      // 060: aload 0
      // 061: invokevirtual sixtwo/dI.alJ ()Lsixtwo/mB;
      // 064: putfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 067: return
      // 068: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 06b: athrow
      // 06c: aload 0
      // 06d: getfield sixtwo/dI.SIzNY Lsixtwo/ct;
      // 070: bipush 0
      // 071: invokevirtual sixtwo/ct.SQ (I)Z
      // 074: aload 4
      // 076: ifnonnull 0a2
      // 079: ifeq 093
      // 07c: goto 083
      // 07f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 082: athrow
      // 083: aload 0
      // 084: invokevirtual sixtwo/dI.alM ()V
      // 087: aload 4
      // 089: ifnull 1ed
      // 08c: goto 093
      // 08f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 092: athrow
      // 093: aload 0
      // 094: getfield sixtwo/dI.SIzNY Lsixtwo/ct;
      // 097: bipush 2
      // 098: invokevirtual sixtwo/ct.SQ (I)Z
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0a1: athrow
      // 0a2: aload 4
      // 0a4: ifnonnull 0bf
      // 0a7: ifeq 1ed
      // 0aa: goto 0b1
      // 0ad: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0b0: athrow
      // 0b1: aload 0
      // 0b2: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 0b5: invokevirtual sixtwo/cC.VC ()I
      // 0b8: goto 0bf
      // 0bb: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0be: athrow
      // 0bf: istore 5
      // 0c1: new net/minecraft/class_2338
      // 0c4: dup
      // 0c5: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0c8: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0cb: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 0ce: invokestatic net/minecraft/class_2338.method_49638 (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338;
      // 0d1: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 0d4: invokespecial net/minecraft/class_2338.<init> (Lnet/minecraft/class_2382;)V
      // 0d7: iload 5
      // 0d9: iload 5
      // 0db: iload 5
      // 0dd: invokestatic net/minecraft/class_2338.method_25996 (Lnet/minecraft/class_2338;III)Ljava/lang/Iterable;
      // 0e0: astore 6
      // 0e2: aload 6
      // 0e4: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 0e9: astore 7
      // 0eb: aload 7
      // 0ed: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0f2: ifeq 1ed
      // 0f5: aload 7
      // 0f7: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0fc: checkcast net/minecraft/class_2338
      // 0ff: astore 8
      // 101: aload 0
      // 102: getfield sixtwo/dI.QxImU Lsixtwo/cw;
      // 105: invokevirtual sixtwo/cw.TC ()Z
      // 108: aload 4
      // 10a: ifnonnull 150
      // 10d: ifeq 149
      // 110: goto 117
      // 113: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 116: athrow
      // 117: aload 8
      // 119: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 11c: i2d
      // 11d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 120: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 123: invokevirtual net/minecraft/class_746.method_23318 ()D
      // 126: dcmpg
      // 127: aload 4
      // 129: ifnonnull 150
      // 12c: goto 133
      // 12f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 132: athrow
      // 133: ifge 149
      // 136: goto 13d
      // 139: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 13c: athrow
      // 13d: aload 4
      // 13f: ifnull 0eb
      // 142: goto 149
      // 145: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 148: athrow
      // 149: aload 0
      // 14a: getfield sixtwo/dI.vbcIH Lsixtwo/cw;
      // 14d: invokevirtual sixtwo/cw.TC ()Z
      // 150: aload 4
      // 152: ifnonnull 16b
      // 155: ifeq 17a
      // 158: goto 15f
      // 15b: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 15e: athrow
      // 15f: aload 8
      // 161: invokestatic sixtwo/ja.byI (Lnet/minecraft/class_2338;)Z
      // 164: goto 16b
      // 167: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 16a: athrow
      // 16b: ifeq 17a
      // 16e: aload 4
      // 170: ifnull 0eb
      // 173: goto 17a
      // 176: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 179: athrow
      // 17a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 17d: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 180: aload 8
      // 182: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 185: astore 9
      // 187: aload 8
      // 189: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 18c: aload 0
      // 18d: getfield sixtwo/dI.mHbSn Lsixtwo/cC;
      // 190: invokevirtual sixtwo/cC.VB ()F
      // 193: invokestatic sixtwo/jg.bBG (Lnet/minecraft/class_243;F)Z
      // 196: aload 4
      // 198: ifnonnull 1b2
      // 19b: ifeq 1e8
      // 19e: goto 1a5
      // 1a1: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1a4: athrow
      // 1a5: aload 0
      // 1a6: aload 9
      // 1a8: invokevirtual sixtwo/dI.alL (Lnet/minecraft/class_2680;)Z
      // 1ab: goto 1b2
      // 1ae: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1b1: athrow
      // 1b2: aload 4
      // 1b4: ifnonnull 1d6
      // 1b7: ifeq 1e8
      // 1ba: goto 1c1
      // 1bd: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1c0: athrow
      // 1c1: aload 8
      // 1c3: invokedynamic predict (Lnet/minecraft/class_2338;)Lnet/minecraft/class_7204; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (I)Lnet/minecraft/class_2596;, sixtwo/dI.amn (Lnet/minecraft/class_2338;I)Lnet/minecraft/class_2596;, (I)Lnet/minecraft/class_2596; ]
      // 1c8: invokestatic sixtwo/jd.bAo (Lnet/minecraft/class_7204;)V
      // 1cb: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1ce: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 1d1: aload 8
      // 1d3: invokevirtual net/minecraft/class_636.method_2899 (Lnet/minecraft/class_2338;)Z
      // 1d6: pop
      // 1d7: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1da: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1dd: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 1e0: invokevirtual net/minecraft/class_746.method_6104 (Lnet/minecraft/class_1268;)V
      // 1e3: goto 1e8
      // 1e6: astore 10
      // 1e8: aload 4
      // 1ea: ifnull 0eb
      // 1ed: return
   }

   @hG
   public void alG(gV param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dI.DAhjX J
      // 03: ldc2_w 132916601963250
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dI.bab ()Z
      // 11: aload 4
      // 13: ifnonnull 35
      // 16: ifne 21
      // 19: goto 20
      // 1c: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: return
      // 21: aload 0
      // 22: aload 4
      // 24: ifnonnull 3a
      // 27: getfield sixtwo/dI.SIzNY Lsixtwo/ct;
      // 2a: bipush 2
      // 2b: invokevirtual sixtwo/ct.SQ (I)Z
      // 2e: goto 35
      // 31: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 34: athrow
      // 35: ifeq 39
      // 38: return
      // 39: aload 0
      // 3a: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 3d: ifnonnull 45
      // 40: return
      // 41: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 44: athrow
      // 45: aload 1
      // 46: invokevirtual sixtwo/gV.bcl ()Lnet/minecraft/class_2680;
      // 49: astore 5
      // 4b: aload 1
      // 4c: invokevirtual sixtwo/gV.bck ()Lnet/minecraft/class_2338;
      // 4f: astore 6
      // 51: aload 6
      // 53: aload 0
      // 54: getfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 57: invokevirtual sixtwo/mB.cnb ()Lnet/minecraft/class_2338;
      // 5a: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 5d: aload 4
      // 5f: ifnonnull 78
      // 62: ifeq 96
      // 65: goto 6c
      // 68: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 6b: athrow
      // 6c: aload 5
      // 6e: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 71: goto 78
      // 74: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 77: athrow
      // 78: ifeq 96
      // 7b: aload 0
      // 7c: aconst_null
      // 7d: putfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 80: aload 0
      // 81: getfield sixtwo/dI.uqcOW Lsixtwo/mT;
      // 84: invokevirtual sixtwo/mT.cpB ()V
      // 87: aload 0
      // 88: aload 0
      // 89: invokevirtual sixtwo/dI.alJ ()Lsixtwo/mB;
      // 8c: putfield sixtwo/dI.OXKNB Lsixtwo/mB;
      // 8f: goto 96
      // 92: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 95: athrow
      // 96: return
   }

   private static CallSite amw(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("amv".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dI" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cu alY() {
      return this.nKDKe;
   }

   public cw amd() {
      return this.vbcIH;
   }

   private static CallSite amt(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ams".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dI" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cC alQ() {
      return this.wLMcW;
   }

   public cJ amf() {
      return this.uhsFy;
   }

   private boolean alL(class_2680 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dI.DAhjX J
      // 03: ldc2_w 87515359552668
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ee.arS ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnonnull 2a
      // 13: invokevirtual net/minecraft/class_2680.method_26227 ()Lnet/minecraft/class_3610;
      // 16: invokevirtual net/minecraft/class_3610.method_15769 ()Z
      // 19: ifne 29
      // 1c: goto 23
      // 1f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 22: athrow
      // 23: bipush 0
      // 24: ireturn
      // 25: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 28: athrow
      // 29: aload 1
      // 2a: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 2d: astore 5
      // 2f: aload 5
      // 31: instanceof net/minecraft/class_2302
      // 34: aload 4
      // 36: ifnonnull 76
      // 39: ifeq 6e
      // 3c: goto 43
      // 3f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 42: athrow
      // 43: aload 5
      // 45: checkcast net/minecraft/class_2302
      // 48: astore 6
      // 4a: aload 6
      // 4c: invokevirtual net/minecraft/class_2302.method_9827 ()I
      // 4f: istore 7
      // 51: aload 6
      // 53: aload 1
      // 54: invokevirtual net/minecraft/class_2302.method_9829 (Lnet/minecraft/class_2680;)I
      // 57: aload 4
      // 59: ifnonnull 76
      // 5c: iload 7
      // 5e: if_icmpge 6e
      // 61: goto 68
      // 64: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 67: athrow
      // 68: bipush 0
      // 69: ireturn
      // 6a: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 6d: athrow
      // 6e: aload 0
      // 6f: getfield sixtwo/dI.OEGRT Lsixtwo/ct;
      // 72: bipush 0
      // 73: invokevirtual sixtwo/ct.SQ (I)Z
      // 76: aload 4
      // 78: ifnonnull 9b
      // 7b: ifeq 93
      // 7e: goto 85
      // 81: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 84: athrow
      // 85: aload 0
      // 86: getfield sixtwo/dI.fEoGq Lsixtwo/cK;
      // 89: aload 5
      // 8b: invokevirtual sixtwo/cK.WY (Lnet/minecraft/class_2248;)Z
      // 8e: ireturn
      // 8f: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 92: athrow
      // 93: aload 0
      // 94: getfield sixtwo/dI.OEGRT Lsixtwo/ct;
      // 97: bipush 1
      // 98: invokevirtual sixtwo/ct.SQ (I)Z
      // 9b: aload 4
      // 9d: ifnonnull c5
      // a0: ifeq c4
      // a3: goto aa
      // a6: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // a9: athrow
      // aa: aload 5
      // ac: aload 0
      // ad: getfield sixtwo/dI.jpzPS Lnet/minecraft/class_2248;
      // b0: if_acmpne c2
      // b3: goto ba
      // b6: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // b9: athrow
      // ba: bipush 1
      // bb: goto c3
      // be: invokestatic sixtwo/dI.amp (Ljava/lang/Exception;)Ljava/lang/Exception;
      // c1: athrow
      // c2: bipush 0
      // c3: ireturn
      // c4: bipush 1
      // c5: ireturn
   }

   public cG amg() {
      return this.fkIYK;
   }

   public cG amh() {
      return this.kNGru;
   }

   public cJ amj() {
      return this.xbrHm;
   }

   public mT amk() {
      return this.uqcOW;
   }

   public class_2248 aml() {
      return this.jpzPS;
   }

   private static String amr(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 13752;
      if (FxFSf[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])YQIig.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               YQIig.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dI", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = FKuPi[var5].getBytes("ISO-8859-1");
         FxFSf[var5] = amq(((Cipher)var4[0]).doFinal(var9));
      }

      return FxFSf[var5];
   }

   private static int amv(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = amu(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Object ams(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = amr(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int amu(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 2389;
      if (juWqB[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = pVcUL[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])IUvfm.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               IUvfm.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dI", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         juWqB[var3] = var15;
      }

      return juWqB[var3];
   }

   @Override
   public void YO() {
      super.YO();
      this.jpzPS = null;
      this.OXKNB = null;
   }
}
