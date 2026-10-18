package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;

public class dF extends gg {
   private final ct iqrsx;
   private final cu SMlWc;
   private final cu QJtRA;
   private final cK UBzDb;
   private final ct FjyNN;
   private final cu nZWdG;
   private final cu MIMsQ;
   private final cu WOZWS;
   private int mnITY;
   private static long Qusuy;
   private static long[] gWobV;
   private static Integer[] ffcdF;
   private static Map AlKzG;

   private static native void _d241af5c431a4490cab37e1b7101e237();

   public dF() {
      long var1 = Qusuy ^ 50067858202354L;
      super(gf.aZL(112, false, gh.qBzlZ));
      this.iqrsx = new ct(
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
      ct var10003 = this.iqrsx;
      int[] var10004 = new int[7];
      var10004[0] = 73;
      var10004[1] = 110;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 116;
      this.SMlWc = new cu(var10003, mr.clS(var10004));
      this.QJtRA = new cu(
         this.iqrsx,
         mr.clS(
            new int[]{
               76,
               101,
               103,
               105,
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
      Item[] var10002 = new Item[6];
      var10002[0] = Items.WOODEN_SWORD;
      var10002[1] = Items.STONE_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.GOLDEN_SWORD;
      var10002[4] = Items.DIAMOND_SWORD;
      var10002[5] = Items.NETHERITE_SWORD;
      this.UBzDb = var10001.WN(var10002);
      var10004 = new int[16];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 111;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 32;
      var10004[6] = 84;
      var10004[7] = 111;
      var10004[8] = 32;
      var10004[9] = 82;
      var10004[10] = 101;
      var10004[11] = 112;
      var10004[12] = 108;
      var10004[13] = 97;
      var10004[14] = 99;
      var10004[15] = 101;
      this.FjyNN = new ct(this, mr.clS(var10004));
      var10003 = this.FjyNN;
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 111;
      var10004[2] = 98;
      var10004[3] = 119;
      var10004[4] = 101;
      var10004[5] = 98;
      this.nZWdG = new cu(var10003, mr.clS(var10004));
      var10003 = this.FjyNN;
      var10004 = new int[8];
      var10004[0] = 79;
      var10004[1] = 98;
      var10004[2] = 115;
      var10004[3] = 105;
      var10004[4] = 100;
      var10004[5] = 105;
      var10004[6] = 97;
      var10004[7] = 110;
      this.MIMsQ = new cu(var10003, mr.clS(var10004));
      var10003 = this.FjyNN;
      var10004 = new int[10];
      var10004[0] = 72;
      var10004[1] = 101;
      var10004[2] = 108;
      var10004[3] = 100;
      var10004[4] = 32;
      var10004[5] = 66;
      var10004[6] = 108;
      var10004[7] = 111;
      var10004[8] = 99;
      var10004[9] = 107;
      this.WOZWS = new cu(var10003, mr.clS(var10004));
      this.mnITY = -1;
   }

   static {
      Loader.doInit(dF.class);
      _d241af5c431a4490cab37e1b7101e237();
   }

   private static native CallSite alp(Lookup var0, String var1, MethodType var2);

   @hG
   public native void ald(gO$tm var1);

   @hG
   public native void ale(gH$th var1);

   private native int alf(Predicate<ItemStack> var1);

   private static native int alo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aln(int var0, long var1);

   private static native MatchException alm(MatchException var0);

   @Override
   public native void YO();
}
