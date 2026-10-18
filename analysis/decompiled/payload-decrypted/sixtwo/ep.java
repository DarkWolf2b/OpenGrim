package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ep extends gg {
   private final cC QHFqR;
   private static long SdMAu;
   private static long[] uwsLE;
   private static Integer[] JzJxD;
   private static Map IUUCe;

   public ep() {
      long var1 = SdMAu ^ 102420000849384L;
      super(gf.aZL(113, false, gh.xgeEn));
      int[] var10004 = new int[11];
      var10004[0] = 66;
      var10004[1] = 111;
      var10004[2] = 111;
      var10004[3] = 115;
      var10004[4] = 116;
      var10004[5] = 32;
      var10004[6] = 86;
      var10004[7] = 97;
      var10004[8] = 108;
      var10004[9] = 117;
      var10004[10] = 101;
      this.QHFqR = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(1.5).Vx(3.0).VA(1.5);
   }

   static {
      Loader.doInit(ep.class);
      _a30b6b505e7cd15c6b5a9e05f022e45f();
   }

   public native cC atX();

   private static native CallSite aua(Lookup var0, String var1, MethodType var2);

   private static native int atY(int var0, long var1);

   private static native int atZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _a30b6b505e7cd15c6b5a9e05f022e45f();
}
