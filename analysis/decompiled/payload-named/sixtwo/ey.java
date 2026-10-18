package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import java.util.concurrent.atomic.AtomicBoolean;
import native.Loader;
import net.minecraft.network.packet.Packet;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;

public class ey extends gg {
   private final cJ sTmtd;
   private final cJ cQjjl;
   private final cC yIJjF;
   private final cJ GFFOu;
   private final cC mjbAe;
   private final cD nEXgW;
   private final kr qXoKw;
   private final Queue<Packet<?>> BeDJP;
   private final AtomicBoolean FTaWP;
   private Vec3d AOxxs;
   private Vec3d UMfxq;
   private Box kYSPP;
   private float OpYvN;
   private boolean TYnKu;
   private static long rLHZE;
   private static long[] MkRVk;
   private static Integer[] DjTne;
   private static Map SDMAX;

   @hG
   public native void ava(gL$tk var1);

   public ey() {
      long var1 = rLHZE ^ 50420067336684L;
      super(gf.aZL(avj<"v">(7933, 1717121811375002620L ^ var1), false, gh.xgeEn).aZS(false));
      int[] var10004 = new int[avj<"v">(23781, 7168640038364139979L ^ var1)];
      var10004[0] = avj<"v">(5213, 7362325847625210223L ^ var1);
      var10004[1] = avj<"v">(12933, 1477228648867774358L ^ var1);
      var10004[2] = avj<"v">(28006, 6472363360187670635L ^ var1);
      var10004[3] = avj<"v">(24210, 738593970246472630L ^ var1);
      var10004[4] = avj<"v">(28058, 4592597907701063837L ^ var1);
      var10004[5] = avj<"v">(1927, 4565598158180715184L ^ var1);
      var10004[avj<"v">(13771, 7644828527351281888L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[avj<"v">(25650, 7569854168637696280L ^ var1)] = avj<"v">(12432, 3774854922297294212L ^ var1);
      var10004[avj<"v">(15234, 2610937100839597696L ^ var1)] = avj<"v">(3690, 8748927460062135152L ^ var1);
      var10004[avj<"v">(21597, 7963051438269225315L ^ var1)] = avj<"v">(10826, 7824849523239135059L ^ var1);
      var10004[avj<"v">(21233, 4237171774616690654L ^ var1)] = avj<"v">(12432, 3774854922297294212L ^ var1);
      var10004[avj<"v">(22511, 830845391463537350L ^ var1)] = avj<"v">(9779, 6423772755828386567L ^ var1);
      var10004[avj<"v">(5052, 829318612549443233L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[avj<"v">(30870, 8507826461436409242L ^ var1)] = avj<"v">(1927, 4565598158180715184L ^ var1);
      var10004[avj<"v">(9502, 6929794724496025654L ^ var1)] = avj<"v">(3690, 8748927460062135152L ^ var1);
      var10004[avj<"v">(32298, 6385837163943359357L ^ var1)] = avj<"v">(27467, 3834281853924042345L ^ var1);
      var10004[avj<"v">(14593, 2467672450670277717L ^ var1)] = avj<"v">(12933, 1477228648867774358L ^ var1);
      var10004[avj<"v">(31962, 5103801863042855361L ^ var1)] = avj<"v">(28707, 3295731913846324499L ^ var1);
      var10004[avj<"v">(8961, 8489464470705090129L ^ var1)] = avj<"v">(27257, 2070579816219633475L ^ var1);
      this.sTmtd = new cJ(this, mr.clS(var10004)).WE(false);
      this.cQjjl = new cJ(
            this,
            mr.clS(
               new int[]{
                  avj<"v">(20081, 6567558034110923646L ^ var1),
                  avj<"v">(31778, 6165127236712722693L ^ var1),
                  avj<"v">(1927, 4565598158180715184L ^ var1),
                  avj<"v">(28006, 6472363360187670635L ^ var1),
                  avj<"v">(3708, 965686195568280393L ^ var1)
               }
            )
         )
         .WE(false);
      var10004 = new int[avj<"v">(30870, 8507826461436409242L ^ var1)];
      var10004[0] = avj<"v">(12938, 5405166936790712246L ^ var1);
      var10004[1] = avj<"v">(31778, 6165127236712722693L ^ var1);
      var10004[2] = avj<"v">(1927, 4565598158180715184L ^ var1);
      var10004[3] = avj<"v">(28006, 6472363360187670635L ^ var1);
      var10004[4] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[5] = avj<"v">(12432, 3774854922297294212L ^ var1);
      var10004[avj<"v">(13771, 7644828527351281888L ^ var1)] = avj<"v">(12938, 5405166936790712246L ^ var1);
      var10004[avj<"v">(25650, 7569854168637696280L ^ var1)] = avj<"v">(24210, 738593970246472630L ^ var1);
      var10004[avj<"v">(15234, 2610937100839597696L ^ var1)] = avj<"v">(27467, 3834281853924042345L ^ var1);
      var10004[avj<"v">(21597, 7963051438269225315L ^ var1)] = avj<"v">(22627, 2257676400391804256L ^ var1);
      var10004[avj<"v">(21233, 4237171774616690654L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[avj<"v">(22511, 830845391463537350L ^ var1)] = avj<"v">(28707, 3295731913846324499L ^ var1);
      var10004[avj<"v">(5052, 829318612549443233L ^ var1)] = avj<"v">(28006, 6472363360187670635L ^ var1);
      this.yIJjF = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0);
      var10004 = new int[avj<"v">(5052, 829318612549443233L ^ var1)];
      var10004[0] = avj<"v">(21874, 7738463891897604212L ^ var1);
      var10004[1] = avj<"v">(31778, 6165127236712722693L ^ var1);
      var10004[2] = avj<"v">(28707, 3295731913846324499L ^ var1);
      var10004[3] = avj<"v">(3690, 8748927460062135152L ^ var1);
      var10004[4] = avj<"v">(12432, 3774854922297294212L ^ var1);
      var10004[5] = avj<"v">(5213, 7362325847625210223L ^ var1);
      var10004[avj<"v">(13771, 7644828527351281888L ^ var1)] = avj<"v">(12933, 1477228648867774358L ^ var1);
      var10004[avj<"v">(25650, 7569854168637696280L ^ var1)] = avj<"v">(28006, 6472363360187670635L ^ var1);
      var10004[avj<"v">(15234, 2610937100839597696L ^ var1)] = avj<"v">(24210, 738593970246472630L ^ var1);
      var10004[avj<"v">(21597, 7963051438269225315L ^ var1)] = avj<"v">(28058, 4592597907701063837L ^ var1);
      var10004[avj<"v">(21233, 4237171774616690654L ^ var1)] = avj<"v">(1927, 4565598158180715184L ^ var1);
      var10004[avj<"v">(22511, 830845391463537350L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      this.GFFOu = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[avj<"v">(32298, 6385837163943359357L ^ var1)];
      var10004[0] = avj<"v">(5213, 7362325847625210223L ^ var1);
      var10004[1] = avj<"v">(12933, 1477228648867774358L ^ var1);
      var10004[2] = avj<"v">(28006, 6472363360187670635L ^ var1);
      var10004[3] = avj<"v">(24210, 738593970246472630L ^ var1);
      var10004[4] = avj<"v">(28058, 4592597907701063837L ^ var1);
      var10004[5] = avj<"v">(1927, 4565598158180715184L ^ var1);
      var10004[avj<"v">(13771, 7644828527351281888L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[avj<"v">(25650, 7569854168637696280L ^ var1)] = avj<"v">(12432, 3774854922297294212L ^ var1);
      var10004[avj<"v">(15234, 2610937100839597696L ^ var1)] = avj<"v">(12938, 5405166936790712246L ^ var1);
      var10004[avj<"v">(21597, 7963051438269225315L ^ var1)] = avj<"v">(24210, 738593970246472630L ^ var1);
      var10004[avj<"v">(21233, 4237171774616690654L ^ var1)] = avj<"v">(27467, 3834281853924042345L ^ var1);
      var10004[avj<"v">(22511, 830845391463537350L ^ var1)] = avj<"v">(27430, 2682514185923487287L ^ var1);
      var10004[avj<"v">(5052, 829318612549443233L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[avj<"v">(30870, 8507826461436409242L ^ var1)] = avj<"v">(28707, 3295731913846324499L ^ var1);
      var10004[avj<"v">(9502, 6929794724496025654L ^ var1)] = avj<"v">(28006, 6472363360187670635L ^ var1);
      this.mjbAe = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0);
      var10004 = new int[avj<"v">(21233, 4237171774616690654L ^ var1)];
      var10004[0] = avj<"v">(3070, 8853052486766102260L ^ var1);
      var10004[1] = avj<"v">(24210, 738593970246472630L ^ var1);
      var10004[2] = avj<"v">(3256, 8876836236971409828L ^ var1);
      var10004[3] = avj<"v">(27467, 3834281853924042345L ^ var1);
      var10004[4] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[5] = avj<"v">(1927, 4565598158180715184L ^ var1);
      var10004[avj<"v">(13771, 7644828527351281888L ^ var1)] = avj<"v">(12432, 3774854922297294212L ^ var1);
      var10004[avj<"v">(25650, 7569854168637696280L ^ var1)] = avj<"v">(10893, 3015057216746760108L ^ var1);
      var10004[avj<"v">(15234, 2610937100839597696L ^ var1)] = avj<"v">(3708, 965686195568280393L ^ var1);
      var10004[avj<"v">(21597, 7963051438269225315L ^ var1)] = avj<"v">(27257, 2070579816219633475L ^ var1);
      this.nEXgW = new cD(this, mr.clS(var10004)).VO(avj<"v">(23083, 8071351666748872482L ^ var1));
      this.qXoKw = new kr(this, ku.qnXgu);
      this.BeDJP = new ConcurrentLinkedQueue<>();
      this.FTaWP = new AtomicBoolean(false);
      this.AOxxs = Vec3d.ZERO;
      this.UMfxq = Vec3d.ZERO;
      this.kYSPP = null;
      this.mjbAe.Vf(this.GFFOu::WF);
      this.yIJjF.Vf(this.cQjjl::WF);
   }

   static {
      Loader.doInit(ey.class);
      _ff214a0d86f74f9bd03d9354287cf7b9();
   }

   @Override
   public native void aaj();

   private static native MatchException avg(MatchException var0);

   @hG
   public native void auZ(gM var1);

   private native void ave();

   @hG
   public native void avd(go$sX var1);

   private static native int avi(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void avb(gL$tj var1);

   private native void avf(Packet<?> var1);

   @hG
   public native void avc(gH$th var1);

   private static native CallSite avj(Lookup var0, String var1, MethodType var2);

   private static native int avh(int var0, long var1);

   private static native void _ff214a0d86f74f9bd03d9354287cf7b9();

   @Override
   public native void YO();
}
