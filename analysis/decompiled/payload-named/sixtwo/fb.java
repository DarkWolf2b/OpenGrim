package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.block.BlockState;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

public class fb extends gg {
   private final cv tuKUN;
   private final cw uMDXH;
   private final cw WbnlP;
   private final cw PVMYe;
   private final ct bKNZB;
   private final cu jsjtu;
   private final cu SGmOv;
   private final cC YCydL;
   private final oi XPiFl;
   private fb$sM jteVW;
   private fb$sN oGEHp;
   private int vVjjy;
   private int kXSZU;
   private int pnzrf;
   private static long kSQqX;
   private static long[] MfnZZ;
   private static Integer[] spCmO;
   private static Map VbNan;

   public fb() {
      long var1 = kSQqX ^ 33642136610015L;
      super(gf.aZL(aHN<"y">(10390, 7080643733377426665L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aHN<"y">(21820, 2475259421502003540L ^ var1)];
      var10004[0] = aHN<"y">(3760, 6499925738637099753L ^ var1);
      var10004[1] = aHN<"y">(26301, 8447790715832265422L ^ var1);
      var10004[2] = aHN<"y">(11190, 5321745745967294413L ^ var1);
      var10004[3] = aHN<"y">(8229, 3484761175066160238L ^ var1);
      var10004[4] = aHN<"y">(23440, 3491952376060139481L ^ var1);
      var10004[5] = aHN<"y">(7898, 8808465010247078528L ^ var1);
      var10004[aHN<"y">(3616, 6082135001490358910L ^ var1)] = aHN<"y">(2188, 1914688593522230501L ^ var1);
      this.tuKUN = new cv(this, mr.clS(var10004));
      cv var10003 = this.tuKUN;
      var10004 = new int[aHN<"y">(16472, 4816210718112205883L ^ var1)];
      var10004[0] = aHN<"y">(28496, 208349153653089036L ^ var1);
      var10004[1] = aHN<"y">(3645, 4576921535767970380L ^ var1);
      var10004[2] = aHN<"y">(5565, 4364391474280798700L ^ var1);
      var10004[3] = aHN<"y">(20345, 41585107819283203L ^ var1);
      var10004[4] = aHN<"y">(501, 2031587324141047181L ^ var1);
      var10004[5] = aHN<"y">(17584, 3334038301472508123L ^ var1);
      var10004[aHN<"y">(9704, 6631169321308858759L ^ var1)] = aHN<"y">(8811, 1128226016235204121L ^ var1);
      var10004[aHN<"y">(11823, 8526574012995052099L ^ var1)] = aHN<"y">(30516, 2625897791442287437L ^ var1);
      var10004[aHN<"y">(4928, 3302192395322007317L ^ var1)] = aHN<"y">(28155, 6284584363085062541L ^ var1);
      var10004[aHN<"y">(26080, 2741980246302452136L ^ var1)] = aHN<"y">(4252, 5634128106716994808L ^ var1);
      this.uMDXH = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.tuKUN;
      var10004 = new int[aHN<"y">(1351, 4648178537046051111L ^ var1)];
      var10004[0] = aHN<"y">(2580, 4886567556286908017L ^ var1);
      var10004[1] = aHN<"y">(4252, 5634128106716994808L ^ var1);
      var10004[2] = aHN<"y">(30516, 2625897791442287437L ^ var1);
      var10004[3] = aHN<"y">(20345, 41585107819283203L ^ var1);
      var10004[4] = aHN<"y">(8862, 2818991531725958908L ^ var1);
      var10004[5] = aHN<"y">(24518, 5565491536400831410L ^ var1);
      var10004[aHN<"y">(9704, 6631169321308858759L ^ var1)] = aHN<"y">(23844, 126700418330284377L ^ var1);
      var10004[aHN<"y">(11823, 8526574012995052099L ^ var1)] = aHN<"y">(28155, 6284584363085062541L ^ var1);
      var10004[aHN<"y">(4928, 3302192395322007317L ^ var1)] = aHN<"y">(19570, 6926319086508097550L ^ var1);
      var10004[aHN<"y">(26080, 2741980246302452136L ^ var1)] = aHN<"y">(8862, 2818991531725958908L ^ var1);
      var10004[aHN<"y">(3238, 9153039930676052184L ^ var1)] = aHN<"y">(20345, 41585107819283203L ^ var1);
      var10004[aHN<"y">(22883, 7850036838023451952L ^ var1)] = aHN<"y">(30516, 2625897791442287437L ^ var1);
      var10004[aHN<"y">(29516, 7525007646012407579L ^ var1)] = aHN<"y">(1250, 4323101903934032023L ^ var1);
      var10004[aHN<"y">(31511, 7651051418376828785L ^ var1)] = aHN<"y">(21132, 1085056319597305579L ^ var1);
      this.WbnlP = new cw(var10003, mr.clS(var10004)).Tz();
      String[] var10000 = fa.aGV();
      cv var8 = this.tuKUN;
      int[] var10005 = new int[aHN<"y">(18548, 1884314358218703910L ^ var1)];
      var10005[0] = aHN<"y">(2580, 4886567556286908017L ^ var1);
      var10005[1] = aHN<"y">(4252, 5634128106716994808L ^ var1);
      var10005[2] = aHN<"y">(30516, 2625897791442287437L ^ var1);
      var10005[3] = aHN<"y">(20345, 41585107819283203L ^ var1);
      var10005[4] = aHN<"y">(8862, 2818991531725958908L ^ var1);
      var10005[5] = aHN<"y">(24518, 5565491536400831410L ^ var1);
      var10005[aHN<"y">(9704, 6631169321308858759L ^ var1)] = aHN<"y">(2580, 4886567556286908017L ^ var1);
      var10005[aHN<"y">(11823, 8526574012995052099L ^ var1)] = aHN<"y">(15857, 2376762468682183071L ^ var1);
      var10005[aHN<"y">(4928, 3302192395322007317L ^ var1)] = aHN<"y">(6734, 8500772644949923347L ^ var1);
      var10005[aHN<"y">(26080, 2741980246302452136L ^ var1)] = aHN<"y">(21132, 1085056319597305579L ^ var1);
      var10005[aHN<"y">(3238, 9153039930676052184L ^ var1)] = aHN<"y">(8862, 2818991531725958908L ^ var1);
      var10005[aHN<"y">(17858, 3762795323865778613L ^ var1)] = aHN<"y">(20345, 41585107819283203L ^ var1);
      var10005[aHN<"y">(7432, 1936975863390015845L ^ var1)] = aHN<"y">(21132, 1085056319597305579L ^ var1);
      this.PVMYe = new cw(var8, mr.clS(var10005));
      var10005 = new int[aHN<"y">(26080, 2741980246302452136L ^ var1)];
      var10005[0] = aHN<"y">(21471, 1750970683496259465L ^ var1);
      var10005[1] = aHN<"y">(8862, 2818991531725958908L ^ var1);
      var10005[2] = aHN<"y">(21132, 1085056319597305579L ^ var1);
      var10005[3] = aHN<"y">(2807, 592632889988351623L ^ var1);
      var10005[4] = aHN<"y">(15857, 2376762468682183071L ^ var1);
      var10005[5] = aHN<"y">(19570, 6926319086508097550L ^ var1);
      var10005[aHN<"y">(9704, 6631169321308858759L ^ var1)] = aHN<"y">(24518, 5565491536400831410L ^ var1);
      var10005[aHN<"y">(11823, 8526574012995052099L ^ var1)] = aHN<"y">(3152, 6026532336810721284L ^ var1);
      var10005[aHN<"y">(4928, 3302192395322007317L ^ var1)] = aHN<"y">(6734, 8500772644949923347L ^ var1);
      this.bKNZB = new ct(this, mr.clS(var10005));
      String[] var3 = var10000;

      try {
         this.jsjtu = new cu(
               this.bKNZB,
               mr.clS(
                  new int[]{
                     aHN<"y">(18298, 8406871882003335970L ^ var1), aHN<"y">(6734, 8500772644949923347L ^ var1), aHN<"y">(12093, 4023917875046622065L ^ var1)
                  }
               )
            )
            .SY();
         this.SGmOv = new cu(
            this.bKNZB,
            mr.clS(
               new int[]{
                  aHN<"y">(18836, 7978060409109464565L ^ var1),
                  aHN<"y">(4252, 5634128106716994808L ^ var1),
                  aHN<"y">(6734, 8500772644949923347L ^ var1),
                  aHN<"y">(21132, 1085056319597305579L ^ var1)
               }
            )
         );
         this.YCydL = new cC(
               this,
               mr.clS(
                  new int[]{
                     aHN<"y">(934, 5784875316448727030L ^ var1),
                     aHN<"y">(4252, 5634128106716994808L ^ var1),
                     aHN<"y">(6734, 8500772644949923347L ^ var1),
                     aHN<"y">(21132, 1085056319597305579L ^ var1)
                  }
               )
            )
            .Vy(1.0)
            .Vw(1.0)
            .Vx(9.0)
            .VA(1.0);
         this.XPiFl = new oi();
         this.oGEHp = fb$sN.OUxZP;
         this.kXSZU = -1;
         this.pnzrf = -1;
         this.YCydL.Vf(this.SGmOv::SZ);
         if (var3 != null) {
            iS.bwK("eBzAub");
         }
      } catch (MatchException var4) {
         throw aHK(var4);
      }
   }

   static {
      Loader.doInit(fb.class);
      _df5a3fa5a2cf8ba0758086f80f849087();
   }

   private static native void _df5a3fa5a2cf8ba0758086f80f849087();

   @Override
   public native void YO();

   @hG
   public native void aHa(gM var1);

   private native fb$sM aHj(float var1);

   private native fb$sN aHm(fb$sM var1);

   private native void aHn();

   private native boolean aHo();

   private native oz aHp(BlockPos var1);

   private native boolean aHq(BlockPos var1);

   private native void aHt();

   @hG
   public native void aHb(gv var1);

   private native Hand aHx(Item var1);

   private native Vec3d aHA();

   private native void aHk(fb$sM var1, ItemStack var2);

   private native int aHC(ItemStack var1);

   private native boolean aHs(BlockPos var1);

   private native boolean aHz(ItemStack var1);

   private native int aHD();

   private static native MatchException aHK(MatchException var0);

   private static native CallSite aHN(Lookup var0, String var1, MethodType var2);

   private native boolean aHl(fb$sM var1);

   private native Hand aHy();

   private native boolean aHF();

   @hG
   public native void aHd(gE var1);

   private native boolean aHr(BlockPos var1, BlockState var2);

   private native void aHh();

   @hG
   public native void aHc(gH$th var1);

   private native void aHg();

   private native boolean aHv(Item var1);

   private native boolean aHw();

   private native boolean aHu(BlockPos var1, Item var2);

   private native boolean aHB(Vec3d var1);

   private native void aHE();

   private native void aHG();

   private native void aHf();

   private native void aHe();

   private native void aHi();

   private static native int aHL(int var0, long var1);

   private static native int aHM(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aHH();
}
