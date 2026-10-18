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
      super(gf.aZL(163, false, gh.xwjCw));
      int[] var10004 = new int[7];
      var10004[0] = 65;
      var10004[1] = 99;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 111;
      var10004[5] = 110;
      var10004[6] = 115;
      this.tuKUN = new cv(this, mr.clS(var10004));
      cv var10003 = this.tuKUN;
      var10004 = new int[10];
      var10004[0] = 80;
      var10004[1] = 108;
      var10004[2] = 97;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 32;
      var10004[6] = 82;
      var10004[7] = 97;
      var10004[8] = 105;
      var10004[9] = 108;
      this.uMDXH = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.tuKUN;
      var10004 = new int[14];
      var10004[0] = 80;
      var10004[1] = 108;
      var10004[2] = 97;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 32;
      var10004[6] = 77;
      var10004[7] = 105;
      var10004[8] = 110;
      var10004[9] = 101;
      var10004[10] = 99;
      var10004[11] = 97;
      var10004[12] = 114;
      var10004[13] = 116;
      this.WbnlP = new cw(var10003, mr.clS(var10004)).Tz();
      String[] var10000 = fa.aGV();
      cv var8 = this.tuKUN;
      int[] var10005 = new int[13];
      var10005[0] = 80;
      var10005[1] = 108;
      var10005[2] = 97;
      var10005[3] = 99;
      var10005[4] = 101;
      var10005[5] = 32;
      var10005[6] = 80;
      var10005[7] = 114;
      var10005[8] = 111;
      var10005[9] = 116;
      var10005[10] = 101;
      var10005[11] = 99;
      var10005[12] = 116;
      this.PVMYe = new cw(var8, mr.clS(var10005));
      var10005 = new int[9];
      var10005[0] = 82;
      var10005[1] = 101;
      var10005[2] = 116;
      var10005[3] = 117;
      var10005[4] = 114;
      var10005[5] = 110;
      var10005[6] = 32;
      var10005[7] = 84;
      var10005[8] = 111;
      this.bKNZB = new ct(this, mr.clS(var10005));
      String[] var3 = var10000;

      try {
         this.jsjtu = new cu(
               this.bKNZB,
               mr.clS(
                  new int[]{
                     66, 111, 119
                  }
               )
            )
            .SY();
         this.SGmOv = new cu(
            this.bKNZB,
            mr.clS(
               new int[]{
                  83,
                  108,
                  111,
                  116
               }
            )
         );
         this.YCydL = new cC(
               this,
               mr.clS(
                  new int[]{
                     83,
                     108,
                     111,
                     116
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
