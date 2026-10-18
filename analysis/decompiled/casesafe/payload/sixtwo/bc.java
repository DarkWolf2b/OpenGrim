package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class bc extends aj {
   private final int[] fZkgb;
   private final int[] jEyGM;
   private final int[] rHkCQ;
   private final ad UfSoS;
   private final bc$sb[] HukvJ;
   private final rk wGCjB;
   private int gXowZ;
   private static long UIUKy;
   private static String[] CKdwN;
   private static String[] foWfj;
   private static Map egBGR;
   private static long[] ZCGIw;
   private static Integer[] HkqAD;
   private static Map CcEgB;

   public bc() {
      long var1 = UIUKy ^ 29773801021865L;
      super();
      this.fZkgb = mZ.csh(BK<"f">(14155, 7972841490609285186L ^ var1));
      this.jEyGM = mZ.csh(BK<"f">(5930, 3240976191934695456L ^ var1));
      this.rHkCQ = mZ.csh(BK<"f">(2664, 2391454846961489251L ^ var1));
      this.HukvJ = new bc$sb[BN<"k">(25163, 2351946813824113961L ^ var1)];
      this.gXowZ = -1;
      lc var3 = bl.Ex().Ey();
      lq var4 = lE.WTzbi.bYM(9.0F);
      this.bQoPs = 5.0F;
      this.BcpIo = var3.bXH() / 2.25F;
      this.WjISQ = var4.caw() * 2.0F + this.bQoPs * 2.0F;
      float var5 = var3.bXF() + jf.bAH(this.BcpIo, var3.bXH());
      float var6 = var3.bXG() - this.bQoPs * 2.0F;
      this.MCnYt = var5;
      this.pNyTQ = var6;
      this.UfSoS = new ad(lE.WTzbi.bYM(9.0F));
      this.UfSoS.lZ(BK<"f">(27198, 8273861584646665526L ^ var1));
      this.UfSoS.me(BN<"k">(5575, 1035465496260045478L ^ var1));
      this.UfSoS.mg(this::Br);
      this.wGCjB = new rk(BN<"k">(13217, 1426214614803401922L ^ var1), this.WjISQ).dhs(rj.NJlxm);
   }

   static {
      Loader.doInit(bc.class);
      _c3587351bd7b3f25ef6a6c2432b254b1();
   }

   @Override
   public native void dl(double var1, double var3, mA var5);

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native void _c3587351bd7b3f25ef6a6c2432b254b1();

   private static native CallSite BN(Lookup var0, String var1, MethodType var2);

   @Override
   public native boolean eK(char var1);

   public native ad Bv();

   public native rk Bx();

   public native int By();

   private static native int BL(int var0, long var1);

   private static native String BH(byte[] var0);

   private static native CallSite BK(Lookup var0, String var1, MethodType var2);

   private static native MatchException BG(MatchException var0);

   public native int[] Bt();

   public native int[] Bu();

   private static native String BI(int var0, long var1);

   private static native Object BJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native bc$sb[] Bw();

   public native int[] Bs();

   private static native int BM(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void Br();
}
