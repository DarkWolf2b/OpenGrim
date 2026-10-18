package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ek extends gg {
   private final cJ FjUNy;
   private static long LqclE;
   private static long[] BJUBR;
   private static Integer[] Drksd;
   private static Map DaQXB;

   private static native void _9c9b6f0fd399ea825680701554b84b00();

   public ek() {
      long var1 = LqclE ^ 82902571671683L;
      super(gf.aZL(47, false, gh.xgeEn));
      int[] var10004 = new int[12];
      var10004[0] = 66;
      var10004[1] = 108;
      var10004[2] = 111;
      var10004[3] = 99;
      var10004[4] = 107;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 108;
      var10004[8] = 105;
      var10004[9] = 99;
      var10004[10] = 107;
      var10004[11] = 115;
      this.FjUNy = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ek.class);
      _9c9b6f0fd399ea825680701554b84b00();
   }

   @hG
   public native void asT(gH$th var1);

   @hG
   public native void asU(gB var1);

   private static native int asZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int asY(int var0, long var1);

   private static native MatchException asX(MatchException var0);

   private static native CallSite ata(Lookup var0, String var1, MethodType var2);

   public native boolean asV();
}
