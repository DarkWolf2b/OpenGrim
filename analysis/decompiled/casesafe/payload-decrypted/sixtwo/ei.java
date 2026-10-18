package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.util.Hand;

public class ei extends gg implements lA {
   private final ct cNIJT;
   private final cu kVyvV;
   private final cu mjyti;
   private final cu bjFxu;
   private final ct BhfJC;
   private final cu JluvD;
   private final cu RrLuA;
   private final cJ VLSja;
   private static long Hbvpn;
   private static long[] rzkkP;
   private static Integer[] gnKgk;
   private static Map QqXlu;

   public ei() {
      long var1 = Hbvpn ^ 13388885539051L;
      super(gf.aZL(38, false, gh.xgeEn));
      int[] var10004 = new int[11];
      var10004[0] = 72;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 32;
      var10004[5] = 84;
      var10004[6] = 111;
      var10004[7] = 32;
      var10004[8] = 85;
      var10004[9] = 115;
      var10004[10] = 101;
      this.cNIJT = new ct(this, mr.clS(var10004));
      ct var10003 = this.cNIJT;
      var10004 = new int[9];
      var10004[0] = 77;
      var10004[1] = 97;
      var10004[2] = 105;
      var10004[3] = 110;
      var10004[4] = 32;
      var10004[5] = 72;
      var10004[6] = 97;
      var10004[7] = 110;
      var10004[8] = 100;
      this.kVyvV = new cu(var10003, mr.clS(var10004));
      var10003 = this.cNIJT;
      var10004 = new int[8];
      var10004[0] = 79;
      var10004[1] = 102;
      var10004[2] = 102;
      var10004[3] = 32;
      var10004[4] = 72;
      var10004[5] = 97;
      var10004[6] = 110;
      var10004[7] = 100;
      this.mjyti = new cu(var10003, mr.clS(var10004));
      this.bjFxu = new cu(
         this.cNIJT,
         mr.clS(
            new int[]{
               66,
               111,
               116,
               104
            }
         )
      );
      var10004 = new int[10];
      var10004[0] = 72;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 32;
      var10004[5] = 83;
      var10004[6] = 119;
      var10004[7] = 105;
      var10004[8] = 110;
      var10004[9] = 103;
      this.BhfJC = new ct(this, mr.clS(var10004));
      var10003 = this.BhfJC;
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 108;
      var10004[2] = 105;
      var10004[3] = 101;
      var10004[4] = 110;
      var10004[5] = 116;
      this.JluvD = new cu(var10003, mr.clS(var10004));
      var10003 = this.BhfJC;
      var10004 = new int[6];
      var10004[0] = 83;
      var10004[1] = 101;
      var10004[2] = 114;
      var10004[3] = 118;
      var10004[4] = 101;
      var10004[5] = 114;
      this.RrLuA = new cu(var10003, mr.clS(var10004));
      var10004 = new int[19];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 87;
      var10004[6] = 104;
      var10004[7] = 101;
      var10004[8] = 110;
      var10004[9] = 32;
      var10004[10] = 67;
      var10004[11] = 114;
      var10004[12] = 111;
      var10004[13] = 117;
      var10004[14] = 99;
      var10004[15] = 104;
      var10004[16] = 105;
      var10004[17] = 110;
      var10004[18] = 103;
      this.VLSja = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ei.class);
      _f25485ee343fb698e3bb919784879d84();
   }

   private static native void _f25485ee343fb698e3bb919784879d84();

   @hG
   public native void asE(gv var1);

   @hG
   public native void asF(gH$th var1);

   private native Hand asH();

   private native boolean asG();

   private native boolean asI(Hand var1);

   private static native CallSite asO(Lookup var0, String var1, MethodType var2);

   private static native int asM(int var0, long var1);

   private static native int asN(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native oz asJ();

   private static native MatchException asL(MatchException var0);

   private native oS asK();
}
