package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.util.math.BlockPos;

public class eU extends gg {
   private final cJ uOhjt;
   private final cC CrAYX;
   private BlockPos cEkBs;
   private boolean KALVf;
   private final mW HyfoP;
   private static long QgLWU;
   private static String pyZOh;
   private static long[] oZHIK;
   private static Integer[] rKPMZ;
   private static Map ISkoE;

   public eU() {
      long var1 = QgLWU ^ 93483057880636L;
      super(gf.aZL(114, false, gh.xwjCw));
      int[] var10004 = new int[13];
      var10004[0] = 68;
      var10004[1] = 111;
      var10004[2] = 117;
      var10004[3] = 98;
      var10004[4] = 108;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 65;
      var10004[8] = 110;
      var10004[9] = 99;
      var10004[10] = 104;
      var10004[11] = 111;
      var10004[12] = 114;
      this.uOhjt = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 99;
      var10004[5] = 101;
      this.CrAYX = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(pyZOh);
      this.HyfoP = new mW();
   }

   static {
      Loader.doInit(eU.class);
      _52fd631e8564c1ac6eff89a1e8b2d5a7();
   }

   private static native void _52fd631e8564c1ac6eff89a1e8b2d5a7();

   public native mW aDH();

   public native BlockPos aDF();

   private static native int aDM(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aDN(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aDC(gH$th var1);

   public native cJ aDD();

   private static native MatchException aDJ(MatchException var0);

   private static native int aDL(int var0, long var1);

   private static native String aDK(byte[] var0);

   public native cC aDE();

   public native boolean aDG();

   @Override
   public native void YO();
}
