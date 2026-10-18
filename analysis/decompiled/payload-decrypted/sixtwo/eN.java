package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class eN extends gg {
   private final ct RajOD;
   private final cu Mazxu;
   private final cu tjNtC;
   private final cu EifDU;
   private final cK AhcDq;
   private final cC PxteY;
   private final cA DrFpA;
   private final ol FtkJb;
   private static long XbCWq;
   private static String[] kVMtt;
   private static String[] LJDck;
   private static Map BYElC;
   private static long[] YKYNS;
   private static Integer[] fyuol;
   private static Map fmipS;

   public eN() {
      long var1 = XbCWq ^ 111760760039737L;
      super(gf.aZL(115, false, gh.xwjCw));
      this.RajOD = new ct(
         this,
         mr.clS(
            new int[]{
               77,
               111,
               100,
               101
            }
         )
      );
      ct var10003 = this.RajOD;
      int[] var10004 = new int[6];
      var10004[0] = 66;
      var10004[1] = 114;
      var10004[2] = 101;
      var10004[3] = 97;
      var10004[4] = 99;
      var10004[5] = 104;
      this.Mazxu = new cu(var10003, mr.clS(var10004));
      var10003 = this.RajOD;
      var10004 = new int[10];
      var10004[0] = 87;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 32;
      var10004[5] = 66;
      var10004[6] = 117;
      var10004[7] = 114;
      var10004[8] = 115;
      var10004[9] = 116;
      this.tjNtC = new cu(var10003, mr.clS(var10004));
      this.EifDU = new cu(
         this.RajOD,
         mr.clS(
            new int[]{
               83,
               109,
               97,
               114,
               116
            }
         )
      );
      var10004 = new int[13];
      var10004[0] = 65;
      var10004[1] = 108;
      var10004[2] = 108;
      var10004[3] = 111;
      var10004[4] = 119;
      var10004[5] = 101;
      var10004[6] = 100;
      var10004[7] = 32;
      var10004[8] = 73;
      var10004[9] = 116;
      var10004[10] = 101;
      var10004[11] = 109;
      var10004[12] = 115;
      cK var10001 = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      Item[] var10002 = new Item[12];
      var10002[0] = Items.WOODEN_SWORD;
      var10002[1] = Items.STONE_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.GOLDEN_SWORD;
      var10002[4] = Items.DIAMOND_SWORD;
      var10002[5] = Items.NETHERITE_SWORD;
      var10002[6] = Items.WOODEN_AXE;
      var10002[7] = Items.STONE_AXE;
      var10002[8] = Items.IRON_AXE;
      var10002[9] = Items.GOLDEN_AXE;
      var10002[10] = Items.DIAMOND_AXE;
      var10002[11] = Items.NETHERITE_AXE;
      this.AhcDq = var10001.WN(var10002);
      var10004 = new int[19];
      var10004[0] = 87;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 98;
      var10004[5] = 117;
      var10004[6] = 114;
      var10004[7] = 115;
      var10004[8] = 116;
      var10004[9] = 32;
      var10004[10] = 84;
      var10004[11] = 104;
      var10004[12] = 114;
      var10004[13] = 101;
      var10004[14] = 115;
      var10004[15] = 104;
      var10004[16] = 111;
      var10004[17] = 108;
      var10004[18] = 100;
      this.PxteY = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(2.0).Vx(10.0).VA(3.0).Vz(" blocks");
      var10004 = new int[12];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 117;
      var10004[4] = 114;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.DrFpA = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(" ms");
      this.FtkJb = new ol(this);
      this.PxteY.Vf(this.EifDU::SZ);
   }

   static {
      Loader.doInit(eN.class);
      _a2ae88b8ecae0335771ea0ef54ae6d18();
   }

   private static native void _a2ae88b8ecae0335771ea0ef54ae6d18();

   private static native CallSite aBp(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aBb(gH$th var1);

   private static native CallSite aBs(Lookup var0, String var1, MethodType var2);

   public native cA aBj();

   public native cC aBi();

   public native cu aBf();

   @hG(
      priority = mw.LOW
   )
   public native void aBc(hw$tv var1);

   public native cu aBg();

   private static native int aBr(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object aBo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native ol aBk();

   private static native MatchException aBl(MatchException var0);

   public native ct aBd();

   public native cu aBe();

   public native cK aBh();

   private static native int aBq(int var0, long var1);

   private static native String aBm(byte[] var0);

   private static native String aBn(int var0, long var1);

   @Override
   public native void YO();
}
