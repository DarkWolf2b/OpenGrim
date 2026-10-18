package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class dN extends gg {
   private final cz mOyJK;
   private static long YAFsA;
   private static long[] ievSW;
   private static Integer[] xzqVc;
   private static Map NTPwK;

   private static native void _086a0a1adaee57dcf039f55a4eea9fca();

   public dN() {
      long var1 = YAFsA ^ 125631937318630L;
      super(gf.aZL(64, false, gh.qBzlZ));
      int[] var10004 = new int[12];
      var10004[0] = 76;
      var10004[1] = 111;
      var10004[2] = 99;
      var10004[3] = 107;
      var10004[4] = 101;
      var10004[5] = 100;
      var10004[6] = 32;
      var10004[7] = 83;
      var10004[8] = 108;
      var10004[9] = 111;
      var10004[10] = 116;
      var10004[11] = 115;
      this.mOyJK = new cz(this, mr.clS(var10004));
   }

   static {
      Loader.doInit(dN.class);
      _086a0a1adaee57dcf039f55a4eea9fca();
   }

   private static native CallSite aor(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aon(gz var1);

   private static native MatchException aoo(MatchException var0);

   private static native int aop(int var0, long var1);

   private static native int aoq(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
