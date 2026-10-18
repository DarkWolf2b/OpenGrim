package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class eZ extends gg {
   private final cK IlOSr;
   private final cJ lBfId;
   private final cJ XxhAs;
   private final cJ wTnCk;
   private final cJ ZKrlo;
   private final cJ IwDsS;
   private final cC iugJi;
   private boolean Cetgu;
   private static long GGpPC;
   private static String AMrtH;
   private static long[] nLhLG;
   private static Integer[] EleIt;
   private static Map ogUmi;

   public eZ() {
      long var1 = GGpPC ^ 14793834209389L;
      super(gf.aZL(30, false, gh.xwjCw));
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
      this.IlOSr = new cK(this, mr.clS(var10004)).WM(jc.WnbNG).WN(Items.TOTEM_OF_UNDYING).WT();
      var10004 = new int[21];
      var10004[0] = 68;
      var10004[1] = 111;
      var10004[2] = 117;
      var10004[3] = 98;
      var10004[4] = 108;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 72;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 100;
      var10004[11] = 32;
      var10004[12] = 65;
      var10004[13] = 102;
      var10004[14] = 116;
      var10004[15] = 101;
      var10004[16] = 114;
      var10004[17] = 32;
      var10004[18] = 80;
      var10004[19] = 111;
      var10004[20] = 112;
      this.lBfId = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[15];
      var10004[0] = 67;
      var10004[1] = 114;
      var10004[2] = 121;
      var10004[3] = 115;
      var10004[4] = 116;
      var10004[5] = 97;
      var10004[6] = 108;
      var10004[7] = 32;
      var10004[8] = 80;
      var10004[9] = 114;
      var10004[10] = 101;
      var10004[11] = 100;
      var10004[12] = 105;
      var10004[13] = 99;
      var10004[14] = 116;
      this.XxhAs = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[13];
      var10004[0] = 83;
      var10004[1] = 119;
      var10004[2] = 111;
      var10004[3] = 114;
      var10004[4] = 100;
      var10004[5] = 32;
      var10004[6] = 80;
      var10004[7] = 114;
      var10004[8] = 101;
      var10004[9] = 100;
      var10004[10] = 105;
      var10004[11] = 99;
      var10004[12] = 116;
      this.wTnCk = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[18];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 101;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 32;
      var10004[6] = 80;
      var10004[7] = 108;
      var10004[8] = 97;
      var10004[9] = 121;
      var10004[10] = 101;
      var10004[11] = 114;
      var10004[12] = 115;
      var10004[13] = 32;
      var10004[14] = 76;
      var10004[15] = 111;
      var10004[16] = 111;
      var10004[17] = 107;
      this.ZKrlo = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[18];
      var10004[0] = 84;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 101;
      var10004[4] = 109;
      var10004[5] = 32;
      var10004[6] = 79;
      var10004[7] = 110;
      var10004[8] = 32;
      var10004[9] = 73;
      var10004[10] = 110;
      var10004[11] = 118;
      var10004[12] = 101;
      var10004[13] = 110;
      var10004[14] = 116;
      var10004[15] = 111;
      var10004[16] = 114;
      var10004[17] = 121;
      this.IwDsS = new cJ(this, mr.clS(var10004)).WE(false);
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
      this.iugJi = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz(AMrtH);
   }

   static {
      Loader.doInit(eZ.class);
      _2b2fa1a0673f738aaf11f2543d15f4ac();
   }

   private static native void _2b2fa1a0673f738aaf11f2543d15f4ac();

   private native Item aFM();

   private native void aFP();

   private native boolean aFQ(PlayerEntity var1);

   private static native MatchException aFW(MatchException var0);

   private static native String aFX(byte[] var0);

   private native void aFO();

   private static native CallSite aGa(Lookup var0, String var1, MethodType var2);

   private static native int aFY(int var0, long var1);

   @hG
   public native void aFN(gL$tk var1);

   private native boolean aFR(EndCrystalEntity var1);

   @hG
   public native void aFL(gH$th var1);

   private static native int aFZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
