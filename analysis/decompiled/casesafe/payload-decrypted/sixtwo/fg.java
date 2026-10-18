package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;

public class fg extends gg {
   private final cD vJxZS;
   private final cC bkcAZ;
   private final cJ VEiCg;
   private PlayerEntity jhTSv;
   private static int[] rThNx;
   private static long pUjym;
   private static String[] OHbUD;
   private static String[] sgzRQ;
   private static Map dwOGE;
   private static long[] ITvOw;
   private static Integer[] pvmGK;
   private static Map oOvPJ;

   public fg() {
      long var1 = pUjym ^ 44985935182496L;
      super(gf.aZL(136, false, gh.xwjCw));
      int[] var10004 = new int[12];
      var10004[0] = 76;
      var10004[1] = 111;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 32;
      var10004[5] = 75;
      var10004[6] = 101;
      var10004[7] = 121;
      var10004[8] = 98;
      var10004[9] = 105;
      var10004[10] = 110;
      var10004[11] = 100;
      this.vJxZS = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[12];
      var10004[0] = 83;
      var10004[1] = 101;
      var10004[2] = 108;
      var10004[3] = 101;
      var10004[4] = 99;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 82;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 103;
      var10004[11] = 101;
      this.bkcAZ = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(3.0).Vx(10.0).VA(5.0).Vz(" blocks");
      var10004 = new int[20];
      var10004[0] = 83;
      var10004[1] = 101;
      var10004[2] = 108;
      var10004[3] = 101;
      var10004[4] = 99;
      var10004[5] = 116;
      var10004[6] = 32;
      var10004[7] = 84;
      var10004[8] = 104;
      var10004[9] = 114;
      var10004[10] = 111;
      var10004[11] = 117;
      var10004[12] = 103;
      var10004[13] = 104;
      var10004[14] = 32;
      var10004[15] = 87;
      var10004[16] = 97;
      var10004[17] = 108;
      var10004[18] = 108;
      var10004[19] = 115;
      this.VEiCg = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(fg.class);
      _c2d16b45399409694f8093f4da338ef6();
   }

   public native PlayerEntity aIU();

   @hG
   public native void aIS(gA var1);

   private static native int aJc(int var0, long var1);

   public native boolean aIT(Entity var1);

   private static native String aIY(byte[] var0);

   private static native MatchException aIX(MatchException var0);

   private static native String aIZ(int var0, long var1);

   private static native Object aJa(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aJd(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void aIV(int[] var0);

   private static native CallSite aJe(Lookup var0, String var1, MethodType var2);

   private static native CallSite aJb(Lookup var0, String var1, MethodType var2);

   private static native void _c2d16b45399409694f8093f4da338ef6();

   public static native int[] aIW();
}
