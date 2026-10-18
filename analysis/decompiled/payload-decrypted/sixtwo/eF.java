package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.component.type.AttackRangeComponent;
import net.minecraft.entity.Entity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;

public class eF extends gg {
   private final cK TbGmd;
   private final cA jymCX;
   private final ol mRcox;
   private static long vfMSC;
   private static String feInP;
   private static long[] lSAMc;
   private static Integer[] yVnKv;
   private static Map zIGHB;

   private static native CallSite awT(Lookup var0, String var1, MethodType var2);

   public native cK awL();

   private native AttackRangeComponent awK(ItemStack var1);

   private static native int awR(int var0, long var1);

   @hG
   public native void awH(hw$tv var1);

   @hG
   public native void awF(gY var1);

   public native ol awN();

   @hG
   public native void awE(gH$th var1);

   public native cA awM();

   private static native int awS(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException awP(MatchException var0);

   private static native String awQ(byte[] var0);

   @hG
   public native void awG(gZ$tt var1);

   private native oI awJ();

   private native boolean awI(Entity var1);

   public eF() {
      long var1 = vfMSC ^ 96671845368651L;
      super(gf.aZL(128, false, gh.xwjCw));
      int[] var10004 = new int[13];
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
      this.TbGmd = var10001.WN(var10002);
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
      this.jymCX = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(feInP);
      this.mRcox = new ol(this);
   }

   static {
      Loader.doInit(eF.class);
      _8f9f6c718a455f7122cb8b6addc832cb();
   }

   private static native void _8f9f6c718a455f7122cb8b6addc832cb();
}
