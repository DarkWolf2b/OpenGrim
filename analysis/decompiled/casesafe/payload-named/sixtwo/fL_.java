package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.block.BlockState;

public class fL extends gg {
   private final cA CFGfw;
   private final cJ ryfBX;
   private final cA Hykwk;
   private final mT xBzWg;
   private final ol CwHuM;
   private boolean aLWOy;
   private static long nhtSN;
   private static String[] XugXT;
   private static String[] HzpGA;
   private static Map njIli;
   private static long[] zhmCi;
   private static Integer[] nDlqe;
   private static Map SNXwO;

   private static native void _31c3a3d62932965f4ffe30371de80c96();

   public fL() {
      long var1 = nhtSN ^ 101916258574058L;
      super(gf.aZL(aVo<"w">(3145, 3604664507105182030L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aVo<"w">(24296, 4613180601436296166L ^ var1)];
      var10004[0] = aVo<"w">(3807, 769838639698215901L ^ var1);
      var10004[1] = aVo<"w">(31189, 8934703655902344397L ^ var1);
      var10004[2] = aVo<"w">(29814, 3197243197065984352L ^ var1);
      var10004[3] = aVo<"w">(31249, 1600382612411676437L ^ var1);
      var10004[4] = aVo<"w">(19798, 4369703034355630196L ^ var1);
      var10004[5] = aVo<"w">(29814, 3197243197065984352L ^ var1);
      var10004[aVo<"w">(7332, 1920079034142331322L ^ var1)] = aVo<"w">(5282, 3642861419813804419L ^ var1);
      var10004[aVo<"w">(3306, 5005376057543426539L ^ var1)] = aVo<"w">(25902, 7427389095098869768L ^ var1);
      this.CFGfw = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(aVl<"w">(10918, 1764998318819560514L ^ var1));
      var10004 = new int[aVo<"w">(13492, 711129309619861931L ^ var1)];
      var10004[0] = aVo<"w">(4088, 3737720403716440827L ^ var1);
      var10004[1] = aVo<"w">(24673, 4838536000445476213L ^ var1);
      var10004[2] = aVo<"w">(1914, 7708292622029326945L ^ var1);
      var10004[3] = aVo<"w">(3173, 3805443481803751800L ^ var1);
      var10004[4] = aVo<"w">(22753, 5704256576928339448L ^ var1);
      var10004[5] = aVo<"w">(20213, 1989880740544594936L ^ var1);
      var10004[aVo<"w">(26530, 8859264846801857202L ^ var1)] = aVo<"w">(18572, 8883140601464866216L ^ var1);
      var10004[aVo<"w">(8124, 3852117142642430638L ^ var1)] = aVo<"w">(31155, 6945655988980151478L ^ var1);
      var10004[aVo<"w">(17287, 6017598896780431008L ^ var1)] = aVo<"w">(29291, 967118011923824483L ^ var1);
      var10004[aVo<"w">(308, 9114570205007973422L ^ var1)] = aVo<"w">(8764, 8679747338329435957L ^ var1);
      var10004[aVo<"w">(25584, 8467006253959671514L ^ var1)] = aVo<"w">(23312, 3645854001036645910L ^ var1);
      this.ryfBX = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aVo<"w">(3837, 6946970593085162454L ^ var1)];
      var10004[0] = aVo<"w">(16875, 4340750205076458727L ^ var1);
      var10004[1] = aVo<"w">(7046, 8641540861981202060L ^ var1);
      var10004[2] = aVo<"w">(1898, 7386726525671541349L ^ var1);
      var10004[3] = aVo<"w">(31659, 3546626998465590920L ^ var1);
      var10004[4] = aVo<"w">(16965, 1252712764542504784L ^ var1);
      var10004[5] = aVo<"w">(20213, 1989880740544594936L ^ var1);
      var10004[aVo<"w">(26530, 8859264846801857202L ^ var1)] = aVo<"w">(31677, 7912246715274852029L ^ var1);
      var10004[aVo<"w">(8124, 3852117142642430638L ^ var1)] = aVo<"w">(28927, 1717268499420413420L ^ var1);
      var10004[aVo<"w">(17287, 6017598896780431008L ^ var1)] = aVo<"w">(7046, 8641540861981202060L ^ var1);
      var10004[aVo<"w">(9015, 1327519793971047954L ^ var1)] = aVo<"w">(21975, 5724282843078875328L ^ var1);
      var10004[aVo<"w">(16234, 1910097073622266486L ^ var1)] = aVo<"w">(19604, 4039032111275655583L ^ var1);
      var10004[aVo<"w">(5999, 7214953880808168015L ^ var1)] = aVo<"w">(14269, 237215589233343148L ^ var1);
      this.Hykwk = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(aVl<"w">(4321, 1581220340655846916L ^ var1));
      this.xBzWg = mT.cpz();
      this.CwHuM = new ol(this);
      this.aLWOy = true;
   }

   static {
      Loader.doInit(fL.class);
      _31c3a3d62932965f4ffe30371de80c96();
   }

   private static native String aVi(byte[] var0);

   private static native CallSite aVo(Lookup var0, String var1, MethodType var2);

   private static native CallSite aVl(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aVf(gH$th var1);

   private static native Object aVk(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aVm(int var0, long var1);

   private native void aVg(BlockState var1);

   private static native MatchException aVh(MatchException var0);

   private static native int aVn(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aVj(int var0, long var1);

   @Override
   public native void YO();
}
