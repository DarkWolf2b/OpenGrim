package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.math.Box;

public class fj extends gg {
   private final cJ NJTyK;
   private final cC FzLhH;
   private final cJ IMpen;
   private final cG WLOHi;
   private final cG OxgJE;
   private final cJ DRvrZ;
   private PlayerEntity zGyRN;
   private static long WnKso;
   private static String zVHFr;
   private static long[] PRoWq;
   private static Integer[] pUNav;
   private static Map iPtle;

   public fj() {
      long var1 = WnKso ^ 89478313119806L;
      super(gf.aZL(111, false, gh.xwjCw));
      int[] var10004 = new int[12];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 87;
      var10004[8] = 97;
      var10004[9] = 108;
      var10004[10] = 108;
      var10004[11] = 115;
      this.NJTyK = new cJ(this, mr.clS(var10004)).WE(false);
      this.FzLhH = new cC(
            this,
            mr.clS(
               new int[]{
                  70, 79, 86
               }
            )
         )
         .Vy(1.0)
         .Vw(10.0)
         .Vx(360.0)
         .VA(45.0)
         .Vz(zVHFr);
      var10004 = new int[17];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 101;
      var10004[5] = 114;
      var10004[6] = 32;
      var10004[7] = 80;
      var10004[8] = 114;
      var10004[9] = 101;
      var10004[10] = 100;
      var10004[11] = 105;
      var10004[12] = 99;
      var10004[13] = 116;
      var10004[14] = 105;
      var10004[15] = 111;
      var10004[16] = 110;
      this.IMpen = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[13];
      var10004[0] = 79;
      var10004[1] = 117;
      var10004[2] = 116;
      var10004[3] = 108;
      var10004[4] = 105;
      var10004[5] = 110;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 67;
      var10004[9] = 111;
      var10004[10] = 108;
      var10004[11] = 111;
      var10004[12] = 114;
      this.WLOHi = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis()).Uh(false);
      var10004 = new int[10];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 32;
      var10004[5] = 67;
      var10004[6] = 111;
      var10004[7] = 108;
      var10004[8] = 111;
      var10004[9] = 114;
      this.OxgJE = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis().cob(0.5F)).Uh(false);
      var10004 = new int[6];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 108;
      var10004[3] = 108;
      var10004[4] = 101;
      var10004[5] = 100;
      this.DRvrZ = new cJ(this, mr.clS(var10004)).WE(false);
      this.WLOHi.Vf(this.IMpen::WF);
      this.OxgJE.Vf(this.IMpen::WF);
      this.DRvrZ.Vf(this.IMpen::WF);
   }

   static {
      Loader.doInit(fj.class);
      _c3e72fdca4956d5234b74153e63ce371();
   }

   private static native void _c3e72fdca4956d5234b74153e63ce371();

   private static native CallSite aJL(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aJz(go$sX var1);

   @hG
   public native void aJy(gH$th var1);

   private native double aJA(ItemStack var1);

   private native double aJB(ItemStack var1, double var2, double var4);

   private native Box aJC(ItemStack var1, PlayerEntity var2, ov var3);

   private static native MatchException aJH(MatchException var0);

   private static native String aJI(byte[] var0);

   private static native int aJK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aJJ(int var0, long var1);
}
