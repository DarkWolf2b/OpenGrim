package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

class ar$rT {
   private final rk djTyU;
   private final rk WfbkF;
   private final rk PYnOc;
   private final rk AtkkH;
   private final mG sBzpH;
   private final int RshAW;
   private boolean HEngx;
   private static long hCewy;
   private static long[] cXHaj;
   private static Integer[] tlgoG;
   private static Map OsgTH;

   private ar$rT(mG var1) {
      long var2 = hCewy ^ 93562682219387L;
      super();
      this.djTyU = new rk(dnc<"l">(4833, 7653749300643428931L ^ var2)).dhs(rj.UPXqT);
      this.WfbkF = new rk(dnc<"l">(31529, 110604911863370632L ^ var2)).dhs(rj.UPXqT);
      this.PYnOc = new rk(dnc<"l">(22178, 1261239963286191617L ^ var2)).dhs(rj.MBpuQ);
      this.AtkkH = new rk(dnc<"l">(14751, 5459724608087544127L ^ var2)).dhs(rj.MBpuQ);
      this.HEngx = true;
      this.sBzpH = var1;
      this.RshAW = var1.coh();
   }

   static {
      Loader.doInit(ar$rT.class);
      _41499fd393f6cea041c30dfbc357fbb5();
   }

   private native rk dmT();

   private native mG dmW();

   private native rk dmU();

   private native rk dmV();

   private native int dmX();

   private native boolean dmY();

   private native void dmZ(boolean var1);

   private static native int dna(int var0, long var1);

   private static native int dnb(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _41499fd393f6cea041c30dfbc357fbb5();

   private native rk dmS();

   private static native CallSite dnc(Lookup var0, String var1, MethodType var2);
}
