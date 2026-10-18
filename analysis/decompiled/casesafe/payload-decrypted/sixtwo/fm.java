package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

public class fm extends gg {
   private final cC xGUzz;
   private final cJ HtBNt;
   static double vlFZY;
   private final mT ERRVP;
   private final mT OivbA;
   private BlockPos zPgOp;
   private int EnrbM;
   private int nHFuo;
   private ov wPysa;
   private int vfWoI;
   private boolean gwiUw;
   private int QVPeQ;
   private static long PoXVa;
   private static long[] wJsUx;
   private static Integer[] nGYPn;
   private static Map TspBo;
   private static long[] fLgmv;
   private static Long[] mMfNq;
   private static Map QeCTb;

   private static native void _a79e8a844e8815af838bfc52c5fb090e();

   public fm() {
      long var1 = PoXVa ^ 122297706730619L;
      super(gf.aZL(145, false, gh.xwjCw));
      int[] var10004 = new int[23];
      var10004[0] = 77;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 105;
      var10004[4] = 109;
      var10004[5] = 97;
      var10004[6] = 108;
      var10004[7] = 32;
      var10004[8] = 72;
      var10004[9] = 101;
      var10004[10] = 97;
      var10004[11] = 108;
      var10004[12] = 116;
      var10004[13] = 104;
      var10004[14] = 32;
      var10004[15] = 84;
      var10004[16] = 111;
      var10004[17] = 32;
      var10004[18] = 84;
      var10004[19] = 104;
      var10004[20] = 114;
      var10004[21] = 111;
      var10004[22] = 119;
      this.xGUzz = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(2.0).Vx(20.0).VA(5.0);
      var10004 = new int[14];
      var10004[0] = 73;
      var10004[1] = 103;
      var10004[2] = 110;
      var10004[3] = 111;
      var10004[4] = 114;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 70;
      var10004[8] = 114;
      var10004[9] = 105;
      var10004[10] = 101;
      var10004[11] = 110;
      var10004[12] = 100;
      var10004[13] = 115;
      this.HtBNt = new cJ(this, mr.clS(var10004)).WE(true);
      this.ERRVP = mT.cpz();
      this.OivbA = mT.cpz();
      this.wPysa = ov.cGv(0.0F, 0.0F);
   }

   static {
      Loader.doInit(fm.class);
      _a79e8a844e8815af838bfc52c5fb090e();
   }

   private native void aKr();

   private native void aKv();

   private native BlockPos aKw(EnderPearlEntity var1);

   private native void aKt();

   private native void aKu();

   private native double aKx(BlockPos var1);

   private native float aKy(BlockPos var1);

   private native BlockPos aKz();

   @hG
   public native void aKq(gH$th var1);

   private static native CallSite aKI(Lookup var0, String var1, MethodType var2);

   private native boolean aKs();

   @hG
   public native void aKp(gv var1);

   private static native long aKK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean aKA(List<Vec3d> var1, boolean var2, boolean var3);

   private native Vec3d aKB(Vec3d var1, Vec3d var2);

   private static native MatchException aKF(MatchException var0);

   private static native int aKG(int var0, long var1);

   private static native CallSite aKL(Lookup var0, String var1, MethodType var2);

   private static native long aKJ(int var0, long var1);

   private static native int aKH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
