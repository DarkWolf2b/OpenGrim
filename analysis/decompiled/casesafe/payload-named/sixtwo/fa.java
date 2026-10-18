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
      super(gf.aZL(aGZ<"p">(20642, 7677041556496848044L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aGZ<"p">(29551, 2885604577727330165L ^ var1)];
      var10004[0] = aGZ<"p">(20404, 5099323273276427168L ^ var1);
      var10004[1] = aGZ<"p">(24179, 1446212281327753843L ^ var1);
      var10004[2] = aGZ<"p">(16652, 1434107451931362574L ^ var1);
      var10004[3] = aGZ<"p">(20778, 6166723640130213153L ^ var1);
      var10004[4] = aGZ<"p">(1835, 4761248611713303355L ^ var1);
      var10004[5] = aGZ<"p">(4178, 5922394032835286089L ^ var1);
      var10004[aGZ<"p">(4281, 6754868603780519087L ^ var1)] = aGZ<"p">(1972, 2610816947622986661L ^ var1);
      var10004[aGZ<"p">(13361, 3864169437284069424L ^ var1)] = aGZ<"p">(15794, 1824655543235312032L ^ var1);
      var10004[aGZ<"p">(3243, 2874637042900682920L ^ var1)] = aGZ<"p">(10863, 2281618347910164067L ^ var1);
      var10004[aGZ<"p">(1394, 8326243698300764519L ^ var1)] = aGZ<"p">(28875, 224593468122674392L ^ var1);
      var10004[aGZ<"p">(24742, 7682207036935677100L ^ var1)] = aGZ<"p">(32076, 4082552985317718341L ^ var1);
      var10004[aGZ<"p">(17717, 561858720213467441L ^ var1)] = aGZ<"p">(9157, 8431691236025395154L ^ var1);
      var10004[aGZ<"p">(26057, 1794474267985617350L ^ var1)] = aGZ<"p">(28910, 3635408646466909414L ^ var1);
      var10004[aGZ<"p">(21630, 7374887404265672824L ^ var1)] = aGZ<"p">(14733, 8689961263628647808L ^ var1);
      this.vPwrl = new cD(this, mr.clS(var10004)).VO(aGZ<"p">(4326, 5686032047414695137L ^ var1));
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
