package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fz extends gg {
   private final cC ZGNVq;
   private final cJ EiuwG;
   private final cJ QrNyB;
   private boolean PnAIn;
   private boolean uYazo;
   private boolean WdogO;
   private final mW rByTO;
   private static long KZLPf;
   private static String ddesD;
   private static long[] likHN;
   private static Integer[] CIryL;
   private static Map euEJd;

   private static native void _5f4ceb95140d8bab50cc0ded800b2db7();

   public fz() {
      long var1 = KZLPf ^ 100244009992870L;
      super(gf.aZL(23, false, gh.xwjCw));
      int[] var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 104;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 99;
      var10004[5] = 101;
      this.ZGNVq = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(ddesD);
      var10004 = new int[14];
      var10004[0] = 67;
      var10004[1] = 97;
      var10004[2] = 110;
      var10004[3] = 99;
      var10004[4] = 101;
      var10004[5] = 108;
      var10004[6] = 32;
      var10004[7] = 73;
      var10004[8] = 110;
      var10004[9] = 32;
      var10004[10] = 70;
      var10004[11] = 105;
      var10004[12] = 114;
      var10004[13] = 101;
      this.EiuwG = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[17];
      var10004[0] = 79;
      var10004[1] = 110;
      var10004[2] = 108;
      var10004[3] = 121;
      var10004[4] = 32;
      var10004[5] = 70;
      var10004[6] = 114;
      var10004[7] = 111;
      var10004[8] = 109;
      var10004[9] = 32;
      var10004[10] = 80;
      var10004[11] = 108;
      var10004[12] = 97;
      var10004[13] = 121;
      var10004[14] = 101;
      var10004[15] = 114;
      var10004[16] = 115;
      this.QrNyB = new cJ(this, mr.clS(var10004)).WE(true);
      this.rByTO = new mW();
   }

   static {
      Loader.doInit(fz.class);
      _5f4ceb95140d8bab50cc0ded800b2db7();
   }

   private static native String aRW(byte[] var0);

   @hG
   public native void aRT(gL$tk var1);

   private static native int aRX(int var0, long var1);

   private static native MatchException aRV(MatchException var0);

   private static native CallSite aRZ(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aRU(hc var1);

   private static native int aRY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native void YO();
}
