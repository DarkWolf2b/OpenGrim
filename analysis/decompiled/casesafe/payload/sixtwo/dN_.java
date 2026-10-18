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
      super(gf.aZL(aor<"j">(30416, 3758694402585481823L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[aor<"j">(30271, 1762742611356308145L ^ var1)];
      var10004[0] = aor<"j">(3636, 7488510358869945007L ^ var1);
      var10004[1] = aor<"j">(17503, 4906186014573256902L ^ var1);
      var10004[2] = aor<"j">(7630, 7169467497406806361L ^ var1);
      var10004[3] = aor<"j">(22058, 9172894274229039803L ^ var1);
      var10004[4] = aor<"j">(16130, 4843664057514433436L ^ var1);
      var10004[5] = aor<"j">(363, 2932041266558739967L ^ var1);
      var10004[aor<"j">(2554, 7703968803337678185L ^ var1)] = aor<"j">(31255, 406180115990830735L ^ var1);
      var10004[aor<"j">(23210, 8026297995786911287L ^ var1)] = aor<"j">(7263, 1647838656765409477L ^ var1);
      var10004[aor<"j">(25504, 2591591313914021695L ^ var1)] = aor<"j">(17424, 2581738466123767936L ^ var1);
      var10004[aor<"j">(13158, 2635526674347792372L ^ var1)] = aor<"j">(8086, 5484824371600407306L ^ var1);
      var10004[aor<"j">(15066, 594581622872514135L ^ var1)] = aor<"j">(23605, 9134600898030434489L ^ var1);
      var10004[aor<"j">(14184, 4946478540019995646L ^ var1)] = aor<"j">(3739, 6472171028696836622L ^ var1);
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
