package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;

public class eT extends gg {
   private final cC JIjdU;
   private final ct wSXQh;
   private final cu uAaOS;
   private final cu mRyFn;
   private final cC YtRvz;
   private static long cHXms;
   private static String QSxPs;
   private static long[] nzopz;
   private static Integer[] NCEJm;
   private static Map AISwg;

   public eT() {
      long var1 = cHXms ^ 1157860442311L;
      super(gf.aZL(156, false, gh.xwjCw));
      int[] var10004 = new int[17];
      var10004[0] = 77;
      var10004[1] = 105;
      var10004[2] = 110;
      var10004[3] = 32;
      var10004[4] = 70;
      var10004[5] = 97;
      var10004[6] = 108;
      var10004[7] = 108;
      var10004[8] = 32;
      var10004[9] = 68;
      var10004[10] = 105;
      var10004[11] = 115;
      var10004[12] = 116;
      var10004[13] = 97;
      var10004[14] = 110;
      var10004[15] = 99;
      var10004[16] = 101;
      this.JIjdU = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(QSxPs);
      var10004 = new int[10];
      var10004[0] = 67;
      var10004[1] = 108;
      var10004[2] = 105;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 32;
      var10004[6] = 77;
      var10004[7] = 111;
      var10004[8] = 100;
      var10004[9] = 101;
      this.wSXQh = new ct(this, mr.clS(var10004));
      ct var10003 = this.wSXQh;
      var10004 = new int[7];
      var10004[0] = 86;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 105;
      var10004[4] = 108;
      var10004[5] = 108;
      var10004[6] = 97;
      this.uAaOS = new cu(var10003, mr.clS(var10004));
      var10003 = this.wSXQh;
      var10004 = new int[7];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 97;
      var10004[3] = 116;
      var10004[4] = 97;
      var10004[5] = 110;
      var10004[6] = 116;
      this.mRyFn = new cu(var10003, mr.clS(var10004));
      var10004 = new int[12];
      var10004[0] = 72;
      var10004[1] = 105;
      var10004[2] = 116;
      var10004[3] = 32;
      var10004[4] = 80;
      var10004[5] = 101;
      var10004[6] = 114;
      var10004[7] = 32;
      var10004[8] = 84;
      var10004[9] = 105;
      var10004[10] = 99;
      var10004[11] = 107;
      this.YtRvz = new cC(this, mr.clS(var10004)).VA(10.0).Vw(1.0).Vx(50.0).Vy(1.0);
      this.YtRvz.Vf(this.mRyFn::SZ);
   }

   static {
      Loader.doInit(eT.class);
      _250bbcb8ea6c376711219c4c5a94a71d();
   }

   private static native void _250bbcb8ea6c376711219c4c5a94a71d();

   private static native CallSite aDB(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aDu(gH$th var1);

   private native boolean aDv(PlayerEntity var1);

   private static native int aDz(int var0, long var1);

   private static native String aDy(byte[] var0);

   private static native MatchException aDx(MatchException var0);

   private static native int aDA(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native boolean aDw(PlayerEntity var1);
}
