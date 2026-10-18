package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ea extends gg {
   private final cC rzTvo;
   private static long xPCiw;
   private static String ENAXX;
   private static long[] ADNhJ;
   private static Integer[] CORiV;
   private static Map VZXHC;

   private static native void _9cc2c0b9f3964686b5ba2b38633269d2();

   public ea() {
      long var1 = xPCiw ^ 49148503248488L;
      super(gf.aZL(57, false, gh.qBzlZ));
      int[] var10004 = new int[13];
      var10004[0] = 68;
      var10004[1] = 101;
      var10004[2] = 115;
      var10004[3] = 116;
      var10004[4] = 114;
      var10004[5] = 111;
      var10004[6] = 121;
      var10004[7] = 32;
      var10004[8] = 68;
      var10004[9] = 101;
      var10004[10] = 108;
      var10004[11] = 97;
      var10004[12] = 121;
      this.rzTvo = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(ENAXX);
   }

   static {
      Loader.doInit(ea.class);
      _9cc2c0b9f3964686b5ba2b38633269d2();
   }

   private static native int arm(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite arn(Lookup var0, String var1, MethodType var2);

   private static native MatchException arj(MatchException var0);

   private static native int arl(int var0, long var1);

   @hG
   public native void ari(gH$th var1);

   private static native String ark(byte[] var0);
}
