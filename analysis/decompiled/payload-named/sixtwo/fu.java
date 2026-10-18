package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import native.Loader;
import net.minecraft.network.packet.Packet;

public class fu extends gg {
   private final ct OZwTl;
   private final cu HWcZh;
   private final cu hWgcS;
   private final cu nImvb;
   private final cu oExgz;
   private final cA LaROb;
   private final cJ PmsBY;
   private final cJ BkSRE;
   private final cJ RLDCA;
   private final cC kUuPI;
   private final cH pGiTh;
   private final cJ cKQhx;
   private final cJ KnAho;
   private final cJ TOKrl;
   private final cC TKJLd;
   private final cH GTOqc;
   private final cJ FxYCf;
   private final cJ iIlaN;
   private final cJ LWIOL;
   private final cC DfcnL;
   private final cH fsosg;
   private final cJ TnuIy;
   private final cJ yYAVi;
   private final cJ Vzyof;
   private final cC yUhFU;
   private final cH dCnGA;
   private final cJ NGzOC;
   private final cJ IiAXY;
   private final cJ xaWdH;
   private final cC IlDeC;
   private final cH ASVuR;
   private final Queue<Packet<?>> bvNPi;
   private final mT qmOOk;
   private boolean HiBun;
   private int zHVGe;
   private static long BKGTH;
   private static String[] OPeMM;
   private static String[] EsiEj;
   private static Map oYwxV;
   private static long[] wkefr;
   private static Integer[] fJTkl;
   private static Map pFjbu;

   private static native CallSite aQw(Lookup var0, String var1, MethodType var2);

   private static native CallSite aQz(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aQl(gM var1);

   @hG
   public native void aQo(gL$tj var1);

   private static native MatchException aQs(MatchException var0);

   private static native String aQu(int var0, long var1);

   private static native int aQx(int var0, long var1);

   @hG
   public native void aQm(hw$tv var1);

   private native void aQp(double var1, boolean var3, boolean var4);

   private static native Object aQv(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aQn(gH$th var1);

   private native void aQr();

   private static native String aQt(byte[] var0);

   private static native int aQy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aQq();

   public fu() {
      long var1 = BKGTH ^ 75494749283425L;
      super(gf.aZL(aQz<"o">(15999, 2821600971313299072L ^ var1), false, gh.xwjCw));
      this.OZwTl = new ct(
         this,
         mr.clS(
            new int[]{
               aQz<"o">(4568, 4185289409859195194L ^ var1),
               aQz<"o">(2905, 2414364722927569835L ^ var1),
               aQz<"o">(7234, 7755415192159952007L ^ var1),
               aQz<"o">(18928, 8176434706645633400L ^ var1)
            }
         )
      );
      ct var10003 = this.OZwTl;
      int[] var10004 = new int[aQz<"o">(32391, 3611790342060211797L ^ var1)];
      var10004[0] = aQz<"o">(60, 6962139998440259825L ^ var1);
      var10004[1] = aQz<"o">(2556, 955747743055284502L ^ var1);
      var10004[2] = aQz<"o">(438, 6899979917959168342L ^ var1);
      var10004[3] = aQz<"o">(3355, 8877863291603094994L ^ var1);
      var10004[4] = aQz<"o">(10463, 4318750047065253913L ^ var1);
      var10004[5] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var10004[aQz<"o">(20175, 4289444170646441511L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      this.HWcZh = new cu(var10003, mr.clS(var10004));
      var10003 = this.OZwTl;
      var10004 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var10004[0] = aQz<"o">(9772, 3555578586623420096L ^ var1);
      var10004[1] = aQz<"o">(10911, 8663697512702978663L ^ var1);
      var10004[2] = aQz<"o">(15286, 6296566918860454732L ^ var1);
      var10004[3] = aQz<"o">(25952, 2619754312936646119L ^ var1);
      var10004[4] = aQz<"o">(4745, 7104060576316428803L ^ var1);
      var10004[5] = aQz<"o">(2529, 8855411574800124212L ^ var1);
      this.hWgcS = new cu(var10003, mr.clS(var10004));
      var10003 = this.OZwTl;
      var10004 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var10004[0] = aQz<"o">(24482, 8815856273695924070L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(7718, 3982572755109650112L ^ var1);
      var10004[3] = aQz<"o">(31479, 5019124531254983225L ^ var1);
      var10004[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      this.nImvb = new cu(var10003, mr.clS(var10004));
      var10003 = this.OZwTl;
      var10004 = new int[aQz<"o">(32753, 8431670438708870951L ^ var1)];
      var10004[0] = aQz<"o">(23176, 3734202626880264779L ^ var1);
      var10004[1] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[2] = aQz<"o">(29485, 3326470765793932271L ^ var1);
      var10004[3] = aQz<"o">(16878, 8244542485739782508L ^ var1);
      var10004[4] = aQz<"o">(28153, 4801056416120335630L ^ var1);
      var10004[5] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(5758, 407594365227177613L ^ var1);
      this.oExgz = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[aQz<"o">(28793, 7185169296676745394L ^ var1)];
      var10004[0] = aQz<"o">(15560, 2672748832311360553L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(15721, 4385454237375086001L ^ var1);
      var10004[3] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10004[4] = aQz<"o">(19745, 3510421688242687478L ^ var1);
      var10004[5] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var10004[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[aQz<"o">(13070, 6652156839966225348L ^ var1)] = aQz<"o">(16879, 9038192014053818674L ^ var1);
      this.LaROb = new cA(this, mr.clS(var10004)).UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH(aQw<"b">(29498, 8948060864844036538L ^ var1));
      int[] var6 = new int[aQz<"o">(8266, 3179416459825455291L ^ var1)];
      var6[0] = aQz<"o">(3018, 5141661732004465444L ^ var1);
      var6[1] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var6[2] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var6[3] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var6[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var6[5] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var6[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var6[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var6[aQz<"o">(12151, 4753384633927184371L ^ var1)] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var6[aQz<"o">(25767, 4230277241882469450L ^ var1)] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var6[aQz<"o">(14632, 5875182809916651949L ^ var1)] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var6[aQz<"o">(26772, 4499163951721441357L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var6[aQz<"o">(3151, 4690292266701294787L ^ var1)] = aQz<"o">(6740, 5516752066351143588L ^ var1);
      this.PmsBY = new cJ(mr.clS(var6)).WE(true);
      int[] var7 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var7[0] = aQz<"o">(13139, 4223285270279500757L ^ var1);
      var7[1] = aQz<"o">(17146, 1512446355515753014L ^ var1);
      var7[2] = aQz<"o">(4745, 7104060576316428803L ^ var1);
      var7[3] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var7[4] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var7[5] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var7[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var7[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(9959, 7819045567487616515L ^ var1);
      this.BkSRE = new cJ(mr.clS(var7)).WE(true);
      int[] var8 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var8[0] = aQz<"o">(8190, 1316912098404867887L ^ var1);
      var8[1] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var8[2] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var8[3] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var8[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var8[5] = aQz<"o">(9959, 7819045567487616515L ^ var1);
      this.RLDCA = new cJ(mr.clS(var8)).WE(true);
      int[] var9 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var9[0] = aQz<"o">(2553, 6702126523510163716L ^ var1);
      var9[1] = aQz<"o">(8856, 1776166350614504035L ^ var1);
      var9[2] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var9[3] = aQz<"o">(13487, 3395912768352007244L ^ var1);
      var9[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var9[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var9[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var9[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(9959, 7819045567487616515L ^ var1);
      this.kUuPI = new cC(mr.clS(var9)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0).Vz(aQw<"b">(9087, 8387083138819926525L ^ var1));
      var10004 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var10004[0] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var10004[3] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var10004[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10004[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(9959, 7819045567487616515L ^ var1);
      this.pGiTh = new cH(this, mr.clS(var10004)).Wu(this.PmsBY, this.BkSRE, this.RLDCA, this.kUuPI);
      int[] var10 = new int[aQz<"o">(3246, 4167248800755321970L ^ var1)];
      var10[0] = aQz<"o">(10025, 925872065061005281L ^ var1);
      var10[1] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10[2] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var10[3] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var10[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10[5] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var10[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var10[aQz<"o">(12151, 4753384633927184371L ^ var1)] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var10[aQz<"o">(25767, 4230277241882469450L ^ var1)] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10[aQz<"o">(7999, 5211910585445031934L ^ var1)] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var10[aQz<"o">(29926, 3496566820145001581L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10[aQz<"o">(16791, 7157886468350722376L ^ var1)] = aQz<"o">(22724, 2494337260978559047L ^ var1);
      this.cKQhx = new cJ(mr.clS(var10)).WE(true);
      int[] var11 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var11[0] = aQz<"o">(5136, 3923740963961443566L ^ var1);
      var11[1] = aQz<"o">(20798, 4800755556829188580L ^ var1);
      var11[2] = aQz<"o">(4745, 7104060576316428803L ^ var1);
      var11[3] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var11[4] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var11[5] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var11[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var11[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(5774, 8261344317302445691L ^ var1);
      this.KnAho = new cJ(mr.clS(var11)).WE(false);
      int[] var12 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var12[0] = aQz<"o">(12518, 2644976412319854633L ^ var1);
      var12[1] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var12[2] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var12[3] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var12[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var12[5] = aQz<"o">(5774, 8261344317302445691L ^ var1);
      this.TOKrl = new cJ(mr.clS(var12)).WE(true);
      int[] var13 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var13[0] = aQz<"o">(27601, 8684977125833337695L ^ var1);
      var13[1] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var13[2] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var13[3] = aQz<"o">(13487, 3395912768352007244L ^ var1);
      var13[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var13[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var13[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var13[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(5774, 8261344317302445691L ^ var1);
      this.TKJLd = new cC(mr.clS(var13)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0625).Vz(aQw<"b">(27949, 3255564043899070380L ^ var1));
      var10004 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var10004[0] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var10004[3] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var10004[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10004[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(5774, 8261344317302445691L ^ var1);
      this.GTOqc = new cH(this, mr.clS(var10004)).Wu(this.cKQhx, this.KnAho, this.TOKrl, this.TKJLd);
      int[] var14 = new int[aQz<"o">(3246, 4167248800755321970L ^ var1)];
      var14[0] = aQz<"o">(10025, 925872065061005281L ^ var1);
      var14[1] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var14[2] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var14[3] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var14[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var14[5] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var14[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var14[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var14[aQz<"o">(12151, 4753384633927184371L ^ var1)] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var14[aQz<"o">(25767, 4230277241882469450L ^ var1)] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var14[aQz<"o">(7999, 5211910585445031934L ^ var1)] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var14[aQz<"o">(29926, 3496566820145001581L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var14[aQz<"o">(16791, 7157886468350722376L ^ var1)] = aQz<"o">(6801, 4522816343506066024L ^ var1);
      this.FxYCf = new cJ(mr.clS(var14)).WE(true);
      int[] var15 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var15[0] = aQz<"o">(5136, 3923740963961443566L ^ var1);
      var15[1] = aQz<"o">(20798, 4800755556829188580L ^ var1);
      var15[2] = aQz<"o">(4745, 7104060576316428803L ^ var1);
      var15[3] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var15[4] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var15[5] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var15[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var15[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(991, 4435295532339364632L ^ var1);
      this.iIlaN = new cJ(mr.clS(var15)).WE(false);
      int[] var16 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var16[0] = aQz<"o">(12518, 2644976412319854633L ^ var1);
      var16[1] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var16[2] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var16[3] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var16[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var16[5] = aQz<"o">(991, 4435295532339364632L ^ var1);
      this.LWIOL = new cJ(mr.clS(var16)).WE(false);
      int[] var17 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var17[0] = aQz<"o">(27601, 8684977125833337695L ^ var1);
      var17[1] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var17[2] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var17[3] = aQz<"o">(13487, 3395912768352007244L ^ var1);
      var17[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var17[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var17[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var17[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(991, 4435295532339364632L ^ var1);
      this.DfcnL = new cC(mr.clS(var17)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.04535).Vz(aQw<"b">(27949, 3255564043899070380L ^ var1));
      var10004 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var10004[0] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var10004[3] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var10004[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10004[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(991, 4435295532339364632L ^ var1);
      this.fsosg = new cH(this, mr.clS(var10004)).Wu(this.FxYCf, this.iIlaN, this.LWIOL, this.DfcnL);
      int[] var18 = new int[aQz<"o">(3246, 4167248800755321970L ^ var1)];
      var18[0] = aQz<"o">(10025, 925872065061005281L ^ var1);
      var18[1] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var18[2] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var18[3] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var18[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var18[5] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var18[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var18[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var18[aQz<"o">(12151, 4753384633927184371L ^ var1)] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var18[aQz<"o">(25767, 4230277241882469450L ^ var1)] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var18[aQz<"o">(7999, 5211910585445031934L ^ var1)] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var18[aQz<"o">(29926, 3496566820145001581L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var18[aQz<"o">(16791, 7157886468350722376L ^ var1)] = aQz<"o">(31828, 1854752997545540825L ^ var1);
      this.TnuIy = new cJ(mr.clS(var18)).WE(false);
      int[] var19 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var19[0] = aQz<"o">(5136, 3923740963961443566L ^ var1);
      var19[1] = aQz<"o">(20798, 4800755556829188580L ^ var1);
      var19[2] = aQz<"o">(4745, 7104060576316428803L ^ var1);
      var19[3] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var19[4] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var19[5] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var19[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var19[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(30486, 4472666239481903053L ^ var1);
      this.yYAVi = new cJ(mr.clS(var19)).WE(false);
      int[] var20 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var20[0] = aQz<"o">(12518, 2644976412319854633L ^ var1);
      var20[1] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var20[2] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var20[3] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var20[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var20[5] = aQz<"o">(30486, 4472666239481903053L ^ var1);
      this.Vzyof = new cJ(mr.clS(var20)).WE(false);
      int[] var21 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var21[0] = aQz<"o">(27601, 8684977125833337695L ^ var1);
      var21[1] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var21[2] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var21[3] = aQz<"o">(13487, 3395912768352007244L ^ var1);
      var21[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var21[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var21[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var21[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(30486, 4472666239481903053L ^ var1);
      this.yUhFU = new cC(mr.clS(var21)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0).Vz(aQw<"b">(27949, 3255564043899070380L ^ var1));
      var10004 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var10004[0] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var10004[3] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var10004[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10004[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(30486, 4472666239481903053L ^ var1);
      this.dCnGA = new cH(this, mr.clS(var10004)).Wu(this.TnuIy, this.yYAVi, this.Vzyof, this.yUhFU);
      int[] var22 = new int[aQz<"o">(3246, 4167248800755321970L ^ var1)];
      var22[0] = aQz<"o">(10025, 925872065061005281L ^ var1);
      var22[1] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var22[2] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var22[3] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var22[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var22[5] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var22[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var22[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var22[aQz<"o">(12151, 4753384633927184371L ^ var1)] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var22[aQz<"o">(25767, 4230277241882469450L ^ var1)] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var22[aQz<"o">(7999, 5211910585445031934L ^ var1)] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var22[aQz<"o">(29926, 3496566820145001581L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var22[aQz<"o">(16791, 7157886468350722376L ^ var1)] = aQz<"o">(19236, 6288606159770209195L ^ var1);
      this.NGzOC = new cJ(mr.clS(var22)).WE(false);
      int[] var23 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var23[0] = aQz<"o">(5136, 3923740963961443566L ^ var1);
      var23[1] = aQz<"o">(20798, 4800755556829188580L ^ var1);
      var23[2] = aQz<"o">(4745, 7104060576316428803L ^ var1);
      var23[3] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var23[4] = aQz<"o">(11538, 8386938726000733668L ^ var1);
      var23[5] = aQz<"o">(4056, 6907589816057040701L ^ var1);
      var23[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var23[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(18289, 8354880688968058872L ^ var1);
      this.IiAXY = new cJ(mr.clS(var23)).WE(false);
      int[] var24 = new int[aQz<"o">(13779, 2648826123930940732L ^ var1)];
      var24[0] = aQz<"o">(12518, 2644976412319854633L ^ var1);
      var24[1] = aQz<"o">(9408, 1727698350777410576L ^ var1);
      var24[2] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var24[3] = aQz<"o">(25288, 8584768527115641371L ^ var1);
      var24[4] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var24[5] = aQz<"o">(18289, 8354880688968058872L ^ var1);
      this.xaWdH = new cJ(mr.clS(var24)).WE(false);
      int[] var25 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var25[0] = aQz<"o">(27601, 8684977125833337695L ^ var1);
      var25[1] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var25[2] = aQz<"o">(21291, 8232201746290332671L ^ var1);
      var25[3] = aQz<"o">(13487, 3395912768352007244L ^ var1);
      var25[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var25[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var25[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var25[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(18289, 8354880688968058872L ^ var1);
      this.IlDeC = new cC(mr.clS(var25)).Vy(0.01).Vw(-1.0).Vx(1.0).VA(0.0).Vz(aQw<"b">(27949, 3255564043899070380L ^ var1));
      var10004 = new int[aQz<"o">(12151, 4753384633927184371L ^ var1)];
      var10004[0] = aQz<"o">(4430, 1223846955656515982L ^ var1);
      var10004[1] = aQz<"o">(13310, 4681200000779399959L ^ var1);
      var10004[2] = aQz<"o">(20212, 4010330001515662890L ^ var1);
      var10004[3] = aQz<"o">(25207, 3258952185931063952L ^ var1);
      var10004[4] = aQz<"o">(5020, 1927507449521378152L ^ var1);
      var10004[5] = aQz<"o">(18097, 6147430056828159565L ^ var1);
      var10004[aQz<"o">(13779, 2648826123930940732L ^ var1)] = aQz<"o">(1113, 710610750283842738L ^ var1);
      var10004[aQz<"o">(32753, 8431670438708870951L ^ var1)] = aQz<"o">(18289, 8354880688968058872L ^ var1);
      this.ASVuR = new cH(this, mr.clS(var10004)).Wu(this.NGzOC, this.IiAXY, this.xaWdH, this.IlDeC);
      this.bvNPi = new ConcurrentLinkedQueue<>();
      this.qmOOk = mT.cpz();
      this.LaROb.Vf(this.oExgz::SZ);
      this.pGiTh.Vf(this.hWgcS::SZ);
      this.GTOqc.Vf(this.hWgcS::SZ);
      this.fsosg.Vf(this.hWgcS::SZ);
      this.dCnGA.Vf(this.hWgcS::SZ);
      this.ASVuR.Vf(this.hWgcS::SZ);
   }

   static {
      Loader.doInit(fu.class);
      _9a119123c9a8e162a81dc5f2c5ec9c0f();
   }

   @Override
   public native void aaj();

   private static native void _9a119123c9a8e162a81dc5f2c5ec9c0f();

   @Override
   public native void YO();
}
