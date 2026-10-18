package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.block.BlockState;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;

public class fa extends gg {
   private final cD vPwrl;
   private fa$sL uULHD;
   private fa$sK YfDDm;
   private int oEEDi;
   private static String[] irPKw;
   private static long cTrfy;
   private static long[] qJCJb;
   private static Integer[] zsVGN;
   private static Map TOBUA;

   public fa() {
      long var1 = cTrfy ^ 19392193421588L;
      super(gf.aZL(164, false, gh.xwjCw));
      int[] var10004 = new int[14];
      var10004[0] = 65;
      var10004[1] = 99;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 118;
      var10004[5] = 97;
      var10004[6] = 116;
      var10004[7] = 105;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 75;
      var10004[12] = 101;
      var10004[13] = 121;
      this.vPwrl = new cD(this, mr.clS(var10004)).VO(-999);
      this.YfDDm = fa$sK.YbJTa;
   }

   static {
      Loader.doInit(fa.class);
      _58c15a8e35946d7df205876cf3176779();
   }

   private static native void _58c15a8e35946d7df205876cf3176779();

   @Override
   public native void YO();

   public static native String[] aGV();

   private native oz aGw(BlockPos var1);

   private native void aGf();

   private native void aGi();

   private native boolean aGF();

   private native Hand aGG(Item var1);

   private native void aGj();

   private native boolean aGy(BlockPos var1, BlockState var2);

   private static native CallSite aGZ(Lookup var0, String var1, MethodType var2);

   private native void aGg();

   private native boolean aGu(BlockPos var1);

   private native boolean aGC(BlockPos var1);

   private native boolean aGD(BlockPos var1);

   @hG
   public native void aGb(gM var1);

   private native fa$sL aGo(BlockPos var1, Vec3d var2, Vec3d var3);

   private native Hand aGH();

   private native void aGk();

   @hG
   public native void aGe(gH$th var1);

   private native BlockPos aGp(BlockPos var1, Vec3d var2, Vec3d var3, Vec3d var4);

   private native fa$sK aGs(fa$sL var1);

   private native oz aGv(BlockPos var1);

   private native boolean aGB(BlockPos var1);

   @hG
   public native void aGd(gv var1);

   private native fa$sL aGn(ov var1);

   private native boolean aGA(BlockPos var1, BlockState var2);

   private native boolean aGI(ItemStack var1);

   private native Hand aGK();

   private native double aGq(Vec3d var1, Vec3d var2, Vec3d var3);

   private native boolean aGL(ItemStack var1);

   private native boolean aGr(fa$sL var1);

   private native boolean aGE(Item var1);

   private native boolean aGx(BlockPos var1);

   private native Vec3d aGM();

   private native Vec3d aGN(BlockPos var1);

   private native boolean aGO(Vec3d var1);

   private native boolean aGP(Vec3d var1);

   private native boolean aGz(BlockPos var1);

   private native void aGm();

   public static native void aGU(String[] var0);

   private native void aGh();

   private static native MatchException aGW(MatchException var0);

   private native void aGl();

   private native boolean aGt(BlockPos var1);

   @hG
   public native void aGc(gA var1);

   private native boolean aGJ();

   private native void aGQ();

   private static native int aGX(int var0, long var1);

   private static native int aGY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
