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
      super(gf.aZL(32, false, gh.xwjCw));
      int[] var10004 = new int[10];
      var10004[0] = 84;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 101;
      var10004[4] = 109;
      var10004[5] = 32;
      var10004[6] = 73;
      var10004[7] = 116;
      var10004[8] = 101;
      var10004[9] = 109;
      this.jlVat = new cK(this, mr.clS(var10004)).WM(jc.WnbNG).WN(Items.TOTEM_OF_UNDYING).WT();
      var10004 = new int[10];
      var10004[0] = 84;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 101;
      var10004[4] = 109;
      var10004[5] = 32;
      var10004[6] = 83;
      var10004[7] = 108;
      var10004[8] = 111;
      var10004[9] = 116;
      this.yhrdq = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(" slot");
      this.HJKFq = new ct(
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
      ct var10003 = this.HJKFq;
      var10004 = new int[6];
      var10004[0] = 78;
      var10004[1] = 111;
      var10004[2] = 114;
      var10004[3] = 109;
      var10004[4] = 97;
      var10004[5] = 108;
      this.hyyHb = new cu(var10003, mr.clS(var10004));
      this.GffeC = new cu(
         this.HJKFq,
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
      var10004 = new int[20];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 112;
      var10004[3] = 108;
      var10004[4] = 97;
      var10004[5] = 99;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 67;
      var10004[9] = 117;
      var10004[10] = 114;
      var10004[11] = 114;
      var10004[12] = 101;
      var10004[13] = 110;
      var10004[14] = 116;
      var10004[15] = 32;
      var10004[16] = 73;
      var10004[17] = 116;
      var10004[18] = 101;
      var10004[19] = 109;
      this.VcMsR = new cJ(this, mr.clS(var10004)).WE(false);
      this.BpvnW = new cA(
            this,
            mr.clS(
               new int[]{
                  68,
                  101,
                  108,
                  97,
                  121
               }
            )
         )
         .UG(1.0)
         .UE(0.0)
         .UF(20.0)
         .UI(0.0, 0.0)
         .UH(" ticks");
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
