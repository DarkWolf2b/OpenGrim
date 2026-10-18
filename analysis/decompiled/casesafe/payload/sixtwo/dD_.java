package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dD extends gg {
   private final ct ZKjem;
   private final cu Qtxqy;
   private final cu VCHhf;
   private final cu ABbIM;
   private final cz mJHrk;
   private static long bapnK;
   private static long[] dxsTa;
   private static Integer[] htjaR;
   private static Map APUxf;

   private static native void _07021457c400d30aa53725408e6f5e94();

   public dD() {
      long var1 = bapnK ^ 84347128949063L;
      super(gf.aZL(akF<"u">(19, 6636927782390717993L ^ var1), false, gh.qBzlZ));
      this.ZKjem = new ct(
         this,
         mr.clS(
            new int[]{
               akF<"u">(20482, 4639510194696850982L ^ var1),
               akF<"u">(9839, 7583098260113094758L ^ var1),
               akF<"u">(12087, 6235613134170026277L ^ var1),
               akF<"u">(4207, 7461099358985768553L ^ var1)
            }
         )
      );
      ct var10003 = this.ZKjem;
      int[] var10004 = new int[akF<"u">(22649, 8781622499838068304L ^ var1)];
      var10004[0] = akF<"u">(7296, 9114562459091621L ^ var1);
      var10004[1] = akF<"u">(25481, 5591249917014588816L ^ var1);
      var10004[2] = akF<"u">(31557, 6382736147852567888L ^ var1);
      var10004[3] = akF<"u">(23777, 50315186258051782L ^ var1);
      var10004[4] = akF<"u">(22520, 1343432847948351970L ^ var1);
      var10004[5] = akF<"u">(32383, 4133432882698920051L ^ var1);
      var10004[akF<"u">(11282, 5748595630635053618L ^ var1)] = akF<"u">(27841, 6575302504772874946L ^ var1);
      var10004[akF<"u">(1012, 1688570145012407793L ^ var1)] = akF<"u">(24090, 7940398150804537403L ^ var1);
      var10004[akF<"u">(9258, 2027384027481700873L ^ var1)] = akF<"u">(13596, 405731969254353668L ^ var1);
      this.Qtxqy = new cu(var10003, mr.clS(var10004));
      var10003 = this.ZKjem;
      var10004 = new int[akF<"u">(20654, 7640249013288930997L ^ var1)];
      var10004[0] = akF<"u">(10464, 9137325807600105164L ^ var1);
      var10004[1] = akF<"u">(12048, 6770925953654059264L ^ var1);
      var10004[2] = akF<"u">(31557, 6382736147852567888L ^ var1);
      var10004[3] = akF<"u">(11540, 7259074832840061756L ^ var1);
      var10004[4] = akF<"u">(8082, 369767091973177747L ^ var1);
      var10004[5] = akF<"u">(10386, 2503621985203811972L ^ var1);
      var10004[akF<"u">(14352, 1578928458184156679L ^ var1)] = akF<"u">(27841, 6575302504772874946L ^ var1);
      var10004[akF<"u">(24660, 5404029449894149754L ^ var1)] = akF<"u">(12320, 5210120100616465983L ^ var1);
      var10004[akF<"u">(9241, 3338590920871213618L ^ var1)] = akF<"u">(12406, 7410998377170660944L ^ var1);
      var10004[akF<"u">(30472, 5118051465774180636L ^ var1)] = akF<"u">(23208, 4849339818697032851L ^ var1);
      var10004[akF<"u">(31072, 4585491718608004941L ^ var1)] = akF<"u">(28259, 5306944429105197181L ^ var1);
      var10004[akF<"u">(27825, 7547784057960346289L ^ var1)] = akF<"u">(15487, 1651578925820371570L ^ var1);
      this.VCHhf = new cu(var10003, mr.clS(var10004));
      var10003 = this.ZKjem;
      var10004 = new int[akF<"u">(26588, 302919396748868051L ^ var1)];
      var10004[0] = akF<"u">(10908, 7303013008358208664L ^ var1);
      var10004[1] = akF<"u">(1171, 6272132970667334287L ^ var1);
      var10004[2] = akF<"u">(27841, 6575302504772874946L ^ var1);
      var10004[3] = akF<"u">(21949, 4331250770139974591L ^ var1);
      var10004[4] = akF<"u">(31463, 4185104048988562665L ^ var1);
      var10004[5] = akF<"u">(11468, 863445414196835037L ^ var1);
      var10004[akF<"u">(14352, 1578928458184156679L ^ var1)] = akF<"u">(1675, 3168076382358984854L ^ var1);
      var10004[akF<"u">(24660, 5404029449894149754L ^ var1)] = akF<"u">(27841, 6575302504772874946L ^ var1);
      var10004[akF<"u">(9241, 3338590920871213618L ^ var1)] = akF<"u">(5806, 1159102899526682753L ^ var1);
      var10004[akF<"u">(30472, 5118051465774180636L ^ var1)] = akF<"u">(8082, 369767091973177747L ^ var1);
      var10004[akF<"u">(902, 5285495580607897004L ^ var1)] = akF<"u">(31630, 7709464572168938884L ^ var1);
      var10004[akF<"u">(1763, 4333514824340920513L ^ var1)] = akF<"u">(31557, 6382736147852567888L ^ var1);
      var10004[akF<"u">(8450, 8854148715173379845L ^ var1)] = akF<"u">(23208, 4849339818697032851L ^ var1);
      var10004[akF<"u">(22793, 5880341227489625857L ^ var1)] = akF<"u">(22564, 7494464378722321975L ^ var1);
      var10004[akF<"u">(411, 5952948820831100816L ^ var1)] = akF<"u">(15487, 1651578925820371570L ^ var1);
      this.ABbIM = new cu(var10003, mr.clS(var10004));
      this.mJHrk = new cz(
         this,
         mr.clS(
            new int[]{
               akF<"u">(31630, 7709464572168938884L ^ var1),
               akF<"u">(31557, 6382736147852567888L ^ var1),
               akF<"u">(23208, 4849339818697032851L ^ var1),
               akF<"u">(22564, 7494464378722321975L ^ var1),
               akF<"u">(15487, 1651578925820371570L ^ var1)
            }
         )
      );
   }

   static {
      Loader.doInit(dD.class);
      _07021457c400d30aa53725408e6f5e94();
   }

   private static native MatchException akC(MatchException var0);

   private static native int akD(int var0, long var1);

   private static native CallSite akF(Lookup var0, String var1, MethodType var2);

   @hG
   public native void akB(gO$tm var1);

   private static native int akE(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
