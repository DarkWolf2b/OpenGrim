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
      super(gf.aZL(45, false, gh.xgeEn).aZS(false));
      int[] var10004 = new int[19];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 97;
      var10004[4] = 98;
      var10004[5] = 108;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 111;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 86;
      var10004[12] = 101;
      var10004[13] = 108;
      var10004[14] = 111;
      var10004[15] = 99;
      var10004[16] = 105;
      var10004[17] = 116;
      var10004[18] = 121;
      this.sTmtd = new cJ(this, mr.clS(var10004)).WE(false);
      this.cQjjl = new cJ(
            this,
            mr.clS(
               new int[]{
                  80,
                  117,
                  108,
                  115,
                  101
               }
            )
         )
         .WE(false);
      var10004 = new int[13];
      var10004[0] = 80;
      var10004[1] = 117;
      var10004[2] = 108;
      var10004[3] = 115;
      var10004[4] = 101;
      var10004[5] = 32;
      var10004[6] = 80;
      var10004[7] = 97;
      var10004[8] = 99;
      var10004[9] = 107;
      var10004[10] = 101;
      var10004[11] = 116;
      var10004[12] = 115;
      this.yIJjF = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0);
      var10004 = new int[12];
      var10004[0] = 65;
      var10004[1] = 117;
      var10004[2] = 116;
      var10004[3] = 111;
      var10004[4] = 32;
      var10004[5] = 68;
      var10004[6] = 105;
      var10004[7] = 115;
      var10004[8] = 97;
      var10004[9] = 98;
      var10004[10] = 108;
      var10004[11] = 101;
      this.GFFOu = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[15];
      var10004[0] = 68;
      var10004[1] = 105;
      var10004[2] = 115;
      var10004[3] = 97;
      var10004[4] = 98;
      var10004[5] = 108;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 80;
      var10004[9] = 97;
      var10004[10] = 99;
      var10004[11] = 107;
      var10004[12] = 101;
      var10004[13] = 116;
      var10004[14] = 115;
      this.mjbAe = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(1000.0).VA(17.0);
      var10004 = new int[10];
      var10004[0] = 67;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 108;
      var10004[6] = 32;
      var10004[7] = 75;
      var10004[8] = 101;
      var10004[9] = 121;
      this.nEXgW = new cD(this, mr.clS(var10004)).VO(-999);
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
