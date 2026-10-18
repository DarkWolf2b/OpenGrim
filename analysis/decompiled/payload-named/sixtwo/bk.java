package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class bk extends ak<cJ> {
   private final gg cpUzX;
   private bh HjHnW;
   protected final rk FDvbN;
   private static long KbsrP;
   private static long[] ZLDda;
   private static Integer[] HlkAB;
   private static Map pwxhd;

   public bk(gg var1, az var2) {
      long var3 = KbsrP ^ 18949911529415L;
      int[] var10003 = new int[Eo<"c">(21192, 4282903424513689245L ^ var3)];
      var10003[0] = Eo<"c">(21000, 7926453418328049244L ^ var3);
      var10003[1] = Eo<"c">(24133, 7979157593232394771L ^ var3);
      var10003[2] = Eo<"c">(9192, 6586786616389023668L ^ var3);
      var10003[3] = Eo<"c">(11146, 7385228998279184344L ^ var3);
      var10003[4] = Eo<"c">(12436, 657618379891057865L ^ var3);
      var10003[5] = Eo<"c">(29828, 8259968644670906581L ^ var3);
      var10003[Eo<"c">(7453, 62661796072098126L ^ var3)] = Eo<"c">(12618, 2024078892948137245L ^ var3);
      super(new cJ(mr.clS(var10003)).WE(true), var2);
      this.FDvbN = new rk(Eo<"c">(2036, 8113822535254840228L ^ var3)).dhs(rj.MBpuQ);
      this.cpUzX = var1;
   }

   static {
      Loader.doInit(bk.class);
      _ecdbab0718f5e953ae4b668ba3bb566a();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native void dY();

   private static native void _ecdbab0718f5e953ae4b668ba3bb566a();

   private static native CallSite Eo(Lookup var0, String var1, MethodType var2);

   private static native int Em(int var0, long var1);

   private static native int En(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException El(MatchException var0);
}
