package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ex extends gg {
   private final cJ pyxZq;
   private static long kPBXI;
   private static long[] jBHTq;
   private static Integer[] OqVLr;
   private static Map xLPDH;

   private static native void _bdc1508d9422d0323ece295e1c5c3830();

   public ex() {
      long var1 = kPBXI ^ 61544214833638L;
      super(gf.aZL(51, false, gh.xgeEn));
      int[] var10004 = new int[18];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 108;
      var10004[3] = 101;
      var10004[4] = 97;
      var10004[5] = 115;
      var10004[6] = 101;
      var10004[7] = 32;
      var10004[8] = 79;
      var10004[9] = 110;
      var10004[10] = 32;
      var10004[11] = 70;
      var10004[12] = 111;
      var10004[13] = 114;
      var10004[14] = 119;
      var10004[15] = 97;
      var10004[16] = 114;
      var10004[17] = 100;
      this.pyxZq = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ex.class);
      _bdc1508d9422d0323ece295e1c5c3830();
   }

   private static native int auW(int var0, long var1);

   private static native int auX(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite auY(Lookup var0, String var1, MethodType var2);

   public native cJ auV();
}
