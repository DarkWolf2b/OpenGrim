package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2627;

public class em extends gg {
   private final ct hyrdo;
   private final cu Mbkzf;
   private final cu nszob;
   private final cC qbgVw;
   private final cC eXBkK;
   private static long IAnJC;
   private static long[] rXots;
   private static Integer[] cSAnF;
   private static Map rnwKn;

   public em() {
      long var1 = IAnJC ^ 27833373165954L;
      super(gf.aZL(ato<"y">(19517, 8260361633467763112L ^ var1), false, gh.xgeEn).aZS(false));
      this.hyrdo = new ct(
         this,
         mr.clS(
            new int[]{
               ato<"y">(28196, 4546858062116072346L ^ var1),
               ato<"y">(22554, 3763028610048400810L ^ var1),
               ato<"y">(19119, 7688730454341160719L ^ var1),
               ato<"y">(16589, 6980796451844621646L ^ var1)
            }
         )
      );
      ct var10003 = this.hyrdo;
      int[] var10004 = new int[ato<"y">(19265, 6064838701101682410L ^ var1)];
      var10004[0] = ato<"y">(13134, 6237150297083770617L ^ var1);
      var10004[1] = ato<"y">(721, 4008648007358531447L ^ var1);
      var10004[2] = ato<"y">(24222, 5047728526824610561L ^ var1);
      var10004[3] = ato<"y">(10850, 7093312747717357511L ^ var1);
      var10004[4] = ato<"y">(23766, 5187765574812932428L ^ var1);
      var10004[5] = ato<"y">(32577, 6307118605332200175L ^ var1);
      var10004[ato<"y">(4227, 2672712795400131882L ^ var1)] = ato<"y">(23665, 4734416914381773296L ^ var1);
      this.Mbkzf = new cu(var10003, mr.clS(var10004));
      var10003 = this.hyrdo;
      var10004 = new int[ato<"y">(28096, 5792929864748378205L ^ var1)];
      var10004[0] = ato<"y">(2361, 8042103058533928076L ^ var1);
      var10004[1] = ato<"y">(18623, 4005809716069240082L ^ var1);
      var10004[2] = ato<"y">(2391, 8329158999182036219L ^ var1);
      var10004[3] = ato<"y">(24183, 8828287169817385933L ^ var1);
      var10004[4] = ato<"y">(10130, 4653474082045452836L ^ var1);
      var10004[5] = ato<"y">(30349, 5002082880301380386L ^ var1);
      var10004[ato<"y">(30782, 2988189759341903277L ^ var1)] = ato<"y">(18541, 319216919887154677L ^ var1);
      var10004[ato<"y">(26128, 7755556564233003905L ^ var1)] = ato<"y">(17791, 7253011769960464621L ^ var1);
      var10004[ato<"y">(12034, 6967171996353063614L ^ var1)] = ato<"y">(32577, 6307118605332200175L ^ var1);
      var10004[ato<"y">(30506, 313267282386694798L ^ var1)] = ato<"y">(9173, 7999287352768030314L ^ var1);
      var10004[ato<"y">(22644, 3537351713417764307L ^ var1)] = ato<"y">(4289, 7338844618593129849L ^ var1);
      var10004[ato<"y">(7790, 689646854985047032L ^ var1)] = ato<"y">(10903, 4995832557730688787L ^ var1);
      this.nszob = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[ato<"y">(28244, 7975859776914926588L ^ var1)];
      var10004[0] = ato<"y">(12400, 287217747691599328L ^ var1);
      var10004[1] = ato<"y">(7398, 5429304947232233850L ^ var1);
      var10004[2] = ato<"y">(22780, 4498227744164158823L ^ var1);
      var10004[3] = ato<"y">(20562, 6418665197185373664L ^ var1);
      var10004[4] = ato<"y">(2599, 7416257781657522052L ^ var1);
      var10004[5] = ato<"y">(13600, 4496196550953693332L ^ var1);
      var10004[ato<"y">(30782, 2988189759341903277L ^ var1)] = ato<"y">(4289, 7338844618593129849L ^ var1);
      var10004[ato<"y">(26128, 7755556564233003905L ^ var1)] = ato<"y">(2391, 8329158999182036219L ^ var1);
      var10004[ato<"y">(785, 8411991747093382801L ^ var1)] = ato<"y">(2716, 6495716134699978557L ^ var1);
      var10004[ato<"y">(11916, 4188640805940521752L ^ var1)] = ato<"y">(18487, 6358905397308493196L ^ var1);
      var10004[ato<"y">(11535, 4951700684637923518L ^ var1)] = ato<"y">(13753, 2489504402020298752L ^ var1);
      this.qbgVw = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(1.0).Vx(3.0).VA(1.6).Vf(this.Mbkzf::SZ);
      var10004 = new int[ato<"y">(7508, 1812768759828863209L ^ var1)];
      var10004[0] = ato<"y">(12775, 7165146512104453218L ^ var1);
      var10004[1] = ato<"y">(4289, 7338844618593129849L ^ var1);
      var10004[2] = ato<"y">(10903, 4995832557730688787L ^ var1);
      var10004[3] = ato<"y">(7348, 4763037700118108446L ^ var1);
      var10004[4] = ato<"y">(2391, 8329158999182036219L ^ var1);
      var10004[5] = ato<"y">(24977, 167267233959748659L ^ var1);
      var10004[ato<"y">(30782, 2988189759341903277L ^ var1)] = ato<"y">(23665, 4734416914381773296L ^ var1);
      var10004[ato<"y">(26128, 7755556564233003905L ^ var1)] = ato<"y">(32577, 6307118605332200175L ^ var1);
      var10004[ato<"y">(785, 8411991747093382801L ^ var1)] = ato<"y">(2599, 7416257781657522052L ^ var1);
      var10004[ato<"y">(11916, 4188640805940521752L ^ var1)] = ato<"y">(31779, 9106408177578129850L ^ var1);
      var10004[ato<"y">(11535, 4951700684637923518L ^ var1)] = ato<"y">(25140, 597500459057620899L ^ var1);
      var10004[ato<"y">(28244, 7975859776914926588L ^ var1)] = ato<"y">(25140, 597500459057620899L ^ var1);
      var10004[ato<"y">(12473, 1422342725254575399L ^ var1)] = ato<"y">(29060, 6133790195565442054L ^ var1);
      var10004[ato<"y">(23443, 5425115804754058784L ^ var1)] = ato<"y">(7348, 4763037700118108446L ^ var1);
      this.eXBkK = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(0.1).Vx(3.0).VA(1.91).Vf(this.nszob::SZ);
   }

   static {
      Loader.doInit(em.class);
      _8b967bade6a5815b769653759123e3a3();
   }

   private static native int atn(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite ato(Lookup var0, String var1, MethodType var2);

   @hG
   public native void atj(gH$th var1);

   private native boolean atk(class_2627 var1);

   @hG
   public native void ati(hs var1);

   private static native MatchException atl(MatchException var0);

   private static native int atm(int var0, long var1);

   private static native void _8b967bade6a5815b769653759123e3a3();
}
