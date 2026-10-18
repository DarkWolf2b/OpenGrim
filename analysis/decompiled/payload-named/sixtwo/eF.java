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
      super(gf.aZL(awT<"m">(24691, 2917710592018950562L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[awT<"m">(19632, 8355447474421532017L ^ var1)];
      var10004[0] = awT<"m">(10745, 2944657136537100336L ^ var1);
      var10004[1] = awT<"m">(25380, 2163997136195300090L ^ var1);
      var10004[2] = awT<"m">(4374, 6130706062798117075L ^ var1);
      var10004[3] = awT<"m">(6138, 7360643205992472119L ^ var1);
      var10004[4] = awT<"m">(22507, 1048504528444399139L ^ var1);
      var10004[5] = awT<"m">(7466, 7505434852489155837L ^ var1);
      var10004[awT<"m">(2045, 1925099714734509615L ^ var1)] = awT<"m">(17534, 5085494761993473457L ^ var1);
      var10004[awT<"m">(27314, 9168246208149922681L ^ var1)] = awT<"m">(2692, 4633845846716203883L ^ var1);
      var10004[awT<"m">(430, 4008025412517316677L ^ var1)] = awT<"m">(29954, 1796954747553856728L ^ var1);
      var10004[awT<"m">(18703, 7571909051698479307L ^ var1)] = awT<"m">(2880, 7539676232905048716L ^ var1);
      var10004[awT<"m">(24342, 4945207083467970296L ^ var1)] = awT<"m">(29421, 8706139151042362116L ^ var1);
      var10004[awT<"m">(6244, 1775582425739612583L ^ var1)] = awT<"m">(24747, 6532781985692461432L ^ var1);
      var10004[awT<"m">(16364, 6198877355054495278L ^ var1)] = awT<"m">(23941, 4121505169985344597L ^ var1);
      cK var10001 = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      Item[] var10002 = new Item[awT<"m">(11148, 5118553572773454411L ^ var1)];
      var10002[0] = Items.WOODEN_SWORD;
      var10002[1] = Items.STONE_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.GOLDEN_SWORD;
      var10002[4] = Items.DIAMOND_SWORD;
      var10002[5] = Items.NETHERITE_SWORD;
      var10002[awT<"m">(2626, 446757464132010892L ^ var1)] = Items.WOODEN_AXE;
      var10002[awT<"m">(2219, 1232909654466249027L ^ var1)] = Items.STONE_AXE;
      var10002[awT<"m">(16006, 1064790677840557904L ^ var1)] = Items.IRON_AXE;
      var10002[awT<"m">(27602, 4123786921813090825L ^ var1)] = Items.GOLDEN_AXE;
      var10002[awT<"m">(8559, 8678736220921424047L ^ var1)] = Items.DIAMOND_AXE;
      var10002[awT<"m">(13197, 8181650599249934933L ^ var1)] = Items.NETHERITE_AXE;
      this.TbGmd = var10001.WN(var10002);
      var10004 = new int[awT<"m">(11148, 5118553572773454411L ^ var1)];
      var10004[0] = awT<"m">(12250, 1022040883774973445L ^ var1);
      var10004[1] = awT<"m">(29421, 8706139151042362116L ^ var1);
      var10004[2] = awT<"m">(13701, 3954217918034476143L ^ var1);
      var10004[3] = awT<"m">(2355, 8511568395520262375L ^ var1);
      var10004[4] = awT<"m">(22782, 833822543824097579L ^ var1);
      var10004[5] = awT<"m">(11298, 3369710937613886974L ^ var1);
      var10004[awT<"m">(2626, 446757464132010892L ^ var1)] = awT<"m">(1696, 8256731874809335673L ^ var1);
      var10004[awT<"m">(2219, 1232909654466249027L ^ var1)] = awT<"m">(4486, 843396673983600731L ^ var1);
      var10004[awT<"m">(16006, 1064790677840557904L ^ var1)] = awT<"m">(29421, 8706139151042362116L ^ var1);
      var10004[awT<"m">(27602, 4123786921813090825L ^ var1)] = awT<"m">(4374, 6130706062798117075L ^ var1);
      var10004[awT<"m">(8559, 8678736220921424047L ^ var1)] = awT<"m">(19741, 6502645703400391899L ^ var1);
      var10004[awT<"m">(13197, 8181650599249934933L ^ var1)] = awT<"m">(19234, 3328622488175411944L ^ var1);
      this.jymCX = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(feInP);
      this.mRcox = new ol(this);
   }

   static {
      Loader.doInit(eF.class);
      _8f9f6c718a455f7122cb8b6addc832cb();
   }

   private static native void _8f9f6c718a455f7122cb8b6addc832cb();
}
