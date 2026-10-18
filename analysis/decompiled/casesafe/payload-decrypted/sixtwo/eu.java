package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eu extends gg {
   private final cC OBGxe;
   private final cJ SDRyJ;
   private static long QJqHC;
   private static String yJtAG;
   private static long[] fBBZY;
   private static Integer[] qLIIU;
   private static Map dmOfg;

   public eu() {
      long var1 = QJqHC ^ 52248152359470L;
      super(gf.aZL(40, false, gh.xgeEn));
      int[] var10004 = new int[14];
      var10004[0] = 66;
      var10004[1] = 111;
      var10004[2] = 111;
      var10004[3] = 115;
      var10004[4] = 116;
      var10004[5] = 32;
      var10004[6] = 67;
      var10004[7] = 111;
      var10004[8] = 111;
      var10004[9] = 108;
      var10004[10] = 100;
      var10004[11] = 111;
      var10004[12] = 119;
      var10004[13] = 110;
      this.OBGxe = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(20.0).VA(10.0).Vz(yJtAG);
      var10004 = new int[27];
      var10004[0] = 65;
      var10004[1] = 108;
      var10004[2] = 108;
      var10004[3] = 111;
      var10004[4] = 119;
      var10004[5] = 32;
      var10004[6] = 79;
      var10004[7] = 117;
      var10004[8] = 116;
      var10004[9] = 115;
      var10004[10] = 105;
      var10004[11] = 100;
      var10004[12] = 101;
      var10004[13] = 32;
      var10004[14] = 87;
      var10004[15] = 97;
      var10004[16] = 116;
      var10004[17] = 101;
      var10004[18] = 114;
      var10004[19] = 32;
      var10004[20] = 79;
      var10004[21] = 114;
      var10004[22] = 32;
      var10004[23] = 82;
      var10004[24] = 97;
      var10004[25] = 105;
      var10004[26] = 110;
      this.SDRyJ = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(eu.class);
      _29c2deca7b712c7c8ef896e4f7d76233();
   }

   private static native String auN(byte[] var0);

   private static native CallSite auQ(Lookup var0, String var1, MethodType var2);

   @hG
   public native void auJ(gD var1);

   private static native MatchException auM(MatchException var0);

   private static native int auP(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int auO(int var0, long var1);

   public native cC auK();

   private static native void _29c2deca7b712c7c8ef896e4f7d76233();

   public native cJ auL();
}
