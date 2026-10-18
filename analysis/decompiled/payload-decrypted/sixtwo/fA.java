package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fA extends gg {
   private final cA jKuHD;
   private final cJ Lblbv;
   private final cJ gaHGm;
   private final cz BMRFS;
   private final mT EnpZA;
   private static long pJNbd;
   private static String NSrLe;
   private static long[] cCwdY;
   private static Integer[] npLQh;
   private static Map HGYdz;

   private static native int aSd(int var0, long var1);

   private static native String aSc(byte[] var0);

   private static native MatchException aSb(MatchException var0);

   private static native CallSite aSf(Lookup var0, String var1, MethodType var2);

   private static native int aSe(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aSa(gH$th var1);

   public fA() {
      long var1 = pJNbd ^ 95316450423909L;
      super(gf.aZL(7, false, gh.xwjCw));
      this.jKuHD = new cA(
            this,
            mr.clS(
               new int[]{
                  68,
                  101,
                  108,
                  97,
                  121
               }
            )
         )
         .UG(5.0)
         .UE(0.0)
         .UF(1000.0)
         .UI(0.0, 50.0)
         .UH(NSrLe);
      this.Lblbv = new cJ(
            this,
            mr.clS(
               new int[]{
                  72,
                  111,
                  118,
                  101,
                  114
               }
            )
         )
         .WE(false);
      int[] var10004 = new int[15];
      var10004[0] = 82;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 100;
      var10004[4] = 111;
      var10004[5] = 109;
      var10004[6] = 105;
      var10004[7] = 122;
      var10004[8] = 101;
      var10004[9] = 32;
      var10004[10] = 83;
      var10004[11] = 108;
      var10004[12] = 111;
      var10004[13] = 116;
      var10004[14] = 115;
      this.gaHGm = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[15];
      var10004[0] = 83;
      var10004[1] = 108;
      var10004[2] = 111;
      var10004[3] = 116;
      var10004[4] = 115;
      var10004[5] = 32;
      var10004[6] = 84;
      var10004[7] = 111;
      var10004[8] = 32;
      var10004[9] = 82;
      var10004[10] = 101;
      var10004[11] = 102;
      var10004[12] = 105;
      var10004[13] = 108;
      var10004[14] = 108;
      cz var10001 = new cz(this, mr.clS(var10004));
      int[] var10002 = new int[9];
      var10002[0] = 0;
      var10002[1] = 1;
      var10002[2] = 2;
      var10002[3] = 3;
      var10002[4] = 4;
      var10002[5] = 5;
      var10002[6] = 6;
      var10002[7] = 7;
      var10002[8] = 8;
      this.BMRFS = var10001.Uw(var10002);
      this.EnpZA = mT.cpz();
   }

   static {
      Loader.doInit(fA.class);
      _55aef275d55a37c987ad6b6b0cab4a38();
   }

   private static native void _55aef275d55a37c987ad6b6b0cab4a38();
}
