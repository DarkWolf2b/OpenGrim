package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class fy extends gg {
   private final cK jlVat;
   private final cC yhrdq;
   private final ct HJKFq;
   private final cu hyyHb;
   private final cu GffeC;
   private final cJ VcMsR;
   private final cA BpvnW;
   private final mT hSWnq;
   private static long omtcl;
   private static String[] BkDbz;
   private static String[] TtVtG;
   private static Map Egkrb;
   private static long[] vfJqK;
   private static Integer[] YfgMR;
   private static Map CHWJb;

   public fy() {
      long var1 = omtcl ^ 123396450686666L;
      super(gf.aZL(aRS<"d">(31757, 1375479906094566499L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aRS<"d">(25501, 2157383985454240736L ^ var1)];
      var10004[0] = aRS<"d">(1539, 3868606534033618497L ^ var1);
      var10004[1] = aRS<"d">(12133, 7694877782052904716L ^ var1);
      var10004[2] = aRS<"d">(11118, 602806801704557337L ^ var1);
      var10004[3] = aRS<"d">(22242, 2282284805177992868L ^ var1);
      var10004[4] = aRS<"d">(17943, 2700797770859902581L ^ var1);
      var10004[5] = aRS<"d">(13865, 8735549227940644439L ^ var1);
      var10004[aRS<"d">(30968, 4453274119728089261L ^ var1)] = aRS<"d">(16350, 5279744240771338120L ^ var1);
      var10004[aRS<"d">(20399, 3470271786337533893L ^ var1)] = aRS<"d">(15774, 7711952732090699227L ^ var1);
      var10004[aRS<"d">(21038, 2712438888302862939L ^ var1)] = aRS<"d">(7506, 3629601233923812665L ^ var1);
      var10004[aRS<"d">(5061, 2925619652164232122L ^ var1)] = aRS<"d">(18751, 5483482785155283283L ^ var1);
      this.jlVat = new cK(this, mr.clS(var10004)).WM(jc.WnbNG).WN(Items.TOTEM_OF_UNDYING).WT();
      var10004 = new int[aRS<"d">(24176, 40975575670943234L ^ var1)];
      var10004[0] = aRS<"d">(29626, 7661561172723516393L ^ var1);
      var10004[1] = aRS<"d">(11976, 3398426416377601672L ^ var1);
      var10004[2] = aRS<"d">(15774, 7711952732090699227L ^ var1);
      var10004[3] = aRS<"d">(7506, 3629601233923812665L ^ var1);
      var10004[4] = aRS<"d">(18751, 5483482785155283283L ^ var1);
      var10004[5] = aRS<"d">(13865, 8735549227940644439L ^ var1);
      var10004[aRS<"d">(17430, 4084510170852815943L ^ var1)] = aRS<"d">(7791, 3404516303537253951L ^ var1);
      var10004[aRS<"d">(5829, 4490471728699418291L ^ var1)] = aRS<"d">(5686, 8169606424229357137L ^ var1);
      var10004[aRS<"d">(27700, 2842533268854758479L ^ var1)] = aRS<"d">(11976, 3398426416377601672L ^ var1);
      var10004[aRS<"d">(27791, 6952192439976221920L ^ var1)] = aRS<"d">(15774, 7711952732090699227L ^ var1);
      this.yhrdq = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(aRP<"c">(30291, 162983872851621437L ^ var1));
      this.HJKFq = new ct(
         this,
         mr.clS(
            new int[]{
               aRS<"d">(3194, 5605447248102997046L ^ var1),
               aRS<"d">(11976, 3398426416377601672L ^ var1),
               aRS<"d">(31091, 9188858257879583033L ^ var1),
               aRS<"d">(7506, 3629601233923812665L ^ var1)
            }
         )
      );
      ct var10003 = this.HJKFq;
      var10004 = new int[aRS<"d">(17430, 4084510170852815943L ^ var1)];
      var10004[0] = aRS<"d">(7087, 7376905919090994155L ^ var1);
      var10004[1] = aRS<"d">(11976, 3398426416377601672L ^ var1);
      var10004[2] = aRS<"d">(22106, 3372222392887207451L ^ var1);
      var10004[3] = aRS<"d">(18751, 5483482785155283283L ^ var1);
      var10004[4] = aRS<"d">(5704, 1216678918283699712L ^ var1);
      var10004[5] = aRS<"d">(14440, 6131943511524902939L ^ var1);
      this.hyyHb = new cu(var10003, mr.clS(var10004));
      this.GffeC = new cu(
         this.HJKFq,
         mr.clS(
            new int[]{
               aRS<"d">(13406, 4419638341777851451L ^ var1),
               aRS<"d">(7506, 3629601233923812665L ^ var1),
               aRS<"d">(12644, 8725978607517073671L ^ var1),
               aRS<"d">(5793, 8645409810792425157L ^ var1),
               aRS<"d">(15774, 7711952732090699227L ^ var1)
            }
         )
      );
      var10004 = new int[aRS<"d">(28421, 4115837634278711106L ^ var1)];
      var10004[0] = aRS<"d">(4721, 9152409961465684503L ^ var1);
      var10004[1] = aRS<"d">(7506, 3629601233923812665L ^ var1);
      var10004[2] = aRS<"d">(4405, 2395628305795064140L ^ var1);
      var10004[3] = aRS<"d">(14440, 6131943511524902939L ^ var1);
      var10004[4] = aRS<"d">(2707, 5408842460231154375L ^ var1);
      var10004[5] = aRS<"d">(23105, 7791643777191045651L ^ var1);
      var10004[aRS<"d">(17430, 4084510170852815943L ^ var1)] = aRS<"d">(7506, 3629601233923812665L ^ var1);
      var10004[aRS<"d">(5829, 4490471728699418291L ^ var1)] = aRS<"d">(13865, 8735549227940644439L ^ var1);
      var10004[aRS<"d">(27700, 2842533268854758479L ^ var1)] = aRS<"d">(28291, 4186352622393024243L ^ var1);
      var10004[aRS<"d">(27791, 6952192439976221920L ^ var1)] = aRS<"d">(22056, 2867050179636487744L ^ var1);
      var10004[aRS<"d">(24176, 40975575670943234L ^ var1)] = aRS<"d">(547, 2391540516338184808L ^ var1);
      var10004[aRS<"d">(30514, 4172736570400229190L ^ var1)] = aRS<"d">(547, 2391540516338184808L ^ var1);
      var10004[aRS<"d">(2099, 8960275382353705086L ^ var1)] = aRS<"d">(7506, 3629601233923812665L ^ var1);
      var10004[aRS<"d">(14435, 1505291906752841759L ^ var1)] = aRS<"d">(988, 986607711176766374L ^ var1);
      var10004[aRS<"d">(28623, 5511816077227679671L ^ var1)] = aRS<"d">(15774, 7711952732090699227L ^ var1);
      var10004[aRS<"d">(6504, 1773432852642081067L ^ var1)] = aRS<"d">(13865, 8735549227940644439L ^ var1);
      var10004[aRS<"d">(12618, 7750107027655033130L ^ var1)] = aRS<"d">(22357, 8285847304277026616L ^ var1);
      var10004[aRS<"d">(5251, 7390765711176705266L ^ var1)] = aRS<"d">(15774, 7711952732090699227L ^ var1);
      var10004[aRS<"d">(6534, 1750998378475497959L ^ var1)] = aRS<"d">(7506, 3629601233923812665L ^ var1);
      var10004[aRS<"d">(608, 4695462033713738281L ^ var1)] = aRS<"d">(18751, 5483482785155283283L ^ var1);
      this.VcMsR = new cJ(this, mr.clS(var10004)).WE(false);
      this.BpvnW = new cA(
            this,
            mr.clS(
               new int[]{
                  aRS<"d">(1702, 5137616285382981352L ^ var1),
                  aRS<"d">(7506, 3629601233923812665L ^ var1),
                  aRS<"d">(14440, 6131943511524902939L ^ var1),
                  aRS<"d">(2707, 5408842460231154375L ^ var1),
                  aRS<"d">(31489, 6417790069617675086L ^ var1)
               }
            )
         )
         .UG(1.0)
         .UE(0.0)
         .UF(20.0)
         .UI(0.0, 0.0)
         .UH(aRP<"c">(18038, 5982618830011172377L ^ var1));
      this.hSWnq = mT.cpz();
   }

   static {
      Loader.doInit(fy.class);
      _711a693dca6115e72fb85ef41f7a4485();
   }

   private static native void _711a693dca6115e72fb85ef41f7a4485();

   private static native CallSite aRS(Lookup var0, String var1, MethodType var2);

   private static native MatchException aRL(MatchException var0);

   private static native String aRM(byte[] var0);

   private static native Object aRO(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aRR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aRQ(int var0, long var1);

   private native Item aRK();

   @hG
   public native void aRJ(gH$th var1);

   private static native String aRN(int var0, long var1);

   private static native CallSite aRP(Lookup var0, String var1, MethodType var2);
}
