package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;

public class n extends k {
   private static float lSwBn;
   private static float uXDsi;
   private static float BcwJW;
   private static float hztnT;
   private static float SZWkx;
   private lq Robji = lE.WTzbi.bYM(6.5F);
   private lq rgvHW = lE.WTzbi.bYM(5.5F);
   private int[] gZsWh;
   private final List<int[]> UHScV = new ArrayList<>();
   private mG qvPWt;
   private mG WwPdX;
   private static long XKgcm;

   public n(az var1, String var2, String... var3) {
      this(var1, false);
      this.cX(var2);
      this.cZ(var3);
   }

   public n(az var1, boolean var2) {
      super(var1, var2);
      this.cSEXm = ld.all(5.0F);
      this.mOGYZ = 4.0F;
      this.dUPLX = 12.0F;
      this.qbars = 56.0F;
   }

   static {
      Loader.doInit(n.class);
      _84041c19426e6f21a3b32fa860e8f14d();
   }

   @Override
   protected native void cd(lC var1, float var2, float var3);

   @Override
   protected native float cb();

   public native n da(int[]... var1);

   public native n db(String var1);

   public native n dc(lq var1);

   private static native MatchException di(MatchException var0);

   @Override
   protected native float cc();

   public native n dh(mG var1);

   public native n df(mG var1);

   public native n de(ld var1);

   public native n cZ(String... var1);

   public native n cY(int[] var1);

   public native n cX(String var1);

   public native n dg(mG var1);

   public native n dd(lq var1);

   private static native void _84041c19426e6f21a3b32fa860e8f14d();
}
