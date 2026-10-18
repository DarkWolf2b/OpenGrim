package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dL extends gg {
   private final cJ lXvtl;
   private static long MvRUw;
   private static long[] xmVgM;
   private static Integer[] OKemK;
   private static Map VTfqp;

   private static native void _05bd19a8cf8c644a334ebd019e2b6fa0();

   public dL() {
      long var1 = MvRUw ^ 7302236552225L;
      super(gf.aZL(56, false, gh.qBzlZ));
      int[] var10004 = new int[17];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 87;
      var10004[6] = 105;
      var10004[7] = 116;
      var10004[8] = 104;
      var10004[9] = 32;
      var10004[10] = 80;
      var10004[11] = 105;
      var10004[12] = 99;
      var10004[13] = 107;
      var10004[14] = 97;
      var10004[15] = 120;
      var10004[16] = 101;
      this.lXvtl = new cJ(this, mr.clS(var10004)).WE(true);
   }

   static {
      Loader.doInit(dL.class);
      _05bd19a8cf8c644a334ebd019e2b6fa0();
   }

   private static native CallSite anu(Lookup var0, String var1, MethodType var2);

   @hG
   public native void anq(hh var1);

   private static native int ant(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int ans(int var0, long var1);

   private static native MatchException anr(MatchException var0);
}
